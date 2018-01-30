

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 25 12:47:45 2018
 */
/* Compiler settings for COM Implementation\PDFiumControl.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __PDFiumControl_i_h__
#define __PDFiumControl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __PDFium_DWebBrowserEvents2_FWD_DEFINED__
#define __PDFium_DWebBrowserEvents2_FWD_DEFINED__
typedef interface PDFium_DWebBrowserEvents2 PDFium_DWebBrowserEvents2;

#endif 	/* __PDFium_DWebBrowserEvents2_FWD_DEFINED__ */


#ifndef __IPDFiumControl_FWD_DEFINED__
#define __IPDFiumControl_FWD_DEFINED__
typedef interface IPDFiumControl IPDFiumControl;

#endif 	/* __IPDFiumControl_FWD_DEFINED__ */


#ifndef __IPDFiumControlEvents_FWD_DEFINED__
#define __IPDFiumControlEvents_FWD_DEFINED__
typedef interface IPDFiumControlEvents IPDFiumControlEvents;

#endif 	/* __IPDFiumControlEvents_FWD_DEFINED__ */


#ifndef __PDFiumControl_FWD_DEFINED__
#define __PDFiumControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDFiumControl PDFiumControl;
#else
typedef struct PDFiumControl PDFiumControl;
#endif /* __cplusplus */

#endif 	/* __PDFiumControl_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __PDFium_DWebBrowserEvents2_INTERFACE_DEFINED__
#define __PDFium_DWebBrowserEvents2_INTERFACE_DEFINED__

/* interface PDFium_DWebBrowserEvents2 */
/* [object][unique][nonextensible][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_PDFium_DWebBrowserEvents2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34A715A0-6587-11D0-924A-0020AFC7AC4D")
    PDFium_DWebBrowserEvents2 : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct PDFium_DWebBrowserEvents2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            PDFium_DWebBrowserEvents2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            PDFium_DWebBrowserEvents2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            PDFium_DWebBrowserEvents2 * This,
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
        
        END_INTERFACE
    } PDFium_DWebBrowserEvents2Vtbl;

    interface PDFium_DWebBrowserEvents2
    {
        CONST_VTBL struct PDFium_DWebBrowserEvents2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define PDFium_DWebBrowserEvents2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define PDFium_DWebBrowserEvents2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define PDFium_DWebBrowserEvents2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define PDFium_DWebBrowserEvents2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define PDFium_DWebBrowserEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define PDFium_DWebBrowserEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define PDFium_DWebBrowserEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __PDFium_DWebBrowserEvents2_INTERFACE_DEFINED__ */



#ifndef __PDFiumControl_LIBRARY_DEFINED__
#define __PDFiumControl_LIBRARY_DEFINED__

/* library PDFiumControl */
/* [version][lcid][helpstring][helpfile][uuid] */ 



EXTERN_C const IID LIBID_PDFiumControl;

#ifndef __IPDFiumControl_INTERFACE_DEFINED__
#define __IPDFiumControl_INTERFACE_DEFINED__

