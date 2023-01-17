

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for PrintingSupport.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
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
            char *pszOriginalDocument,
            char *pszProfileName,
            void *pDefaultResultDisposition,
            void *pvPrintingSupport,
            boolean resetSignatureLocations,
            boolean isImageDrivenProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
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
        
        virtual HRESULT STDMETHODCALLTYPE Begin( void) = 0;
        
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
            char *pszProfileFile) = 0;
        
        virtual long STDMETHODCALLTYPE ImageRecognitionMatch( 
            UINT_PTR *ptrPDFIumControl,
            UINT_PTR *ptrOpenCVControl,
            SAFEARRAY *psaImageFields,
            char *pszOriginalDocument,
            char *pszOutlinesFile) = 0;
        
        virtual char *STDMETHODCALLTYPE Name( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsDefined( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE RecognizeByName( void) = 0;
        
        virtual long STDMETHODCALLTYPE SetRecognizeByName( 
            BOOL recognizeByName) = 0;
        
        virtual long STDMETHODCALLTYPE SigningRectangleCount( void) = 0;
        
        virtual long STDMETHODCALLTYPE ClearSigningRects( void) = 0;
        
        virtual long STDMETHODCALLTYPE ClearDateRects( void) = 0;
        
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
        
        virtual BOOL STDMETHODCALLTYPE IsRootImageRecognitionProfile( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverrideAllowSaveProperties( 
            boolean doAllow) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChanges( void) = 0;
        
        virtual void STDMETHODCALLTYPE EndSpecialPermissions( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SearchOrder( 
            /* [in] */ long searchOrder) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SearchOrder( 
            /* [retval][out] */ long *pSearchOrder) = 0;
        
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
            char *pszOriginalDocument,
            char *pszProfileName,
            void *pDefaultResultDisposition,
            void *pvPrintingSupport,
            boolean resetSignatureLocations,
            boolean isImageDrivenProfile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Start)
        HRESULT ( STDMETHODCALLTYPE *Start )( 
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
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Begin)
        HRESULT ( STDMETHODCALLTYPE *Begin )( 
            IPrintingSupportProfile * This);
        
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
            char *pszProfileFile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ImageRecognitionMatch)
        long ( STDMETHODCALLTYPE *ImageRecognitionMatch )( 
            IPrintingSupportProfile * This,
            UINT_PTR *ptrPDFIumControl,
            UINT_PTR *ptrOpenCVControl,
            SAFEARRAY *psaImageFields,
            char *pszOriginalDocument,
            char *pszOutlinesFile);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, Name)
        char *( STDMETHODCALLTYPE *Name )( 
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
            IPrintingSupportProfile * This);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, ClearDateRects)
        long ( STDMETHODCALLTYPE *ClearDateRects )( 
            IPrintingSupportProfile * This);
        
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
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, IsRootImageRecognitionProfile)
        BOOL ( STDMETHODCALLTYPE *IsRootImageRecognitionProfile )( 
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
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, put_SearchOrder)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SearchOrder )( 
            IPrintingSupportProfile * This,
            /* [in] */ long searchOrder);
        
        DECLSPEC_XFGVIRT(IPrintingSupportProfile, get_SearchOrder)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SearchOrder )( 
            IPrintingSupportProfile * This,
            /* [retval][out] */ long *pSearchOrder);
        
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


#define IPrintingSupportProfile_Initialize(This,pszOriginalDocument,pszProfileName,pDefaultResultDisposition,pvPrintingSupport,resetSignatureLocations,isImageDrivenProfile)	\
    ( (This)->lpVtbl -> Initialize(This,pszOriginalDocument,pszProfileName,pDefaultResultDisposition,pvPrintingSupport,resetSignatureLocations,isImageDrivenProfile) ) 

#define IPrintingSupportProfile_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IPrintingSupportProfile_ClearTargets(This)	\
    ( (This)->lpVtbl -> ClearTargets(This) ) 

