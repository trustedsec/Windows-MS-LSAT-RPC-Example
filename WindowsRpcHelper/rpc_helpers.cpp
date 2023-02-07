#include "pch.h"
#include <rpc.h>
#include "rpc_helpers.h"

#define HIDWORD(i) (DWORD)(((ULONG64)i >> 32) & 0xffffffff)
#define LODWORD(i) (DWORD)((ULONG64)i & 0xffffffff)

BOOL alloc_string_sprintfW(PWSTR* outBuffer, PCWSTR format, ...)
{
	BOOL status = FALSE;
	int varBuf;
	va_list args;
	va_start(args, format);
	varBuf = _vscwprintf(format, args);
	if (varBuf > 0)
	{
		varBuf++;
		if (*outBuffer = (PWSTR)LocalAlloc(LPTR, varBuf * sizeof(wchar_t)))
		{
			varBuf = vswprintf_s(*outBuffer, varBuf, format, args);
			if (varBuf > 0)
				status = TRUE;
			else *outBuffer = (PWSTR)LocalFree(outBuffer);
		}
	}
	return status;
}

BOOL alloc_string_sprintfA(PSTR* outBuffer, PCSTR format, ...)
{
	BOOL status = FALSE;
	int varBuf;
	va_list args;
	va_start(args, format);
	varBuf = _vscprintf(format, args);
	if (varBuf > 0)
	{
		varBuf++;
		if (*outBuffer = (PSTR)LocalAlloc(LPTR, varBuf * sizeof(char)))
		{
			varBuf = vsprintf_s(*outBuffer, varBuf, format, args);
			if (varBuf > 0)
				status = TRUE;
			else *outBuffer = (PSTR)LocalFree(outBuffer);
		}
	}
	return status;
}

DWORD intstrlen(const char* s, BOOL u)
{
	DWORD i = 0;
	if (u)
	{
		while (s[i] || s[i + 1])
		{
			i++;
		}
		return i + i % 2;
	}
	else
		while (s[i])
		{
			i++;
		}
	return i;
}

void make_unicode_str(PUNICODE_STRING ustr, const wchar_t* string)
{

	ustr->Buffer = (wchar_t*)string;
	ustr->Length = intstrlen((const char*)string, TRUE);
	ustr->MaximumLength = ustr->Length + 2;

}

BOOL rpc_deleteBinding(RPC_BINDING_HANDLE* hBinding)
{
	BOOL status = FALSE;
	if (status = (RpcBindingFree(hBinding) == RPC_S_OK))
		*hBinding = NULL;
	return status;
}

BOOL rpc_createBinding(BOOL use_rpc_auth, LPCWSTR uuid, LPCWSTR ProtSeq, LPCWSTR NetworkAddr, LPCWSTR Endpoint, LPCWSTR Service, BOOL addServiceToNetworkAddr, DWORD AuthnSvc, RPC_AUTH_IDENTITY_HANDLE hAuth, DWORD ImpersonationType, RPC_BINDING_HANDLE* hBinding, void (RPC_ENTRY* RpcSecurityCallback)(void*))
{
	BOOL status = FALSE;
	RPC_STATUS rpcStatus;
	RPC_WSTR StringBinding = NULL;
	RPC_SECURITY_QOS SecurityQOS = { RPC_C_SECURITY_QOS_VERSION, RPC_C_QOS_CAPABILITIES_MUTUAL_AUTH | (ImpersonationType == RPC_C_IMP_LEVEL_DELEGATE) ? RPC_C_QOS_CAPABILITIES_IGNORE_DELEGATE_FAILURE : 0, RPC_C_QOS_IDENTITY_STATIC, ImpersonationType };
	LPWSTR fullServer = NULL;

	*hBinding = NULL;
	rpcStatus = RpcStringBindingCompose((RPC_WSTR)uuid, (RPC_WSTR)ProtSeq, (RPC_WSTR)NetworkAddr, (RPC_WSTR)Endpoint, NULL, &StringBinding);
	if (rpcStatus == RPC_S_OK)
	{
		DEBUG_PRINT("string binding: %ls\n", StringBinding);
		rpcStatus = RpcBindingFromStringBinding(StringBinding, hBinding);
		if (rpcStatus == RPC_S_OK)
		{
			if (*hBinding)
			{
				if (AuthnSvc != RPC_C_AUTHN_NONE)
				{
					if (addServiceToNetworkAddr)
					{
						if (Service && NetworkAddr)
						{
							alloc_string_sprintfW(&fullServer, L"%s/%s", Service, NetworkAddr);
							DEBUG_PRINT("Using Service spn %ls\n", (RPC_WSTR)(fullServer ? fullServer : (Service ? Service : L"svcchk")));
						}
						else DEBUG_PRINT("Cannot add Service to NetworkAddr if NULL\n");
					}

					if ((!addServiceToNetworkAddr || fullServer) && use_rpc_auth)
					{
						DEBUG_PRINT("binding with auth\n");
						status = TRUE;
						rpcStatus = RpcBindingSetAuthInfoEx(*hBinding, (RPC_WSTR)(fullServer ? fullServer : (Service ? Service : L"svcchk")), RPC_C_AUTHN_LEVEL_PKT_PRIVACY, AuthnSvc, hAuth, RPC_C_AUTHZ_NONE, &SecurityQOS);
						if (rpcStatus == RPC_S_OK)
						{
							DEBUG_PRINT("binding with auth ok\n");
							if (RpcSecurityCallback)
							{
								rpcStatus = RpcBindingSetOption(*hBinding, RPC_C_OPT_SECURITY_CALLBACK, (ULONG_PTR)RpcSecurityCallback);
								status = (rpcStatus == RPC_S_OK);
								if (!status)
									DEBUG_PRINT("RpcBindingSetOption: 0x%08x (%u)\n", rpcStatus, rpcStatus);
							}
							else status = TRUE;
						}
						else DEBUG_PRINT("RpcBindingSetAuthInfoEx: 0x%08x (%u)\n", rpcStatus, rpcStatus);
					}
					else
					{
						status = TRUE;
						DEBUG_PRINT("binding without rpc level auth\n");
					}
				}
				else
				{
					status = TRUE;
					DEBUG_PRINT("Null rpc auth\n");
				}

				if (!status)
				{
					rpcStatus = RpcBindingFree(hBinding);
					if (rpcStatus == RPC_S_OK)
						*hBinding = NULL;
					else DEBUG_PRINT("RpcBindingFree: 0x%08x (%u)\n", rpcStatus, rpcStatus);
				}
			}
			else DEBUG_PRINT("No Binding!\n");
		}
		else DEBUG_PRINT("RpcBindingFromStringBinding: 0x%08x (%u)\n", rpcStatus, rpcStatus);
		RpcStringFree(&StringBinding);
	}
	else DEBUG_PRINT("RpcStringBindingCompose: 0x%08x (%u)\n", rpcStatus, rpcStatus);

	if (fullServer)
	{
		LocalFree(fullServer);
	}

	return status;
}



