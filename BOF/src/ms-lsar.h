

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Dlsar_h__
#define __ms2Dlsar_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "ms-dtyp.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __lsarpc_INTERFACE_DEFINED__
#define __lsarpc_INTERFACE_DEFINED__

/* interface lsarpc */
/* [unique][ms_union][version][uuid] */ 

typedef /* [context_handle] */ void *LSAPR_HANDLE;

typedef unsigned char SECURITY_CONTEXT_TRACKING_MODE;

typedef unsigned char *PSECURITY_CONTEXT_TRACKING_MODE;

typedef unsigned short SECURITY_DESCRIPTOR_CONTROL;

typedef unsigned short *PSECURITY_DESCRIPTOR_CONTROL;

typedef struct _STRING *PSTRING;

typedef struct _LSAPR_ACL
    {
    unsigned char AclRevision;
    unsigned char Sbz1;
    unsigned short AclSize;
    /* [size_is] */ unsigned char Dummy1[ 1 ];
    } 	LSAPR_ACL;

typedef struct _LSAPR_ACL *PLSAPR_ACL;

typedef struct _LSAPR_SECURITY_DESCRIPTOR
    {
    unsigned char Revision;
    unsigned char Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    PRPC_SID Owner;
    PRPC_SID Group;
    PLSAPR_ACL Sacl;
    PLSAPR_ACL Dacl;
    } 	LSAPR_SECURITY_DESCRIPTOR;

typedef struct _LSAPR_SECURITY_DESCRIPTOR *PLSAPR_SECURITY_DESCRIPTOR;

typedef enum _SECURITY_IMPERSONATION_LEVEL *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE *PSECURITY_QUALITY_OF_SERVICE;

typedef struct _LSAPR_OBJECT_ATTRIBUTES
    {
    unsigned long Length;
    unsigned char *RootDirectory;
    PSTRING ObjectName;
    unsigned long Attributes;
    PLSAPR_SECURITY_DESCRIPTOR SecurityDescriptor;
    PSECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
    } 	LSAPR_OBJECT_ATTRIBUTES;

typedef struct _LSAPR_OBJECT_ATTRIBUTES *PLSAPR_OBJECT_ATTRIBUTES;

typedef struct _LSAPR_TRUST_INFORMATION
    {
    RPC_UNICODE_STRING Name;
    PRPC_SID Sid;
    } 	LSAPR_TRUST_INFORMATION;

typedef struct _LSAPR_TRUST_INFORMATION *PLSAPR_TRUST_INFORMATION;

typedef 
enum _POLICY_INFORMATION_CLASS
    {
        PolicyAuditLogInformation	= 1,
        PolicyAuditEventsInformation	= ( PolicyAuditLogInformation + 1 ) ,
        PolicyPrimaryDomainInformation	= ( PolicyAuditEventsInformation + 1 ) ,
        PolicyPdAccountInformation	= ( PolicyPrimaryDomainInformation + 1 ) ,
        PolicyAccountDomainInformation	= ( PolicyPdAccountInformation + 1 ) ,
        PolicyLsaServerRoleInformation	= ( PolicyAccountDomainInformation + 1 ) ,
        PolicyReplicaSourceInformation	= ( PolicyLsaServerRoleInformation + 1 ) ,
        PolicyInformationNotUsedOnWire	= ( PolicyReplicaSourceInformation + 1 ) ,
        PolicyModificationInformation	= ( PolicyInformationNotUsedOnWire + 1 ) ,
        PolicyAuditFullSetInformation	= ( PolicyModificationInformation + 1 ) ,
        PolicyAuditFullQueryInformation	= ( PolicyAuditFullSetInformation + 1 ) ,
        PolicyDnsDomainInformation	= ( PolicyAuditFullQueryInformation + 1 ) ,
        PolicyDnsDomainInformationInt	= ( PolicyDnsDomainInformation + 1 ) ,
        PolicyLocalAccountDomainInformation	= ( PolicyDnsDomainInformationInt + 1 ) ,
        PolicyMachineAccountInformation	= ( PolicyLocalAccountDomainInformation + 1 ) ,
        PolicyLastEntry	= ( PolicyMachineAccountInformation + 1 ) 
    } 	POLICY_INFORMATION_CLASS;

typedef enum _POLICY_INFORMATION_CLASS *PPOLICY_INFORMATION_CLASS;

typedef 
enum _POLICY_AUDIT_EVENT_TYPE
    {
        AuditCategorySystem	= 0,
        AuditCategoryLogon	= ( AuditCategorySystem + 1 ) ,
        AuditCategoryObjectAccess	= ( AuditCategoryLogon + 1 ) ,
        AuditCategoryPrivilegeUse	= ( AuditCategoryObjectAccess + 1 ) ,
        AuditCategoryDetailedTracking	= ( AuditCategoryPrivilegeUse + 1 ) ,
        AuditCategoryPolicyChange	= ( AuditCategoryDetailedTracking + 1 ) ,
        AuditCategoryAccountManagement	= ( AuditCategoryPolicyChange + 1 ) ,
        AuditCategoryDirectoryServiceAccess	= ( AuditCategoryAccountManagement + 1 ) ,
        AuditCategoryAccountLogon	= ( AuditCategoryDirectoryServiceAccess + 1 ) 
    } 	POLICY_AUDIT_EVENT_TYPE;

typedef enum _POLICY_AUDIT_EVENT_TYPE *PPOLICY_AUDIT_EVENT_TYPE;

typedef RPC_UNICODE_STRING LSA_UNICODE_STRING;

