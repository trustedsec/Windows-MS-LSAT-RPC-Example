

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsad.idl:
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

#include "ms-lsad.h"

#define TYPE_FORMAT_STRING_SIZE   2185                              
#define PROC_FORMAT_STRING_SIZE   5445                              
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
                  ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[44],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[74],
                  PolicyHandle,
                  EnumerationContext,
                  EnumerationBuffer,
                  PreferedMaximumLength);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[136],
                  ObjectHandle,
                  SecurityInformation,
                  SecurityDescriptor);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[192],
                  ObjectHandle,
                  SecurityInformation,
                  SecurityDescriptor);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[248],
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[278],
                  SystemName,
                  ObjectAttributes,
                  DesiredAccess,
                  PolicyHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[334],
                  PolicyHandle,
                  InformationClass,
                  PolicyInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[390],
                  PolicyHandle,
                  InformationClass,
                  PolicyInformation);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[446],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[476],
                  PolicyHandle,
                  AccountSid,
                  DesiredAccess,
                  AccountHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[538],
                  PolicyHandle,
                  EnumerationContext,
                  EnumerationBuffer,
                  PreferedMaximumLength);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[600],
                  PolicyHandle,
                  TrustedDomainInformation,
                  DesiredAccess,
                  TrustedDomainHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[662],
                  PolicyHandle,
                  EnumerationContext,
                  EnumerationBuffer,
                  PreferedMaximumLength);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_TM_14( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[724],
                  IDL_handle);
    
}


void Lsar_LSA_TM_15( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[754],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[784],
                  PolicyHandle,
                  SecretName,
                  DesiredAccess,
                  SecretHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[846],
                  PolicyHandle,
                  AccountSid,
                  DesiredAccess,
                  AccountHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET *Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[908],
                  AccountHandle,
                  Privileges);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[958],
                  AccountHandle,
                  Privileges);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1008],
                  AccountHandle,
                  AllPrivileges,
                  Privileges);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1064],
                  IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1094],
                  IDL_handle);
    
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ unsigned long *SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1124],
                  AccountHandle,
                  SystemAccess);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned long SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1174],
                  AccountHandle,
                  SystemAccess);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1224],
                  PolicyHandle,
                  TrustedDomainSid,
                  DesiredAccess,
                  TrustedDomainHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1286],
                  TrustedDomainHandle,
                  InformationClass,
                  TrustedDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1342],
                  TrustedDomainHandle,
                  InformationClass,
                  TrustedDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1398],
                  PolicyHandle,
                  SecretName,
                  DesiredAccess,
                  SecretHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1460],
                  SecretHandle,
                  EncryptedCurrentValue,
                  EncryptedOldValue);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1516],
                  SecretHandle,
                  EncryptedCurrentValue,
                  CurrentValueSetTime,
                  EncryptedOldValue,
                  OldValueSetTime);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1584],
                  PolicyHandle,
                  Name,
                  Value);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1640],
                  PolicyHandle,
                  Value,
                  Name);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1696],
                  PolicyHandle,
                  Name,
                  ClientLanguage,
                  ClientSystemDefaultLanguage,
                  DisplayName,
                  LanguageReturned);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1770],
                  ObjectHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1814],
                  PolicyHandle,
                  UserRight,
                  EnumerationBuffer);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1870],
                  PolicyHandle,
                  AccountSid,
                  UserRights);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1926],
                  PolicyHandle,
                  AccountSid,
                  UserRights);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[1982],
                  PolicyHandle,
                  AccountSid,
                  AllRights,
                  UserRights);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2044],
                  PolicyHandle,
                  TrustedDomainSid,
                  InformationClass,
                  TrustedDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2106],
                  PolicyHandle,
                  TrustedDomainSid,
                  InformationClass,
                  TrustedDomainInformation);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2168],
                  PolicyHandle,
                  TrustedDomainSid);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2218],
                  PolicyHandle,
                  KeyName,
                  EncryptedData);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2274],
                  PolicyHandle,
                  KeyName,
                  EncryptedData);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2330],
                  SystemName,
                  ObjectAttributes,
                  DesiredAccess,
                  PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Lsar_LSA_TM_45( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2386],
                  IDL_handle);
    
}


NTSTATUS LsarQueryInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2416],
                  PolicyHandle,
                  InformationClass,
                  PolicyInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2472],
                  PolicyHandle,
                  InformationClass,
                  PolicyInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2528],
                  PolicyHandle,
                  TrustedDomainName,
                  InformationClass,
                  TrustedDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2590],
                  PolicyHandle,
                  TrustedDomainName,
                  InformationClass,
                  TrustedDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2652],
                  PolicyHandle,
                  EnumerationContext,
                  EnumerationBuffer,
                  PreferedMaximumLength);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2714],
                  PolicyHandle,
                  TrustedDomainInformation,
                  AuthenticationInformation,
                  DesiredAccess,
                  TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2782],
                  IDL_handle);
    
}


NTSTATUS LsarQueryDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_DOMAIN_INFORMATION *PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2812],
                  PolicyHandle,
                  InformationClass,
                  PolicyDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2868],
                  PolicyHandle,
                  InformationClass,
                  PolicyDomainInformation);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2924],
                  PolicyHandle,
                  TrustedDomainName,
                  DesiredAccess,
                  TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[2986],
                  IDL_handle);
    
}


void Lsar_LSA_TM_57( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3016],
                  IDL_handle);
    
}


void Lsar_LSA_TM_58( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3046],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3076],
                  PolicyHandle,
                  TrustedDomainInformation,
                  AuthenticationInformation,
                  DesiredAccess,
                  TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3144],
                  IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3174],
                  IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3204],
                  IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3234],
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3264],
                  IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3294],
                  IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3324],
                  IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3354],
                  IDL_handle);
    
}


void Lsar_LSA_TM_68( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3384],
                  IDL_handle);
    
}


void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3414],
                  IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3444],
                  IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3474],
                  IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3504],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3534],
                  PolicyHandle,
                  TrustedDomainName,
                  HighestRecordType,
                  ForestTrustInfo);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3596],
                  PolicyHandle,
                  TrustedDomainName,
                  HighestRecordType,
                  ForestTrustInfo,
                  CheckOnly,
                  CollisionInfo);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3670],
                  IDL_handle);
    
}


void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3700],
                  IDL_handle);
    
}


void Opnum77NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3730],
                  IDL_handle);
    
}


void Opnum78NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3760],
                  IDL_handle);
    
}


void Opnum79NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3790],
                  IDL_handle);
    
}


void Opnum80NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3820],
                  IDL_handle);
    
}


void Opnum81NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3850],
                  IDL_handle);
    
}


void Opnum82NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3880],
                  IDL_handle);
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3910],
                  IDL_handle);
    
}


void Opnum84NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3940],
                  IDL_handle);
    
}


void Opnum85NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[3970],
                  IDL_handle);
    
}


void Opnum86NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4000],
                  IDL_handle);
    
}


void Opnum87NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4030],
                  IDL_handle);
    
}


void Opnum88NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4060],
                  IDL_handle);
    
}


void Opnum89NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4090],
                  IDL_handle);
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4120],
                  IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4150],
                  IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4180],
                  IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4210],
                  IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4240],
                  IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4270],
                  IDL_handle);
    
}


void Opnum96NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4300],
                  IDL_handle);
    
}


void Opnum97NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4330],
                  IDL_handle);
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4360],
                  IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4390],
                  IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4420],
                  IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4450],
                  IDL_handle);
    
}


void Opnum102NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4480],
                  IDL_handle);
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4510],
                  IDL_handle);
    
}


void Opnum104NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4540],
                  IDL_handle);
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4570],
                  IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4600],
                  IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4630],
                  IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4660],
                  IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4690],
                  IDL_handle);
    
}


void Opnum110NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4720],
                  IDL_handle);
    
}


void Opnum111NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4750],
                  IDL_handle);
    
}


void Opnum112NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4780],
                  IDL_handle);
    
}


