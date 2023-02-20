

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsar.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)

#ifdef _MSC_VER
#define decor extern
#else
#define decor static
#endif

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

#include "ms-lsar.h"
#include "bofdefs.h"

#define TYPE_FORMAT_STRING_SIZE   2985                              
#define PROC_FORMAT_STRING_SIZE   5583                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dlsar_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dlsar_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dlsar_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dlsar_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dlsar_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dlsar_MIDL_EXPR_FORMAT_STRING;


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


decor const ms2Dlsar_MIDL_TYPE_FORMAT_STRING ms2Dlsar__MIDL_TypeFormatString;
decor const ms2Dlsar_MIDL_PROC_FORMAT_STRING ms2Dlsar__MIDL_ProcFormatString;
decor const ms2Dlsar_MIDL_EXPR_FORMAT_STRING ms2Dlsar__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   1            


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

decor const MIDL_STUB_DESC lsarpc_StubDesc;

static RPC_BINDING_HANDLE lsarpc__MIDL_AutoBindHandle;


NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[42],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarEnumeratePrivileges( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQuerySecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PLSAPR_SR_SECURITY_DESCRIPTOR *SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[130],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[184],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[238],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[266],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[320],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[374],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[428],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarCreateAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *AccountHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[456],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccounts( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[516],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUST_INFORMATION TrustedDomainInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[576],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateTrustedDomains( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[636],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[696],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[774],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *SecretHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[846],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *AccountHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[906],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET *Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[966],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1014],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRemovePrivilegesFromAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned char AllPrivileges,
    /* [unique][in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1062],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1116],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1144],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ unsigned long *SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1172],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned long SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1220],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1268],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInfoTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1328],
                  ( unsigned char * )&TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1382],
                  ( unsigned char * )&TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *SecretHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1436],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedOldValue)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1496],
                  ( unsigned char * )&SecretHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQuerySecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedCurrentValue,
    /* [unique][out][in] */ PLARGE_INTEGER CurrentValueSetTime,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedOldValue,
    /* [unique][out][in] */ PLARGE_INTEGER OldValueSetTime)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1550],
                  ( unsigned char * )&SecretHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeValue( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [out] */ PLUID Value)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1616],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLUID Value,
    /* [out] */ PRPC_UNICODE_STRING *Name)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1670],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeDisplayName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ short ClientLanguage,
    /* [in] */ short ClientSystemDefaultLanguage,
    /* [out] */ PRPC_UNICODE_STRING *DisplayName,
    /* [out] */ unsigned short *LanguageReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1724],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1796],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountsWithUserRight( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING UserRight,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1838],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [out] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1892],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1946],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRemoveAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ unsigned char AllRights,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2000],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2060],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2120],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2180],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarStorePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2228],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRetrievePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2282],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenPolicy2( 
    /* [string][unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2336],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2390],
                  ( unsigned char * )&IDL_handle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2442],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2496],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryTrustedDomainInfoByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2550],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetTrustedDomainInfoByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2610],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateTrustedDomainsEx( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER_EX EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2670],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateTrustedDomainEx( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2730],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2796],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarQueryDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_DOMAIN_INFORMATION *PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2824],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][unique][in] */ PLSAPR_POLICY_DOMAIN_INFORMATION PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2878],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenTrustedDomainByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2932],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2992],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3020],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3104],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateTrustedDomainEx2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3194],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3260],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3288],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3316],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3344],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3372],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3400],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3428],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3456],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3484],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3574],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3602],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3630],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3658],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarQueryForestTrustInformation( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSA_UNICODE_STRING TrustedDomainName,
    /* [in] */ LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    /* [out] */ PLSA_FOREST_TRUST_INFORMATION *ForestTrustInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3686],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetForestTrustInformation( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSA_UNICODE_STRING TrustedDomainName,
    /* [in] */ LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    /* [in] */ PLSA_FOREST_TRUST_INFORMATION ForestTrustInfo,
    /* [in] */ unsigned char CheckOnly,
    /* [out] */ PLSA_FOREST_TRUST_COLLISION_INFORMATION *CollisionInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3746],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3818],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3846],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3922],
                  ( unsigned char * )&RpcHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum78NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4004],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum79NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4032],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum80NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4060],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum81NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4088],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum82NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4116],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4144],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum84NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4172],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum85NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4200],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum86NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4228],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum87NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4256],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum88NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4284],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum89NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4312],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4340],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4368],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4396],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4424],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4452],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4480],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum96NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4508],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum97NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4536],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4564],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4592],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4620],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4648],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum102NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4676],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4704],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum104NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4732],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4760],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4788],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4816],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4844],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4872],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum110NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4900],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum111NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4928],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum112NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4956],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum113NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4984],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5012],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum115NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5040],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum116NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5068],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum117NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5096],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum118NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5124],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum119NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5152],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum120NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5180],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum121NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5208],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum122NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5236],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum123NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5264],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum124NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5292],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum125NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5320],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum126NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5348],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum127NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5376],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum128NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5404],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarCreateTrustedDomainEx3( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5432],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenPolicy3( 
    /* [string][unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG InVersion,
    /* [switch_is][in] */ LSAPR_REVISION_INFO *InRevisionInfo,
    /* [out] */ ULONG *OutVersion,
    /* [switch_is][out] */ LSAPR_REVISION_INFO *OutRevisionInfo,
    /* [out] */ LSAPR_HANDLE *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5498],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

decor const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];
decor const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Dlsar_MIDL_PROC_FORMAT_STRING ms2Dlsar__MIDL_ProcFormatString =
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

	/* Procedure LsarEnumeratePrivileges */

/* 70 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 72 */	NdrFcLong( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x2 ),	/* 2 */
/* 78 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 80 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 82 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0x48 ),	/* 72 */
/* 88 */	NdrFcShort( 0x24 ),	/* 36 */
/* 90 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 92 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 100 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 102 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 104 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 106 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 112 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 116 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Parameter PreferedMaximumLength */

/* 118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 120 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 126 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecurityObject */

/* 130 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x3 ),	/* 3 */
/* 138 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 140 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 142 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 144 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x2c ),	/* 44 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 152 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 160 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 162 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 164 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecurityInformation */

/* 166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 172 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 176 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecurityObject */

/* 184 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 194 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 196 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 198 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 200 */	NdrFcShort( 0x2c ),	/* 44 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 206 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 214 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 216 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 218 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecurityInformation */

/* 220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 230 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Return value */

/* 232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x5 ),	/* 5 */
/* 246 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 248 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x6 ),	/* 6 */
/* 274 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 276 */	NdrFcShort( 0x22 ),	/* 34 */
/* 278 */	NdrFcShort( 0x40 ),	/* 64 */
/* 280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 282 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 290 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 292 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 294 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter ObjectAttributes */

/* 296 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 300 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter DesiredAccess */

/* 302 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 308 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 310 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 312 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 316 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInformationPolicy */

/* 320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x7 ),	/* 7 */
/* 328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 330 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 334 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 336 */	NdrFcShort( 0x2a ),	/* 42 */
/* 338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 340 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 342 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 350 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 354 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 360 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 362 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 364 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 366 */	NdrFcShort( 0x1a8 ),	/* Type Offset=424 */

	/* Return value */

/* 368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 370 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy */

/* 374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 382 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 386 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0x2a ),	/* 42 */
/* 392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 396 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 406 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 408 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 414 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 416 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 424 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum9NotUsedOnWire */

/* 428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x9 ),	/* 9 */
/* 436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 438 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateAccount */

/* 456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xa ),	/* 10 */
/* 464 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 466 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 470 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 472 */	NdrFcShort( 0x2c ),	/* 44 */
/* 474 */	NdrFcShort( 0x40 ),	/* 64 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 486 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 490 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 492 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 496 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter DesiredAccess */

/* 498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 504 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 508 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccounts */

/* 516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xb ),	/* 11 */
/* 524 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 532 */	NdrFcShort( 0x48 ),	/* 72 */
/* 534 */	NdrFcShort( 0x24 ),	/* 36 */
/* 536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 538 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 546 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 550 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 552 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 558 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Parameter PreferedMaximumLength */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomain */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0xc ),	/* 12 */
/* 584 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 586 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 590 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 592 */	NdrFcShort( 0x2c ),	/* 44 */
/* 594 */	NdrFcShort( 0x40 ),	/* 64 */
/* 596 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 598 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 606 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 610 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 616 */	NdrFcShort( 0x25c ),	/* Type Offset=604 */

	/* Parameter DesiredAccess */

/* 618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 624 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 628 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomains */

