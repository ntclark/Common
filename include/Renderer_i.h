

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


#ifndef __IRendererNotifications_FWD_DEFINED__
#define __IRendererNotifications_FWD_DEFINED__
typedef interface IRendererNotifications IRendererNotifications;

#endif 	/* __IRendererNotifications_FWD_DEFINED__ */


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
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ToDeviceTransform( 
            UINT_PTR pXformToDeviceSpace) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ToPageTransform( 
            UINT_PTR pXForm) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ScaleTransform( 
            UINT_PTR pXForm) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DownScale( 
            FLOAT downScale) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Origin( 
            POINTF origin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRenderLive( 
            HDC hdc,
            RECT *pDrawingRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnSetRenderLive( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Render( 
            HDC hdc,
            RECT *pDrawingRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Discard( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRect( 
            HDC hdc,
            RECT *pRect,
            COLORREF theColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WhereAmI( 
            long xPixels,
            long yPixels,
            FLOAT *pX,
            FLOAT *pY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreState( void) = 0;
        
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
        
        DECLSPEC_XFGVIRT(IRenderer, put_ToDeviceTransform)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToDeviceTransform )( 
            IRenderer * This,
            UINT_PTR pXformToDeviceSpace);
        
        DECLSPEC_XFGVIRT(IRenderer, put_ToPageTransform)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ToPageTransform )( 
            IRenderer * This,
            UINT_PTR pXForm);
        
        DECLSPEC_XFGVIRT(IRenderer, put_ScaleTransform)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleTransform )( 
            IRenderer * This,
            UINT_PTR pXForm);
        
        DECLSPEC_XFGVIRT(IRenderer, put_DownScale)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DownScale )( 
            IRenderer * This,
            FLOAT downScale);
        
        DECLSPEC_XFGVIRT(IRenderer, put_Origin)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Origin )( 
            IRenderer * This,
            POINTF origin);
        
        DECLSPEC_XFGVIRT(IRenderer, SetRenderLive)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRenderLive )( 
            IRenderer * This,
            HDC hdc,
            RECT *pDrawingRect);
        
        DECLSPEC_XFGVIRT(IRenderer, UnSetRenderLive)
        HRESULT ( STDMETHODCALLTYPE *UnSetRenderLive )( 
            IRenderer * This);
        
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
        
        DECLSPEC_XFGVIRT(IRenderer, WhereAmI)
        HRESULT ( STDMETHODCALLTYPE *WhereAmI )( 
            IRenderer * This,
            long xPixels,
            long yPixels,
            FLOAT *pX,
            FLOAT *pY);
        
        DECLSPEC_XFGVIRT(IRenderer, SaveState)
        HRESULT ( STDMETHODCALLTYPE *SaveState )( 
            IRenderer * This);
        
        DECLSPEC_XFGVIRT(IRenderer, RestoreState)
        HRESULT ( STDMETHODCALLTYPE *RestoreState )( 
            IRenderer * This);
        
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


#define IRenderer_put_ToDeviceTransform(This,pXformToDeviceSpace)	\
    ( (This)->lpVtbl -> put_ToDeviceTransform(This,pXformToDeviceSpace) ) 

#define IRenderer_put_ToPageTransform(This,pXForm)	\
    ( (This)->lpVtbl -> put_ToPageTransform(This,pXForm) ) 

#define IRenderer_put_ScaleTransform(This,pXForm)	\
    ( (This)->lpVtbl -> put_ScaleTransform(This,pXForm) ) 

#define IRenderer_put_DownScale(This,downScale)	\
    ( (This)->lpVtbl -> put_DownScale(This,downScale) ) 

#define IRenderer_put_Origin(This,origin)	\
    ( (This)->lpVtbl -> put_Origin(This,origin) ) 

#define IRenderer_SetRenderLive(This,hdc,pDrawingRect)	\
    ( (This)->lpVtbl -> SetRenderLive(This,hdc,pDrawingRect) ) 

#define IRenderer_UnSetRenderLive(This)	\
    ( (This)->lpVtbl -> UnSetRenderLive(This) ) 

#define IRenderer_Render(This,hdc,pDrawingRect)	\
    ( (This)->lpVtbl -> Render(This,hdc,pDrawingRect) ) 

#define IRenderer_Discard(This)	\
    ( (This)->lpVtbl -> Discard(This) ) 

#define IRenderer_ClearRect(This,hdc,pRect,theColor)	\
    ( (This)->lpVtbl -> ClearRect(This,hdc,pRect,theColor) ) 

#define IRenderer_WhereAmI(This,xPixels,yPixels,pX,pY)	\
    ( (This)->lpVtbl -> WhereAmI(This,xPixels,yPixels,pX,pY) ) 

#define IRenderer_SaveState(This)	\
    ( (This)->lpVtbl -> SaveState(This) ) 

#define IRenderer_RestoreState(This)	\
    ( (This)->lpVtbl -> RestoreState(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRenderer_INTERFACE_DEFINED__ */


#ifndef __IGraphicElements_INTERFACE_DEFINED__
#define __IGraphicElements_INTERFACE_DEFINED__

/* interface IGraphicElements */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicElements;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC9F95CD-24F1-450A-8883-02B5314B1C82")
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
        
        virtual HRESULT STDMETHODCALLTYPE Arc( 
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius,
            FLOAT startAngle,
            FLOAT endAngle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Ellipse( 
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT xRadius,
            FLOAT yRadius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Circle( 
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CubicBezier( 
            FLOAT x0,
            FLOAT y0,
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2,
            FLOAT x3,
            FLOAT y3) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QuadraticBezier( 
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostScriptImage( 
            HDC hdc,
            HBITMAP hBitmap,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostScriptJpegImage( 
            HDC hdc,
            UINT_PTR pJpegData,
            long dataSize,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NonPostScriptImage( 
            HDC hdc,
            HBITMAP hBitmap,
            FLOAT x0,
            FLOAT y0,
            FLOAT displayWidth,
            FLOAT displayHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NonPostScriptJPegImage( 
            HDC hdc,
            UINT_PTR pJpegData,
            long dataSize,
            FLOAT x0,
            FLOAT y0,
            FLOAT displayWidth,
            FLOAT displayHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentPoint( 
            FLOAT *pX,
            FLOAT *pY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentPoint( 
            FLOAT *pX,
            FLOAT *pY) = 0;
        
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
        
        DECLSPEC_XFGVIRT(IGraphicElements, Arc)
        HRESULT ( STDMETHODCALLTYPE *Arc )( 
            IGraphicElements * This,
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius,
            FLOAT startAngle,
            FLOAT endAngle);
        
        DECLSPEC_XFGVIRT(IGraphicElements, Ellipse)
        HRESULT ( STDMETHODCALLTYPE *Ellipse )( 
            IGraphicElements * This,
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT xRadius,
            FLOAT yRadius);
        
        DECLSPEC_XFGVIRT(IGraphicElements, Circle)
        HRESULT ( STDMETHODCALLTYPE *Circle )( 
            IGraphicElements * This,
            FLOAT xCenter,
            FLOAT yCenter,
            FLOAT radius);
        
        DECLSPEC_XFGVIRT(IGraphicElements, CubicBezier)
        HRESULT ( STDMETHODCALLTYPE *CubicBezier )( 
            IGraphicElements * This,
            FLOAT x0,
            FLOAT y0,
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2,
            FLOAT x3,
            FLOAT y3);
        
        DECLSPEC_XFGVIRT(IGraphicElements, QuadraticBezier)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QuadraticBezier )( 
            IGraphicElements * This,
            FLOAT x1,
            FLOAT y1,
            FLOAT x2,
            FLOAT y2);
        
        DECLSPEC_XFGVIRT(IGraphicElements, PostScriptImage)
        HRESULT ( STDMETHODCALLTYPE *PostScriptImage )( 
            IGraphicElements * This,
            HDC hdc,
            HBITMAP hBitmap,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height);
        
        DECLSPEC_XFGVIRT(IGraphicElements, PostScriptJpegImage)
        HRESULT ( STDMETHODCALLTYPE *PostScriptJpegImage )( 
            IGraphicElements * This,
            HDC hdc,
            UINT_PTR pJpegData,
            long dataSize,
            UINT_PTR pPSCurrentCTM,
            FLOAT width,
            FLOAT height);
        
        DECLSPEC_XFGVIRT(IGraphicElements, NonPostScriptImage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NonPostScriptImage )( 
            IGraphicElements * This,
            HDC hdc,
            HBITMAP hBitmap,
            FLOAT x0,
            FLOAT y0,
            FLOAT displayWidth,
            FLOAT displayHeight);
        
        DECLSPEC_XFGVIRT(IGraphicElements, NonPostScriptJPegImage)
        HRESULT ( STDMETHODCALLTYPE *NonPostScriptJPegImage )( 
            IGraphicElements * This,
            HDC hdc,
            UINT_PTR pJpegData,
            long dataSize,
            FLOAT x0,
            FLOAT y0,
            FLOAT displayWidth,
            FLOAT displayHeight);
        
        DECLSPEC_XFGVIRT(IGraphicElements, GetCurrentPoint)
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )( 
            IGraphicElements * This,
            FLOAT *pX,
            FLOAT *pY);
        
        DECLSPEC_XFGVIRT(IGraphicElements, SetCurrentPoint)
        HRESULT ( STDMETHODCALLTYPE *SetCurrentPoint )( 
            IGraphicElements * This,
            FLOAT *pX,
            FLOAT *pY);
        
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

#define IGraphicElements_Arc(This,xCenter,yCenter,radius,startAngle,endAngle)	\
    ( (This)->lpVtbl -> Arc(This,xCenter,yCenter,radius,startAngle,endAngle) ) 

#define IGraphicElements_Ellipse(This,xCenter,yCenter,xRadius,yRadius)	\
    ( (This)->lpVtbl -> Ellipse(This,xCenter,yCenter,xRadius,yRadius) ) 

#define IGraphicElements_Circle(This,xCenter,yCenter,radius)	\
    ( (This)->lpVtbl -> Circle(This,xCenter,yCenter,radius) ) 

#define IGraphicElements_CubicBezier(This,x0,y0,x1,y1,x2,y2,x3,y3)	\
    ( (This)->lpVtbl -> CubicBezier(This,x0,y0,x1,y1,x2,y2,x3,y3) ) 

#define IGraphicElements_QuadraticBezier(This,x1,y1,x2,y2)	\
    ( (This)->lpVtbl -> QuadraticBezier(This,x1,y1,x2,y2) ) 

#define IGraphicElements_PostScriptImage(This,hdc,hBitmap,pPSCurrentCTM,width,height)	\
    ( (This)->lpVtbl -> PostScriptImage(This,hdc,hBitmap,pPSCurrentCTM,width,height) ) 

#define IGraphicElements_PostScriptJpegImage(This,hdc,pJpegData,dataSize,pPSCurrentCTM,width,height)	\
    ( (This)->lpVtbl -> PostScriptJpegImage(This,hdc,pJpegData,dataSize,pPSCurrentCTM,width,height) ) 

#define IGraphicElements_NonPostScriptImage(This,hdc,hBitmap,x0,y0,displayWidth,displayHeight)	\
    ( (This)->lpVtbl -> NonPostScriptImage(This,hdc,hBitmap,x0,y0,displayWidth,displayHeight) ) 

#define IGraphicElements_NonPostScriptJPegImage(This,hdc,pJpegData,dataSize,x0,y0,displayWidth,displayHeight)	\
    ( (This)->lpVtbl -> NonPostScriptJPegImage(This,hdc,pJpegData,dataSize,x0,y0,displayWidth,displayHeight) ) 

#define IGraphicElements_GetCurrentPoint(This,pX,pY)	\
    ( (This)->lpVtbl -> GetCurrentPoint(This,pX,pY) ) 

#define IGraphicElements_SetCurrentPoint(This,pX,pY)	\
    ( (This)->lpVtbl -> SetCurrentPoint(This,pX,pY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicElements_INTERFACE_DEFINED__ */


#ifndef __IGraphicParameters_INTERFACE_DEFINED__
#define __IGraphicParameters_INTERFACE_DEFINED__

/* interface IGraphicParameters */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC9F95CD-24F1-450A-8883-02B5314B1C83")
    IGraphicParameters : public IUnknown
    {
    public:
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


#ifndef __IRendererNotifications_INTERFACE_DEFINED__
#define __IRendererNotifications_INTERFACE_DEFINED__

/* interface IRendererNotifications */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IRendererNotifications;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC9F95CD-24F1-450A-8883-02B5314B1C84")
    IRendererNotifications : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ErrorNotification( 
            UINT_PTR errorMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StatusNotification( 
            UINT_PTR statusMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogNotification( 
            UINT_PTR logMessage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRendererNotificationsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRendererNotifications * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRendererNotifications * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRendererNotifications * This);
        
        DECLSPEC_XFGVIRT(IRendererNotifications, ErrorNotification)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ErrorNotification )( 
            IRendererNotifications * This,
            UINT_PTR errorMessage);
        
        DECLSPEC_XFGVIRT(IRendererNotifications, StatusNotification)
        HRESULT ( STDMETHODCALLTYPE *StatusNotification )( 
            IRendererNotifications * This,
            UINT_PTR statusMessage);
        
        DECLSPEC_XFGVIRT(IRendererNotifications, LogNotification)
        HRESULT ( STDMETHODCALLTYPE *LogNotification )( 
            IRendererNotifications * This,
            UINT_PTR logMessage);
        
        DECLSPEC_XFGVIRT(IRendererNotifications, Clear)
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IRendererNotifications * This);
        
        END_INTERFACE
    } IRendererNotificationsVtbl;

    interface IRendererNotifications
    {
        CONST_VTBL struct IRendererNotificationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRendererNotifications_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRendererNotifications_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRendererNotifications_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRendererNotifications_ErrorNotification(This,errorMessage)	\
    ( (This)->lpVtbl -> ErrorNotification(This,errorMessage) ) 

#define IRendererNotifications_StatusNotification(This,statusMessage)	\
    ( (This)->lpVtbl -> StatusNotification(This,statusMessage) ) 

#define IRendererNotifications_LogNotification(This,logMessage)	\
    ( (This)->lpVtbl -> LogNotification(This,logMessage) ) 

#define IRendererNotifications_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRendererNotifications_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Renderer;

#ifdef __cplusplus

class DECLSPEC_UUID("CC9F95CD-24F1-450A-8883-02B5314B1C90")
Renderer;
#endif
#endif /* __Renderer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


