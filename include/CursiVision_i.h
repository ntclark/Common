

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for CursiVision.odl:
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


#ifndef __CursiVision_i_h__
#define __CursiVision_i_h__

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
    long pdfPageNumber;
    RECT documentRect;
    BOOL isWrittenTo;
    BOOL isRequestedViewSet;
    char szDescription[ 128 ];
    char szOtherInformation[ 32 ];
    UINT_PTR packageCookie;
    UINT_PTR pImageField;
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
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFEnabler( 
            /* [retval][out] */ /* external definition not present */ IPdfEnabler **__MIDL__ICursiVisionFrontEnd0006) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDocument( 
            /* [retval][out] */ /* external definition not present */ IPdfDocument **__MIDL__ICursiVisionFrontEnd0007) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SignaturePad( 
            /* [retval][out] */ /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionFrontEnd0008) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_signedDocument( 
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0009) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_signingLocationCount( 
            /* [retval][out] */ long *__MIDL__ICursiVisionFrontEnd0010) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_profileRepository( 
            /* [in] */ BSTR repositoryLocation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_profileRepository( 
            /* [retval][out] */ BSTR *pRepositoryLocation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_profile( 
            /* [in] */ BSTR profileFileName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_profile( 
            /* [retval][out] */ BSTR *pProfileFileName) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPadConnected( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0011) = 0;
        
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
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICursiVisionFrontEnd * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
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
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_document)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_document )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR documentName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_document)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_document )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0000);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_resultDocument)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_resultDocument )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR saveSignedDocumentAsName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_resultDocument)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_resultDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0001);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_settingsFile)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_settingsFile )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR settingsFileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_templateDocument)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_templateDocument )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR templateDocumentName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_templateDocument)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_templateDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pTemplateDocumentName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_showCursiVisionToolbar)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_showCursiVisionToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0002);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_showCursiVisionToolbar)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_showCursiVisionToolbar )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0003);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_showCursiVisionStatusbar)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_showCursiVisionStatusbar )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ VARIANT_BOOL __MIDL__ICursiVisionFrontEnd0004);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_showCursiVisionStatusbar)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_showCursiVisionStatusbar )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0005);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_PDFEnabler)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFEnabler )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ IPdfEnabler **__MIDL__ICursiVisionFrontEnd0006);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_PDFDocument)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ IPdfDocument **__MIDL__ICursiVisionFrontEnd0007);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_SignaturePad)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignaturePad )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionFrontEnd0008);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_signedDocument)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_signedDocument )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *__MIDL__ICursiVisionFrontEnd0009);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_signingLocationCount)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_signingLocationCount )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ long *__MIDL__ICursiVisionFrontEnd0010);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_profileRepository)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_profileRepository )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR repositoryLocation);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_profileRepository)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_profileRepository )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pRepositoryLocation);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, put_profile)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_profile )( 
            ICursiVisionFrontEnd * This,
            /* [in] */ BSTR profileFileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_profile)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_profile )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ BSTR *pProfileFileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, get_IsPadConnected)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPadConnected )( 
            ICursiVisionFrontEnd * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__ICursiVisionFrontEnd0011);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, Sign)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, Cancel)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, CloseDocument)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CloseDocument )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, SaveAs)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            ICursiVisionFrontEnd * This,
            BSTR fileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, SavePrompt)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SavePrompt )( 
            ICursiVisionFrontEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, UseBackEndCLSID)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UseBackEndCLSID )( 
            ICursiVisionFrontEnd * This,
            CLSID backEndCLSID);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, DoBackEndCLSID)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DoBackEndCLSID )( 
            ICursiVisionFrontEnd * This,
            CLSID backEndCLSID);
        
        DECLSPEC_XFGVIRT(ICursiVisionFrontEnd, Shift)
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

#define ICursiVisionFrontEnd_get_PDFEnabler(This,__MIDL__ICursiVisionFrontEnd0006)	\
    ( (This)->lpVtbl -> get_PDFEnabler(This,__MIDL__ICursiVisionFrontEnd0006) ) 

#define ICursiVisionFrontEnd_get_PDFDocument(This,__MIDL__ICursiVisionFrontEnd0007)	\
    ( (This)->lpVtbl -> get_PDFDocument(This,__MIDL__ICursiVisionFrontEnd0007) ) 