/* 636 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xd ),	/* 13 */
/* 644 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 646 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 648 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 650 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 652 */	NdrFcShort( 0x48 ),	/* 72 */
/* 654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 656 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 658 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 666 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 668 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 670 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 672 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 678 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	NdrFcShort( 0x3fc ),	/* Type Offset=1020 */

	/* Parameter PreferedMaximumLength */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames */

/* 696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xe ),	/* 14 */
/* 704 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 706 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 710 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0x4e ),	/* 78 */
/* 714 */	NdrFcShort( 0x24 ),	/* 36 */
/* 716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 718 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 726 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 728 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 730 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 732 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	NdrFcShort( 0x410 ),	/* 1040 */

	/* Parameter Names */

/* 738 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 742 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Parameter ReferencedDomains */

/* 744 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedSids */

/* 750 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 754 */	NdrFcShort( 0x48e ),	/* Type Offset=1166 */

	/* Parameter LookupLevel */

/* 756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 758 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 760 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 762 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 764 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupSids */

/* 774 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0xf ),	/* 15 */
/* 782 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 784 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 786 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 788 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 790 */	NdrFcShort( 0x46 ),	/* 70 */
/* 792 */	NdrFcShort( 0x24 ),	/* 36 */
/* 794 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 796 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 804 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 806 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 808 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SidEnumBuffer */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 814 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter ReferencedDomains */

/* 816 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 820 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedNames */

/* 822 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Parameter LookupLevel */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 832 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 834 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 836 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateSecret */

/* 846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 854 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 856 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 858 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 860 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0x2c ),	/* 44 */
/* 864 */	NdrFcShort( 0x40 ),	/* 64 */
/* 866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 868 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 876 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 878 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 880 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 882 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 886 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 894 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 898 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenAccount */

/* 906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x11 ),	/* 17 */
/* 914 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 916 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 918 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 920 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 922 */	NdrFcShort( 0x2c ),	/* 44 */
/* 924 */	NdrFcShort( 0x40 ),	/* 64 */
/* 926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 928 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 936 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 940 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 942 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 946 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter DesiredAccess */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 954 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 958 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumeratePrivilegesAccount */

/* 966 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x12 ),	/* 18 */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 978 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 980 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 982 */	NdrFcShort( 0x24 ),	/* 36 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 988 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 996 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 998 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1000 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 1002 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1006 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddPrivilegesToAccount */

/* 1014 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1024 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1026 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1028 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1030 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1036 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1044 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1046 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1048 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 1050 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1054 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemovePrivilegesFromAccount */

/* 1062 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1070 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1072 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1074 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1076 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1078 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1084 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1092 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1094 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1096 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AllPrivileges */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Privileges */

/* 1104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */

/* 1110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1116 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1126 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1154 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarGetSystemAccessAccount */

/* 1172 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1182 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1184 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1186 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1190 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1192 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1194 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1202 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1206 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1210 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSystemAccessAccount */

/* 1220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1228 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1230 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1234 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1236 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1250 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1252 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1254 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomain */

/* 1268 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1276 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1278 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1280 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1282 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1284 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1286 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1290 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1298 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1302 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 1304 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1308 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter DesiredAccess */

/* 1310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1316 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1320 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 1322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInfoTrustedDomain */

/* 1328 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1336 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1338 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1340 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1342 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1348 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1350 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1358 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1362 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1368 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1370 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1374 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */

	/* Return value */

/* 1376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1378 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationTrustedDomain */

/* 1382 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1392 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1394 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1396 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1398 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1404 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1412 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1416 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1422 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1428 */	NdrFcShort( 0x7a0 ),	/* Type Offset=1952 */

	/* Return value */

/* 1430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenSecret */

/* 1436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1444 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1446 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1448 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1450 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1452 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1454 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1458 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1470 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 1472 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1476 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 1478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 1484 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1486 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1488 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 1490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecret */

/* 1496 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1506 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1508 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1510 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1518 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1526 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1530 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1532 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1536 */	NdrFcShort( 0x7aa ),	/* Type Offset=1962 */

	/* Parameter EncryptedOldValue */

/* 1538 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1542 */	NdrFcShort( 0x7aa ),	/* Type Offset=1962 */

	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecret */

/* 1550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1558 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1560 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1564 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1566 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1568 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1572 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1580 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1582 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1584 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1586 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1590 */	NdrFcShort( 0x7ae ),	/* Type Offset=1966 */

	/* Parameter CurrentValueSetTime */

/* 1592 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1596 */	NdrFcShort( 0x7b2 ),	/* Type Offset=1970 */

	/* Parameter EncryptedOldValue */

/* 1598 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1602 */	NdrFcShort( 0x7ae ),	/* Type Offset=1966 */

	/* Parameter OldValueSetTime */

/* 1604 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1608 */	NdrFcShort( 0x7b2 ),	/* Type Offset=1970 */

	/* Return value */

/* 1610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1612 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeValue */

/* 1616 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1626 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1628 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1630 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1634 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1636 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1638 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1646 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1648 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1650 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1652 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1656 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter Value */

/* 1658 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1662 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 1664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeName */

/* 1670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1678 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1680 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1682 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1684 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1686 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1690 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1692 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1700 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1702 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1704 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Value */

/* 1706 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1710 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter Name */

/* 1712 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1716 */	NdrFcShort( 0x7be ),	/* Type Offset=1982 */

	/* Return value */

/* 1718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeDisplayName */

/* 1724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1732 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1740 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1742 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1746 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1754 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1758 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1760 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1764 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter ClientLanguage */

/* 1766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1770 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ClientSystemDefaultLanguage */

/* 1772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1774 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1776 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter DisplayName */

/* 1778 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1782 */	NdrFcShort( 0x7be ),	/* Type Offset=1982 */

	/* Parameter LanguageReturned */

/* 1784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1786 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1788 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1792 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteObject */

/* 1796 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1802 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1806 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1808 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1810 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1812 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1814 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1816 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1818 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 1826 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1828 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1830 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountsWithUserRight */

/* 1838 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1846 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1848 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1850 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1852 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1854 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1858 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1860 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1864 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1868 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1870 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1872 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter UserRight */

/* 1874 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1878 */	NdrFcShort( 0x7c2 ),	/* Type Offset=1986 */

	/* Parameter EnumerationBuffer */

/* 1880 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1884 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 1886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountRights */

/* 1892 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1900 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1902 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1906 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1912 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1914 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1922 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1924 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1926 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1928 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1932 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter UserRights */

/* 1934 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1938 */	NdrFcShort( 0x7d8 ),	/* Type Offset=2008 */

	/* Return value */

/* 1940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1942 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddAccountRights */

/* 1946 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1954 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1956 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1958 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1960 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1962 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1966 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1968 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1976 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1978 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1980 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1982 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1984 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1986 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter UserRights */

/* 1988 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1990 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1992 */	NdrFcShort( 0x7d8 ),	/* Type Offset=2008 */

	/* Return value */

/* 1994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1996 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemoveAccountRights */

/* 2000 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2006 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2008 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2010 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2012 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2014 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2016 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2020 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2022 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2030 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2032 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2034 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 2036 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2038 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2040 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter AllRights */

/* 2042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2044 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2046 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter UserRights */

/* 2048 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2052 */	NdrFcShort( 0x7d8 ),	/* Type Offset=2008 */

	/* Return value */

/* 2054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2056 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfo */

/* 2060 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2068 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2070 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2072 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2074 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2076 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2080 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2082 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2086 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2090 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2092 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2094 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2096 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2100 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter InformationClass */

/* 2102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2106 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2108 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2112 */	NdrFcShort( 0x7ee ),	/* Type Offset=2030 */

	/* Return value */

/* 2114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfo */

/* 2120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2128 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2136 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2140 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2142 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2150 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2154 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2160 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter InformationClass */

/* 2162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2166 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2168 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2172 */	NdrFcShort( 0x804 ),	/* Type Offset=2052 */

	/* Return value */

/* 2174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2176 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteTrustedDomain */

/* 2180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2190 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2194 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2196 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2202 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2210 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2214 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2216 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2220 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Return value */

/* 2222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarStorePrivateData */

/* 2228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2238 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2248 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2250 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2258 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2262 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2268 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter EncryptedData */

/* 2270 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2274 */	NdrFcShort( 0x7aa ),	/* Type Offset=1962 */

	/* Return value */

/* 2276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2278 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRetrievePrivateData */

/* 2282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2292 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2298 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2302 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2304 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2316 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2322 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter EncryptedData */

/* 2324 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2328 */	NdrFcShort( 0x80e ),	/* Type Offset=2062 */

	/* Return value */

