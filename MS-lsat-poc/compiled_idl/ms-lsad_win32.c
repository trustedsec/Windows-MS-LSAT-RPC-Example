

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsad.idl:
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

#include "ms-lsad.h"

#define TYPE_FORMAT_STRING_SIZE   2529                              
#define PROC_FORMAT_STRING_SIZE   5183                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dlsad_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dlsad_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dlsad_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dlsad_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dlsad_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dlsad_MIDL_EXPR_FORMAT_STRING;


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


extern const ms2Dlsad_MIDL_TYPE_FORMAT_STRING ms2Dlsad__MIDL_TypeFormatString;
extern const ms2Dlsad_MIDL_PROC_FORMAT_STRING ms2Dlsad__MIDL_ProcFormatString;
extern const ms2Dlsad_MIDL_EXPR_FORMAT_STRING ms2Dlsad__MIDL_ExprFormatString;

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

extern const MIDL_STUB_DESC lsarpc_StubDesc;

static RPC_BINDING_HANDLE lsarpc__MIDL_AutoBindHandle;


NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[42],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarEnumeratePrivileges( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[70],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQuerySecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PLSAPR_SR_SECURITY_DESCRIPTOR *SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[130],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[184],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[238],
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[266],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[320],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[374],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[428],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarCreateAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *AccountHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[456],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[516],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[576],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[636],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_TM_14( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[696],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_TM_15( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[724],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarCreateSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *SecretHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[752],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[812],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET *Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[872],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[920],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRemovePrivilegesFromAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned char AllPrivileges,
    /* [unique][in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[968],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1022],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1050],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ unsigned long *SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1078],
                  ( unsigned char * )&AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned long SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1126],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1174],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInfoTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1234],
                  ( unsigned char * )&TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1288],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1342],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedOldValue)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1402],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1456],
                  ( unsigned char * )&SecretHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeValue( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [out] */ PLUID Value)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1522],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLUID Value,
    /* [out] */ PRPC_UNICODE_STRING *Name)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1576],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1630],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1702],
                  ( unsigned char * )&ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountsWithUserRight( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING UserRight,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1744],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [out] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1798],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1852],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1906],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1966],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2026],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2086],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarStorePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2134],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRetrievePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2188],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2242],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_TM_45( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2296],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarQueryInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2324],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2378],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2432],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2492],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2552],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2612],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2678],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarQueryDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_DOMAIN_INFORMATION *PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2706],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][unique][in] */ PLSAPR_POLICY_DOMAIN_INFORMATION PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2760],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2814],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2874],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_TM_57( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2902],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_TM_58( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2930],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarCreateTrustedDomainEx2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2958],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3024],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3052],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3080],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3108],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3136],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3164],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3192],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3220],
                  ( unsigned char * )&IDL_handle);
    
}


void Lsar_LSA_TM_68( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3248],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3276],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3304],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3332],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3360],
                  ( unsigned char * )&IDL_handle);
    
}


NTSTATUS LsarQueryForestTrustInformation( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSA_UNICODE_STRING TrustedDomainName,
    /* [in] */ LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    /* [out] */ PLSA_FOREST_TRUST_INFORMATION *ForestTrustInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3388],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3448],
                  ( unsigned char * )&PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3520],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3548],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum77NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3576],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum78NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3604],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum79NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3632],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum80NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3660],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum81NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3688],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum82NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3716],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3744],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum84NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3772],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum85NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3800],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum86NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3828],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum87NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3856],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum88NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3884],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum89NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3912],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3940],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3968],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3996],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4024],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4052],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4080],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum96NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4108],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum97NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4136],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4164],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4192],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4220],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4248],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum102NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4276],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4304],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum104NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4332],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4360],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4388],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4416],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4444],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4472],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum110NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4500],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum111NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4528],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum112NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4556],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum113NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4584],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4612],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum115NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4640],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum116NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4668],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum117NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4696],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum118NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4724],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum119NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4752],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum120NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4780],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum121NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4808],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum122NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4836],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum123NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4864],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum124NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4892],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum125NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4920],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum126NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4948],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum127NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4976],
                  ( unsigned char * )&IDL_handle);
    
}


void Opnum128NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5004],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5032],
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

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5098],
                  ( unsigned char * )&SystemName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];
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


static const ms2Dlsad_MIDL_PROC_FORMAT_STRING ms2Dlsad__MIDL_ProcFormatString =
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

	/* Procedure Lsar_LSA_TM_14 */

/* 696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xe ),	/* 14 */
/* 704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 706 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_15 */

/* 724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xf ),	/* 15 */
/* 732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 734 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateSecret */

/* 752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 760 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 762 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 764 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 766 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0x2c ),	/* 44 */
/* 770 */	NdrFcShort( 0x40 ),	/* 64 */
/* 772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 774 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 782 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 784 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 786 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 788 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 792 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 800 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 804 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenAccount */

/* 812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x11 ),	/* 17 */
/* 820 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 822 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 824 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 826 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x2c ),	/* 44 */
/* 830 */	NdrFcShort( 0x40 ),	/* 64 */
/* 832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 834 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 842 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 844 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 846 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 848 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 852 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter DesiredAccess */

/* 854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 860 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 864 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumeratePrivilegesAccount */

/* 872 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x12 ),	/* 18 */
/* 880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 882 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 884 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 886 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 894 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 902 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 906 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 908 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 912 */	NdrFcShort( 0x414 ),	/* Type Offset=1044 */

	/* Return value */

