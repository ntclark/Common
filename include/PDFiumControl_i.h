

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\PDFiumControl.odl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __PDFiumControl_i_h__
#define __PDFiumControl_i_h__

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
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            PDFium_DWebBrowserEvents2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            PDFium_DWebBrowserEvents2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            PDFium_DWebBrowserEvents2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
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
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MultiThreadedPageGeneration( 
            /* [in] */ BOOL doMultiThreadPageGeneration) = 0;
        
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
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageInView( 
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageUnderMouse( 
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageUnderPoint( 
            POINTL *pPoint,
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPixelsInView( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPixelsInView( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageWidthPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageWidthTwipsPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHeightPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHeightTwipsPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageSizeTwipsPixels( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ SIZEL *pSize) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageXPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageYPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageWidthPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHeightPoints( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PointsToPixelsScale( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ double *pScale) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFPageRect( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ RECT *pRectPixels) = 0;
        
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
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ScrolledUpPixels( 
            /* [retval][out] */ long *pLong) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHBITMAP( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHBITMAPFromAreaPoints( 
            /* [in] */ long pageNumber,
            RECT *pAreaPoints,
            SIZEL *pPagePointsSize,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PDFPageHBITMAPFromAreaPixels( 
            /* [in] */ long pageNumber,
            RECT *pAreaPixels,
            SIZEL *pPagePixelsSize,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GeneratePDFPageHBITMAP( 
            /* [in] */ long pageNumber,
            /* [in] */ long cx,
            /* [in] */ long cy,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_HiRezPDF_BITMAP( 
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ long cxPixels,
            /* [in] */ long cyPixels,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_TwipsPDF_BITMAP( 
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_TwipsPDF_DIB_BITMAP( 
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ BOOL getDIB,
            /* [in] */ COLORREF monoColorWhiteForNone,
            /* [in] */ long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_Mono_TwipsPDF_BITMAP( 
            /* [in] */ long pageNumber,
            /* [in] */ COLORREF monoColor,
            BYTE grayLevelToWhite,
            /* [in] */ RECT *pRectPDF,
            long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsDocumentRendered( 
            /* [retval][out] */ BOOL *pIsRendered) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MSHTMLHwnd( 
            /* [retval][out] */ HWND *pMSHTMLWindow) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertPointsToScrollPanePixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertPointsToVisiblePanePixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertPointsToClippedVisiblePanePixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertVisiblePanePixelsToPoints( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ConvertPixelsToScrollPanePixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScalePixelsToPoints( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScaleTwipsPixelsToPoints( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScalePointsToPixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScalePointsToTwipsPixels( 
            long pageNumber,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScalePixelsToPointsFromImageSize( 
            long pageNumber,
            long cxImage,
            long cyImage,
            RECT *pRect) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ScalePointsToPixelsFromImageSize( 
            long pageNumber,
            long cxImage,
            long cyImage,
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenDocument( 
            BSTR documentFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseDocument( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisplayDocumentAtSize( 
            COLORREF backgroundColor,
            long cxImagePixels,
            long cyImagePixels,
            BSTR pdfOrHTMLFileName,
            long pageNumber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DisplayDocument( 
            COLORREF backgroundColor,
            BSTR pdfOrHTMLFileName,
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GoToPage( 
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintCurrentDocument( 
            BSTR printerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintDocument( 
            BSTR pdfOrHTMLFileName,
            BSTR printerName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FinalRelease( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cleanup( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResizePDFDocument( 
            long cxImagePixels,
            long cyImagePixels) = 0;
        
        virtual LRESULT STDMETHODCALLTYPE HandleWindowsMessage( 
            UINT msg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCursor( 
            LPSTR cursorID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDFiumControlVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFiumControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFiumControl * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFiumControl * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDFiumControl * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDFiumControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDFiumControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
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
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_MultiThreadedPageGeneration)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MultiThreadedPageGeneration )( 
            IPDFiumControl * This,
            /* [in] */ BOOL doMultiThreadPageGeneration);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_BackgroundColor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            IPDFiumControl * This,
            /* [in] */ COLORREF backgroundColor);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_BackgroundColor)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IPDFiumControl * This,
            /* [retval][out] */ COLORREF *pBackgroundColor);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_PDFWidth)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFWidth )( 
            IPDFiumControl * This,
            /* [in] */ long cxPDFWithInPixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFWidth)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFWidth )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pcxPDFWidthInPixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_PDFHeight)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFHeight )( 
            IPDFiumControl * This,
            /* [in] */ long cxPDFHeightInPixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFHeight)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFHeight )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pcxPDFHeightInPixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_EnableExplorerContextMenu)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableExplorerContextMenu )( 
            IPDFiumControl * This,
            /* [in] */ BOOL doEnable);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PageCount)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageCount )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageCount);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPagesVisible)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPagesVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ BSTR *pPagesVisible);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageMostVisible)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageMostVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageInView)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageInView )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageUnderMouse)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageUnderMouse )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageUnderPoint)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageUnderPoint )( 
            IPDFiumControl * This,
            POINTL *pPoint,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageXPixels)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageXPixelsInView)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPixelsInView )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageYPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageYPixelsInView)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPixelsInView )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageWidthPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageWidthPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageWidthTwipsPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageWidthTwipsPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHeightPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHeightPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHeightTwipsPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHeightTwipsPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageSizeTwipsPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageSizeTwipsPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ SIZEL *pSize);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageXPoints)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageXPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pX);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageYPoints)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageYPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pY);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageWidthPoints)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageWidthPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pWidth);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHeightPoints)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHeightPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ long *pHeight);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PointsToPixelsScale)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointsToPixelsScale )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ double *pScale);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageRect)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageRect )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ RECT *pRectPixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageNumberAtY)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageNumberAtY )( 
            IPDFiumControl * This,
            /* [in] */ long yValue,
            /* [in] */ long seekHeight,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_Document)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Document )( 
            IPDFiumControl * This,
            /* [in] */ BSTR fileName);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_Document)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Document )( 
            IPDFiumControl * This,
            /* [retval][out] */ BSTR *pFileName);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_IsPDF)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPDF )( 
            IPDFiumControl * This,
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0000);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, put_ScrollBarVisible)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScrollBarVisible )( 
            IPDFiumControl * This,
            /* [in] */ BOOL __MIDL__IPDFiumControl0001);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_ScrollBarVisible)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScrollBarVisible )( 
            IPDFiumControl * This,
            /* [retval][out] */ BOOL *__MIDL__IPDFiumControl0002);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_ScrolledUpPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ScrolledUpPixels )( 
            IPDFiumControl * This,
            /* [retval][out] */ long *pLong);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHBITMAP)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHBITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHBITMAPFromAreaPoints)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHBITMAPFromAreaPoints )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            RECT *pAreaPoints,
            SIZEL *pPagePointsSize,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_PDFPageHBITMAPFromAreaPixels)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PDFPageHBITMAPFromAreaPixels )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            RECT *pAreaPixels,
            SIZEL *pPagePixelsSize,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_GeneratePDFPageHBITMAP)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeneratePDFPageHBITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [in] */ long cx,
            /* [in] */ long cy,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_HiRezPDF_BITMAP)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_HiRezPDF_BITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ long cxPixels,
            /* [in] */ long cyPixels,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_TwipsPDF_BITMAP)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_TwipsPDF_BITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_TwipsPDF_DIB_BITMAP)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_TwipsPDF_DIB_BITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [in] */ RECT *pRectPDF,
            /* [in] */ BOOL getDIB,
            /* [in] */ COLORREF monoColorWhiteForNone,
            /* [in] */ long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_Mono_TwipsPDF_BITMAP)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_Mono_TwipsPDF_BITMAP )( 
            IPDFiumControl * This,
            /* [in] */ long pageNumber,
            /* [in] */ COLORREF monoColor,
            BYTE grayLevelToWhite,
            /* [in] */ RECT *pRectPDF,
            long frameSizePixels,
            /* [retval][out] */ HBITMAP *pHBITMAP);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_IsDocumentRendered)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDocumentRendered )( 
            IPDFiumControl * This,
            /* [retval][out] */ BOOL *pIsRendered);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, get_MSHTMLHwnd)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MSHTMLHwnd )( 
            IPDFiumControl * This,
            /* [retval][out] */ HWND *pMSHTMLWindow);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ConvertPointsToScrollPanePixels)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertPointsToScrollPanePixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ConvertPointsToVisiblePanePixels)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertPointsToVisiblePanePixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ConvertPointsToClippedVisiblePanePixels)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertPointsToClippedVisiblePanePixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ConvertVisiblePanePixelsToPoints)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertVisiblePanePixelsToPoints )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ConvertPixelsToScrollPanePixels)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ConvertPixelsToScrollPanePixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScalePixelsToPoints)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScalePixelsToPoints )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScaleTwipsPixelsToPoints)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScaleTwipsPixelsToPoints )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScalePointsToPixels)
        HRESULT ( STDMETHODCALLTYPE *ScalePointsToPixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScalePointsToTwipsPixels)
        HRESULT ( STDMETHODCALLTYPE *ScalePointsToTwipsPixels )( 
            IPDFiumControl * This,
            long pageNumber,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScalePixelsToPointsFromImageSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScalePixelsToPointsFromImageSize )( 
            IPDFiumControl * This,
            long pageNumber,
            long cxImage,
            long cyImage,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ScalePointsToPixelsFromImageSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ScalePointsToPixelsFromImageSize )( 
            IPDFiumControl * This,
            long pageNumber,
            long cxImage,
            long cyImage,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, OpenDocument)
        HRESULT ( STDMETHODCALLTYPE *OpenDocument )( 
            IPDFiumControl * This,
            BSTR documentFileName);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, CloseDocument)
        HRESULT ( STDMETHODCALLTYPE *CloseDocument )( 
            IPDFiumControl * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, DisplayDocumentAtSize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisplayDocumentAtSize )( 
            IPDFiumControl * This,
            COLORREF backgroundColor,
            long cxImagePixels,
            long cyImagePixels,
            BSTR pdfOrHTMLFileName,
            long pageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, DisplayDocument)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DisplayDocument )( 
            IPDFiumControl * This,
            COLORREF backgroundColor,
            BSTR pdfOrHTMLFileName,
            long pageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, GoToPage)
        HRESULT ( STDMETHODCALLTYPE *GoToPage )( 
            IPDFiumControl * This,
            long pageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, PrintCurrentDocument)
        HRESULT ( STDMETHODCALLTYPE *PrintCurrentDocument )( 
            IPDFiumControl * This,
            BSTR printerName);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, PrintDocument)
        HRESULT ( STDMETHODCALLTYPE *PrintDocument )( 
            IPDFiumControl * This,
            BSTR pdfOrHTMLFileName,
            BSTR printerName);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, FinalRelease)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FinalRelease )( 
            IPDFiumControl * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, Cleanup)
        HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            IPDFiumControl * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, ResizePDFDocument)
        HRESULT ( STDMETHODCALLTYPE *ResizePDFDocument )( 
            IPDFiumControl * This,
            long cxImagePixels,
            long cyImagePixels);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, HandleWindowsMessage)
        LRESULT ( STDMETHODCALLTYPE *HandleWindowsMessage )( 
            IPDFiumControl * This,
            UINT msg,
            WPARAM wParam,
            LPARAM lParam);
        
        DECLSPEC_XFGVIRT(IPDFiumControl, SetCursor)
        HRESULT ( STDMETHODCALLTYPE *SetCursor )( 
            IPDFiumControl * This,
            LPSTR cursorID);
        
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