/* 2330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2332 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 2336 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 2338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2344 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2348 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2352 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2362 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2364 */	NdrFcShort( 0x812 ),	/* Type Offset=2066 */

	/* Parameter ObjectAttributes */

/* 2366 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2370 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter DesiredAccess */

/* 2372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 2378 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2382 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 2384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarGetUserName */

/* 2390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2398 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2410 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2418 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2422 */	NdrFcShort( 0x812 ),	/* Type Offset=2066 */

	/* Parameter UserName */

/* 2424 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2428 */	NdrFcShort( 0x7be ),	/* Type Offset=1982 */

	/* Parameter DomainName */

/* 2430 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2432 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2434 */	NdrFcShort( 0x816 ),	/* Type Offset=2070 */

	/* Return value */

/* 2436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInformationPolicy2 */

/* 2442 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2452 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2454 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2456 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2458 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2464 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2472 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2474 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2476 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2482 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2484 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2488 */	NdrFcShort( 0x81a ),	/* Type Offset=2074 */

	/* Return value */

/* 2490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy2 */

/* 2496 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2506 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2508 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2510 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2512 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2518 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2526 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2530 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2536 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2538 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2542 */	NdrFcShort( 0x830 ),	/* Type Offset=2096 */

	/* Return value */

/* 2544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfoByName */

/* 2550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2558 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2560 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2564 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2566 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2572 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2580 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2582 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2584 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2586 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2588 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2590 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter InformationClass */

/* 2592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2596 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2598 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2602 */	NdrFcShort( 0x83a ),	/* Type Offset=2106 */

	/* Return value */

/* 2604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2606 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfoByName */

/* 2610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2618 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2620 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2622 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2624 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2626 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2630 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2632 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2640 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2644 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2646 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2650 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter InformationClass */

/* 2652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2656 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2658 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2660 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2662 */	NdrFcShort( 0x850 ),	/* Type Offset=2128 */

	/* Return value */

/* 2664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2666 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomainsEx */

/* 2670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2678 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2680 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2682 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2684 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2686 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2688 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2690 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2692 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2700 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2702 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2704 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 2706 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 2712 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2716 */	NdrFcShort( 0x890 ),	/* Type Offset=2192 */

	/* Parameter PreferedMaximumLength */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2726 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx */

/* 2730 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2740 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2742 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2744 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2746 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2748 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2750 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2752 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2760 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2762 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2764 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 2766 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2770 */	NdrFcShort( 0x650 ),	/* Type Offset=1616 */

	/* Parameter AuthenticationInformation */

/* 2772 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2776 */	NdrFcShort( 0x6c2 ),	/* Type Offset=1730 */

	/* Parameter DesiredAccess */

/* 2778 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2784 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2788 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2796 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2806 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2816 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryDomainInformationPolicy */

/* 2824 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2834 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2836 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2838 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2840 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2846 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2854 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2856 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2858 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2864 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2866 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2870 */	NdrFcShort( 0x8ac ),	/* Type Offset=2220 */

	/* Return value */

/* 2872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetDomainInformationPolicy */

/* 2878 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2888 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2890 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2892 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2894 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2900 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2908 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2910 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2912 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2918 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2920 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2924 */	NdrFcShort( 0x906 ),	/* Type Offset=2310 */

	/* Return value */

/* 2926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomainByName */

/* 2932 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2940 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2942 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2944 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2946 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2948 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2950 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2954 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2962 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2966 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2968 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2972 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 2974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2980 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2984 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 2986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 2992 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3002 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3004 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3012 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids2 */

/* 3020 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3026 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3028 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3030 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3032 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3034 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3038 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 3042 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3050 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3052 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3054 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SidEnumBuffer */

/* 3056 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3060 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter ReferencedDomains */

/* 3062 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3066 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedNames */

/* 3068 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3072 */	NdrFcShort( 0x948 ),	/* Type Offset=2376 */

	/* Parameter LookupLevel */

/* 3074 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3078 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3080 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3082 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3088 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3092 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3094 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3100 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames2 */

/* 3104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3112 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3116 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3120 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3124 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3126 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3134 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3136 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3138 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 3140 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3144 */	NdrFcShort( 0x95a ),	/* 2394 */

	/* Parameter Names */

/* 3146 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3150 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Parameter ReferencedDomains */

/* 3152 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3156 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedSids */

/* 3158 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3162 */	NdrFcShort( 0x996 ),	/* Type Offset=2454 */

	/* Parameter LookupLevel */

/* 3164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3166 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3168 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3170 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3172 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3178 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3184 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3190 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx2 */

/* 3194 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3202 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3204 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3206 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3208 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3210 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3212 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3214 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3216 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3224 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3226 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3228 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 3230 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3234 */	NdrFcShort( 0x650 ),	/* Type Offset=1616 */

	/* Parameter AuthenticationInformation */

/* 3236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3240 */	NdrFcShort( 0x71a ),	/* Type Offset=1818 */

	/* Parameter DesiredAccess */

/* 3242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 3248 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3252 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 3254 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3256 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 3260 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3270 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3272 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 3288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3298 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3308 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 3316 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3326 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3336 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3344 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3352 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3354 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3382 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 3400 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3408 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3410 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3418 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 3428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3438 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3466 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3476 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames3 */

/* 3484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3492 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3494 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3496 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3498 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3500 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3502 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3504 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3506 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3514 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3516 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3518 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 3520 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3522 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3524 */	NdrFcShort( 0x9ac ),	/* 2476 */

	/* Parameter Names */

/* 3526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3528 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3530 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Parameter ReferencedDomains */

/* 3532 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3536 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedSids */

/* 3538 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3542 */	NdrFcShort( 0x9ec ),	/* Type Offset=2540 */

	/* Parameter LookupLevel */

/* 3544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3546 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3548 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3550 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3552 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3558 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3564 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3570 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3574 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3584 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3594 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 3602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3612 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3614 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3648 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3650 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3658 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3668 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3678 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryForestTrustInformation */

/* 3686 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3694 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3696 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3698 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3700 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3702 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3706 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3708 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3712 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3716 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3718 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3720 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3722 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3726 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter HighestRecordType */

/* 3728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3732 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3734 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3738 */	NdrFcShort( 0x9fe ),	/* Type Offset=2558 */

	/* Return value */

/* 3740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3742 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetForestTrustInformation */

/* 3746 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3754 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3756 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3760 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3762 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3766 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3768 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3776 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3778 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3780 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3782 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3786 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter HighestRecordType */

/* 3788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3792 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3794 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3798 */	NdrFcShort( 0xad4 ),	/* Type Offset=2772 */

	/* Parameter CheckOnly */

/* 3800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3804 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter CollisionInfo */

/* 3806 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3808 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3810 */	NdrFcShort( 0xaea ),	/* Type Offset=2794 */

	/* Return value */

/* 3812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3814 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 3818 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3826 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3828 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3830 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3838 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids3 */

/* 3846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3854 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 3856 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3858 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3860 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3862 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3864 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3866 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SidEnumBuffer */

/* 3874 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3878 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Parameter ReferencedDomains */

/* 3880 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3884 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedNames */

/* 3886 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3890 */	NdrFcShort( 0x948 ),	/* Type Offset=2376 */

	/* Parameter LookupLevel */

/* 3892 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3896 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3898 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3900 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3906 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3912 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3918 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames4 */

/* 3922 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3930 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3932 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3936 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3938 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3940 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 3942 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3944 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Count */

/* 3950 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3952 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3954 */	NdrFcShort( 0xb36 ),	/* 2870 */

	/* Parameter Names */

/* 3956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3958 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3960 */	NdrFcShort( 0x41e ),	/* Type Offset=1054 */

	/* Parameter ReferencedDomains */

/* 3962 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3966 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Parameter TranslatedSids */

/* 3968 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3970 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3972 */	NdrFcShort( 0x9ec ),	/* Type Offset=2540 */

	/* Parameter LookupLevel */

/* 3974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3976 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3978 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3980 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3982 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3988 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3994 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4000 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 4002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum78NotUsedOnWire */

/* 4004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4010 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4014 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum79NotUsedOnWire */

/* 4032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4040 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4042 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4044 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4050 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4052 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum80NotUsedOnWire */

/* 4060 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4068 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4070 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum81NotUsedOnWire */

/* 4088 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4098 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4108 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum82NotUsedOnWire */

/* 4116 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4126 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4128 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4134 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 4144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4154 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4162 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4164 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum84NotUsedOnWire */

/* 4172 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4178 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4182 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4184 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4190 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum85NotUsedOnWire */

/* 4200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum86NotUsedOnWire */

/* 4228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum87NotUsedOnWire */

/* 4256 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4264 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4266 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4276 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum88NotUsedOnWire */

