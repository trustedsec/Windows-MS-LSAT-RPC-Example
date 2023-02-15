

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-lsar.idl:
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

#include "ms-lsar.h"
#include "bofdefs.h"

#define TYPE_FORMAT_STRING_SIZE   2677                              
#define PROC_FORMAT_STRING_SIZE   5845                              
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


extern const ms2Dlsar_MIDL_TYPE_FORMAT_STRING ms2Dlsar__MIDL_TypeFormatString;
extern const ms2Dlsar_MIDL_PROC_FORMAT_STRING ms2Dlsar__MIDL_ProcFormatString;
extern const ms2Dlsar_MIDL_EXPR_FORMAT_STRING ms2Dlsar__MIDL_ExprFormatString;

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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[0],
                  ObjectHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[44],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[74],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[136],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[192],
                  ObjectHandle,
                  SecurityInformation,
                  SecurityDescriptor);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[248],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[278],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[334],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[390],
                  PolicyHandle,
                  InformationClass,
                  PolicyInformation);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[446],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[476],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[538],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[600],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[662],
                  PolicyHandle,
                  EnumerationContext,
                  EnumerationBuffer,
                  PreferedMaximumLength);
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[724],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[804],
                  PolicyHandle,
                  SidEnumBuffer,
                  ReferencedDomains,
                  TranslatedNames,
                  LookupLevel,
                  MappedCount);
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[878],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[940],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1002],
                  AccountHandle,
                  Privileges);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1052],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1102],
                  AccountHandle,
                  AllPrivileges,
                  Privileges);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1158],
                  IDL_handle);
    
}


void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1188],
                  IDL_handle);
    
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ unsigned long *SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1218],
                  AccountHandle,
                  SystemAccess);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned long SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1268],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1318],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1380],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1436],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1492],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1554],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1610],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1678],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1734],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1790],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1864],
                  ObjectHandle);
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1908],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[1964],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2020],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2076],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2138],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2200],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2262],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2312],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2368],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2424],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2480],
                  IDL_handle,
                  SystemName,
                  UserName,
                  DomainName);
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2534],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2590],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2646],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2708],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2770],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2832],
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

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2900],
                  IDL_handle);
    
}


NTSTATUS LsarQueryDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_DOMAIN_INFORMATION *PolicyDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2930],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[2986],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3042],
                  PolicyHandle,
                  TrustedDomainName,
                  DesiredAccess,
                  TrustedDomainHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3104],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3134],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3220],
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3312],
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

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3380],
                  IDL_handle);
    
}


void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3410],
                  IDL_handle);
    
}


void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3440],
                  IDL_handle);
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3470],
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3500],
                  IDL_handle);
    
}


void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3530],
                  IDL_handle);
    
}


void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3560],
                  IDL_handle);
    
}


void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3590],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3620],
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

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3712],
                  IDL_handle);
    
}


void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3742],
                  IDL_handle);
    
}


void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3772],
                  IDL_handle);
    
}


void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3802],
                  IDL_handle);
    
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
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3832],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3894],
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

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3968],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[3998],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4076],
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


void Opnum78NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4160],
                  IDL_handle);
    
}


void Opnum79NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4190],
                  IDL_handle);
    
}


void Opnum80NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4220],
                  IDL_handle);
    
}


void Opnum81NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4250],
                  IDL_handle);
    
}


void Opnum82NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4280],
                  IDL_handle);
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4310],
                  IDL_handle);
    
}


void Opnum84NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4340],
                  IDL_handle);
    
}


void Opnum85NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4370],
                  IDL_handle);
    
}


void Opnum86NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4400],
                  IDL_handle);
    
}


void Opnum87NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4430],
                  IDL_handle);
    
}


void Opnum88NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4460],
                  IDL_handle);
    
}


void Opnum89NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4490],
                  IDL_handle);
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4520],
                  IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4550],
                  IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4580],
                  IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4610],
                  IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4640],
                  IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4670],
                  IDL_handle);
    
}


void Opnum96NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4700],
                  IDL_handle);
    
}


void Opnum97NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4730],
                  IDL_handle);
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4760],
                  IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4790],
                  IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4820],
                  IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4850],
                  IDL_handle);
    
}


void Opnum102NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4880],
                  IDL_handle);
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4910],
                  IDL_handle);
    
}


void Opnum104NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4940],
                  IDL_handle);
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[4970],
                  IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5000],
                  IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5030],
                  IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5060],
                  IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5090],
                  IDL_handle);
    
}


void Opnum110NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5120],
                  IDL_handle);
    
}


void Opnum111NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5150],
                  IDL_handle);
    
}


void Opnum112NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5180],
                  IDL_handle);
    
}


void Opnum113NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5210],
                  IDL_handle);
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5240],
                  IDL_handle);
    
}


void Opnum115NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5270],
                  IDL_handle);
    
}


void Opnum116NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5300],
                  IDL_handle);
    
}


void Opnum117NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5330],
                  IDL_handle);
    
}


void Opnum118NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5360],
                  IDL_handle);
    
}


void Opnum119NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5390],
                  IDL_handle);
    
}


void Opnum120NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5420],
                  IDL_handle);
    
}


void Opnum121NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5450],
                  IDL_handle);
    
}


void Opnum122NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5480],
                  IDL_handle);
    
}


void Opnum123NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5510],
                  IDL_handle);
    
}


void Opnum124NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5540],
                  IDL_handle);
    
}


void Opnum125NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5570],
                  IDL_handle);
    
}


void Opnum126NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5600],
                  IDL_handle);
    
}


void Opnum127NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5630],
                  IDL_handle);
    
}


void Opnum128NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5660],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5690],
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

    _RetVal = RPCRT4$NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                  (PFORMAT_STRING) &ms2Dlsar__MIDL_ProcFormatString.Format[5758],
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

static const ms2Dlsar_MIDL_PROC_FORMAT_STRING ms2Dlsar__MIDL_ProcFormatString =
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

	/* Procedure LsarLookupNames */

/* 724 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xe ),	/* 14 */
/* 732 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 734 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 736 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 738 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 740 */	NdrFcShort( 0x4e ),	/* 78 */
/* 742 */	NdrFcShort( 0x24 ),	/* 36 */
/* 744 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 746 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 756 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 758 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 760 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 762 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 766 */	NdrFcShort( 0x368 ),	/* 872 */

	/* Parameter Names */

/* 768 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 772 */	NdrFcShort( 0x376 ),	/* Type Offset=886 */

	/* Parameter ReferencedDomains */

/* 774 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 778 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedSids */

/* 780 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 782 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 784 */	NdrFcShort( 0x3d6 ),	/* Type Offset=982 */

	/* Parameter LookupLevel */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 790 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 792 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 794 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 800 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupSids */

/* 804 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0xf ),	/* 15 */
/* 812 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 814 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 816 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 818 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 820 */	NdrFcShort( 0x46 ),	/* 70 */
/* 822 */	NdrFcShort( 0x24 ),	/* 36 */
/* 824 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 826 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 836 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 838 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 840 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SidEnumBuffer */

/* 842 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 844 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 846 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter ReferencedDomains */

/* 848 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 850 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 852 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedNames */

/* 854 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 856 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 858 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Parameter LookupLevel */

/* 860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 862 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 864 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 866 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 868 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 874 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateSecret */

/* 878 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 886 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 888 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 890 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 892 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 894 */	NdrFcShort( 0x2c ),	/* 44 */
/* 896 */	NdrFcShort( 0x40 ),	/* 64 */
/* 898 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 900 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 910 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 914 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 916 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 920 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 922 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 928 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 930 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 932 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 936 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenAccount */

/* 940 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x11 ),	/* 17 */
/* 948 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 950 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 952 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 954 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 956 */	NdrFcShort( 0x2c ),	/* 44 */
/* 958 */	NdrFcShort( 0x40 ),	/* 64 */
/* 960 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 962 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 972 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 974 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 976 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 982 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter DesiredAccess */

/* 984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter AccountHandle */

/* 990 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 994 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 998 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumeratePrivilegesAccount */

/* 1002 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1012 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1014 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1016 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1018 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1024 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1034 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1038 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 1040 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1044 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Return value */

/* 1046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1048 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddPrivilegesToAccount */

/* 1052 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1062 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1064 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1066 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1068 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1072 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1074 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1084 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1086 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1088 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Privileges */

/* 1090 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1092 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1094 */	NdrFcShort( 0x4aa ),	/* Type Offset=1194 */

	/* Return value */

/* 1096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1098 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemovePrivilegesFromAccount */

/* 1102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1110 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1112 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1114 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1116 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1118 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1122 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1124 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1134 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1138 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AllPrivileges */

/* 1140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1144 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter Privileges */

/* 1146 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1150 */	NdrFcShort( 0x482 ),	/* Type Offset=1154 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1158 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1168 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1178 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum22NotUsedOnWire */

/* 1188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1198 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1208 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarGetSystemAccessAccount */

/* 1218 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1226 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1228 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1230 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1232 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1236 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1238 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1240 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1250 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1254 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSystemAccessAccount */

/* 1268 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1276 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1278 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1280 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1282 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1284 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter AccountHandle */

/* 1300 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1302 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1304 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SystemAccess */

/* 1306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomain */

/* 1318 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1326 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1328 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1330 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1332 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1334 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1336 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1338 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1340 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1350 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 1356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1358 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1360 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter DesiredAccess */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1368 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1372 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInfoTrustedDomain */

/* 1380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1388 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1390 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1392 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1396 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1402 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1412 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1414 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1416 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1422 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1424 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1428 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 1430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationTrustedDomain */

/* 1436 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1444 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1446 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1448 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1450 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1452 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1456 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1458 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter TrustedDomainHandle */

/* 1468 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1470 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1472 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 1474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1478 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 1480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1484 */	NdrFcShort( 0x6d2 ),	/* Type Offset=1746 */

	/* Return value */

/* 1486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenSecret */

/* 1492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1500 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1502 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1504 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1506 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1508 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1510 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1514 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1524 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1526 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1528 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SecretName */

/* 1530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1534 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 1536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecretHandle */

/* 1542 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1546 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 1548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1550 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetSecret */

/* 1554 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1562 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1564 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1566 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1568 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1576 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1586 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1588 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1590 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1592 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1596 */	NdrFcShort( 0x6dc ),	/* Type Offset=1756 */

	/* Parameter EncryptedOldValue */

/* 1598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1602 */	NdrFcShort( 0x6dc ),	/* Type Offset=1756 */

	/* Return value */

/* 1604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1606 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQuerySecret */

/* 1610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1618 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1620 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1622 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1624 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1626 */	NdrFcShort( 0x7c ),	/* 124 */
/* 1628 */	NdrFcShort( 0x60 ),	/* 96 */
/* 1630 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1632 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SecretHandle */

/* 1642 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1644 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1646 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EncryptedCurrentValue */

/* 1648 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1650 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1652 */	NdrFcShort( 0x6e0 ),	/* Type Offset=1760 */

	/* Parameter CurrentValueSetTime */

/* 1654 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1656 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1658 */	NdrFcShort( 0x6e4 ),	/* Type Offset=1764 */

	/* Parameter EncryptedOldValue */

/* 1660 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1662 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1664 */	NdrFcShort( 0x6e0 ),	/* Type Offset=1760 */

	/* Parameter OldValueSetTime */

/* 1666 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1668 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1670 */	NdrFcShort( 0x6e4 ),	/* Type Offset=1764 */

	/* Return value */

/* 1672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1674 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeValue */

/* 1678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1686 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1688 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1690 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1694 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1696 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1700 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1710 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1712 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1714 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1716 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1718 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1720 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter Value */

/* 1722 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1724 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1726 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeName */

/* 1734 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1742 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1744 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1746 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1748 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1750 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1754 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1756 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1758 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1766 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1768 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1770 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Value */

/* 1772 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1776 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Parameter Name */

/* 1778 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1780 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1782 */	NdrFcShort( 0x6f0 ),	/* Type Offset=1776 */

	/* Return value */

/* 1784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1786 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupPrivilegeDisplayName */

/* 1790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1798 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1800 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1802 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1806 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1808 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1812 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1822 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1824 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1826 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Name */

/* 1828 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1832 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter ClientLanguage */

/* 1834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1838 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ClientSystemDefaultLanguage */

/* 1840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1844 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter DisplayName */

/* 1846 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1848 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1850 */	NdrFcShort( 0x6f0 ),	/* Type Offset=1776 */

	/* Parameter LanguageReturned */

/* 1852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1856 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1860 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteObject */

/* 1864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1874 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1876 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1878 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1880 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1882 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ObjectHandle */

/* 1896 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1898 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1900 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountsWithUserRight */

/* 1908 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1916 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1918 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1920 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1922 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1924 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1930 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1940 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1944 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter UserRight */

/* 1946 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1950 */	NdrFcShort( 0x6f4 ),	/* Type Offset=1780 */

	/* Parameter EnumerationBuffer */

/* 1952 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1956 */	NdrFcShort( 0x318 ),	/* Type Offset=792 */

	/* Return value */

/* 1958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1960 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateAccountRights */

/* 1964 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1972 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1974 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1976 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1978 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1980 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1986 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 1996 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1998 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2000 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 2002 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2004 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2006 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter UserRights */

/* 2008 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2010 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2012 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 2014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2016 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarAddAccountRights */

/* 2020 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2028 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2030 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2032 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2034 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2036 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2042 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2052 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2054 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2056 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 2058 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2062 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter UserRights */

/* 2064 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2068 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRemoveAccountRights */

/* 2076 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2084 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2086 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2088 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2090 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2092 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2098 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2108 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2112 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter AccountSid */

/* 2114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2118 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter AllRights */

/* 2120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2124 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter UserRights */

/* 2126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2130 */	NdrFcShort( 0x70a ),	/* Type Offset=1802 */

	/* Return value */

/* 2132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfo */

/* 2138 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2146 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2148 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2150 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2152 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2154 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2158 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2160 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2170 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2172 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2174 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2180 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter InformationClass */