typedef RPC_UNICODE_STRING *PLSA_UNICODE_STRING;

typedef struct _POLICY_AUDIT_LOG_INFO
    {
    unsigned long AuditLogPercentFull;
    unsigned long MaximumLogSize;
    LARGE_INTEGER AuditRetentionPeriod;
    unsigned char AuditLogFullShutdownInProgress;
    LARGE_INTEGER TimeToShutdown;
    unsigned long NextAuditRecordId;
    } 	POLICY_AUDIT_LOG_INFO;

typedef struct _POLICY_AUDIT_LOG_INFO *PPOLICY_AUDIT_LOG_INFO;

typedef 
enum _POLICY_LSA_SERVER_ROLE
    {
        PolicyServerRoleBackup	= 2,
        PolicyServerRolePrimary	= ( PolicyServerRoleBackup + 1 ) 
    } 	POLICY_LSA_SERVER_ROLE;

typedef enum _POLICY_LSA_SERVER_ROLE *PPOLICY_LSA_SERVER_ROLE;

typedef struct _POLICY_LSA_SERVER_ROLE_INFO
    {
    POLICY_LSA_SERVER_ROLE LsaServerRole;
    } 	POLICY_LSA_SERVER_ROLE_INFO;

typedef struct _POLICY_LSA_SERVER_ROLE_INFO *PPOLICY_LSA_SERVER_ROLE_INFO;

typedef struct _POLICY_MODIFICATION_INFO
    {
    LARGE_INTEGER ModifiedId;
    LARGE_INTEGER DatabaseCreationTime;
    } 	POLICY_MODIFICATION_INFO;

typedef struct _POLICY_MODIFICATION_INFO *PPOLICY_MODIFICATION_INFO;

typedef struct _POLICY_AUDIT_FULL_SET_INFO
    {
    unsigned char ShutDownOnFull;
    } 	POLICY_AUDIT_FULL_SET_INFO;

typedef struct _POLICY_AUDIT_FULL_SET_INFO *PPOLICY_AUDIT_FULL_SET_INFO;

typedef struct _POLICY_AUDIT_FULL_QUERY_INFO
    {
    unsigned char ShutDownOnFull;
    unsigned char LogIsFull;
    } 	POLICY_AUDIT_FULL_QUERY_INFO;

typedef struct _POLICY_AUDIT_FULL_QUERY_INFO *PPOLICY_AUDIT_FULL_QUERY_INFO;

typedef 
enum _POLICY_DOMAIN_INFORMATION_CLASS
    {
        PolicyDomainQualityOfServiceInformation	= 1,
        PolicyDomainEfsInformation	= 2,
        PolicyDomainKerberosTicketInformation	= 3
    } 	POLICY_DOMAIN_INFORMATION_CLASS;

typedef enum _POLICY_DOMAIN_INFORMATION_CLASS *PPOLICY_DOMAIN_INFORMATION_CLASS;

typedef struct _POLICY_DOMAIN_KERBEROS_TICKET_INFO
    {
    unsigned long AuthenticationOptions;
    LARGE_INTEGER MaxServiceTicketAge;
    LARGE_INTEGER MaxTicketAge;
    LARGE_INTEGER MaxRenewAge;
    LARGE_INTEGER MaxClockSkew;
    LARGE_INTEGER Reserved;
    } 	POLICY_DOMAIN_KERBEROS_TICKET_INFO;

typedef struct _POLICY_DOMAIN_KERBEROS_TICKET_INFO *PPOLICY_DOMAIN_KERBEROS_TICKET_INFO;

typedef struct _TRUSTED_POSIX_OFFSET_INFO
    {
    unsigned long Offset;
    } 	TRUSTED_POSIX_OFFSET_INFO;

typedef struct _TRUSTED_POSIX_OFFSET_INFO *PTRUSTED_POSIX_OFFSET_INFO;

typedef 
enum _TRUSTED_INFORMATION_CLASS
    {
        TrustedDomainNameInformation	= 1,
        TrustedControllersInformation	= ( TrustedDomainNameInformation + 1 ) ,
        TrustedPosixOffsetInformation	= ( TrustedControllersInformation + 1 ) ,
        TrustedPasswordInformation	= ( TrustedPosixOffsetInformation + 1 ) ,
        TrustedDomainInformationBasic	= ( TrustedPasswordInformation + 1 ) ,
        TrustedDomainInformationEx	= ( TrustedDomainInformationBasic + 1 ) ,
        TrustedDomainAuthInformation	= ( TrustedDomainInformationEx + 1 ) ,
        TrustedDomainFullInformation	= ( TrustedDomainAuthInformation + 1 ) ,
        TrustedDomainAuthInformationInternal	= ( TrustedDomainFullInformation + 1 ) ,
        TrustedDomainFullInformationInternal	= ( TrustedDomainAuthInformationInternal + 1 ) ,
        TrustedDomainInformationEx2Internal	= ( TrustedDomainFullInformationInternal + 1 ) ,
        TrustedDomainFullInformation2Internal	= ( TrustedDomainInformationEx2Internal + 1 ) ,
        TrustedDomainSupportedEncryptionTypes	= ( TrustedDomainFullInformation2Internal + 1 ) 
    } 	TRUSTED_INFORMATION_CLASS;

typedef enum _TRUSTED_INFORMATION_CLASS *PTRUSTED_INFORMATION_CLASS;

typedef 
enum _LSA_FOREST_TRUST_RECORD_TYPE
    {
        ForestTrustTopLevelName	= 0,
        ForestTrustTopLevelNameEx	= 1,
        ForestTrustDomainInfo	= 2
    } 	LSA_FOREST_TRUST_RECORD_TYPE;

