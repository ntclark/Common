

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for PrintingSupport.odl:
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


#ifndef __PrintingSupport_i_h__
#define __PrintingSupport_i_h__

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

#ifndef __IPrintingSupportProfile_FWD_DEFINED__
#define __IPrintingSupportProfile_FWD_DEFINED__
typedef interface IPrintingSupportProfile IPrintingSupportProfile;

#endif 	/* __IPrintingSupportProfile_FWD_DEFINED__ */


#ifndef __IPrintingSupport_FWD_DEFINED__
#define __IPrintingSupport_FWD_DEFINED__
typedef interface IPrintingSupport IPrintingSupport;

#endif 	/* __IPrintingSupport_FWD_DEFINED__ */


#ifndef __CursiVisionPrintingSupport_FWD_DEFINED__
#define __CursiVisionPrintingSupport_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionPrintingSupport CursiVisionPrintingSupport;
#else
typedef struct CursiVisionPrintingSupport CursiVisionPrintingSupport;
#endif /* __cplusplus */

#endif 	/* __CursiVisionPrintingSupport_FWD_DEFINED__ */


#ifndef __CursiVisionPrintingSupportProfile_FWD_DEFINED__
#define __CursiVisionPrintingSupportProfile_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionPrintingSupportProfile CursiVisionPrintingSupportProfile;
#else
typedef struct CursiVisionPrintingSupportProfile CursiVisionPrintingSupportProfile;
#endif /* __cplusplus */

#endif 	/* __CursiVisionPrintingSupportProfile_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionPrintingSupport_LIBRARY_DEFINED__
#define __CursiVisionPrintingSupport_LIBRARY_DEFINED__

/* library CursiVisionPrintingSupport */
/* [version][lcid][helpstring][helpfile][uuid] */ 



EXTERN_C const IID LIBID_CursiVisionPrintingSupport;

#ifndef __IPrintingSupportProfile_INTERFACE_DEFINED__
#define __IPrintingSupportProfile_INTERFACE_DEFINED__