/* 4284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4294 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4296 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4304 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum89NotUsedOnWire */

/* 4312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4318 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4322 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4332 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 4340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4348 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 4368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x5b ),	/* 91 */
/* 4376 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4378 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4380 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4388 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 4396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4404 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4406 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 4424 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4430 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4434 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4436 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4442 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4444 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 4452 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4462 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4470 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 4480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4492 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum96NotUsedOnWire */

/* 4508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4514 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4518 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4520 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4526 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum97NotUsedOnWire */

/* 4536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4542 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4546 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4548 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4554 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4556 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 4564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4570 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4584 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 4592 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4602 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4604 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4610 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4612 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 4620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4630 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4632 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4638 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4640 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 4648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4668 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum102NotUsedOnWire */

/* 4676 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4682 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4686 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4696 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 4704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4710 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4714 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4716 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4722 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum104NotUsedOnWire */

/* 4732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4738 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4742 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4750 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 4760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4770 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4780 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 4788 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x6a ),	/* 106 */
/* 4796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4798 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4800 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 4816 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4822 */	NdrFcShort( 0x6b ),	/* 107 */
/* 4824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4826 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4828 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4834 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4836 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 4844 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4854 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4862 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 4872 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4882 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4884 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4890 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum110NotUsedOnWire */

/* 4900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0x6e ),	/* 110 */
/* 4908 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4912 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4918 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4920 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum111NotUsedOnWire */

/* 4928 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4934 */	NdrFcShort( 0x6f ),	/* 111 */
/* 4936 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4938 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4940 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4948 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum112NotUsedOnWire */

/* 4956 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0x70 ),	/* 112 */
/* 4964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4966 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4968 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4974 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4976 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum113NotUsedOnWire */

/* 4984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4990 */	NdrFcShort( 0x71 ),	/* 113 */
/* 4992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4994 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4996 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5002 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5004 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 5012 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5018 */	NdrFcShort( 0x72 ),	/* 114 */
/* 5020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5022 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum115NotUsedOnWire */

/* 5040 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x73 ),	/* 115 */
/* 5048 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5050 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5052 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum116NotUsedOnWire */

/* 5068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x74 ),	/* 116 */
/* 5076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5078 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5080 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5088 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum117NotUsedOnWire */

/* 5096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x75 ),	/* 117 */
/* 5104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5106 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5114 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum118NotUsedOnWire */

/* 5124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5130 */	NdrFcShort( 0x76 ),	/* 118 */
/* 5132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5134 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5136 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5144 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum119NotUsedOnWire */

/* 5152 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5158 */	NdrFcShort( 0x77 ),	/* 119 */
/* 5160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5162 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5164 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5172 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum120NotUsedOnWire */

/* 5180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5198 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5200 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum121NotUsedOnWire */

/* 5208 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5218 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum122NotUsedOnWire */

/* 5236 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x7a ),	/* 122 */
/* 5244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5254 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5256 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum123NotUsedOnWire */

/* 5264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5270 */	NdrFcShort( 0x7b ),	/* 123 */
/* 5272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5276 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5282 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum124NotUsedOnWire */

/* 5292 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x7c ),	/* 124 */
/* 5300 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5302 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5304 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5310 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5312 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum125NotUsedOnWire */

/* 5320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x7d ),	/* 125 */
/* 5328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5330 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5338 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum126NotUsedOnWire */

/* 5348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x7e ),	/* 126 */
/* 5356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5358 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5366 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5368 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum127NotUsedOnWire */

/* 5376 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x7f ),	/* 127 */
/* 5384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5386 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5388 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5394 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum128NotUsedOnWire */

/* 5404 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5410 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5414 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5416 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5422 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx3 */

/* 5432 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5438 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5442 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5446 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5448 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5450 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5454 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 5462 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5466 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 5468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5472 */	NdrFcShort( 0x650 ),	/* Type Offset=1616 */

	/* Parameter AuthenticationInformation */

/* 5474 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5478 */	NdrFcShort( 0xb66 ),	/* Type Offset=2918 */

	/* Parameter DesiredAccess */

/* 5480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 5486 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5490 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 5492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy3 */

/* 5498 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5506 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5508 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 5510 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5512 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5514 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5516 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5518 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5520 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 5528 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5530 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5532 */	NdrFcShort( 0x812 ),	/* Type Offset=2066 */

	/* Parameter ObjectAttributes */

/* 5534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5538 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter DesiredAccess */

/* 5540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InVersion */

/* 5546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InRevisionInfo */

/* 5552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5556 */	NdrFcShort( 0xb84 ),	/* Type Offset=2948 */

	/* Parameter OutVersion */

/* 5558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter OutRevisionInfo */

/* 5564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5566 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5568 */	NdrFcShort( 0xb9e ),	/* Type Offset=2974 */

	/* Parameter PolicyHandle */

/* 5570 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5572 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5574 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 5576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5578 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dlsar_MIDL_TYPE_FORMAT_STRING ms2Dlsar__MIDL_TypeFormatString =
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
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 16 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 18 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 20 */	NdrFcShort( 0x58 ),	/* Offset= 88 (108) */
/* 22 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x2 ),	/* 2 */
/* 34 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 36 */	NdrFcShort( 0x2 ),	/* 2 */
/* 38 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 40 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 46 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x10 ),	/* 16 */
/* 52 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (30) */
/* 64 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 66 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 68 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (22) */
/* 72 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 74 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 76 */	NdrFcShort( 0x10 ),	/* 16 */
/* 78 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 84 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 88 */	NdrFcShort( 0x10 ),	/* 16 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* 1 */
/* 94 */	NdrFcShort( 0x4 ),	/* 4 */
/* 96 */	NdrFcShort( 0x4 ),	/* 4 */
/* 98 */	0x12, 0x0,	/* FC_UP */
/* 100 */	NdrFcShort( 0xffba ),	/* Offset= -70 (30) */
/* 102 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 104 */	0x0,		/* 0 */
			NdrFcShort( 0xffc7 ),	/* Offset= -57 (48) */
			0x5b,		/* FC_END */
/* 108 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	0x12, 0x0,	/* FC_UP */
/* 122 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (74) */
/* 124 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 128 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0x18 ),	/* Offset= 24 (158) */
/* 136 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 142 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 146 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 150 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 158 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x8 ),	/* Offset= 8 (172) */
/* 166 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (136) */
/* 170 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 172 */	
			0x12, 0x0,	/* FC_UP */
/* 174 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (146) */
/* 176 */	
			0x11, 0x0,	/* FC_RP */
/* 178 */	NdrFcShort( 0xffec ),	/* Offset= -20 (158) */
/* 180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x11, 0x0,	/* FC_RP */
/* 186 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (362) */
/* 188 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 192 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 194 */	NdrFcShort( 0x2 ),	/* 2 */
/* 196 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 198 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 204 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 206 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 212 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 216 */	NdrFcShort( 0x4 ),	/* 4 */
/* 218 */	0x12, 0x0,	/* FC_UP */
/* 220 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (188) */
/* 222 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 224 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 228 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 232 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 234 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0x6 ),	/* 6 */
/* 238 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (228) */
/* 242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 244 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 248 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 250 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 252 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 254 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 256 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (244) */
/* 262 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 264 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (234) */
/* 268 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 270 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 274 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 280 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 282 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 286 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (270) */
/* 288 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 290 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 292 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x14 ),	/* 20 */
/* 296 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 298 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 304 */	0x12, 0x0,	/* FC_UP */
/* 306 */	NdrFcShort( 0xffce ),	/* Offset= -50 (256) */
/* 308 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (256) */
/* 318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 320 */	NdrFcShort( 0xc ),	/* 12 */
/* 322 */	NdrFcShort( 0xc ),	/* 12 */
/* 324 */	0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (282) */
/* 328 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x10 ),	/* 16 */
/* 334 */	0x12, 0x0,	/* FC_UP */
/* 336 */	NdrFcShort( 0xffca ),	/* Offset= -54 (282) */
/* 338 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 340 */	0x2,		/* FC_CHAR */
			0x6,		/* FC_SHORT */
/* 342 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 346 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 348 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 350 */	NdrFcShort( 0xc ),	/* 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 358 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 360 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 362 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 364 */	NdrFcShort( 0x18 ),	/* 24 */
/* 366 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 368 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 374 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 376 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 378 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (206) */
/* 388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 390 */	NdrFcShort( 0x10 ),	/* 16 */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	0x12, 0x0,	/* FC_UP */
/* 396 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (292) */
/* 398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 400 */	NdrFcShort( 0x14 ),	/* 20 */
/* 402 */	NdrFcShort( 0x14 ),	/* 20 */
/* 404 */	0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (348) */
/* 408 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 416 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (420) */
/* 420 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */	
			0x12, 0x0,	/* FC_UP */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 434 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 438 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (442) */