void Opnum113NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4810],
                  IDL_handle);
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4840],
                  IDL_handle);
    
}


void Opnum115NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4870],
                  IDL_handle);
    
}


void Opnum116NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4900],
                  IDL_handle);
    
}


void Opnum117NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4930],
                  IDL_handle);
    
}


void Opnum118NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4960],
                  IDL_handle);
    
}


void Opnum119NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[4990],
                  IDL_handle);
    
}


void Opnum120NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5020],
                  IDL_handle);
    
}


void Opnum121NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5050],
                  IDL_handle);
    
}


void Opnum122NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5080],
                  IDL_handle);
    
}


void Opnum123NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5110],
                  IDL_handle);
    
}


void Opnum124NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5140],
                  IDL_handle);
    
}


void Opnum125NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5170],
                  IDL_handle);
    
}


void Opnum126NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5200],
                  IDL_handle);
    
}


void Opnum127NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5230],
                  IDL_handle);
    
}


void Opnum128NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5260],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5290],
                  PolicyHandle,
                  TrustedDomainInformation,
                  AuthenticationInformation,
                  DesiredAccess,
                  TrustedDomainHandle);
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
                  (PFORMAT_STRING) &ms2Dlsad__MIDL_ProcFormatString.Format[5358],
                  SystemName,
                  ObjectAttributes,
                  DesiredAccess,
                  InVersion,
                  InRevisionInfo,
                  OutVersion,
                  OutRevisionInfo,
                  PolicyHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];
extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
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

	/* Procedure LsarEnumeratePrivileges */

/* 74 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 76 */	NdrFcLong( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 84 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 86 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 88 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0x48 ),	/* 72 */
/* 92 */	NdrFcShort( 0x24 ),	/* 36 */
/* 94 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 96 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 98 */	NdrFcShort( 0x1 ),	/* 1 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 106 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 108 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 110 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 112 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 118 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 122 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */

	/* Parameter PreferedMaximumLength */

/* 124 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 132 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecurityObject */

/* 136 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x3 ),	/* 3 */
/* 144 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 146 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 148 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 150 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 152 */	NdrFcShort( 0x2c ),	/* 44 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 158 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 168 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 170 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 172 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecurityInformation */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 180 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 182 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 184 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecurityObject */

/* 192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 202 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 206 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 208 */	NdrFcShort( 0x2c ),	/* 44 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 214 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 224 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 226 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 228 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecurityInformation */

/* 230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 240 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Return value */

/* 242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 248 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x5 ),	/* 5 */
/* 256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 258 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 268 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarOpenPolicy */

/* 278 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x6 ),	/* 6 */
/* 286 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 288 */	NdrFcShort( 0x22 ),	/* 34 */
/* 290 */	NdrFcShort( 0x40 ),	/* 64 */
/* 292 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 294 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 304 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 308 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Parameter ObjectAttributes */

/* 310 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 314 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter DesiredAccess */

/* 316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 322 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 326 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 330 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInformationPolicy */

/* 334 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x7 ),	/* 7 */
/* 342 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 346 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	NdrFcShort( 0x2a ),	/* 42 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 356 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 358 */	NdrFcShort( 0x1 ),	/* 1 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 366 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 368 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 370 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 376 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 378 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0x176 ),	/* Type Offset=374 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy */

/* 390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 400 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 404 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 406 */	NdrFcShort( 0x2a ),	/* 42 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 412 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 422 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 424 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 426 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 432 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 434 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 438 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Return value */

/* 440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum9NotUsedOnWire */

/* 446 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x9 ),	/* 9 */
/* 454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 456 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 466 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateAccount */

/* 476 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0xa ),	/* 10 */
/* 484 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 486 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 488 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 490 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 492 */	NdrFcShort( 0x2c ),	/* 44 */
/* 494 */	NdrFcShort( 0x40 ),	/* 64 */
/* 496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 498 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 508 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 510 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 512 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 514 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 518 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter DesiredAccess */

/* 520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 526 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 528 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 530 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 534 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccounts */

/* 538 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0xb ),	/* 11 */
/* 546 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 548 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 550 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 552 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0x48 ),	/* 72 */
/* 556 */	NdrFcShort( 0x24 ),	/* 36 */
/* 558 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 560 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 570 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 572 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 574 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 576 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 582 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 586 */	NdrFcShort( 0x318 ),	/* Type Offset=792 */

	/* Parameter PreferedMaximumLength */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomain */

/* 600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0xc ),	/* 12 */
/* 608 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 610 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 614 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 616 */	NdrFcShort( 0x2c ),	/* 44 */
/* 618 */	NdrFcShort( 0x40 ),	/* 64 */
/* 620 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 622 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 632 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 634 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 636 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 638 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 642 */	NdrFcShort( 0x32c ),	/* Type Offset=812 */

	/* Parameter DesiredAccess */

/* 644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 650 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 652 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 654 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 658 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomains */

/* 662 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0xd ),	/* 13 */
/* 670 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 672 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 674 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 676 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 678 */	NdrFcShort( 0x48 ),	/* 72 */
/* 680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 684 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 694 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 696 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 698 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 700 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 702 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 706 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 708 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 710 */	NdrFcShort( 0x358 ),	/* Type Offset=856 */

	/* Parameter PreferedMaximumLength */

/* 712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 714 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 720 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_TM_14 */

/* 724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xe ),	/* 14 */
/* 732 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 734 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 744 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_15 */

/* 754 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0xf ),	/* 15 */
/* 762 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 764 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 774 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateSecret */

/* 784 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x10 ),	/* 16 */
/* 792 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 794 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 798 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 800 */	NdrFcShort( 0x2c ),	/* 44 */
/* 802 */	NdrFcShort( 0x40 ),	/* 64 */
/* 804 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 806 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 816 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 818 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 820 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 822 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 834 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 838 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenAccount */

/* 846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x11 ),	/* 17 */
/* 854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 856 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 858 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 860 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0x2c ),	/* 44 */
/* 864 */	NdrFcShort( 0x40 ),	/* 64 */
/* 866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 868 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 878 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 880 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 882 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 884 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 888 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter DesiredAccess */

/* 890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 896 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 900 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 904 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumeratePrivilegesAccount */

/* 908 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x12 ),	/* 18 */
/* 916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 918 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 920 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 922 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 924 */	NdrFcShort( 0x24 ),	/* 36 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 930 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 940 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 944 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 946 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 950 */	NdrFcShort( 0x36c ),	/* Type Offset=876 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddPrivilegesToAccount */

/* 958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x13 ),	/* 19 */
/* 966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 968 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0x24 ),	/* 36 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 980 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 990 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 996 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x398 ),	/* Type Offset=920 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemovePrivilegesFromAccount */

/* 1008 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1018 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1020 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1022 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1024 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1030 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1040 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1042 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1044 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AllPrivileges */

/* 1046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1048 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1050 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Privileges */

/* 1052 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1054 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1056 */	NdrFcShort( 0x370 ),	/* Type Offset=880 */

	/* Return value */

/* 1058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1064 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x15 ),	/* 21 */
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

	/* Procedure Opnum22NotUsedOnWire */

/* 1094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x16 ),	/* 22 */
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

	/* Procedure LsarGetSystemAccessAccount */

/* 1124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1132 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1134 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1138 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1142 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1146 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1156 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1158 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1160 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSystemAccessAccount */

/* 1174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1184 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1186 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1188 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1190 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1194 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1196 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1206 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1208 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1210 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomain */

/* 1224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1232 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1234 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1236 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1238 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1242 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1244 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1246 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1260 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 1262 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1266 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter DesiredAccess */

/* 1268 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1274 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1276 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1278 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 1280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1282 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInfoTrustedDomain */

/* 1286 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1294 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1296 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1298 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1300 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1302 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1308 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1318 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1320 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1322 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1328 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1330 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1332 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1334 */	NdrFcShort( 0x3ae ),	/* Type Offset=942 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationTrustedDomain */

/* 1342 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1350 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1354 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1358 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1364 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1374 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1376 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1378 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1384 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1386 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1390 */	NdrFcShort( 0x620 ),	/* Type Offset=1568 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenSecret */

/* 1398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1406 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1408 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1414 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1416 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1418 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1420 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1430 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1434 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 1436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1440 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 1442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 1448 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1450 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1452 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 1454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1456 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecret */

/* 1460 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1468 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1470 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1474 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1476 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1482 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1492 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1494 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1496 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1498 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1500 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1502 */	NdrFcShort( 0x62a ),	/* Type Offset=1578 */

	/* Parameter EncryptedOldValue */

/* 1504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1506 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1508 */	NdrFcShort( 0x62a ),	/* Type Offset=1578 */

	/* Return value */

/* 1510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1512 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecret */

/* 1516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1528 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1532 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1534 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1536 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1538 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1540 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1548 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1550 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1552 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1554 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1558 */	NdrFcShort( 0x62e ),	/* Type Offset=1582 */

	/* Parameter CurrentValueSetTime */

/* 1560 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1564 */	NdrFcShort( 0x632 ),	/* Type Offset=1586 */

	/* Parameter EncryptedOldValue */

/* 1566 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1568 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1570 */	NdrFcShort( 0x62e ),	/* Type Offset=1582 */

	/* Parameter OldValueSetTime */

/* 1572 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1574 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1576 */	NdrFcShort( 0x632 ),	/* Type Offset=1586 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeValue */

/* 1584 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1592 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1594 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1596 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1598 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1600 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1602 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1604 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1606 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1616 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1618 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1620 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1622 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1626 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter Value */

/* 1628 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1632 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 1634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1636 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeName */

/* 1640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1650 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1652 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1654 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1656 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1660 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1662 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1672 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1674 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1676 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Value */

/* 1678 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1682 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter Name */

/* 1684 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1686 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1688 */	NdrFcShort( 0x63e ),	/* Type Offset=1598 */

	/* Return value */

/* 1690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeDisplayName */

/* 1696 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1704 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1706 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1708 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1710 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1712 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1714 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1716 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1718 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1728 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1730 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1732 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1734 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1736 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1738 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter ClientLanguage */

/* 1740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1742 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1744 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ClientSystemDefaultLanguage */

/* 1746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1748 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1750 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter DisplayName */

/* 1752 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1756 */	NdrFcShort( 0x63e ),	/* Type Offset=1598 */

	/* Parameter LanguageReturned */

/* 1758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1760 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1762 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteObject */

/* 1770 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1780 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1782 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1784 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1786 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1788 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1792 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 1802 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1806 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountsWithUserRight */

/* 1814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1824 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1830 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1834 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1836 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1846 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1848 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1850 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter UserRight */

/* 1852 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1856 */	NdrFcShort( 0x642 ),	/* Type Offset=1602 */

	/* Parameter EnumerationBuffer */

/* 1858 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1862 */	NdrFcShort( 0x318 ),	/* Type Offset=792 */

	/* Return value */

/* 1864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountRights */

/* 1870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1878 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1880 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1890 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1892 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1902 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1904 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1906 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1908 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1912 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter UserRights */

/* 1914 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1918 */	NdrFcShort( 0x658 ),	/* Type Offset=1624 */

	/* Return value */

/* 1920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1922 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddAccountRights */

/* 1926 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1934 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1936 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1938 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1940 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1942 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1948 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1958 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1960 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1962 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 1964 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1968 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter UserRights */

/* 1970 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1974 */	NdrFcShort( 0x658 ),	/* Type Offset=1624 */

	/* Return value */

/* 1976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1978 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemoveAccountRights */

/* 1982 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1990 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1992 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1994 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1996 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1998 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2004 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2014 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2016 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2018 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 2020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2024 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter AllRights */

/* 2026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2028 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2030 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter UserRights */

/* 2032 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2034 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2036 */	NdrFcShort( 0x658 ),	/* Type Offset=1624 */

	/* Return value */

/* 2038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2040 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfo */

/* 2044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2052 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2054 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2056 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2058 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2060 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2064 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2066 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2076 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2078 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2080 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2086 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter InformationClass */

/* 2088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2090 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2092 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2094 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2096 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2098 */	NdrFcShort( 0x670 ),	/* Type Offset=1648 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfo */

/* 2106 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2114 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2116 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2118 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2120 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2122 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2126 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2128 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2138 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2140 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2142 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2144 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2148 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter InformationClass */

/* 2150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2154 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2156 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2160 */	NdrFcShort( 0x686 ),	/* Type Offset=1670 */

	/* Return value */

/* 2162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2164 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteTrustedDomain */

/* 2168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2178 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2180 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2182 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2188 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2190 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2200 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2202 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2204 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2210 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Return value */

/* 2212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarStorePrivateData */

/* 2218 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2226 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2228 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2230 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2232 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2238 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2240 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2250 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2254 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2256 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2260 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter EncryptedData */

/* 2262 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2264 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2266 */	NdrFcShort( 0x62a ),	/* Type Offset=1578 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRetrievePrivateData */

/* 2274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2282 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2284 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2286 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2288 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2290 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2294 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2296 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2306 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2308 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2310 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2312 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2316 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter EncryptedData */

/* 2318 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2322 */	NdrFcShort( 0x690 ),	/* Type Offset=1680 */

	/* Return value */

/* 2324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 2330 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 2332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2338 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2342 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2344 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2346 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2356 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2358 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2360 */	NdrFcShort( 0x694 ),	/* Type Offset=1684 */

	/* Parameter ObjectAttributes */

/* 2362 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2366 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter DesiredAccess */

/* 2368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 2374 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2378 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 2380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2382 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Lsar_LSA_TM_45 */

/* 2386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2394 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2404 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2406 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryInformationPolicy2 */

/* 2416 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2424 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2426 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2428 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2430 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2432 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2436 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2438 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2448 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2452 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2458 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2460 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2464 */	NdrFcShort( 0x698 ),	/* Type Offset=1688 */

	/* Return value */

/* 2466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy2 */

/* 2472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2480 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2482 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2484 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2486 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2488 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2494 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2504 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2506 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2508 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2514 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2520 */	NdrFcShort( 0x6ae ),	/* Type Offset=1710 */

	/* Return value */

/* 2522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfoByName */

/* 2528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2536 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2544 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2550 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2564 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2566 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2570 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter InformationClass */

/* 2572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2576 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2578 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2582 */	NdrFcShort( 0x6b8 ),	/* Type Offset=1720 */

	/* Return value */

/* 2584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2586 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfoByName */

/* 2590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2598 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2606 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2612 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2622 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2624 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2626 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2628 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2632 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter InformationClass */

/* 2634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2638 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2640 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2644 */	NdrFcShort( 0x6ce ),	/* Type Offset=1742 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomainsEx */

/* 2652 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2660 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2662 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2664 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2666 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2668 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2672 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2674 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2684 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2688 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 2690 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 2696 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2700 */	NdrFcShort( 0x6f2 ),	/* Type Offset=1778 */

	/* Parameter PreferedMaximumLength */

/* 2702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx */

/* 2714 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2722 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2724 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2726 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2728 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2730 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2732 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2734 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2736 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2746 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2748 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2750 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 2752 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2756 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter AuthenticationInformation */

/* 2758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2762 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Parameter DesiredAccess */

/* 2764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2770 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2772 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2774 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 2776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2788 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2790 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2792 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2802 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryDomainInformationPolicy */

/* 2812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2820 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2822 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2824 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2826 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2828 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2832 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2834 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2844 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2848 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2854 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2856 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2860 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetDomainInformationPolicy */

/* 2868 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2876 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2878 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2880 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2882 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2884 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2888 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2890 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2900 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2902 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2904 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2908 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2910 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2914 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2916 */	NdrFcShort( 0x760 ),	/* Type Offset=1888 */

	/* Return value */