#define ICursiVisionFrontEnd_get_SignaturePad(This,__MIDL__ICursiVisionFrontEnd0008)	\
    ( (This)->lpVtbl -> get_SignaturePad(This,__MIDL__ICursiVisionFrontEnd0008) ) 

#define ICursiVisionFrontEnd_get_signedDocument(This,__MIDL__ICursiVisionFrontEnd0009)	\
    ( (This)->lpVtbl -> get_signedDocument(This,__MIDL__ICursiVisionFrontEnd0009) ) 

#define ICursiVisionFrontEnd_get_signingLocationCount(This,__MIDL__ICursiVisionFrontEnd0010)	\
    ( (This)->lpVtbl -> get_signingLocationCount(This,__MIDL__ICursiVisionFrontEnd0010) ) 

#define ICursiVisionFrontEnd_put_profileRepository(This,repositoryLocation)	\
    ( (This)->lpVtbl -> put_profileRepository(This,repositoryLocation) ) 

#define ICursiVisionFrontEnd_get_profileRepository(This,pRepositoryLocation)	\
    ( (This)->lpVtbl -> get_profileRepository(This,pRepositoryLocation) ) 

#define ICursiVisionFrontEnd_put_profile(This,profileFileName)	\
    ( (This)->lpVtbl -> put_profile(This,profileFileName) ) 

#define ICursiVisionFrontEnd_get_profile(This,pProfileFileName)	\
    ( (This)->lpVtbl -> get_profile(This,pProfileFileName) ) 