/* 2182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2186 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2188 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2192 */	NdrFcShort( 0x722 ),	/* Type Offset=1826 */

	/* Return value */

/* 2194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2196 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfo */

/* 2200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2208 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2210 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2212 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2214 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2216 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2220 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2222 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2232 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2236 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2238 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2240 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2242 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter InformationClass */

/* 2244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2248 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2250 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2252 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2254 */	NdrFcShort( 0x738 ),	/* Type Offset=1848 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarDeleteTrustedDomain */

/* 2262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2270 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2272 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2276 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2278 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2284 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2298 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainSid */

/* 2300 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2304 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Return value */

/* 2306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarStorePrivateData */

/* 2312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2322 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2326 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2334 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2344 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2346 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2348 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2350 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2354 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter EncryptedData */

/* 2356 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2360 */	NdrFcShort( 0x6dc ),	/* Type Offset=1756 */

	/* Return value */

/* 2362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarRetrievePrivateData */

/* 2368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2376 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2378 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2380 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2388 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2390 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2400 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2404 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter KeyName */

/* 2406 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2410 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter EncryptedData */

/* 2412 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2414 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2416 */	NdrFcShort( 0x742 ),	/* Type Offset=1858 */

	/* Return value */

/* 2418 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy2 */

/* 2424 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 2426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2432 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2436 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2438 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2440 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2454 */	NdrFcShort( 0x746 ),	/* Type Offset=1862 */

	/* Parameter ObjectAttributes */

/* 2456 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2460 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter DesiredAccess */

/* 2462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter PolicyHandle */

/* 2468 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2472 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 2474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2476 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarGetUserName */

/* 2480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2488 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2500 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 2510 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2514 */	NdrFcShort( 0x746 ),	/* Type Offset=1862 */

	/* Parameter UserName */

/* 2516 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2520 */	NdrFcShort( 0x6f0 ),	/* Type Offset=1776 */

	/* Parameter DomainName */

/* 2522 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 2524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2526 */	NdrFcShort( 0x74a ),	/* Type Offset=1866 */

	/* Return value */

/* 2528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2530 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryInformationPolicy2 */

/* 2534 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2542 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2544 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2546 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2550 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2554 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2556 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2566 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2568 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2570 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2576 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2578 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2582 */	NdrFcShort( 0x74e ),	/* Type Offset=1870 */

	/* Return value */

/* 2584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetInformationPolicy2 */

/* 2590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2598 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2606 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
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

	/* Parameter InformationClass */

/* 2628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2632 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyInformation */

/* 2634 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2638 */	NdrFcShort( 0x764 ),	/* Type Offset=1892 */

	/* Return value */

/* 2640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarQueryTrustedDomainInfoByName */

/* 2646 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2654 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2656 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2658 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2662 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2668 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2678 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2680 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2682 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2684 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2686 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2688 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter InformationClass */

/* 2690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2694 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2696 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2700 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Return value */

/* 2702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2704 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetTrustedDomainInfoByName */

/* 2708 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2716 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2718 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2720 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2722 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2724 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2730 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2740 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2742 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2744 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 2746 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2750 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter InformationClass */

/* 2752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2756 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter TrustedDomainInformation */

/* 2758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2760 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2762 */	NdrFcShort( 0x784 ),	/* Type Offset=1924 */

	/* Return value */

/* 2764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2766 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarEnumerateTrustedDomainsEx */

/* 2770 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2780 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2782 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2784 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2786 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2790 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 2792 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2802 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2806 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter EnumerationContext */

/* 2808 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EnumerationBuffer */

/* 2814 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2818 */	NdrFcShort( 0x7a8 ),	/* Type Offset=1960 */

	/* Parameter PreferedMaximumLength */

/* 2820 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2822 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx */

/* 2832 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2840 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2842 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2844 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2846 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2848 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2850 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2852 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2854 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2864 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2866 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2868 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 2870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2874 */	NdrFcShort( 0x5b0 ),	/* Type Offset=1456 */

	/* Parameter AuthenticationInformation */

/* 2876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2880 */	NdrFcShort( 0x60c ),	/* Type Offset=1548 */

	/* Parameter DesiredAccess */

/* 2882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2884 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 2888 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2890 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2892 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 2894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2896 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum52NotUsedOnWire */

/* 2900 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2908 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2910 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2920 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryDomainInformationPolicy */

/* 2930 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2938 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2940 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2942 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2944 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2946 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2952 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 2962 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2964 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2966 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 2968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2972 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 2974 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2976 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2978 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 2980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2982 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetDomainInformationPolicy */

/* 2986 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2996 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2998 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3000 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3002 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3006 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3008 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3018 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3020 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3022 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter InformationClass */

/* 3024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3026 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3028 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter PolicyDomainInformation */

/* 3030 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3032 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3034 */	NdrFcShort( 0x816 ),	/* Type Offset=2070 */

	/* Return value */

/* 3036 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3038 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenTrustedDomainByName */

/* 3042 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3044 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3050 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3052 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3054 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3056 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3058 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3060 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3062 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3064 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3074 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3076 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3078 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3080 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3084 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter DesiredAccess */

/* 3086 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 3092 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3094 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3096 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 3098 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3100 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum56NotUsedOnWire */

/* 3104 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3106 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3114 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3124 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids2 */

/* 3134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3142 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3144 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3150 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3154 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 3156 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3166 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3168 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3170 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter SidEnumBuffer */

/* 3172 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3176 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter ReferencedDomains */

/* 3178 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3182 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedNames */

/* 3184 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3186 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3188 */	NdrFcShort( 0x85a ),	/* Type Offset=2138 */

	/* Parameter LookupLevel */

/* 3190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3192 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3194 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3196 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3198 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3204 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3210 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3216 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames2 */

/* 3220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3228 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3230 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3232 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3234 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3236 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3242 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3252 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3254 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3256 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 3258 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3262 */	NdrFcShort( 0x86e ),	/* 2158 */

	/* Parameter Names */

/* 3264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3268 */	NdrFcShort( 0x376 ),	/* Type Offset=886 */

	/* Parameter ReferencedDomains */

/* 3270 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedSids */

/* 3276 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3280 */	NdrFcShort( 0x8aa ),	/* Type Offset=2218 */

	/* Parameter LookupLevel */

/* 3282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3284 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3286 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3288 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3290 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3296 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3308 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarCreateTrustedDomainEx2 */

/* 3312 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3318 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3320 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3322 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3324 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3326 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3328 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3330 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3334 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3344 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3346 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3348 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 3350 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3354 */	NdrFcShort( 0x5b0 ),	/* Type Offset=1456 */

	/* Parameter AuthenticationInformation */

/* 3356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3360 */	NdrFcShort( 0x668 ),	/* Type Offset=1640 */

	/* Parameter DesiredAccess */

/* 3362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 3368 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3370 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3372 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 3374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3376 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum60NotUsedOnWire */

/* 3380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3390 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3392 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3400 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum61NotUsedOnWire */

/* 3410 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3420 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3422 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3430 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum62NotUsedOnWire */

/* 3440 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3448 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3450 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3460 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3470 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3480 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3488 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3490 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3500 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3506 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3510 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3512 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3520 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum65NotUsedOnWire */