/* 914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 916 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddPrivilegesToAccount */

/* 920 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x13 ),	/* 19 */
/* 928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 930 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 932 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0x24 ),	/* 36 */
/* 938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 942 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 950 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 952 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 954 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 956 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 960 */	NdrFcShort( 0x440 ),	/* Type Offset=1088 */

	/* Return value */

/* 962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 964 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemovePrivilegesFromAccount */

/* 968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x14 ),	/* 20 */
/* 976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 978 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 980 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 982 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 984 */	NdrFcShort( 0x29 ),	/* 41 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 990 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 998 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1000 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1002 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AllPrivileges */

/* 1004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1008 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Privileges */

/* 1010 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1014 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Return value */

/* 1016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1018 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1022 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1032 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1050 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1060 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarGetSystemAccessAccount */

/* 1078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1086 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1088 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1090 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1094 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1096 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1112 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSystemAccessAccount */

/* 1126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1136 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1138 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1140 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1142 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1156 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1158 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1160 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1170 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomain */

/* 1174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1184 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1186 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1188 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1190 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1192 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1196 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1204 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1206 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1208 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 1210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1214 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter DesiredAccess */

/* 1216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1222 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1226 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 1228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInfoTrustedDomain */

/* 1234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1244 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1246 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1248 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1250 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1256 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1264 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1268 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1274 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1276 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1280 */	NdrFcShort( 0x456 ),	/* Type Offset=1110 */

	/* Return value */

/* 1282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationTrustedDomain */

/* 1288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1296 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1298 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1300 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1302 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1304 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1310 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1318 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1320 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1322 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1328 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1330 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1334 */	NdrFcShort( 0x708 ),	/* Type Offset=1800 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenSecret */

/* 1342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1350 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1354 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1358 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1360 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1364 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1372 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1374 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1376 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 1378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1382 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 1384 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 1390 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1394 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 1396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1398 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecret */

/* 1402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1410 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1412 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1414 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1416 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1418 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1424 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1432 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1434 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1436 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1438 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1442 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter EncryptedOldValue */

/* 1444 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1448 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Return value */

/* 1450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecret */

/* 1456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1464 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1466 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1470 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1472 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1474 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1478 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1486 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1488 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1490 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1492 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1496 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */

	/* Parameter CurrentValueSetTime */

/* 1498 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1502 */	NdrFcShort( 0x71a ),	/* Type Offset=1818 */

	/* Parameter EncryptedOldValue */

/* 1504 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1508 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */

	/* Parameter OldValueSetTime */

/* 1510 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1512 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1514 */	NdrFcShort( 0x71a ),	/* Type Offset=1818 */

	/* Return value */

/* 1516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1518 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeValue */

/* 1522 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1532 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1534 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1536 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1540 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1544 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1552 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1556 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1562 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter Value */

/* 1564 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1568 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 1570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeName */

/* 1576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1582 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1586 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1590 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1592 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1596 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1598 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1606 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1610 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Value */

/* 1612 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1614 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1616 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter Name */

/* 1618 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1620 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1622 */	NdrFcShort( 0x726 ),	/* Type Offset=1830 */

	/* Return value */

/* 1624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeDisplayName */

/* 1630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1638 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1640 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1642 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1644 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1646 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1648 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1650 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1652 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1660 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1662 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1664 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1670 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter ClientLanguage */

/* 1672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1676 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ClientSystemDefaultLanguage */

/* 1678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1680 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1682 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter DisplayName */

/* 1684 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1688 */	NdrFcShort( 0x726 ),	/* Type Offset=1830 */

	/* Parameter LanguageReturned */

/* 1690 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1692 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1694 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1696 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteObject */

/* 1702 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1712 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1714 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1718 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1720 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1724 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 1732 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1736 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountsWithUserRight */

/* 1744 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1754 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1758 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1766 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1774 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1776 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1778 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter UserRight */

/* 1780 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1784 */	NdrFcShort( 0x72a ),	/* Type Offset=1834 */

	/* Parameter EnumerationBuffer */

/* 1786 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1790 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 1792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountRights */

/* 1798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1806 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1808 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1810 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1812 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1818 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1820 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1822 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1828 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1830 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1832 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1834 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1838 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter UserRights */

/* 1840 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1844 */	NdrFcShort( 0x740 ),	/* Type Offset=1856 */

	/* Return value */

/* 1846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddAccountRights */

/* 1852 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1860 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1862 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1864 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1866 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1868 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1874 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1882 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1884 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1886 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1888 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1892 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter UserRights */

/* 1894 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1898 */	NdrFcShort( 0x740 ),	/* Type Offset=1856 */

	/* Return value */

/* 1900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1902 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemoveAccountRights */

/* 1906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1914 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1916 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1918 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1920 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1922 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1928 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1936 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1938 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1940 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1942 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1946 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter AllRights */

/* 1948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1950 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1952 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter UserRights */

/* 1954 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1956 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1958 */	NdrFcShort( 0x740 ),	/* Type Offset=1856 */

	/* Return value */

/* 1960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfo */

/* 1966 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1974 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1976 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1978 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1980 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1982 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1988 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1996 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1998 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2000 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2002 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2006 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter InformationClass */

/* 2008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2010 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2012 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2014 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2018 */	NdrFcShort( 0x756 ),	/* Type Offset=1878 */

	/* Return value */

