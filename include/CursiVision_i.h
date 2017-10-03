

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Oct 03 15:08:00 2017
 */
/* Compiler settings for CursiVision.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
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
#endif // __RPCNDR_H_VERSION__


#ifndef __CursiVision_i_h__
#define __CursiVision_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICursiVisionFrontEnd_FWD_DEFINED__
#define __ICursiVisionFrontEnd_FWD_DEFINED__
typedef interface ICursiVisionFrontEnd ICursiVisionFrontEnd;

#endif 	/* __ICursiVisionFrontEnd_FWD_DEFINED__ */


#ifndef __ICursiVisionEvents_FWD_DEFINED__
#define __ICursiVisionEvents_FWD_DEFINED__
typedef interface ICursiVisionEvents ICursiVisionEvents;

#endif 	/* __ICursiVisionEvents_FWD_DEFINED__ */


#ifndef __ICursiVisionServices_FWD_DEFINED__
#define __ICursiVisionServices_FWD_DEFINED__
typedef interface ICursiVisionServices ICursiVisionServices;

#endif 	/* __ICursiVisionServices_FWD_DEFINED__ */


#ifndef __ICursiVisionBackEnd_FWD_DEFINED__
#define __ICursiVisionBackEnd_FWD_DEFINED__
typedef interface ICursiVisionBackEnd ICursiVisionBackEnd;

#endif 	/* __ICursiVisionBackEnd_FWD_DEFINED__ */


#ifndef __CursiVision_FWD_DEFINED__
#define __CursiVision_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVision CursiVision;
#else
typedef struct CursiVision CursiVision;
#endif /* __cplusplus */

#endif 	/* __CursiVision_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "dispex.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVision_LIBRARY_DEFINED__
#define __CursiVision_LIBRARY_DEFINED__

/* library CursiVision */
/* [version][control][lcid][helpstring][uuid] */ 

#pragma once
typedef struct oleWritingLocation
    {
    long zzpdfPageNumber;
    long pdfAdobePageNumber;
    RECT documentRect;
    BOOL isWrittenTo;
    BOOL isRequestedViewSet;
    } 	oleWritingLocation;


DEFINE_GUID(LIBID_CursiVision,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x35);

#ifndef __ICursiVisionFrontEnd_INTERFACE_DEFINED__
#define __ICursiVisionFrontEnd_INTERFACE_DEFINED__

/* interface ICursiVisionFrontEnd */
/* [object][oleautomation][dual][helpstring][uuid] */ 


