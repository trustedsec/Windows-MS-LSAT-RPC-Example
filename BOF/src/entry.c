#define BOF
#define WIN32_LEAN_AND_MEAN
#define WIN32_NO_STATUS // This magic incantation lets us safely use NTSTATUS macros in userland
#include <windows.h>
#undef WIN32_NO_STATUS
#include <winternl.h>
#include <ntstatus.h>
#include "beacon.h"
#include "bofdefs.h"
#include "ms-lsar.h"
#include "base.c"
#define printf internal_printf
#include "midl_user.c"
#include "ms-lsar.c"
#include "MS-lsat-poc.c"

VOID go( 
	IN PCHAR Buffer, 
	IN ULONG Length 
) 
{
	datap parser;
	const wchar_t * targetpath = NULL;
    const wchar_t * servicenameptr = NULL;
    wchar_t servicename[280] = {0};
	BeaconDataParse(&parser, Buffer, Length);
	targetpath = (const wchar_t*) BeaconDataExtract(&parser, NULL);
    servicenameptr = (const wchar_t*)BeaconDataExtract(&parser, NULL);
    MSVCRT$wcscpy(servicename, L"NT SERVICE\\");
    MSVCRT$wcscpy(servicename, servicenameptr); //Yes an operator could break this, but a legit service has a max length of 255 which we will fit


	if(!bofstart())
	{
		return;
	}

    list_names(targetpath, servicename);
    internal_printf("I ran!");
	printoutput(TRUE);
};