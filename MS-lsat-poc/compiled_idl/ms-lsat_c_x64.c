

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsat.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-lsat.h"

#define TYPE_FORMAT_STRING_SIZE   831                               
#define PROC_FORMAT_STRING_SIZE   2807                              
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
                  ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[44],
                  IDL_handle);
    
}


void Lsar_LSA_DP_2( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[74],
                  IDL_handle);
    
}


void Lsar_LSA_DP_3( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[104],
                  IDL_handle);
    
}


void Lsar_LSA_DP_4( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[134],
                  IDL_handle);
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[164],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[194],
                  SystemName,
                  ObjectAttributes,
                  DesiredAccess,
                  PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_7( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[250],
                  IDL_handle);
    
}


void Lsar_LSA_DP_8( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[280],
                  IDL_handle);
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[310],
                  IDL_handle);
    
}


void Lsar_LSA_DP_10( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[340],
                  IDL_handle);
    
}


void Lsar_LSA_DP_11( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[370],
                  IDL_handle);
    
}


void Lsar_LSA_DP_12( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[400],
                  IDL_handle);
    
}


void Lsar_LSA_DP_13( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[430],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[460],
                  PolicyHandle,
                  Count,
                  Names,
                  ReferencedDomains,
                  TranslatedSids,
                  LookupLevel,
                  MappedCount);
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[540],
                  PolicyHandle,
                  SidEnumBuffer,
                  ReferencedDomains,
                  TranslatedNames,
                  LookupLevel,
                  MappedCount);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_16( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[614],
                  IDL_handle);
    
}


void Lsar_LSA_DP_17( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[644],
                  IDL_handle);
    
}


void Lsar_LSA_DP_18( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[674],
                  IDL_handle);
    
}


void Lsar_LSA_DP_19( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[704],
                  IDL_handle);
    
}


void Lsar_LSA_DP_20( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[734],
                  IDL_handle);
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[764],
                  IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[794],
                  IDL_handle);
    
}


void Lsar_LSA_DP_23( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[824],
                  IDL_handle);
    
}


void Lsar_LSA_DP_24( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[854],
                  IDL_handle);
    
}


void Lsar_LSA_DP_25( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[884],
                  IDL_handle);
    
}


void Lsar_LSA_DP_26( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[914],
                  IDL_handle);
    
}


void Lsar_LSA_DP_27( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[944],
                  IDL_handle);
    
}


void Lsar_LSA_DP_28( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[974],
                  IDL_handle);
    
}


void Lsar_LSA_DP_29( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1004],
                  IDL_handle);
    
}


void Lsar_LSA_DP_30( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1034],
                  IDL_handle);
    
}


void Lsar_LSA_DP_31( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1064],
                  IDL_handle);
    
}


void Lsar_LSA_DP_32( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1094],
                  IDL_handle);
    
}


void Lsar_LSA_DP_33( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1124],
                  IDL_handle);
    
}


void Lsar_LSA_DP_34( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1154],
                  IDL_handle);
    
}


void Lsar_LSA_DP_35( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1184],
                  IDL_handle);
    
}


void Lsar_LSA_DP_36( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1214],
                  IDL_handle);
    
}


void Lsar_LSA_DP_37( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1244],
                  IDL_handle);
    
}


void Lsar_LSA_DP_38( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1274],
                  IDL_handle);
    
}


void Lsar_LSA_DP_39( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1304],
                  IDL_handle);
    
}


void Lsar_LSA_DP_40( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1334],
                  IDL_handle);
    
}


void Lsar_LSA_DP_41( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1364],
                  IDL_handle);
    
}


void Lsar_LSA_DP_42( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1394],
                  IDL_handle);
    
}


void Lsar_LSA_DP_43( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1424],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1454],
                  SystemName,
                  ObjectAttributes,
                  DesiredAccess,
                  PolicyHandle);
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1510],
                  IDL_handle,
                  SystemName,
                  UserName,
                  DomainName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_46( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1564],
                  IDL_handle);
    
}


void Lsar_LSA_DP_47( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1594],
                  IDL_handle);
    
}


void Lsar_LSA_DP_48( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1624],
                  IDL_handle);
    
}