/* 2918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2920 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomainByName */

/* 2924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2932 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2934 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2936 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2938 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2940 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2942 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2946 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2956 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2958 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2960 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2962 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2964 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2966 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 2968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2970 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2974 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2976 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2978 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 2980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2982 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 2986 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2994 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2996 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3006 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_57 */

/* 3016 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3026 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3036 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_58 */

/* 3046 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3056 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3066 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx2 */

/* 3076 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3082 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3084 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3086 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3088 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3090 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3092 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3094 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3098 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3112 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 3114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3118 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter AuthenticationInformation */

/* 3120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3124 */	NdrFcShort( 0x562 ),	/* Type Offset=1378 */

	/* Parameter DesiredAccess */

/* 3126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 3132 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3136 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 3138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3140 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 3144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3152 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3154 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3164 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 3174 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3184 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3194 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 3204 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3214 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3224 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3234 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3242 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3244 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3246 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3264 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3274 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3276 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3282 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3284 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 3294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3304 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3312 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3314 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 3324 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3334 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3336 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3344 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3354 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3364 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3366 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3372 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3374 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Lsar_LSA_TM_68 */

/* 3384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3414 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3424 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 3444 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3452 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3454 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3456 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3462 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3464 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3474 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3484 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3504 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3514 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3524 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryForestTrustInformation */

/* 3534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3542 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3546 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3550 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3556 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3566 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3568 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3570 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3572 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3576 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter HighestRecordType */

/* 3578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3582 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3584 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3588 */	NdrFcShort( 0x772 ),	/* Type Offset=1906 */

	/* Return value */

/* 3590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3592 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetForestTrustInformation */

/* 3596 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3604 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3606 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3608 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3612 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3616 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3618 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3628 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3632 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3634 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3638 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter HighestRecordType */

/* 3640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3642 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3644 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3646 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3650 */	NdrFcShort( 0x804 ),	/* Type Offset=2052 */

	/* Parameter CheckOnly */

/* 3652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3656 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter CollisionInfo */

/* 3658 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3660 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3662 */	NdrFcShort( 0x81c ),	/* Type Offset=2076 */

	/* Return value */

/* 3664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3666 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 3670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3680 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3688 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3690 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 3700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3706 */	NdrFcShort( 0x4c ),	/* 76 */
/* 3708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3710 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3720 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum77NotUsedOnWire */

/* 3730 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3736 */	NdrFcShort( 0x4d ),	/* 77 */
/* 3738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3740 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3750 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum78NotUsedOnWire */

/* 3760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x4e ),	/* 78 */
/* 3768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3770 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3780 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum79NotUsedOnWire */

/* 3790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x4f ),	/* 79 */
/* 3798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3800 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3802 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum80NotUsedOnWire */

/* 3820 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3828 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3830 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3832 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3840 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum81NotUsedOnWire */

/* 3850 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x51 ),	/* 81 */
/* 3858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3860 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3868 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3870 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum82NotUsedOnWire */

/* 3880 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x52 ),	/* 82 */
/* 3888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3890 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3900 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 3910 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x53 ),	/* 83 */
/* 3918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3920 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3930 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum84NotUsedOnWire */

/* 3940 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3946 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3950 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3960 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum85NotUsedOnWire */

/* 3970 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3976 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3980 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3988 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3990 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum86NotUsedOnWire */

/* 4000 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4006 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4008 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4010 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4012 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4018 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4020 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum87NotUsedOnWire */

/* 4030 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4038 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4040 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4042 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4048 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4050 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum88NotUsedOnWire */

/* 4060 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4068 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4070 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4080 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum89NotUsedOnWire */

/* 4090 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4100 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4108 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4110 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 4120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4126 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4140 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 4150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x5b ),	/* 91 */
/* 4158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 4180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4198 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4200 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 4210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4228 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4230 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 4240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4250 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4260 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 4270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4288 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum96NotUsedOnWire */

/* 4300 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4310 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4318 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum97NotUsedOnWire */

/* 4330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4348 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 4360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4372 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 4390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4408 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4410 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 4420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4430 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4438 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 4450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum102NotUsedOnWire */

/* 4480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4500 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 4510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4520 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4528 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4530 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum104NotUsedOnWire */

/* 4540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4558 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4560 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 4570 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4580 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4588 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4590 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 4600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4606 */	NdrFcShort( 0x6a ),	/* 106 */
/* 4608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4610 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4620 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 4630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x6b ),	/* 107 */
/* 4638 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4648 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 4660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4670 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4672 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 4690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x6d ),	/* 109 */
/* 4698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4700 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4708 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4710 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum110NotUsedOnWire */

/* 4720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x6e ),	/* 110 */
/* 4728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4730 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4732 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4738 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4740 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum111NotUsedOnWire */

/* 4750 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0x6f ),	/* 111 */
/* 4758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4760 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4762 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4768 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4770 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum112NotUsedOnWire */

/* 4780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x70 ),	/* 112 */
/* 4788 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4792 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4798 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4800 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum113NotUsedOnWire */

/* 4810 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x71 ),	/* 113 */
/* 4818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4820 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4822 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4828 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4830 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 4840 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x72 ),	/* 114 */
/* 4848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4850 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4858 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4860 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum115NotUsedOnWire */

/* 4870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x73 ),	/* 115 */
/* 4878 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4880 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4890 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum116NotUsedOnWire */

/* 4900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0x74 ),	/* 116 */
/* 4908 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4918 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4920 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum117NotUsedOnWire */

/* 4930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x75 ),	/* 117 */
/* 4938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4940 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4948 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4950 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum118NotUsedOnWire */

/* 4960 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x76 ),	/* 118 */
/* 4968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4970 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4972 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4978 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4980 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum119NotUsedOnWire */

/* 4990 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x77 ),	/* 119 */
/* 4998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5000 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5002 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5008 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5010 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum120NotUsedOnWire */

/* 5020 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5028 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5030 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5032 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5038 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5040 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum121NotUsedOnWire */

/* 5050 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5060 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5062 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5068 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5070 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum122NotUsedOnWire */

/* 5080 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x7a ),	/* 122 */
/* 5088 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5090 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5098 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5100 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum123NotUsedOnWire */

/* 5110 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5116 */	NdrFcShort( 0x7b ),	/* 123 */
/* 5118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5122 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5128 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum124NotUsedOnWire */

/* 5140 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5146 */	NdrFcShort( 0x7c ),	/* 124 */
/* 5148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5150 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5152 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5158 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5160 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum125NotUsedOnWire */

/* 5170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x7d ),	/* 125 */
/* 5178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum126NotUsedOnWire */

/* 5200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x7e ),	/* 126 */
/* 5208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5212 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5218 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5220 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum127NotUsedOnWire */

/* 5230 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5236 */	NdrFcShort( 0x7f ),	/* 127 */
/* 5238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5240 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5242 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5250 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum128NotUsedOnWire */

/* 5260 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5270 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5272 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5278 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5280 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx3 */

/* 5290 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5296 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5298 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5300 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5302 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5304 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5306 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5308 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5310 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5312 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 5322 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5326 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 5328 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5332 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Parameter AuthenticationInformation */

/* 5334 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5338 */	NdrFcShort( 0x5ea ),	/* Type Offset=1514 */

	/* Parameter DesiredAccess */

/* 5340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5342 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 5346 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5348 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5350 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 5352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5354 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy3 */

/* 5358 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5366 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5368 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 5370 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5372 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5374 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5376 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5378 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5380 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 5390 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5392 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5394 */	NdrFcShort( 0x694 ),	/* Type Offset=1684 */

	/* Parameter ObjectAttributes */

/* 5396 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5400 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter DesiredAccess */

/* 5402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5404 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InVersion */

/* 5408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InRevisionInfo */

/* 5414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5416 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5418 */	NdrFcShort( 0x864 ),	/* Type Offset=2148 */

	/* Parameter OutVersion */

/* 5420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5422 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter OutRevisionInfo */