/* 2020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfo */

/* 2026 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2034 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2036 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2038 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2040 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2042 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2048 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2056 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2058 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2060 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2066 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter InformationClass */

/* 2068 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2072 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2074 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2078 */	NdrFcShort( 0x76c ),	/* Type Offset=1900 */

	/* Return value */

/* 2080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteTrustedDomain */

/* 2086 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2092 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2096 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2098 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2102 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2106 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2108 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2116 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2118 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2120 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2122 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2126 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Return value */

/* 2128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarStorePrivateData */

/* 2134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2144 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2154 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2156 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2166 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2168 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2170 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2174 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter EncryptedData */

/* 2176 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2180 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Return value */

/* 2182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRetrievePrivateData */

/* 2188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2196 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2200 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2210 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2218 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2220 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2222 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2224 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2228 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter EncryptedData */

/* 2230 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2234 */	NdrFcShort( 0x776 ),	/* Type Offset=1910 */

	/* Return value */

/* 2236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 2242 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 2244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2254 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2258 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2268 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2270 */	NdrFcShort( 0x77a ),	/* Type Offset=1914 */

	/* Parameter ObjectAttributes */

/* 2272 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2276 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter DesiredAccess */

/* 2278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 2284 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2288 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 2290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_TM_45 */

/* 2296 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2302 */	NdrFcShort( 0x2d ),	/* 45 */
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

	/* Procedure LsarQueryInformationPolicy2 */

/* 2324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2334 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2336 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2338 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2340 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2346 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2354 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2356 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2358 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2364 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2366 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2368 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2370 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */

	/* Return value */

/* 2372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2374 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy2 */

/* 2378 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2386 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2388 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2390 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2394 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2398 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2400 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2408 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2410 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2412 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2418 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2424 */	NdrFcShort( 0x794 ),	/* Type Offset=1940 */

	/* Return value */

/* 2426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfoByName */

/* 2432 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2442 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2444 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2446 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2448 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2454 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2462 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2464 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2466 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2468 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2472 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter InformationClass */

/* 2474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2478 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2480 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2484 */	NdrFcShort( 0x79e ),	/* Type Offset=1950 */

	/* Return value */

/* 2486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfoByName */

/* 2492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2502 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2504 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2506 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2508 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2514 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2522 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2524 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2526 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2528 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2530 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2532 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter InformationClass */

/* 2534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2536 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2538 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2544 */	NdrFcShort( 0x7b4 ),	/* Type Offset=1972 */

	/* Return value */

/* 2546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2548 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomainsEx */

/* 2552 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2562 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2564 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2566 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2568 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2572 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2574 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2582 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2584 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2586 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 2588 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 2594 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2598 */	NdrFcShort( 0x7f4 ),	/* Type Offset=2036 */

	/* Parameter PreferedMaximumLength */

/* 2600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2602 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2608 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx */

/* 2612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2622 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2624 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2626 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2628 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2630 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2632 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2634 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2642 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2644 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2646 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 2648 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2652 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter AuthenticationInformation */

/* 2654 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2658 */	NdrFcShort( 0x5d8 ),	/* Type Offset=1496 */

	/* Parameter DesiredAccess */

/* 2660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2666 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2668 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2670 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 2672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2674 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2688 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryDomainInformationPolicy */

/* 2706 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2714 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2716 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2718 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2720 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2722 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2728 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2736 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2738 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2740 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2744 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2746 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2748 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2750 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2752 */	NdrFcShort( 0x810 ),	/* Type Offset=2064 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2756 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetDomainInformationPolicy */

/* 2760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2770 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2772 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2774 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2776 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2780 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2782 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2790 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2794 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2802 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	NdrFcShort( 0x86a ),	/* Type Offset=2154 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomainByName */

/* 2814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2822 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2824 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2826 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2830 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2832 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2836 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2844 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2846 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2848 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2852 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2854 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter DesiredAccess */

/* 2856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2858 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2862 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2864 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2866 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 2874 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2882 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2884 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2894 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_57 */

/* 2902 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2910 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2912 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_58 */

/* 2930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2940 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2942 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2948 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2950 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx2 */

/* 2958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2966 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2968 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2970 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2974 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2976 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2980 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2988 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2990 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2992 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 2994 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2996 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2998 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter AuthenticationInformation */

/* 3000 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3002 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3004 */	NdrFcShort( 0x630 ),	/* Type Offset=1584 */

	/* Parameter DesiredAccess */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 3012 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3014 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3016 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 3024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 3052 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3062 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3064 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 3080 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3086 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3090 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3126 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3136 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3146 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3148 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3156 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 3164 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3174 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3176 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 3192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3210 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3230 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_68 */

/* 3248 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3254 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3258 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3266 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 3304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3316 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3332 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3342 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryForestTrustInformation */

/* 3388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3396 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3398 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3404 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3410 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3418 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3420 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3422 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3428 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter HighestRecordType */

/* 3430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3434 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3436 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3438 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3440 */	NdrFcShort( 0x87c ),	/* Type Offset=2172 */

	/* Return value */

/* 3442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetForestTrustInformation */

/* 3448 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3456 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3458 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3460 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3464 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3468 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3470 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3478 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3480 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3482 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3484 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3486 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3488 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter HighestRecordType */

/* 3490 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3492 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3494 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3498 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3500 */	NdrFcShort( 0x952 ),	/* Type Offset=2386 */

	/* Parameter CheckOnly */

