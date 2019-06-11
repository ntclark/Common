

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jun 11 14:17:49 2019
 */
/* Compiler settings for COM Implementation\PDFiumControl_IAcroAXDocShim.odl:
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


#ifndef __PDFiumControl_IAcroAXDocShim_i_h__
#define __PDFiumControl_IAcroAXDocShim_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPDFiumControl_IAcroAXDocShim_FWD_DEFINED__
#define __IPDFiumControl_IAcroAXDocShim_FWD_DEFINED__
typedef interface IPDFiumControl_IAcroAXDocShim IPDFiumControl_IAcroAXDocShim;

#endif 	/* __IPDFiumControl_IAcroAXDocShim_FWD_DEFINED__ */


#ifndef __PDFiumControl_IAcroAXDocShim_FWD_DEFINED__
#define __PDFiumControl_IAcroAXDocShim_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDFiumControl_IAcroAXDocShim PDFiumControl_IAcroAXDocShim;
#else
typedef struct PDFiumControl_IAcroAXDocShim PDFiumControl_IAcroAXDocShim;
#endif /* __cplusplus */

#endif 	/* __PDFiumControl_IAcroAXDocShim_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PDFiumControl_IAcroAXDocShim_LIBRARY_DEFINED__
#define __PDFiumControl_IAcroAXDocShim_LIBRARY_DEFINED__

/* library PDFiumControl_IAcroAXDocShim */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_PDFiumControl_IAcroAXDocShim;

#ifndef __IPDFiumControl_IAcroAXDocShim_INTERFACE_DEFINED__
#define __IPDFiumControl_IAcroAXDocShim_INTERFACE_DEFINED__