/* 442 */	NdrFcShort( 0x30 ),	/* 48 */
/* 444 */	NdrFcShort( 0x700e ),	/* 28686 */
/* 446 */	NdrFcLong( 0x1 ),	/* 1 */
/* 450 */	NdrFcShort( 0x58 ),	/* Offset= 88 (538) */
/* 452 */	NdrFcLong( 0x2 ),	/* 2 */
/* 456 */	NdrFcShort( 0x80 ),	/* Offset= 128 (584) */
/* 458 */	NdrFcLong( 0x3 ),	/* 3 */
/* 462 */	NdrFcShort( 0x8e ),	/* Offset= 142 (604) */
/* 464 */	NdrFcLong( 0x5 ),	/* 5 */
/* 468 */	NdrFcShort( 0x88 ),	/* Offset= 136 (604) */
/* 470 */	NdrFcLong( 0x4 ),	/* 4 */
/* 474 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (636) */
/* 476 */	NdrFcLong( 0x6 ),	/* 6 */
/* 480 */	NdrFcShort( 0xb2 ),	/* Offset= 178 (658) */
/* 482 */	NdrFcLong( 0x7 ),	/* 7 */
/* 486 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (686) */
/* 488 */	NdrFcLong( 0x9 ),	/* 9 */
/* 492 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (720) */
/* 494 */	NdrFcLong( 0xa ),	/* 10 */
/* 498 */	NdrFcShort( 0xec ),	/* Offset= 236 (734) */
/* 500 */	NdrFcLong( 0xb ),	/* 11 */
/* 504 */	NdrFcShort( 0xec ),	/* Offset= 236 (740) */
/* 506 */	NdrFcLong( 0xc ),	/* 12 */
/* 510 */	NdrFcShort( 0x112 ),	/* Offset= 274 (784) */
/* 512 */	NdrFcLong( 0xd ),	/* 13 */
/* 516 */	NdrFcShort( 0x10c ),	/* Offset= 268 (784) */
/* 518 */	NdrFcLong( 0xe ),	/* 14 */
/* 522 */	NdrFcShort( 0x52 ),	/* Offset= 82 (604) */
/* 524 */	NdrFcLong( 0xf ),	/* 15 */
/* 528 */	NdrFcShort( 0x13e ),	/* Offset= 318 (846) */
/* 530 */	NdrFcShort( 0xffff ),	/* Offset= -1 (529) */
/* 532 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 538 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 540 */	NdrFcShort( 0x28 ),	/* 40 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* Offset= 0 (544) */
/* 546 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 550 */	NdrFcShort( 0xffee ),	/* Offset= -18 (532) */
/* 552 */	0x2,		/* FC_CHAR */
			0x43,		/* FC_STRUCTPAD7 */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (532) */
/* 558 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 562 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 572 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 574 */	NdrFcShort( 0x4 ),	/* 4 */
/* 576 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 580 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 582 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 584 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 586 */	NdrFcShort( 0xc ),	/* 12 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0xa ),	/* Offset= 10 (600) */
/* 592 */	0x2,		/* FC_CHAR */
			0x3f,		/* FC_STRUCTPAD3 */
/* 594 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 596 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (562) */
			0x5b,		/* FC_END */
/* 600 */	
			0x12, 0x0,	/* FC_UP */
/* 602 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (572) */
/* 604 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 606 */	NdrFcShort( 0xc ),	/* 12 */
/* 608 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 610 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 612 */	NdrFcShort( 0x4 ),	/* 4 */
/* 614 */	NdrFcShort( 0x4 ),	/* 4 */
/* 616 */	0x12, 0x0,	/* FC_UP */
/* 618 */	NdrFcShort( 0xfdb4 ),	/* Offset= -588 (30) */
/* 620 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x12, 0x0,	/* FC_UP */
/* 628 */	NdrFcShort( 0xfe8c ),	/* Offset= -372 (256) */
/* 630 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 632 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 634 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 636 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 642 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 644 */	NdrFcShort( 0x4 ),	/* 4 */
/* 646 */	NdrFcShort( 0x4 ),	/* 4 */
/* 648 */	0x12, 0x0,	/* FC_UP */
/* 650 */	NdrFcShort( 0xfd94 ),	/* Offset= -620 (30) */
/* 652 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 654 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 656 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 658 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 660 */	NdrFcShort( 0x4 ),	/* 4 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* Offset= 0 (664) */
/* 666 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 668 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 670 */	NdrFcShort( 0x2 ),	/* 2 */
/* 672 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 674 */	NdrFcShort( 0xa ),	/* 10 */
/* 676 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 678 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 682 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 684 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 686 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 690 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 692 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 694 */	NdrFcShort( 0x4 ),	/* 4 */
/* 696 */	NdrFcShort( 0x4 ),	/* 4 */
/* 698 */	0x12, 0x0,	/* FC_UP */
/* 700 */	NdrFcShort( 0xfd62 ),	/* Offset= -670 (30) */
/* 702 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 704 */	NdrFcShort( 0xc ),	/* 12 */
/* 706 */	NdrFcShort( 0xc ),	/* 12 */
/* 708 */	0x12, 0x0,	/* FC_UP */
/* 710 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (668) */
/* 712 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 714 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 716 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 718 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 720 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 722 */	NdrFcShort( 0x10 ),	/* 16 */
/* 724 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 726 */	NdrFcShort( 0xff3e ),	/* Offset= -194 (532) */
/* 728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0xff3a ),	/* Offset= -198 (532) */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 738 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 740 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x2 ),	/* 2 */
/* 744 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 746 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 748 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 754 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x10 ),	/* 16 */
/* 758 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 760 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 762 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (748) */
			0x5b,		/* FC_END */
/* 766 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 768 */	NdrFcShort( 0x2 ),	/* 2 */
/* 770 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 772 */	NdrFcShort( 0x12 ),	/* 18 */
/* 774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 776 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 784 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x2c ),	/* 44 */
/* 788 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 790 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	NdrFcShort( 0x4 ),	/* 4 */
/* 796 */	0x12, 0x0,	/* FC_UP */
/* 798 */	NdrFcShort( 0xfd00 ),	/* Offset= -768 (30) */
/* 800 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 802 */	NdrFcShort( 0xc ),	/* 12 */
/* 804 */	NdrFcShort( 0xc ),	/* 12 */
/* 806 */	0x12, 0x0,	/* FC_UP */
/* 808 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (668) */
/* 810 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 812 */	NdrFcShort( 0x14 ),	/* 20 */
/* 814 */	NdrFcShort( 0x14 ),	/* 20 */
/* 816 */	0x12, 0x0,	/* FC_UP */
/* 818 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (766) */
/* 820 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 822 */	NdrFcShort( 0x28 ),	/* 40 */
/* 824 */	NdrFcShort( 0x28 ),	/* 40 */
/* 826 */	0x12, 0x0,	/* FC_UP */
/* 828 */	NdrFcShort( 0xfdc4 ),	/* Offset= -572 (256) */
/* 830 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 832 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 834 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 836 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 838 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 840 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (754) */
/* 844 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 846 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 852 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	NdrFcShort( 0x4 ),	/* 4 */
/* 858 */	0x12, 0x0,	/* FC_UP */
/* 860 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (256) */
/* 862 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 864 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 866 */	
			0x11, 0x0,	/* FC_RP */
/* 868 */	NdrFcShort( 0x2 ),	/* Offset= 2 (870) */
/* 870 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 872 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 876 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 878 */	NdrFcShort( 0xfe4c ),	/* Offset= -436 (442) */
/* 880 */	
			0x11, 0x0,	/* FC_RP */
/* 882 */	NdrFcShort( 0xfd8e ),	/* Offset= -626 (256) */
/* 884 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 886 */	NdrFcShort( 0x2 ),	/* Offset= 2 (888) */
/* 888 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 890 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 892 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 894 */	NdrFcShort( 0x38 ),	/* Offset= 56 (950) */
/* 896 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	0x12, 0x0,	/* FC_UP */
/* 910 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (256) */
/* 912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 914 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 916 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 918 */	NdrFcShort( 0x4 ),	/* 4 */
/* 920 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 926 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	0x12, 0x0,	/* FC_UP */
/* 942 */	NdrFcShort( 0xfd52 ),	/* Offset= -686 (256) */
/* 944 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 946 */	0x0,		/* 0 */
			NdrFcShort( 0xffcd ),	/* Offset= -51 (896) */
			0x5b,		/* FC_END */
