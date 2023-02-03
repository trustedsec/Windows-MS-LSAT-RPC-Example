

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


#ifndef __ms2Dlsat_win32_h__
#define __ms2Dlsat_win32_h__

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

typedef struct RPC_STRING
    {
    unsigned short Length;
    unsigned short MaximumLength;
    /* [length_is][size_is] */ unsigned char *Buffer;
    } 	RPC_STRING;

typedef struct RPC_STRING *PRPC_STRING;

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

typedef struct _LSAPR_OBJECT_ATTRIBUTES
    {
    unsigned long Length;
    unsigned char *RootDirectory;
    PRPC_STRING ObjectName;
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

typedef struct _LSAPR_REFERENCED_DOMAIN_LIST
    {
    unsigned long Entries;
    /* [size_is] */ PLSAPR_TRUST_INFORMATION Domains;
    unsigned long MaxEntries;
    } 	LSAPR_REFERENCED_DOMAIN_LIST;

typedef struct _LSAPR_REFERENCED_DOMAIN_LIST *PLSAPR_REFERENCED_DOMAIN_LIST;

typedef enum _SID_NAME_USE *PSID_NAME_USE;

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

void Lsar_LSA_DP_2( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_3( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_4( 
    /* [in] */ handle_t IDL_handle);

void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ wchar_t *SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE *PolicyHandle);

void Lsar_LSA_DP_7( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_8( 
    /* [in] */ handle_t IDL_handle);

void Opnum9NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_10( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_11( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_12( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_13( 
    /* [in] */ handle_t IDL_handle);

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

void Lsar_LSA_DP_16( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_17( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_18( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_19( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_20( 
    /* [in] */ handle_t IDL_handle);

void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum22NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_23( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_24( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_25( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_26( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_27( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_28( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_29( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_30( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_31( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_32( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_33( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_34( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_35( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_36( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_37( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_38( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_39( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_40( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_41( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_42( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_43( 
    /* [in] */ handle_t IDL_handle);

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

void Lsar_LSA_DP_46( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_47( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_48( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_49( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_50( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_51( 
    /* [in] */ handle_t IDL_handle);

void Opnum52NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_53( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_54( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_55( 
    /* [in] */ handle_t IDL_handle);

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

void Lsar_LSA_DP_59( 
    /* [in] */ handle_t IDL_handle);

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

void Lsar_LSA_DP_73( 
    /* [in] */ handle_t IDL_handle);

void Lsar_LSA_DP_74( 
    /* [in] */ handle_t IDL_handle);

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



extern RPC_IF_HANDLE lsarpc_v0_0_c_ifspec;
extern RPC_IF_HANDLE lsarpc_v0_0_s_ifspec;
#endif /* __lsarpc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER LSAPR_HANDLE_rundown( LSAPR_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