/* interface IPDFiumControl_IAcroAXDocShim */
/* [object][unique][nonextensible][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPDFiumControl_IAcroAXDocShim;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5FF6E92-F84E-432C-AACB-0982C940E538")
    IPDFiumControl_IAcroAXDocShim : public IDispatch
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_src( 
            /* [in] */ BSTR sourceDocument) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_src( 
            /* [retval][out] */ BSTR *pSourceDocument) = 0;
        
        virtual VARIANT_BOOL STDMETHODCALLTYPE LoadFile( 
            BSTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setShowToolbar( 
            VARIANT_BOOL On) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE gotoFirstPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE gotoLastPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE gotoNextPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE gotoPreviousPage( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setCurrentPage( 
            long n) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE goForwardStack( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE goBackwardStack( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setPageMode( 
            BSTR pageMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setLayoutMode( 
            BSTR layoutMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setNamedDest( 
            BSTR namedDest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Print( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE printWithDialog( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setZoom( 
            float percent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setZoomScroll( 
            float percent,
            float left,
            float top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setView( 
            BSTR viewMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setViewScroll( 
            BSTR viewMode,
            float offset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setViewRect( 
            float left,
            float top,
            float width,
            float height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE printPages( 
            long from,
            long to) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE printPagesFit( 
            long from,
            long to,
            VARIANT_BOOL shrinkToFit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE printAll( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE printAllFit( 
            VARIANT_BOOL shrinkToFit) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setShowScrollbars( 
            VARIANT_BOOL On) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setCurrentHightlight( 
            long a,
            long b,
            long c,
            long d) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setCurrentHighlight( 
            long a,
            long b,
            long c,
            long d) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDFiumControl_IAcroAXDocShimVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDFiumControl_IAcroAXDocShim * This,
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
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_src )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [in] */ BSTR sourceDocument);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_src )( 
            IPDFiumControl_IAcroAXDocShim * This,
            /* [retval][out] */ BSTR *pSourceDocument);
        
        VARIANT_BOOL ( STDMETHODCALLTYPE *LoadFile )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR fileName);
        
        HRESULT ( STDMETHODCALLTYPE *setShowToolbar )( 
            IPDFiumControl_IAcroAXDocShim * This,
            VARIANT_BOOL On);
        
        HRESULT ( STDMETHODCALLTYPE *gotoFirstPage )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *gotoLastPage )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *gotoNextPage )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *gotoPreviousPage )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *setCurrentPage )( 
            IPDFiumControl_IAcroAXDocShim * This,
            long n);
        
        HRESULT ( STDMETHODCALLTYPE *goForwardStack )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *goBackwardStack )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *setPageMode )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR pageMode);
        
        HRESULT ( STDMETHODCALLTYPE *setLayoutMode )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR layoutMode);
        
        HRESULT ( STDMETHODCALLTYPE *setNamedDest )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR namedDest);
        
        HRESULT ( STDMETHODCALLTYPE *Print )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *printWithDialog )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *setZoom )( 
            IPDFiumControl_IAcroAXDocShim * This,
            float percent);
        
        HRESULT ( STDMETHODCALLTYPE *setZoomScroll )( 
            IPDFiumControl_IAcroAXDocShim * This,
            float percent,
            float left,
            float top);
        
        HRESULT ( STDMETHODCALLTYPE *setView )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR viewMode);
        
        HRESULT ( STDMETHODCALLTYPE *setViewScroll )( 
            IPDFiumControl_IAcroAXDocShim * This,
            BSTR viewMode,
            float offset);
        
        HRESULT ( STDMETHODCALLTYPE *setViewRect )( 
            IPDFiumControl_IAcroAXDocShim * This,
            float left,
            float top,
            float width,
            float height);
        
        HRESULT ( STDMETHODCALLTYPE *printPages )( 
            IPDFiumControl_IAcroAXDocShim * This,
            long from,
            long to);
        
        HRESULT ( STDMETHODCALLTYPE *printPagesFit )( 
            IPDFiumControl_IAcroAXDocShim * This,
            long from,
            long to,
            VARIANT_BOOL shrinkToFit);
        
        HRESULT ( STDMETHODCALLTYPE *printAll )( 
            IPDFiumControl_IAcroAXDocShim * This);
        
        HRESULT ( STDMETHODCALLTYPE *printAllFit )( 
            IPDFiumControl_IAcroAXDocShim * This,
            VARIANT_BOOL shrinkToFit);
        
        HRESULT ( STDMETHODCALLTYPE *setShowScrollbars )( 
            IPDFiumControl_IAcroAXDocShim * This,
            VARIANT_BOOL On);
        
        HRESULT ( STDMETHODCALLTYPE *setCurrentHightlight )( 
            IPDFiumControl_IAcroAXDocShim * This,
            long a,
            long b,
            long c,
            long d);
        
        HRESULT ( STDMETHODCALLTYPE *setCurrentHighlight )( 
            IPDFiumControl_IAcroAXDocShim * This,
            long a,
            long b,
            long c,
            long d);
        
        END_INTERFACE
    } IPDFiumControl_IAcroAXDocShimVtbl;

    interface IPDFiumControl_IAcroAXDocShim
    {
        CONST_VTBL struct IPDFiumControl_IAcroAXDocShimVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDFiumControl_IAcroAXDocShim_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDFiumControl_IAcroAXDocShim_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDFiumControl_IAcroAXDocShim_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDFiumControl_IAcroAXDocShim_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDFiumControl_IAcroAXDocShim_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDFiumControl_IAcroAXDocShim_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDFiumControl_IAcroAXDocShim_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDFiumControl_IAcroAXDocShim_put_src(This,sourceDocument)	\
    ( (This)->lpVtbl -> put_src(This,sourceDocument) ) 

#define IPDFiumControl_IAcroAXDocShim_get_src(This,pSourceDocument)	\
    ( (This)->lpVtbl -> get_src(This,pSourceDocument) ) 

#define IPDFiumControl_IAcroAXDocShim_LoadFile(This,fileName)	\
    ( (This)->lpVtbl -> LoadFile(This,fileName) ) 

#define IPDFiumControl_IAcroAXDocShim_setShowToolbar(This,On)	\
    ( (This)->lpVtbl -> setShowToolbar(This,On) ) 

#define IPDFiumControl_IAcroAXDocShim_gotoFirstPage(This)	\
    ( (This)->lpVtbl -> gotoFirstPage(This) ) 

#define IPDFiumControl_IAcroAXDocShim_gotoLastPage(This)	\
    ( (This)->lpVtbl -> gotoLastPage(This) ) 

#define IPDFiumControl_IAcroAXDocShim_gotoNextPage(This)	\
    ( (This)->lpVtbl -> gotoNextPage(This) ) 

#define IPDFiumControl_IAcroAXDocShim_gotoPreviousPage(This)	\
    ( (This)->lpVtbl -> gotoPreviousPage(This) ) 

#define IPDFiumControl_IAcroAXDocShim_setCurrentPage(This,n)	\
    ( (This)->lpVtbl -> setCurrentPage(This,n) ) 

#define IPDFiumControl_IAcroAXDocShim_goForwardStack(This)	\
    ( (This)->lpVtbl -> goForwardStack(This) ) 

#define IPDFiumControl_IAcroAXDocShim_goBackwardStack(This)	\
    ( (This)->lpVtbl -> goBackwardStack(This) ) 

#define IPDFiumControl_IAcroAXDocShim_setPageMode(This,pageMode)	\
    ( (This)->lpVtbl -> setPageMode(This,pageMode) ) 

#define IPDFiumControl_IAcroAXDocShim_setLayoutMode(This,layoutMode)	\
    ( (This)->lpVtbl -> setLayoutMode(This,layoutMode) ) 

#define IPDFiumControl_IAcroAXDocShim_setNamedDest(This,namedDest)	\
    ( (This)->lpVtbl -> setNamedDest(This,namedDest) ) 

#define IPDFiumControl_IAcroAXDocShim_Print(This)	\
    ( (This)->lpVtbl -> Print(This) ) 

#define IPDFiumControl_IAcroAXDocShim_printWithDialog(This)	\
    ( (This)->lpVtbl -> printWithDialog(This) ) 

#define IPDFiumControl_IAcroAXDocShim_setZoom(This,percent)	\
    ( (This)->lpVtbl -> setZoom(This,percent) ) 

#define IPDFiumControl_IAcroAXDocShim_setZoomScroll(This,percent,left,top)	\
    ( (This)->lpVtbl -> setZoomScroll(This,percent,left,top) ) 

#define IPDFiumControl_IAcroAXDocShim_setView(This,viewMode)	\
    ( (This)->lpVtbl -> setView(This,viewMode) ) 

#define IPDFiumControl_IAcroAXDocShim_setViewScroll(This,viewMode,offset)	\
    ( (This)->lpVtbl -> setViewScroll(This,viewMode,offset) ) 

#define IPDFiumControl_IAcroAXDocShim_setViewRect(This,left,top,width,height)	\
    ( (This)->lpVtbl -> setViewRect(This,left,top,width,height) ) 

#define IPDFiumControl_IAcroAXDocShim_printPages(This,from,to)	\
    ( (This)->lpVtbl -> printPages(This,from,to) ) 

#define IPDFiumControl_IAcroAXDocShim_printPagesFit(This,from,to,shrinkToFit)	\
    ( (This)->lpVtbl -> printPagesFit(This,from,to,shrinkToFit) ) 

#define IPDFiumControl_IAcroAXDocShim_printAll(This)	\
    ( (This)->lpVtbl -> printAll(This) ) 

#define IPDFiumControl_IAcroAXDocShim_printAllFit(This,shrinkToFit)	\
    ( (This)->lpVtbl -> printAllFit(This,shrinkToFit) ) 

#define IPDFiumControl_IAcroAXDocShim_setShowScrollbars(This,On)	\
    ( (This)->lpVtbl -> setShowScrollbars(This,On) ) 

#define IPDFiumControl_IAcroAXDocShim_setCurrentHightlight(This,a,b,c,d)	\
    ( (This)->lpVtbl -> setCurrentHightlight(This,a,b,c,d) ) 

#define IPDFiumControl_IAcroAXDocShim_setCurrentHighlight(This,a,b,c,d)	\
    ( (This)->lpVtbl -> setCurrentHighlight(This,a,b,c,d) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDFiumControl_IAcroAXDocShim_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PDFiumControl_IAcroAXDocShim;

#ifdef __cplusplus

class DECLSPEC_UUID("B5FF6E92-F84E-432C-AACB-0982C940E539")
PDFiumControl_IAcroAXDocShim;
#endif
#endif /* __PDFiumControl_IAcroAXDocShim_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