/* 950 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	0x12, 0x0,	/* FC_UP */
/* 964 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (916) */
/* 966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 968 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 970 */	
			0x11, 0x0,	/* FC_RP */
/* 972 */	NdrFcShort( 0xfe90 ),	/* Offset= -368 (604) */
/* 974 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 976 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1020) */
/* 978 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0xc ),	/* 12 */
/* 982 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 988 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 992 */	NdrFcShort( 0xc ),	/* 12 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x2 ),	/* 2 */
/* 998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1000 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1002 */	0x12, 0x0,	/* FC_UP */
/* 1004 */	NdrFcShort( 0xfc32 ),	/* Offset= -974 (30) */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x12, 0x0,	/* FC_UP */
/* 1012 */	NdrFcShort( 0xfd0c ),	/* Offset= -756 (256) */
/* 1014 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1016 */	0x0,		/* 0 */
			NdrFcShort( 0xfe63 ),	/* Offset= -413 (604) */
			0x5b,		/* FC_END */
/* 1020 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1026 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1028 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1030 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1032 */	0x12, 0x0,	/* FC_UP */
/* 1034 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (978) */
/* 1036 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1038 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1040 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1046 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 1050 */	
			0x11, 0x0,	/* FC_RP */
/* 1052 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1054) */
/* 1054 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1058 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1062 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1064 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1066 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1074 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1076 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1078 */	0x12, 0x0,	/* FC_UP */
/* 1080 */	NdrFcShort( 0xfbe6 ),	/* Offset= -1050 (30) */
/* 1082 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1084 */	0x0,		/* 0 */
			NdrFcShort( 0xfe3f ),	/* Offset= -449 (636) */
			0x5b,		/* FC_END */
/* 1088 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1090 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1092) */
/* 1092 */	
			0x12, 0x0,	/* FC_UP */
/* 1094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1096) */
/* 1096 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1098 */	NdrFcShort( 0xc ),	/* 12 */
/* 1100 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1102 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1104 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1108 */	0x12, 0x0,	/* FC_UP */
/* 1110 */	NdrFcShort( 0xff7c ),	/* Offset= -132 (978) */
/* 1112 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1114 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1116 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1118 */	
			0x11, 0x0,	/* FC_RP */
/* 1120 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1166) */
/* 1122 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 1132 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1134 */	NdrFcShort( 0xc ),	/* 12 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1138) */
/* 1140 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1142 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1144 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1154 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1158 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1160 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1162 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1132) */
/* 1164 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1166 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1180) */
/* 1174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1176 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1122) */
/* 1178 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1180 */	
			0x12, 0x0,	/* FC_UP */
/* 1182 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1144) */
/* 1184 */	
			0x11, 0x0,	/* FC_RP */
/* 1186 */	NdrFcShort( 0xc ),	/* Offset= 12 (1198) */
/* 1188 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 1198 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1212) */
/* 1206 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1188) */
/* 1210 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1212 */	
			0x12, 0x0,	/* FC_UP */
/* 1214 */	NdrFcShort( 0xfed6 ),	/* Offset= -298 (916) */
/* 1216 */	
			0x11, 0x0,	/* FC_RP */
/* 1218 */	NdrFcShort( 0x32 ),	/* Offset= 50 (1268) */
/* 1220 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 1230 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1232 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1236) */
/* 1238 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1240 */	0x0,		/* 0 */
			NdrFcShort( 0xfda3 ),	/* Offset= -605 (636) */
			0x8,		/* FC_LONG */
/* 1244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1246 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1256 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1260 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1262 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1264 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1230) */
/* 1266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1268 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1282) */
/* 1276 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1220) */
/* 1280 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1282 */	
			0x12, 0x0,	/* FC_UP */
/* 1284 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1246) */
/* 1286 */	
			0x11, 0x0,	/* FC_RP */
/* 1288 */	NdrFcShort( 0xfd74 ),	/* Offset= -652 (636) */
/* 1290 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1292 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1294) */
/* 1294 */	
			0x12, 0x0,	/* FC_UP */
/* 1296 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1334) */
/* 1298 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 1308 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1310 */	NdrFcShort( 0xc ),	/* 12 */
/* 1312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0xfaf4 ),	/* Offset= -1292 (22) */
/* 1316 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1318 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1320 */	NdrFcShort( 0xc ),	/* 12 */
/* 1322 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1324 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1326 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1328 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1330 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1308) */
/* 1332 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1338 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1318) */
/* 1340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1340) */
/* 1342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1298) */
/* 1346 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1348 */	
			0x11, 0x0,	/* FC_RP */
/* 1350 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1334) */
/* 1352 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1354 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1356 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1360) */
/* 1360 */	
			0x12, 0x0,	/* FC_UP */
/* 1362 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1364) */
/* 1364 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1366 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1370 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1374) */
/* 1374 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1376 */	NdrFcShort( 0x300d ),	/* 12301 */
/* 1378 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1382 */	NdrFcShort( 0xfd16 ),	/* Offset= -746 (636) */
/* 1384 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1388 */	NdrFcShort( 0x72 ),	/* Offset= 114 (1502) */
/* 1390 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1394 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1520) */
/* 1396 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1400 */	NdrFcShort( 0xba ),	/* Offset= 186 (1586) */
/* 1402 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1406 */	NdrFcShort( 0xfcde ),	/* Offset= -802 (604) */
/* 1408 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1412 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1616) */
/* 1414 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1418 */	NdrFcShort( 0x138 ),	/* Offset= 312 (1730) */
/* 1420 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1424 */	NdrFcShort( 0x158 ),	/* Offset= 344 (1768) */
/* 1426 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1430 */	NdrFcShort( 0x184 ),	/* Offset= 388 (1818) */
/* 1432 */	NdrFcLong( 0xa ),	/* 10 */
/* 1436 */	NdrFcShort( 0x18c ),	/* Offset= 396 (1832) */
/* 1438 */	NdrFcLong( 0xb ),	/* 11 */
/* 1442 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (1866) */
/* 1444 */	NdrFcLong( 0xc ),	/* 12 */
/* 1448 */	NdrFcShort( 0x1de ),	/* Offset= 478 (1926) */
/* 1450 */	NdrFcLong( 0xd ),	/* 13 */
/* 1454 */	NdrFcShort( 0x42 ),	/* Offset= 66 (1520) */
/* 1456 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1455) */
/* 1458 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1468 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1478 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1480 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1490 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1492 */	0x12, 0x0,	/* FC_UP */
/* 1494 */	NdrFcShort( 0xfa48 ),	/* Offset= -1464 (30) */
/* 1496 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1498 */	0x0,		/* 0 */
			NdrFcShort( 0xfca1 ),	/* Offset= -863 (636) */
			0x5b,		/* FC_END */
/* 1502 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1516) */
/* 1510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1458) */
/* 1514 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1516 */	
			0x12, 0x0,	/* FC_UP */
/* 1518 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1468) */
/* 1520 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1524 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1526 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1532 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1536 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1546 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1550 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1554 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1556 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1562 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1564 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1566 */	NdrFcShort( 0xc ),	/* 12 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0xc ),	/* Offset= 12 (1582) */
/* 1572 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1574 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1526) */
/* 1576 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1578 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1536) */
/* 1580 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1582 */	
			0x12, 0x0,	/* FC_UP */
/* 1584 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1546) */
/* 1586 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1590 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1592 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	0x12, 0x0,	/* FC_UP */
/* 1600 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1564) */
/* 1602 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1604 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1608 */	0x12, 0x0,	/* FC_UP */
/* 1610 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1564) */
/* 1612 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1614 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1616 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1618 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1620 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1622 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1624 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1628 */	0x12, 0x0,	/* FC_UP */
/* 1630 */	NdrFcShort( 0xf9c0 ),	/* Offset= -1600 (30) */
/* 1632 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1634 */	NdrFcShort( 0xc ),	/* 12 */
/* 1636 */	NdrFcShort( 0xc ),	/* 12 */
/* 1638 */	0x12, 0x0,	/* FC_UP */
/* 1640 */	NdrFcShort( 0xfc34 ),	/* Offset= -972 (668) */
/* 1642 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1644 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1646 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1648 */	0x12, 0x0,	/* FC_UP */
/* 1650 */	NdrFcShort( 0xfa8e ),	/* Offset= -1394 (256) */
/* 1652 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1654 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1656 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1658 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1660 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1662 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1664 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1670 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1674 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1680 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1684 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1690 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1694 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1698 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1700 */	NdrFcShort( 0xc ),	/* 12 */
/* 1702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1704 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1708 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0xe ),	/* Offset= 14 (1726) */
/* 1714 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1716 */	NdrFcShort( 0xfb60 ),	/* Offset= -1184 (532) */
/* 1718 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1720 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (1684) */
			0x36,		/* FC_POINTER */