/* interface IPDFiumControl */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPDFiumControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5FF6E92-F84E-432C-AACB-0982C940E532")
    IPDFiumControl : public IDispatch
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
            /* [in] */ COLORREF backgroundColor) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ COLORREF *pBackgroundColor) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PDFWidth( 
            /* [in] */ long cxPDFWithInPixels) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFWidth( 
            /* [retval][out] */ long *pcxPDFWidthInPixels) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PDFHeight( 
            /* [in] */ long cxPDFHeightInPixels) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFHeight( 
            /* [retval][out] */ long *pcxPDFHeightInPixels) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EnableExplorerContextMenu( 
            /* [in] */ BOOL doEnable) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PageCount( 
            /* [retval][out] */ long *pPageCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPagesVisible( 
            /* [retval][out] */ BSTR *pPagesVisible) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageMostVisible( 
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPixelsInView( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPixelsInView( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageWidthPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageHeightPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageWidthPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageHeightPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageNumberAtY( 
            /* [in] */ long yValue,
            /* [in] */ long seekHeight,
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Document( 
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Document( 
            /* [retval][out] */ BSTR *pFileName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsPDF( 
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0000) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ScrollBarVisible( 
            /* [in] */ BOOL __MIDL__IPDFiumControl0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ScrollBarVisible( 
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0002) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertPointsToScrollPanePixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenDocument( 
            BSTR documentFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseDocument( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisplayDocument( 
            COLORREF backgroundColor,
            long cxImagePixels,
            long cyImagePixels,
            BSTR pdfOrHTMLFileName,
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GoToPage( 
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintCurrentDocument( 
            BOOL showPrinterSelection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintDocument( 
            BSTR pdfOrHTMLFileName,
            BOOL showPrinterSelection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FinalRelease( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cleanup( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDFiumControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFiumControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFiumControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFiumControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDFiumControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDFiumControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDFiumControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDFiumControl * This,
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
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            IPDFiumControl * This,
            /* [in] */ COLORREF backgroundColor);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IPDFiumControl * This,
            /* [retval][out] */ COLORREF *pBackgroundColor);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFWidth )( 
            IPDFiumControl * This,
            /* [in] */ long cxPDFWithInPixels);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFWidth )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pcxPDFWidthInPixels);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFHeight )( 
            IPDFiumControl * This,
            /* [in] */ long cxPDFHeightInPixels);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFHeight )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pcxPDFHeightInPixels);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableExplorerContextMenu )( 
            IPDFiumControl * This,
            /* [in] */ BOOL doEnable);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageCount )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPagesVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ BSTR *pPagesVisible);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageMostVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageNumber);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPixelsInView )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPixelsInView )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageWidthPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHeightPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageWidthPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHeightPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageNumberAtY )( 
            IPDFiumControl * This,
            /* [in] */ long yValue,
            /* [in] */ long seekHeight,
            /* [retval][out] */ long *pPageNumber);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Document )( 
            IPDFiumControl * This,
            /* [in] */ BSTR fileName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Document )( 
            IPDFiumControl * This,
            /* [retval][out] */ BSTR *pFileName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPDF )( 
            IPDFiumControl * This,
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScrollBarVisible )( 
            IPDFiumControl * This,
            /* [in] */ BOOL __MIDL__IPDFiumControl0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScrollBarVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0002);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertPointsToScrollPanePixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        HRESULT ( STDMETHODCALLTYPE *OpenDocument )( 
            IPDFiumControl * This,
            BSTR documentFileName);
        
        HRESULT ( STDMETHODCALLTYPE *CloseDocument )( 
            IPDFiumControl * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisplayDocument )( 
            IPDFiumControl * This,
            COLORREF backgroundColor,
            long cxImagePixels,
            long cyImagePixels,
            BSTR pdfOrHTMLFileName,
            long pageNumber);
        
        HRESULT ( STDMETHODCALLTYPE *GoToPage )( 
            IPDFiumControl * This,
            long pageNumber);
        
        HRESULT ( STDMETHODCALLTYPE *PrintCurrentDocument )( 
            IPDFiumControl * This,
            BOOL showPrinterSelection);
        
        HRESULT ( STDMETHODCALLTYPE *PrintDocument )( 
            IPDFiumControl * This,
            BSTR pdfOrHTMLFileName,
            BOOL showPrinterSelection);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FinalRelease )( 
            IPDFiumControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            IPDFiumControl * This);
        
        END_INTERFACE
    } IPDFiumControlVtbl;

    interface IPDFiumControl
    {
        CONST_VTBL struct IPDFiumControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDFiumControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDFiumControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDFiumControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDFiumControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDFiumControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDFiumControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDFiumControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDFiumControl_put_BackgroundColor(This,backgroundColor)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,backgroundColor) ) 

#define IPDFiumControl_get_BackgroundColor(This,pBackgroundColor)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,pBackgroundColor) ) 

#define IPDFiumControl_put_PDFWidth(This,cxPDFWithInPixels)	\
    ( (This)->lpVtbl -> put_PDFWidth(This,cxPDFWithInPixels) ) 