#define ICursiVisionFrontEnd_get_IsPadConnected(This,__MIDL__ICursiVisionFrontEnd0011)	\
    ( (This)->lpVtbl -> get_IsPadConnected(This,__MIDL__ICursiVisionFrontEnd0011) ) 

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
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionEvents * This);
        
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
        
        virtual BOOL STDMETHODCALLTYPE EnforceNonAdministrativeRestrictions( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowToolboxPropertyChanges( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChanges( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowPrintProfileChangesSetting( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE AllowDiagnosticImages( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetAllowPrintProfileChanges( 
            BOOL doAllow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveFieldGroupCookie( 
            UINT_PTR *fieldGroupCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveFieldGroupName( 
            BSTR *pbstrName) = 0;
        
        virtual ULONG_PTR STDMETHODCALLTYPE GetImageField( 
            GUID *pID) = 0;
        
        virtual ULONG_PTR STDMETHODCALLTYPE GetGroupImageField( 
            UINT_PTR fieldGroupCookie,
            GUID *pID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetImageFields( 
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedImageFields( 
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptionalImageFields( 
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectedOptionalImageFields( 
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPageFinderImageFields( 
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetImageFieldOrder( 
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOrderString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetImageFieldSelected( 
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldRequiredString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptionalImageFieldOrder( 
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOrderString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptionalImageFieldSelected( 
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOptionalString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPageFinderImageFieldOrder( 
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldPageFinderString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortedImageFields( 
            UINT_PTR fieldGroupCookie,
            char *pszSortingString,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSortedOptionalImageFields( 
            UINT_PTR fieldGroupCookie,
            char *pszSortingString,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllPackagesFirstImageFields( 
            GUID *pProfileID,
            SAFEARRAY **ppSAImageFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAllPackagesProfilesFolders( 
            SAFEARRAY **ppSAProfileFolders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActivePackageProfilesFolder( 
            char *pszActivePackageProfileFolder,
            DWORD cbString) = 0;
        
        virtual UINT_PTR STDMETHODCALLTYPE GetImageFieldPackageCookie( 
            UINT_PTR pImageField) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsImageFieldSelected( 
            UINT_PTR pImageField,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIsOptionalImageFieldSelected( 
            UINT_PTR pImageField,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseImageFields( 
            BOOL saveFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseGroupImageFields( 
            UINT_PTR fieldGroupCookie,
            BOOL saveFields) = 0;
        
        virtual void STDMETHODCALLTYPE DestroyImageField( 
            UINT_PTR *pImageField) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowImageFieldProperties( 
            HWND hwndParent,
            GUID *pID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatusText( 
            char *pszStatusText,
            /* [defaultvalue] */ long timeOutDuration = 0xffffffff) = 0;
        
        virtual double STDMETHODCALLTYPE OpenCVMatchThreshold( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadFile( 
            char *pszBucketName,
            char *pszFileName,
            char *pszTargetName,
            BOOL deleteAfterUpload) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyCanCancel( 
            BOOL canCancel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnabledPackages( 
            SAFEARRAY **ppSAEnabledPackages) = 0;
        
        virtual char *STDMETHODCALLTYPE SignerPrompt( 
            GUID *pSignerTypeID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultSignatureAreaSize( 
            SIZEL *pSizeSignatureArea) = 0;
        
        virtual BOOL STDMETHODCALLTYPE MayShowDispositionSettings( void) = 0;
        
        virtual ULONG_PTR STDMETHODCALLTYPE GetDefaultResultDisposition( void) = 0;
        
        virtual ULONG_PTR STDMETHODCALLTYPE GetDefaultPackagesResultDisposition( void) = 0;
        
        virtual HMODULE STDMETHODCALLTYPE ResourcesModule( void) = 0;
        
        virtual char *STDMETHODCALLTYPE SetSalePending( 
            DWORD *pSalePendingId,
            char *pszProduct,
            char *pszVersion,
            char *pszMachineId,
            char *pszContact,
            char *pszOrganization,
            char *pszPhone,
            char *pszEmail,
            char **ppszStripePurchaseURL,
            HWND hwndPurchasingDialog,
            DWORD idCancelButton) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnablePurchaseCancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelPendingSale( void) = 0;
        
        virtual char *STDMETHODCALLTYPE GetEncodedContactString( 
            char *pszContact,
            char *pszOrganization,
            char *pszPhone,
            char *pszEmail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveSalePendingStatus( 
            char *pszServerResponse) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionServicesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionServices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, get_SignaturePad)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignaturePad )( 
            ICursiVisionServices * This,
            /* external definition not present */ ISignaturePad **__MIDL__ICursiVisionServices0000);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, get_ParentWindow)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            ICursiVisionServices * This,
            HWND *pParentWindow);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, get_PrintingSupportProfile)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintingSupportProfile )( 
            ICursiVisionServices * This,
            /* [retval][out] */ /* external definition not present */ IPrintingSupportProfile **__MIDL__ICursiVisionServices0001);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, put_PrintingSupportProfile)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintingSupportProfile )( 
            ICursiVisionServices * This,
            /* external definition not present */ IPrintingSupportProfile *__MIDL__ICursiVisionServices0002);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, RegisterSignaturePad)
        HRESULT ( STDMETHODCALLTYPE *RegisterSignaturePad )( 
            ICursiVisionServices * This,
            BSTR bstrOCXName);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SavedSignatureGraphicCount)
        long ( STDMETHODCALLTYPE *SavedSignatureGraphicCount )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SaveSignatureGraphic)
        HRESULT ( STDMETHODCALLTYPE *SaveSignatureGraphic )( 
            ICursiVisionServices * This,
            void *pvSignatureData);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetSignatureGraphic)
        void *( STDMETHODCALLTYPE *GetSignatureGraphic )( 
            ICursiVisionServices * This,
            long index);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FreeSignatureGraphic)
        void ( STDMETHODCALLTYPE *FreeSignatureGraphic )( 
            ICursiVisionServices * This,
            void *pvSignatureData);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ResetTextOutlines)
        void ( STDMETHODCALLTYPE *ResetTextOutlines )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetTextOutlines)
        void *( STDMETHODCALLTYPE *GetTextOutlines )( 
            ICursiVisionServices * This,
            long pageNumber,
            long *pReportedPageWidth,
            long *pReportedPageHeight);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FreeTextOutlines)
        void ( STDMETHODCALLTYPE *FreeTextOutlines )( 
            ICursiVisionServices * This,
            void *pvTextOutlines);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, DocumentName)
        char *( STDMETHODCALLTYPE *DocumentName )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GenerateOutlines)
        HRESULT ( STDMETHODCALLTYPE *GenerateOutlines )( 
            ICursiVisionServices * This,
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage,
            long *pFound);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ConvertPixelsToPDF)
        HRESULT ( STDMETHODCALLTYPE *ConvertPixelsToPDF )( 
            ICursiVisionServices * This,
            char *pszPrintedDocument,
            char *pszCurrentOutlinesFile,
            long startPage,
            long maxPDFPage);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FieldCount)
        long ( STDMETHODCALLTYPE *FieldCount )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FieldLabels)
        char *( STDMETHODCALLTYPE *FieldLabels )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FieldValue)
        char *( STDMETHODCALLTYPE *FieldValue )( 
            ICursiVisionServices * This,
            long index);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, FieldValueFromLabel)
        char *( STDMETHODCALLTYPE *FieldValueFromLabel )( 
            ICursiVisionServices * This,
            char *pszFieldName);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SignatureLocationCount)
        long ( STDMETHODCALLTYPE *SignatureLocationCount )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SignatureLocations)
        struct oleWritingLocation *( STDMETHODCALLTYPE *SignatureLocations )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, IsAdministrator)
        BOOL ( STDMETHODCALLTYPE *IsAdministrator )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GlobalDataStore)
        char *( STDMETHODCALLTYPE *GlobalDataStore )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, EnforceNonAdministrativeRestrictions)
        BOOL ( STDMETHODCALLTYPE *EnforceNonAdministrativeRestrictions )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, AllowToolboxPropertyChanges)
        BOOL ( STDMETHODCALLTYPE *AllowToolboxPropertyChanges )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, AllowPrintProfileChanges)
        BOOL ( STDMETHODCALLTYPE *AllowPrintProfileChanges )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, AllowPrintProfileChangesSetting)
        BOOL ( STDMETHODCALLTYPE *AllowPrintProfileChangesSetting )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, AllowDiagnosticImages)
        BOOL ( STDMETHODCALLTYPE *AllowDiagnosticImages )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetAllowPrintProfileChanges)
        void ( STDMETHODCALLTYPE *SetAllowPrintProfileChanges )( 
            ICursiVisionServices * This,
            BOOL doAllow);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetActiveFieldGroupCookie)
        HRESULT ( STDMETHODCALLTYPE *GetActiveFieldGroupCookie )( 
            ICursiVisionServices * This,
            UINT_PTR *fieldGroupCookie);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetActiveFieldGroupName)
        HRESULT ( STDMETHODCALLTYPE *GetActiveFieldGroupName )( 
            ICursiVisionServices * This,
            BSTR *pbstrName);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetImageField)
        ULONG_PTR ( STDMETHODCALLTYPE *GetImageField )( 
            ICursiVisionServices * This,
            GUID *pID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetGroupImageField)
        ULONG_PTR ( STDMETHODCALLTYPE *GetGroupImageField )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetSelectedImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetSelectedImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetOptionalImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetOptionalImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetSelectedOptionalImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetSelectedOptionalImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetPageFinderImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetPageFinderImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookieZeroForAll,
            GUID *profileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetImageFieldOrder)
        HRESULT ( STDMETHODCALLTYPE *SetImageFieldOrder )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOrderString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetImageFieldSelected)
        HRESULT ( STDMETHODCALLTYPE *SetImageFieldSelected )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldRequiredString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetOptionalImageFieldOrder)
        HRESULT ( STDMETHODCALLTYPE *SetOptionalImageFieldOrder )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOrderString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetOptionalImageFieldSelected)
        HRESULT ( STDMETHODCALLTYPE *SetOptionalImageFieldSelected )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldOptionalString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetPageFinderImageFieldOrder)
        HRESULT ( STDMETHODCALLTYPE *SetPageFinderImageFieldOrder )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID,
            char *pszFieldPageFinderString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetSortedImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetSortedImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            char *pszSortingString,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetSortedOptionalImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetSortedOptionalImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            char *pszSortingString,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetAllPackagesFirstImageFields)
        HRESULT ( STDMETHODCALLTYPE *GetAllPackagesFirstImageFields )( 
            ICursiVisionServices * This,
            GUID *pProfileID,
            SAFEARRAY **ppSAImageFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetAllPackagesProfilesFolders)
        HRESULT ( STDMETHODCALLTYPE *GetAllPackagesProfilesFolders )( 
            ICursiVisionServices * This,
            SAFEARRAY **ppSAProfileFolders);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetActivePackageProfilesFolder)
        HRESULT ( STDMETHODCALLTYPE *GetActivePackageProfilesFolder )( 
            ICursiVisionServices * This,
            char *pszActivePackageProfileFolder,
            DWORD cbString);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetImageFieldPackageCookie)
        UINT_PTR ( STDMETHODCALLTYPE *GetImageFieldPackageCookie )( 
            ICursiVisionServices * This,
            UINT_PTR pImageField);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetIsImageFieldSelected)
        HRESULT ( STDMETHODCALLTYPE *GetIsImageFieldSelected )( 
            ICursiVisionServices * This,
            UINT_PTR pImageField,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetIsOptionalImageFieldSelected)
        HRESULT ( STDMETHODCALLTYPE *GetIsOptionalImageFieldSelected )( 
            ICursiVisionServices * This,
            UINT_PTR pImageField,
            UINT_PTR fieldGroupCookie,
            GUID *pProfileID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ReleaseImageFields)
        HRESULT ( STDMETHODCALLTYPE *ReleaseImageFields )( 
            ICursiVisionServices * This,
            BOOL saveFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ReleaseGroupImageFields)
        HRESULT ( STDMETHODCALLTYPE *ReleaseGroupImageFields )( 
            ICursiVisionServices * This,
            UINT_PTR fieldGroupCookie,
            BOOL saveFields);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, DestroyImageField)
        void ( STDMETHODCALLTYPE *DestroyImageField )( 
            ICursiVisionServices * This,
            UINT_PTR *pImageField);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ShowImageFieldProperties)
        HRESULT ( STDMETHODCALLTYPE *ShowImageFieldProperties )( 
            ICursiVisionServices * This,
            HWND hwndParent,
            GUID *pID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetStatusText)
        HRESULT ( STDMETHODCALLTYPE *SetStatusText )( 
            ICursiVisionServices * This,
            char *pszStatusText,
            /* [defaultvalue] */ long timeOutDuration);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, OpenCVMatchThreshold)
        double ( STDMETHODCALLTYPE *OpenCVMatchThreshold )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, UploadFile)
        HRESULT ( STDMETHODCALLTYPE *UploadFile )( 
            ICursiVisionServices * This,
            char *pszBucketName,
            char *pszFileName,
            char *pszTargetName,
            BOOL deleteAfterUpload);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, NotifyCanCancel)
        HRESULT ( STDMETHODCALLTYPE *NotifyCanCancel )( 
            ICursiVisionServices * This,
            BOOL canCancel);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetEnabledPackages)
        HRESULT ( STDMETHODCALLTYPE *GetEnabledPackages )( 
            ICursiVisionServices * This,
            SAFEARRAY **ppSAEnabledPackages);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SignerPrompt)
        char *( STDMETHODCALLTYPE *SignerPrompt )( 
            ICursiVisionServices * This,
            GUID *pSignerTypeID);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetDefaultSignatureAreaSize)
        HRESULT ( STDMETHODCALLTYPE *GetDefaultSignatureAreaSize )( 
            ICursiVisionServices * This,
            SIZEL *pSizeSignatureArea);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, MayShowDispositionSettings)
        BOOL ( STDMETHODCALLTYPE *MayShowDispositionSettings )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetDefaultResultDisposition)
        ULONG_PTR ( STDMETHODCALLTYPE *GetDefaultResultDisposition )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetDefaultPackagesResultDisposition)
        ULONG_PTR ( STDMETHODCALLTYPE *GetDefaultPackagesResultDisposition )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ResourcesModule)
        HMODULE ( STDMETHODCALLTYPE *ResourcesModule )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, SetSalePending)
        char *( STDMETHODCALLTYPE *SetSalePending )( 
            ICursiVisionServices * This,
            DWORD *pSalePendingId,
            char *pszProduct,
            char *pszVersion,
            char *pszMachineId,
            char *pszContact,
            char *pszOrganization,
            char *pszPhone,
            char *pszEmail,
            char **ppszStripePurchaseURL,
            HWND hwndPurchasingDialog,
            DWORD idCancelButton);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, EnablePurchaseCancel)
        HRESULT ( STDMETHODCALLTYPE *EnablePurchaseCancel )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, CancelPendingSale)
        HRESULT ( STDMETHODCALLTYPE *CancelPendingSale )( 
            ICursiVisionServices * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, GetEncodedContactString)
        char *( STDMETHODCALLTYPE *GetEncodedContactString )( 
            ICursiVisionServices * This,
            char *pszContact,
            char *pszOrganization,
            char *pszPhone,
            char *pszEmail);
        
        DECLSPEC_XFGVIRT(ICursiVisionServices, ReceiveSalePendingStatus)
        HRESULT ( STDMETHODCALLTYPE *ReceiveSalePendingStatus )( 
            ICursiVisionServices * This,
            char *pszServerResponse);
        
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

