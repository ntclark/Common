

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\Renderer.odl:
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


#ifndef __Renderer_i_h__
#define __Renderer_i_h__

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

#ifndef __IRenderer_FWD_DEFINED__
#define __IRenderer_FWD_DEFINED__
typedef interface IRenderer IRenderer;

#endif 	/* __IRenderer_FWD_DEFINED__ */


#ifndef __IGraphicElements_FWD_DEFINED__
#define __IGraphicElements_FWD_DEFINED__
typedef interface IGraphicElements IGraphicElements;

#endif 	/* __IGraphicElements_FWD_DEFINED__ */


#ifndef __IGraphicParameters_FWD_DEFINED__
#define __IGraphicParameters_FWD_DEFINED__
typedef interface IGraphicParameters IGraphicParameters;

#endif 	/* __IGraphicParameters_FWD_DEFINED__ */


#ifndef __Renderer_FWD_DEFINED__
#define __Renderer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Renderer Renderer;
#else
typedef struct Renderer Renderer;
#endif /* __cplusplus */

#endif 	/* __Renderer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Renderer_LIBRARY_DEFINED__
#define __Renderer_LIBRARY_DEFINED__

/* library Renderer */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_Renderer;

#ifndef __IRenderer_INTERFACE_DEFINED__
#define __IRenderer_INTERFACE_DEFINED__