/* 3530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3538 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3540 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3550 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum66NotUsedOnWire */

/* 3560 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3570 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3580 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum67NotUsedOnWire */

/* 3590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3600 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3610 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupNames3 */

/* 3620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3628 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3630 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3632 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3634 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3636 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3638 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 3642 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3652 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3654 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3656 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Count */

/* 3658 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3662 */	NdrFcShort( 0x8c2 ),	/* 2242 */

	/* Parameter Names */

/* 3664 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3668 */	NdrFcShort( 0x376 ),	/* Type Offset=886 */

	/* Parameter ReferencedDomains */

/* 3670 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3674 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedSids */

/* 3676 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3678 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3680 */	NdrFcShort( 0x902 ),	/* Type Offset=2306 */

	/* Parameter LookupLevel */

/* 3682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3684 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3686 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 3688 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3690 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 3694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3696 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 3700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3702 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3708 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum69NotUsedOnWire */

/* 3712 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3720 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3722 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3730 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3732 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum70NotUsedOnWire */

/* 3742 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3752 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3760 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3762 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum71NotUsedOnWire */

/* 3772 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3780 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3782 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3792 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum72NotUsedOnWire */

/* 3802 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3812 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3814 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3822 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarQueryForestTrustInformation */

/* 3832 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3840 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3842 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3844 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3846 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3848 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3852 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3854 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3864 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3866 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3868 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3870 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3874 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter HighestRecordType */

/* 3876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3880 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3882 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3884 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3886 */	NdrFcShort( 0x916 ),	/* Type Offset=2326 */

	/* Return value */

/* 3888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3890 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarSetForestTrustInformation */

/* 3894 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3902 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3904 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3906 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3908 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3910 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3916 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 3926 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3928 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3930 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainName */

/* 3932 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3936 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter HighestRecordType */

/* 3938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3942 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter ForestTrustInfo */

/* 3944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3948 */	NdrFcShort( 0x9a8 ),	/* Type Offset=2472 */

	/* Parameter CheckOnly */

/* 3950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3954 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter CollisionInfo */

/* 3956 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3960 */	NdrFcShort( 0x9c0 ),	/* Type Offset=2496 */

	/* Return value */

/* 3962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3964 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 3968 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x4b ),	/* 75 */
/* 3976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3978 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3980 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3986 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3988 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarLookupSids3 */

/* 3998 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4006 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 4008 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4010 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4012 */	NdrFcShort( 0x32 ),	/* 50 */
/* 4014 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4016 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4018 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SidEnumBuffer */

/* 4028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4030 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4032 */	NdrFcShort( 0x41c ),	/* Type Offset=1052 */

	/* Parameter ReferencedDomains */

/* 4034 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4036 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4038 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedNames */

/* 4040 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 4042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4044 */	NdrFcShort( 0x85a ),	/* Type Offset=2138 */

	/* Parameter LookupLevel */

/* 4046 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4048 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4050 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 4052 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4054 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 4058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4060 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 4064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4066 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4072 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarLookupNames4 */

/* 4076 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4084 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 4086 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4088 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4090 */	NdrFcShort( 0x3a ),	/* 58 */
/* 4092 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4094 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 4096 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Count */

/* 4106 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 4108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4110 */	NdrFcShort( 0xa00 ),	/* 2560 */

	/* Parameter Names */

/* 4112 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4116 */	NdrFcShort( 0x376 ),	/* Type Offset=886 */

	/* Parameter ReferencedDomains */

/* 4118 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4122 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Parameter TranslatedSids */

/* 4124 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 4126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4128 */	NdrFcShort( 0x902 ),	/* Type Offset=2306 */

	/* Parameter LookupLevel */

/* 4130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4132 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4134 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter MappedCount */

/* 4136 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4138 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LookupOptions */

/* 4142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4144 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientRevision */

/* 4148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4150 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4156 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 4158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum78NotUsedOnWire */

/* 4160 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4170 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4172 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4178 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4180 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum79NotUsedOnWire */

/* 4190 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4200 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4202 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4208 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4210 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum80NotUsedOnWire */

/* 4220 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4226 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4230 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4238 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4240 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum81NotUsedOnWire */

/* 4250 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4256 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4258 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4260 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4270 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum82NotUsedOnWire */

/* 4280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4286 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4290 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4292 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4298 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 4310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum84NotUsedOnWire */

/* 4340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4346 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4360 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum85NotUsedOnWire */

/* 4370 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4376 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4380 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4390 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum86NotUsedOnWire */

/* 4400 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4406 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4410 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4412 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4418 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4420 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum87NotUsedOnWire */

/* 4430 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4436 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4440 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4442 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4450 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum88NotUsedOnWire */

/* 4460 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4466 */	NdrFcShort( 0x58 ),	/* 88 */
/* 4468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4470 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4478 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4480 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum89NotUsedOnWire */

/* 4490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x59 ),	/* 89 */
/* 4498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4500 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4510 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 4520 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x5a ),	/* 90 */
/* 4528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4530 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4532 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4540 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 4550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4556 */	NdrFcShort( 0x5b ),	/* 91 */
/* 4558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4560 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4568 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 4580 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4586 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4590 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4592 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4598 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4600 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 4610 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x5d ),	/* 93 */
/* 4618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4620 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4622 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4630 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 4640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4646 */	NdrFcShort( 0x5e ),	/* 94 */
/* 4648 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4650 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4652 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4658 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4660 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 4670 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4676 */	NdrFcShort( 0x5f ),	/* 95 */
/* 4678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4680 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4682 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4690 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum96NotUsedOnWire */

/* 4700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4706 */	NdrFcShort( 0x60 ),	/* 96 */
/* 4708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4710 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4718 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4720 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum97NotUsedOnWire */

/* 4730 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x61 ),	/* 97 */
/* 4738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4740 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4742 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4748 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4750 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 4760 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x62 ),	/* 98 */
/* 4768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4770 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4772 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4780 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 4790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4796 */	NdrFcShort( 0x63 ),	/* 99 */
/* 4798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4800 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4802 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4810 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4818 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 4820 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x64 ),	/* 100 */
/* 4828 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4830 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4832 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4838 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4840 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 4850 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x65 ),	/* 101 */
/* 4858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4860 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4862 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4868 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4870 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum102NotUsedOnWire */

/* 4880 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x66 ),	/* 102 */
/* 4888 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4890 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4892 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4900 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 4910 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4916 */	NdrFcShort( 0x67 ),	/* 103 */
/* 4918 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4920 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4922 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4930 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum104NotUsedOnWire */

/* 4940 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4946 */	NdrFcShort( 0x68 ),	/* 104 */
/* 4948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4950 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4952 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4958 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4960 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 4970 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x69 ),	/* 105 */
/* 4978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4980 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4982 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4988 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4990 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 5000 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x6a ),	/* 106 */
/* 5008 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5010 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5012 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5018 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5020 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 5030 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5036 */	NdrFcShort( 0x6b ),	/* 107 */
/* 5038 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5040 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5042 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5048 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5050 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 5060 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5066 */	NdrFcShort( 0x6c ),	/* 108 */
/* 5068 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5070 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5078 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5080 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 5090 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x6d ),	/* 109 */
/* 5098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5100 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5110 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum110NotUsedOnWire */