/* 5426 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5428 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5430 */	NdrFcShort( 0x87e ),	/* Type Offset=2174 */

	/* Parameter PolicyHandle */

/* 5432 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5434 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5436 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 5438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5440 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5442 */	0x8,		/* FC_LONG */
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
/* 20 */	NdrFcShort( 0x56 ),	/* Offset= 86 (106) */
/* 22 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 28 */	NdrFcShort( 0x2 ),	/* 2 */
/* 30 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 32 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 38 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 40 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x10 ),	/* 16 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x8 ),	/* Offset= 8 (54) */
/* 48 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 50 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 52 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 54 */	
			0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0xffde ),	/* Offset= -34 (22) */
/* 58 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 64 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 66 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x18 ),	/* 24 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* Offset= 0 (72) */
/* 74 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (40) */
/* 78 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0xffea ),	/* Offset= -22 (58) */
/* 82 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 84 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 94 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 98 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 102 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (66) */
/* 104 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 106 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x6 ),	/* Offset= 6 (118) */
/* 114 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 116 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 118 */	
			0x12, 0x0,	/* FC_UP */
/* 120 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (84) */
/* 122 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x12, 0x0,	/* FC_UP */
/* 128 */	NdrFcShort( 0x18 ),	/* Offset= 24 (152) */
/* 130 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 136 */	NdrFcLong( 0x40000 ),	/* 262144 */
/* 140 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 144 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 150 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xa ),	/* Offset= 10 (168) */
/* 160 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 162 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (130) */
/* 164 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 168 */	
			0x12, 0x0,	/* FC_UP */
/* 170 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (140) */
/* 172 */	
			0x11, 0x0,	/* FC_RP */
/* 174 */	NdrFcShort( 0xffea ),	/* Offset= -22 (152) */
/* 176 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 178 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 180 */	
			0x11, 0x0,	/* FC_RP */
/* 182 */	NdrFcShort( 0x96 ),	/* Offset= 150 (332) */
/* 184 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 188 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 190 */	NdrFcShort( 0x2 ),	/* 2 */
/* 192 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 194 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 200 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 202 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x8 ),	/* Offset= 8 (216) */
/* 210 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 212 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 214 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 216 */	
			0x12, 0x0,	/* FC_UP */
/* 218 */	NdrFcShort( 0xffde ),	/* Offset= -34 (184) */
/* 220 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x6 ),	/* 6 */
/* 224 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 226 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 228 */	NdrFcShort( 0x6 ),	/* 6 */
/* 230 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 232 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (220) */
/* 234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 236 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 240 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 242 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 244 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 246 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 248 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (236) */
/* 254 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (226) */
/* 260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 262 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 266 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 272 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 274 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 276 */	NdrFcShort( 0x4 ),	/* 4 */
/* 278 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (262) */
/* 280 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 282 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 284 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x28 ),	/* 40 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0xc ),	/* Offset= 12 (302) */
/* 292 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 294 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 296 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 298 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 302 */	
			0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (248) */
/* 306 */	
			0x12, 0x0,	/* FC_UP */
/* 308 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (248) */
/* 310 */	
			0x12, 0x0,	/* FC_UP */
/* 312 */	NdrFcShort( 0xffda ),	/* Offset= -38 (274) */
/* 314 */	
			0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (274) */
/* 318 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 320 */	NdrFcShort( 0xc ),	/* 12 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* Offset= 0 (324) */
/* 326 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 328 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 330 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 332 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 334 */	NdrFcShort( 0x30 ),	/* 48 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0xc ),	/* Offset= 12 (350) */
/* 340 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 342 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 344 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 346 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 350 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 352 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 354 */	
			0x12, 0x0,	/* FC_UP */
/* 356 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (202) */
/* 358 */	
			0x12, 0x0,	/* FC_UP */
/* 360 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (284) */
/* 362 */	
			0x12, 0x0,	/* FC_UP */
/* 364 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (318) */
/* 366 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 368 */	NdrFcShort( 0x2 ),	/* Offset= 2 (370) */
/* 370 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 374 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (378) */
/* 378 */	
			0x12, 0x0,	/* FC_UP */
/* 380 */	NdrFcShort( 0x2 ),	/* Offset= 2 (382) */
/* 382 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 384 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 386 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 388 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	NdrFcShort( 0x48 ),	/* 72 */
/* 394 */	NdrFcShort( 0x700e ),	/* 28686 */
/* 396 */	NdrFcLong( 0x1 ),	/* 1 */
/* 400 */	NdrFcShort( 0x58 ),	/* Offset= 88 (488) */
/* 402 */	NdrFcLong( 0x2 ),	/* 2 */
/* 406 */	NdrFcShort( 0x80 ),	/* Offset= 128 (534) */
/* 408 */	NdrFcLong( 0x3 ),	/* 3 */
/* 412 */	NdrFcShort( 0x90 ),	/* Offset= 144 (556) */
/* 414 */	NdrFcLong( 0x5 ),	/* 5 */
/* 418 */	NdrFcShort( 0x9c ),	/* Offset= 156 (574) */
/* 420 */	NdrFcLong( 0x4 ),	/* 4 */
/* 424 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (592) */
/* 426 */	NdrFcLong( 0x6 ),	/* 6 */
/* 430 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (606) */
/* 432 */	NdrFcLong( 0x7 ),	/* 7 */
/* 436 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (616) */
/* 438 */	NdrFcLong( 0x9 ),	/* 9 */
/* 442 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (634) */
/* 444 */	NdrFcLong( 0xa ),	/* 10 */
/* 448 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (648) */
/* 450 */	NdrFcLong( 0xb ),	/* 11 */
/* 454 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (654) */
/* 456 */	NdrFcLong( 0xc ),	/* 12 */
/* 460 */	NdrFcShort( 0xdc ),	/* Offset= 220 (680) */
/* 462 */	NdrFcLong( 0xd ),	/* 13 */
/* 466 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (680) */
/* 468 */	NdrFcLong( 0xe ),	/* 14 */
/* 472 */	NdrFcShort( 0x66 ),	/* Offset= 102 (574) */
/* 474 */	NdrFcLong( 0xf ),	/* 15 */
/* 478 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (710) */
/* 480 */	NdrFcShort( 0xffff ),	/* Offset= -1 (479) */
/* 482 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 486 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 488 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 490 */	NdrFcShort( 0x28 ),	/* 40 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* Offset= 0 (494) */
/* 496 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 498 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 500 */	NdrFcShort( 0xffee ),	/* Offset= -18 (482) */
/* 502 */	0x2,		/* FC_CHAR */
			0x43,		/* FC_STRUCTPAD7 */
/* 504 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 506 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (482) */
/* 508 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 510 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 512 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 518 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 522 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 526 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 528 */	NdrFcShort( 0x10 ),	/* 16 */
/* 530 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 532 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 536 */	NdrFcShort( 0x18 ),	/* 24 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xc ),	/* Offset= 12 (552) */
/* 542 */	0x2,		/* FC_CHAR */
			0x43,		/* FC_STRUCTPAD7 */
/* 544 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 546 */	0x0,		/* 0 */
			NdrFcShort( 0xffdd ),	/* Offset= -35 (512) */
			0x40,		/* FC_STRUCTPAD4 */
/* 550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 552 */	
			0x12, 0x0,	/* FC_UP */
/* 554 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (522) */
/* 556 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 558 */	NdrFcShort( 0x18 ),	/* 24 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x8 ),	/* Offset= 8 (570) */
/* 564 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 566 */	NdrFcShort( 0xfdf2 ),	/* Offset= -526 (40) */
/* 568 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 570 */	
			0x12, 0x0,	/* FC_UP */
/* 572 */	NdrFcShort( 0xfebc ),	/* Offset= -324 (248) */
/* 574 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x18 ),	/* 24 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x8 ),	/* Offset= 8 (588) */
/* 582 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0xfde0 ),	/* Offset= -544 (40) */
/* 586 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 588 */	
			0x12, 0x0,	/* FC_UP */