/* 1724 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1726 */	
			0x12, 0x0,	/* FC_UP */
/* 1728 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1694) */
/* 1730 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1732 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1752) */
/* 1738 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1740 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1664) */
/* 1742 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1744 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1746 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1674) */
/* 1748 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1750 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1752 */	
			0x12, 0x0,	/* FC_UP */
/* 1754 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1706) */
/* 1756 */	
			0x12, 0x0,	/* FC_UP */
/* 1758 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (1706) */
/* 1760 */	
			0x12, 0x0,	/* FC_UP */
/* 1762 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1706) */
/* 1764 */	
			0x12, 0x0,	/* FC_UP */
/* 1766 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1706) */
/* 1768 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1770 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1774) */
/* 1776 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1778 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (1616) */
/* 1780 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1782 */	NdrFcShort( 0xfefa ),	/* Offset= -262 (1520) */
/* 1784 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1786 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1730) */
/* 1788 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1790 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1796 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1800 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1814) */
/* 1808 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1810 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1790) */
/* 1812 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1814 */	
			0x12, 0x0,	/* FC_UP */
/* 1816 */	NdrFcShort( 0xf97a ),	/* Offset= -1670 (146) */
/* 1818 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1824) */
/* 1826 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1828 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1800) */
/* 1830 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1832 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1834 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1838) */
/* 1840 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1842 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1616) */
/* 1844 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1846 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (1520) */
/* 1848 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1850 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1818) */
/* 1852 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1854 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1858 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1860 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1862 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1864 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1866 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1868 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1870 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1872 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1878 */	0x12, 0x0,	/* FC_UP */
/* 1880 */	NdrFcShort( 0xf8c6 ),	/* Offset= -1850 (30) */
/* 1882 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1884 */	NdrFcShort( 0xc ),	/* 12 */
/* 1886 */	NdrFcShort( 0xc ),	/* 12 */
/* 1888 */	0x12, 0x0,	/* FC_UP */
/* 1890 */	NdrFcShort( 0xfb3a ),	/* Offset= -1222 (668) */
/* 1892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1896 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1898 */	0x12, 0x0,	/* FC_UP */
/* 1900 */	NdrFcShort( 0xf994 ),	/* Offset= -1644 (256) */
/* 1902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1904 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1908 */	0x12, 0x0,	/* FC_UP */
/* 1910 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1854) */
/* 1912 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1914 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1916 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1918 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1920 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1922 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1924 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1926 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1928 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1932) */
/* 1934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1936 */	NdrFcShort( 0xffba ),	/* Offset= -70 (1866) */
/* 1938 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1940 */	NdrFcShort( 0xfe5c ),	/* Offset= -420 (1520) */
/* 1942 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1944 */	NdrFcShort( 0xff2a ),	/* Offset= -214 (1730) */
/* 1946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1948 */	
			0x11, 0x0,	/* FC_RP */
/* 1950 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1952) */
/* 1952 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1954 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1958 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1960 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (1374) */
/* 1962 */	
			0x12, 0x0,	/* FC_UP */
/* 1964 */	NdrFcShort( 0xfe70 ),	/* Offset= -400 (1564) */
/* 1966 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1968 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (1962) */
/* 1970 */	
			0x12, 0x0,	/* FC_UP */
/* 1972 */	NdrFcShort( 0xfa60 ),	/* Offset= -1440 (532) */
/* 1974 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1976 */	NdrFcShort( 0xf85e ),	/* Offset= -1954 (22) */
/* 1978 */	
			0x11, 0x0,	/* FC_RP */
/* 1980 */	NdrFcShort( 0xf85a ),	/* Offset= -1958 (22) */
/* 1982 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1984 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1986) */
/* 1986 */	
			0x12, 0x0,	/* FC_UP */
/* 1988 */	NdrFcShort( 0xfab8 ),	/* Offset= -1352 (636) */
/* 1990 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1992 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1994 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1996 */	NdrFcShort( 0xc ),	/* Offset= 12 (2008) */
/* 1998 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcLong( 0x100 ),	/* 256 */
/* 2008 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2022) */
/* 2016 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2018 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1998) */
/* 2020 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2022 */	
			0x12, 0x0,	/* FC_UP */
/* 2024 */	NdrFcShort( 0xfdd4 ),	/* Offset= -556 (1468) */
/* 2026 */	
			0x11, 0x0,	/* FC_RP */
/* 2028 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2008) */
/* 2030 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2032 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2034) */
/* 2034 */	
			0x12, 0x0,	/* FC_UP */
/* 2036 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2038) */
/* 2038 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2040 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2042 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2044 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2046 */	NdrFcShort( 0xfd60 ),	/* Offset= -672 (1374) */
/* 2048 */	
			0x11, 0x0,	/* FC_RP */
/* 2050 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2052) */
/* 2052 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2054 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2058 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2060 */	NdrFcShort( 0xfd52 ),	/* Offset= -686 (1374) */
/* 2062 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2064 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1962) */
/* 2066 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2068 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2070 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 2072 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (1986) */
/* 2074 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2076 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2078) */
/* 2078 */	
			0x12, 0x0,	/* FC_UP */
/* 2080 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2082) */
/* 2082 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2084 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2088 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2090 */	NdrFcShort( 0xf990 ),	/* Offset= -1648 (442) */
/* 2092 */	
			0x11, 0x0,	/* FC_RP */
/* 2094 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2096) */
/* 2096 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2098 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2102 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2104 */	NdrFcShort( 0xf982 ),	/* Offset= -1662 (442) */
/* 2106 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2110) */
/* 2110 */	
			0x12, 0x0,	/* FC_UP */
/* 2112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2114) */
/* 2114 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2116 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2120 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2122 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (1374) */
/* 2124 */	
			0x11, 0x0,	/* FC_RP */
/* 2126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2128) */
/* 2128 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2130 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2134 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2136 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (1374) */
/* 2138 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2140 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2192) */
/* 2142 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2144 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2146 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2152 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2154 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2166 */	0x12, 0x0,	/* FC_UP */
/* 2168 */	NdrFcShort( 0xf7a6 ),	/* Offset= -2138 (30) */
/* 2170 */	NdrFcShort( 0xc ),	/* 12 */
/* 2172 */	NdrFcShort( 0xc ),	/* 12 */
/* 2174 */	0x12, 0x0,	/* FC_UP */
/* 2176 */	NdrFcShort( 0xfa1c ),	/* Offset= -1508 (668) */
/* 2178 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2180 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2182 */	0x12, 0x0,	/* FC_UP */
/* 2184 */	NdrFcShort( 0xf878 ),	/* Offset= -1928 (256) */
/* 2186 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2188 */	0x0,		/* 0 */
			NdrFcShort( 0xfdc3 ),	/* Offset= -573 (1616) */
			0x5b,		/* FC_END */
/* 2192 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2204 */	0x12, 0x0,	/* FC_UP */
/* 2206 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (2142) */
/* 2208 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2210 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2212 */	
			0x11, 0x0,	/* FC_RP */
/* 2214 */	NdrFcShort( 0xfdaa ),	/* Offset= -598 (1616) */
/* 2216 */	
			0x11, 0x0,	/* FC_RP */
/* 2218 */	NdrFcShort( 0xfe18 ),	/* Offset= -488 (1730) */
/* 2220 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2224) */
/* 2224 */	
			0x12, 0x0,	/* FC_UP */
/* 2226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2228) */
/* 2228 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2230 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2234 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2238) */
/* 2238 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2240 */	NdrFcShort( 0x7003 ),	/* 28675 */
/* 2242 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2246 */	NdrFcShort( 0xfd2a ),	/* Offset= -726 (1520) */
/* 2248 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2252 */	NdrFcShort( 0xa ),	/* Offset= 10 (2262) */
/* 2254 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2258 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2282) */
/* 2260 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2259) */
/* 2262 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2266 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2268 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2270 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2272 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2274 */	0x12, 0x0,	/* FC_UP */
/* 2276 */	NdrFcShort( 0xf7ae ),	/* Offset= -2130 (146) */
/* 2278 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2280 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2282 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2284 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2286 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2288 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2290 */	NdrFcShort( 0xf922 ),	/* Offset= -1758 (532) */
/* 2292 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2294 */	NdrFcShort( 0xf91e ),	/* Offset= -1762 (532) */
/* 2296 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2298 */	NdrFcShort( 0xf91a ),	/* Offset= -1766 (532) */
/* 2300 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2302 */	NdrFcShort( 0xf916 ),	/* Offset= -1770 (532) */
/* 2304 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2306 */	NdrFcShort( 0xf912 ),	/* Offset= -1774 (532) */
/* 2308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2310 */	
			0x12, 0x0,	/* FC_UP */