void Lsar_LSA_DP_49( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1654],
                  IDL_handle);
    
}


void Lsar_LSA_DP_50( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1684],
                  IDL_handle);
    
}


void Lsar_LSA_DP_51( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1714],
                  IDL_handle);
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1744],
                  IDL_handle);
    
}


void Lsar_LSA_DP_53( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1774],
                  IDL_handle);
    
}


void Lsar_LSA_DP_54( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1804],
                  IDL_handle);
    
}


void Lsar_LSA_DP_55( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1834],
                  IDL_handle);
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1864],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1894],
                  PolicyHandle,
                  SidEnumBuffer,
                  ReferencedDomains,
                  TranslatedNames,
                  LookupLevel,
                  MappedCount,
                  LookupOptions,
                  ClientRevision);
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[1980],
                  PolicyHandle,
                  Count,
                  Names,
                  ReferencedDomains,
                  TranslatedSids,
                  LookupLevel,
                  MappedCount,
                  LookupOptions,
                  ClientRevision);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_DP_59( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2072],
                  IDL_handle);
    
}


void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2102],
                  IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2132],
                  IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2162],
                  IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2192],
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2222],
                  IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2252],
                  IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2282],
                  IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2312],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2342],
                  PolicyHandle,
                  Count,
                  Names,
                  ReferencedDomains,
                  TranslatedSids,
                  LookupLevel,
                  MappedCount,
                  LookupOptions,
                  ClientRevision);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2434],
                  IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2464],
                  IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2494],
                  IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2524],
                  IDL_handle);
    
}


void Lsar_LSA_DP_73( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2554],
                  IDL_handle);
    
}