#define ICursiVisionServices_EnforceNonAdministrativeRestrictions(This)	\
    ( (This)->lpVtbl -> EnforceNonAdministrativeRestrictions(This) ) 

#define ICursiVisionServices_AllowToolboxPropertyChanges(This)	\
    ( (This)->lpVtbl -> AllowToolboxPropertyChanges(This) ) 

#define ICursiVisionServices_AllowPrintProfileChanges(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChanges(This) ) 

#define ICursiVisionServices_AllowPrintProfileChangesSetting(This)	\
    ( (This)->lpVtbl -> AllowPrintProfileChangesSetting(This) ) 

#define ICursiVisionServices_AllowDiagnosticImages(This)	\
    ( (This)->lpVtbl -> AllowDiagnosticImages(This) ) 

#define ICursiVisionServices_SetAllowPrintProfileChanges(This,doAllow)	\
    ( (This)->lpVtbl -> SetAllowPrintProfileChanges(This,doAllow) ) 

#define ICursiVisionServices_GetActiveFieldGroupCookie(This,fieldGroupCookie)	\
    ( (This)->lpVtbl -> GetActiveFieldGroupCookie(This,fieldGroupCookie) ) 

#define ICursiVisionServices_GetActiveFieldGroupName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetActiveFieldGroupName(This,pbstrName) ) 