/* 5120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5126 */	NdrFcShort( 0x6e ),	/* 110 */
/* 5128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5132 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5140 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum111NotUsedOnWire */

/* 5150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5156 */	NdrFcShort( 0x6f ),	/* 111 */
/* 5158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum112NotUsedOnWire */

/* 5180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x70 ),	/* 112 */
/* 5188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5198 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5200 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum113NotUsedOnWire */

/* 5210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5216 */	NdrFcShort( 0x71 ),	/* 113 */
/* 5218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5228 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5230 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 5240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x72 ),	/* 114 */
/* 5248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5250 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5260 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum115NotUsedOnWire */

/* 5270 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5276 */	NdrFcShort( 0x73 ),	/* 115 */
/* 5278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5280 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5282 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum116NotUsedOnWire */

/* 5300 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x74 ),	/* 116 */
/* 5308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5310 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5318 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum117NotUsedOnWire */

/* 5330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5336 */	NdrFcShort( 0x75 ),	/* 117 */
/* 5338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5348 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum118NotUsedOnWire */

/* 5360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5366 */	NdrFcShort( 0x76 ),	/* 118 */
/* 5368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5372 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum119NotUsedOnWire */

/* 5390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x77 ),	/* 119 */
/* 5398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5408 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5410 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum120NotUsedOnWire */

/* 5420 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5426 */	NdrFcShort( 0x78 ),	/* 120 */
/* 5428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5430 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5438 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5440 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum121NotUsedOnWire */

/* 5450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5456 */	NdrFcShort( 0x79 ),	/* 121 */
/* 5458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5468 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum122NotUsedOnWire */

/* 5480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x7a ),	/* 122 */
/* 5488 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5498 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5500 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum123NotUsedOnWire */

/* 5510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5516 */	NdrFcShort( 0x7b ),	/* 123 */
/* 5518 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5520 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5528 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5530 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum124NotUsedOnWire */

/* 5540 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5546 */	NdrFcShort( 0x7c ),	/* 124 */
/* 5548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5550 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5552 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5560 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5568 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum125NotUsedOnWire */

/* 5570 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x7d ),	/* 125 */
/* 5578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5580 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5582 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5588 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5590 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum126NotUsedOnWire */

/* 5600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5606 */	NdrFcShort( 0x7e ),	/* 126 */
/* 5608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5610 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5618 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5620 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum127NotUsedOnWire */

/* 5630 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x7f ),	/* 127 */
/* 5638 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5640 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5642 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5648 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum128NotUsedOnWire */

/* 5660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5670 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5678 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5680 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure LsarCreateTrustedDomainEx3 */

/* 5690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5696 */	NdrFcShort( 0x81 ),	/* 129 */
/* 5698 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5700 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5706 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5708 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5712 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PolicyHandle */

/* 5722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5726 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter TrustedDomainInformation */

/* 5728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5732 */	NdrFcShort( 0x5b0 ),	/* Type Offset=1456 */

	/* Parameter AuthenticationInformation */

/* 5734 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5738 */	NdrFcShort( 0xa30 ),	/* Type Offset=2608 */

	/* Parameter DesiredAccess */

/* 5740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TrustedDomainHandle */

/* 5746 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5748 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5750 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 5752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5754 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LsarOpenPolicy3 */

/* 5758 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5764 */	NdrFcShort( 0x82 ),	/* 130 */
/* 5766 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5768 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 5770 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5772 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5776 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5778 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5780 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter SystemName */

/* 5790 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5792 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5794 */	NdrFcShort( 0x746 ),	/* Type Offset=1862 */

	/* Parameter ObjectAttributes */

/* 5796 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5798 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5800 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Parameter DesiredAccess */

/* 5802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5804 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InVersion */

/* 5808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5810 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InRevisionInfo */

/* 5814 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5816 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5818 */	NdrFcShort( 0xa50 ),	/* Type Offset=2640 */

	/* Parameter OutVersion */

/* 5820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5822 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter OutRevisionInfo */

/* 5826 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5828 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5830 */	NdrFcShort( 0xa6a ),	/* Type Offset=2666 */

	/* Parameter PolicyHandle */

/* 5832 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 5834 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5836 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 5838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5840 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5842 */	0x8,		/* FC_LONG */
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
/* 872 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 882 */	
			0x11, 0x0,	/* FC_RP */
/* 884 */	NdrFcShort( 0x2 ),	/* Offset= 2 (886) */
/* 886 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 894 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 896 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 900 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 902 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 904 */	NdrFcShort( 0xfca0 ),	/* Offset= -864 (40) */
/* 906 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 908 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (912) */
/* 912 */	
			0x12, 0x0,	/* FC_UP */
/* 914 */	NdrFcShort( 0x2 ),	/* Offset= 2 (916) */
/* 916 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 918 */	NdrFcShort( 0x18 ),	/* 24 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x8 ),	/* Offset= 8 (930) */
/* 924 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 926 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 928 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 930 */	
			0x12, 0x0,	/* FC_UP */
/* 932 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (834) */
/* 934 */	
			0x11, 0x0,	/* FC_RP */
/* 936 */	NdrFcShort( 0x2e ),	/* Offset= 46 (982) */
/* 938 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 944 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0xc ),	/* 12 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* Offset= 0 (954) */
/* 956 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 958 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 960 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 970 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 974 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 976 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 978 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (948) */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x10 ),	/* 16 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0xa ),	/* Offset= 10 (998) */
/* 990 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0xffca ),	/* Offset= -54 (938) */
/* 994 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 996 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 998 */	
			0x12, 0x0,	/* FC_UP */
/* 1000 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (960) */
/* 1002 */	
			0x11, 0x0,	/* FC_RP */
/* 1004 */	NdrFcShort( 0x30 ),	/* Offset= 48 (1052) */
/* 1006 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1012 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 1016 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1026) */
/* 1024 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1026 */	
			0x12, 0x0,	/* FC_UP */
/* 1028 */	NdrFcShort( 0xfcf4 ),	/* Offset= -780 (248) */
/* 1030 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1040 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1044 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1046 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1048 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1016) */
/* 1050 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1052 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1054 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0xa ),	/* Offset= 10 (1068) */
/* 1060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1006) */
/* 1064 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1066 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1068 */	
			0x12, 0x0,	/* FC_UP */
/* 1070 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1030) */
/* 1072 */	
			0x11, 0x0,	/* FC_RP */
/* 1074 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1126) */
/* 1076 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1082 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 1086 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1088 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1092) */
/* 1094 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 1096 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1098 */	NdrFcShort( 0xfbde ),	/* Offset= -1058 (40) */
/* 1100 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1104 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1114 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1118 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1120 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1086) */
/* 1124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1126 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0xa ),	/* Offset= 10 (1142) */
/* 1134 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1136 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (1076) */
/* 1138 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1140 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1142 */	
			0x12, 0x0,	/* FC_UP */
/* 1144 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1104) */
/* 1146 */	
			0x11, 0x0,	/* FC_RP */