/* 590 */	NdrFcShort( 0xfeaa ),	/* Offset= -342 (248) */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* Offset= 0 (598) */
/* 600 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 602 */	NdrFcShort( 0xfdce ),	/* Offset= -562 (40) */
/* 604 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 606 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* Offset= 0 (612) */
/* 614 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 616 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x20 ),	/* 32 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* Offset= 0 (622) */
/* 624 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (40) */
/* 628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0xfdb2 ),	/* Offset= -590 (40) */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 638 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 640 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (482) */
/* 642 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 644 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (482) */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 650 */	NdrFcShort( 0x1 ),	/* 1 */
/* 652 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 654 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x2 ),	/* 2 */
/* 658 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 668 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x10 ),	/* 16 */
/* 672 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 674 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 676 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (662) */
			0x5b,		/* FC_END */
/* 680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x48 ),	/* 72 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x14 ),	/* Offset= 20 (706) */
/* 688 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 690 */	NdrFcShort( 0xfd76 ),	/* Offset= -650 (40) */
/* 692 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 694 */	NdrFcShort( 0xfd72 ),	/* Offset= -654 (40) */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xfd6e ),	/* Offset= -658 (40) */
/* 700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0xffde ),	/* Offset= -34 (668) */
/* 704 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 706 */	
			0x12, 0x0,	/* FC_UP */
/* 708 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (248) */
/* 710 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 712 */	NdrFcShort( 0x10 ),	/* 16 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x6 ),	/* Offset= 6 (722) */
/* 718 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 720 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 722 */	
			0x12, 0x0,	/* FC_UP */
/* 724 */	NdrFcShort( 0xfe24 ),	/* Offset= -476 (248) */
/* 726 */	
			0x11, 0x0,	/* FC_RP */
/* 728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (730) */
/* 730 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 732 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 736 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 738 */	NdrFcShort( 0xfea6 ),	/* Offset= -346 (392) */
/* 740 */	
			0x11, 0x0,	/* FC_RP */
/* 742 */	NdrFcShort( 0xfe12 ),	/* Offset= -494 (248) */
/* 744 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 746 */	NdrFcShort( 0x2 ),	/* Offset= 2 (748) */
/* 748 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 750 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 752 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 754 */	NdrFcShort( 0x26 ),	/* Offset= 38 (792) */
/* 756 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x4 ),	/* Offset= 4 (766) */
/* 764 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 766 */	
			0x12, 0x0,	/* FC_UP */
/* 768 */	NdrFcShort( 0xfdf8 ),	/* Offset= -520 (248) */
/* 770 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 780 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 784 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 786 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 788 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (756) */
/* 790 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 792 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x10 ),	/* 16 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x6 ),	/* Offset= 6 (804) */
/* 800 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 802 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 804 */	
			0x12, 0x0,	/* FC_UP */
/* 806 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (770) */
/* 808 */	
			0x11, 0x0,	/* FC_RP */
/* 810 */	NdrFcShort( 0x2 ),	/* Offset= 2 (812) */
/* 812 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 814 */	NdrFcShort( 0x18 ),	/* 24 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x8 ),	/* Offset= 8 (826) */
/* 820 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0xfcf2 ),	/* Offset= -782 (40) */
/* 824 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 826 */	
			0x12, 0x0,	/* FC_UP */
/* 828 */	NdrFcShort( 0xfdbc ),	/* Offset= -580 (248) */
/* 830 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 832 */	NdrFcShort( 0x18 ),	/* Offset= 24 (856) */
/* 834 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 844 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 848 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 850 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (812) */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x6 ),	/* Offset= 6 (868) */
/* 864 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 866 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 868 */	
			0x12, 0x0,	/* FC_UP */
/* 870 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (834) */
/* 872 */	
			0x11, 0x0,	/* FC_RP */
/* 874 */	NdrFcShort( 0xfcbe ),	/* Offset= -834 (40) */
/* 876 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 878 */	NdrFcShort( 0x2 ),	/* Offset= 2 (880) */
/* 880 */	
			0x12, 0x0,	/* FC_UP */
/* 882 */	NdrFcShort( 0x26 ),	/* Offset= 38 (920) */
/* 884 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 894 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 896 */	NdrFcShort( 0xc ),	/* 12 */
/* 898 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0xfcb6 ),	/* Offset= -842 (58) */
/* 902 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 904 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 906 */	NdrFcShort( 0xc ),	/* 12 */
/* 908 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 910 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 912 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 914 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 916 */	NdrFcShort( 0xffea ),	/* Offset= -22 (894) */
/* 918 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 920 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	NdrFcShort( 0xffec ),	/* Offset= -20 (904) */
/* 926 */	NdrFcShort( 0x0 ),	/* Offset= 0 (926) */
/* 928 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (884) */
/* 932 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 934 */	
			0x11, 0x0,	/* FC_RP */
/* 936 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (920) */
/* 938 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 940 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 942 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 944 */	NdrFcShort( 0x2 ),	/* Offset= 2 (946) */
/* 946 */	
			0x12, 0x0,	/* FC_UP */
/* 948 */	NdrFcShort( 0x2 ),	/* Offset= 2 (950) */
/* 950 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 952 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 954 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 956 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 958 */	NdrFcShort( 0x2 ),	/* Offset= 2 (960) */
/* 960 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 962 */	NdrFcShort( 0x300f ),	/* 12303 */
/* 964 */	NdrFcLong( 0x1 ),	/* 1 */
/* 968 */	NdrFcShort( 0xfe88 ),	/* Offset= -376 (592) */
/* 970 */	NdrFcLong( 0x2 ),	/* 2 */
/* 974 */	NdrFcShort( 0x72 ),	/* Offset= 114 (1088) */
/* 976 */	NdrFcLong( 0x3 ),	/* 3 */
/* 980 */	NdrFcShort( 0x80 ),	/* Offset= 128 (1108) */
/* 982 */	NdrFcLong( 0x4 ),	/* 4 */
/* 986 */	NdrFcShort( 0xbc ),	/* Offset= 188 (1174) */
/* 988 */	NdrFcLong( 0x5 ),	/* 5 */
/* 992 */	NdrFcShort( 0xff4c ),	/* Offset= -180 (812) */
/* 994 */	NdrFcLong( 0x6 ),	/* 6 */
/* 998 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (1194) */
/* 1000 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1004 */	NdrFcShort( 0x11a ),	/* Offset= 282 (1286) */
/* 1006 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1010 */	NdrFcShort( 0x13c ),	/* Offset= 316 (1326) */
/* 1012 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1016 */	NdrFcShort( 0x16a ),	/* Offset= 362 (1378) */
/* 1018 */	NdrFcLong( 0xa ),	/* 10 */
/* 1022 */	NdrFcShort( 0x172 ),	/* Offset= 370 (1392) */
/* 1024 */	NdrFcLong( 0xb ),	/* 11 */
/* 1028 */	NdrFcShort( 0x18e ),	/* Offset= 398 (1426) */
/* 1030 */	NdrFcLong( 0xc ),	/* 12 */
/* 1034 */	NdrFcShort( 0x1a8 ),	/* Offset= 424 (1458) */
/* 1036 */	NdrFcLong( 0xd ),	/* 13 */
/* 1040 */	NdrFcShort( 0x44 ),	/* Offset= 68 (1108) */
/* 1042 */	NdrFcLong( 0xe ),	/* 14 */
/* 1046 */	NdrFcShort( 0x1d4 ),	/* Offset= 468 (1514) */
/* 1048 */	NdrFcLong( 0xf ),	/* 15 */
/* 1052 */	NdrFcShort( 0x1ea ),	/* Offset= 490 (1542) */
/* 1054 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1053) */
/* 1056 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1066 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1076 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1080 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1082 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1084 */	NdrFcShort( 0xfbec ),	/* Offset= -1044 (40) */
/* 1086 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1088 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1090 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0xa ),	/* Offset= 10 (1104) */
/* 1096 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1056) */
/* 1100 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1104 */	
			0x12, 0x0,	/* FC_UP */