typedef struct _LSA_FOREST_TRUST_BINARY_DATA
    {
    /* [range] */ unsigned long Length;
    /* [size_is] */ unsigned char *Buffer;
    } 	LSA_FOREST_TRUST_BINARY_DATA;

typedef struct _LSA_FOREST_TRUST_BINARY_DATA *PLSA_FOREST_TRUST_BINARY_DATA;

typedef struct _LSA_FOREST_TRUST_DOMAIN_INFO
    {
    PRPC_SID Sid;
    LSA_UNICODE_STRING DnsName;
    LSA_UNICODE_STRING NetbiosName;
    } 	LSA_FOREST_TRUST_DOMAIN_INFO;

typedef struct _LSA_FOREST_TRUST_DOMAIN_INFO *PLSA_FOREST_TRUST_DOMAIN_INFO;

typedef struct _LSA_FOREST_TRUST_RECORD
    {
    unsigned long Flags;
    LSA_FOREST_TRUST_RECORD_TYPE ForestTrustType;
    LARGE_INTEGER Time;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ LSA_UNICODE_STRING TopLevelName;
        /* [case()] */ LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        /* [default] */ LSA_FOREST_TRUST_BINARY_DATA Data;
        } 	ForestTrustData;
    } 	LSA_FOREST_TRUST_RECORD;

typedef struct _LSA_FOREST_TRUST_RECORD *PLSA_FOREST_TRUST_RECORD;

typedef struct _LSA_FOREST_TRUST_INFORMATION
    {
    /* [range] */ unsigned long RecordCount;
    /* [size_is] */ PLSA_FOREST_TRUST_RECORD *Entries;
    } 	LSA_FOREST_TRUST_INFORMATION;

typedef struct _LSA_FOREST_TRUST_INFORMATION *PLSA_FOREST_TRUST_INFORMATION;

typedef 
enum _LSA_FOREST_TRUST_COLLISION_RECORD_TYPE
    {
        CollisionTdo	= 0,
        CollisionXref	= ( CollisionTdo + 1 ) ,
        CollisionOther	= ( CollisionXref + 1 ) 
    } 	LSA_FOREST_TRUST_COLLISION_RECORD_TYPE;

typedef struct _LSA_FOREST_TRUST_COLLISION_RECORD
    {
    unsigned long Index;
    LSA_FOREST_TRUST_COLLISION_RECORD_TYPE Type;
    unsigned long Flags;
    LSA_UNICODE_STRING Name;
    } 	LSA_FOREST_TRUST_COLLISION_RECORD;

typedef struct _LSA_FOREST_TRUST_COLLISION_RECORD *PLSA_FOREST_TRUST_COLLISION_RECORD;

typedef struct _LSA_FOREST_TRUST_COLLISION_INFORMATION
    {
    unsigned long RecordCount;
    /* [size_is] */ PLSA_FOREST_TRUST_COLLISION_RECORD *Entries;
    } 	LSA_FOREST_TRUST_COLLISION_INFORMATION;

typedef struct _LSA_FOREST_TRUST_COLLISION_INFORMATION *PLSA_FOREST_TRUST_COLLISION_INFORMATION;

typedef LSAPR_HANDLE *PLSAPR_HANDLE;

typedef struct _LSAPR_ACCOUNT_INFORMATION
    {
    PRPC_SID Sid;
    } 	LSAPR_ACCOUNT_INFORMATION;

typedef struct _LSAPR_ACCOUNT_INFORMATION *PLSAPR_ACCOUNT_INFORMATION;

typedef struct _LSAPR_ACCOUNT_ENUM_BUFFER
    {
    unsigned long EntriesRead;
    /* [size_is] */ PLSAPR_ACCOUNT_INFORMATION Information;
    } 	LSAPR_ACCOUNT_ENUM_BUFFER;

typedef struct _LSAPR_ACCOUNT_ENUM_BUFFER *PLSAPR_ACCOUNT_ENUM_BUFFER;

typedef struct _LSAPR_SR_SECURITY_DESCRIPTOR
    {
    /* [range] */ unsigned long Length;
    /* [size_is] */ unsigned char *SecurityDescriptor;
    } 	LSAPR_SR_SECURITY_DESCRIPTOR;

typedef struct _LSAPR_SR_SECURITY_DESCRIPTOR *PLSAPR_SR_SECURITY_DESCRIPTOR;

typedef struct _LSAPR_LUID_AND_ATTRIBUTES
    {
    LUID Luid;
    unsigned long Attributes;
    } 	LSAPR_LUID_AND_ATTRIBUTES;

typedef struct _LSAPR_LUID_AND_ATTRIBUTES *PLSAPR_LUID_AND_ATTRIBUTES;

typedef struct _LSAPR_PRIVILEGE_SET
    {
    /* [range] */ unsigned long PrivilegeCount;
    unsigned long Control;
    /* [size_is] */ LSAPR_LUID_AND_ATTRIBUTES Privilege[ 1 ];
    } 	LSAPR_PRIVILEGE_SET;

typedef struct _LSAPR_PRIVILEGE_SET *PLSAPR_PRIVILEGE_SET;

typedef struct _LSAPR_POLICY_PRIVILEGE_DEF
    {
    RPC_UNICODE_STRING Name;
    LUID LocalValue;
    } 	LSAPR_POLICY_PRIVILEGE_DEF;

typedef struct _LSAPR_POLICY_PRIVILEGE_DEF *PLSAPR_POLICY_PRIVILEGE_DEF;