/* 3502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3504 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3506 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter CollisionInfo */

/* 3508 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3510 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3512 */	NdrFcShort( 0x968 ),	/* Type Offset=2408 */

	/* Return value */

/* 3514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3516 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 3520 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3530 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3540 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 3548 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3558 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3560 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3566 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3568 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum77NotUsedOnWire */

/* 3576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3594 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3596 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum78NotUsedOnWire */

/* 3604 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3614 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum79NotUsedOnWire */

/* 3632 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3642 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum80NotUsedOnWire */

/* 3660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3670 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3672 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3678 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum81NotUsedOnWire */

/* 3688 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x51 ),	/* 81 */
/* 3696 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3698 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3706 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum82NotUsedOnWire */

/* 3716 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3724 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3726 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3734 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3736 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 3744 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x53 ),	/* 83 */
/* 3752 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3754 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3756 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3762 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3764 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum84NotUsedOnWire */

/* 3772 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3780 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3782 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum85NotUsedOnWire */

/* 3800 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3810 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3820 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum86NotUsedOnWire */

/* 3828 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3834 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3838 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3840 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3848 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum87NotUsedOnWire */

/* 3856 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x57 ),	/* 87 */
/* 3864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3866 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3868 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3876 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum88NotUsedOnWire */

/* 3884 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3894 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3902 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum89NotUsedOnWire */

/* 3912 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x59 ),	/* 89 */
/* 3920 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3922 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 3940 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3946 */	NdrFcShort( 0x5a ),	/* 90 */
/* 3948 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3950 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 3968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x5b ),	/* 91 */
/* 3976 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3978 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3980 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 3996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4004 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4006 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4008 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4014 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4016 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 4024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4032 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4036 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 4052 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4062 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4072 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 4080 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4090 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4092 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4098 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum96NotUsedOnWire */

/* 4108 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4120 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4126 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum97NotUsedOnWire */

/* 4136 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4142 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4144 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4146 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4148 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4154 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4156 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 4164 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4170 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4174 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4176 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4182 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4184 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 4192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4198 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4202 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 4220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4230 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4240 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 4248 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4258 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4260 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum102NotUsedOnWire */

/* 4276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 4304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4312 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum104NotUsedOnWire */

/* 4332 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4342 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4352 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 4360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4372 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4380 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 4388 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x6a ),	/* 106 */
/* 4396 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4398 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4408 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 4416 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0x6b ),	/* 107 */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4428 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4434 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 4444 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4450 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4454 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 4472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4478 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4482 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4484 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4490 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4492 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum110NotUsedOnWire */

/* 4500 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x6e ),	/* 110 */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4512 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4518 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4520 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum111NotUsedOnWire */

/* 4528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x6f ),	/* 111 */
/* 4536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4538 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4548 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum112NotUsedOnWire */

/* 4556 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4562 */	NdrFcShort( 0x70 ),	/* 112 */
/* 4564 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4566 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4568 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4576 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum113NotUsedOnWire */

/* 4584 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4590 */	NdrFcShort( 0x71 ),	/* 113 */
/* 4592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4594 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4596 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4602 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4604 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4610 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 4612 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x72 ),	/* 114 */
/* 4620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4622 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum115NotUsedOnWire */

/* 4640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4646 */	NdrFcShort( 0x73 ),	/* 115 */
/* 4648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4650 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4660 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum116NotUsedOnWire */

/* 4668 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4674 */	NdrFcShort( 0x74 ),	/* 116 */
/* 4676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4678 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4688 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum117NotUsedOnWire */

/* 4696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4702 */	NdrFcShort( 0x75 ),	/* 117 */
/* 4704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4706 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4708 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4716 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum118NotUsedOnWire */

/* 4724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x76 ),	/* 118 */
/* 4732 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4734 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4736 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4744 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum119NotUsedOnWire */

/* 4752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x77 ),	/* 119 */
/* 4760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4762 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4764 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4770 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum120NotUsedOnWire */

/* 4780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x78 ),	/* 120 */
/* 4788 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4792 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4798 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4800 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum121NotUsedOnWire */

/* 4808 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x79 ),	/* 121 */
/* 4816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4818 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4820 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum122NotUsedOnWire */

/* 4836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x7a ),	/* 122 */
/* 4844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4846 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4848 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4854 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4856 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum123NotUsedOnWire */

/* 4864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x7b ),	/* 123 */
/* 4872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4874 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4876 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4882 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4884 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum124NotUsedOnWire */

/* 4892 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x7c ),	/* 124 */
/* 4900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4902 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4910 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4912 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum125NotUsedOnWire */

/* 4920 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x7d ),	/* 125 */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4938 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4940 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum126NotUsedOnWire */

/* 4948 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x7e ),	/* 126 */
/* 4956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4958 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4960 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4966 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4968 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum127NotUsedOnWire */

/* 4976 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x7f ),	/* 127 */
/* 4984 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4986 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4988 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4994 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum128NotUsedOnWire */

/* 5004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5012 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5014 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5016 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5022 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx3 */

/* 5032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5038 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5040 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5042 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5044 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5046 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5048 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5050 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5052 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5054 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 5062 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5064 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5066 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 5068 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5072 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */

	/* Parameter AuthenticationInformation */

/* 5074 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5078 */	NdrFcShort( 0x6d4 ),	/* Type Offset=1748 */

	/* Parameter DesiredAccess */