/* 1148 */	NdrFcShort( 0xfbac ),	/* Offset= -1108 (40) */
/* 1150 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1154) */
/* 1154 */	
			0x12, 0x0,	/* FC_UP */
/* 1156 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1194) */
/* 1158 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 1168 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1170 */	NdrFcShort( 0xc ),	/* 12 */
/* 1172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0xfba4 ),	/* Offset= -1116 (58) */
/* 1176 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1178 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1180 */	NdrFcShort( 0xc ),	/* 12 */
/* 1182 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1184 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1188 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1190 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1168) */
/* 1192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1198 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1178) */
/* 1200 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1200) */
/* 1202 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1204 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1158) */
/* 1206 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1208 */	
			0x11, 0x0,	/* FC_RP */
/* 1210 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1194) */
/* 1212 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1214 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1216 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	
			0x12, 0x0,	/* FC_UP */
/* 1222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1224) */
/* 1224 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1226 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1230 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1234) */
/* 1234 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1236 */	NdrFcShort( 0x300d ),	/* 12301 */
/* 1238 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1242 */	NdrFcShort( 0xfd76 ),	/* Offset= -650 (592) */
/* 1244 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1248 */	NdrFcShort( 0x66 ),	/* Offset= 102 (1350) */
/* 1250 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1254 */	NdrFcShort( 0x74 ),	/* Offset= 116 (1370) */
/* 1256 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1260 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (1436) */
/* 1262 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1266 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (812) */
/* 1268 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1272 */	NdrFcShort( 0xb8 ),	/* Offset= 184 (1456) */
/* 1274 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1278 */	NdrFcShort( 0x10e ),	/* Offset= 270 (1548) */
/* 1280 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1284 */	NdrFcShort( 0x130 ),	/* Offset= 304 (1588) */
/* 1286 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1290 */	NdrFcShort( 0x15e ),	/* Offset= 350 (1640) */
/* 1292 */	NdrFcLong( 0xa ),	/* 10 */
/* 1296 */	NdrFcShort( 0x166 ),	/* Offset= 358 (1654) */
/* 1298 */	NdrFcLong( 0xb ),	/* 11 */
/* 1302 */	NdrFcShort( 0x182 ),	/* Offset= 386 (1688) */
/* 1304 */	NdrFcLong( 0xc ),	/* 12 */
/* 1308 */	NdrFcShort( 0x19c ),	/* Offset= 412 (1720) */
/* 1310 */	NdrFcLong( 0xd ),	/* 13 */
/* 1314 */	NdrFcShort( 0x38 ),	/* Offset= 56 (1370) */
/* 1316 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1315) */
/* 1318 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1324 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1328 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1338 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1342 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1344 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1346 */	NdrFcShort( 0xfae6 ),	/* Offset= -1306 (40) */
/* 1348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1350 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0xa ),	/* Offset= 10 (1366) */
/* 1358 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1360 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1318) */
/* 1362 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1364 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1366 */	
			0x12, 0x0,	/* FC_UP */
/* 1368 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1328) */
/* 1370 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1374 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1376 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1382 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1386 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcLong( 0x20010 ),	/* 131088 */
/* 1396 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1400 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1402 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1404 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1406 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1412 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1414 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1416 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0xc ),	/* Offset= 12 (1432) */
/* 1422 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1424 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (1376) */
/* 1426 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1428 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1386) */
/* 1430 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1432 */	
			0x12, 0x0,	/* FC_UP */
/* 1434 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1396) */
/* 1436 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1438 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1448) */
/* 1444 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1446 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1448 */	
			0x12, 0x0,	/* FC_UP */
/* 1450 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1414) */
/* 1452 */	
			0x12, 0x0,	/* FC_UP */
/* 1454 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1414) */
/* 1456 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1458 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1478) */
/* 1464 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1466 */	NdrFcShort( 0xfa6e ),	/* Offset= -1426 (40) */
/* 1468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1470 */	NdrFcShort( 0xfa6a ),	/* Offset= -1430 (40) */
/* 1472 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1474 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1476 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 1478 */	
			0x12, 0x0,	/* FC_UP */
/* 1480 */	NdrFcShort( 0xfb30 ),	/* Offset= -1232 (248) */
/* 1482 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1492 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1498 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1502 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1508 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1512 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1516 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1518 */	NdrFcShort( 0xc ),	/* 12 */
/* 1520 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1522 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1524 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1526 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0xe ),	/* Offset= 14 (1544) */
/* 1532 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1534 */	NdrFcShort( 0xfbe4 ),	/* Offset= -1052 (482) */
/* 1536 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1538 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (1502) */
			0x36,		/* FC_POINTER */
/* 1542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1544 */	
			0x12, 0x0,	/* FC_UP */
/* 1546 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1512) */
/* 1548 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1550 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1572) */
/* 1556 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1558 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1482) */
/* 1560 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1562 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1564 */	0x0,		/* 0 */
			NdrFcShort( 0xffb7 ),	/* Offset= -73 (1492) */
			0x40,		/* FC_STRUCTPAD4 */
/* 1568 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1570 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1572 */	
			0x12, 0x0,	/* FC_UP */
/* 1574 */	NdrFcShort( 0xffce ),	/* Offset= -50 (1524) */
/* 1576 */	
			0x12, 0x0,	/* FC_UP */
/* 1578 */	NdrFcShort( 0xffca ),	/* Offset= -54 (1524) */
/* 1580 */	
			0x12, 0x0,	/* FC_UP */
/* 1582 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1524) */
/* 1584 */	
			0x12, 0x0,	/* FC_UP */
/* 1586 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1524) */
/* 1588 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1590 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1594) */
/* 1596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1598 */	NdrFcShort( 0xff72 ),	/* Offset= -142 (1456) */
/* 1600 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1602 */	NdrFcShort( 0xff18 ),	/* Offset= -232 (1370) */
/* 1604 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1606 */	0x0,		/* 0 */
			NdrFcShort( 0xffc5 ),	/* Offset= -59 (1548) */
			0x5b,		/* FC_END */
/* 1610 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 1620 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0xa ),	/* Offset= 10 (1636) */
/* 1628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1630 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1610) */
/* 1632 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1634 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1636 */	
			0x12, 0x0,	/* FC_UP */
/* 1638 */	NdrFcShort( 0xfa26 ),	/* Offset= -1498 (140) */
/* 1640 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1642 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1646) */
/* 1648 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1650 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1620) */
/* 1652 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1654 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1656 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1660) */
/* 1662 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1664 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (1456) */
/* 1666 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1668 */	NdrFcShort( 0xfed6 ),	/* Offset= -298 (1370) */
/* 1670 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1672 */	0x0,		/* 0 */
			NdrFcShort( 0xffdf ),	/* Offset= -33 (1640) */
			0x5b,		/* FC_END */
/* 1676 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1680 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1682 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1684 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1686 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1688 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1690 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1712) */
/* 1696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1698 */	NdrFcShort( 0xf986 ),	/* Offset= -1658 (40) */
/* 1700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1702 */	NdrFcShort( 0xf982 ),	/* Offset= -1662 (40) */
/* 1704 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1706 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1708 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1710 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1712 */	
			0x12, 0x0,	/* FC_UP */