#define IPrintingSupportProfile_SaveTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> SaveTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_ReplaceTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> ReplaceTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_GetTarget(This,targetIndex,pLocation)	\
    ( (This)->lpVtbl -> GetTarget(This,targetIndex,pLocation) ) 

#define IPrintingSupportProfile_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) ) 

#define IPrintingSupportProfile_SaveProperties(This)	\
    ( (This)->lpVtbl -> SaveProperties(This) ) 

#define IPrintingSupportProfile_GetResultDisposition(This,ppResultDisposition)	\
    ( (This)->lpVtbl -> GetResultDisposition(This,ppResultDisposition) ) 

#define IPrintingSupportProfile_GetDoodleProperties(This,ppResultDisposition)	\
    ( (This)->lpVtbl -> GetDoodleProperties(This,ppResultDisposition) ) 

#define IPrintingSupportProfile_ShowProperties(This,hwndOwner,__MIDL__IPrintingSupportProfile0000)	\
    ( (This)->lpVtbl -> ShowProperties(This,hwndOwner,__MIDL__IPrintingSupportProfile0000) ) 

#define IPrintingSupportProfile_Match(This,pszPDFDocument,pszProfileFile)	\
    ( (This)->lpVtbl -> Match(This,pszPDFDocument,pszProfileFile) ) 

#define IPrintingSupportProfile_ImageRecognitionMatch(This,ptrPDFIumControl,ptrOpenCVControl,psaImageFields,pszOriginalDocument,pszOutlinesFile)	\
    ( (This)->lpVtbl -> ImageRecognitionMatch(This,ptrPDFIumControl,ptrOpenCVControl,psaImageFields,pszOriginalDocument,pszOutlinesFile) ) 

#define IPrintingSupportProfile_Name(This)	\
    ( (This)->lpVtbl -> Name(This) ) 

#define IPrintingSupportProfile_IsDefined(This)	\
    ( (This)->lpVtbl -> IsDefined(This) ) 

#define IPrintingSupportProfile_RecognizeByName(This)	\
    ( (This)->lpVtbl -> RecognizeByName(This) ) 

#define IPrintingSupportProfile_SetRecognizeByName(This,recognizeByName)	\
    ( (This)->lpVtbl -> SetRecognizeByName(This,recognizeByName) ) 

#define IPrintingSupportProfile_SigningRectangleCount(This)	\
    ( (This)->lpVtbl -> SigningRectangleCount(This) ) 

#define IPrintingSupportProfile_ClearSigningRects(This)	\
    ( (This)->lpVtbl -> ClearSigningRects(This) ) 

#define IPrintingSupportProfile_ClearDateRects(This)	\
    ( (This)->lpVtbl -> ClearDateRects(This) ) 

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

#define IPrintingSupportProfile_IsRootImageRecognitionProfile(This)	\
    ( (This)->lpVtbl -> IsRootImageRecognitionProfile(This) ) 

#define IPrintingSupportProfile_OverrideAllowSaveProperties(This,doAllow)	\
    ( (This)->lpVtbl -> OverrideAllowSaveProperties(This,doAllow) ) 

#define IPrintingSupportProfile_AllowPrintProfileChanges(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChanges(This) ) 

#define IPrintingSupportProfile_EndSpecialPermissions(This)	\
    ( (This)->lpVtbl -> EndSpecialPermissions(This) ) 

#define IPrintingSupportProfile_put_SearchOrder(This,searchOrder)	\
    ( (This)->lpVtbl -> put_SearchOrder(This,searchOrder) ) 