/* 5080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 5086 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5088 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5090 */	NdrFcShort( 0x378 ),	/* Type Offset=888 */

	/* Return value */

/* 5092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5094 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy3 */

/* 5098 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5106 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5108 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
/* 5110 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5112 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5114 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5116 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5118 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5120 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5124 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 5128 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5130 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 5132 */	NdrFcShort( 0x77a ),	/* Type Offset=1914 */

	/* Parameter ObjectAttributes */

/* 5134 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5138 */	NdrFcShort( 0x16a ),	/* Type Offset=362 */

	/* Parameter DesiredAccess */

/* 5140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InVersion */

/* 5146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InRevisionInfo */

/* 5152 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5156 */	NdrFcShort( 0x9bc ),	/* Type Offset=2492 */

	/* Parameter OutVersion */

/* 5158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5160 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter OutRevisionInfo */

/* 5164 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5166 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5168 */	NdrFcShort( 0x9d6 ),	/* Type Offset=2518 */

	/* Parameter PolicyHandle */

/* 5170 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5172 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5174 */	NdrFcShort( 0x1a4 ),	/* Type Offset=420 */

	/* Return value */

/* 5176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5178 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dlsad_MIDL_TYPE_FORMAT_STRING ms2Dlsad__MIDL_TypeFormatString =
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
/* 1040 */	
			0x11, 0x0,	/* FC_RP */
/* 1042 */	NdrFcShort( 0xfe6a ),	/* Offset= -406 (636) */
/* 1044 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1048) */
/* 1048 */	
			0x12, 0x0,	/* FC_UP */
/* 1050 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1088) */
/* 1052 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1058 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 1062 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0xc ),	/* 12 */
/* 1066 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1068 */	NdrFcShort( 0xfbea ),	/* Offset= -1046 (22) */
/* 1070 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1072 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1074 */	NdrFcShort( 0xc ),	/* 12 */
/* 1076 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1078 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1080 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1082 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1084 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1062) */
/* 1086 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1088 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1092 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1072) */
/* 1094 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1094) */
/* 1096 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1052) */
/* 1100 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1102 */	
			0x11, 0x0,	/* FC_RP */
/* 1104 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1088) */
/* 1106 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1108 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1110 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1114) */
/* 1114 */	
			0x12, 0x0,	/* FC_UP */
/* 1116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1118) */
/* 1118 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1120 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1128) */
/* 1128 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1130 */	NdrFcShort( 0x300f ),	/* 12303 */
/* 1132 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1136 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (636) */
/* 1138 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1142 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1268) */
/* 1144 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1148 */	NdrFcShort( 0x8a ),	/* Offset= 138 (1286) */
/* 1150 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1154 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (1352) */
/* 1156 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1160 */	NdrFcShort( 0xfdd4 ),	/* Offset= -556 (604) */
/* 1162 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1166 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (1382) */
/* 1168 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1172 */	NdrFcShort( 0x144 ),	/* Offset= 324 (1496) */
/* 1174 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1178 */	NdrFcShort( 0x164 ),	/* Offset= 356 (1534) */
/* 1180 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1184 */	NdrFcShort( 0x190 ),	/* Offset= 400 (1584) */
/* 1186 */	NdrFcLong( 0xa ),	/* 10 */
/* 1190 */	NdrFcShort( 0x198 ),	/* Offset= 408 (1598) */
/* 1192 */	NdrFcLong( 0xb ),	/* 11 */
/* 1196 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (1632) */
/* 1198 */	NdrFcLong( 0xc ),	/* 12 */
/* 1202 */	NdrFcShort( 0x1ea ),	/* Offset= 490 (1692) */
/* 1204 */	NdrFcLong( 0xd ),	/* 13 */
/* 1208 */	NdrFcShort( 0x4e ),	/* Offset= 78 (1286) */
/* 1210 */	NdrFcLong( 0xe ),	/* 14 */
/* 1214 */	NdrFcShort( 0x216 ),	/* Offset= 534 (1748) */
/* 1216 */	NdrFcLong( 0xf ),	/* 15 */
/* 1220 */	NdrFcShort( 0x22a ),	/* Offset= 554 (1774) */
/* 1222 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1221) */
/* 1224 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1234 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1244 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1246 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1256 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1258 */	0x12, 0x0,	/* FC_UP */
/* 1260 */	NdrFcShort( 0xfb32 ),	/* Offset= -1230 (30) */
/* 1262 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1264 */	0x0,		/* 0 */
			NdrFcShort( 0xfd8b ),	/* Offset= -629 (636) */
			0x5b,		/* FC_END */
/* 1268 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1282) */
/* 1276 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1224) */
/* 1280 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1282 */	
			0x12, 0x0,	/* FC_UP */
/* 1284 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1234) */
/* 1286 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1288 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1290 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1292 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1298 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1302 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1312 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1316 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1318 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1322 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1328 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1330 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1332 */	NdrFcShort( 0xc ),	/* 12 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0xc ),	/* Offset= 12 (1348) */
/* 1338 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1292) */
/* 1342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1302) */
/* 1346 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1348 */	
			0x12, 0x0,	/* FC_UP */