/* 1106 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1066) */
/* 1108 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1112 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1114 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1120 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1124 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1134 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1138 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1142 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1144 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1150 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0xc ),	/* Offset= 12 (1170) */
/* 1160 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1162 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1114) */
/* 1164 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1166 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1124) */
/* 1168 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1170 */	
			0x12, 0x0,	/* FC_UP */
/* 1172 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1134) */
/* 1174 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1176 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1186) */
/* 1182 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x12, 0x0,	/* FC_UP */
/* 1188 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1152) */
/* 1190 */	
			0x12, 0x0,	/* FC_UP */
/* 1192 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1152) */
/* 1194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1196 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1216) */
/* 1202 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0xfb74 ),	/* Offset= -1164 (40) */
/* 1206 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1208 */	NdrFcShort( 0xfb70 ),	/* Offset= -1168 (40) */
/* 1210 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1212 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1214 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1216 */	
			0x12, 0x0,	/* FC_UP */
/* 1218 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (248) */
/* 1220 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1230 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1240 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1246 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1250 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1254 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1256 */	NdrFcShort( 0xc ),	/* 12 */
/* 1258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1260 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1264 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0xe ),	/* Offset= 14 (1282) */
/* 1270 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1272 */	NdrFcShort( 0xfcea ),	/* Offset= -790 (482) */
/* 1274 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1276 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (1240) */
			0x36,		/* FC_POINTER */
/* 1280 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1282 */	
			0x12, 0x0,	/* FC_UP */
/* 1284 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1250) */
/* 1286 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1288 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1310) */
/* 1294 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1296 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1220) */
/* 1298 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1300 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1302 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (1230) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1306 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1310 */	
			0x12, 0x0,	/* FC_UP */
/* 1312 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1262) */
/* 1314 */	
			0x12, 0x0,	/* FC_UP */
/* 1316 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1262) */
/* 1318 */	
			0x12, 0x0,	/* FC_UP */
/* 1320 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1262) */
/* 1322 */	
			0x12, 0x0,	/* FC_UP */
/* 1324 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1262) */
/* 1326 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1328 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1332) */
/* 1334 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1336 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (1194) */
/* 1338 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1340 */	NdrFcShort( 0xff18 ),	/* Offset= -232 (1108) */
/* 1342 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1344 */	0x0,		/* 0 */
			NdrFcShort( 0xffc5 ),	/* Offset= -59 (1286) */
			0x5b,		/* FC_END */
/* 1348 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1354 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1358 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1360 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0xa ),	/* Offset= 10 (1374) */
/* 1366 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1368 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1348) */
/* 1370 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1372 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1374 */	
			0x12, 0x0,	/* FC_UP */
/* 1376 */	NdrFcShort( 0xfb2c ),	/* Offset= -1236 (140) */
/* 1378 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1380 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1384 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1384) */
/* 1386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1388 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1358) */
/* 1390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1394 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1398) */
/* 1400 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1402 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (1194) */
/* 1404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1406 */	NdrFcShort( 0xfed6 ),	/* Offset= -298 (1108) */
/* 1408 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1410 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (1378) */
			0x5b,		/* FC_END */
/* 1414 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1418 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1420 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1422 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1424 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1426 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1428 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1450) */
/* 1434 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1436 */	NdrFcShort( 0xfa8c ),	/* Offset= -1396 (40) */
/* 1438 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1440 */	NdrFcShort( 0xfa88 ),	/* Offset= -1400 (40) */
/* 1442 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1444 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1446 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1450 */	
			0x12, 0x0,	/* FC_UP */
/* 1452 */	NdrFcShort( 0xfb4c ),	/* Offset= -1204 (248) */
/* 1454 */	
			0x12, 0x0,	/* FC_UP */
/* 1456 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1414) */
/* 1458 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1460 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1464) */
/* 1466 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1468 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1426) */
/* 1470 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1472 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (1108) */
/* 1474 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1476 */	0x0,		/* 0 */
			NdrFcShort( 0xff41 ),	/* Offset= -191 (1286) */
			0x5b,		/* FC_END */
/* 1480 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1482 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1484 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1486 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1488 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1490 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1492 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1498 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1502 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1506 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1508 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1510 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1512 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1514 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1516 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1538) */
/* 1522 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1524 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (1480) */
/* 1526 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1528 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1486) */
/* 1530 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1532 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1492) */
/* 1534 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1536 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1538 */	
			0x12, 0x0,	/* FC_UP */
/* 1540 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1502) */
/* 1542 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1544 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1548) */
/* 1550 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1552 */	NdrFcShort( 0xfe9a ),	/* Offset= -358 (1194) */
/* 1554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1556 */	NdrFcShort( 0xfe40 ),	/* Offset= -448 (1108) */
/* 1558 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1560 */	0x0,		/* 0 */
			NdrFcShort( 0xffd1 ),	/* Offset= -47 (1514) */
			0x5b,		/* FC_END */
/* 1564 */	
			0x11, 0x0,	/* FC_RP */
/* 1566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1568) */
/* 1568 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1570 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1572 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1574 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1576 */	NdrFcShort( 0xfd98 ),	/* Offset= -616 (960) */
/* 1578 */	
			0x12, 0x0,	/* FC_UP */
/* 1580 */	NdrFcShort( 0xfe54 ),	/* Offset= -428 (1152) */
/* 1582 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1584 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (1578) */
/* 1586 */	
			0x12, 0x0,	/* FC_UP */
/* 1588 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (482) */
/* 1590 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1592 */	NdrFcShort( 0xfa02 ),	/* Offset= -1534 (58) */
/* 1594 */	
			0x11, 0x0,	/* FC_RP */
/* 1596 */	NdrFcShort( 0xf9fe ),	/* Offset= -1538 (58) */
/* 1598 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1602) */
/* 1602 */	
			0x12, 0x0,	/* FC_UP */
/* 1604 */	NdrFcShort( 0xf9e4 ),	/* Offset= -1564 (40) */
/* 1606 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1608 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1610 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1612 */	NdrFcShort( 0xc ),	/* Offset= 12 (1624) */
/* 1614 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1620 */	NdrFcLong( 0x100 ),	/* 256 */
/* 1624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0xa ),	/* Offset= 10 (1640) */
/* 1632 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1634 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1614) */
/* 1636 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1638 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1640 */	
			0x12, 0x0,	/* FC_UP */
/* 1642 */	NdrFcShort( 0xfdc0 ),	/* Offset= -576 (1066) */
/* 1644 */	
			0x11, 0x0,	/* FC_RP */
/* 1646 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1624) */
/* 1648 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1650 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1652) */
/* 1652 */	
			0x12, 0x0,	/* FC_UP */
/* 1654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1656) */
/* 1656 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1658 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1662 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1664 */	NdrFcShort( 0xfd40 ),	/* Offset= -704 (960) */
/* 1666 */	
			0x11, 0x0,	/* FC_RP */
/* 1668 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1670) */
/* 1670 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1672 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1676 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1678 */	NdrFcShort( 0xfd32 ),	/* Offset= -718 (960) */
/* 1680 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1682 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (1578) */
/* 1684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1688 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1690 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1692) */
/* 1692 */	
			0x12, 0x0,	/* FC_UP */
/* 1694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1696) */
/* 1696 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1698 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1700 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1704 */	NdrFcShort( 0xfae0 ),	/* Offset= -1312 (392) */
/* 1706 */	
			0x11, 0x0,	/* FC_RP */
/* 1708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1710) */
/* 1710 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1712 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1714 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1716 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1718 */	NdrFcShort( 0xfad2 ),	/* Offset= -1326 (392) */
/* 1720 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1724) */
/* 1724 */	
			0x12, 0x0,	/* FC_UP */
/* 1726 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1728) */
/* 1728 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1730 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1732 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1736 */	NdrFcShort( 0xfcf8 ),	/* Offset= -776 (960) */
/* 1738 */	
			0x11, 0x0,	/* FC_RP */