#define IPDFiumControl_put_MultiThreadedPageGeneration(This,doMultiThreadPageGeneration)	\
    ( (This)->lpVtbl -> put_MultiThreadedPageGeneration(This,doMultiThreadPageGeneration) ) 

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

#define IPDFiumControl_get_PDFPageInView(This,pPageNumber)	\
    ( (This)->lpVtbl -> get_PDFPageInView(This,pPageNumber) ) 

#define IPDFiumControl_get_PDFPageUnderMouse(This,pPageNumber)	\
    ( (This)->lpVtbl -> get_PDFPageUnderMouse(This,pPageNumber) ) 

#define IPDFiumControl_get_PDFPageUnderPoint(This,pPoint,pPageNumber)	\
    ( (This)->lpVtbl -> get_PDFPageUnderPoint(This,pPoint,pPageNumber) ) 

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

#define IPDFiumControl_get_PDFPageWidthTwipsPixels(This,pageNumber,pWidth)	\
    ( (This)->lpVtbl -> get_PDFPageWidthTwipsPixels(This,pageNumber,pWidth) ) 

#define IPDFiumControl_get_PDFPageHeightPixels(This,pageNumber,pHeight)	\
    ( (This)->lpVtbl -> get_PDFPageHeightPixels(This,pageNumber,pHeight) ) 