int make_rpc_request(RPC_IF_HANDLE spec, wchar_t * targetServer, RPC_WSTR pipename, BYTE authtype, const wchar_t* service, const wchar_t* username, const wchar_t* password, const wchar_t* uuid, BOOL rpc_use_auth, RPC_CALLBACK callback, ...)
{
    BOOL retcode = FALSE;
    NTSTATUS status = 0;
    HRESULT hr = 0;
    handle_t hrpcHandle = NULL;
    DWORD dwRet = 0, authSvc = 0;
    long ret = 0;
    NETRESOURCE nr = { 0, RESOURCETYPE_DISK,	0, 0, NULL, NULL, NULL, NULL };

    SEC_WINNT_AUTH_IDENTITY secIdentity = { NULL, 0, NULL, 0, NULL, 0, SEC_WINNT_AUTH_IDENTITY_UNICODE };

    switch (authtype)
    {
    case 0: // default
        authSvc = RPC_C_AUTHN_DEFAULT;
        DEBUG_PRINT("Using current user context\n");
        break;
    case 1: //noauth
        authSvc = RPC_C_AUTHN_NONE;
        DEBUG_PRINT("Using NULL / NONE auth\n");
        username = password = L"";
        break;
    case 2: //explicit auth
        authSvc = RPC_C_AUTHN_GSS_NEGOTIATE;
        DEBUG_PRINT("Using explicit auth with user %S : password %S\n", username, password);
        secIdentity.User = (unsigned short *)username;
        secIdentity.UserLength = lstrlenW(username);
		secIdentity.Password = (unsigned short *)(password);
        secIdentity.PasswordLength = lstrlenW(password);
        break;
    }

    if (!alloc_string_sprintfW(&nr.lpRemoteName, L"\\\\%s\\IPC$", targetServer))
    {
        DEBUG_PRINT("out of memory");
        goto end;
    }
    DEBUG_PRINT("Disconnecting any exsiting IPC$ mapping\n");
    dwRet = WNetCancelConnection2(nr.lpRemoteName, 0, TRUE);
    if ((dwRet == NO_ERROR) || (dwRet == ERROR_NOT_CONNECTED))
    {
        DEBUG_PRINT("binding %S with specified cred method\n", nr.lpRemoteName);
        dwRet = WNetAddConnection2(&nr, password, username, CONNECT_TEMPORARY);
        if (dwRet == NO_ERROR)
        {
            DEBUG_PRINT("Connected\n");
            if (rpc_createBinding(rpc_use_auth, uuid, L"ncacn_np", targetServer, reinterpret_cast<LPCWSTR>(pipename), service, TRUE, authSvc, secIdentity.UserLength ? &secIdentity : NULL, RPC_C_IMP_LEVEL_DELEGATE, &hrpcHandle, NULL))
            {
                DEBUG_PRINT("Resolve Endpoint: \n");
                status = RpcEpResolveBinding(hrpcHandle, spec);
                if (status == RPC_S_OK)
                {
                    DEBUG_PRINT("Endpoint Resolved\n");
                    va_list args;
                    va_start(args, callback);
                    RpcTryExcept
                    if (callback(&hrpcHandle, args))
                    {
                        retcode = TRUE;
                    }
                    RpcExcept(RpcExceptionFilter(RpcExceptionCode()))
                        DEBUG_PRINT("An exception occured while attempting to make the RPC call, recovering and bailing: %lu\n", RpcExceptionCode());
                    RpcEndExcept
                }
                else { DEBUG_PRINT("Resolve binding failed: %d\n", dwRet); }// resolveBinding
                rpc_deleteBinding(&hrpcHandle);
            }
            else { DEBUG_PRINT("CreatingBinding Failed: %d\n", dwRet); }//createBinding
            DEBUG_PRINT("Disconnecting IPC$:\n");
            dwRet = WNetCancelConnection2W(nr.lpRemoteName, 0, TRUE);
            if (dwRet == NO_ERROR)
            {
                DEBUG_PRINT("Disconnected\n");
            }
            else
            {
                DEBUG_PRINT("Error disconnecting %d\n", dwRet);
            }
        }
        else { DEBUG_PRINT("Adding connection failed: %d\n", dwRet); }// WAddConnect
    }
    else { DEBUG_PRINT("diconnect failed\n"); }//CancelConnect

end:
    if (nr.lpRemoteName) { LocalFree(nr.lpRemoteName); }
    return retcode;
}