void Lsar_LSA_DP_74( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2584],
                  IDL_handle);
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2614],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2644],
                  RpcHandle,
                  SidEnumBuffer,
                  ReferencedDomains,
                  TranslatedNames,
                  LookupLevel,
                  MappedCount,
                  LookupOptions,
                  ClientRevision);
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
                  (PFORMAT_STRING) &ms2Dlsat__MIDL_ProcFormatString.Format[2722],
                  RpcHandle,
                  Count,
                  Names,
                  ReferencedDomains,
                  TranslatedSids,
                  LookupLevel,
                  MappedCount,
                  LookupOptions,
                  ClientRevision);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x38 ),	/* 56 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 22 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 32 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 34 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 36 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 38 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 40 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 44 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 46 */	NdrFcLong( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 54 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 64 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_2 */

/* 74 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 76 */	NdrFcLong( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 84 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 94 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_3 */

/* 104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x3 ),	/* 3 */
/* 112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 114 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 124 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_4 */

/* 134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 164 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x5 ),	/* 5 */
/* 172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 174 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy */

/* 194 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x6 ),	/* 6 */
/* 202 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 204 */	NdrFcShort( 0x22 ),	/* 34 */
/* 206 */	NdrFcShort( 0x40 ),	/* 64 */
/* 208 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 210 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 220 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ObjectAttributes */

/* 226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 230 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter DesiredAccess */

/* 232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 238 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 242 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_7 */

/* 250 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x7 ),	/* 7 */
/* 258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 260 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 270 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_8 */

/* 280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 290 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum9NotUsedOnWire */

/* 310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x9 ),	/* 9 */
/* 318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_10 */

/* 340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0xa ),	/* 10 */
/* 348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_11 */

/* 370 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0xb ),	/* 11 */
/* 378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 380 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 390 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_12 */

/* 400 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0xc ),	/* 12 */
/* 408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 410 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 420 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_13 */

/* 430 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0xd ),	/* 13 */
/* 438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 440 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 450 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames */

/* 460 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0xe ),	/* 14 */
/* 468 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 470 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 474 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0x4e ),	/* 78 */
/* 478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 480 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 482 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 492 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 494 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 496 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter Count */

/* 498 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 500 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 502 */	NdrFcShort( 0xd4 ),	/* 212 */

	/* Parameter Names */

/* 504 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 506 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 508 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ReferencedDomains */

/* 510 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 514 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedSids */

/* 516 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 518 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 520 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter LookupLevel */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 526 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 528 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 530 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 536 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupSids */

/* 540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0xf ),	/* 15 */
/* 548 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 550 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 552 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 554 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0x46 ),	/* 70 */
/* 558 */	NdrFcShort( 0x24 ),	/* 36 */
/* 560 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 562 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 572 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 574 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 576 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter SidEnumBuffer */

/* 578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 580 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 582 */	NdrFcShort( 0x1d8 ),	/* Type Offset=472 */

	/* Parameter ReferencedDomains */

/* 584 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 586 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 588 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedNames */

/* 590 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 592 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 594 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter LookupLevel */

/* 596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 600 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 602 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 604 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 610 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_16 */

/* 614 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x10 ),	/* 16 */
/* 622 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 624 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 634 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_17 */

/* 644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x11 ),	/* 17 */
/* 652 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 664 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_18 */

/* 674 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x12 ),	/* 18 */
/* 682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 684 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 694 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_19 */

/* 704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x13 ),	/* 19 */
/* 712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 714 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 724 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_20 */

/* 734 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x14 ),	/* 20 */
/* 742 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 744 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 754 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x15 ),	/* 21 */
/* 772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 774 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 784 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 794 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x16 ),	/* 22 */
/* 802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 804 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 814 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_23 */

/* 824 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x17 ),	/* 23 */
/* 832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 834 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 844 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_24 */

/* 854 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x18 ),	/* 24 */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 874 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_25 */

/* 884 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x19 ),	/* 25 */
/* 892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 894 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 904 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_26 */

/* 914 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1a ),	/* 26 */
/* 922 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 924 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 934 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_27 */

/* 944 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x1b ),	/* 27 */
/* 952 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 954 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_28 */

/* 974 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x1c ),	/* 28 */
/* 982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 984 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_29 */

/* 1004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1012 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1014 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1024 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_30 */

/* 1034 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1044 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1054 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_31 */

/* 1064 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1072 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1074 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1084 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_32 */

/* 1094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1102 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1114 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_33 */

/* 1124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1132 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1134 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1144 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_34 */

/* 1154 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1164 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1174 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_35 */

/* 1184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1192 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1194 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1204 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_36 */

/* 1214 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1224 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1234 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_37 */

/* 1244 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1252 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1254 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1264 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_38 */

/* 1274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1282 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1284 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1294 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_39 */

/* 1304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1324 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_40 */

/* 1334 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1344 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1346 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1354 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_41 */

/* 1364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1372 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1374 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1382 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1384 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_42 */

/* 1394 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1402 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1404 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1414 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_43 */

/* 1424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1434 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1444 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 1454 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1462 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1466 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1468 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1470 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 1480 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1484 */	NdrFcShort( 0x236 ),	/* Type Offset=566 */

	/* Parameter ObjectAttributes */

/* 1486 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1490 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter DesiredAccess */

/* 1492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1494 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 1498 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1500 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1502 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarGetUserName */

/* 1510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1518 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1520 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1528 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1530 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 1540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1542 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1544 */	NdrFcShort( 0x236 ),	/* Type Offset=566 */

	/* Parameter UserName */

/* 1546 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1548 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1550 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter DomainName */

/* 1552 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1554 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1556 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Return value */

/* 1558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1560 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_46 */

/* 1564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1572 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1582 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_47 */

/* 1594 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1602 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1604 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1606 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1614 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_48 */

/* 1624 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1634 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1644 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_49 */

/* 1654 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1664 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1674 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_50 */

/* 1684 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1694 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1704 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_51 */

/* 1714 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1722 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1724 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1734 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 1744 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1754 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1764 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_53 */

/* 1774 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1782 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1784 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1794 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_54 */

/* 1804 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1814 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1824 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_55 */

/* 1834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x37 ),	/* 55 */
/* 1842 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 1864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1874 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1884 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids2 */

/* 1894 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x39 ),	/* 57 */
/* 1902 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1904 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1906 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1908 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1910 */	NdrFcShort( 0x56 ),	/* 86 */
/* 1912 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1916 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1926 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1928 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1930 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter SidEnumBuffer */

/* 1932 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1936 */	NdrFcShort( 0x1d8 ),	/* Type Offset=472 */

	/* Parameter ReferencedDomains */

/* 1938 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1942 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedNames */

/* 1944 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1948 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter LookupLevel */

/* 1950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1954 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 1956 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 1962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1964 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1976 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames2 */

/* 1980 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcShort( 0x3a ),	/* 58 */
/* 1988 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1990 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1994 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1996 */	NdrFcShort( 0x5e ),	/* 94 */
/* 1998 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2000 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2002 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2012 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2014 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2016 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter Count */

/* 2018 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	NdrFcShort( 0x290 ),	/* 656 */

	/* Parameter Names */

/* 2024 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2026 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2028 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ReferencedDomains */

/* 2030 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2034 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedSids */

/* 2036 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2038 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2040 */	NdrFcShort( 0x2cc ),	/* Type Offset=716 */

	/* Parameter LookupLevel */

/* 2042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2044 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2046 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2048 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2050 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2056 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2062 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2068 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_DP_59 */

/* 2072 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2082 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2084 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2092 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 2102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2112 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2122 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 2132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2142 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 2162 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2180 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2182 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2200 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2202 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2222 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2230 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2232 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 2252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2262 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2272 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 2282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x42 ),	/* 66 */
/* 2290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2294 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2302 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 2312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2320 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2322 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames3 */

/* 2342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2350 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2354 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2358 */	NdrFcShort( 0x5e ),	/* 94 */
/* 2360 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2362 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2364 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2374 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2376 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2378 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter Count */

/* 2380 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2384 */	NdrFcShort( 0x2e0 ),	/* 736 */

	/* Parameter Names */

/* 2386 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2390 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ReferencedDomains */

/* 2392 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2396 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedSids */

/* 2398 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2400 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2402 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter LookupLevel */

/* 2404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2406 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2408 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2410 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2412 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2418 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2424 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2430 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 2434 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2444 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2454 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 2464 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x46 ),	/* 70 */
/* 2472 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2474 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2484 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 2494 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x47 ),	/* 71 */
/* 2502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2504 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2514 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 2524 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2534 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2536 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2544 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_73 */

/* 2554 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x49 ),	/* 73 */
/* 2562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2564 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2566 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_DP_74 */

/* 2584 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x4a ),	/* 74 */
/* 2592 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2594 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2602 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2604 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 2614 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x4b ),	/* 75 */
/* 2622 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2624 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2634 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids3 */

/* 2644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2652 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2658 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2662 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2664 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SidEnumBuffer */

/* 2674 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2676 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2678 */	NdrFcShort( 0x1d8 ),	/* Type Offset=472 */

	/* Parameter ReferencedDomains */

/* 2680 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2684 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedNames */

/* 2686 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2690 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter LookupLevel */

/* 2692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2694 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2696 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2698 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2700 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2706 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2712 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2718 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames4 */

/* 2722 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x4d ),	/* 77 */
/* 2730 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2732 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2736 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2740 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2742 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Count */

/* 2752 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2756 */	NdrFcShort( 0x334 ),	/* 820 */

	/* Parameter Names */

/* 2758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2762 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Parameter ReferencedDomains */

/* 2764 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2768 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter TranslatedSids */

/* 2770 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2772 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2774 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter LookupLevel */

/* 2776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2780 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 2782 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2784 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 2788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2790 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 2794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2796 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2802 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2804 */	0x8,		/* FC_LONG */
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
/* 16 */	NdrFcShort( 0x96 ),	/* Offset= 150 (166) */
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
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x10 ),	/* 16 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* Offset= 8 (50) */
/* 44 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 46 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 48 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 50 */	
			0x12, 0x0,	/* FC_UP */
/* 52 */	NdrFcShort( 0xffde ),	/* Offset= -34 (18) */
/* 54 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 56 */	NdrFcShort( 0x6 ),	/* 6 */
/* 58 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0x6 ),	/* 6 */
/* 64 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (54) */
/* 68 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 70 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 76 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 78 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 80 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 82 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (70) */
/* 88 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 90 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (60) */
/* 94 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 96 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 98 */	NdrFcShort( 0x1 ),	/* 1 */
/* 100 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 106 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 108 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (96) */
/* 114 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 116 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 118 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 120 */	NdrFcShort( 0x28 ),	/* 40 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0xc ),	/* Offset= 12 (136) */
/* 126 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 128 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 130 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 132 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 134 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 136 */	
			0x12, 0x0,	/* FC_UP */
/* 138 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (82) */
/* 140 */	
			0x12, 0x0,	/* FC_UP */
/* 142 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (82) */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0xffda ),	/* Offset= -38 (108) */
/* 148 */	
			0x12, 0x0,	/* FC_UP */