#define IPDFiumControl_get_PDFPageHeightTwipsPixels(This,pageNumber,pHeight)	\
    ( (This)->lpVtbl -> get_PDFPageHeightTwipsPixels(This,pageNumber,pHeight) ) 

#define IPDFiumControl_get_PDFPageSizeTwipsPixels(This,pageNumber,pSize)	\
    ( (This)->lpVtbl -> get_PDFPageSizeTwipsPixels(This,pageNumber,pSize) ) 

#define IPDFiumControl_get_PDFPageXPoints(This,pageNumber,pX)	\
    ( (This)->lpVtbl -> get_PDFPageXPoints(This,pageNumber,pX) ) 

#define IPDFiumControl_get_PDFPageYPoints(This,pageNumber,pY)	\
    ( (This)->lpVtbl -> get_PDFPageYPoints(This,pageNumber,pY) ) 

#define IPDFiumControl_get_PDFPageWidthPoints(This,pageNumber,pWidth)	\
    ( (This)->lpVtbl -> get_PDFPageWidthPoints(This,pageNumber,pWidth) ) 

#define IPDFiumControl_get_PDFPageHeightPoints(This,pageNumber,pHeight)	\
    ( (This)->lpVtbl -> get_PDFPageHeightPoints(This,pageNumber,pHeight) ) 