#define IPDFiumControl_get_PDFWidth(This,pcxPDFWidthInPixels)	\
    ( (This)->lpVtbl -> get_PDFWidth(This,pcxPDFWidthInPixels) ) 

#define IPDFiumControl_put_PDFHeight(This,cxPDFHeightInPixels)	\
    ( (This)->lpVtbl -> put_PDFHeight(This,cxPDFHeightInPixels) ) 

#define IPDFiumControl_get_PDFHeight(This,pcxPDFHeightInPixels)	\
    ( (This)->lpVtbl -> get_PDFHeight(This,pcxPDFHeightInPixels) ) 

#define IPDFiumControl_put_EnableExplorerContextMenu(This,doEnable)	\
    ( (This)->lpVtbl -> put_EnableExplorerContextMenu(This,doEnable) ) 

#define IPDFiumControl_get_PageCount(This,pPageCount)	\
    ( (This)->lpVtbl -> get_PageCount(This,pPageCount) ) 

#define IPDFiumControl_get_PDFPagesVisible(This,pPagesVisible)	\
    ( (This)->lpVtbl -> get_PDFPagesVisible(This,pPagesVisible) ) 

#define IPDFiumControl_get_PDFPageMostVisible(This,pPageNumber)	\
    ( (This)->lpVtbl -> get_PDFPageMostVisible(This,pPageNumber) ) 

#define IPDFiumControl_get_PDFPageXPixels(This,pageNumber,pX)	\
    ( (This)->lpVtbl -> get_PDFPageXPixels(This,pageNumber,pX) ) 

#define IPDFiumControl_get_PDFPageXPixelsInView(This,pageNumber,pX)	\
    ( (This)->lpVtbl -> get_PDFPageXPixelsInView(This,pageNumber,pX) ) 

#define IPDFiumControl_get_PDFPageYPixels(This,pageNumber,pY)	\
    ( (This)->lpVtbl -> get_PDFPageYPixels(This,pageNumber,pY) ) 

#define IPDFiumControl_get_PDFPageYPixelsInView(This,pageNumber,pY)	\
    ( (This)->lpVtbl -> get_PDFPageYPixelsInView(This,pageNumber,pY) ) 

#define IPDFiumControl_get_PDFPageWidthPixels(This,pageNumber,pWidth)	\
    ( (This)->lpVtbl -> get_PDFPageWidthPixels(This,pageNumber,pWidth) ) 

#define IPDFiumControl_get_PDFPageHeightPixels(This,pageNumber,pHeight)	\
    ( (This)->lpVtbl -> get_PDFPageHeightPixels(This,pageNumber,pHeight) ) 

#define IPDFiumControl_get_PDFPageXPoints(This,pageNumber,pX)	\
    ( (This)->lpVtbl -> get_PDFPageXPoints(This,pageNumber,pX) ) 

#define IPDFiumControl_get_PDFPageYPoints(This,pageNumber,pY)	\
    ( (This)->lpVtbl -> get_PDFPageYPoints(This,pageNumber,pY) ) 

#define IPDFiumControl_get_PDFPageWidthPoints(This,pageNumber,pWidth)	\
    ( (This)->lpVtbl -> get_PDFPageWidthPoints(This,pageNumber,pWidth) ) 

#define IPDFiumControl_get_PDFPageHeightPoints(This,pageNumber,pHeight)	\
    ( (This)->lpVtbl -> get_PDFPageHeightPoints(This,pageNumber,pHeight) ) 

#define IPDFiumControl_get_PDFPageNumberAtY(This,yValue,seekHeight,pPageNumber)	\
    ( (This)->lpVtbl -> get_PDFPageNumberAtY(This,yValue,seekHeight,pPageNumber) ) 

#define IPDFiumControl_put_Document(This,fileName)	\
    ( (This)->lpVtbl -> put_Document(This,fileName) ) 

#define IPDFiumControl_get_Document(This,pFileName)	\
    ( (This)->lpVtbl -> get_Document(This,pFileName) ) 