typedef struct _LSAPR_PRIVILEGE_ENUM_BUFFER
    {
    unsigned long Entries;
    /* [size_is] */ PLSAPR_POLICY_PRIVILEGE_DEF Privileges;
    } 	LSAPR_PRIVILEGE_ENUM_BUFFER;

typedef struct _LSAPR_PRIVILEGE_ENUM_BUFFER *PLSAPR_PRIVILEGE_ENUM_BUFFER;

typedef struct _LSAPR_CR_CIPHER_VALUE
    {
    /* [range] */ unsigned long Length;
    /* [range] */ unsigned long MaximumLength;
    /* [length_is][size_is] */ unsigned char *Buffer;
    } 	LSAPR_CR_CIPHER_VALUE;

typedef struct _LSAPR_CR_CIPHER_VALUE *PLSAPR_CR_CIPHER_VALUE;

typedef struct _LSAPR_TRUSTED_ENUM_BUFFER
    {
    unsigned long EntriesRead;
    /* [size_is] */ PLSAPR_TRUST_INFORMATION Information;
    } 	LSAPR_TRUSTED_ENUM_BUFFER;

typedef struct _LSAPR_TRUSTED_ENUM_BUFFER *PLSAPR_TRUSTED_ENUM_BUFFER;

typedef struct _LSAPR_POLICY_ACCOUNT_DOM_INFO
    {
    RPC_UNICODE_STRING DomainName;
    PRPC_SID DomainSid;
    } 	LSAPR_POLICY_ACCOUNT_DOM_INFO;

typedef struct _LSAPR_POLICY_ACCOUNT_DOM_INFO *PLSAPR_POLICY_ACCOUNT_DOM_INFO;

typedef struct _LSAPR_POLICY_PRIMARY_DOM_INFO
    {
    RPC_UNICODE_STRING Name;
    PRPC_SID Sid;
    } 	LSAPR_POLICY_PRIMARY_DOM_INFO;

typedef struct _LSAPR_POLICY_PRIMARY_DOM_INFO *PLSAPR_POLICY_PRIMARY_DOM_INFO;

typedef struct _LSAPR_POLICY_DNS_DOMAIN_INFO
    {
    RPC_UNICODE_STRING Name;
    RPC_UNICODE_STRING DnsDomainName;
    RPC_UNICODE_STRING DnsForestName;
    GUID DomainGuid;
    PRPC_SID Sid;
    } 	LSAPR_POLICY_DNS_DOMAIN_INFO;

typedef struct _LSAPR_POLICY_DNS_DOMAIN_INFO *PLSAPR_POLICY_DNS_DOMAIN_INFO;

typedef struct _LSAPR_POLICY_PD_ACCOUNT_INFO
    {
    RPC_UNICODE_STRING Name;
    } 	LSAPR_POLICY_PD_ACCOUNT_INFO;

typedef struct _LSAPR_POLICY_PD_ACCOUNT_INFO *PLSAPR_POLICY_PD_ACCOUNT_INFO;

typedef struct _LSAPR_POLICY_REPLICA_SRCE_INFO
    {
    RPC_UNICODE_STRING ReplicaSource;
    RPC_UNICODE_STRING ReplicaAccountName;
    } 	LSAPR_POLICY_REPLICA_SRCE_INFO;

typedef struct _LSAPR_POLICY_REPLICA_SRCE_INFO *PLSAPR_POLICY_REPLICA_SRCE_INFO;

typedef struct _LSAPR_POLICY_AUDIT_EVENTS_INFO
    {
    unsigned char AuditingMode;
    /* [size_is] */ unsigned long *EventAuditingOptions;
    /* [range] */ unsigned long MaximumAuditEventCount;
    } 	LSAPR_POLICY_AUDIT_EVENTS_INFO;

typedef struct _LSAPR_POLICY_AUDIT_EVENTS_INFO *PLSAPR_POLICY_AUDIT_EVENTS_INFO;

typedef struct _LSAPR_POLICY_MACHINE_ACCT_INFO
    {
    unsigned long Rid;
    PRPC_SID Sid;
    } 	LSAPR_POLICY_MACHINE_ACCT_INFO;

typedef struct _LSAPR_POLICY_MACHINE_ACCT_INFO *PLSAPR_POLICY_MACHINE_ACCT_INFO;

typedef /* [switch_type] */ union _LSAPR_POLICY_INFORMATION
    {
    /* [case()] */ POLICY_AUDIT_LOG_INFO PolicyAuditLogInfo;
    /* [case()] */ LSAPR_POLICY_AUDIT_EVENTS_INFO PolicyAuditEventsInfo;
    /* [case()] */ LSAPR_POLICY_PRIMARY_DOM_INFO PolicyPrimaryDomainInfo;
    /* [case()] */ LSAPR_POLICY_ACCOUNT_DOM_INFO PolicyAccountDomainInfo;
    /* [case()] */ LSAPR_POLICY_PD_ACCOUNT_INFO PolicyPdAccountInfo;
    /* [case()] */ POLICY_LSA_SERVER_ROLE_INFO PolicyServerRoleInfo;
    /* [case()] */ LSAPR_POLICY_REPLICA_SRCE_INFO PolicyReplicaSourceInfo;
    /* [case()] */ POLICY_MODIFICATION_INFO PolicyModificationInfo;
    /* [case()] */ POLICY_AUDIT_FULL_SET_INFO PolicyAuditFullSetInfo;
    /* [case()] */ POLICY_AUDIT_FULL_QUERY_INFO PolicyAuditFullQueryInfo;
    /* [case()] */ LSAPR_POLICY_DNS_DOMAIN_INFO PolicyDnsDomainInfo;
    /* [case()] */ LSAPR_POLICY_DNS_DOMAIN_INFO PolicyDnsDomainInfoInt;
    /* [case()] */ LSAPR_POLICY_ACCOUNT_DOM_INFO PolicyLocalAccountDomainInfo;
    /* [case()] */ LSAPR_POLICY_MACHINE_ACCT_INFO PolicyMachineAccountInfo;
    } 	LSAPR_POLICY_INFORMATION;