/* interface IRenderer */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IRenderer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC9F95CD-24F1-450A-8883-02B5314B1C81")
    IRenderer : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TransformMatrix( 
            UINT_PTR pXformToDeviceSpace) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DownScale( 
            FLOAT downScale) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Origin( 
            POINTF origin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Render( 
            HDC hdc,
            RECT *pDrawingRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Discard( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRect( 
            HDC hdc,
            RECT *pRect,
            COLORREF theColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParametersBundle( 
            UINT_PTR **pptrBundleStorage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParametersBundle( 
            UINT_PTR *ptrBundleStorage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRendererVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRenderer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRenderer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRenderer * This);
        
        DECLSPEC_XFGVIRT(IRenderer, put_TransformMatrix)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransformMatrix )( 
            IRenderer * This,
            UINT_PTR pXformToDeviceSpace);
        
        DECLSPEC_XFGVIRT(IRenderer, put_DownScale)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DownScale )( 
            IRenderer * This,
            FLOAT downScale);
        
        DECLSPEC_XFGVIRT(IRenderer, put_Origin)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Origin )( 
            IRenderer * This,
            POINTF origin);
        
        DECLSPEC_XFGVIRT(IRenderer, Render)
        HRESULT ( STDMETHODCALLTYPE *Render )( 
            IRenderer * This,
            HDC hdc,
            RECT *pDrawingRect);
        
        DECLSPEC_XFGVIRT(IRenderer, Discard)
        HRESULT ( STDMETHODCALLTYPE *Discard )( 
            IRenderer * This);
        
        DECLSPEC_XFGVIRT(IRenderer, ClearRect)
        HRESULT ( STDMETHODCALLTYPE *ClearRect )( 
            IRenderer * This,
            HDC hdc,
            RECT *pRect,
            COLORREF theColor);
        
        DECLSPEC_XFGVIRT(IRenderer, Reset)
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IRenderer * This);
        
        DECLSPEC_XFGVIRT(IRenderer, GetParametersBundle)
        HRESULT ( STDMETHODCALLTYPE *GetParametersBundle )( 
            IRenderer * This,
            UINT_PTR **pptrBundleStorage);
        
        DECLSPEC_XFGVIRT(IRenderer, SetParametersBundle)
        HRESULT ( STDMETHODCALLTYPE *SetParametersBundle )( 
            IRenderer * This,
            UINT_PTR *ptrBundleStorage);
        
        END_INTERFACE
    } IRendererVtbl;

    interface IRenderer
    {
        CONST_VTBL struct IRendererVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRenderer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRenderer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRenderer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRenderer_put_TransformMatrix(This,pXformToDeviceSpace)	\
    ( (This)->lpVtbl -> put_TransformMatrix(This,pXformToDeviceSpace) ) 

#define IRenderer_put_DownScale(This,downScale)	\
    ( (This)->lpVtbl -> put_DownScale(This,downScale) ) 

#define IRenderer_put_Origin(This,origin)	\
    ( (This)->lpVtbl -> put_Origin(This,origin) ) 

#define IRenderer_Render(This,hdc,pDrawingRect)	\
    ( (This)->lpVtbl -> Render(This,hdc,pDrawingRect) ) 

#define IRenderer_Discard(This)	\
    ( (This)->lpVtbl -> Discard(This) ) 

#define IRenderer_ClearRect(This,hdc,pRect,theColor)	\
    ( (This)->lpVtbl -> ClearRect(This,hdc,pRect,theColor) ) 

#define IRenderer_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IRenderer_GetParametersBundle(This,pptrBundleStorage)	\
    ( (This)->lpVtbl -> GetParametersBundle(This,pptrBundleStorage) ) 

#define IRenderer_SetParametersBundle(This,ptrBundleStorage)	\
    ( (This)->lpVtbl -> SetParametersBundle(This,ptrBundleStorage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRenderer_INTERFACE_DEFINED__ */


#ifndef __IGraphicElements_INTERFACE_DEFINED__
#define __IGraphicElements_INTERFACE_DEFINED__

/* interface IGraphicElements */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicElements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7731A10E-25F9-4234-BB4C-188512965193")
    IGraphicElements : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE NewPath( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClosePath( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StrokePath( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FillPath( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveTo( 
            FLOAT x,
            FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveToRelative( 
            FLOAT x,
            FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LineTo( 
            FLOAT x,
            FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LineToRelative( 
            FLOAT x,
            FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ArcTo( 
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius,
            FLOAT angle1,
            FLOAT angle2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CubicBezierTo( 
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2,
            FLOAT x3,
            FLOAT y3) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QuadraticBezierTo( 
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Image( 
            HDC hdc,
            HBITMAP hBitmap,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicElementsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicElements * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IGraphicElements, NewPath)
        HRESULT ( STDMETHODCALLTYPE *NewPath )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IGraphicElements, ClosePath)
        HRESULT ( STDMETHODCALLTYPE *ClosePath )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IGraphicElements, StrokePath)
        HRESULT ( STDMETHODCALLTYPE *StrokePath )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IGraphicElements, FillPath)
        HRESULT ( STDMETHODCALLTYPE *FillPath )( 
            IGraphicElements * This);
        
        DECLSPEC_XFGVIRT(IGraphicElements, MoveTo)
        HRESULT ( STDMETHODCALLTYPE *MoveTo )( 
            IGraphicElements * This,
            FLOAT x,
            FLOAT y);
        
        DECLSPEC_XFGVIRT(IGraphicElements, MoveToRelative)
        HRESULT ( STDMETHODCALLTYPE *MoveToRelative )( 
            IGraphicElements * This,
            FLOAT x,
            FLOAT y);
        
        DECLSPEC_XFGVIRT(IGraphicElements, LineTo)
        HRESULT ( STDMETHODCALLTYPE *LineTo )( 
            IGraphicElements * This,
            FLOAT x,
            FLOAT y);
        
        DECLSPEC_XFGVIRT(IGraphicElements, LineToRelative)
        HRESULT ( STDMETHODCALLTYPE *LineToRelative )( 
            IGraphicElements * This,
            FLOAT x,
            FLOAT y);
        
        DECLSPEC_XFGVIRT(IGraphicElements, ArcTo)
        HRESULT ( STDMETHODCALLTYPE *ArcTo )( 
            IGraphicElements * This,
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius,
            FLOAT angle1,
            FLOAT angle2);
        
        DECLSPEC_XFGVIRT(IGraphicElements, CubicBezierTo)
        HRESULT ( STDMETHODCALLTYPE *CubicBezierTo )( 
            IGraphicElements * This,
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2,
            FLOAT x3,
            FLOAT y3);
        
        DECLSPEC_XFGVIRT(IGraphicElements, QuadraticBezierTo)
        HRESULT ( STDMETHODCALLTYPE *QuadraticBezierTo )( 
            IGraphicElements * This,
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2);
        
        DECLSPEC_XFGVIRT(IGraphicElements, Image)
        HRESULT ( STDMETHODCALLTYPE *Image )( 
            IGraphicElements * This,
            HDC hdc,
            HBITMAP hBitmap,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height);
        
        END_INTERFACE
    } IGraphicElementsVtbl;

    interface IGraphicElements
    {
        CONST_VTBL struct IGraphicElementsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraphicElements_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraphicElements_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraphicElements_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraphicElements_NewPath(This)	\
    ( (This)->lpVtbl -> NewPath(This) ) 

#define IGraphicElements_ClosePath(This)	\
    ( (This)->lpVtbl -> ClosePath(This) ) 

#define IGraphicElements_StrokePath(This)	\
    ( (This)->lpVtbl -> StrokePath(This) ) 

#define IGraphicElements_FillPath(This)	\
    ( (This)->lpVtbl -> FillPath(This) ) 

#define IGraphicElements_MoveTo(This,x,y)	\
    ( (This)->lpVtbl -> MoveTo(This,x,y) ) 

#define IGraphicElements_MoveToRelative(This,x,y)	\
    ( (This)->lpVtbl -> MoveToRelative(This,x,y) ) 

#define IGraphicElements_LineTo(This,x,y)	\
    ( (This)->lpVtbl -> LineTo(This,x,y) ) 

#define IGraphicElements_LineToRelative(This,x,y)	\
    ( (This)->lpVtbl -> LineToRelative(This,x,y) ) 

#define IGraphicElements_ArcTo(This,xCenter,yCenter,radius,angle1,angle2)	\
    ( (This)->lpVtbl -> ArcTo(This,xCenter,yCenter,radius,angle1,angle2) ) 

#define IGraphicElements_CubicBezierTo(This,x1,y1,x2,y2,x3,y3)	\
    ( (This)->lpVtbl -> CubicBezierTo(This,x1,y1,x2,y2,x3,y3) ) 

#define IGraphicElements_QuadraticBezierTo(This,x1,y1,x2,y2)	\
    ( (This)->lpVtbl -> QuadraticBezierTo(This,x1,y1,x2,y2) ) 

#define IGraphicElements_Image(This,hdc,hBitmap,pPSCurrentCTM,width,height)	\
    ( (This)->lpVtbl -> Image(This,hdc,hBitmap,pPSCurrentCTM,width,height) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicElements_INTERFACE_DEFINED__ */


#ifndef __IGraphicParameters_INTERFACE_DEFINED__
#define __IGraphicParameters_INTERFACE_DEFINED__

/* interface IGraphicParameters */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7731A10E-25F9-4234-BB4C-188512965194")
    IGraphicParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreState( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LineWidth( 
            FLOAT lw) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LineJoin( 
            long lj) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LineCap( 
            long lc) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LineDash( 
            FLOAT *pValues,
            long countValues,
            FLOAT offset) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RGBColor( 
            COLORREF rgb) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicParametersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicParameters * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicParameters * This);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, SaveState)
        HRESULT ( STDMETHODCALLTYPE *SaveState )( 
            IGraphicParameters * This);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, RestoreState)
        HRESULT ( STDMETHODCALLTYPE *RestoreState )( 
            IGraphicParameters * This);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, put_LineWidth)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWidth )( 
            IGraphicParameters * This,
            FLOAT lw);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, put_LineJoin)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineJoin )( 
            IGraphicParameters * This,
            long lj);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, put_LineCap)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineCap )( 
            IGraphicParameters * This,
            long lc);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, put_LineDash)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineDash )( 
            IGraphicParameters * This,
            FLOAT *pValues,
            long countValues,
            FLOAT offset);
        
        DECLSPEC_XFGVIRT(IGraphicParameters, put_RGBColor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RGBColor )( 
            IGraphicParameters * This,
            COLORREF rgb);
        
        END_INTERFACE
    } IGraphicParametersVtbl;

    interface IGraphicParameters
    {
        CONST_VTBL struct IGraphicParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraphicParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraphicParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraphicParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraphicParameters_SaveState(This)	\
    ( (This)->lpVtbl -> SaveState(This) ) 

#define IGraphicParameters_RestoreState(This)	\
    ( (This)->lpVtbl -> RestoreState(This) ) 

#define IGraphicParameters_put_LineWidth(This,lw)	\
    ( (This)->lpVtbl -> put_LineWidth(This,lw) ) 

#define IGraphicParameters_put_LineJoin(This,lj)	\
    ( (This)->lpVtbl -> put_LineJoin(This,lj) ) 

#define IGraphicParameters_put_LineCap(This,lc)	\
    ( (This)->lpVtbl -> put_LineCap(This,lc) ) 

#define IGraphicParameters_put_LineDash(This,pValues,countValues,offset)	\
    ( (This)->lpVtbl -> put_LineDash(This,pValues,countValues,offset) ) 

#define IGraphicParameters_put_RGBColor(This,rgb)	\
    ( (This)->lpVtbl -> put_RGBColor(This,rgb) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicParameters_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Renderer;

#ifdef __cplusplus

class DECLSPEC_UUID("CC9F95CD-24F1-450A-8883-02B5314B1C82")
Renderer;
#endif
#endif /* __Renderer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