/* 1350 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1312) */
/* 1352 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1358 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	0x12, 0x0,	/* FC_UP */
/* 1366 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1330) */
/* 1368 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1374 */	0x12, 0x0,	/* FC_UP */
/* 1376 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1330) */
/* 1378 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1380 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1382 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1384 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1386 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1390 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1392 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1394 */	0x12, 0x0,	/* FC_UP */
/* 1396 */	NdrFcShort( 0xfaaa ),	/* Offset= -1366 (30) */
/* 1398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1400 */	NdrFcShort( 0xc ),	/* 12 */
/* 1402 */	NdrFcShort( 0xc ),	/* 12 */
/* 1404 */	0x12, 0x0,	/* FC_UP */
/* 1406 */	NdrFcShort( 0xfd1e ),	/* Offset= -738 (668) */
/* 1408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1414 */	0x12, 0x0,	/* FC_UP */
/* 1416 */	NdrFcShort( 0xfb78 ),	/* Offset= -1160 (256) */
/* 1418 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1420 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1422 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1424 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1426 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1428 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1430 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1436 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1440 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1450 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1456 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1460 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1464 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1466 */	NdrFcShort( 0xc ),	/* 12 */
/* 1468 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1470 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1472 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0xe ),	/* Offset= 14 (1492) */
/* 1480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1482 */	NdrFcShort( 0xfc4a ),	/* Offset= -950 (532) */
/* 1484 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1486 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (1450) */
			0x36,		/* FC_POINTER */
/* 1490 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1492 */	
			0x12, 0x0,	/* FC_UP */
/* 1494 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1460) */
/* 1496 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1498 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1518) */
/* 1504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1506 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1430) */
/* 1508 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1440) */
/* 1514 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1516 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1518 */	
			0x12, 0x0,	/* FC_UP */
/* 1520 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1472) */
/* 1522 */	
			0x12, 0x0,	/* FC_UP */
/* 1524 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (1472) */
/* 1526 */	
			0x12, 0x0,	/* FC_UP */
/* 1528 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1472) */
/* 1530 */	
			0x12, 0x0,	/* FC_UP */
/* 1532 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1472) */
/* 1534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1536 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1540) */
/* 1542 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1544 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (1382) */
/* 1546 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0xfefa ),	/* Offset= -262 (1286) */
/* 1550 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1552 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1496) */
/* 1554 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1556 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1562 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1566 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1580) */
/* 1574 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1576 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1556) */
/* 1578 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1580 */	
			0x12, 0x0,	/* FC_UP */
/* 1582 */	NdrFcShort( 0xfa64 ),	/* Offset= -1436 (146) */
/* 1584 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1590) */
/* 1592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1594 */	NdrFcShort( 0xffe4 ),	/* Offset= -28 (1566) */
/* 1596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1598 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1600 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1604) */
/* 1606 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1608 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (1382) */
/* 1610 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1612 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (1286) */
/* 1614 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1616 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1584) */
/* 1618 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1620 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1624 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1626 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1628 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1630 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1632 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1634 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1636 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1638 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1642 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1644 */	0x12, 0x0,	/* FC_UP */
/* 1646 */	NdrFcShort( 0xf9b0 ),	/* Offset= -1616 (30) */
/* 1648 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1650 */	NdrFcShort( 0xc ),	/* 12 */
/* 1652 */	NdrFcShort( 0xc ),	/* 12 */
/* 1654 */	0x12, 0x0,	/* FC_UP */
/* 1656 */	NdrFcShort( 0xfc24 ),	/* Offset= -988 (668) */
/* 1658 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1660 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1662 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1664 */	0x12, 0x0,	/* FC_UP */
/* 1666 */	NdrFcShort( 0xfa7e ),	/* Offset= -1410 (256) */
/* 1668 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1672 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1674 */	0x12, 0x0,	/* FC_UP */
/* 1676 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1620) */
/* 1678 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1680 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 1682 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1684 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1688 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1690 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1692 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1694 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1698) */
/* 1700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1702 */	NdrFcShort( 0xffba ),	/* Offset= -70 (1632) */
/* 1704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1706 */	NdrFcShort( 0xfe5c ),	/* Offset= -420 (1286) */
/* 1708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1710 */	NdrFcShort( 0xff2a ),	/* Offset= -214 (1496) */
/* 1712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1714 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1716 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1718 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1720 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1722 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1724 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1726 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1732 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1736 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1740 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1742 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1746 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1748 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1750 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1770) */
/* 1756 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1758 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1714) */
/* 1760 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1762 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1720) */
/* 1764 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1766 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1726) */
/* 1768 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1770 */	
			0x12, 0x0,	/* FC_UP */
/* 1772 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1736) */
/* 1774 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1776 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1780) */
/* 1782 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1784 */	NdrFcShort( 0xfe6e ),	/* Offset= -402 (1382) */
/* 1786 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1788 */	NdrFcShort( 0xfe0a ),	/* Offset= -502 (1286) */
/* 1790 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1792 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1748) */
/* 1794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1796 */	
			0x11, 0x0,	/* FC_RP */
/* 1798 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1800) */
/* 1800 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1802 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1804 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1806 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1808 */	NdrFcShort( 0xfd58 ),	/* Offset= -680 (1128) */
/* 1810 */	
			0x12, 0x0,	/* FC_UP */
/* 1812 */	NdrFcShort( 0xfe1e ),	/* Offset= -482 (1330) */
/* 1814 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1816 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (1810) */
/* 1818 */	
			0x12, 0x0,	/* FC_UP */
/* 1820 */	NdrFcShort( 0xfaf8 ),	/* Offset= -1288 (532) */
/* 1822 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1824 */	NdrFcShort( 0xf8f6 ),	/* Offset= -1802 (22) */
/* 1826 */	
			0x11, 0x0,	/* FC_RP */
