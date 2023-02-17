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

typedef struct Params {
	wchar_t servicename[280];
	wchar_t target_server[1024];
} Params;

unsigned __stdcall BeginStub(void * p)
{
	Params * params = (Params *)p;
	list_names(params->target_server, params->servicename);
	return 0;
}

LONG PvectoredExceptionHandler(EXCEPTION_POINTERS* ExceptionInfo)
{
    MSVCRT$_endthreadex(ExceptionInfo->ExceptionRecord->ExceptionCode);
    return EXCEPTION_CONTINUE_EXECUTION;
}

VOID go( 
	IN PCHAR Buffer, 
	IN ULONG Length 
) 
{
	datap parser;
	DWORD exitcode = 0;
	const wchar_t * targetpath = NULL;
    const wchar_t * servicenameptr = NULL;
	HANDLE thread = NULL;
	PVOID handler = NULL;
	Params * params = NULL;
    wchar_t servicename[280] = {0};
	BeaconDataParse(&parser, Buffer, Length);
	targetpath = (const wchar_t*) BeaconDataExtract(&parser, NULL);
    servicenameptr = (const wchar_t*)BeaconDataExtract(&parser, NULL);
    MSVCRT$wcscpy(servicename, L"NT SERVICE\\");
    MSVCRT$wcsncat(servicename, servicenameptr, 255); //Yes an operator could break this, but a legit service has a max length of 255 which we will fit
	params = intAlloc(sizeof(Params));
	MSVCRT$wcscpy(params->servicename, servicename);
	MSVCRT$wcscpy(params->target_server, targetpath);


	if(!bofstart())
	{
		return;
	}

    handler = KERNEL32$AddVectoredExceptionHandler(0, PvectoredExceptionHandler);
    thread = (HANDLE)MSVCRT$_beginthreadex(NULL, 0, BeginStub, params, 0, NULL);
    KERNEL32$WaitForSingleObject(thread, INFINITE);
    KERNEL32$GetExitCodeThread(thread, &exitcode);
	if(exitcode != 0)
	{
		BeaconPrintf(CALLBACK_ERROR, "An exception occured while running: %x\n", exitcode);
	}
	if(thread) {KERNEL32$CloseHandle(thread);}
    if(handler) {KERNEL32$RemoveVectoredExceptionHandler(handler);}
	if(params) {intFree(params);}
	printoutput(TRUE);
};