#define IPDFiumControl_get_PointsToPixelsScale(This,pageNumber,pScale)	\
    ( (This)->lpVtbl -> get_PointsToPixelsScale(This,pageNumber,pScale) ) 

#define IPDFiumControl_get_PDFPageRect(This,pageNumber,pRectPixels)	\
    ( (This)->lpVtbl -> get_PDFPageRect(This,pageNumber,pRectPixels) ) 

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

#define IPDFiumControl_get_ScrolledUpPixels(This,pLong)	\
    ( (This)->lpVtbl -> get_ScrolledUpPixels(This,pLong) ) 

#define IPDFiumControl_get_PDFPageHBITMAP(This,pageNumber,pHBITMAP)	\
    ( (This)->lpVtbl -> get_PDFPageHBITMAP(This,pageNumber,pHBITMAP) ) 

#define IPDFiumControl_get_PDFPageHBITMAPFromAreaPoints(This,pageNumber,pAreaPoints,pPagePointsSize,pHBITMAP)	\
    ( (This)->lpVtbl -> get_PDFPageHBITMAPFromAreaPoints(This,pageNumber,pAreaPoints,pPagePointsSize,pHBITMAP) ) 

#define IPDFiumControl_get_PDFPageHBITMAPFromAreaPixels(This,pageNumber,pAreaPixels,pPagePixelsSize,pHBITMAP)	\
    ( (This)->lpVtbl -> get_PDFPageHBITMAPFromAreaPixels(This,pageNumber,pAreaPixels,pPagePixelsSize,pHBITMAP) ) 

#define IPDFiumControl_get_GeneratePDFPageHBITMAP(This,pageNumber,cx,cy,pHBITMAP)	\
    ( (This)->lpVtbl -> get_GeneratePDFPageHBITMAP(This,pageNumber,cx,cy,pHBITMAP) ) 