/* 1828 */	NdrFcShort( 0xf8f2 ),	/* Offset= -1806 (22) */
/* 1830 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1832 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1834) */
/* 1834 */	
			0x12, 0x0,	/* FC_UP */
/* 1836 */	NdrFcShort( 0xfb50 ),	/* Offset= -1200 (636) */
/* 1838 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1840 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1842 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1844 */	NdrFcShort( 0xc ),	/* Offset= 12 (1856) */
/* 1846 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1852 */	NdrFcLong( 0x100 ),	/* 256 */
/* 1856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1870) */
/* 1864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1866 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1846) */
/* 1868 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1870 */	
			0x12, 0x0,	/* FC_UP */
/* 1872 */	NdrFcShort( 0xfd82 ),	/* Offset= -638 (1234) */
/* 1874 */	
			0x11, 0x0,	/* FC_RP */
/* 1876 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1856) */
/* 1878 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1880 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1882) */
/* 1882 */	
			0x12, 0x0,	/* FC_UP */
/* 1884 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1886) */
/* 1886 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1888 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1892 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1894 */	NdrFcShort( 0xfd02 ),	/* Offset= -766 (1128) */
/* 1896 */	
			0x11, 0x0,	/* FC_RP */
/* 1898 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1900) */
/* 1900 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1902 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1908 */	NdrFcShort( 0xfcf4 ),	/* Offset= -780 (1128) */
/* 1910 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1912 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1810) */
/* 1914 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1916 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1918 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1920 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1922) */
/* 1922 */	
			0x12, 0x0,	/* FC_UP */
/* 1924 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1926) */
/* 1926 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1928 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1932 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1934 */	NdrFcShort( 0xfa2c ),	/* Offset= -1492 (442) */
/* 1936 */	
			0x11, 0x0,	/* FC_RP */
/* 1938 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1940) */
/* 1940 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1942 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1944 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1948 */	NdrFcShort( 0xfa1e ),	/* Offset= -1506 (442) */
/* 1950 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1954) */
/* 1954 */	
			0x12, 0x0,	/* FC_UP */
/* 1956 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1958) */
/* 1958 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1960 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1964 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1966 */	NdrFcShort( 0xfcba ),	/* Offset= -838 (1128) */
/* 1968 */	
			0x11, 0x0,	/* FC_RP */
/* 1970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1972) */
/* 1972 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1974 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1980 */	NdrFcShort( 0xfcac ),	/* Offset= -852 (1128) */
/* 1982 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1984 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2036) */
/* 1986 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1988 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1990 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1996 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1998 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2000 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2006 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2010 */	0x12, 0x0,	/* FC_UP */
/* 2012 */	NdrFcShort( 0xf842 ),	/* Offset= -1982 (30) */
/* 2014 */	NdrFcShort( 0xc ),	/* 12 */
/* 2016 */	NdrFcShort( 0xc ),	/* 12 */
/* 2018 */	0x12, 0x0,	/* FC_UP */
/* 2020 */	NdrFcShort( 0xfab8 ),	/* Offset= -1352 (668) */
/* 2022 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2024 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2026 */	0x12, 0x0,	/* FC_UP */
/* 2028 */	NdrFcShort( 0xf914 ),	/* Offset= -1772 (256) */
/* 2030 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2032 */	0x0,		/* 0 */
			NdrFcShort( 0xfd75 ),	/* Offset= -651 (1382) */
			0x5b,		/* FC_END */
/* 2036 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2040 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2042 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2044 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2046 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2048 */	0x12, 0x0,	/* FC_UP */
/* 2050 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1986) */
/* 2052 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2054 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2056 */	
			0x11, 0x0,	/* FC_RP */
/* 2058 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (1382) */
/* 2060 */	
			0x11, 0x0,	/* FC_RP */
/* 2062 */	NdrFcShort( 0xfdca ),	/* Offset= -566 (1496) */
/* 2064 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2068) */
/* 2068 */	
			0x12, 0x0,	/* FC_UP */
/* 2070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2072) */
/* 2072 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2074 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2076 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2078 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2080 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2082) */
/* 2082 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2084 */	NdrFcShort( 0x7003 ),	/* 28675 */
/* 2086 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2090 */	NdrFcShort( 0xfcdc ),	/* Offset= -804 (1286) */
/* 2092 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2096 */	NdrFcShort( 0xa ),	/* Offset= 10 (2106) */
/* 2098 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2102 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2126) */
/* 2104 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2103) */
/* 2106 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2110 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2112 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2118 */	0x12, 0x0,	/* FC_UP */
/* 2120 */	NdrFcShort( 0xf84a ),	/* Offset= -1974 (146) */
/* 2122 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2124 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2126 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2128 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2130 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2134 */	NdrFcShort( 0xf9be ),	/* Offset= -1602 (532) */
/* 2136 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2138 */	NdrFcShort( 0xf9ba ),	/* Offset= -1606 (532) */
/* 2140 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2142 */	NdrFcShort( 0xf9b6 ),	/* Offset= -1610 (532) */
/* 2144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2146 */	NdrFcShort( 0xf9b2 ),	/* Offset= -1614 (532) */
/* 2148 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2150 */	NdrFcShort( 0xf9ae ),	/* Offset= -1618 (532) */
/* 2152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2154 */	
			0x12, 0x0,	/* FC_UP */
