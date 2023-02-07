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
//#include "ms-lsat.h"
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
    printf("<prog.exe> <target> <svcname>");
}



int list_names(RPC_BINDING_HANDLE* hrpc, va_list args)
{
    LSAPR_OBJECT_ATTRIBUTES lsa_obj = { 0 }; // sets root dir to null
    LSAPR_HANDLE hlsa = INVALID_HANDLE_VALUE;
    wchar_t junk[] = L"DC01.passionlabs.org";
    HRESULT hr = S_OK;
    RPC_UNICODE_STRING strings[3] = { 0 };
    LSAPR_REVISION_INFO rev_info = { 0 }, out_rev_info = { 0 };
    rev_info.V1.Revision = 1;
    rev_info.V1.SupportedFeatures = 0;
    ULONG out_rev_ver = 0;
    PLSAPR_REFERENCED_DOMAIN_LIST ref_dom = NULL;
    LSAPR_TRANSLATED_SIDS ts = { 0 };
    unsigned long count = 0;


    make_unicode_str((PUNICODE_STRING) & (strings[0]), L"NT Service\\RasMan");
    make_unicode_str((PUNICODE_STRING) & (strings[1]), L"NT Service\\ThisSHouldNotExist");
    make_unicode_str((PUNICODE_STRING) & (strings[2]), va_arg(args, PCWSTR));
    LSAPR_POLICY_PRIMARY_DOM_INFO pdi = { 0 };
    hr = LsarOpenPolicy3(junk, &lsa_obj,  POLICY_LOOKUP_NAMES, 1,&rev_info, &out_rev_ver, &out_rev_info, &hlsa);
    if (!NT_SUCCESS(hr))
    {
        printf("failed to open policy %ld\n", hr);
        return FALSE;
    }
    hr = LsarLookupNames(hlsa, 3, strings, &ref_dom,  &ts, LsapLookupWksta, &count);
    if (!NT_SUCCESS(hr))
    {
        printf("translation failed %ld\n", hr);
        return FALSE;
    }
    else
    {
        printf("it worked!\n");
        for (int i = 0; i < ts.Entries; i++)
        {
            printf("%ls %s\n", strings[i].Buffer, (ts.Sids[i].DomainIndex == -1) ? "Does not exist" : "Exists");
            //printf("%d %d %d\n", ts.Sids[i].DomainIndex, ts.Sids[i].RelativeId, ts.Sids[i].Use);
        }
    }

}

int wmain(int argc, wchar_t ** argv)
{
    if (argc != 3)
    {
        usage();
        return (1);
    }
    //        make_rpc_request(efsrpcefsrpc_v1_0_c_ifspec, targetComputer, pipename, authtype, L"host", username, password, MS_EFSR_UUID, TRUE, EFSAuthRequest, credCatcher);

    make_rpc_request(lsarpc_v0_0_c_ifspec, argv[1], (RPC_WSTR)(L"\\pipe\\lsarpc"), 0, L"host", NULL, NULL, L"12345778-1234-ABCD-EF00-0123456789AB", TRUE, list_names, argv[2]);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