/* 150 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (108) */
/* 152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0xc ),	/* 12 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* Offset= 0 (158) */
/* 160 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 162 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 164 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 166 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x30 ),	/* 48 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0xc ),	/* Offset= 12 (184) */
/* 174 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 176 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 178 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 180 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 182 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 184 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 186 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (36) */
/* 192 */	
			0x12, 0x0,	/* FC_UP */
/* 194 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (118) */
/* 196 */	
			0x12, 0x0,	/* FC_UP */
/* 198 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (152) */
/* 200 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 202 */	NdrFcShort( 0x2 ),	/* Offset= 2 (204) */
/* 204 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 210 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 212 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 218 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 222 */	
			0x11, 0x0,	/* FC_RP */
/* 224 */	NdrFcShort( 0x26 ),	/* Offset= 38 (262) */
/* 226 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 228 */	NdrFcShort( 0x2 ),	/* 2 */
/* 230 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 232 */	NdrFcShort( 0x2 ),	/* 2 */
/* 234 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 236 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 242 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 244 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0x10 ),	/* 16 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x8 ),	/* Offset= 8 (258) */
/* 252 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 254 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 256 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 258 */	
			0x12, 0x0,	/* FC_UP */
/* 260 */	NdrFcShort( 0xffde ),	/* Offset= -34 (226) */
/* 262 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 272 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 276 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 278 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 280 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (244) */
/* 282 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 284 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (288) */
/* 288 */	
			0x12, 0x0,	/* FC_UP */