#define ICursiVisionServices_GetImageField(This,pID)	\
    ( (This)->lpVtbl -> GetImageField(This,pID) ) 

#define ICursiVisionServices_GetGroupImageField(This,fieldGroupCookie,pID)	\
    ( (This)->lpVtbl -> GetGroupImageField(This,fieldGroupCookie,pID) ) 

#define ICursiVisionServices_GetImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields) ) 

#define ICursiVisionServices_GetSelectedImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetSelectedImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields) ) 

#define ICursiVisionServices_GetOptionalImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetOptionalImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields) ) 

#define ICursiVisionServices_GetSelectedOptionalImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetSelectedOptionalImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields) ) 

#define ICursiVisionServices_GetPageFinderImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetPageFinderImageFields(This,fieldGroupCookieZeroForAll,profileID,ppSAImageFields) ) 

#define ICursiVisionServices_SetImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldOrderString)	\
    ( (This)->lpVtbl -> SetImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldOrderString) ) 

#define ICursiVisionServices_SetImageFieldSelected(This,fieldGroupCookie,pProfileID,pszFieldRequiredString)	\
    ( (This)->lpVtbl -> SetImageFieldSelected(This,fieldGroupCookie,pProfileID,pszFieldRequiredString) ) 

