#pragma once
#include <Windows.h>
#include <rpc.h>

typedef int (*RPC_CALLBACK)(RPC_BINDING_HANDLE *hrpc, va_list args);
void make_unicode_str(PUNICODE_STRING ustr, const wchar_t* string);
int make_rpc_request(RPC_IF_HANDLE spec, wchar_t* targetServer, RPC_WSTR pipename, BYTE authtype, const wchar_t* service, const wchar_t* username, const wchar_t* password, const wchar_t* uuid, BOOL use_rpc_auth, RPC_CALLBACK callback, ...);