#define IPDFiumControl_get_IsPDF(This,__MIDL__IPDFiumControl0000)	\
    ( (This)->lpVtbl -> get_IsPDF(This,__MIDL__IPDFiumControl0000) ) 

#define IPDFiumControl_put_ScrollBarVisible(This,__MIDL__IPDFiumControl0001)	\
    ( (This)->lpVtbl -> put_ScrollBarVisible(This,__MIDL__IPDFiumControl0001) ) 

#define IPDFiumControl_get_ScrollBarVisible(This,__MIDL__IPDFiumControl0002)	\
    ( (This)->lpVtbl -> get_ScrollBarVisible(This,__MIDL__IPDFiumControl0002) ) 

#define IPDFiumControl_ConvertPointsToScrollPanePixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertPointsToScrollPanePixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_OpenDocument(This,documentFileName)	\
    ( (This)->lpVtbl -> OpenDocument(This,documentFileName) ) 

#define IPDFiumControl_CloseDocument(This)	\
    ( (This)->lpVtbl -> CloseDocument(This) ) 

#define IPDFiumControl_DisplayDocument(This,backgroundColor,cxImagePixels,cyImagePixels,pdfOrHTMLFileName,pageNumber)	\
    ( (This)->lpVtbl -> DisplayDocument(This,backgroundColor,cxImagePixels,cyImagePixels,pdfOrHTMLFileName,pageNumber) ) 

#define IPDFiumControl_GoToPage(This,pageNumber)	\
    ( (This)->lpVtbl -> GoToPage(This,pageNumber) ) 

#define IPDFiumControl_PrintCurrentDocument(This,showPrinterSelection)	\
    ( (This)->lpVtbl -> PrintCurrentDocument(This,showPrinterSelection) ) 

#define IPDFiumControl_PrintDocument(This,pdfOrHTMLFileName,showPrinterSelection)	\
    ( (This)->lpVtbl -> PrintDocument(This,pdfOrHTMLFileName,showPrinterSelection) ) 

#define IPDFiumControl_FinalRelease(This)	\
    ( (This)->lpVtbl -> FinalRelease(This) ) 

#define IPDFiumControl_Cleanup(This)	\
    ( (This)->lpVtbl -> Cleanup(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDFiumControl_INTERFACE_DEFINED__ */


#ifndef __IPDFiumControlEvents_INTERFACE_DEFINED__
#define __IPDFiumControlEvents_INTERFACE_DEFINED__

/* interface IPDFiumControlEvents */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPDFiumControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5FF6E92-F84E-432C-AACB-0982C940E534")
    IPDFiumControlEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MouseMessage( 
            UINT msg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Size( 
            SIZE *pSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Paint( 
            HDC hdc,
            RECT *prcUpdate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDFiumControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFiumControlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFiumControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFiumControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *MouseMessage )( 
            IPDFiumControlEvents * This,
            UINT msg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *Size )( 
            IPDFiumControlEvents * This,
            SIZE *pSize);
        
        HRESULT ( STDMETHODCALLTYPE *Paint )( 
            IPDFiumControlEvents * This,
            HDC hdc,
            RECT *prcUpdate);
        
        END_INTERFACE
    } IPDFiumControlEventsVtbl;

    interface IPDFiumControlEvents
    {
        CONST_VTBL struct IPDFiumControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDFiumControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDFiumControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDFiumControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDFiumControlEvents_MouseMessage(This,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> MouseMessage(This,msg,wParam,lParam) ) 

#define IPDFiumControlEvents_Size(This,pSize)	\
    ( (This)->lpVtbl -> Size(This,pSize) ) 

#define IPDFiumControlEvents_Paint(This,hdc,prcUpdate)	\
    ( (This)->lpVtbl -> Paint(This,hdc,prcUpdate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDFiumControlEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PDFiumControl;

#ifdef __cplusplus

class DECLSPEC_UUID("B5FF6E92-F84E-432C-AACB-0982C940E53F")
PDFiumControl;
#endif
#endif /* __PDFiumControl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