typedef /* [switch_type] */ union _LSAPR_POLICY_INFORMATION *PLSAPR_POLICY_INFORMATION;

typedef struct _POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO
    {
    unsigned long QualityOfService;
    } 	POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO;

typedef struct _POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO *PPOLICY_DOMAIN_QUALITY_OF_SERVICE_INFO;

typedef struct _LSAPR_POLICY_DOMAIN_EFS_INFO
    {
    unsigned long InfoLength;
    /* [size_is] */ unsigned char *EfsBlob;
    } 	LSAPR_POLICY_DOMAIN_EFS_INFO;

typedef struct _LSAPR_POLICY_DOMAIN_EFS_INFO *PLSAPR_POLICY_DOMAIN_EFS_INFO;

typedef /* [switch_type] */ union _LSAPR_POLICY_DOMAIN_INFORMATION
    {
    /* [case()] */ POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO PolicyDomainQualityOfServiceInfo;
    /* [case()] */ LSAPR_POLICY_DOMAIN_EFS_INFO PolicyDomainEfsInfo;
    /* [case()] */ POLICY_DOMAIN_KERBEROS_TICKET_INFO PolicyDomainKerbTicketInfo;
    } 	LSAPR_POLICY_DOMAIN_INFORMATION;

typedef /* [switch_type] */ union _LSAPR_POLICY_DOMAIN_INFORMATION *PLSAPR_POLICY_DOMAIN_INFORMATION;

typedef struct _LSAPR_TRUSTED_DOMAIN_NAME_INFO
    {
    RPC_UNICODE_STRING Name;
    } 	LSAPR_TRUSTED_DOMAIN_NAME_INFO;

typedef struct _LSAPR_TRUSTED_DOMAIN_NAME_INFO *PLSAPR_TRUSTED_DOMAIN_NAME_INFO;

typedef struct _LSAPR_TRUSTED_CONTROLLERS_INFO
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PRPC_UNICODE_STRING Names;
    } 	LSAPR_TRUSTED_CONTROLLERS_INFO;

typedef struct _LSAPR_TRUSTED_CONTROLLERS_INFO *PLSAPR_TRUSTED_CONTROLLERS_INFO;

typedef struct _LSAPR_TRUSTED_PASSWORD_INFO
    {
    PLSAPR_CR_CIPHER_VALUE Password;
    PLSAPR_CR_CIPHER_VALUE OldPassword;
    } 	LSAPR_TRUSTED_PASSWORD_INFO;

typedef struct _LSAPR_TRUSTED_PASSWORD_INFO *PLSAPR_TRUSTED_PASSWORD_INFO;

typedef struct _LSAPR_TRUSTED_DOMAIN_INFORMATION_EX
    {
    RPC_UNICODE_STRING Name;
    RPC_UNICODE_STRING FlatName;
    PRPC_SID Sid;
    unsigned long TrustDirection;
    unsigned long TrustType;
    unsigned long TrustAttributes;
    } 	LSAPR_TRUSTED_DOMAIN_INFORMATION_EX;

typedef struct _LSAPR_TRUSTED_DOMAIN_INFORMATION_EX *PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX;

typedef struct _LSAPR_AUTH_INFORMATION
    {
    LARGE_INTEGER LastUpdateTime;
    unsigned long AuthType;
    /* [range] */ unsigned long AuthInfoLength;
    /* [size_is] */ unsigned char *AuthInfo;
    } 	LSAPR_AUTH_INFORMATION;

typedef struct _LSAPR_AUTH_INFORMATION *PLSAPR_AUTH_INFORMATION;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES
    {
    UCHAR AuthData[ 64 ];
    UCHAR Salt[ 16 ];
    /* [range] */ ULONG cbCipher;
    /* [size_is] */ PUCHAR Cipher;
    } 	LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES *PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION
    {
    /* [range] */ unsigned long IncomingAuthInfos;
    PLSAPR_AUTH_INFORMATION IncomingAuthenticationInformation;
    PLSAPR_AUTH_INFORMATION IncomingPreviousAuthenticationInformation;
    /* [range] */ unsigned long OutgoingAuthInfos;
    PLSAPR_AUTH_INFORMATION OutgoingAuthenticationInformation;
    PLSAPR_AUTH_INFORMATION OutgoingPreviousAuthenticationInformation;
    } 	LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION *PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION
    {
    LSAPR_TRUSTED_DOMAIN_INFORMATION_EX Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
    } 	LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION *PLSAPR_TRUSTED_DOMAIN_FULL_INFORMATION;

typedef LSAPR_TRUST_INFORMATION LSAPR_TRUSTED_DOMAIN_INFORMATION_BASIC;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_BLOB
    {
    /* [range] */ unsigned long AuthSize;
    /* [size_is] */ unsigned char *AuthBlob;
    } 	LSAPR_TRUSTED_DOMAIN_AUTH_BLOB;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_BLOB *PLSAPR_TRUSTED_DOMAIN_AUTH_BLOB;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL
    {
    LSAPR_TRUSTED_DOMAIN_AUTH_BLOB AuthBlob;
    } 	LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL;