/* 2156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2158) */
/* 2158 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2160 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2164 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2166 */	NdrFcShort( 0xffac ),	/* Offset= -84 (2082) */
/* 2168 */	
			0x11, 0x0,	/* FC_RP */
/* 2170 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (1584) */
/* 2172 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2176) */
/* 2176 */	
			0x12, 0x0,	/* FC_UP */
/* 2178 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (2386) */
/* 2180 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	NdrFcLong( 0xfa0 ),	/* 4000 */
/* 2190 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2192 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 2194 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 2196 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2200) */
/* 2200 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2202 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 2204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0xf9dc ),	/* Offset= -1572 (636) */
/* 2210 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2214 */	NdrFcShort( 0xf9d6 ),	/* Offset= -1578 (636) */
/* 2216 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2220 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2260) */
/* 2222 */	NdrFcShort( 0x5e ),	/* Offset= 94 (2316) */
/* 2224 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2226 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2228 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2230 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2232 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2234 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2236 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2240 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2242 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 2244 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2246 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2248 */	NdrFcShort( 0xe ),	/* 14 */
/* 2250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2252 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 2254 */	NdrFcShort( 0xc ),	/* 12 */
/* 2256 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2258 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2260 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2262 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2264 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	0x12, 0x0,	/* FC_UP */
/* 2274 */	NdrFcShort( 0xf81e ),	/* Offset= -2018 (256) */
/* 2276 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2282 */	0x12, 0x0,	/* FC_UP */
/* 2284 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2224) */
/* 2286 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2290 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2292 */	0x12, 0x0,	/* FC_UP */
/* 2294 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (2242) */
/* 2296 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2298 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2300 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2302 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 2304 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2306 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2312 */	NdrFcLong( 0x20000 ),	/* 131072 */
/* 2316 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2318 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2330) */
/* 2324 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2326 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2306) */
/* 2328 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2330 */	
			0x12, 0x0,	/* FC_UP */
/* 2332 */	NdrFcShort( 0xf776 ),	/* Offset= -2186 (146) */
/* 2334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2336 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2340) */
/* 2342 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2344 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2346 */	NdrFcShort( 0xf8ea ),	/* Offset= -1814 (532) */
/* 2348 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2350 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (2190) */
/* 2352 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2354 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2356 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2358 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2364 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2366 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	0x12, 0x0,	/* FC_UP */
/* 2380 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2334) */
/* 2382 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2386 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2400) */
/* 2394 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2396 */	NdrFcShort( 0xff28 ),	/* Offset= -216 (2180) */
/* 2398 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2400 */	
			0x12, 0x0,	/* FC_UP */
/* 2402 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (2354) */
/* 2404 */	
			0x11, 0x0,	/* FC_RP */
/* 2406 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2386) */
/* 2408 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2412) */
/* 2412 */	
			0x12, 0x0,	/* FC_UP */
/* 2414 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2464) */
/* 2416 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2418 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2422) */
/* 2424 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2426 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2428 */	0x0,		/* 0 */
			NdrFcShort( 0xf8ff ),	/* Offset= -1793 (636) */
			0x5b,		/* FC_END */
/* 2432 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2434 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2436 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2442 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2444 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	0x12, 0x0,	/* FC_UP */
/* 2458 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2416) */
/* 2460 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2462 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2464 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2470 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2472 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2474 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2476 */	0x12, 0x0,	/* FC_UP */
/* 2478 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2432) */
/* 2480 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2482 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2484 */	
			0x11, 0x0,	/* FC_RP */
/* 2486 */	NdrFcShort( 0xfd1e ),	/* Offset= -738 (1748) */
/* 2488 */	
			0x11, 0x0,	/* FC_RP */
/* 2490 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2492) */
/* 2492 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2494 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2498 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2502) */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 2506 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2510 */	NdrFcShort( 0xf648 ),	/* Offset= -2488 (22) */
/* 2512 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2511) */
/* 2514 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2518) */
/* 2518 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2520 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2526 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2502) */

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
    724,
    752,
    812,
    872,
    920,
    968,
    1022,
    1050,
    1078,
    1126,
    1174,
    1234,
    1288,
    1342,
    1402,
    1456,
    1522,
    1576,
    1630,
    1702,
    1744,
    1798,
    1852,
    1906,
    1966,
    2026,
    2086,
    2134,
    2188,
    2242,
    2296,
    2324,
    2378,
    2432,
    2492,
    2552,
    2612,
    2678,
    2706,
    2760,
    2814,
    2874,
    2902,
    2930,
    2958,
    3024,
    3052,
    3080,
    3108,
    3136,
    3164,
    3192,
    3220,
    3248,
    3276,
    3304,
    3332,
    3360,
    3388,
    3448,
    3520,
    3548,
    3576,
    3604,
    3632,
    3660,
    3688,
    3716,
    3744,
    3772,
    3800,
    3828,
    3856,
    3884,
    3912,
    3940,
    3968,
    3996,
    4024,
    4052,
    4080,
    4108,
    4136,
    4164,
    4192,
    4220,
    4248,
    4276,
    4304,
    4332,
    4360,
    4388,
    4416,
    4444,
    4472,
    4500,
    4528,
    4556,
    4584,
    4612,
    4640,
    4668,
    4696,
    4724,
    4752,
    4780,
    4808,
    4836,
    4864,
    4892,
    4920,
    4948,
    4976,
    5004,
    5032,
    5098
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
    ms2Dlsad__MIDL_TypeFormatString.Format,
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