#define IPrintingSupportProfile_get_SearchOrder(This,pSearchOrder)	\
    ( (This)->lpVtbl -> get_SearchOrder(This,pSearchOrder) ) 

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
            boolean createGlobalPrintingProfile) = 0;
        
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
        
        virtual HRESULT STDMETHODCALLTYPE CreateImageDrivenPrintProfile( 
            char *pszPDFFileName,
            char *pszProfileName,
            char *pszOriginalFileName,
            IPrintingSupportProfile **ppIPrintingSupportProfile,
            boolean isRootProfile,
            boolean allowNameChange,
            boolean allowDocumentRecognitionSettings,
            boolean allowSigningLocationSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllImageDrivenProfiles( 
            SAFEARRAY **ppProfilesSafeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteAllImageDrivenProfiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProfile( 
            IPrintingSupportProfile *pProfile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OverrideAllowSaveProperties( 
            boolean doAllow) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChanges( void) = 0;
        
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
            boolean createGlobalPrintingProfile);
        
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
        
        DECLSPEC_XFGVIRT(IPrintingSupport, CreateImageDrivenPrintProfile)
        HRESULT ( STDMETHODCALLTYPE *CreateImageDrivenPrintProfile )( 
            IPrintingSupport * This,
            char *pszPDFFileName,
            char *pszProfileName,
            char *pszOriginalFileName,
            IPrintingSupportProfile **ppIPrintingSupportProfile,
            boolean isRootProfile,
            boolean allowNameChange,
            boolean allowDocumentRecognitionSettings,
            boolean allowSigningLocationSettings);
        
        DECLSPEC_XFGVIRT(IPrintingSupport, GetAllImageDrivenProfiles)
        HRESULT ( STDMETHODCALLTYPE *GetAllImageDrivenProfiles )( 
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

#define IPrintingSupport_TakeDocumentInfo(This,pszPDFFileName,pDefaultDispositionSettings,pvIPdfDocument,createGlobalPrintingProfile)	\
    ( (This)->lpVtbl -> TakeDocumentInfo(This,pszPDFFileName,pDefaultDispositionSettings,pvIPdfDocument,createGlobalPrintingProfile) ) 

#define IPrintingSupport_GetPropertiesWindow(This,__MIDL__IPrintingSupport0000)	\
    ( (This)->lpVtbl -> GetPropertiesWindow(This,__MIDL__IPrintingSupport0000) ) 

#define IPrintingSupport_ServicesAdvise(This,pvICursiVisionServices)	\
    ( (This)->lpVtbl -> ServicesAdvise(This,pvICursiVisionServices) ) 

#define IPrintingSupport_InitializeThreaded(This,pCallback,pvCallerObj)	\
    ( (This)->lpVtbl -> InitializeThreaded(This,pCallback,pvCallerObj) ) 

#define IPrintingSupport_NewImageDrivenProfileDialog(This,hwndParent,ppIPrintingSupportProfile,isRootProfile)	\
    ( (This)->lpVtbl -> NewImageDrivenProfileDialog(This,hwndParent,ppIPrintingSupportProfile,isRootProfile) ) 

#define IPrintingSupport_CreateImageDrivenPrintProfile(This,pszPDFFileName,pszProfileName,pszOriginalFileName,ppIPrintingSupportProfile,isRootProfile,allowNameChange,allowDocumentRecognitionSettings,allowSigningLocationSettings)	\
    ( (This)->lpVtbl -> CreateImageDrivenPrintProfile(This,pszPDFFileName,pszProfileName,pszOriginalFileName,ppIPrintingSupportProfile,isRootProfile,allowNameChange,allowDocumentRecognitionSettings,allowSigningLocationSettings) ) 

#define IPrintingSupport_GetAllImageDrivenProfiles(This,ppProfilesSafeArray)	\
    ( (This)->lpVtbl -> GetAllImageDrivenProfiles(This,ppProfilesSafeArray) ) 

#define IPrintingSupport_DeleteAllImageDrivenProfiles(This)	\
    ( (This)->lpVtbl -> DeleteAllImageDrivenProfiles(This) ) 

#define IPrintingSupport_DeleteProfile(This,pProfile)	\
    ( (This)->lpVtbl -> DeleteProfile(This,pProfile) ) 

#define IPrintingSupport_OverrideAllowSaveProperties(This,doAllow)	\
    ( (This)->lpVtbl -> OverrideAllowSaveProperties(This,doAllow) ) 

#define IPrintingSupport_AllowPrintProfileChanges(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChanges(This) ) 

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