#define IPDFiumControl_get_HiRezPDF_BITMAP(This,pageNumber,pRectPDF,cxPixels,cyPixels,pHBITMAP)	\
    ( (This)->lpVtbl -> get_HiRezPDF_BITMAP(This,pageNumber,pRectPDF,cxPixels,cyPixels,pHBITMAP) ) 

#define IPDFiumControl_get_TwipsPDF_BITMAP(This,pageNumber,pRectPDF,frameSizePixels,pHBITMAP)	\
    ( (This)->lpVtbl -> get_TwipsPDF_BITMAP(This,pageNumber,pRectPDF,frameSizePixels,pHBITMAP) ) 

#define IPDFiumControl_get_TwipsPDF_DIB_BITMAP(This,pageNumber,pRectPDF,getDIB,monoColorWhiteForNone,frameSizePixels,pHBITMAP)	\
    ( (This)->lpVtbl -> get_TwipsPDF_DIB_BITMAP(This,pageNumber,pRectPDF,getDIB,monoColorWhiteForNone,frameSizePixels,pHBITMAP) ) 

#define IPDFiumControl_get_Mono_TwipsPDF_BITMAP(This,pageNumber,monoColor,grayLevelToWhite,pRectPDF,frameSizePixels,pHBITMAP)	\
    ( (This)->lpVtbl -> get_Mono_TwipsPDF_BITMAP(This,pageNumber,monoColor,grayLevelToWhite,pRectPDF,frameSizePixels,pHBITMAP) ) 

#define IPDFiumControl_get_IsDocumentRendered(This,pIsRendered)	\
    ( (This)->lpVtbl -> get_IsDocumentRendered(This,pIsRendered) ) 

#define IPDFiumControl_get_MSHTMLHwnd(This,pMSHTMLWindow)	\
    ( (This)->lpVtbl -> get_MSHTMLHwnd(This,pMSHTMLWindow) ) 

#define IPDFiumControl_ConvertPointsToScrollPanePixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertPointsToScrollPanePixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ConvertPointsToVisiblePanePixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertPointsToVisiblePanePixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ConvertPointsToClippedVisiblePanePixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertPointsToClippedVisiblePanePixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ConvertVisiblePanePixelsToPoints(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertVisiblePanePixelsToPoints(This,pageNumber,pRect) ) 

#define IPDFiumControl_ConvertPixelsToScrollPanePixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ConvertPixelsToScrollPanePixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ScalePixelsToPoints(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ScalePixelsToPoints(This,pageNumber,pRect) ) 

#define IPDFiumControl_ScaleTwipsPixelsToPoints(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ScaleTwipsPixelsToPoints(This,pageNumber,pRect) ) 

#define IPDFiumControl_ScalePointsToPixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ScalePointsToPixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ScalePointsToTwipsPixels(This,pageNumber,pRect)	\
    ( (This)->lpVtbl -> ScalePointsToTwipsPixels(This,pageNumber,pRect) ) 

#define IPDFiumControl_ScalePixelsToPointsFromImageSize(This,pageNumber,cxImage,cyImage,pRect)	\
    ( (This)->lpVtbl -> ScalePixelsToPointsFromImageSize(This,pageNumber,cxImage,cyImage,pRect) ) 

#define IPDFiumControl_ScalePointsToPixelsFromImageSize(This,pageNumber,cxImage,cyImage,pRect)	\
    ( (This)->lpVtbl -> ScalePointsToPixelsFromImageSize(This,pageNumber,cxImage,cyImage,pRect) ) 

#define IPDFiumControl_OpenDocument(This,documentFileName)	\
    ( (This)->lpVtbl -> OpenDocument(This,documentFileName) ) 

#define IPDFiumControl_CloseDocument(This)	\
    ( (This)->lpVtbl -> CloseDocument(This) ) 