/* 1714 */	NdrFcShort( 0xfa46 ),	/* Offset= -1466 (248) */
/* 1716 */	
			0x12, 0x0,	/* FC_UP */
/* 1718 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1676) */
/* 1720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1722 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1726) */
/* 1728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1730 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1688) */
/* 1732 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1734 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (1370) */
/* 1736 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1738 */	0x0,		/* 0 */
			NdrFcShort( 0xff41 ),	/* Offset= -191 (1548) */
			0x5b,		/* FC_END */
/* 1742 */	
			0x11, 0x0,	/* FC_RP */
/* 1744 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1746) */
/* 1746 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1748 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1752 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1754 */	NdrFcShort( 0xfdf8 ),	/* Offset= -520 (1234) */
/* 1756 */	
			0x12, 0x0,	/* FC_UP */
/* 1758 */	NdrFcShort( 0xfea8 ),	/* Offset= -344 (1414) */
/* 1760 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1762 */	NdrFcShort( 0xfffa ),	/* Offset= -6 (1756) */
/* 1764 */	
			0x12, 0x0,	/* FC_UP */
/* 1766 */	NdrFcShort( 0xfafc ),	/* Offset= -1284 (482) */
/* 1768 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1770 */	NdrFcShort( 0xf950 ),	/* Offset= -1712 (58) */
/* 1772 */	
			0x11, 0x0,	/* FC_RP */
/* 1774 */	NdrFcShort( 0xf94c ),	/* Offset= -1716 (58) */
/* 1776 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1778 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1780) */
/* 1780 */	
			0x12, 0x0,	/* FC_UP */
/* 1782 */	NdrFcShort( 0xf932 ),	/* Offset= -1742 (40) */
/* 1784 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1786 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1788 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1790 */	NdrFcShort( 0xc ),	/* Offset= 12 (1802) */
/* 1792 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcLong( 0x100 ),	/* 256 */
/* 1802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1804 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0xa ),	/* Offset= 10 (1818) */
/* 1810 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1812 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1792) */
/* 1814 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1816 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1818 */	
			0x12, 0x0,	/* FC_UP */
/* 1820 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (1328) */
/* 1822 */	
			0x11, 0x0,	/* FC_RP */
/* 1824 */	NdrFcShort( 0xffea ),	/* Offset= -22 (1802) */
/* 1826 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1830) */
/* 1830 */	
			0x12, 0x0,	/* FC_UP */
/* 1832 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1834) */
/* 1834 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1836 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1838 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1842 */	NdrFcShort( 0xfda0 ),	/* Offset= -608 (1234) */
/* 1844 */	
			0x11, 0x0,	/* FC_RP */
/* 1846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1848) */
/* 1848 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1850 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1852 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1856 */	NdrFcShort( 0xfd92 ),	/* Offset= -622 (1234) */
/* 1858 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1860 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (1756) */
/* 1862 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1864 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1866 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1868 */	NdrFcShort( 0xffa8 ),	/* Offset= -88 (1780) */
/* 1870 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1872 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1874) */
/* 1874 */	
			0x12, 0x0,	/* FC_UP */
/* 1876 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1878) */
/* 1878 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1880 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1884 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1886 */	NdrFcShort( 0xfa2a ),	/* Offset= -1494 (392) */
/* 1888 */	
			0x11, 0x0,	/* FC_RP */
/* 1890 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1892) */
/* 1892 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1894 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1896 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1898 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1900 */	NdrFcShort( 0xfa1c ),	/* Offset= -1508 (392) */
/* 1902 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1904 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1906) */
/* 1906 */	
			0x12, 0x0,	/* FC_UP */
/* 1908 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1910) */
/* 1910 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1912 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1914 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1918 */	NdrFcShort( 0xfd54 ),	/* Offset= -684 (1234) */
/* 1920 */	
			0x11, 0x0,	/* FC_RP */
/* 1922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1924) */
/* 1924 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1926 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1928 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1930 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1932 */	NdrFcShort( 0xfd46 ),	/* Offset= -698 (1234) */
/* 1934 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1936 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1960) */
/* 1938 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1948 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1952 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1954 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1956 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (1456) */
/* 1958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1960 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1972) */
/* 1968 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1970 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1972 */	
			0x12, 0x0,	/* FC_UP */
/* 1974 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1938) */
/* 1976 */	
			0x11, 0x0,	/* FC_RP */
/* 1978 */	NdrFcShort( 0xfdf6 ),	/* Offset= -522 (1456) */
/* 1980 */	
			0x11, 0x0,	/* FC_RP */
/* 1982 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (1548) */
/* 1984 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1986 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1988) */
/* 1988 */	
			0x12, 0x0,	/* FC_UP */
/* 1990 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1992) */
/* 1992 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1994 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 1996 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2000 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2002) */
/* 2002 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2004 */	NdrFcShort( 0x7003 ),	/* 28675 */
/* 2006 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2010 */	NdrFcShort( 0xfd80 ),	/* Offset= -640 (1370) */
/* 2012 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2016 */	NdrFcShort( 0xa ),	/* Offset= 10 (2026) */
/* 2018 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2022 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2042) */
/* 2024 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2023) */
/* 2026 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2038) */
/* 2034 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2036 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2038 */	
			0x12, 0x0,	/* FC_UP */
/* 2040 */	NdrFcShort( 0xf894 ),	/* Offset= -1900 (140) */
/* 2042 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2044 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2046 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2048 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2050 */	NdrFcShort( 0xf9e0 ),	/* Offset= -1568 (482) */
/* 2052 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2054 */	NdrFcShort( 0xf9dc ),	/* Offset= -1572 (482) */
/* 2056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2058 */	NdrFcShort( 0xf9d8 ),	/* Offset= -1576 (482) */
/* 2060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2062 */	NdrFcShort( 0xf9d4 ),	/* Offset= -1580 (482) */
/* 2064 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0xf9d0 ),	/* Offset= -1584 (482) */
/* 2068 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2070 */	
			0x12, 0x0,	/* FC_UP */
/* 2072 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2074) */
/* 2074 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2076 */	0x26,		/* Corr desc:  parameter, FC_SHORT */
			0x0,		/*  */
/* 2078 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2080 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2082 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (2002) */
/* 2084 */	
			0x11, 0x0,	/* FC_RP */
/* 2086 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2138) */
/* 2088 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcLong( 0x5000 ),	/* 20480 */
/* 2098 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2100 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2104 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2104) */
/* 2106 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 2108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2110 */	NdrFcShort( 0xf7ea ),	/* Offset= -2070 (40) */
/* 2112 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2116 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2126 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2130 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2134 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2098) */
/* 2136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2140 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0xa ),	/* Offset= 10 (2154) */
/* 2146 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2148 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2088) */
/* 2150 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2154 */	
			0x12, 0x0,	/* FC_UP */
/* 2156 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2116) */
/* 2158 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2164 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2168 */	
			0x11, 0x0,	/* FC_RP */