typedef struct _LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL *PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION_INTERNAL
    {
    LSAPR_TRUSTED_DOMAIN_INFORMATION_EX Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL AuthInformation;
    } 	LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION_INTERNAL;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION_INTERNAL *PLSAPR_TRUSTED_DOMAIN_FULL_INFORMATION_INTERNAL;

typedef struct _LSAPR_TRUSTED_DOMAIN_INFORMATION_EX2
    {
    RPC_UNICODE_STRING Name;
    RPC_UNICODE_STRING FlatName;
    PRPC_SID Sid;
    unsigned long TrustDirection;
    unsigned long TrustType;
    unsigned long TrustAttributes;
    unsigned long ForestTrustLength;
    /* [size_is] */ unsigned char *ForestTrustInfo;
    } 	LSAPR_TRUSTED_DOMAIN_INFORMATION_EX2;

typedef struct _LSAPR_TRUSTED_DOMAIN_INFORMATION_EX2 *PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX2;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION2
    {
    LSAPR_TRUSTED_DOMAIN_INFORMATION_EX2 Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
    } 	LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION2;

typedef struct _LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION2 *PLSAPR_TRUSTED_DOMAIN_FULL_INFORMATION2;

typedef struct _TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES
    {
    unsigned long SupportedEncryptionTypes;
    } 	TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES;

typedef struct _TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES *PTRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES;

typedef /* [switch_type] */ union _LSAPR_TRUSTED_DOMAIN_INFO
    {
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_NAME_INFO TrustedDomainNameInfo;
    /* [case()] */ LSAPR_TRUSTED_CONTROLLERS_INFO TrustedControllersInfo;
    /* [case()] */ TRUSTED_POSIX_OFFSET_INFO TrustedPosixOffsetInfo;
    /* [case()] */ LSAPR_TRUSTED_PASSWORD_INFO TrustedPasswordInfo;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_INFORMATION_BASIC TrustedDomainInfoBasic;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInfoEx;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION TrustedAuthInfo;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION TrustedFullInfo;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL TrustedAuthInfoInternal;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION_INTERNAL TrustedFullInfoInternal;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_INFORMATION_EX2 TrustedDomainInfoEx2;
    /* [case()] */ LSAPR_TRUSTED_DOMAIN_FULL_INFORMATION2 TrustedFullInfo2;
    /* [case()] */ TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES TrustedDomainSETs;
    } 	LSAPR_TRUSTED_DOMAIN_INFO;

typedef /* [switch_type] */ union _LSAPR_TRUSTED_DOMAIN_INFO *PLSAPR_TRUSTED_DOMAIN_INFO;

typedef struct _LSAPR_USER_RIGHT_SET
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PRPC_UNICODE_STRING UserRights;
    } 	LSAPR_USER_RIGHT_SET;

typedef struct _LSAPR_USER_RIGHT_SET *PLSAPR_USER_RIGHT_SET;

typedef struct _LSAPR_TRUSTED_ENUM_BUFFER_EX
    {
    unsigned long EntriesRead;
    /* [size_is] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX EnumerationBuffer;
    } 	LSAPR_TRUSTED_ENUM_BUFFER_EX;

typedef struct _LSAPR_TRUSTED_ENUM_BUFFER_EX *PLSAPR_TRUSTED_ENUM_BUFFER_EX;

typedef struct _LSAPR_REFERENCED_DOMAIN_LIST
    {
    unsigned long Entries;
    /* [size_is] */ PLSAPR_TRUST_INFORMATION Domains;
    unsigned long MaxEntries;
    } 	LSAPR_REFERENCED_DOMAIN_LIST;

typedef struct _LSAPR_REFERENCED_DOMAIN_LIST *PLSAPR_REFERENCED_DOMAIN_LIST;

typedef enum _SID_NAME_USE *PSID_NAME_USE;

typedef struct _LSA_TRANSLATED_SID
    {
    SID_NAME_USE Use;
    unsigned long RelativeId;
    long DomainIndex;
    } 	LSA_TRANSLATED_SID;

typedef struct _LSA_TRANSLATED_SID *PLSA_TRANSLATED_SID;

typedef struct _LSAPR_TRANSLATED_SIDS
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSA_TRANSLATED_SID Sids;
    } 	LSAPR_TRANSLATED_SIDS;

typedef struct _LSAPR_TRANSLATED_SIDS *PLSAPR_TRANSLATED_SIDS;

typedef 
enum _LSAP_LOOKUP_LEVEL
    {
        LsapLookupWksta	= 1,
        LsapLookupPDC	= ( LsapLookupWksta + 1 ) ,
        LsapLookupTDL	= ( LsapLookupPDC + 1 ) ,
        LsapLookupGC	= ( LsapLookupTDL + 1 ) ,
        LsapLookupXForestReferral	= ( LsapLookupGC + 1 ) ,
        LsapLookupXForestResolve	= ( LsapLookupXForestReferral + 1 ) ,
        LsapLookupRODCReferralToFullDC	= ( LsapLookupXForestResolve + 1 ) 
    } 	LSAP_LOOKUP_LEVEL;

typedef enum _LSAP_LOOKUP_LEVEL *PLSAP_LOOKUP_LEVEL;

typedef struct _LSAPR_SID_INFORMATION
    {
    PRPC_SID Sid;
    } 	LSAPR_SID_INFORMATION;

typedef struct _LSAPR_SID_INFORMATION *PLSAPR_SID_INFORMATION;