#define ICursiVisionServices_SetOptionalImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldOrderString)	\
    ( (This)->lpVtbl -> SetOptionalImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldOrderString) ) 

#define ICursiVisionServices_SetOptionalImageFieldSelected(This,fieldGroupCookie,pProfileID,pszFieldOptionalString)	\
    ( (This)->lpVtbl -> SetOptionalImageFieldSelected(This,fieldGroupCookie,pProfileID,pszFieldOptionalString) ) 

#define ICursiVisionServices_SetPageFinderImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldPageFinderString)	\
    ( (This)->lpVtbl -> SetPageFinderImageFieldOrder(This,fieldGroupCookie,pProfileID,pszFieldPageFinderString) ) 

#define ICursiVisionServices_GetSortedImageFields(This,fieldGroupCookie,pszSortingString,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetSortedImageFields(This,fieldGroupCookie,pszSortingString,ppSAImageFields) ) 

#define ICursiVisionServices_GetSortedOptionalImageFields(This,fieldGroupCookie,pszSortingString,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetSortedOptionalImageFields(This,fieldGroupCookie,pszSortingString,ppSAImageFields) ) 

#define ICursiVisionServices_GetAllPackagesFirstImageFields(This,pProfileID,ppSAImageFields)	\
    ( (This)->lpVtbl -> GetAllPackagesFirstImageFields(This,pProfileID,ppSAImageFields) ) 