/* 2170 */	NdrFcShort( 0x30 ),	/* Offset= 48 (2218) */
/* 2172 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2178 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2182 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2188) */
/* 2190 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 2192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2196 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2206 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2210 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2214 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (2182) */
/* 2216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2218 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0xa ),	/* Offset= 10 (2234) */
/* 2226 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2228 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2172) */
/* 2230 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2234 */	
			0x12, 0x0,	/* FC_UP */
/* 2236 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2196) */
/* 2238 */	
			0x11, 0x0,	/* FC_RP */
/* 2240 */	NdrFcShort( 0xfda8 ),	/* Offset= -600 (1640) */
/* 2242 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2248 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2252 */	
			0x11, 0x0,	/* FC_RP */
/* 2254 */	NdrFcShort( 0x34 ),	/* Offset= 52 (2306) */
/* 2256 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2262 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2266 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2268 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2280) */
/* 2274 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 2276 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2278 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2280 */	
			0x12, 0x0,	/* FC_UP */
/* 2282 */	NdrFcShort( 0xf80e ),	/* Offset= -2034 (248) */
/* 2284 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2294 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2298 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2300 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2302 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2266) */
/* 2304 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2308 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0xa ),	/* Offset= 10 (2322) */
/* 2314 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2316 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2256) */
/* 2318 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2320 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2322 */	
			0x12, 0x0,	/* FC_UP */
/* 2324 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2284) */
/* 2326 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2330) */
/* 2330 */	
			0x12, 0x0,	/* FC_UP */
/* 2332 */	NdrFcShort( 0x8c ),	/* Offset= 140 (2472) */
/* 2334 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2340 */	NdrFcLong( 0xfa0 ),	/* 4000 */
/* 2344 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2346 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 2348 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 2350 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2352 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2354) */
/* 2354 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2356 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 2358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0xf6ee ),	/* Offset= -2322 (40) */
/* 2364 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2368 */	NdrFcShort( 0xf6e8 ),	/* Offset= -2328 (40) */
/* 2370 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2374 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2378) */
/* 2376 */	NdrFcShort( 0x22 ),	/* Offset= 34 (2410) */
/* 2378 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2380 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0xc ),	/* Offset= 12 (2396) */
/* 2386 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2388 */	0x0,		/* 0 */
			NdrFcShort( 0xf6d3 ),	/* Offset= -2349 (40) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2392 */	0x0,		/* 0 */
			NdrFcShort( 0xf6cf ),	/* Offset= -2353 (40) */
			0x5b,		/* FC_END */
/* 2396 */	
			0x12, 0x0,	/* FC_UP */
/* 2398 */	NdrFcShort( 0xf79a ),	/* Offset= -2150 (248) */
/* 2400 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcLong( 0x20000 ),	/* 131072 */
/* 2410 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0xa ),	/* Offset= 10 (2426) */
/* 2418 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2420 */	NdrFcShort( 0xffec ),	/* Offset= -20 (2400) */
/* 2422 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2424 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2426 */	
			0x12, 0x0,	/* FC_UP */
/* 2428 */	NdrFcShort( 0xf710 ),	/* Offset= -2288 (140) */
/* 2430 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2432 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2436) */
/* 2438 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2440 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2442 */	NdrFcShort( 0xf858 ),	/* Offset= -1960 (482) */
/* 2444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2446 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (2344) */
/* 2448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2450 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2458 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2460 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2464 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2466 */	
			0x12, 0x0,	/* FC_UP */
/* 2468 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2430) */
/* 2470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2472 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0xa ),	/* Offset= 10 (2488) */
/* 2480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2482 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (2334) */
/* 2484 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2488 */	
			0x12, 0x0,	/* FC_UP */
/* 2490 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2450) */
/* 2492 */	
			0x11, 0x0,	/* FC_RP */
/* 2494 */	NdrFcShort( 0xffea ),	/* Offset= -22 (2472) */
/* 2496 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2498 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2500) */
/* 2500 */	
			0x12, 0x0,	/* FC_UP */
/* 2502 */	NdrFcShort( 0x2a ),	/* Offset= 42 (2544) */
/* 2504 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2506 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2510) */
/* 2512 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 2514 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2518 */	NdrFcShort( 0xf652 ),	/* Offset= -2478 (40) */
/* 2520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2522 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2532 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2538 */	
			0x12, 0x0,	/* FC_UP */
/* 2540 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2504) */
/* 2542 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2544 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2546 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2556) */
/* 2552 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2554 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2556 */	
			0x12, 0x0,	/* FC_UP */
/* 2558 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2522) */
/* 2560 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2566 */	NdrFcLong( 0x3e8 ),	/* 1000 */
/* 2570 */	
			0x11, 0x0,	/* FC_RP */
/* 2572 */	NdrFcShort( 0x24 ),	/* Offset= 36 (2608) */
/* 2574 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2576 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2578 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2580 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2582 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2584 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2586 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2592 */	NdrFcLong( 0x10000 ),	/* 65536 */
/* 2596 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2600 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2602 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2604 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2606 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2610 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x12 ),	/* Offset= 18 (2632) */
/* 2616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2618 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2574) */
/* 2620 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2622 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (2580) */
/* 2624 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2626 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2586) */
/* 2628 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2630 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2632 */	
			0x12, 0x0,	/* FC_UP */
/* 2634 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2596) */
/* 2636 */	
			0x11, 0x0,	/* FC_RP */
/* 2638 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2640) */
/* 2640 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2642 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2646 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2648 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2650) */
/* 2650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2652 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 2654 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2658 */	NdrFcShort( 0xf5d8 ),	/* Offset= -2600 (58) */
/* 2660 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2659) */
/* 2662 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2664 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2666) */
/* 2666 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2668 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2670 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2672 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2674 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2650) */

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
    804,
    878,
    940,
    1002,
    1052,
    1102,
    1158,
    1188,
    1218,
    1268,
    1318,
    1380,
    1436,
    1492,
    1554,
    1610,
    1678,
    1734,
    1790,
    1864,
    1908,
    1964,
    2020,
    2076,
    2138,
    2200,
    2262,
    2312,
    2368,
    2424,
    2480,
    2534,
    2590,
    2646,
    2708,
    2770,
    2832,
    2900,
    2930,
    2986,
    3042,
    3104,
    3134,
    3220,
    3312,
    3380,
    3410,
    3440,
    3470,
    3500,
    3530,
    3560,
    3590,
    3620,
    3712,
    3742,
    3772,
    3802,
    3832,
    3894,
    3968,
    3998,
    4076,
    4160,
    4190,
    4220,
    4250,
    4280,
    4310,
    4340,
    4370,
    4400,
    4430,
    4460,
    4490,
    4520,
    4550,
    4580,
    4610,
    4640,
    4670,
    4700,
    4730,
    4760,
    4790,
    4820,
    4850,
    4880,
    4910,
    4940,
    4970,
    5000,
    5030,
    5060,
    5090,
    5120,
    5150,
    5180,
    5210,
    5240,
    5270,
    5300,
    5330,
    5360,
    5390,
    5420,
    5450,
    5480,
    5510,
    5540,
    5570,
    5600,
    5630,
    5660,
    5690,
    5758
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


#endif /* defined(_M_AMD64)*/