/* 290 */	NdrFcShort( 0x2a ),	/* Offset= 42 (332) */
/* 292 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x18 ),	/* 24 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x8 ),	/* Offset= 8 (306) */
/* 300 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 302 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (244) */
/* 304 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 306 */	
			0x12, 0x0,	/* FC_UP */
/* 308 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (82) */
/* 310 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 320 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 324 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 326 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (292) */
/* 330 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 332 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 334 */	NdrFcShort( 0x18 ),	/* 24 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x8 ),	/* Offset= 8 (346) */
/* 340 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 342 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 344 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 346 */	
			0x12, 0x0,	/* FC_UP */
/* 348 */	NdrFcShort( 0xffda ),	/* Offset= -38 (310) */
/* 350 */	
			0x11, 0x0,	/* FC_RP */
/* 352 */	NdrFcShort( 0x2e ),	/* Offset= 46 (398) */
/* 354 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 364 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 366 */	NdrFcShort( 0xc ),	/* 12 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* Offset= 0 (370) */
/* 372 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 374 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 376 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 386 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 390 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 392 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 394 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (364) */
/* 396 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 398 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 400 */	NdrFcShort( 0x10 ),	/* 16 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0xa ),	/* Offset= 10 (414) */
/* 406 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 408 */	NdrFcShort( 0xffca ),	/* Offset= -54 (354) */
/* 410 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 412 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 414 */	
			0x12, 0x0,	/* FC_UP */
/* 416 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (376) */
/* 418 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 420 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 422 */	
			0x11, 0x0,	/* FC_RP */
/* 424 */	NdrFcShort( 0x30 ),	/* Offset= 48 (472) */
/* 426 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 436 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x4 ),	/* Offset= 4 (446) */
/* 444 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 446 */	
			0x12, 0x0,	/* FC_UP */
/* 448 */	NdrFcShort( 0xfe92 ),	/* Offset= -366 (82) */
/* 450 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 460 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 464 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 466 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 468 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (436) */
/* 470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 472 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0xa ),	/* Offset= 10 (488) */
/* 480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 482 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (426) */
/* 484 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 488 */	
			0x12, 0x0,	/* FC_UP */
/* 490 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (450) */
/* 492 */	
			0x11, 0x0,	/* FC_RP */
