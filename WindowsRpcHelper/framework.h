#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#define WIN32_NO_STATUS // This magic incantation lets us safely use NTSTATUS macros in userland
#include <windows.h>
#undef WIN32_NO_STATUS
#include <winternl.h>
#include <ntstatus.h>
#include <rpc.h>
#include <stdio.h>

#ifdef _DEBUG
#define DEBUG_PRINT(x, ...) printf(x, ##__VA_ARGS__)
#else
#define DEBUG_PRINT(x, ...)
#endif