typedef struct _LSAPR_SID_ENUM_BUFFER
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSAPR_SID_INFORMATION SidInfo;
    } 	LSAPR_SID_ENUM_BUFFER;

typedef struct _LSAPR_SID_ENUM_BUFFER *PLSAPR_SID_ENUM_BUFFER;

typedef struct _LSAPR_TRANSLATED_NAME
    {
    SID_NAME_USE Use;
    RPC_UNICODE_STRING Name;
    long DomainIndex;
    } 	LSAPR_TRANSLATED_NAME;

typedef struct _LSAPR_TRANSLATED_NAME *PLSAPR_TRANSLATED_NAME;

typedef struct _LSAPR_TRANSLATED_NAMES
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSAPR_TRANSLATED_NAME Names;
    } 	LSAPR_TRANSLATED_NAMES;

typedef struct _LSAPR_TRANSLATED_NAMES *PLSAPR_TRANSLATED_NAMES;

typedef struct _LSAPR_TRANSLATED_NAME_EX
    {
    SID_NAME_USE Use;
    RPC_UNICODE_STRING Name;
    long DomainIndex;
    unsigned long Flags;
    } 	LSAPR_TRANSLATED_NAME_EX;

typedef struct _LSAPR_TRANSLATED_NAME_EX *PLSAPR_TRANSLATED_NAME_EX;

typedef struct _LSAPR_TRANSLATED_NAMES_EX
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSAPR_TRANSLATED_NAME_EX Names;
    } 	LSAPR_TRANSLATED_NAMES_EX;

typedef struct _LSAPR_TRANSLATED_NAMES_EX *PLSAPR_TRANSLATED_NAMES_EX;

typedef struct _LSAPR_TRANSLATED_SID_EX
    {
    SID_NAME_USE Use;
    unsigned long RelativeId;
    long DomainIndex;
    unsigned long Flags;
    } 	LSAPR_TRANSLATED_SID_EX;

typedef struct _LSAPR_TRANSLATED_SID_EX *PLSAPR_TRANSLATED_SID_EX;

typedef struct _LSAPR_TRANSLATED_SIDS_EX
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSAPR_TRANSLATED_SID_EX Sids;
    } 	LSAPR_TRANSLATED_SIDS_EX;

typedef struct _LSAPR_TRANSLATED_SIDS_EX *PLSAPR_TRANSLATED_SIDS_EX;

typedef struct _LSAPR_TRANSLATED_SID_EX2
    {
    SID_NAME_USE Use;
    PRPC_SID Sid;
    long DomainIndex;
    unsigned long Flags;
    } 	LSAPR_TRANSLATED_SID_EX2;

typedef struct _LSAPR_TRANSLATED_SID_EX2 *PLSAPR_TRANSLATED_SID_EX2;

typedef struct _LSAPR_TRANSLATED_SIDS_EX2
    {
    /* [range] */ unsigned long Entries;
    /* [size_is] */ PLSAPR_TRANSLATED_SID_EX2 Sids;
    } 	LSAPR_TRANSLATED_SIDS_EX2;

typedef struct _LSAPR_TRANSLATED_SIDS_EX2 *PLSAPR_TRANSLATED_SIDS_EX2;

NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle);

void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarEnumeratePrivileges( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength);

NTSTATUS LsarQuerySecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PLSAPR_SR_SECURITY_DESCRIPTOR *SecurityDescriptor);

NTSTATUS LsarSetSecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor);

void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle);

NTSTATUS LsarQueryInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation);

NTSTATUS LsarSetInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation);

void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarCreateAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *AccountHandle);

NTSTATUS LsarEnumerateAccounts( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength);

NTSTATUS LsarCreateTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUST_INFORMATION TrustedDomainInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

NTSTATUS LsarEnumerateTrustedDomains( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength);

NTSTATUS LsarLookupNames( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount);

NTSTATUS LsarLookupSids( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount);

NTSTATUS LsarCreateSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *SecretHandle);

NTSTATUS LsarOpenAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *AccountHandle);

NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET *Privileges);

NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges);

NTSTATUS LsarRemovePrivilegesFromAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned char AllPrivileges,
    /* [unique][in] */ PLSAPR_PRIVILEGE_SET Privileges);

void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ unsigned long *SystemAccess);

NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ unsigned long SystemAccess);

NTSTATUS LsarOpenTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

NTSTATUS LsarQueryInfoTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation);

NTSTATUS LsarSetInformationTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation);

NTSTATUS LsarOpenSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *SecretHandle);

NTSTATUS LsarSetSecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedOldValue);

NTSTATUS LsarQuerySecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedCurrentValue,
    /* [unique][out][in] */ PLARGE_INTEGER CurrentValueSetTime,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedOldValue,
    /* [unique][out][in] */ PLARGE_INTEGER OldValueSetTime);

NTSTATUS LsarLookupPrivilegeValue( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [out] */ PLUID Value);

NTSTATUS LsarLookupPrivilegeName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLUID Value,
    /* [out] */ PRPC_UNICODE_STRING *Name);

NTSTATUS LsarLookupPrivilegeDisplayName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING Name,
    /* [in] */ short ClientLanguage,
    /* [in] */ short ClientSystemDefaultLanguage,
    /* [out] */ PRPC_UNICODE_STRING *DisplayName,
    /* [out] */ unsigned short *LanguageReturned);

NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE *ObjectHandle);

NTSTATUS LsarEnumerateAccountsWithUserRight( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING UserRight,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer);

NTSTATUS LsarEnumerateAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [out] */ PLSAPR_USER_RIGHT_SET UserRights);