#define ICursiVisionServices_GetAllPackagesProfilesFolders(This,ppSAProfileFolders)	\
    ( (This)->lpVtbl -> GetAllPackagesProfilesFolders(This,ppSAProfileFolders) ) 

#define ICursiVisionServices_GetActivePackageProfilesFolder(This,pszActivePackageProfileFolder,cbString)	\
    ( (This)->lpVtbl -> GetActivePackageProfilesFolder(This,pszActivePackageProfileFolder,cbString) ) 

#define ICursiVisionServices_GetImageFieldPackageCookie(This,pImageField)	\
    ( (This)->lpVtbl -> GetImageFieldPackageCookie(This,pImageField) ) 

#define ICursiVisionServices_GetIsImageFieldSelected(This,pImageField,fieldGroupCookie,pProfileID)	\
    ( (This)->lpVtbl -> GetIsImageFieldSelected(This,pImageField,fieldGroupCookie,pProfileID) ) 

#define ICursiVisionServices_GetIsOptionalImageFieldSelected(This,pImageField,fieldGroupCookie,pProfileID)	\
    ( (This)->lpVtbl -> GetIsOptionalImageFieldSelected(This,pImageField,fieldGroupCookie,pProfileID) ) 

#define ICursiVisionServices_ReleaseImageFields(This,saveFields)	\
    ( (This)->lpVtbl -> ReleaseImageFields(This,saveFields) ) 

#define ICursiVisionServices_ReleaseGroupImageFields(This,fieldGroupCookie,saveFields)	\
    ( (This)->lpVtbl -> ReleaseGroupImageFields(This,fieldGroupCookie,saveFields) ) 

#define ICursiVisionServices_DestroyImageField(This,pImageField)	\
    ( (This)->lpVtbl -> DestroyImageField(This,pImageField) ) 

#define ICursiVisionServices_ShowImageFieldProperties(This,hwndParent,pID)	\
    ( (This)->lpVtbl -> ShowImageFieldProperties(This,hwndParent,pID) ) 

#define ICursiVisionServices_SetStatusText(This,pszStatusText,timeOutDuration)	\
    ( (This)->lpVtbl -> SetStatusText(This,pszStatusText,timeOutDuration) ) 

#define ICursiVisionServices_OpenCVMatchThreshold(This)	\
    ( (This)->lpVtbl -> OpenCVMatchThreshold(This) ) 

#define ICursiVisionServices_UploadFile(This,pszBucketName,pszFileName,pszTargetName,deleteAfterUpload)	\
    ( (This)->lpVtbl -> UploadFile(This,pszBucketName,pszFileName,pszTargetName,deleteAfterUpload) ) 

#define ICursiVisionServices_NotifyCanCancel(This,canCancel)	\
    ( (This)->lpVtbl -> NotifyCanCancel(This,canCancel) ) 

#define ICursiVisionServices_GetEnabledPackages(This,ppSAEnabledPackages)	\
    ( (This)->lpVtbl -> GetEnabledPackages(This,ppSAEnabledPackages) ) 

#define ICursiVisionServices_SignerPrompt(This,pSignerTypeID)	\
    ( (This)->lpVtbl -> SignerPrompt(This,pSignerTypeID) ) 

#define ICursiVisionServices_GetDefaultSignatureAreaSize(This,pSizeSignatureArea)	\
    ( (This)->lpVtbl -> GetDefaultSignatureAreaSize(This,pSizeSignatureArea) ) 

#define ICursiVisionServices_MayShowDispositionSettings(This)	\
    ( (This)->lpVtbl -> MayShowDispositionSettings(This) ) 

#define ICursiVisionServices_GetDefaultResultDisposition(This)	\
    ( (This)->lpVtbl -> GetDefaultResultDisposition(This) ) 

