

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\cvScanner.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __cvScanner_i_h__
#define __cvScanner_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICVScanner_FWD_DEFINED__
#define __ICVScanner_FWD_DEFINED__
typedef interface ICVScanner ICVScanner;

#endif 	/* __ICVScanner_FWD_DEFINED__ */


#ifndef __CursiVisionScannerSupport_FWD_DEFINED__
#define __CursiVisionScannerSupport_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionScannerSupport CursiVisionScannerSupport;
#else
typedef struct CursiVisionScannerSupport CursiVisionScannerSupport;
#endif /* __cplusplus */

#endif 	/* __CursiVisionScannerSupport_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionScannerSupport_LIBRARY_DEFINED__
#define __CursiVisionScannerSupport_LIBRARY_DEFINED__

/* library CursiVisionScannerSupport */
/* [uuid] */ 


EXTERN_C const IID LIBID_CursiVisionScannerSupport;

#ifndef __ICVScanner_INTERFACE_DEFINED__
#define __ICVScanner_INTERFACE_DEFINED__

/* interface ICVScanner */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICVScanner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("89A81B9A-515F-49FD-9277-A532899551C1")
    ICVScanner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsOnline( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsOffline( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterComputer( 
            char *szContactInfoString,
            char *szRegisteredProduct,
            char *szRegisteredVersion,
            char *pszID,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateRegistration( 
            char *szRegId,
            char *szDate,
            char *szVersion) = 0;
        
        virtual long STDMETHODCALLTYPE MachineIDFromRegistration( 
            char *szContactInfoString) = 0;
        
        virtual long STDMETHODCALLTYPE MachineID( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegistrationRecord( 
            char *pszContactInfo,
            char *pszRegRecord,
            long cbBuffer,
            /* [optional] */ long machineID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegistrationInfoFromContactInfo( 
            char *pszContactInfo,
            char *pszID,
            char *pszVersion,
            char *pszRegDate,
            char *pszAuthorizedBundles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterComputer( 
            char *pszContactInfoString,
            char *pszRegisteredVersion,
            char *pszRegistrationDate,
            char *pszRegistrationID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterUser( 
            char *pszRegistrationId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BumpAmounts( 
            char *pszGuid,
            char *pszProfile,
            long documentsSigned,
            long signaturesApplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetails( 
            char *pszDocumentName,
            char *pszReturnValue,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ListFiles( 
            char *pszBucket,
            char *pszKey,
            SAFEARRAY **ppResult,
            boolean descendFolders,
            boolean includeFolderNames,
            boolean includeRootFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegistrations( 
            SAFEARRAY **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegistrationsPendingApproval( 
            SAFEARRAY **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFile( 
            char *pszBucket,
            char *pszKey,
            char *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutFile( 
            char *pszBucket,
            char *pszKey,
            char *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDB( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ArchiveDB( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateDB( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryDB( 
            char *pszSQL,
            char *pszTargetFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStorage( 
            char *pszSourceFolder,
            char *pszDestinationFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreStorage( 
            char *pszStorageFile,
            char *psztargetFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBundleNames( 
            SAFEARRAY **ppBundleNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLatestSettings( 
            char *pszBundleName,
            SAFEARRAY **ppSettingsFolder,
            SAFEARRAY **ppSettingsFiles,
            SAFEARRAY **ppDates,
            boolean includeRootFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLatestSettingsInFolder( 
            char *pszBundleName,
            SAFEARRAY **ppSettingsFiles,
            SAFEARRAY **ppDates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUpdates( 
            char *pszBundleName,
            SAFEARRAY **ppAvailableUpdates,
            boolean forceUpdates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLatestVersion( 
            char *pszRootName,
            char *pszVersionValue,
            char *pszVersionFile,
            DWORD dwVersionValueSize,
            DWORD dwVersionFileSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateSettings( 
            char *pszBundleName,
            char *pszPlatform,
            char *pszConfiguration,
            SAFEARRAY *pPreTerminedUpdates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AutoUpdateSettings( 
            char *pszBundleName,
            char *pszPlatform,
            char *pszConfiguration,
            SAFEARRAY *pPreDeterminedUpdates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AuthorizePackage( 
            char *pszProfileName,
            char *pszRegID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnauthorizePackage( 
            char *pszProfileName,
            char *pszRegID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetKoyaanisqatsi( 
            char *pszManagerIds,
            long registrationGraceDays,
            char *pszSettingManagerID,
            char *pszVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKoyaanisqatsi( 
            char *pszManagerIds,
            long *pCBManagerIds,
            long *pRegistrationGraceDays,
            char *pszSettingManagerID,
            char *pszVersion) = 0;
        
        virtual char *STDMETHODCALLTYPE SettingsBucketName( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICVScannerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICVScanner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, IsOnline)
        HRESULT ( STDMETHODCALLTYPE *IsOnline )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, IsOffline)
        HRESULT ( STDMETHODCALLTYPE *IsOffline )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, RegisterComputer)
        HRESULT ( STDMETHODCALLTYPE *RegisterComputer )( 
            ICVScanner * This,
            char *szContactInfoString,
            char *szRegisteredProduct,
            char *szRegisteredVersion,
            char *pszID,
            long cbBuffer);
        
        DECLSPEC_XFGVIRT(ICVScanner, UpdateRegistration)
        HRESULT ( STDMETHODCALLTYPE *UpdateRegistration )( 
            ICVScanner * This,
            char *szRegId,
            char *szDate,
            char *szVersion);
        
        DECLSPEC_XFGVIRT(ICVScanner, MachineIDFromRegistration)
        long ( STDMETHODCALLTYPE *MachineIDFromRegistration )( 
            ICVScanner * This,
            char *szContactInfoString);
        
        DECLSPEC_XFGVIRT(ICVScanner, MachineID)
        long ( STDMETHODCALLTYPE *MachineID )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetRegistrationRecord)
        HRESULT ( STDMETHODCALLTYPE *GetRegistrationRecord )( 
            ICVScanner * This,
            char *pszContactInfo,
            char *pszRegRecord,
            long cbBuffer,
            /* [optional] */ long machineID);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetRegistrationInfoFromContactInfo)
        HRESULT ( STDMETHODCALLTYPE *GetRegistrationInfoFromContactInfo )( 
            ICVScanner * This,
            char *pszContactInfo,
            char *pszID,
            char *pszVersion,
            char *pszRegDate,
            char *pszAuthorizedBundles);
        
        DECLSPEC_XFGVIRT(ICVScanner, UnregisterComputer)
        HRESULT ( STDMETHODCALLTYPE *UnregisterComputer )( 
            ICVScanner * This,
            char *pszContactInfoString,
            char *pszRegisteredVersion,
            char *pszRegistrationDate,
            char *pszRegistrationID);
        
        DECLSPEC_XFGVIRT(ICVScanner, UnregisterUser)
        HRESULT ( STDMETHODCALLTYPE *UnregisterUser )( 
            ICVScanner * This,
            char *pszRegistrationId);
        
        DECLSPEC_XFGVIRT(ICVScanner, BumpAmounts)
        HRESULT ( STDMETHODCALLTYPE *BumpAmounts )( 
            ICVScanner * This,
            char *pszGuid,
            char *pszProfile,
            long documentsSigned,
            long signaturesApplied);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetDetails)
        HRESULT ( STDMETHODCALLTYPE *GetDetails )( 
            ICVScanner * This,
            char *pszDocumentName,
            char *pszReturnValue,
            long cbBuffer);
        
        DECLSPEC_XFGVIRT(ICVScanner, ListFiles)
        HRESULT ( STDMETHODCALLTYPE *ListFiles )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            SAFEARRAY **ppResult,
            boolean descendFolders,
            boolean includeFolderNames,
            boolean includeRootFiles);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetRegistrations)
        HRESULT ( STDMETHODCALLTYPE *GetRegistrations )( 
            ICVScanner * This,
            SAFEARRAY **ppResult);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetRegistrationsPendingApproval)
        HRESULT ( STDMETHODCALLTYPE *GetRegistrationsPendingApproval )( 
            ICVScanner * This,
            SAFEARRAY **ppResult);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetFile)
        HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            char *pszFileName);
        
        DECLSPEC_XFGVIRT(ICVScanner, PutFile)
        HRESULT ( STDMETHODCALLTYPE *PutFile )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            char *pszFileName);
        
        DECLSPEC_XFGVIRT(ICVScanner, ResetDB)
        HRESULT ( STDMETHODCALLTYPE *ResetDB )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, ArchiveDB)
        HRESULT ( STDMETHODCALLTYPE *ArchiveDB )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, UpdateDB)
        HRESULT ( STDMETHODCALLTYPE *UpdateDB )( 
            ICVScanner * This);
        
        DECLSPEC_XFGVIRT(ICVScanner, QueryDB)
        HRESULT ( STDMETHODCALLTYPE *QueryDB )( 
            ICVScanner * This,
            char *pszSQL,
            char *pszTargetFileName);
        
        DECLSPEC_XFGVIRT(ICVScanner, CreateStorage)
        HRESULT ( STDMETHODCALLTYPE *CreateStorage )( 
            ICVScanner * This,
            char *pszSourceFolder,
            char *pszDestinationFile);
        
        DECLSPEC_XFGVIRT(ICVScanner, RestoreStorage)
        HRESULT ( STDMETHODCALLTYPE *RestoreStorage )( 
            ICVScanner * This,
            char *pszStorageFile,
            char *psztargetFolder);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetBundleNames)
        HRESULT ( STDMETHODCALLTYPE *GetBundleNames )( 
            ICVScanner * This,
            SAFEARRAY **ppBundleNames);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetLatestSettings)
        HRESULT ( STDMETHODCALLTYPE *GetLatestSettings )( 
            ICVScanner * This,
            char *pszBundleName,
            SAFEARRAY **ppSettingsFolder,
            SAFEARRAY **ppSettingsFiles,
            SAFEARRAY **ppDates,
            boolean includeRootFiles);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetLatestSettingsInFolder)
        HRESULT ( STDMETHODCALLTYPE *GetLatestSettingsInFolder )( 
            ICVScanner * This,
            char *pszBundleName,
            SAFEARRAY **ppSettingsFiles,
            SAFEARRAY **ppDates);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetUpdates)
        HRESULT ( STDMETHODCALLTYPE *GetUpdates )( 
            ICVScanner * This,
            char *pszBundleName,
            SAFEARRAY **ppAvailableUpdates,
            boolean forceUpdates);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetLatestVersion)
        HRESULT ( STDMETHODCALLTYPE *GetLatestVersion )( 
            ICVScanner * This,
            char *pszRootName,
            char *pszVersionValue,
            char *pszVersionFile,
            DWORD dwVersionValueSize,
            DWORD dwVersionFileSize);
        
        DECLSPEC_XFGVIRT(ICVScanner, UpdateSettings)
        HRESULT ( STDMETHODCALLTYPE *UpdateSettings )( 
            ICVScanner * This,
            char *pszBundleName,
            char *pszPlatform,
            char *pszConfiguration,
            SAFEARRAY *pPreTerminedUpdates);
        
        DECLSPEC_XFGVIRT(ICVScanner, AutoUpdateSettings)
        HRESULT ( STDMETHODCALLTYPE *AutoUpdateSettings )( 
            ICVScanner * This,
            char *pszBundleName,
            char *pszPlatform,
            char *pszConfiguration,
            SAFEARRAY *pPreDeterminedUpdates);
        
        DECLSPEC_XFGVIRT(ICVScanner, AuthorizePackage)
        HRESULT ( STDMETHODCALLTYPE *AuthorizePackage )( 
            ICVScanner * This,
            char *pszProfileName,
            char *pszRegID);
        
        DECLSPEC_XFGVIRT(ICVScanner, UnauthorizePackage)
        HRESULT ( STDMETHODCALLTYPE *UnauthorizePackage )( 
            ICVScanner * This,
            char *pszProfileName,
            char *pszRegID);
        
        DECLSPEC_XFGVIRT(ICVScanner, SetKoyaanisqatsi)
        HRESULT ( STDMETHODCALLTYPE *SetKoyaanisqatsi )( 
            ICVScanner * This,
            char *pszManagerIds,
            long registrationGraceDays,
            char *pszSettingManagerID,
            char *pszVersion);
        
        DECLSPEC_XFGVIRT(ICVScanner, GetKoyaanisqatsi)
        HRESULT ( STDMETHODCALLTYPE *GetKoyaanisqatsi )( 
            ICVScanner * This,
            char *pszManagerIds,
            long *pCBManagerIds,
            long *pRegistrationGraceDays,
            char *pszSettingManagerID,
            char *pszVersion);
        
        DECLSPEC_XFGVIRT(ICVScanner, SettingsBucketName)
        char *( STDMETHODCALLTYPE *SettingsBucketName )( 
            ICVScanner * This);
        
        END_INTERFACE
    } ICVScannerVtbl;

    interface ICVScanner
    {
        CONST_VTBL struct ICVScannerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICVScanner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICVScanner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICVScanner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICVScanner_IsOnline(This)	\
    ( (This)->lpVtbl -> IsOnline(This) ) 

#define ICVScanner_IsOffline(This)	\
    ( (This)->lpVtbl -> IsOffline(This) ) 

#define ICVScanner_RegisterComputer(This,szContactInfoString,szRegisteredProduct,szRegisteredVersion,pszID,cbBuffer)	\
    ( (This)->lpVtbl -> RegisterComputer(This,szContactInfoString,szRegisteredProduct,szRegisteredVersion,pszID,cbBuffer) ) 

#define ICVScanner_UpdateRegistration(This,szRegId,szDate,szVersion)	\
    ( (This)->lpVtbl -> UpdateRegistration(This,szRegId,szDate,szVersion) ) 

#define ICVScanner_MachineIDFromRegistration(This,szContactInfoString)	\
    ( (This)->lpVtbl -> MachineIDFromRegistration(This,szContactInfoString) ) 

#define ICVScanner_MachineID(This)	\
    ( (This)->lpVtbl -> MachineID(This) ) 

#define ICVScanner_GetRegistrationRecord(This,pszContactInfo,pszRegRecord,cbBuffer,machineID)	\
    ( (This)->lpVtbl -> GetRegistrationRecord(This,pszContactInfo,pszRegRecord,cbBuffer,machineID) ) 

#define ICVScanner_GetRegistrationInfoFromContactInfo(This,pszContactInfo,pszID,pszVersion,pszRegDate,pszAuthorizedBundles)	\
    ( (This)->lpVtbl -> GetRegistrationInfoFromContactInfo(This,pszContactInfo,pszID,pszVersion,pszRegDate,pszAuthorizedBundles) ) 

#define ICVScanner_UnregisterComputer(This,pszContactInfoString,pszRegisteredVersion,pszRegistrationDate,pszRegistrationID)	\
    ( (This)->lpVtbl -> UnregisterComputer(This,pszContactInfoString,pszRegisteredVersion,pszRegistrationDate,pszRegistrationID) ) 

#define ICVScanner_UnregisterUser(This,pszRegistrationId)	\
    ( (This)->lpVtbl -> UnregisterUser(This,pszRegistrationId) ) 

#define ICVScanner_BumpAmounts(This,pszGuid,pszProfile,documentsSigned,signaturesApplied)	\
    ( (This)->lpVtbl -> BumpAmounts(This,pszGuid,pszProfile,documentsSigned,signaturesApplied) ) 

#define ICVScanner_GetDetails(This,pszDocumentName,pszReturnValue,cbBuffer)	\
    ( (This)->lpVtbl -> GetDetails(This,pszDocumentName,pszReturnValue,cbBuffer) ) 

#define ICVScanner_ListFiles(This,pszBucket,pszKey,ppResult,descendFolders,includeFolderNames,includeRootFiles)	\
    ( (This)->lpVtbl -> ListFiles(This,pszBucket,pszKey,ppResult,descendFolders,includeFolderNames,includeRootFiles) ) 

#define ICVScanner_GetRegistrations(This,ppResult)	\
    ( (This)->lpVtbl -> GetRegistrations(This,ppResult) ) 

#define ICVScanner_GetRegistrationsPendingApproval(This,ppResult)	\
    ( (This)->lpVtbl -> GetRegistrationsPendingApproval(This,ppResult) ) 

#define ICVScanner_GetFile(This,pszBucket,pszKey,pszFileName)	\
    ( (This)->lpVtbl -> GetFile(This,pszBucket,pszKey,pszFileName) ) 

#define ICVScanner_PutFile(This,pszBucket,pszKey,pszFileName)	\
    ( (This)->lpVtbl -> PutFile(This,pszBucket,pszKey,pszFileName) ) 

#define ICVScanner_ResetDB(This)	\
    ( (This)->lpVtbl -> ResetDB(This) ) 

#define ICVScanner_ArchiveDB(This)	\
    ( (This)->lpVtbl -> ArchiveDB(This) ) 

#define ICVScanner_UpdateDB(This)	\
    ( (This)->lpVtbl -> UpdateDB(This) ) 

#define ICVScanner_QueryDB(This,pszSQL,pszTargetFileName)	\
    ( (This)->lpVtbl -> QueryDB(This,pszSQL,pszTargetFileName) ) 

#define ICVScanner_CreateStorage(This,pszSourceFolder,pszDestinationFile)	\
    ( (This)->lpVtbl -> CreateStorage(This,pszSourceFolder,pszDestinationFile) ) 

#define ICVScanner_RestoreStorage(This,pszStorageFile,psztargetFolder)	\
    ( (This)->lpVtbl -> RestoreStorage(This,pszStorageFile,psztargetFolder) ) 

#define ICVScanner_GetBundleNames(This,ppBundleNames)	\
    ( (This)->lpVtbl -> GetBundleNames(This,ppBundleNames) ) 

#define ICVScanner_GetLatestSettings(This,pszBundleName,ppSettingsFolder,ppSettingsFiles,ppDates,includeRootFiles)	\
    ( (This)->lpVtbl -> GetLatestSettings(This,pszBundleName,ppSettingsFolder,ppSettingsFiles,ppDates,includeRootFiles) ) 

#define ICVScanner_GetLatestSettingsInFolder(This,pszBundleName,ppSettingsFiles,ppDates)	\
    ( (This)->lpVtbl -> GetLatestSettingsInFolder(This,pszBundleName,ppSettingsFiles,ppDates) ) 

#define ICVScanner_GetUpdates(This,pszBundleName,ppAvailableUpdates,forceUpdates)	\
    ( (This)->lpVtbl -> GetUpdates(This,pszBundleName,ppAvailableUpdates,forceUpdates) ) 

#define ICVScanner_GetLatestVersion(This,pszRootName,pszVersionValue,pszVersionFile,dwVersionValueSize,dwVersionFileSize)	\
    ( (This)->lpVtbl -> GetLatestVersion(This,pszRootName,pszVersionValue,pszVersionFile,dwVersionValueSize,dwVersionFileSize) ) 

#define ICVScanner_UpdateSettings(This,pszBundleName,pszPlatform,pszConfiguration,pPreTerminedUpdates)	\
    ( (This)->lpVtbl -> UpdateSettings(This,pszBundleName,pszPlatform,pszConfiguration,pPreTerminedUpdates) ) 

#define ICVScanner_AutoUpdateSettings(This,pszBundleName,pszPlatform,pszConfiguration,pPreDeterminedUpdates)	\
    ( (This)->lpVtbl -> AutoUpdateSettings(This,pszBundleName,pszPlatform,pszConfiguration,pPreDeterminedUpdates) ) 

#define ICVScanner_AuthorizePackage(This,pszProfileName,pszRegID)	\
    ( (This)->lpVtbl -> AuthorizePackage(This,pszProfileName,pszRegID) ) 

#define ICVScanner_UnauthorizePackage(This,pszProfileName,pszRegID)	\
    ( (This)->lpVtbl -> UnauthorizePackage(This,pszProfileName,pszRegID) ) 

#define ICVScanner_SetKoyaanisqatsi(This,pszManagerIds,registrationGraceDays,pszSettingManagerID,pszVersion)	\
    ( (This)->lpVtbl -> SetKoyaanisqatsi(This,pszManagerIds,registrationGraceDays,pszSettingManagerID,pszVersion) ) 

#define ICVScanner_GetKoyaanisqatsi(This,pszManagerIds,pCBManagerIds,pRegistrationGraceDays,pszSettingManagerID,pszVersion)	\
    ( (This)->lpVtbl -> GetKoyaanisqatsi(This,pszManagerIds,pCBManagerIds,pRegistrationGraceDays,pszSettingManagerID,pszVersion) ) 

#define ICVScanner_SettingsBucketName(This)	\
    ( (This)->lpVtbl -> SettingsBucketName(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICVScanner_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionScannerSupport;

#ifdef __cplusplus

class DECLSPEC_UUID("89A81B9A-515F-49FD-9277-A532899551CF")
CursiVisionScannerSupport;
#endif
#endif /* __CursiVisionScannerSupport_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