/* 1740 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1742) */
/* 1742 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1744 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1750 */	NdrFcShort( 0xfcea ),	/* Offset= -790 (960) */
/* 1752 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1754 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1778) */
/* 1756 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1766 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1770 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1772 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1774 */	NdrFcShort( 0xfdbc ),	/* Offset= -580 (1194) */
/* 1776 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1778 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1780 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1790) */
/* 1786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1788 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1790 */	
			0x12, 0x0,	/* FC_UP */
/* 1792 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1756) */
/* 1794 */	
			0x11, 0x0,	/* FC_RP */
/* 1796 */	NdrFcShort( 0xfda6 ),	/* Offset= -602 (1194) */
/* 1798 */	
			0x11, 0x0,	/* FC_RP */
/* 1800 */	NdrFcShort( 0xfdfe ),	/* Offset= -514 (1286) */
/* 1802 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1804 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1806) */
/* 1806 */	
			0x12, 0x0,	/* FC_UP */
/* 1808 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1810) */
/* 1810 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1812 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1816 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1818 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1820) */
/* 1820 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1822 */	NdrFcShort( 0x7003 ),	/* 28675 */
/* 1824 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1828 */	NdrFcShort( 0xfd30 ),	/* Offset= -720 (1108) */
/* 1830 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1834 */	NdrFcShort( 0xa ),	/* Offset= 10 (1844) */
/* 1836 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1840 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1860) */
/* 1842 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1841) */
/* 1844 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1856) */
/* 1852 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1854 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1856 */	
			0x12, 0x0,	/* FC_UP */
/* 1858 */	NdrFcShort( 0xf94a ),	/* Offset= -1718 (140) */
/* 1860 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1862 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1864 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1866 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1868 */	NdrFcShort( 0xfa96 ),	/* Offset= -1386 (482) */
/* 1870 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1872 */	NdrFcShort( 0xfa92 ),	/* Offset= -1390 (482) */
/* 1874 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1876 */	NdrFcShort( 0xfa8e ),	/* Offset= -1394 (482) */
/* 1878 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1880 */	NdrFcShort( 0xfa8a ),	/* Offset= -1398 (482) */
/* 1882 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1884 */	NdrFcShort( 0xfa86 ),	/* Offset= -1402 (482) */
/* 1886 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1888 */	
			0x12, 0x0,	/* FC_UP */
/* 1890 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1892) */
/* 1892 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1894 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1898 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1900 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (1820) */
/* 1902 */	
			0x11, 0x0,	/* FC_RP */
/* 1904 */	NdrFcShort( 0xfdf2 ),	/* Offset= -526 (1378) */
/* 1906 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1908 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1910) */
/* 1910 */	
			0x12, 0x0,	/* FC_UP */
/* 1912 */	NdrFcShort( 0x8c ),	/* Offset= 140 (2052) */
/* 1914 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcLong( 0xfa0 ),	/* 4000 */
/* 1924 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1926 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 1928 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 1930 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1932 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1934) */
/* 1934 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1936 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 1938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0xf892 ),	/* Offset= -1902 (40) */
/* 1944 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1948 */	NdrFcShort( 0xf88c ),	/* Offset= -1908 (40) */
/* 1950 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1954 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1958) */
/* 1956 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1990) */
/* 1958 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1960 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0xc ),	/* Offset= 12 (1976) */
/* 1966 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1968 */	0x0,		/* 0 */
			NdrFcShort( 0xf877 ),	/* Offset= -1929 (40) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1972 */	0x0,		/* 0 */
			NdrFcShort( 0xf873 ),	/* Offset= -1933 (40) */
			0x5b,		/* FC_END */
/* 1976 */	
			0x12, 0x0,	/* FC_UP */
/* 1978 */	NdrFcShort( 0xf93e ),	/* Offset= -1730 (248) */
/* 1980 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1986 */	NdrFcLong( 0x20000 ),	/* 131072 */
/* 1990 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0xa ),	/* Offset= 10 (2006) */
/* 1998 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1980) */
/* 2002 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2004 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2006 */	
			0x12, 0x0,	/* FC_UP */
/* 2008 */	NdrFcShort( 0xf8b4 ),	/* Offset= -1868 (140) */
/* 2010 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2012 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2016) */
/* 2018 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2020 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2022 */	NdrFcShort( 0xf9fc ),	/* Offset= -1540 (482) */
/* 2024 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2026 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1924) */
/* 2028 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2030 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2040 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2044 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2046 */	
			0x12, 0x0,	/* FC_UP */
/* 2048 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2010) */
/* 2050 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2052 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2054 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0xa ),	/* Offset= 10 (2068) */
/* 2060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2062 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (1914) */
/* 2064 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2066 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2068 */	
			0x12, 0x0,	/* FC_UP */
/* 2070 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2030) */
/* 2072 */	
			0x11, 0x0,	/* FC_RP */
/* 2074 */	NdrFcShort( 0xffea ),	/* Offset= -22 (2052) */
/* 2076 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2078 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2080) */
/* 2080 */	
			0x12, 0x0,	/* FC_UP */
/* 2082 */	NdrFcShort( 0x2a ),	/* Offset= 42 (2124) */
/* 2084 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2086 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2090) */
/* 2092 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2094 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2096 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2098 */	NdrFcShort( 0xf7f6 ),	/* Offset= -2058 (40) */
/* 2100 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2102 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2112 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2116 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2118 */	
			0x12, 0x0,	/* FC_UP */
/* 2120 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2084) */
/* 2122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2136) */
/* 2132 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2134 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2136 */	
			0x12, 0x0,	/* FC_UP */
/* 2138 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2102) */
/* 2140 */	
			0x11, 0x0,	/* FC_RP */
/* 2142 */	NdrFcShort( 0xfd8c ),	/* Offset= -628 (1514) */
/* 2144 */	
			0x11, 0x0,	/* FC_RP */
/* 2146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2148) */
/* 2148 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2150 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2152 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2158) */
/* 2158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2160 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 2162 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2166 */	NdrFcShort( 0xf7c4 ),	/* Offset= -2108 (58) */
/* 2168 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2167) */
/* 2170 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2172 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2174) */
/* 2174 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2176 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2178 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2180 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2182 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2158) */

			0x0
        }
    };

XFG_BIND_TRAMPOLINES(unsigned long long, PLSAPR_SERVER_NAME)

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
    136,
    192,
    248,
    278,
    334,
    390,
    446,
    476,
    538,
    600,
    662,
    724,
    754,
    784,
    846,
    908,
    958,
    1008,
    1064,
    1094,
    1124,
    1174,
    1224,
    1286,
    1342,
    1398,
    1460,
    1516,
    1584,
    1640,
    1696,
    1770,
    1814,
    1870,
    1926,
    1982,
    2044,
    2106,
    2168,
    2218,
    2274,
    2330,
    2386,
    2416,
    2472,
    2528,
    2590,
    2652,
    2714,
    2782,
    2812,
    2868,
    2924,
    2986,
    3016,
    3046,
    3076,
    3144,
    3174,
    3204,
    3234,
    3264,
    3294,
    3324,
    3354,
    3384,
    3414,
    3444,
    3474,
    3504,
    3534,
    3596,
    3670,
    3700,
    3730,
    3760,
    3790,
    3820,
    3850,
    3880,
    3910,
    3940,
    3970,
    4000,
    4030,
    4060,
    4090,
    4120,
    4150,
    4180,
    4210,
    4240,
    4270,
    4300,
    4330,
    4360,
    4390,
    4420,
    4450,
    4480,
    4510,
    4540,
    4570,
    4600,
    4630,
    4660,
    4690,
    4720,
    4750,
    4780,
    4810,
    4840,
    4870,
    4900,
    4930,
    4960,
    4990,
    5020,
    5050,
    5080,
    5110,
    5140,
    5170,
    5200,
    5230,
    5260,
    5290,
    5358
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


#endif /* defined(_M_AMD64)*/

