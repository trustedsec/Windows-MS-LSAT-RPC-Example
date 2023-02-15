#include <windows.h>

//code taken from reactos lsa.c
handle_t __RPC_USER PLSAPR_SERVER_NAME_bind(LPWSTR pszSystemName)
{
    handle_t hBinding = NULL;
    LPWSTR pszStringBinding;
    RPC_STATUS status;

    status = RPCRT4$RpcStringBindingComposeW(NULL,
        L"ncacn_np",
        pszSystemName,
        L"\\pipe\\lsarpc",
        NULL,
        &pszStringBinding);
    if (status)
    {
        return NULL;
    }

    /* Set the binding handle that will be used to bind to the server. */
    status = RPCRT4$RpcBindingFromStringBindingW(pszStringBinding,
        &hBinding);
    status = RPCRT4$RpcStringFreeW(&pszStringBinding);
    return hBinding;
}


void __RPC_USER PLSAPR_SERVER_NAME_unbind(LPWSTR pszSystemName,
    handle_t hBinding)
{
    RPC_STATUS status;
    status = RPCRT4$RpcBindingFree(&hBinding);
}

#ifdef _WIN64
#include "ms-lsar_x64.c"
#else
#include "ms-lsar_win32.c"
#endif