#define ICursiVisionServices_GetDefaultPackagesResultDisposition(This)	\
    ( (This)->lpVtbl -> GetDefaultPackagesResultDisposition(This) ) 

#define ICursiVisionServices_ResourcesModule(This)	\
    ( (This)->lpVtbl -> ResourcesModule(This) ) 

#define ICursiVisionServices_SetSalePending(This,pSalePendingId,pszProduct,pszVersion,pszMachineId,pszContact,pszOrganization,pszPhone,pszEmail,ppszStripePurchaseURL,hwndPurchasingDialog,idCancelButton)	\
    ( (This)->lpVtbl -> SetSalePending(This,pSalePendingId,pszProduct,pszVersion,pszMachineId,pszContact,pszOrganization,pszPhone,pszEmail,ppszStripePurchaseURL,hwndPurchasingDialog,idCancelButton) ) 

#define ICursiVisionServices_EnablePurchaseCancel(This)	\
    ( (This)->lpVtbl -> EnablePurchaseCancel(This) ) 

#define ICursiVisionServices_CancelPendingSale(This)	\
    ( (This)->lpVtbl -> CancelPendingSale(This) ) 

#define ICursiVisionServices_GetEncodedContactString(This,pszContact,pszOrganization,pszPhone,pszEmail)	\
    ( (This)->lpVtbl -> GetEncodedContactString(This,pszContact,pszOrganization,pszPhone,pszEmail) ) 

#define ICursiVisionServices_ReceiveSalePendingStatus(This,pszServerResponse)	\
    ( (This)->lpVtbl -> ReceiveSalePendingStatus(This,pszServerResponse) ) 

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
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UserMayEdit( 
            /* [in] */ BOOL userMayEdit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Dispose( 
            BSTR inputFile,
            BSTR resultsFile,
            BSTR graphicDataFile,
            BSTR settingsFileName,
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
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionBackEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionBackEnd * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionBackEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, get_PropertiesFileName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PropertiesFileName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pPropertiesFileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, put_PropertiesFileName)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PropertiesFileName )( 
            ICursiVisionBackEnd * This,
            /* [in] */ BSTR propertiesFileName);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, get_CodeName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pANameThatDistinguishesThisBackEndFromOthers);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, put_ParentWindow)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            ICursiVisionBackEnd * This,
            /* [in] */ HWND hwndParent);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, get_SavedDocumentName)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SavedDocumentName )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pTheSavedDocumentNameReturnNOT_IMPLIfNotSaved);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, put_CommandLine)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CommandLine )( 
            ICursiVisionBackEnd * This,
            /* [in] */ BSTR commandLine);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, put_PrintingSupportProfile)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintingSupportProfile )( 
            ICursiVisionBackEnd * This,
            /* [in] */ /* external definition not present */ IPrintingSupportProfile *pPrintingProfile);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, get_Description)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ICursiVisionBackEnd * This,
            /* [retval][out] */ BSTR *pDescription);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, put_UserMayEdit)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UserMayEdit )( 
            ICursiVisionBackEnd * This,
            /* [in] */ BOOL userMayEdit);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, Dispose)
        HRESULT ( STDMETHODCALLTYPE *Dispose )( 
            ICursiVisionBackEnd * This,
            BSTR inputFile,
            BSTR resultsFile,
            BSTR graphicDataFile,
            BSTR settingsFileName,
            BOOL isTempFile);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, CanRunFromTools)
        HRESULT ( STDMETHODCALLTYPE *CanRunFromTools )( 
            ICursiVisionBackEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, CanRunFromCursiVisionControl)
        HRESULT ( STDMETHODCALLTYPE *CanRunFromCursiVisionControl )( 
            ICursiVisionBackEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionBackEnd, ServicesAdvise)
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

#define ICursiVisionBackEnd_put_UserMayEdit(This,userMayEdit)	\
    ( (This)->lpVtbl -> put_UserMayEdit(This,userMayEdit) ) 

#define ICursiVisionBackEnd_Dispose(This,inputFile,resultsFile,graphicDataFile,settingsFileName,isTempFile)	\
    ( (This)->lpVtbl -> Dispose(This,inputFile,resultsFile,graphicDataFile,settingsFileName,isTempFile) ) 

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