/* 2312 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2314) */
/* 2314 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2316 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2318 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2322 */	NdrFcShort( 0xffac ),	/* Offset= -84 (2238) */
/* 2324 */	
			0x11, 0x0,	/* FC_RP */
/* 2326 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2376) */
/* 2328 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2334 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 2338 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2340 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2344) */
/* 2346 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2348 */	0x0,		/* 0 */
			NdrFcShort( 0xf94f ),	/* Offset= -1713 (636) */
			0x8,		/* FC_LONG */
/* 2352 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2354 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2364 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2368 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2370 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2372 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2338) */
/* 2374 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2376 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2390) */
/* 2384 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2386 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2328) */
/* 2388 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2390 */	
			0x12, 0x0,	/* FC_UP */
/* 2392 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2354) */
/* 2394 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2404 */	
			0x11, 0x0,	/* FC_RP */
/* 2406 */	NdrFcShort( 0x30 ),	/* Offset= 48 (2454) */
/* 2408 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2414 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2418 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2420 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2424) */
/* 2426 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 2428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2432 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2442 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2446 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2448 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2450 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (2418) */
/* 2452 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2454 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2460 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2468) */
/* 2462 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2464 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2408) */
/* 2466 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2468 */	
			0x12, 0x0,	/* FC_UP */
/* 2470 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2432) */
/* 2472 */	
			0x11, 0x0,	/* FC_RP */
/* 2474 */	NdrFcShort( 0xfd70 ),	/* Offset= -656 (1818) */
/* 2476 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2482 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2486 */	
			0x11, 0x0,	/* FC_RP */
/* 2488 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2540) */
/* 2490 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2500 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2502 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2514) */
/* 2508 */	0xd,		/* FC_ENUM16 */
			0x36,		/* FC_POINTER */
/* 2510 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2514 */	
			0x12, 0x0,	/* FC_UP */
/* 2516 */	NdrFcShort( 0xf72c ),	/* Offset= -2260 (256) */
/* 2518 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2528 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2532 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2534 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2536 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2500) */
/* 2538 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2554) */
/* 2548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2550 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2490) */
/* 2552 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2554 */	
			0x12, 0x0,	/* FC_UP */
/* 2556 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2518) */
/* 2558 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2562) */
/* 2562 */	
			0x12, 0x0,	/* FC_UP */
/* 2564 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (2772) */
/* 2566 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2572 */	NdrFcLong( 0xfa0 ),	/* 4000 */
/* 2576 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2578 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 2580 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 2582 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2584 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2586) */
/* 2586 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2588 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 2590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0xf85a ),	/* Offset= -1958 (636) */
/* 2596 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2600 */	NdrFcShort( 0xf854 ),	/* Offset= -1964 (636) */
/* 2602 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2606 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2646) */
/* 2608 */	NdrFcShort( 0x5e ),	/* Offset= 94 (2702) */
/* 2610 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2612 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2614 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2616 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2618 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2620 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2622 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2624 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2626 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2628 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2630 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2632 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2634 */	NdrFcShort( 0xe ),	/* 14 */
/* 2636 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2638 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2640 */	NdrFcShort( 0xc ),	/* 12 */
/* 2642 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2644 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2646 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2648 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2650 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2652 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	0x12, 0x0,	/* FC_UP */
/* 2660 */	NdrFcShort( 0xf69c ),	/* Offset= -2404 (256) */
/* 2662 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2668 */	0x12, 0x0,	/* FC_UP */
/* 2670 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2610) */
/* 2672 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2674 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2676 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2678 */	0x12, 0x0,	/* FC_UP */
/* 2680 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (2628) */
/* 2682 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2684 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2686 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2688 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 2690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2692 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2698 */	NdrFcLong( 0x20000 ),	/* 131072 */
/* 2702 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2716) */
/* 2710 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2712 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2692) */
/* 2714 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2716 */	
			0x12, 0x0,	/* FC_UP */
/* 2718 */	NdrFcShort( 0xf5f4 ),	/* Offset= -2572 (146) */
/* 2720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2722 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2726) */
/* 2728 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2732 */	NdrFcShort( 0xf768 ),	/* Offset= -2200 (532) */
/* 2734 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2736 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (2576) */
/* 2738 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2740 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2750 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2752 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	0x12, 0x0,	/* FC_UP */
/* 2766 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2720) */
/* 2768 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2772 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2786) */
/* 2780 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2782 */	NdrFcShort( 0xff28 ),	/* Offset= -216 (2566) */
/* 2784 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2786 */	
			0x12, 0x0,	/* FC_UP */
/* 2788 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2740) */
/* 2790 */	
			0x11, 0x0,	/* FC_RP */
/* 2792 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2772) */
/* 2794 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2796 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2798) */
/* 2798 */	
			0x12, 0x0,	/* FC_UP */
/* 2800 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2850) */
/* 2802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2804 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2808) */
/* 2810 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2812 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2814 */	0x0,		/* 0 */
			NdrFcShort( 0xf77d ),	/* Offset= -2179 (636) */
			0x5b,		/* FC_END */
/* 2818 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2820 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2822 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2828 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2830 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	0x12, 0x0,	/* FC_UP */
/* 2844 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2802) */
/* 2846 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2848 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2850 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2854 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2856 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2862 */	0x12, 0x0,	/* FC_UP */
/* 2864 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2818) */
/* 2866 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2868 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2870 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2880 */	
			0x11, 0x0,	/* FC_RP */
/* 2882 */	NdrFcShort( 0x24 ),	/* Offset= 36 (2918) */
/* 2884 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2886 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2888 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2890 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2892 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2894 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2896 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 2906 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2912 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2916 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2918 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2920 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2940) */
/* 2926 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2928 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2884) */
/* 2930 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2932 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2890) */
/* 2934 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2936 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2896) */
/* 2938 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2940 */	
			0x12, 0x0,	/* FC_UP */
/* 2942 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2906) */
/* 2944 */	
			0x11, 0x0,	/* FC_RP */
/* 2946 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2948) */
/* 2948 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2950 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2954 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2956 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2958) */
/* 2958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2960 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 2962 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2966 */	NdrFcShort( 0xf480 ),	/* Offset= -2944 (22) */
/* 2968 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2967) */
/* 2970 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2972 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2974) */
/* 2974 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2976 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2978 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2980 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2982 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2958) */

			0x0
        }
    };

XFG_BIND_TRAMPOLINES(unsigned long, PLSAPR_SERVER_NAME)

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ] = 
        {
        {
            (GENERIC_BINDING_ROUTINE) XFG_TRAMPOLINE_FPTR(PLSAPR_SERVER_NAME_bind),
            (GENERIC_UNBIND_ROUTINE) XFG_TRAMPOLINE_FPTR(PLSAPR_SERVER_NAME_unbind)
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
    130,
    184,
    238,
    266,
    320,
    374,
    428,
    456,
    516,
    576,
    636,
    696,
    774,
    846,
    906,
    966,
    1014,
    1062,
    1116,
    1144,
    1172,
    1220,
    1268,
    1328,
    1382,
    1436,
    1496,
    1550,
    1616,
    1670,
    1724,
    1796,
    1838,
    1892,
    1946,
    2000,
    2060,
    2120,
    2180,
    2228,
    2282,
    2336,
    2390,
    2442,
    2496,
    2550,
    2610,
    2670,
    2730,
    2796,
    2824,
    2878,
    2932,
    2992,
    3020,
    3104,
    3194,
    3260,
    3288,
    3316,
    3344,
    3372,
    3400,
    3428,
    3456,
    3484,
    3574,
    3602,
    3630,
    3658,
    3686,
    3746,
    3818,
    3846,
    3922,
    4004,
    4032,
    4060,
    4088,
    4116,
    4144,
    4172,
    4200,
    4228,
    4256,
    4284,
    4312,
    4340,
    4368,
    4396,
    4424,
    4452,
    4480,
    4508,
    4536,
    4564,
    4592,
    4620,
    4648,
    4676,
    4704,
    4732,
    4760,
    4788,
    4816,
    4844,
    4872,
    4900,
    4928,
    4956,
    4984,
    5012,
    5040,
    5068,
    5096,
    5124,
    5152,
    5180,
    5208,
    5236,
    5264,
    5292,
    5320,
    5348,
    5376,
    5404,
    5432,
    5498
    };


static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void *)& lsarpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &lsarpc__MIDL_AutoBindHandle,
    0,
    BindingRoutines,
    ExprEvalRoutines,
    0,
    ms2Dlsar__MIDL_TypeFormatString.Format,
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