NTSTATUS LsarAddAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights);

NTSTATUS LsarRemoveAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID AccountSid,
    /* [in] */ unsigned char AllRights,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights);

NTSTATUS LsarQueryTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation);

NTSTATUS LsarSetTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation);

NTSTATUS LsarDeleteTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_SID TrustedDomainSid);

NTSTATUS LsarStorePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedData);

NTSTATUS LsarRetrievePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING KeyName,
    /* [out][in] */ PLSAPR_CR_CIPHER_VALUE *EncryptedData);

NTSTATUS LsarOpenPolicy2( 
    /* [string][unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle);

NTSTATUS LsarGetUserName( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *SystemName,
    /* [out][in] */ PRPC_UNICODE_STRING *UserName,
    /* [unique][out][in] */ PRPC_UNICODE_STRING *DomainName);

NTSTATUS LsarQueryInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION *PolicyInformation);

NTSTATUS LsarSetInformationPolicy2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation);

NTSTATUS LsarQueryTrustedDomainInfoByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO *TrustedDomainInformation);

NTSTATUS LsarSetTrustedDomainInfoByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation);

NTSTATUS LsarEnumerateTrustedDomainsEx( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ unsigned long *EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER_EX EnumerationBuffer,
    /* [in] */ unsigned long PreferedMaximumLength);

NTSTATUS LsarCreateTrustedDomainEx( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarQueryDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_DOMAIN_INFORMATION *PolicyDomainInformation);

NTSTATUS LsarSetDomainInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    /* [switch_is][unique][in] */ PLSAPR_POLICY_DOMAIN_INFORMATION PolicyDomainInformation);

NTSTATUS LsarOpenTrustedDomainByName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PRPC_UNICODE_STRING TrustedDomainName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

void Opnum56NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarLookupSids2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES_EX TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision);

NTSTATUS LsarLookupNames2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision);

NTSTATUS LsarCreateTrustedDomainEx2( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

void Opnum60NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum61NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum62NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum65NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum66NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum67NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarLookupNames3( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX2 TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision);

void Opnum69NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum70NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum71NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum72NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarQueryForestTrustInformation( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSA_UNICODE_STRING TrustedDomainName,
    /* [in] */ LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    /* [out] */ PLSA_FOREST_TRUST_INFORMATION *ForestTrustInfo);

NTSTATUS LsarSetForestTrustInformation( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSA_UNICODE_STRING TrustedDomainName,
    /* [in] */ LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    /* [in] */ PLSA_FOREST_TRUST_INFORMATION ForestTrustInfo,
    /* [in] */ unsigned char CheckOnly,
    /* [out] */ PLSA_FOREST_TRUST_COLLISION_INFORMATION *CollisionInfo);

void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarLookupSids3( 
    /* [in] */ handle_t RpcHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES_EX TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision);

NTSTATUS LsarLookupNames4( 
    /* [in] */ handle_t RpcHandle,
    /* [range][in] */ unsigned long Count,
    /* [size_is][in] */ PRPC_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS_EX2 TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ unsigned long *MappedCount,
    /* [in] */ unsigned long LookupOptions,
    /* [in] */ unsigned long ClientRevision);

void Opnum78NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum79NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum80NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum81NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum82NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum84NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum85NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum86NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum87NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum88NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum89NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum96NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum97NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum102NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum104NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum110NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum111NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum112NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum113NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum115NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum116NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum117NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum118NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum119NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum120NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum121NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum122NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum123NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum124NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum125NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum126NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum127NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum128NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarCreateTrustedDomainEx3( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    /* [in] */ PLSAPR_TRUSTED_DOMAIN_AUTH_INFORMATION_INTERNAL_AES AuthenticationInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *TrustedDomainHandle);

typedef /* [handle] */ LPWSTR PLSAPR_SERVER_NAME;

typedef /* [handle] */ LPWSTR *PPLSAPR_SERVER_NAME;

typedef struct _LSAPR_REVISION_INFO_V1
    {
    ULONG Revision;
    ULONG SupportedFeatures;
    } 	LSAPR_REVISION_INFO_V1;

typedef struct _LSAPR_REVISION_INFO_V1 *PLSAPR_REVISION_INFO_V1;

typedef /* [public][public][public][switch_type] */ union __MIDL_lsarpc_0002
    {
    /* [case()] */ LSAPR_REVISION_INFO_V1 V1;
    } 	LSAPR_REVISION_INFO;

typedef /* [switch_type] */ union __MIDL_lsarpc_0002 *PLSAPR_REVISION_INFO;

NTSTATUS LsarOpenPolicy3( 
    /* [string][unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [in] */ ULONG InVersion,
    /* [switch_is][in] */ LSAPR_REVISION_INFO *InRevisionInfo,
    /* [out] */ ULONG *OutVersion,
    /* [switch_is][out] */ LSAPR_REVISION_INFO *OutRevisionInfo,
    /* [out] */ LSAPR_HANDLE *PolicyHandle);



extern RPC_IF_HANDLE lsarpc_v0_0_c_ifspec;
extern RPC_IF_HANDLE lsarpc_v0_0_s_ifspec;
#endif /* __lsarpc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER PLSAPR_SERVER_NAME_bind ( PLSAPR_SERVER_NAME );
void     __RPC_USER PLSAPR_SERVER_NAME_unbind( PLSAPR_SERVER_NAME,  handle_t );

void __RPC_USER LSAPR_HANDLE_rundown( LSAPR_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


