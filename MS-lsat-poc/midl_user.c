#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <rpc.h>

void __RPC_FAR* __RPC_API midl_user_allocate(size_t cBytes);
void __RPC_API midl_user_free(void __RPC_FAR* p);

void* midl_user_allocate(size_t cBytes)
{
	return HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, cBytes);
}

void midl_user_free(void* p)
{
	HeapFree(GetProcessHeap(), 0, p);
}
