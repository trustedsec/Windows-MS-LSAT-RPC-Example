

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsat.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ms-lsat.h"

#define TYPE_FORMAT_STRING_SIZE   933                               
#define PROC_FORMAT_STRING_SIZE   2651                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dlsat_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dlsat_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dlsat_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dlsat_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dlsat_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dlsat_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
static unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
static unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, pObject);\
}\
static unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, pObject);\
}\
static unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, pObject);\
}\
static void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#endif


extern const ms2Dlsat_MIDL_TYPE_FORMAT_STRING ms2Dlsat__MIDL_TypeFormatString;
extern const ms2Dlsat_MIDL_PROC_FORMAT_STRING ms2Dlsat__MIDL_ProcFormatString;
extern const ms2Dlsat_MIDL_EXPR_FORMAT_STRING ms2Dlsat__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: lsarpc, ver. 0.0,
   GUID={0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */



static const RPC_CLIENT_INTERFACE lsarpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE lsarpc_v0_0_c_ifspec = (RPC_IF_HANDLE)& lsarpc___RpcClientInterface;

extern const MIDL_STUB_DESC lsarpc_StubDesc;

static RPC_BINDING_HANDLE lsarpc__MIDL_AutoBindHandle;


NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[42],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_2( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_3( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[98],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_4( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[126],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[154],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[182],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_7( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[236],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_8( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[264],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[292],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_10( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[320],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_11( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[348],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_12( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[376],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_13( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[404],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarLookupNames( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[432],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupSids( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[510],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_16( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[582],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_17( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[610],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_18( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[638],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_19( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[666],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_20( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[694],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[722],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[750],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_23( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[778],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_24( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[806],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_25( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[834],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_26( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[862],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_27( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[890],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_28( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[918],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_29( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[946],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_30( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[974],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_31( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1002],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_32( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1030],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_33( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1058],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_34( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1086],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_35( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1114],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_36( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1142],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_37( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1170],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_38( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1198],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_39( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1226],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_40( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1254],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_41( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1282],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_42( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1310],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_43( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1338],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarOpenPolicy2( 
    /* [string][unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1366],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarGetUserName( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *SystemName,
    /* [out][in] */ PRPC_UNICODE_STRING *UserName,
    /* [unique][out][in] */ PRPC_UNICODE_STRING *DomainName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1420],
                  ( unsigned char * )&IDL_handle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_46( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1472],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_47( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1500],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_48( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1528],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_49( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1556],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_50( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1584],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_51( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1612],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1640],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_53( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1668],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_54( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1696],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_55( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1724],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1752],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarLookupSids2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES_EX TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1780],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupNames2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1864],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_59( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1954],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1982],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2010],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2038],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2066],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2094],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2122],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2150],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2178],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarLookupNames3( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX2 TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2206],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2296],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2324],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2352],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2380],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_73( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2408],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_DP_74( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2436],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2464],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarLookupSids3( 
    /* [in] */ handle_t RpcHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES_EX TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2492],
                  ( unsigned char * )&RpcHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupNames4( 
    /* [in] */ handle_t RpcHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX2 TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2568],
                  ( unsigned char * )&RpcHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Dlsat_MIDL_PROC_FORMAT_STRING ms2Dlsat__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure LsarClose */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 22 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 30 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 32 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 34 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 42 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 52 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 62 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_2 */

/* 70 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 72 */	NdrFcLong( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 80 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 82 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 90 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_3 */

/* 98 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x3 ),	/* 3 */
/* 106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 108 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 118 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_4 */

/* 126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 146 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x5 ),	/* 5 */
/* 162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 164 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy */

/* 182 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x6 ),	/* 6 */
/* 190 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 192 */	NdrFcShort( 0x22 ),	/* 34 */
/* 194 */	NdrFcShort( 0x40 ),	/* 64 */
/* 196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 198 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 206 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 208 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 210 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ObjectAttributes */

/* 212 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter DesiredAccess */

/* 218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 224 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 226 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 228 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Return value */

/* 230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 232 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_7 */

/* 236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x7 ),	/* 7 */
/* 244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_8 */

/* 264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum9NotUsedOnWire */

/* 292 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x9 ),	/* 9 */
/* 300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 302 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_10 */

/* 320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0xa ),	/* 10 */
/* 328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 330 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_11 */

/* 348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xb ),	/* 11 */
/* 356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 358 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_12 */

/* 376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0xc ),	/* 12 */
/* 384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 386 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_13 */

/* 404 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0xd ),	/* 13 */
/* 412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 414 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames */

/* 432 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0xe ),	/* 14 */
/* 440 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 442 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 446 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 448 */	NdrFcShort( 0x4e ),	/* 78 */
/* 450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 454 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 462 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 466 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter Count */

/* 468 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	NdrFcShort( 0x102 ),	/* 258 */

	/* Parameter Names */

/* 474 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 478 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */

	/* Parameter ReferencedDomains */

/* 480 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedSids */

/* 486 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x1f2 ),	/* Type Offset=498 */

	/* Parameter LookupLevel */

/* 492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 496 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 498 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 500 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupSids */

/* 510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0xf ),	/* 15 */
/* 518 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 520 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 522 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 524 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 526 */	NdrFcShort( 0x46 ),	/* 70 */
/* 528 */	NdrFcShort( 0x24 ),	/* 36 */
/* 530 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 532 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 540 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 542 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 544 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter SidEnumBuffer */

/* 546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 550 */	NdrFcShort( 0x24c ),	/* Type Offset=588 */

	/* Parameter ReferencedDomains */

/* 552 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 556 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedNames */

/* 558 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 562 */	NdrFcShort( 0x292 ),	/* Type Offset=658 */

	/* Parameter LookupLevel */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 568 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 570 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 572 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_16 */

/* 582 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x10 ),	/* 16 */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 594 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_17 */

/* 610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x11 ),	/* 17 */
/* 618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 620 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_18 */

/* 638 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x12 ),	/* 18 */
/* 646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 648 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 658 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_19 */

/* 666 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x13 ),	/* 19 */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 678 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 686 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_20 */

/* 694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x14 ),	/* 20 */
/* 702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 704 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 714 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 722 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x15 ),	/* 21 */
/* 730 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 732 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 742 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 750 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x16 ),	/* 22 */
/* 758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 760 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 770 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_23 */

/* 778 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x17 ),	/* 23 */
/* 786 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 788 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 798 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_24 */

/* 806 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x18 ),	/* 24 */
/* 814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 816 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_25 */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x19 ),	/* 25 */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_26 */

/* 862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x1a ),	/* 26 */
/* 870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 872 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_27 */

/* 890 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1b ),	/* 27 */
/* 898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 900 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 910 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_28 */

/* 918 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1c ),	/* 28 */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 938 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_29 */

/* 946 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x1d ),	/* 29 */
/* 954 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 956 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 966 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_30 */

/* 974 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x1e ),	/* 30 */
/* 982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 984 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 994 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_31 */

/* 1002 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1022 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_32 */

/* 1030 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1040 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_33 */

/* 1058 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1068 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_34 */

/* 1086 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1106 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_35 */

/* 1114 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1124 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1134 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_36 */

/* 1142 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1152 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_37 */

/* 1170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_38 */

/* 1198 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1208 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1218 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_39 */

/* 1226 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1234 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1236 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1246 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_40 */

/* 1254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_41 */

/* 1282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1302 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_42 */

/* 1310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_43 */

/* 1338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 1366 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 1368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1374 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1378 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1380 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1382 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 1390 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1394 */	NdrFcShort( 0x2a4 ),	/* Type Offset=676 */

	/* Parameter ObjectAttributes */

/* 1396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1398 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1400 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter DesiredAccess */

/* 1402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1404 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 1408 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1410 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1412 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Return value */

/* 1414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarGetUserName */

/* 1420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1428 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1430 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1438 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1440 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 1448 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1450 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1452 */	NdrFcShort( 0x2a4 ),	/* Type Offset=676 */

	/* Parameter UserName */

/* 1454 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1456 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1458 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Parameter DomainName */

/* 1460 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1464 */	NdrFcShort( 0x2b0 ),	/* Type Offset=688 */

	/* Return value */

/* 1466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1468 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_46 */

/* 1472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1482 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_47 */

/* 1500 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_48 */

/* 1528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1538 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_49 */

/* 1556 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1562 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1566 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_50 */

/* 1584 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1594 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1596 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_51 */

/* 1612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1622 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1624 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 1640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1650 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_53 */

/* 1668 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_54 */

/* 1696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1706 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_55 */

/* 1724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x37 ),	/* 55 */
/* 1732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1734 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 1752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1764 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids2 */

/* 1780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x39 ),	/* 57 */
/* 1788 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1790 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1794 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1796 */	NdrFcShort( 0x56 ),	/* 86 */
/* 1798 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1800 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1802 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1810 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1814 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter SidEnumBuffer */

/* 1816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1820 */	NdrFcShort( 0x24c ),	/* Type Offset=588 */

	/* Parameter ReferencedDomains */

/* 1822 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1826 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedNames */

/* 1828 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1832 */	NdrFcShort( 0x2e8 ),	/* Type Offset=744 */

	/* Parameter LookupLevel */

/* 1834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1838 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 1840 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1842 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 1846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1848 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 1852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1854 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1860 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames2 */

/* 1864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x3a ),	/* 58 */
/* 1872 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1874 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1876 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1878 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1880 */	NdrFcShort( 0x5e ),	/* 94 */
/* 1882 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1884 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1886 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1894 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1896 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1898 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter Count */

/* 1900 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1904 */	NdrFcShort( 0x2fa ),	/* 762 */

	/* Parameter Names */

/* 1906 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1908 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1910 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */

	/* Parameter ReferencedDomains */

/* 1912 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1914 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1916 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedSids */

/* 1918 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1922 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Parameter LookupLevel */

/* 1924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1926 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1928 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 1930 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1932 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 1936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1938 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 1942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1944 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1950 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_59 */

/* 1954 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x3b ),	/* 59 */
/* 1962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1964 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1974 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 1982 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1990 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1992 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2002 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 2010 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2022 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2030 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 2038 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2044 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2048 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2058 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2066 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2076 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2102 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2106 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 2122 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2130 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2132 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2142 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 2150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x42 ),	/* 66 */
/* 2158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2170 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 2178 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2188 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2196 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2198 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames3 */

/* 2206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2214 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2216 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2222 */	NdrFcShort( 0x5e ),	/* 94 */
/* 2224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2228 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2236 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2238 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2240 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter Count */

/* 2242 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2246 */	NdrFcShort( 0x348 ),	/* 840 */

	/* Parameter Names */

/* 2248 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2250 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2252 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */

	/* Parameter ReferencedDomains */

/* 2254 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2258 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedSids */

/* 2260 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2264 */	NdrFcShort( 0x388 ),	/* Type Offset=904 */

	/* Parameter LookupLevel */

/* 2266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2268 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2270 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2272 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2280 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2284 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2286 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2292 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 2296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2306 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 2324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x46 ),	/* 70 */
/* 2332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2334 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2344 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 2352 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x47 ),	/* 71 */
/* 2360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2362 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2364 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2372 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 2380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2390 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_73 */

/* 2408 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x49 ),	/* 73 */
/* 2416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2418 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_74 */

/* 2436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x4a ),	/* 74 */
/* 2444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2446 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 2464 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x4b ),	/* 75 */
/* 2472 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2474 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids3 */

/* 2492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2500 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2502 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2506 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2510 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2512 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SidEnumBuffer */

/* 2520 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2524 */	NdrFcShort( 0x24c ),	/* Type Offset=588 */

	/* Parameter ReferencedDomains */

/* 2526 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2530 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedNames */

/* 2532 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2536 */	NdrFcShort( 0x2e8 ),	/* Type Offset=744 */

	/* Parameter LookupLevel */

/* 2538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2542 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2544 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2546 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2550 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2552 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2558 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2564 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames4 */

/* 2568 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x4d ),	/* 77 */
/* 2576 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2578 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2582 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2584 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2586 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2588 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Count */

/* 2596 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2600 */	NdrFcShort( 0x39a ),	/* 922 */

	/* Parameter Names */

/* 2602 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2606 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */

	/* Parameter ReferencedDomains */

/* 2608 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2612 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter TranslatedSids */

/* 2614 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2618 */	NdrFcShort( 0x388 ),	/* Type Offset=904 */

	/* Parameter LookupLevel */

/* 2620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2622 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2624 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2626 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2628 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2634 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2640 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2646 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dlsat_MIDL_TYPE_FORMAT_STRING ms2Dlsat__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/*  8 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 10 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 12 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (192) */
/* 18 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 34 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 36 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 42 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	0x12, 0x0,	/* FC_UP */
/* 50 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (18) */
/* 52 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 54 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 56 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 58 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x6 ),	/* 6 */
/* 62 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 64 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0x6 ),	/* 6 */
/* 68 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (58) */
/* 72 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 74 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 80 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 82 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 84 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 86 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (74) */
/* 92 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 94 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (64) */
/* 98 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 100 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 104 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 110 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 112 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (100) */
/* 118 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 120 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 122 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x14 ),	/* 20 */
/* 126 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 128 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	0x12, 0x0,	/* FC_UP */
/* 136 */	NdrFcShort( 0xffce ),	/* Offset= -50 (86) */
/* 138 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (86) */
/* 148 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 150 */	NdrFcShort( 0xc ),	/* 12 */
/* 152 */	NdrFcShort( 0xc ),	/* 12 */
/* 154 */	0x12, 0x0,	/* FC_UP */
/* 156 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (112) */
/* 158 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 162 */	NdrFcShort( 0x10 ),	/* 16 */
/* 164 */	0x12, 0x0,	/* FC_UP */
/* 166 */	NdrFcShort( 0xffca ),	/* Offset= -54 (112) */
/* 168 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 170 */	0x2,		/* FC_CHAR */
			0x6,		/* FC_SHORT */
/* 172 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 174 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0xc ),	/* 12 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* Offset= 0 (184) */
/* 186 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 188 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 190 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 192 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x18 ),	/* 24 */
/* 196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 204 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 206 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	0x12, 0x0,	/* FC_UP */
/* 216 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (36) */
/* 218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 222 */	NdrFcShort( 0x10 ),	/* 16 */
/* 224 */	0x12, 0x0,	/* FC_UP */
/* 226 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (122) */
/* 228 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 230 */	NdrFcShort( 0x14 ),	/* 20 */
/* 232 */	NdrFcShort( 0x14 ),	/* 20 */
/* 234 */	0x12, 0x0,	/* FC_UP */
/* 236 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (178) */
/* 238 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 246 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 254 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 256 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 258 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 264 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 268 */	
			0x11, 0x0,	/* FC_RP */
/* 270 */	NdrFcShort( 0x2a ),	/* Offset= 42 (312) */
/* 272 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 274 */	NdrFcShort( 0x2 ),	/* 2 */
/* 276 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 278 */	NdrFcShort( 0x2 ),	/* 2 */
/* 280 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 282 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 288 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 290 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 294 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 298 */	NdrFcShort( 0x4 ),	/* 4 */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (272) */
/* 306 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 308 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 312 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 322 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 324 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 332 */	NdrFcShort( 0x4 ),	/* 4 */
/* 334 */	NdrFcShort( 0x4 ),	/* 4 */
/* 336 */	0x12, 0x0,	/* FC_UP */
/* 338 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (272) */
/* 340 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 342 */	0x0,		/* 0 */
			NdrFcShort( 0xffcb ),	/* Offset= -53 (290) */
			0x5b,		/* FC_END */
/* 346 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (350) */
/* 350 */	
			0x12, 0x0,	/* FC_UP */
/* 352 */	NdrFcShort( 0x4c ),	/* Offset= 76 (428) */
/* 354 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 356 */	NdrFcShort( 0xc ),	/* 12 */
/* 358 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 362 */	NdrFcShort( 0x4 ),	/* 4 */
/* 364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 366 */	0x12, 0x0,	/* FC_UP */
/* 368 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (272) */
/* 370 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	0x12, 0x0,	/* FC_UP */
/* 378 */	NdrFcShort( 0xfedc ),	/* Offset= -292 (86) */
/* 380 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 382 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 384 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 386 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 388 */	NdrFcShort( 0xc ),	/* 12 */
/* 390 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 396 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 398 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 400 */	NdrFcShort( 0xc ),	/* 12 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x2 ),	/* 2 */
/* 406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 408 */	NdrFcShort( 0x4 ),	/* 4 */
/* 410 */	0x12, 0x0,	/* FC_UP */
/* 412 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (272) */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x12, 0x0,	/* FC_UP */
/* 420 */	NdrFcShort( 0xfeb2 ),	/* Offset= -334 (86) */
/* 422 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 424 */	0x0,		/* 0 */
			NdrFcShort( 0xffb9 ),	/* Offset= -71 (354) */
			0x5b,		/* FC_END */
/* 428 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0xc ),	/* 12 */
/* 432 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 434 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 438 */	NdrFcShort( 0x4 ),	/* 4 */
/* 440 */	0x12, 0x0,	/* FC_UP */
/* 442 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (386) */
/* 444 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 446 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 450 */	
			0x11, 0x0,	/* FC_RP */
/* 452 */	NdrFcShort( 0x2e ),	/* Offset= 46 (498) */
/* 454 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 464 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 466 */	NdrFcShort( 0xc ),	/* 12 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* Offset= 0 (470) */
/* 472 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 474 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 476 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 486 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 490 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 492 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 494 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (464) */
/* 496 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 498 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x8 ),	/* Offset= 8 (512) */
/* 506 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 508 */	NdrFcShort( 0xffca ),	/* Offset= -54 (454) */
/* 510 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 512 */	
			0x12, 0x0,	/* FC_UP */
/* 514 */	NdrFcShort( 0xffda ),	/* Offset= -38 (476) */
/* 516 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 518 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x11, 0x0,	/* FC_RP */
/* 522 */	NdrFcShort( 0x42 ),	/* Offset= 66 (588) */
/* 524 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 530 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 534 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 536 */	NdrFcShort( 0x4 ),	/* 4 */
/* 538 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 540 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	0x12, 0x0,	/* FC_UP */
/* 548 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (86) */
/* 550 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 554 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 556 */	NdrFcShort( 0x4 ),	/* 4 */
/* 558 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 564 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 566 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 568 */	NdrFcShort( 0x4 ),	/* 4 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0x12, 0x0,	/* FC_UP */
/* 580 */	NdrFcShort( 0xfe12 ),	/* Offset= -494 (86) */
/* 582 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 584 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (534) */
			0x5b,		/* FC_END */
/* 588 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x8 ),	/* Offset= 8 (602) */
/* 596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 598 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (524) */
/* 600 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 602 */	
			0x12, 0x0,	/* FC_UP */
/* 604 */	NdrFcShort( 0xffce ),	/* Offset= -50 (554) */
/* 606 */	
			0x11, 0x0,	/* FC_RP */
/* 608 */	NdrFcShort( 0x32 ),	/* Offset= 50 (658) */
/* 610 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 620 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* Offset= 0 (626) */
/* 628 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 630 */	0x0,		/* 0 */
			NdrFcShort( 0xfeab ),	/* Offset= -341 (290) */
			0x8,		/* FC_LONG */
/* 634 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 636 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 646 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 650 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 652 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 654 */	NdrFcShort( 0xffde ),	/* Offset= -34 (620) */
/* 656 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 658 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x8 ),	/* Offset= 8 (672) */
/* 666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (610) */
/* 670 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 672 */	
			0x12, 0x0,	/* FC_UP */
/* 674 */	NdrFcShort( 0xffda ),	/* Offset= -38 (636) */
/* 676 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 678 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 680 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 682 */	NdrFcShort( 0x2 ),	/* Offset= 2 (684) */
/* 684 */	
			0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0xfe74 ),	/* Offset= -396 (290) */
/* 688 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 690 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (684) */
/* 692 */	
			0x11, 0x0,	/* FC_RP */
/* 694 */	NdrFcShort( 0x32 ),	/* Offset= 50 (744) */
/* 696 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x14 ),	/* 20 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* Offset= 0 (712) */
/* 714 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 716 */	0x0,		/* 0 */
			NdrFcShort( 0xfe55 ),	/* Offset= -427 (290) */
			0x8,		/* FC_LONG */
/* 720 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 722 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 732 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 736 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 738 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0xffde ),	/* Offset= -34 (706) */
/* 742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* Offset= 8 (758) */
/* 752 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 754 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (696) */
/* 756 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 758 */	
			0x12, 0x0,	/* FC_UP */
/* 760 */	NdrFcShort( 0xffda ),	/* Offset= -38 (722) */
/* 762 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 772 */	
			0x11, 0x0,	/* FC_RP */
/* 774 */	NdrFcShort( 0x30 ),	/* Offset= 48 (822) */
/* 776 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 782 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 786 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x10 ),	/* 16 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* Offset= 0 (792) */
/* 794 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 796 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 800 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 814 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (786) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* Offset= 8 (836) */
/* 830 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 832 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (776) */
/* 834 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 836 */	
			0x12, 0x0,	/* FC_UP */
/* 838 */	NdrFcShort( 0xffda ),	/* Offset= -38 (800) */
/* 840 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 850 */	
			0x11, 0x0,	/* FC_RP */
/* 852 */	NdrFcShort( 0x34 ),	/* Offset= 52 (904) */
/* 854 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 860 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 864 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 866 */	NdrFcShort( 0x10 ),	/* 16 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* Offset= 8 (878) */
/* 872 */	0xd,		/* FC_ENUM16 */
			0x36,		/* FC_POINTER */
/* 874 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 876 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 878 */	
			0x12, 0x0,	/* FC_UP */
/* 880 */	NdrFcShort( 0xfce6 ),	/* Offset= -794 (86) */
/* 882 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 892 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 896 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 898 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (864) */
/* 902 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 904 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 906 */	NdrFcShort( 0x8 ),	/* 8 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x8 ),	/* Offset= 8 (918) */
/* 912 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (854) */
/* 916 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 918 */	
			0x12, 0x0,	/* FC_UP */
/* 920 */	NdrFcShort( 0xffda ),	/* Offset= -38 (882) */
/* 922 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 928 */	NdrFcLong( 0x3e8 ),	/* 1000 */

			0x0
        }
    };

static void __RPC_USER lsarpc__LSAPR_ACLExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _LSAPR_ACL *pS	=	( struct _LSAPR_ACL * )(( pStubMsg->StackTop - 4 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned long ) ( ( pS->AclSize - 4 )  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    lsarpc__LSAPR_ACLExprEval_0000
    };


static const unsigned short lsarpc_FormatStringOffsetTable[] =
    {
    0,
    42,
    70,
    98,
    126,
    154,
    182,
    236,
    264,
    292,
    320,
    348,
    376,
    404,
    432,
    510,
    582,
    610,
    638,
    666,
    694,
    722,
    750,
    778,
    806,
    834,
    862,
    890,
    918,
    946,
    974,
    1002,
    1030,
    1058,
    1086,
    1114,
    1142,
    1170,
    1198,
    1226,
    1254,
    1282,
    1310,
    1338,
    1366,
    1420,
    1472,
    1500,
    1528,
    1556,
    1584,
    1612,
    1640,
    1668,
    1696,
    1724,
    1752,
    1780,
    1864,
    1954,
    1982,
    2010,
    2038,
    2066,
    2094,
    2122,
    2150,
    2178,
    2206,
    2296,
    2324,
    2352,
    2380,
    2408,
    2436,
    2464,
    2492,
    2568
    };


static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void *)& lsarpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &lsarpc__MIDL_AutoBindHandle,
    0,
    0,
    ExprEvalRoutines,
    0,
    ms2Dlsat__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8010272, /* MIDL Version 8.1.626 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