/* interface IPrintingSupportProfile */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrintingSupportProfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570332")
    IPrintingSupportProfile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            char *pszProfileFolder,
            char *pszOriginalDocument,
            char *pszProfileName,
            void *pDefaultResultDisposition,
            boolean resetSignatureLocations,
            boolean isImageDrivenProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Finalize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearTargets( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveTarget( 
            long targetIndex,
            void *pLocation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceTarget( 
            long targetIndex,
            void *pLocation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTarget( 
            long targetIndex,
            void *pLocation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveProperties( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResultDisposition( 
            void **ppResultDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDoodleProperties( 
            void **ppResultDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( 
            HWND hwndOwner,
            IUnknown *__MIDL__IPrintingSupportProfile0000) = 0;
        
        virtual long STDMETHODCALLTYPE Match( 
            char *pszPDFDocument,
            char *pszProfileFile,
            BOOL isEncoded) = 0;
        
        virtual char *STDMETHODCALLTYPE Name( void) = 0;
        
        virtual GUID *STDMETHODCALLTYPE ID( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsDefined( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE RecognizeByName( void) = 0;
        
        virtual long STDMETHODCALLTYPE SetRecognizeByName( 
            BOOL recognizeByName) = 0;
        
        virtual long STDMETHODCALLTYPE SigningRectangleCount( void) = 0;
        
        virtual long STDMETHODCALLTYPE ClearSigningRects( 
            /* [defaultvalue] */ UINT_PTR exceptForPackageCookieNullForAll = 0) = 0;
        
        virtual long STDMETHODCALLTYPE ClearDateRects( 
            /* [defaultvalue] */ UINT_PTR exceptForPackageCookieNullForAll = 0) = 0;
        
        virtual long STDMETHODCALLTYPE AddSigningRects( 
            UINT_PTR pFromOtherProfile) = 0;
        
        virtual long STDMETHODCALLTYPE AddDateRects( 
            UINT_PTR pFromOtherProfile) = 0;
        
        virtual long STDMETHODCALLTYPE Save( 
            /* [defaultvalue] */ char *pszNewName = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( 
            /* [defaultvalue] */ BOOL keepOutlines = 0) = 0;
        
        virtual char *STDMETHODCALLTYPE GetDispositionSettingsFileName( void) = 0;
        
        virtual char *STDMETHODCALLTYPE SignatureGraphicFileName( void) = 0;
        
        virtual void *STDMETHODCALLTYPE GetTextOutlines( 
            long pageNumber,
            long *pReportedPageWidth,
            long *pReportedPageHeight) = 0;
        
        virtual void STDMETHODCALLTYPE FreeTextOutlines( 
            void *pvTextOutlines) = 0;
        
        virtual char *STDMETHODCALLTYPE DocumentName( void) = 0;
        
        virtual char *STDMETHODCALLTYPE OutlinesFileName( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE DoSignatureCapture( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetAllowTemplateDocumentChange( 
            boolean v) = 0;
        
        virtual void STDMETHODCALLTYPE SetAllowDocumentRecognitionSettings( 
            boolean v) = 0;
        
        virtual void STDMETHODCALLTYPE SetAllowNameChange( 
            boolean v) = 0;
        
        virtual void STDMETHODCALLTYPE SetAllowSigningLocationSettings( 
            boolean v) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsImageRecognitionProfile( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverrideAllowSaveProperties( 
            boolean doAllow) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChanges( void) = 0;
        
        virtual void STDMETHODCALLTYPE EndSpecialPermissions( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetNotifyWritingLocationFound( 
            void ( STDMETHODCALLTYPE *notifyMe )( 
                long __MIDL__IPrintingSupportProfile0001)) = 0;
        
        virtual char *STDMETHODCALLTYPE PackageName( void) = 0;
        
        virtual boolean STDMETHODCALLTYPE EnablePostSaveOptions( 
            boolean doEnable) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrintingSupportProfileVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrintingSupportProfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPrintingSupportProfile * This,
            char *pszProfileFolder,
            char *pszOriginalDocument,
            char *pszProfileName,
            void *pDefaultResultDisposition,
            boolean resetSignatureLocations,
            boolean isImageDrivenProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Start)
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Stop)
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Finalize)
        HRESULT ( STDMETHODCALLTYPE *Finalize )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ClearTargets)
        HRESULT ( STDMETHODCALLTYPE *ClearTargets )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SaveTarget)
        HRESULT ( STDMETHODCALLTYPE *SaveTarget )( 
            IPrintingSupportProfile * This,
            long targetIndex,
            void *pLocation);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ReplaceTarget)
        HRESULT ( STDMETHODCALLTYPE *ReplaceTarget )( 
            IPrintingSupportProfile * This,
            long targetIndex,
            void *pLocation);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, GetTarget)
        HRESULT ( STDMETHODCALLTYPE *GetTarget )( 
            IPrintingSupportProfile * This,
            long targetIndex,
            void *pLocation);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SaveProperties)
        HRESULT ( STDMETHODCALLTYPE *SaveProperties )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, GetResultDisposition)
        HRESULT ( STDMETHODCALLTYPE *GetResultDisposition )( 
            IPrintingSupportProfile * This,
            void **ppResultDisposition);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, GetDoodleProperties)
        HRESULT ( STDMETHODCALLTYPE *GetDoodleProperties )( 
            IPrintingSupportProfile * This,
            void **ppResultDisposition);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ShowProperties)
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IPrintingSupportProfile * This,
            HWND hwndOwner,
            IUnknown *__MIDL__IPrintingSupportProfile0000);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Match)
        long ( STDMETHODCALLTYPE *Match )( 
            IPrintingSupportProfile * This,
            char *pszPDFDocument,
            char *pszProfileFile,
            BOOL isEncoded);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Name)
        char *( STDMETHODCALLTYPE *Name )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ID)
        GUID *( STDMETHODCALLTYPE *ID )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, IsDefined)
        BOOL ( STDMETHODCALLTYPE *IsDefined )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, RecognizeByName)
        BOOL ( STDMETHODCALLTYPE *RecognizeByName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetRecognizeByName)
        long ( STDMETHODCALLTYPE *SetRecognizeByName )( 
            IPrintingSupportProfile * This,
            BOOL recognizeByName);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SigningRectangleCount)
        long ( STDMETHODCALLTYPE *SigningRectangleCount )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ClearSigningRects)
        long ( STDMETHODCALLTYPE *ClearSigningRects )( 
            IPrintingSupportProfile * This,
            /* [defaultvalue] */ UINT_PTR exceptForPackageCookieNullForAll);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ClearDateRects)
        long ( STDMETHODCALLTYPE *ClearDateRects )( 
            IPrintingSupportProfile * This,
            /* [defaultvalue] */ UINT_PTR exceptForPackageCookieNullForAll);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, AddSigningRects)
        long ( STDMETHODCALLTYPE *AddSigningRects )( 
            IPrintingSupportProfile * This,
            UINT_PTR pFromOtherProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, AddDateRects)
        long ( STDMETHODCALLTYPE *AddDateRects )( 
            IPrintingSupportProfile * This,
            UINT_PTR pFromOtherProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Save)
        long ( STDMETHODCALLTYPE *Save )( 
            IPrintingSupportProfile * This,
            /* [defaultvalue] */ char *pszNewName);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Destroy)
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IPrintingSupportProfile * This,
            /* [defaultvalue] */ BOOL keepOutlines);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, GetDispositionSettingsFileName)
        char *( STDMETHODCALLTYPE *GetDispositionSettingsFileName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SignatureGraphicFileName)
        char *( STDMETHODCALLTYPE *SignatureGraphicFileName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, GetTextOutlines)
        void *( STDMETHODCALLTYPE *GetTextOutlines )( 
            IPrintingSupportProfile * This,
            long pageNumber,
            long *pReportedPageWidth,
            long *pReportedPageHeight);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, FreeTextOutlines)
        void ( STDMETHODCALLTYPE *FreeTextOutlines )( 
            IPrintingSupportProfile * This,
            void *pvTextOutlines);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, DocumentName)
        char *( STDMETHODCALLTYPE *DocumentName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, OutlinesFileName)
        char *( STDMETHODCALLTYPE *OutlinesFileName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, DoSignatureCapture)
        BOOL ( STDMETHODCALLTYPE *DoSignatureCapture )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetAllowTemplateDocumentChange)
        void ( STDMETHODCALLTYPE *SetAllowTemplateDocumentChange )( 
            IPrintingSupportProfile * This,
            boolean v);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetAllowDocumentRecognitionSettings)
        void ( STDMETHODCALLTYPE *SetAllowDocumentRecognitionSettings )( 
            IPrintingSupportProfile * This,
            boolean v);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetAllowNameChange)
        void ( STDMETHODCALLTYPE *SetAllowNameChange )( 
            IPrintingSupportProfile * This,
            boolean v);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetAllowSigningLocationSettings)
        void ( STDMETHODCALLTYPE *SetAllowSigningLocationSettings )( 
            IPrintingSupportProfile * This,
            boolean v);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, IsImageRecognitionProfile)
        BOOL ( STDMETHODCALLTYPE *IsImageRecognitionProfile )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, OverrideAllowSaveProperties)
        HRESULT ( STDMETHODCALLTYPE *OverrideAllowSaveProperties )( 
            IPrintingSupportProfile * This,
            boolean doAllow);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, AllowPrintProfileChanges)
        BOOL ( STDMETHODCALLTYPE *AllowPrintProfileChanges )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, EndSpecialPermissions)
        void ( STDMETHODCALLTYPE *EndSpecialPermissions )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, SetNotifyWritingLocationFound)
        void ( STDMETHODCALLTYPE *SetNotifyWritingLocationFound )( 
            IPrintingSupportProfile * This,
            void ( STDMETHODCALLTYPE *notifyMe )( 
                long __MIDL__IPrintingSupportProfile0001));
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, PackageName)
        char *( STDMETHODCALLTYPE *PackageName )( 
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, EnablePostSaveOptions)
        boolean ( STDMETHODCALLTYPE *EnablePostSaveOptions )( 
            IPrintingSupportProfile * This,
            boolean doEnable);
        
        END_INTERFACE
    } IPrintingSupportProfileVtbl;

    interface IPrintingSupportProfile
    {
        CONST_VTBL struct IPrintingSupportProfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrintingSupportProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrintingSupportProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrintingSupportProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrintingSupportProfile_Initialize(This,pszProfileFolder,pszOriginalDocument,pszProfileName,pDefaultResultDisposition,resetSignatureLocations,isImageDrivenProfile)	\
    ( (This)->lpVtbl -> Initialize(This,pszProfileFolder,pszOriginalDocument,pszProfileName,pDefaultResultDisposition,resetSignatureLocations,isImageDrivenProfile) ) 

#define IPrintingSupportProfile_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IPrintingSupportProfile_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IPrintingSupportProfile_Finalize(This)	\
    ( (This)->lpVtbl -> Finalize(This) ) 

#define IPrintingSupportProfile_ClearTargets(This)	\
    ( (This)->lpVtbl -> ClearTargets(This) ) 

#define IPrintingSupportProfile_SaveTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> SaveTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_ReplaceTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> ReplaceTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_GetTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> GetTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_SaveProperties(This)	\
    ( (This)->lpVtbl -> SaveProperties(This) ) 

#define IPrintingSupportProfile_GetResultDisposition(This,ppResultDisposition)	\
    ( (This)->lpVtbl -> GetResultDisposition(This,ppResultDisposition) ) 

#define IPrintingSupportProfile_GetDoodleProperties(This,ppResultDisposition)	\
    ( (This)->lpVtbl -> GetDoodleProperties(This,ppResultDisposition) ) 

#define IPrintingSupportProfile_ShowProperties(This,hwndOwner,__MIDL__IPrintingSupportProfile0000)	\
    ( (This)->lpVtbl -> ShowProperties(This,hwndOwner,__MIDL__IPrintingSupportProfile0000) ) 

#define IPrintingSupportProfile_Match(This,pszPDFDocument,pszProfileFile,isEncoded)	\
    ( (This)->lpVtbl -> Match(This,pszPDFDocument,pszProfileFile,isEncoded) ) 

#define IPrintingSupportProfile_Name(This)	\
    ( (This)->lpVtbl -> Name(This) ) 

#define IPrintingSupportProfile_ID(This)	\
    ( (This)->lpVtbl -> ID(This) ) 

#define IPrintingSupportProfile_IsDefined(This)	\
    ( (This)->lpVtbl -> IsDefined(This) ) 

#define IPrintingSupportProfile_RecognizeByName(This)	\
    ( (This)->lpVtbl -> RecognizeByName(This) ) 

#define IPrintingSupportProfile_SetRecognizeByName(This,recognizeByName)	\
    ( (This)->lpVtbl -> SetRecognizeByName(This,recognizeByName) ) 

#define IPrintingSupportProfile_SigningRectangleCount(This)	\
    ( (This)->lpVtbl -> SigningRectangleCount(This) ) 

#define IPrintingSupportProfile_ClearSigningRects(This,exceptForPackageCookieNullForAll)	\
    ( (This)->lpVtbl -> ClearSigningRects(This,exceptForPackageCookieNullForAll) ) 

#define IPrintingSupportProfile_ClearDateRects(This,exceptForPackageCookieNullForAll)	\
    ( (This)->lpVtbl -> ClearDateRects(This,exceptForPackageCookieNullForAll) ) 

#define IPrintingSupportProfile_AddSigningRects(This,pFromOtherProfile)	\
    ( (This)->lpVtbl -> AddSigningRects(This,pFromOtherProfile) ) 

#define IPrintingSupportProfile_AddDateRects(This,pFromOtherProfile)	\
    ( (This)->lpVtbl -> AddDateRects(This,pFromOtherProfile) ) 

#define IPrintingSupportProfile_Save(This,pszNewName)	\
    ( (This)->lpVtbl -> Save(This,pszNewName) ) 

#define IPrintingSupportProfile_Destroy(This,keepOutlines)	\
    ( (This)->lpVtbl -> Destroy(This,keepOutlines) ) 

#define IPrintingSupportProfile_GetDispositionSettingsFileName(This)	\
    ( (This)->lpVtbl -> GetDispositionSettingsFileName(This) ) 

#define IPrintingSupportProfile_SignatureGraphicFileName(This)	\
    ( (This)->lpVtbl -> SignatureGraphicFileName(This) ) 

#define IPrintingSupportProfile_GetTextOutlines(This,pageNumber,pReportedPageWidth,pReportedPageHeight)	\
    ( (This)->lpVtbl -> GetTextOutlines(This,pageNumber,pReportedPageWidth,pReportedPageHeight) ) 

#define IPrintingSupportProfile_FreeTextOutlines(This,pvTextOutlines)	\
    ( (This)->lpVtbl -> FreeTextOutlines(This,pvTextOutlines) ) 

#define IPrintingSupportProfile_DocumentName(This)	\
    ( (This)->lpVtbl -> DocumentName(This) ) 

#define IPrintingSupportProfile_OutlinesFileName(This)	\
    ( (This)->lpVtbl -> OutlinesFileName(This) ) 

#define IPrintingSupportProfile_DoSignatureCapture(This)	\
    ( (This)->lpVtbl -> DoSignatureCapture(This) ) 

#define IPrintingSupportProfile_SetAllowTemplateDocumentChange(This,v)	\
    ( (This)->lpVtbl -> SetAllowTemplateDocumentChange(This,v) ) 

#define IPrintingSupportProfile_SetAllowDocumentRecognitionSettings(This,v)	\
    ( (This)->lpVtbl -> SetAllowDocumentRecognitionSettings(This,v) ) 

#define IPrintingSupportProfile_SetAllowNameChange(This,v)	\
    ( (This)->lpVtbl -> SetAllowNameChange(This,v) ) 

#define IPrintingSupportProfile_SetAllowSigningLocationSettings(This,v)	\
    ( (This)->lpVtbl -> SetAllowSigningLocationSettings(This,v) ) 

#define IPrintingSupportProfile_IsImageRecognitionProfile(This)	\
    ( (This)->lpVtbl -> IsImageRecognitionProfile(This) ) 

#define IPrintingSupportProfile_OverrideAllowSaveProperties(This,doAllow)	\
    ( (This)->lpVtbl -> OverrideAllowSaveProperties(This,doAllow) ) 

#define IPrintingSupportProfile_AllowPrintProfileChanges(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChanges(This) ) 

#define IPrintingSupportProfile_EndSpecialPermissions(This)	\
    ( (This)->lpVtbl -> EndSpecialPermissions(This) ) 

#define IPrintingSupportProfile_SetNotifyWritingLocationFound(This,notifyMe)	\
    ( (This)->lpVtbl -> SetNotifyWritingLocationFound(This,notifyMe) ) 

#define IPrintingSupportProfile_PackageName(This)	\
    ( (This)->lpVtbl -> PackageName(This) ) 

#define IPrintingSupportProfile_EnablePostSaveOptions(This,doEnable)	\
    ( (This)->lpVtbl -> EnablePostSaveOptions(This,doEnable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrintingSupportProfile_INTERFACE_DEFINED__ */


#ifndef __IPrintingSupport_INTERFACE_DEFINED__
#define __IPrintingSupport_INTERFACE_DEFINED__

/* interface IPrintingSupport */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrintingSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570331")
    IPrintingSupport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeMainWindow( 
            HWND hwndMainWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDocumentInfo( 
            char *pszPDFFileName,
            void *pDefaultDispositionSettings,
            void *pvIPdfDocument,
            boolean createGlobalPrintingProfile,
            boolean *pWasCancelled,
            boolean ignoreGlobalTemplate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertiesWindow( 
            HWND *__MIDL__IPrintingSupport0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ServicesAdvise( 
            void *pvICursiVisionServices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeThreaded( 
            void ( STDMETHODCALLTYPE *pCallback )( 
                void *pvCallerObject),
            void *pvCallerObj) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewImageDrivenProfileDialog( 
            HWND hwndParent,
            IPrintingSupportProfile **ppIPrintingSupportProfile,
            boolean isRootProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllImageDrivenProfiles( 
            SAFEARRAY **ppProfilesSafeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllProfiles( 
            SAFEARRAY **ppProfilesSafeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteAllImageDrivenProfiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProfile( 
            IPrintingSupportProfile *pProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverrideAllowSaveProperties( 
            boolean doAllow) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChanges( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelProfileSeeking( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsDefaultRecognitionTypeGlobalTemplate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadPrintProfiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadImageDrivenPrintProfiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartProfile( 
            IPrintingSupportProfile *pProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageDrivenProfilesInPackageFolder( 
            char *pszPackageFolder,
            SAFEARRAY **ppProfilesSafeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedProfileIDs( 
            SAFEARRAY **ppSelectedProfileIDs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProfileByID( 
            GUID *pID,
            IPrintingSupportProfile **ppIPrintingSupportProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNewLegacyProfile( 
            char *pszDocumentName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetProfileDispositionSettings( 
            void *pDefaultDispositionSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNoSaveProfiles( 
            boolean setNoSave) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetResourcesModule( 
            HMODULE hModuleResources) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrintingSupportVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrintingSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, TakeMainWindow)
        HRESULT ( STDMETHODCALLTYPE *TakeMainWindow )( 
            IPrintingSupport * This,
            HWND hwndMainWindow);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, TakeDocumentInfo)
        HRESULT ( STDMETHODCALLTYPE *TakeDocumentInfo )( 
            IPrintingSupport * This,
            char *pszPDFFileName,
            void *pDefaultDispositionSettings,
            void *pvIPdfDocument,
            boolean createGlobalPrintingProfile,
            boolean *pWasCancelled,
            boolean ignoreGlobalTemplate);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetPropertiesWindow)
        HRESULT ( STDMETHODCALLTYPE *GetPropertiesWindow )( 
            IPrintingSupport * This,
            HWND *__MIDL__IPrintingSupport0000);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, ServicesAdvise)
        HRESULT ( STDMETHODCALLTYPE *ServicesAdvise )( 
            IPrintingSupport * This,
            void *pvICursiVisionServices);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, InitializeThreaded)
        HRESULT ( STDMETHODCALLTYPE *InitializeThreaded )( 
            IPrintingSupport * This,
            void ( STDMETHODCALLTYPE *pCallback )( 
                void *pvCallerObject),
            void *pvCallerObj);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, NewImageDrivenProfileDialog)
        HRESULT ( STDMETHODCALLTYPE *NewImageDrivenProfileDialog )( 
            IPrintingSupport * This,
            HWND hwndParent,
            IPrintingSupportProfile **ppIPrintingSupportProfile,
            boolean isRootProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetAllImageDrivenProfiles)
        HRESULT ( STDMETHODCALLTYPE *GetAllImageDrivenProfiles )( 
            IPrintingSupport * This,
            SAFEARRAY **ppProfilesSafeArray);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetAllProfiles)
        HRESULT ( STDMETHODCALLTYPE *GetAllProfiles )( 
            IPrintingSupport * This,
            SAFEARRAY **ppProfilesSafeArray);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, DeleteAllImageDrivenProfiles)
        HRESULT ( STDMETHODCALLTYPE *DeleteAllImageDrivenProfiles )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, DeleteProfile)
        HRESULT ( STDMETHODCALLTYPE *DeleteProfile )( 
            IPrintingSupport * This,
            IPrintingSupportProfile *pProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, OverrideAllowSaveProperties)
        HRESULT ( STDMETHODCALLTYPE *OverrideAllowSaveProperties )( 
            IPrintingSupport * This,
            boolean doAllow);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, AllowPrintProfileChanges)
        BOOL ( STDMETHODCALLTYPE *AllowPrintProfileChanges )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, CancelProfileSeeking)
        HRESULT ( STDMETHODCALLTYPE *CancelProfileSeeking )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, IsDefaultRecognitionTypeGlobalTemplate)
        BOOL ( STDMETHODCALLTYPE *IsDefaultRecognitionTypeGlobalTemplate )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, LoadPrintProfiles)
        HRESULT ( STDMETHODCALLTYPE *LoadPrintProfiles )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, LoadImageDrivenPrintProfiles)
        HRESULT ( STDMETHODCALLTYPE *LoadImageDrivenPrintProfiles )( 
            IPrintingSupport * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, StartProfile)
        HRESULT ( STDMETHODCALLTYPE *StartProfile )( 
            IPrintingSupport * This,
            IPrintingSupportProfile *pProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetImageDrivenProfilesInPackageFolder)
        HRESULT ( STDMETHODCALLTYPE *GetImageDrivenProfilesInPackageFolder )( 
            IPrintingSupport * This,
            char *pszPackageFolder,
            SAFEARRAY **ppProfilesSafeArray);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetSelectedProfileIDs)
        HRESULT ( STDMETHODCALLTYPE *GetSelectedProfileIDs )( 
            IPrintingSupport * This,
            SAFEARRAY **ppSelectedProfileIDs);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetProfileByID)
        HRESULT ( STDMETHODCALLTYPE *GetProfileByID )( 
            IPrintingSupport * This,
            GUID *pID,
            IPrintingSupportProfile **ppIPrintingSupportProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, CreateNewLegacyProfile)
        HRESULT ( STDMETHODCALLTYPE *CreateNewLegacyProfile )( 
            IPrintingSupport * This,
            char *pszDocumentName);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, ResetProfileDispositionSettings)
        HRESULT ( STDMETHODCALLTYPE *ResetProfileDispositionSettings )( 
            IPrintingSupport * This,
            void *pDefaultDispositionSettings);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, SetNoSaveProfiles)
        HRESULT ( STDMETHODCALLTYPE *SetNoSaveProfiles )( 
            IPrintingSupport * This,
            boolean setNoSave);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, SetResourcesModule)
        HRESULT ( STDMETHODCALLTYPE *SetResourcesModule )( 
            IPrintingSupport * This,
            HMODULE hModuleResources);
        
        END_INTERFACE
    } IPrintingSupportVtbl;

    interface IPrintingSupport
    {
        CONST_VTBL struct IPrintingSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrintingSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrintingSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrintingSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrintingSupport_TakeMainWindow(This,hwndMainWindow)	\
    ( (This)->lpVtbl -> TakeMainWindow(This,hwndMainWindow) ) 

#define IPrintingSupport_TakeDocumentInfo(This,pszPDFFileName,pDefaultDispositionSettings,pvIPdfDocument,createGlobalPrintingProfile,pWasCancelled,ignoreGlobalTemplate)	\
    ( (This)->lpVtbl -> TakeDocumentInfo(This,pszPDFFileName,pDefaultDispositionSettings,pvIPdfDocument,createGlobalPrintingProfile,pWasCancelled,ignoreGlobalTemplate) ) 

#define IPrintingSupport_GetPropertiesWindow(This,__MIDL__IPrintingSupport0000)	\
    ( (This)->lpVtbl -> GetPropertiesWindow(This,__MIDL__IPrintingSupport0000) ) 

#define IPrintingSupport_ServicesAdvise(This,pvICursiVisionServices)	\
    ( (This)->lpVtbl -> ServicesAdvise(This,pvICursiVisionServices) ) 

#define IPrintingSupport_InitializeThreaded(This,pCallback,pvCallerObj)	\
    ( (This)->lpVtbl -> InitializeThreaded(This,pCallback,pvCallerObj) ) 

#define IPrintingSupport_NewImageDrivenProfileDialog(This,hwndParent,ppIPrintingSupportProfile,isRootProfile)	\
    ( (This)->lpVtbl -> NewImageDrivenProfileDialog(This,hwndParent,ppIPrintingSupportProfile,isRootProfile) ) 

#define IPrintingSupport_GetAllImageDrivenProfiles(This,ppProfilesSafeArray)	\
    ( (This)->lpVtbl -> GetAllImageDrivenProfiles(This,ppProfilesSafeArray) ) 

#define IPrintingSupport_GetAllProfiles(This,ppProfilesSafeArray)	\
    ( (This)->lpVtbl -> GetAllProfiles(This,ppProfilesSafeArray) ) 

#define IPrintingSupport_DeleteAllImageDrivenProfiles(This)	\
    ( (This)->lpVtbl -> DeleteAllImageDrivenProfiles(This) ) 

#define IPrintingSupport_DeleteProfile(This,pProfile)	\
    ( (This)->lpVtbl -> DeleteProfile(This,pProfile) ) 

#define IPrintingSupport_OverrideAllowSaveProperties(This,doAllow)	\
    ( (This)->lpVtbl -> OverrideAllowSaveProperties(This,doAllow) ) 

#define IPrintingSupport_AllowPrintProfileChanges(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChanges(This) ) 

#define IPrintingSupport_CancelProfileSeeking(This)	\
    ( (This)->lpVtbl -> CancelProfileSeeking(This) ) 

#define IPrintingSupport_IsDefaultRecognitionTypeGlobalTemplate(This)	\
    ( (This)->lpVtbl -> IsDefaultRecognitionTypeGlobalTemplate(This) ) 

#define IPrintingSupport_LoadPrintProfiles(This)	\
    ( (This)->lpVtbl -> LoadPrintProfiles(This) ) 

#define IPrintingSupport_LoadImageDrivenPrintProfiles(This)	\
    ( (This)->lpVtbl -> LoadImageDrivenPrintProfiles(This) ) 

#define IPrintingSupport_StartProfile(This,pProfile)	\
    ( (This)->lpVtbl -> StartProfile(This,pProfile) ) 

#define IPrintingSupport_GetImageDrivenProfilesInPackageFolder(This,pszPackageFolder,ppProfilesSafeArray)	\
    ( (This)->lpVtbl -> GetImageDrivenProfilesInPackageFolder(This,pszPackageFolder,ppProfilesSafeArray) ) 

#define IPrintingSupport_GetSelectedProfileIDs(This,ppSelectedProfileIDs)	\
    ( (This)->lpVtbl -> GetSelectedProfileIDs(This,ppSelectedProfileIDs) ) 

#define IPrintingSupport_GetProfileByID(This,pID,ppIPrintingSupportProfile)	\
    ( (This)->lpVtbl -> GetProfileByID(This,pID,ppIPrintingSupportProfile) ) 

#define IPrintingSupport_CreateNewLegacyProfile(This,pszDocumentName)	\
    ( (This)->lpVtbl -> CreateNewLegacyProfile(This,pszDocumentName) ) 

#define IPrintingSupport_ResetProfileDispositionSettings(This,pDefaultDispositionSettings)	\
    ( (This)->lpVtbl -> ResetProfileDispositionSettings(This,pDefaultDispositionSettings) ) 

#define IPrintingSupport_SetNoSaveProfiles(This,setNoSave)	\
    ( (This)->lpVtbl -> SetNoSaveProfiles(This,setNoSave) ) 

#define IPrintingSupport_SetResourcesModule(This,hModuleResources)	\
    ( (This)->lpVtbl -> SetResourcesModule(This,hModuleResources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrintingSupport_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionPrintingSupport;

#ifdef __cplusplus

class DECLSPEC_UUID("A64AB7AF-8A26-4f07-8877-56FE99570333")
CursiVisionPrintingSupport;
#endif

EXTERN_C const CLSID CLSID_CursiVisionPrintingSupportProfile;

#ifdef __cplusplus

class DECLSPEC_UUID("A64AB7AF-8A26-4f07-8877-56FE99570334")
CursiVisionPrintingSupportProfile;
#endif
#endif /* __CursiVisionPrintingSupport_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