#define IPDFiumControl_DisplayDocumentAtSize(This,backgroundColor,cxImagePixels,cyImagePixels,pdfOrHTMLFileName,pageNumber)	\
    ( (This)->lpVtbl -> DisplayDocumentAtSize(This,backgroundColor,cxImagePixels,cyImagePixels,pdfOrHTMLFileName,pageNumber) ) 

#define IPDFiumControl_DisplayDocument(This,backgroundColor,pdfOrHTMLFileName,pageNumber)	\
    ( (This)->lpVtbl -> DisplayDocument(This,backgroundColor,pdfOrHTMLFileName,pageNumber) ) 

#define IPDFiumControl_GoToPage(This,pageNumber)	\
    ( (This)->lpVtbl -> GoToPage(This,pageNumber) ) 

#define IPDFiumControl_PrintCurrentDocument(This,printerName)	\
    ( (This)->lpVtbl -> PrintCurrentDocument(This,printerName) ) 

#define IPDFiumControl_PrintDocument(This,pdfOrHTMLFileName,printerName)	\
    ( (This)->lpVtbl -> PrintDocument(This,pdfOrHTMLFileName,printerName) ) 

#define IPDFiumControl_FinalRelease(This)	\
    ( (This)->lpVtbl -> FinalRelease(This) ) 

#define IPDFiumControl_Cleanup(This)	\
    ( (This)->lpVtbl -> Cleanup(This) ) 

#define IPDFiumControl_ResizePDFDocument(This,cxImagePixels,cyImagePixels)	\
    ( (This)->lpVtbl -> ResizePDFDocument(This,cxImagePixels,cyImagePixels) ) 

#define IPDFiumControl_HandleWindowsMessage(This,msg,wParam,lParam)	\
    ( (This)->lpVtbl -> HandleWindowsMessage(This,msg,wParam,lParam) ) 

#define IPDFiumControl_SetCursor(This,cursorID)	\
    ( (This)->lpVtbl -> SetCursor(This,cursorID) ) 

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
        
        virtual HRESULT STDMETHODCALLTYPE HasPainted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageChanged( 
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageRequestedHasPainted( 
            long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentRendered( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DocumentOpened( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDFiumControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFiumControlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFiumControlEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFiumControlEvents * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, MouseMessage)
        HRESULT ( STDMETHODCALLTYPE *MouseMessage )( 
            IPDFiumControlEvents * This,
            UINT msg,
            WPARAM wParam,
            LPARAM lParam);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, Size)
        HRESULT ( STDMETHODCALLTYPE *Size )( 
            IPDFiumControlEvents * This,
            SIZE *pSize);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, HasPainted)
        HRESULT ( STDMETHODCALLTYPE *HasPainted )( 
            IPDFiumControlEvents * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, PageChanged)
        HRESULT ( STDMETHODCALLTYPE *PageChanged )( 
            IPDFiumControlEvents * This,
            long pageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, PageRequestedHasPainted)
        HRESULT ( STDMETHODCALLTYPE *PageRequestedHasPainted )( 
            IPDFiumControlEvents * This,
            long pageNumber);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, DocumentRendered)
        HRESULT ( STDMETHODCALLTYPE *DocumentRendered )( 
            IPDFiumControlEvents * This);
        
        DECLSPEC_XFGVIRT(IPDFiumControlEvents, DocumentOpened)
        HRESULT ( STDMETHODCALLTYPE *DocumentOpened )( 
            IPDFiumControlEvents * This);
        
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

#define IPDFiumControlEvents_HasPainted(This)	\
    ( (This)->lpVtbl -> HasPainted(This) ) 

#define IPDFiumControlEvents_PageChanged(This,pageNumber)	\
    ( (This)->lpVtbl -> PageChanged(This,pageNumber) ) 

#define IPDFiumControlEvents_PageRequestedHasPainted(This,pageNumber)	\
    ( (This)->lpVtbl -> PageRequestedHasPainted(This,pageNumber) ) 

#define IPDFiumControlEvents_DocumentRendered(This)	\
    ( (This)->lpVtbl -> DocumentRendered(This) ) 

#define IPDFiumControlEvents_DocumentOpened(This)	\
    ( (This)->lpVtbl -> DocumentOpened(This) ) 

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