DEFINE_GUID(IID_ICursiVisionFrontEnd,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x36);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570336")
    ICursiVisionFrontEnd : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_document( 
            /* [in] */ BSTR documentName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_document( 
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0000) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_resultDocument( 
            /* [in] */ BSTR saveSignedDocumentAsName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_resultDocument( 
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0001) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_settingsFile( 
            /* [in] */ BSTR settingsFileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_templateDocument( 
            /* [in] */ BSTR templateDocumentName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_templateDocument( 
            /* [retval][out] */ BSTR *pTemplateDocumentName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_showCursiVisionToolbar( 
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0002) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_showCursiVisionToolbar( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0003) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_showCursiVisionStatusbar( 
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0004) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_showCursiVisionStatusbar( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0005) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_showAdobeToolbar( 
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0006) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_showAdobeToolbar( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0007) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFEnabler( 
            /* [retval][out] */ /* external definition not present */ IPdfEnabler **__MIDL__ICursiVisionFrontEnd0008) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDocument( 
            /* [retval][out] */ /* external definition not present */ IPdfDocument **__MIDL__ICursiVisionFrontEnd0009) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SignaturePad( 
            /* [retval][out] */ /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionFrontEnd0010) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_signedDocument( 
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0011) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_signingLocationCount( 
            /* [retval][out] */ long *__MIDL__ICursiVisionFrontEnd0012) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_profileRepository( 
            /* [in] */ BSTR repositoryLocation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_profileRepository( 
            /* [retval][out] */ BSTR *pRepositoryLocation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_profile( 
            /* [in] */ BSTR profileFileName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_profile( 
            /* [retval][out] */ BSTR *pProfileFileName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPadConnected( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0013) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sign( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CloseDocument( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            BSTR fileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SavePrompt( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UseBackEndCLSID( 
            CLSID backEndCLSID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DoBackEndCLSID( 
            CLSID backEndCLSID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shift( 
            long deltaX,
            long deltaY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionFrontEndVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionFrontEnd * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionFrontEnd * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICursiVisionFrontEnd * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICursiVisionFrontEnd * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_document )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR documentName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_document )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0000);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_resultDocument )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR saveSignedDocumentAsName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_resultDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0001);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_settingsFile )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR settingsFileName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_templateDocument )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR templateDocumentName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_templateDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pTemplateDocumentName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_showCursiVisionToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0002);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_showCursiVisionToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0003);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_showCursiVisionStatusbar )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0004);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_showCursiVisionStatusbar )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0005);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_showAdobeToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0006);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_showAdobeToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0007);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFEnabler )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ IPdfEnabler **__MIDL__ICursiVisionFrontEnd0008);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ IPdfDocument **__MIDL__ICursiVisionFrontEnd0009);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignaturePad )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionFrontEnd0010);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_signedDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0011);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_signingLocationCount )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ long *__MIDL__ICursiVisionFrontEnd0012);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_profileRepository )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR repositoryLocation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_profileRepository )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pRepositoryLocation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_profile )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR profileFileName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_profile )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pProfileFileName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPadConnected )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0013);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICursiVisionFrontEnd * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            ICursiVisionFrontEnd * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CloseDocument )( 
            ICursiVisionFrontEnd * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            ICursiVisionFrontEnd * This,
            BSTR fileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SavePrompt )( 
            ICursiVisionFrontEnd * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UseBackEndCLSID )( 
            ICursiVisionFrontEnd * This,
            CLSID backEndCLSID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoBackEndCLSID )( 
            ICursiVisionFrontEnd * This,
            CLSID backEndCLSID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shift )( 
            ICursiVisionFrontEnd * This,
            long deltaX,
            long deltaY);
        
        END_INTERFACE
    } ICursiVisionFrontEndVtbl;

    interface ICursiVisionFrontEnd
    {
        CONST_VTBL struct ICursiVisionFrontEndVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionFrontEnd_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionFrontEnd_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionFrontEnd_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionFrontEnd_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICursiVisionFrontEnd_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICursiVisionFrontEnd_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICursiVisionFrontEnd_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICursiVisionFrontEnd_put_document(This,documentName)	\
    ( (This)->lpVtbl -> put_document(This,documentName) ) 

#define ICursiVisionFrontEnd_get_document(This,__MIDL__ICursiVisionFrontEnd0000)	\
    ( (This)->lpVtbl -> get_document(This,__MIDL__ICursiVisionFrontEnd0000) ) 

#define ICursiVisionFrontEnd_put_resultDocument(This,saveSignedDocumentAsName)	\
    ( (This)->lpVtbl -> put_resultDocument(This,saveSignedDocumentAsName) ) 

#define ICursiVisionFrontEnd_get_resultDocument(This,__MIDL__ICursiVisionFrontEnd0001)	\
    ( (This)->lpVtbl -> get_resultDocument(This,__MIDL__ICursiVisionFrontEnd0001) ) 

#define ICursiVisionFrontEnd_put_settingsFile(This,settingsFileName)	\
    ( (This)->lpVtbl -> put_settingsFile(This,settingsFileName) ) 

#define ICursiVisionFrontEnd_put_templateDocument(This,templateDocumentName)	\
    ( (This)->lpVtbl -> put_templateDocument(This,templateDocumentName) ) 

#define ICursiVisionFrontEnd_get_templateDocument(This,pTemplateDocumentName)	\
    ( (This)->lpVtbl -> get_templateDocument(This,pTemplateDocumentName) ) 

#define ICursiVisionFrontEnd_put_showCursiVisionToolbar(This,__MIDL__ICursiVisionFrontEnd0002)	\
    ( (This)->lpVtbl -> put_showCursiVisionToolbar(This,__MIDL__ICursiVisionFrontEnd0002) ) 

#define ICursiVisionFrontEnd_get_showCursiVisionToolbar(This,__MIDL__ICursiVisionFrontEnd0003)	\
    ( (This)->lpVtbl -> get_showCursiVisionToolbar(This,__MIDL__ICursiVisionFrontEnd0003) ) 

#define ICursiVisionFrontEnd_put_showCursiVisionStatusbar(This,__MIDL__ICursiVisionFrontEnd0004)	\
    ( (This)->lpVtbl -> put_showCursiVisionStatusbar(This,__MIDL__ICursiVisionFrontEnd0004) ) 

#define ICursiVisionFrontEnd_get_showCursiVisionStatusbar(This,__MIDL__ICursiVisionFrontEnd0005)	\
    ( (This)->lpVtbl -> get_showCursiVisionStatusbar(This,__MIDL__ICursiVisionFrontEnd0005) ) 

#define ICursiVisionFrontEnd_put_showAdobeToolbar(This,__MIDL__ICursiVisionFrontEnd0006)	\
    ( (This)->lpVtbl -> put_showAdobeToolbar(This,__MIDL__ICursiVisionFrontEnd0006) ) 

#define ICursiVisionFrontEnd_get_showAdobeToolbar(This,__MIDL__ICursiVisionFrontEnd0007)	\
    ( (This)->lpVtbl -> get_showAdobeToolbar(This,__MIDL__ICursiVisionFrontEnd0007) ) 

#define ICursiVisionFrontEnd_get_PDFEnabler(This,__MIDL__ICursiVisionFrontEnd0008)	\
    ( (This)->lpVtbl -> get_PDFEnabler(This,__MIDL__ICursiVisionFrontEnd0008) ) 

#define ICursiVisionFrontEnd_get_PDFDocument(This,__MIDL__ICursiVisionFrontEnd0009)	\
    ( (This)->lpVtbl -> get_PDFDocument(This,__MIDL__ICursiVisionFrontEnd0009) ) 

#define ICursiVisionFrontEnd_get_SignaturePad(This,__MIDL__ICursiVisionFrontEnd0010)	\
    ( (This)->lpVtbl -> get_SignaturePad(This,__MIDL__ICursiVisionFrontEnd0010) ) 

#define ICursiVisionFrontEnd_get_signedDocument(This,__MIDL__ICursiVisionFrontEnd0011)	\
    ( (This)->lpVtbl -> get_signedDocument(This,__MIDL__ICursiVisionFrontEnd0011) ) 

#define ICursiVisionFrontEnd_get_signingLocationCount(This,__MIDL__ICursiVisionFrontEnd0012)	\
    ( (This)->lpVtbl -> get_signingLocationCount(This,__MIDL__ICursiVisionFrontEnd0012) ) 

#define ICursiVisionFrontEnd_put_profileRepository(This,repositoryLocation)	\
    ( (This)->lpVtbl -> put_profileRepository(This,repositoryLocation) ) 

#define ICursiVisionFrontEnd_get_profileRepository(This,pRepositoryLocation)	\
    ( (This)->lpVtbl -> get_profileRepository(This,pRepositoryLocation) ) 

#define ICursiVisionFrontEnd_put_profile(This,profileFileName)	\
    ( (This)->lpVtbl -> put_profile(This,profileFileName) ) 

#define ICursiVisionFrontEnd_get_profile(This,pProfileFileName)	\
    ( (This)->lpVtbl -> get_profile(This,pProfileFileName) ) 

#define ICursiVisionFrontEnd_get_IsPadConnected(This,__MIDL__ICursiVisionFrontEnd0013)	\
    ( (This)->lpVtbl -> get_IsPadConnected(This,__MIDL__ICursiVisionFrontEnd0013) ) 

#define ICursiVisionFrontEnd_Sign(This)	\
    ( (This)->lpVtbl -> Sign(This) ) 

#define ICursiVisionFrontEnd_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define ICursiVisionFrontEnd_CloseDocument(This)	\
    ( (This)->lpVtbl -> CloseDocument(This) ) 

#define ICursiVisionFrontEnd_SaveAs(This,fileName)	\
    ( (This)->lpVtbl -> SaveAs(This,fileName) ) 

#define ICursiVisionFrontEnd_SavePrompt(This)	\
    ( (This)->lpVtbl -> SavePrompt(This) ) 

#define ICursiVisionFrontEnd_UseBackEndCLSID(This,backEndCLSID)	\
    ( (This)->lpVtbl -> UseBackEndCLSID(This,backEndCLSID) ) 

#define ICursiVisionFrontEnd_DoBackEndCLSID(This,backEndCLSID)	\
    ( (This)->lpVtbl -> DoBackEndCLSID(This,backEndCLSID) ) 

#define ICursiVisionFrontEnd_Shift(This,deltaX,deltaY)	\
    ( (This)->lpVtbl -> Shift(This,deltaX,deltaY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionFrontEnd_INTERFACE_DEFINED__ */


#ifndef __ICursiVisionEvents_INTERFACE_DEFINED__
#define __ICursiVisionEvents_INTERFACE_DEFINED__

/* interface ICursiVisionEvents */
/* [object][helpstring][unique][nonextensible][uuid] */ 


DEFINE_GUID(IID_ICursiVisionEvents,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x44);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570344")
    ICursiVisionEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DocumentStaged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentOpened( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentClosed( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentSigned( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentSaved( 
            BSTR savedFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AwaitingSignature( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NoPadException( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExitRequested( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenDown( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenUp( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenPoint( 
            long x,
            long y) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DocumentStaged )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DocumentOpened )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DocumentClosed )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DocumentSigned )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *DocumentSaved )( 
            ICursiVisionEvents * This,
            BSTR savedFileName);
        
        HRESULT ( STDMETHODCALLTYPE *AwaitingSignature )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *NoPadException )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExitRequested )( 
            ICursiVisionEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *PenDown )( 
            ICursiVisionEvents * This,
            long x,
            long y);
        
        HRESULT ( STDMETHODCALLTYPE *PenUp )( 
            ICursiVisionEvents * This,
            long x,
            long y);
        
        HRESULT ( STDMETHODCALLTYPE *PenPoint )( 
            ICursiVisionEvents * This,
            long x,
            long y);
        
        END_INTERFACE
    } ICursiVisionEventsVtbl;

    interface ICursiVisionEvents
    {
        CONST_VTBL struct ICursiVisionEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionEvents_DocumentStaged(This)	\
    ( (This)->lpVtbl -> DocumentStaged(This) ) 

#define ICursiVisionEvents_DocumentOpened(This)	\
    ( (This)->lpVtbl -> DocumentOpened(This) ) 

#define ICursiVisionEvents_DocumentClosed(This)	\
    ( (This)->lpVtbl -> DocumentClosed(This) ) 

#define ICursiVisionEvents_DocumentSigned(This)	\
    ( (This)->lpVtbl -> DocumentSigned(This) ) 

#define ICursiVisionEvents_DocumentSaved(This,savedFileName)	\
    ( (This)->lpVtbl -> DocumentSaved(This,savedFileName) ) 

#define ICursiVisionEvents_AwaitingSignature(This)	\
    ( (This)->lpVtbl -> AwaitingSignature(This) ) 

#define ICursiVisionEvents_NoPadException(This)	\
    ( (This)->lpVtbl -> NoPadException(This) ) 

#define ICursiVisionEvents_ExitRequested(This)	\
    ( (This)->lpVtbl -> ExitRequested(This) ) 

#define ICursiVisionEvents_PenDown(This,x,y)	\
    ( (This)->lpVtbl -> PenDown(This,x,y) ) 

#define ICursiVisionEvents_PenUp(This,x,y)	\
    ( (This)->lpVtbl -> PenUp(This,x,y) ) 

#define ICursiVisionEvents_PenPoint(This,x,y)	\
    ( (This)->lpVtbl -> PenPoint(This,x,y) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionEvents_INTERFACE_DEFINED__ */


#ifndef __ICursiVisionServices_INTERFACE_DEFINED__
#define __ICursiVisionServices_INTERFACE_DEFINED__

/* interface ICursiVisionServices */
/* [object][helpstring][uuid] */ 


DEFINE_GUID(IID_ICursiVisionServices,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x00);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570300")
    ICursiVisionServices : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SignaturePad( 
            /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionServices0000) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ParentWindow( 
            HWND *pParentWindow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintingSupportProfile( 
            /* [retval][out] */ /* external definition not present */ IPrintingSupportProfile **__MIDL__ICursiVisionServices0001) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintingSupportProfile( 
            /* external definition not present */ IPrintingSupportProfile *__MIDL__ICursiVisionServices0002) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterSignaturePad( 
            BSTR bstrOCXName) = 0;
        
        virtual long STDMETHODCALLTYPE SavedSignatureGraphicCount( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveSignatureGraphic( 
            void *pvSignatureData) = 0;
        
        virtual void *STDMETHODCALLTYPE GetSignatureGraphic( 
            long index) = 0;
        
        virtual void STDMETHODCALLTYPE FreeSignatureGraphic( 
            void *pvSignatureData) = 0;
        
        virtual void STDMETHODCALLTYPE ResetTextOutlines( void) = 0;
        
        virtual void *STDMETHODCALLTYPE GetTextOutlines( 
            long pageNumber,
            long *pReportedPageWidth,
            long *pReportedPageHeight) = 0;
        
        virtual void STDMETHODCALLTYPE FreeTextOutlines( 
            void *pvTextOutlines) = 0;
        
        virtual char *STDMETHODCALLTYPE DocumentName( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateOutlines( 
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage,
            long *pFound) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConvertPixelsToPDF( 
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage) = 0;
        
        virtual long STDMETHODCALLTYPE FieldCount( void) = 0;
        
        virtual char *STDMETHODCALLTYPE FieldLabels( void) = 0;
        
        virtual char *STDMETHODCALLTYPE FieldValue( 
            long index) = 0;
        
        virtual char *STDMETHODCALLTYPE FieldValueFromLabel( 
            char *pszFieldName) = 0;
        
        virtual long STDMETHODCALLTYPE SignatureLocationCount( void) = 0;
        
        virtual struct oleWritingLocation *STDMETHODCALLTYPE SignatureLocations( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsAdministrator( void) = 0;
        
        virtual char *STDMETHODCALLTYPE GlobalDataStore( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetIsAdministrator( 
            BOOL setValue) = 0;
        
        virtual BOOL STDMETHODCALLTYPE EnforceNonAdministrativeRestrictions( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionServices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionServices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionServices * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignaturePad )( 
            ICursiVisionServices * This,
            /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionServices0000);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            ICursiVisionServices * This,
            HWND *pParentWindow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintingSupportProfile )( 
            ICursiVisionServices * This,
            /* [retval][out] */ /* external definition not present */ IPrintingSupportProfile **__MIDL__ICursiVisionServices0001);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintingSupportProfile )( 
            ICursiVisionServices * This,
            /* external definition not present */ IPrintingSupportProfile *__MIDL__ICursiVisionServices0002);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterSignaturePad )( 
            ICursiVisionServices * This,
            BSTR bstrOCXName);
        
        long ( STDMETHODCALLTYPE *SavedSignatureGraphicCount )( 
            ICursiVisionServices * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveSignatureGraphic )( 
            ICursiVisionServices * This,
            void *pvSignatureData);
        
        void *( STDMETHODCALLTYPE *GetSignatureGraphic )( 
            ICursiVisionServices * This,
            long index);
        
        void ( STDMETHODCALLTYPE *FreeSignatureGraphic )( 
            ICursiVisionServices * This,
            void *pvSignatureData);
        
        void ( STDMETHODCALLTYPE *ResetTextOutlines )( 
            ICursiVisionServices * This);
        
        void *( STDMETHODCALLTYPE *GetTextOutlines )( 
            ICursiVisionServices * This,
            long pageNumber,
            long *pReportedPageWidth,
            long *pReportedPageHeight);
        
        void ( STDMETHODCALLTYPE *FreeTextOutlines )( 
            ICursiVisionServices * This,
            void *pvTextOutlines);
        
        char *( STDMETHODCALLTYPE *DocumentName )( 
            ICursiVisionServices * This);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateOutlines )( 
            ICursiVisionServices * This,
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage,
            long *pFound);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertPixelsToPDF )( 
            ICursiVisionServices * This,
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage);
        
        long ( STDMETHODCALLTYPE *FieldCount )( 
            ICursiVisionServices * This);
        
        char *( STDMETHODCALLTYPE *FieldLabels )( 
            ICursiVisionServices * This);
        
        char *( STDMETHODCALLTYPE *FieldValue )( 
            ICursiVisionServices * This,
            long index);
        
        char *( STDMETHODCALLTYPE *FieldValueFromLabel )( 
            ICursiVisionServices * This,
            char *pszFieldName);
        
        long ( STDMETHODCALLTYPE *SignatureLocationCount )( 
            ICursiVisionServices * This);
        
        struct oleWritingLocation *( STDMETHODCALLTYPE *SignatureLocations )( 
            ICursiVisionServices * This);
        
        BOOL ( STDMETHODCALLTYPE *IsAdministrator )( 
            ICursiVisionServices * This);
        
        char *( STDMETHODCALLTYPE *GlobalDataStore )( 
            ICursiVisionServices * This);
        
        void ( STDMETHODCALLTYPE *SetIsAdministrator )( 
            ICursiVisionServices * This,
            BOOL setValue);
        
        BOOL ( STDMETHODCALLTYPE *EnforceNonAdministrativeRestrictions )( 
            ICursiVisionServices * This);
        
        END_INTERFACE
    } ICursiVisionServicesVtbl;

    interface ICursiVisionServices
    {
        CONST_VTBL struct ICursiVisionServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionServices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionServices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionServices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionServices_get_SignaturePad(This,__MIDL__ICursiVisionServices0000)	\
    ( (This)->lpVtbl -> get_SignaturePad(This,__MIDL__ICursiVisionServices0000) ) 

#define ICursiVisionServices_get_ParentWindow(This,pParentWindow)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,pParentWindow) ) 

#define ICursiVisionServices_get_PrintingSupportProfile(This,__MIDL__ICursiVisionServices0001)	\
    ( (This)->lpVtbl -> get_PrintingSupportProfile(This,__MIDL__ICursiVisionServices0001) ) 

#define ICursiVisionServices_put_PrintingSupportProfile(This,__MIDL__ICursiVisionServices0002)	\
    ( (This)->lpVtbl -> put_PrintingSupportProfile(This,__MIDL__ICursiVisionServices0002) ) 

#define ICursiVisionServices_RegisterSignaturePad(This,bstrOCXName)	\
    ( (This)->lpVtbl -> RegisterSignaturePad(This,bstrOCXName) ) 

#define ICursiVisionServices_SavedSignatureGraphicCount(This)	\
    ( (This)->lpVtbl -> SavedSignatureGraphicCount(This) ) 

#define ICursiVisionServices_SaveSignatureGraphic(This,pvSignatureData)	\
    ( (This)->lpVtbl -> SaveSignatureGraphic(This,pvSignatureData) ) 

#define ICursiVisionServices_GetSignatureGraphic(This,index)	\
    ( (This)->lpVtbl -> GetSignatureGraphic(This,index) ) 

#define ICursiVisionServices_FreeSignatureGraphic(This,pvSignatureData)	\
    ( (This)->lpVtbl -> FreeSignatureGraphic(This,pvSignatureData) ) 

#define ICursiVisionServices_ResetTextOutlines(This)	\
    ( (This)->lpVtbl -> ResetTextOutlines(This) ) 

#define ICursiVisionServices_GetTextOutlines(This,pageNumber,pReportedPageWidth,pReportedPageHeight)	\
    ( (This)->lpVtbl -> GetTextOutlines(This,pageNumber,pReportedPageWidth,pReportedPageHeight) ) 

#define ICursiVisionServices_FreeTextOutlines(This,pvTextOutlines)	\
    ( (This)->lpVtbl -> FreeTextOutlines(This,pvTextOutlines) ) 

#define ICursiVisionServices_DocumentName(This)	\
    ( (This)->lpVtbl -> DocumentName(This) ) 

#define ICursiVisionServices_GenerateOutlines(This,pszPrintedDocument,pszCurrentOutlinesFile,startPage,maxPDFPage,pFound)	\
    ( (This)->lpVtbl -> GenerateOutlines(This,pszPrintedDocument,pszCurrentOutlinesFile,startPage,maxPDFPage,pFound) ) 

#define ICursiVisionServices_ConvertPixelsToPDF(This,pszPrintedDocument,pszCurrentOutlinesFile,startPage,maxPDFPage)	\
    ( (This)->lpVtbl -> ConvertPixelsToPDF(This,pszPrintedDocument,pszCurrentOutlinesFile,startPage,maxPDFPage) ) 

#define ICursiVisionServices_FieldCount(This)	\
    ( (This)->lpVtbl -> FieldCount(This) ) 

#define ICursiVisionServices_FieldLabels(This)	\
    ( (This)->lpVtbl -> FieldLabels(This) ) 

#define ICursiVisionServices_FieldValue(This,index)	\
    ( (This)->lpVtbl -> FieldValue(This,index) ) 

#define ICursiVisionServices_FieldValueFromLabel(This,pszFieldName)	\
    ( (This)->lpVtbl -> FieldValueFromLabel(This,pszFieldName) ) 

#define ICursiVisionServices_SignatureLocationCount(This)	\
    ( (This)->lpVtbl -> SignatureLocationCount(This) ) 

#define ICursiVisionServices_SignatureLocations(This)	\
    ( (This)->lpVtbl -> SignatureLocations(This) ) 

#define ICursiVisionServices_IsAdministrator(This)	\
    ( (This)->lpVtbl -> IsAdministrator(This) ) 

#define ICursiVisionServices_GlobalDataStore(This)	\
    ( (This)->lpVtbl -> GlobalDataStore(This) ) 

#define ICursiVisionServices_SetIsAdministrator(This,setValue)	\
    ( (This)->lpVtbl -> SetIsAdministrator(This,setValue) ) 

#define ICursiVisionServices_EnforceNonAdministrativeRestrictions(This)	\
    ( (This)->lpVtbl -> EnforceNonAdministrativeRestrictions(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionServices_INTERFACE_DEFINED__ */


#ifndef __ICursiVisionBackEnd_INTERFACE_DEFINED__
#define __ICursiVisionBackEnd_INTERFACE_DEFINED__

/* interface ICursiVisionBackEnd */
/* [object][helpstring][unique][nonextensible][uuid] */ 


DEFINE_GUID(IID_ICursiVisionBackEnd,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x37);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570337")
    ICursiVisionBackEnd : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PropertiesFileName( 
            /* [retval][out] */ BSTR *pPropertiesFileName) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PropertiesFileName( 
            /* [in] */ BSTR propertiesFileName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CodeName( 
            /* [retval][out] */ BSTR *pANameThatDistinguishesThisBackEndFromOthers) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SavedDocumentName( 
            /* [retval][out] */ BSTR *pTheSavedDocumentNameReturnNOT_IMPLIfNotSaved) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CommandLine( 
            /* [in] */ BSTR commandLine) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintingSupportProfile( 
            /* [in] */ /* external definition not present */ IPrintingSupportProfile *pPrintingProfile) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pDescription) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Dispose( 
            BSTR inputFile,
            BSTR resultsFile,
            BSTR graphicDataFile,
            BSTR settingsFileName,
            BSTR topazSignature,
            BOOL isTempFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanRunFromTools( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanRunFromCursiVisionControl( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ServicesAdvise( 
            /* [in] */ ICursiVisionServices *__MIDL__ICursiVisionBackEnd0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionBackEndVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionBackEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionBackEnd * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionBackEnd * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PropertiesFileName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pPropertiesFileName);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PropertiesFileName )( 
            ICursiVisionBackEnd * This,
            /* [in] */ BSTR propertiesFileName);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pANameThatDistinguishesThisBackEndFromOthers);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            ICursiVisionBackEnd * This,
            /* [in] */ HWND hwndParent);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SavedDocumentName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pTheSavedDocumentNameReturnNOT_IMPLIfNotSaved);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CommandLine )( 
            ICursiVisionBackEnd * This,
            /* [in] */ BSTR commandLine);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintingSupportProfile )( 
            ICursiVisionBackEnd * This,
            /* [in] */ /* external definition not present */ IPrintingSupportProfile *pPrintingProfile);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pDescription);
        
        HRESULT ( STDMETHODCALLTYPE *Dispose )( 
            ICursiVisionBackEnd * This,
            BSTR inputFile,
            BSTR resultsFile,
            BSTR graphicDataFile,
            BSTR settingsFileName,
            BSTR topazSignature,
            BOOL isTempFile);
        
        HRESULT ( STDMETHODCALLTYPE *CanRunFromTools )( 
            ICursiVisionBackEnd * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanRunFromCursiVisionControl )( 
            ICursiVisionBackEnd * This);
        
        HRESULT ( STDMETHODCALLTYPE *ServicesAdvise )( 
            ICursiVisionBackEnd * This,
            /* [in] */ ICursiVisionServices *__MIDL__ICursiVisionBackEnd0000);
        
        END_INTERFACE
    } ICursiVisionBackEndVtbl;

    interface ICursiVisionBackEnd
    {
        CONST_VTBL struct ICursiVisionBackEndVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionBackEnd_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionBackEnd_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionBackEnd_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionBackEnd_get_PropertiesFileName(This,pPropertiesFileName)	\
    ( (This)->lpVtbl -> get_PropertiesFileName(This,pPropertiesFileName) ) 

#define ICursiVisionBackEnd_put_PropertiesFileName(This,propertiesFileName)	\
    ( (This)->lpVtbl -> put_PropertiesFileName(This,propertiesFileName) ) 

#define ICursiVisionBackEnd_get_CodeName(This,pANameThatDistinguishesThisBackEndFromOthers)	\
    ( (This)->lpVtbl -> get_CodeName(This,pANameThatDistinguishesThisBackEndFromOthers) ) 

#define ICursiVisionBackEnd_put_ParentWindow(This,hwndParent)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,hwndParent) ) 

#define ICursiVisionBackEnd_get_SavedDocumentName(This,pTheSavedDocumentNameReturnNOT_IMPLIfNotSaved)	\
    ( (This)->lpVtbl -> get_SavedDocumentName(This,pTheSavedDocumentNameReturnNOT_IMPLIfNotSaved) ) 

#define ICursiVisionBackEnd_put_CommandLine(This,commandLine)	\
    ( (This)->lpVtbl -> put_CommandLine(This,commandLine) ) 

#define ICursiVisionBackEnd_put_PrintingSupportProfile(This,pPrintingProfile)	\
    ( (This)->lpVtbl -> put_PrintingSupportProfile(This,pPrintingProfile) ) 

#define ICursiVisionBackEnd_get_Description(This,pDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pDescription) ) 

#define ICursiVisionBackEnd_Dispose(This,inputFile,resultsFile,graphicDataFile,settingsFileName,topazSignature,isTempFile)	\
    ( (This)->lpVtbl -> Dispose(This,inputFile,resultsFile,graphicDataFile,settingsFileName,topazSignature,isTempFile) ) 

#define ICursiVisionBackEnd_CanRunFromTools(This)	\
    ( (This)->lpVtbl -> CanRunFromTools(This) ) 

#define ICursiVisionBackEnd_CanRunFromCursiVisionControl(This)	\
    ( (This)->lpVtbl -> CanRunFromCursiVisionControl(This) ) 

#define ICursiVisionBackEnd_ServicesAdvise(This,__MIDL__ICursiVisionBackEnd0000)	\
    ( (This)->lpVtbl -> ServicesAdvise(This,__MIDL__ICursiVisionBackEnd0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionBackEnd_INTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_CursiVision,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x39);

#ifdef __cplusplus

class DECLSPEC_UUID("A64AB7AF-8A26-4f07-8877-56FE99570339")
CursiVision;
#endif
#endif /* __CursiVision_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