/* 494 */	NdrFcShort( 0x34 ),	/* Offset= 52 (546) */
/* 496 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 508 */	NdrFcShort( 0x20 ),	/* 32 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* Offset= 0 (512) */
/* 514 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xfeee ),	/* Offset= -274 (244) */
/* 520 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 534 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 538 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 540 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 542 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (506) */
/* 544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 546 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 548 */	NdrFcShort( 0x10 ),	/* 16 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0xa ),	/* Offset= 10 (562) */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (496) */
/* 558 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 562 */	
			0x12, 0x0,	/* FC_UP */
/* 564 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (524) */
/* 566 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 568 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 570 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 572 */	NdrFcShort( 0x2 ),	/* Offset= 2 (574) */
/* 574 */	
			0x12, 0x0,	/* FC_UP */
/* 576 */	NdrFcShort( 0xfeb4 ),	/* Offset= -332 (244) */
/* 578 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 580 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (574) */
/* 582 */	
			0x11, 0x0,	/* FC_RP */
/* 584 */	NdrFcShort( 0x34 ),	/* Offset= 52 (636) */
/* 586 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 592 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 596 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 598 */	NdrFcShort( 0x20 ),	/* 32 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* Offset= 0 (602) */
/* 604 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 606 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 608 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (244) */
/* 610 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 614 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 624 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 628 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 630 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 632 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (596) */
/* 634 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x10 ),	/* 16 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xa ),	/* Offset= 10 (652) */
/* 644 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (586) */
/* 648 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (614) */
/* 656 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 662 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 666 */	
			0x11, 0x0,	/* FC_RP */
/* 668 */	NdrFcShort( 0x30 ),	/* Offset= 48 (716) */
/* 670 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* Offset= 0 (686) */
/* 688 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 690 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 694 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 704 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 708 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 710 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (680) */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0xa ),	/* Offset= 10 (732) */
/* 724 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (670) */
/* 728 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 730 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 732 */	
			0x12, 0x0,	/* FC_UP */
/* 734 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (694) */
/* 736 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 742 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 746 */	
			0x11, 0x0,	/* FC_RP */
/* 748 */	NdrFcShort( 0x34 ),	/* Offset= 52 (800) */
/* 750 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x18 ),	/* 24 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x8 ),	/* Offset= 8 (774) */
/* 768 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 770 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 772 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 774 */	
			0x12, 0x0,	/* FC_UP */
/* 776 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (82) */
/* 778 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 788 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 792 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (760) */
/* 798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 800 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0xa ),	/* Offset= 10 (816) */
/* 808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 810 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (750) */
/* 812 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 814 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 816 */	
			0x12, 0x0,	/* FC_UP */
/* 818 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (778) */
/* 820 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 826 */	NdrFcLong( 0x3e8 ),	/* 1000 */

			0x0
        }
    };

static void __RPC_USER lsarpc__LSAPR_ACLExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _LSAPR_ACL *pS	=	( struct _LSAPR_ACL * )(( pStubMsg->StackTop - 4 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( ( pS->AclSize - 4 )  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    lsarpc__LSAPR_ACLExprEval_0000
    };


static const unsigned short lsarpc_FormatStringOffsetTable[] =
    {
    0,
    44,
    74,
    104,
    134,
    164,
    194,
    250,
    280,
    310,
    340,
    370,
    400,
    430,
    460,
    540,
    614,
    644,
    674,
    704,
    734,
    764,
    794,
    824,
    854,
    884,
    914,
    944,
    974,
    1004,
    1034,
    1064,
    1094,
    1124,
    1154,
    1184,
    1214,
    1244,
    1274,
    1304,
    1334,
    1364,
    1394,
    1424,
    1454,
    1510,
    1564,
    1594,
    1624,
    1654,
    1684,
    1714,
    1744,
    1774,
    1804,
    1834,
    1864,
    1894,
    1980,
    2072,
    2102,
    2132,
    2162,
    2192,
    2222,
    2252,
    2282,
    2312,
    2342,
    2434,
    2464,
    2494,
    2524,
    2554,
    2584,
    2614,
    2644,
    2722
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


#endif /* defined(_M_AMD64)*/

