#pragma once
#include <Windows.h>
#include <rpc.h>

typedef int (*RPC_CALLBACK)(RPC_BINDING_HANDLE *hrpc, va_list args); // callback function taking a va_list such that any number of args may be passed to it
void make_unicode_str(PUNICODE_STRING ustr, const wchar_t* string); // Just a basic helper function to setup wide char strings as unicode strings

//This is a helper function that will bind to a given rpc service over an smb named pipe and on success call your callback function with the connected rpc binding handle
int make_rpc_request(RPC_IF_HANDLE spec, wchar_t* targetServer, RPC_WSTR pipename, BYTE authtype, const wchar_t* service, const wchar_t* username, const wchar_t* password, const wchar_t* uuid, BOOL use_rpc_auth, RPC_CALLBACK callback, ...);