

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Plot.odl:
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


#ifndef __Plot_i_h__
#define __Plot_i_h__

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

#ifndef __IGraphicSegmentAction_FWD_DEFINED__
#define __IGraphicSegmentAction_FWD_DEFINED__
typedef interface IGraphicSegmentAction IGraphicSegmentAction;

#endif 	/* __IGraphicSegmentAction_FWD_DEFINED__ */


#ifndef __IGraphicSegment_FWD_DEFINED__
#define __IGraphicSegment_FWD_DEFINED__
typedef interface IGraphicSegment IGraphicSegment;

#endif 	/* __IGraphicSegment_FWD_DEFINED__ */


#ifndef __IBasePlot_FWD_DEFINED__
#define __IBasePlot_FWD_DEFINED__
typedef interface IBasePlot IBasePlot;

#endif 	/* __IBasePlot_FWD_DEFINED__ */


#ifndef __IPlot_FWD_DEFINED__
#define __IPlot_FWD_DEFINED__
typedef interface IPlot IPlot;

#endif 	/* __IPlot_FWD_DEFINED__ */


#ifndef __IPlotNotify_FWD_DEFINED__
#define __IPlotNotify_FWD_DEFINED__
typedef interface IPlotNotify IPlotNotify;

#endif 	/* __IPlotNotify_FWD_DEFINED__ */


#ifndef __IPlotServices_FWD_DEFINED__
#define __IPlotServices_FWD_DEFINED__
typedef interface IPlotServices IPlotServices;

#endif 	/* __IPlotServices_FWD_DEFINED__ */


#ifndef __GraphicSegment_FWD_DEFINED__
#define __GraphicSegment_FWD_DEFINED__

#ifdef __cplusplus
typedef class GraphicSegment GraphicSegment;
#else
typedef struct GraphicSegment GraphicSegment;
#endif /* __cplusplus */

#endif 	/* __GraphicSegment_FWD_DEFINED__ */


#ifndef __Plot_FWD_DEFINED__
#define __Plot_FWD_DEFINED__

#ifdef __cplusplus
typedef class Plot Plot;
#else
typedef struct Plot Plot;
#endif /* __cplusplus */

#endif 	/* __Plot_FWD_DEFINED__ */


#ifndef __BasePlot_FWD_DEFINED__
#define __BasePlot_FWD_DEFINED__

#ifdef __cplusplus
typedef class BasePlot BasePlot;
#else
typedef struct BasePlot BasePlot;
#endif /* __cplusplus */

#endif 	/* __BasePlot_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Plot_LIBRARY_DEFINED__
#define __Plot_LIBRARY_DEFINED__

/* library Plot */
/* [version][lcid][helpstring][helpfile][uuid] */ 



EXTERN_C const IID LIBID_Plot;


#ifndef __PlotModule_MODULE_DEFINED__
#define __PlotModule_MODULE_DEFINED__


/* module PlotModule */


#endif /* __PlotModule_MODULE_DEFINED__ */

#ifndef __IGraphicSegmentAction_INTERFACE_DEFINED__
#define __IGraphicSegmentAction_INTERFACE_DEFINED__

/* interface IGraphicSegmentAction */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicSegmentAction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD7E-55E6-11d3-8365-006008BD5BC3")
    IGraphicSegmentAction : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Selector( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unselector( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MenuRequest( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LeftMouse( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RightMouse( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MouseMove( 
            POINT *ptMouse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MouseRelease( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefaultAction( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicSegmentActionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicSegmentAction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, Selector)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Selector )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, Unselector)
        HRESULT ( STDMETHODCALLTYPE *Unselector )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, MenuRequest)
        HRESULT ( STDMETHODCALLTYPE *MenuRequest )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, LeftMouse)
        HRESULT ( STDMETHODCALLTYPE *LeftMouse )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, RightMouse)
        HRESULT ( STDMETHODCALLTYPE *RightMouse )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, MouseMove)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseMove )( 
            IGraphicSegmentAction * This,
            POINT *ptMouse);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, MouseRelease)
        HRESULT ( STDMETHODCALLTYPE *MouseRelease )( 
            IGraphicSegmentAction * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegmentAction, DefaultAction)
        HRESULT ( STDMETHODCALLTYPE *DefaultAction )( 
            IGraphicSegmentAction * This);
        
        END_INTERFACE
    } IGraphicSegmentActionVtbl;

    interface IGraphicSegmentAction
    {
        CONST_VTBL struct IGraphicSegmentActionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraphicSegmentAction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraphicSegmentAction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraphicSegmentAction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraphicSegmentAction_Selector(This)	\
    ( (This)->lpVtbl -> Selector(This) ) 

#define IGraphicSegmentAction_Unselector(This)	\
    ( (This)->lpVtbl -> Unselector(This) ) 

#define IGraphicSegmentAction_MenuRequest(This)	\
    ( (This)->lpVtbl -> MenuRequest(This) ) 

#define IGraphicSegmentAction_LeftMouse(This)	\
    ( (This)->lpVtbl -> LeftMouse(This) ) 

#define IGraphicSegmentAction_RightMouse(This)	\
    ( (This)->lpVtbl -> RightMouse(This) ) 

#define IGraphicSegmentAction_MouseMove(This,ptMouse)	\
    ( (This)->lpVtbl -> MouseMove(This,ptMouse) ) 

#define IGraphicSegmentAction_MouseRelease(This)	\
    ( (This)->lpVtbl -> MouseRelease(This) ) 

#define IGraphicSegmentAction_DefaultAction(This)	\
    ( (This)->lpVtbl -> DefaultAction(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicSegmentAction_INTERFACE_DEFINED__ */


#ifndef __IGraphicSegment_INTERFACE_DEFINED__
#define __IGraphicSegment_INTERFACE_DEFINED__

/* interface IGraphicSegment */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IGraphicSegment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD7B-55E6-11d3-8365-006008BD5BC3")
    IGraphicSegment : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            void *pvOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *getID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActionTable( 
            /* [in] */ IGraphicSegmentAction *__MIDL__IGraphicSegment0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IGraphicSegment0001) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **__MIDL__IGraphicSegment0002) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeight( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ long *segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Open( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( 
            USHORT drawOnClose) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Redraw( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicSegmentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicSegment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicSegment * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicSegment * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGraphicSegment * This,
            void *pvOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, get_SegmentID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IGraphicSegment * This,
            /* [retval][out] */ long *getID);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, put_ActionTable)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IGraphicSegment * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IGraphicSegment0000);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, get_ActionTable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IGraphicSegment * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IGraphicSegment0001);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, put_ColorProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorProperty )( 
            IGraphicSegment * This,
            /* [in] */ /* external definition not present */ IGProperty *pIColor);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, get_ColorProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )( 
            IGraphicSegment * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **__MIDL__IGraphicSegment0002);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, put_LineWeight)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IGraphicSegment * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, get_LineWeight)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IGraphicSegment * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Create)
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            IGraphicSegment * This,
            /* [retval][out] */ long *segmentID);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Open)
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IGraphicSegment * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Close)
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IGraphicSegment * This,
            USHORT drawOnClose);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Redraw)
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IGraphicSegment * This);
        
        DECLSPEC_XFGVIRT(IGraphicSegment, Destroy)
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IGraphicSegment * This);
        
        END_INTERFACE
    } IGraphicSegmentVtbl;

    interface IGraphicSegment
    {
        CONST_VTBL struct IGraphicSegmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGraphicSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGraphicSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGraphicSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGraphicSegment_Initialize(This,pvOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight)	\
    ( (This)->lpVtbl -> Initialize(This,pvOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight) ) 

#define IGraphicSegment_get_SegmentID(This,getID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,getID) ) 

#define IGraphicSegment_put_ActionTable(This,__MIDL__IGraphicSegment0000)	\
    ( (This)->lpVtbl -> put_ActionTable(This,__MIDL__IGraphicSegment0000) ) 

#define IGraphicSegment_get_ActionTable(This,__MIDL__IGraphicSegment0001)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IGraphicSegment0001) ) 

#define IGraphicSegment_put_ColorProperty(This,pIColor)	\
    ( (This)->lpVtbl -> put_ColorProperty(This,pIColor) ) 

#define IGraphicSegment_get_ColorProperty(This,__MIDL__IGraphicSegment0002)	\
    ( (This)->lpVtbl -> get_ColorProperty(This,__MIDL__IGraphicSegment0002) ) 

#define IGraphicSegment_put_LineWeight(This,pIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> put_LineWeight(This,pIPropertyLineWeightInPixels) ) 

#define IGraphicSegment_get_LineWeight(This,ppIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> get_LineWeight(This,ppIPropertyLineWeightInPixels) ) 

#define IGraphicSegment_Create(This,segmentID)	\
    ( (This)->lpVtbl -> Create(This,segmentID) ) 

#define IGraphicSegment_Open(This)	\
    ( (This)->lpVtbl -> Open(This) ) 

#define IGraphicSegment_Close(This,drawOnClose)	\
    ( (This)->lpVtbl -> Close(This,drawOnClose) ) 

#define IGraphicSegment_Redraw(This)	\
    ( (This)->lpVtbl -> Redraw(This) ) 

#define IGraphicSegment_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGraphicSegment_INTERFACE_DEFINED__ */


#ifndef __IBasePlot_INTERFACE_DEFINED__
#define __IBasePlot_INTERFACE_DEFINED__

/* interface IBasePlot */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasePlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD77-55E6-11d3-8365-006008BD5BC3")
    IBasePlot : public IUnknown
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IDataSet( 
            /* [in] */ /* external definition not present */ IDataSet *dataSet) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IDataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet) = 0;
        
        virtual enum /* external definition not present */ DataArity STDMETHODCALLTYPE DataArity( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *getID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActionTable( 
            /* [in] */ IGraphicSegmentAction *__MIDL__IBasePlot0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IBasePlot0001) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotView( 
            /* [in] */ enum /* external definition not present */ PlotViews newPlotView) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotView( 
            /* [retval][out] */ enum /* external definition not present */ PlotViews *getPlotView) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotType2D( 
            /* [in] */ enum /* external definition not present */ gc2DPlotTypes newPlotSubTppe) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType2D( 
            /* [retval][out] */ enum /* external definition not present */ gc2DPlotTypes *getPlotSubType) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotType3D( 
            /* [in] */ enum /* external definition not present */ gc3DPlotTypes newPlotSubTppe) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType3D( 
            /* [retval][out] */ enum /* external definition not present */ gc3DPlotTypes *getPlotSubType) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeight( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels) = 0;
        
        virtual /* [hidden][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentCount( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE GetSegments( 
            /* [in] */ long *pSegmentArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ long *segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pvIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *pIPropertyXFloor,
            /* external definition not present */ IGProperty *pIPropertyXCeiling,
            /* external definition not present */ IGProperty *pIPropertyYFloor,
            /* external definition not present */ IGProperty *pIPropertyYCeiling,
            /* external definition not present */ IGProperty *pIPropertyZFloor,
            /* external definition not present */ IGProperty *pIPropertyZCeiling) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Erase( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddText( 
            void *text,
            char *name,
            int idNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveText( 
            void *t) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StubPlot( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Redraw( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawPolygon( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawGDI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveFromWorldDomain( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDomainGDI( 
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBasePlotVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasePlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_IDataSet)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDataSet )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IDataSet *dataSet);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_IDataSet)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDataSet )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet);
        
        DECLSPEC_XFGVIRT(IBasePlot, DataArity)
        enum /* external definition not present */ DataArity ( STDMETHODCALLTYPE *DataArity )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_SegmentID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IBasePlot * This,
            /* [retval][out] */ long *getID);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_ActionTable)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IBasePlot * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IBasePlot0000);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_ActionTable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IBasePlot * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IBasePlot0001);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_PlotView)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotView )( 
            IBasePlot * This,
            /* [in] */ enum /* external definition not present */ PlotViews newPlotView);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_PlotView)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotView )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ PlotViews *getPlotView);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_PlotType2D)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotType2D )( 
            IBasePlot * This,
            /* [in] */ enum /* external definition not present */ gc2DPlotTypes newPlotSubTppe);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_PlotType2D)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType2D )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ gc2DPlotTypes *getPlotSubType);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_PlotType3D)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotType3D )( 
            IBasePlot * This,
            /* [in] */ enum /* external definition not present */ gc3DPlotTypes newPlotSubTppe);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_PlotType3D)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType3D )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ gc3DPlotTypes *getPlotSubType);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_ColorProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorProperty )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_ColorProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        DECLSPEC_XFGVIRT(IBasePlot, put_LineWeight)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_LineWeight)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IBasePlot, get_SegmentCount)
        /* [hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IBasePlot * This,
            /* [retval][out] */ long *pCount);
        
        DECLSPEC_XFGVIRT(IBasePlot, GetSegments)
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IBasePlot * This,
            /* [in] */ long *pSegmentArray);
        
        DECLSPEC_XFGVIRT(IBasePlot, Create)
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            IBasePlot * This,
            /* [retval][out] */ long *segmentID);
        
        DECLSPEC_XFGVIRT(IBasePlot, Destroy)
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IBasePlot * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pvIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *pIPropertyXFloor,
            /* external definition not present */ IGProperty *pIPropertyXCeiling,
            /* external definition not present */ IGProperty *pIPropertyYFloor,
            /* external definition not present */ IGProperty *pIPropertyYCeiling,
            /* external definition not present */ IGProperty *pIPropertyZFloor,
            /* external definition not present */ IGProperty *pIPropertyZCeiling);
        
        DECLSPEC_XFGVIRT(IBasePlot, Erase)
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, AddText)
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IBasePlot * This,
            void *text,
            char *name,
            int idNumber);
        
        DECLSPEC_XFGVIRT(IBasePlot, RemoveText)
        HRESULT ( STDMETHODCALLTYPE *RemoveText )( 
            IBasePlot * This,
            void *t);
        
        DECLSPEC_XFGVIRT(IBasePlot, StubPlot)
        HRESULT ( STDMETHODCALLTYPE *StubPlot )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, Draw)
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, Redraw)
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, DrawPolygon)
        HRESULT ( STDMETHODCALLTYPE *DrawPolygon )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, DrawGDI)
        HRESULT ( STDMETHODCALLTYPE *DrawGDI )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, RemoveFromWorldDomain)
        HRESULT ( STDMETHODCALLTYPE *RemoveFromWorldDomain )( 
            IBasePlot * This);
        
        DECLSPEC_XFGVIRT(IBasePlot, GetDomainGDI)
        HRESULT ( STDMETHODCALLTYPE *GetDomainGDI )( 
            IBasePlot * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        END_INTERFACE
    } IBasePlotVtbl;

    interface IBasePlot
    {
        CONST_VTBL struct IBasePlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasePlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBasePlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBasePlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBasePlot_put_IDataSet(This,dataSet)	\
    ( (This)->lpVtbl -> put_IDataSet(This,dataSet) ) 

#define IBasePlot_get_IDataSet(This,dataSet)	\
    ( (This)->lpVtbl -> get_IDataSet(This,dataSet) ) 

#define IBasePlot_DataArity(This)	\
    ( (This)->lpVtbl -> DataArity(This) ) 

#define IBasePlot_get_SegmentID(This,getID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,getID) ) 

#define IBasePlot_put_ActionTable(This,__MIDL__IBasePlot0000)	\
    ( (This)->lpVtbl -> put_ActionTable(This,__MIDL__IBasePlot0000) ) 

#define IBasePlot_get_ActionTable(This,__MIDL__IBasePlot0001)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IBasePlot0001) ) 

#define IBasePlot_put_PlotView(This,newPlotView)	\
    ( (This)->lpVtbl -> put_PlotView(This,newPlotView) ) 

#define IBasePlot_get_PlotView(This,getPlotView)	\
    ( (This)->lpVtbl -> get_PlotView(This,getPlotView) ) 

#define IBasePlot_put_PlotType2D(This,newPlotSubTppe)	\
    ( (This)->lpVtbl -> put_PlotType2D(This,newPlotSubTppe) ) 

#define IBasePlot_get_PlotType2D(This,getPlotSubType)	\
    ( (This)->lpVtbl -> get_PlotType2D(This,getPlotSubType) ) 

#define IBasePlot_put_PlotType3D(This,newPlotSubTppe)	\
    ( (This)->lpVtbl -> put_PlotType3D(This,newPlotSubTppe) ) 

#define IBasePlot_get_PlotType3D(This,getPlotSubType)	\
    ( (This)->lpVtbl -> get_PlotType3D(This,getPlotSubType) ) 

#define IBasePlot_put_ColorProperty(This,pIPropertyColor)	\
    ( (This)->lpVtbl -> put_ColorProperty(This,pIPropertyColor) ) 

#define IBasePlot_get_ColorProperty(This,ppIPropertyColor)	\
    ( (This)->lpVtbl -> get_ColorProperty(This,ppIPropertyColor) ) 

#define IBasePlot_put_LineWeight(This,pIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> put_LineWeight(This,pIPropertyLineWeightInPixels) ) 

#define IBasePlot_get_LineWeight(This,ppIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> get_LineWeight(This,ppIPropertyLineWeightInPixels) ) 

#define IBasePlot_get_SegmentCount(This,pCount)	\
    ( (This)->lpVtbl -> get_SegmentCount(This,pCount) ) 

#define IBasePlot_GetSegments(This,pSegmentArray)	\
    ( (This)->lpVtbl -> GetSegments(This,pSegmentArray) ) 

#define IBasePlot_Create(This,segmentID)	\
    ( (This)->lpVtbl -> Create(This,segmentID) ) 

#define IBasePlot_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IBasePlot_Initialize(This,pIDataSet_Domain,pvIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,pIPropertyXFloor,pIPropertyXCeiling,pIPropertyYFloor,pIPropertyYCeiling,pIPropertyZFloor,pIPropertyZCeiling)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pvIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,pIPropertyXFloor,pIPropertyXCeiling,pIPropertyYFloor,pIPropertyYCeiling,pIPropertyZFloor,pIPropertyZCeiling) ) 

#define IBasePlot_Erase(This)	\
    ( (This)->lpVtbl -> Erase(This) ) 

#define IBasePlot_AddText(This,text,name,idNumber)	\
    ( (This)->lpVtbl -> AddText(This,text,name,idNumber) ) 

#define IBasePlot_RemoveText(This,t)	\
    ( (This)->lpVtbl -> RemoveText(This,t) ) 

#define IBasePlot_StubPlot(This)	\
    ( (This)->lpVtbl -> StubPlot(This) ) 

#define IBasePlot_Draw(This)	\
    ( (This)->lpVtbl -> Draw(This) ) 

#define IBasePlot_Redraw(This)	\
    ( (This)->lpVtbl -> Redraw(This) ) 

#define IBasePlot_DrawPolygon(This)	\
    ( (This)->lpVtbl -> DrawPolygon(This) ) 

#define IBasePlot_DrawGDI(This)	\
    ( (This)->lpVtbl -> DrawGDI(This) ) 

#define IBasePlot_RemoveFromWorldDomain(This)	\
    ( (This)->lpVtbl -> RemoveFromWorldDomain(This) ) 

#define IBasePlot_GetDomainGDI(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> GetDomainGDI(This,minPoint,maxPoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBasePlot_INTERFACE_DEFINED__ */


#ifndef __IPlot_INTERFACE_DEFINED__
#define __IPlot_INTERFACE_DEFINED__

/* interface IPlot */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IPlot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD78-55E6-11d3-8365-006008BD5BC3")
    IPlot : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR plotName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *plotName) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OkToPlot( 
            /* [in] */ long okToPlot) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OkToPlot( 
            /* [retval][out] */ long *okToPlot) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoPlotViewDetection( 
            /* [in] */ long autoTypeDetection) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoPlotViewDetection( 
            /* [retval][out] */ long *autoTypeDetection) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OverrideOwnerPlotView( 
            /* [in] */ VARIANT_BOOL overrideOwnerPlotView) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OverrideOwnerPlotView( 
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotView) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OverrideOwnerPlotType( 
            /* [in] */ VARIANT_BOOL overrideOwnerPlotType) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OverrideOwnerPlotType( 
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotType) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotViewProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pPlotTypeProperty) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotViewProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotTypeProperty) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotTypeProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pPlotsubTypeProperty) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotTypeProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotSubTypeProperty) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotTypeUsesMaterialShading( 
            /* [in] */ long the2DTypes_ORd_enum_gc2DTypes,
            /* [in] */ long the3DTypes_ORd_enum_gc3DTypes,
            /* [retval][out] */ VARIANT_BOOL *pHasSurfaces) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *getID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActionTable( 
            /* [in] */ IGraphicSegmentAction *__MIDL__IPlot0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IPlot0001) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IDataSet( 
            /* [in] */ /* external definition not present */ IDataSet *dataSet) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IDataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet) = 0;
        
        virtual enum /* external definition not present */ DataArity STDMETHODCALLTYPE DataArity( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotNotify( 
            /* [in] */ IPlotNotify *setIPlotNotify) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotNotify( 
            /* [retval][out] */ IPlotNotify **getIPlotNotify) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ SAFEARRAY * color) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ SAFEARRAY * *pColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeightProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeightProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TopSurfaceColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TopSurfaceColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BottomSurfaceColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BottomSurfaceColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual /* [hidden][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentCount( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE GetSegments( 
            /* [in] */ long *pSegmentArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextList( 
            /* [retval][out] */ void **getList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pvIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyXFloor,
            /* external definition not present */ IGProperty *parentPropertyXCeiling,
            /* external definition not present */ IGProperty *parentPropertyYFloor,
            /* external definition not present */ IGProperty *parentPropertyYCeiling,
            /* external definition not present */ IGProperty *parentPropertyZFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IPlot0002,
                ULONG_PTR __MIDL__IPlot0003),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrepareForData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDataPoint( 
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0005) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDataString( 
            BSTR inputData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastPoint( 
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0006) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StubPlot( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddText( 
            void *text,
            char *name,
            int idNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveText( 
            void *t) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrepData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Redraw( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawText( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Erase( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Plotter( 
            long cntPlots,
            IPlot ***thePlotList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlotList( 
            long cntPlots,
            IPlot ***thePlotList,
            long *theThreadHandle) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditProperties( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IPlot0007) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseGSGraphicServices( 
            void *__MIDL__IPlot0008) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlotVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPlot * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPlot * This,
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
        
        DECLSPEC_XFGVIRT(IPlot, put_Name)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IPlot * This,
            /* [in] */ BSTR plotName);
        
        DECLSPEC_XFGVIRT(IPlot, get_Name)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPlot * This,
            /* [retval][out] */ BSTR *plotName);
        
        DECLSPEC_XFGVIRT(IPlot, put_OkToPlot)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OkToPlot )( 
            IPlot * This,
            /* [in] */ long okToPlot);
        
        DECLSPEC_XFGVIRT(IPlot, get_OkToPlot)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OkToPlot )( 
            IPlot * This,
            /* [retval][out] */ long *okToPlot);
        
        DECLSPEC_XFGVIRT(IPlot, put_AutoPlotViewDetection)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoPlotViewDetection )( 
            IPlot * This,
            /* [in] */ long autoTypeDetection);
        
        DECLSPEC_XFGVIRT(IPlot, get_AutoPlotViewDetection)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoPlotViewDetection )( 
            IPlot * This,
            /* [retval][out] */ long *autoTypeDetection);
        
        DECLSPEC_XFGVIRT(IPlot, put_OverrideOwnerPlotView)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverrideOwnerPlotView )( 
            IPlot * This,
            /* [in] */ VARIANT_BOOL overrideOwnerPlotView);
        
        DECLSPEC_XFGVIRT(IPlot, get_OverrideOwnerPlotView)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverrideOwnerPlotView )( 
            IPlot * This,
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotView);
        
        DECLSPEC_XFGVIRT(IPlot, put_OverrideOwnerPlotType)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverrideOwnerPlotType )( 
            IPlot * This,
            /* [in] */ VARIANT_BOOL overrideOwnerPlotType);
        
        DECLSPEC_XFGVIRT(IPlot, get_OverrideOwnerPlotType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverrideOwnerPlotType )( 
            IPlot * This,
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotType);
        
        DECLSPEC_XFGVIRT(IPlot, put_PlotViewProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotViewProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pPlotTypeProperty);
        
        DECLSPEC_XFGVIRT(IPlot, get_PlotViewProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotViewProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotTypeProperty);
        
        DECLSPEC_XFGVIRT(IPlot, put_PlotTypeProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotTypeProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pPlotsubTypeProperty);
        
        DECLSPEC_XFGVIRT(IPlot, get_PlotTypeProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotTypeProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotSubTypeProperty);
        
        DECLSPEC_XFGVIRT(IPlot, get_PlotTypeUsesMaterialShading)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotTypeUsesMaterialShading )( 
            IPlot * This,
            /* [in] */ long the2DTypes_ORd_enum_gc2DTypes,
            /* [in] */ long the3DTypes_ORd_enum_gc3DTypes,
            /* [retval][out] */ VARIANT_BOOL *pHasSurfaces);
        
        DECLSPEC_XFGVIRT(IPlot, get_SegmentID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IPlot * This,
            /* [retval][out] */ long *getID);
        
        DECLSPEC_XFGVIRT(IPlot, put_ActionTable)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IPlot * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IPlot0000);
        
        DECLSPEC_XFGVIRT(IPlot, get_ActionTable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IPlot * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IPlot0001);
        
        DECLSPEC_XFGVIRT(IPlot, put_IDataSet)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDataSet )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IDataSet *dataSet);
        
        DECLSPEC_XFGVIRT(IPlot, get_IDataSet)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDataSet )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet);
        
        DECLSPEC_XFGVIRT(IPlot, DataArity)
        enum /* external definition not present */ DataArity ( STDMETHODCALLTYPE *DataArity )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, put_PlotNotify)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotNotify )( 
            IPlot * This,
            /* [in] */ IPlotNotify *setIPlotNotify);
        
        DECLSPEC_XFGVIRT(IPlot, get_PlotNotify)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotNotify )( 
            IPlot * This,
            /* [retval][out] */ IPlotNotify **getIPlotNotify);
        
        DECLSPEC_XFGVIRT(IPlot, put_Color)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IPlot * This,
            /* [in] */ SAFEARRAY * color);
        
        DECLSPEC_XFGVIRT(IPlot, get_Color)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IPlot * This,
            /* [retval][out] */ SAFEARRAY * *pColor);
        
        DECLSPEC_XFGVIRT(IPlot, put_LineColorProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColorProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, get_LineColorProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColorProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, put_LineWeightProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeightProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IPlot, get_LineWeightProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeightProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        DECLSPEC_XFGVIRT(IPlot, put_TopSurfaceColorProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TopSurfaceColorProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, get_TopSurfaceColorProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TopSurfaceColorProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, put_BottomSurfaceColorProperty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BottomSurfaceColorProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, get_BottomSurfaceColorProperty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BottomSurfaceColorProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        DECLSPEC_XFGVIRT(IPlot, put_ParentWindow)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            IPlot * This,
            /* [in] */ HWND hwndParent);
        
        DECLSPEC_XFGVIRT(IPlot, get_SegmentCount)
        /* [hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IPlot * This,
            /* [retval][out] */ long *pCount);
        
        DECLSPEC_XFGVIRT(IPlot, GetSegments)
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IPlot * This,
            /* [in] */ long *pSegmentArray);
        
        DECLSPEC_XFGVIRT(IPlot, GetTextList)
        HRESULT ( STDMETHODCALLTYPE *GetTextList )( 
            IPlot * This,
            /* [retval][out] */ void **getList);
        
        DECLSPEC_XFGVIRT(IPlot, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPlot * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pvIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyXFloor,
            /* external definition not present */ IGProperty *parentPropertyXCeiling,
            /* external definition not present */ IGProperty *parentPropertyYFloor,
            /* external definition not present */ IGProperty *parentPropertyYCeiling,
            /* external definition not present */ IGProperty *parentPropertyZFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IPlot0002,
                ULONG_PTR __MIDL__IPlot0003),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie);
        
        DECLSPEC_XFGVIRT(IPlot, PrepareForData)
        HRESULT ( STDMETHODCALLTYPE *PrepareForData )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, TakeDataPoint)
        HRESULT ( STDMETHODCALLTYPE *TakeDataPoint )( 
            IPlot * This,
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0005);
        
        DECLSPEC_XFGVIRT(IPlot, TakeDataString)
        HRESULT ( STDMETHODCALLTYPE *TakeDataString )( 
            IPlot * This,
            BSTR inputData);
        
        DECLSPEC_XFGVIRT(IPlot, ResetData)
        HRESULT ( STDMETHODCALLTYPE *ResetData )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, LastPoint)
        HRESULT ( STDMETHODCALLTYPE *LastPoint )( 
            IPlot * This,
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0006);
        
        DECLSPEC_XFGVIRT(IPlot, StubPlot)
        HRESULT ( STDMETHODCALLTYPE *StubPlot )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, AddText)
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IPlot * This,
            void *text,
            char *name,
            int idNumber);
        
        DECLSPEC_XFGVIRT(IPlot, RemoveText)
        HRESULT ( STDMETHODCALLTYPE *RemoveText )( 
            IPlot * This,
            void *t);
        
        DECLSPEC_XFGVIRT(IPlot, PrepData)
        HRESULT ( STDMETHODCALLTYPE *PrepData )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, Draw)
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, Redraw)
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, DrawText)
        HRESULT ( STDMETHODCALLTYPE *DrawText )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, Erase)
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, Plotter)
        HRESULT ( STDMETHODCALLTYPE *Plotter )( 
            IPlot * This,
            long cntPlots,
            IPlot ***thePlotList);
        
        DECLSPEC_XFGVIRT(IPlot, PlotList)
        HRESULT ( STDMETHODCALLTYPE *PlotList )( 
            IPlot * This,
            long cntPlots,
            IPlot ***thePlotList,
            long *theThreadHandle);
        
        DECLSPEC_XFGVIRT(IPlot, EditProperties)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IPlot * This);
        
        DECLSPEC_XFGVIRT(IPlot, AdviseGSystemStatusBar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IPlot * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IPlot0007);
        
        DECLSPEC_XFGVIRT(IPlot, AdviseGSGraphicServices)
        HRESULT ( STDMETHODCALLTYPE *AdviseGSGraphicServices )( 
            IPlot * This,
            void *__MIDL__IPlot0008);
        
        END_INTERFACE
    } IPlotVtbl;

    interface IPlot
    {
        CONST_VTBL struct IPlotVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPlot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPlot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPlot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPlot_put_Name(This,plotName)	\
    ( (This)->lpVtbl -> put_Name(This,plotName) ) 

#define IPlot_get_Name(This,plotName)	\
    ( (This)->lpVtbl -> get_Name(This,plotName) ) 

#define IPlot_put_OkToPlot(This,okToPlot)	\
    ( (This)->lpVtbl -> put_OkToPlot(This,okToPlot) ) 

#define IPlot_get_OkToPlot(This,okToPlot)	\
    ( (This)->lpVtbl -> get_OkToPlot(This,okToPlot) ) 

#define IPlot_put_AutoPlotViewDetection(This,autoTypeDetection)	\
    ( (This)->lpVtbl -> put_AutoPlotViewDetection(This,autoTypeDetection) ) 

#define IPlot_get_AutoPlotViewDetection(This,autoTypeDetection)	\
    ( (This)->lpVtbl -> get_AutoPlotViewDetection(This,autoTypeDetection) ) 

#define IPlot_put_OverrideOwnerPlotView(This,overrideOwnerPlotView)	\
    ( (This)->lpVtbl -> put_OverrideOwnerPlotView(This,overrideOwnerPlotView) ) 

#define IPlot_get_OverrideOwnerPlotView(This,pOverrideOwnerPlotView)	\
    ( (This)->lpVtbl -> get_OverrideOwnerPlotView(This,pOverrideOwnerPlotView) ) 

#define IPlot_put_OverrideOwnerPlotType(This,overrideOwnerPlotType)	\
    ( (This)->lpVtbl -> put_OverrideOwnerPlotType(This,overrideOwnerPlotType) ) 

#define IPlot_get_OverrideOwnerPlotType(This,pOverrideOwnerPlotType)	\
    ( (This)->lpVtbl -> get_OverrideOwnerPlotType(This,pOverrideOwnerPlotType) ) 

#define IPlot_put_PlotViewProperty(This,pPlotTypeProperty)	\
    ( (This)->lpVtbl -> put_PlotViewProperty(This,pPlotTypeProperty) ) 

#define IPlot_get_PlotViewProperty(This,ppPlotTypeProperty)	\
    ( (This)->lpVtbl -> get_PlotViewProperty(This,ppPlotTypeProperty) ) 

#define IPlot_put_PlotTypeProperty(This,pPlotsubTypeProperty)	\
    ( (This)->lpVtbl -> put_PlotTypeProperty(This,pPlotsubTypeProperty) ) 

#define IPlot_get_PlotTypeProperty(This,ppPlotSubTypeProperty)	\
    ( (This)->lpVtbl -> get_PlotTypeProperty(This,ppPlotSubTypeProperty) ) 

#define IPlot_get_PlotTypeUsesMaterialShading(This,the2DTypes_ORd_enum_gc2DTypes,the3DTypes_ORd_enum_gc3DTypes,pHasSurfaces)	\
    ( (This)->lpVtbl -> get_PlotTypeUsesMaterialShading(This,the2DTypes_ORd_enum_gc2DTypes,the3DTypes_ORd_enum_gc3DTypes,pHasSurfaces) ) 

#define IPlot_get_SegmentID(This,getID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,getID) ) 

#define IPlot_put_ActionTable(This,__MIDL__IPlot0000)	\
    ( (This)->lpVtbl -> put_ActionTable(This,__MIDL__IPlot0000) ) 

#define IPlot_get_ActionTable(This,__MIDL__IPlot0001)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IPlot0001) ) 

#define IPlot_put_IDataSet(This,dataSet)	\
    ( (This)->lpVtbl -> put_IDataSet(This,dataSet) ) 

#define IPlot_get_IDataSet(This,dataSet)	\
    ( (This)->lpVtbl -> get_IDataSet(This,dataSet) ) 

#define IPlot_DataArity(This)	\
    ( (This)->lpVtbl -> DataArity(This) ) 

#define IPlot_put_PlotNotify(This,setIPlotNotify)	\
    ( (This)->lpVtbl -> put_PlotNotify(This,setIPlotNotify) ) 

#define IPlot_get_PlotNotify(This,getIPlotNotify)	\
    ( (This)->lpVtbl -> get_PlotNotify(This,getIPlotNotify) ) 

#define IPlot_put_Color(This,color)	\
    ( (This)->lpVtbl -> put_Color(This,color) ) 

#define IPlot_get_Color(This,pColor)	\
    ( (This)->lpVtbl -> get_Color(This,pColor) ) 

#define IPlot_put_LineColorProperty(This,pIPropertyColor)	\
    ( (This)->lpVtbl -> put_LineColorProperty(This,pIPropertyColor) ) 

#define IPlot_get_LineColorProperty(This,ppIPropertyColor)	\
    ( (This)->lpVtbl -> get_LineColorProperty(This,ppIPropertyColor) ) 

#define IPlot_put_LineWeightProperty(This,pIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> put_LineWeightProperty(This,pIPropertyLineWeightInPixels) ) 

#define IPlot_get_LineWeightProperty(This,ppIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> get_LineWeightProperty(This,ppIPropertyLineWeightInPixels) ) 

#define IPlot_put_TopSurfaceColorProperty(This,pIPropertyColor)	\
    ( (This)->lpVtbl -> put_TopSurfaceColorProperty(This,pIPropertyColor) ) 

#define IPlot_get_TopSurfaceColorProperty(This,ppIPropertyColor)	\
    ( (This)->lpVtbl -> get_TopSurfaceColorProperty(This,ppIPropertyColor) ) 

#define IPlot_put_BottomSurfaceColorProperty(This,pIPropertyColor)	\
    ( (This)->lpVtbl -> put_BottomSurfaceColorProperty(This,pIPropertyColor) ) 

#define IPlot_get_BottomSurfaceColorProperty(This,ppIPropertyColor)	\
    ( (This)->lpVtbl -> get_BottomSurfaceColorProperty(This,ppIPropertyColor) ) 

#define IPlot_put_ParentWindow(This,hwndParent)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,hwndParent) ) 

#define IPlot_get_SegmentCount(This,pCount)	\
    ( (This)->lpVtbl -> get_SegmentCount(This,pCount) ) 

#define IPlot_GetSegments(This,pSegmentArray)	\
    ( (This)->lpVtbl -> GetSegments(This,pSegmentArray) ) 

#define IPlot_GetTextList(This,getList)	\
    ( (This)->lpVtbl -> GetTextList(This,getList) ) 

#define IPlot_Initialize(This,pIDataSet_Domain,pvIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyZFloor,parentPropertyZCeiling,pCallback,pArg,callbackCookie)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pvIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyZFloor,parentPropertyZCeiling,pCallback,pArg,callbackCookie) ) 

#define IPlot_PrepareForData(This)	\
    ( (This)->lpVtbl -> PrepareForData(This) ) 

#define IPlot_TakeDataPoint(This,__MIDL__IPlot0005)	\
    ( (This)->lpVtbl -> TakeDataPoint(This,__MIDL__IPlot0005) ) 

#define IPlot_TakeDataString(This,inputData)	\
    ( (This)->lpVtbl -> TakeDataString(This,inputData) ) 

#define IPlot_ResetData(This)	\
    ( (This)->lpVtbl -> ResetData(This) ) 

#define IPlot_LastPoint(This,__MIDL__IPlot0006)	\
    ( (This)->lpVtbl -> LastPoint(This,__MIDL__IPlot0006) ) 

#define IPlot_StubPlot(This)	\
    ( (This)->lpVtbl -> StubPlot(This) ) 

#define IPlot_AddText(This,text,name,idNumber)	\
    ( (This)->lpVtbl -> AddText(This,text,name,idNumber) ) 

#define IPlot_RemoveText(This,t)	\
    ( (This)->lpVtbl -> RemoveText(This,t) ) 

#define IPlot_PrepData(This)	\
    ( (This)->lpVtbl -> PrepData(This) ) 

#define IPlot_Draw(This)	\
    ( (This)->lpVtbl -> Draw(This) ) 

#define IPlot_Redraw(This)	\
    ( (This)->lpVtbl -> Redraw(This) ) 

#define IPlot_DrawText(This)	\
    ( (This)->lpVtbl -> DrawText(This) ) 

#define IPlot_Erase(This)	\
    ( (This)->lpVtbl -> Erase(This) ) 

#define IPlot_Plotter(This,cntPlots,thePlotList)	\
    ( (This)->lpVtbl -> Plotter(This,cntPlots,thePlotList) ) 

#define IPlot_PlotList(This,cntPlots,thePlotList,theThreadHandle)	\
    ( (This)->lpVtbl -> PlotList(This,cntPlots,thePlotList,theThreadHandle) ) 

#define IPlot_EditProperties(This)	\
    ( (This)->lpVtbl -> EditProperties(This) ) 

#define IPlot_AdviseGSystemStatusBar(This,__MIDL__IPlot0007)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IPlot0007) ) 

#define IPlot_AdviseGSGraphicServices(This,__MIDL__IPlot0008)	\
    ( (This)->lpVtbl -> AdviseGSGraphicServices(This,__MIDL__IPlot0008) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlot_INTERFACE_DEFINED__ */


#ifndef __IPlotNotify_INTERFACE_DEFINED__
#define __IPlotNotify_INTERFACE_DEFINED__

/* interface IPlotNotify */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPlotNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD7A-65E6-11d3-8365-006008BD5BC3")
    IPlotNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeletePlot( 
            IPlot *__MIDL__IPlotNotify0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlotNotifyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlotNotify * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlotNotify * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlotNotify * This);
        
        DECLSPEC_XFGVIRT(IPlotNotify, DeletePlot)
        HRESULT ( STDMETHODCALLTYPE *DeletePlot )( 
            IPlotNotify * This,
            IPlot *__MIDL__IPlotNotify0000);
        
        END_INTERFACE
    } IPlotNotifyVtbl;

    interface IPlotNotify
    {
        CONST_VTBL struct IPlotNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlotNotify_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlotNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlotNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlotNotify_DeletePlot(This,__MIDL__IPlotNotify0000)	\
    ( (This)->lpVtbl -> DeletePlot(This,__MIDL__IPlotNotify0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlotNotify_INTERFACE_DEFINED__ */


#ifndef __IPlotServices_INTERFACE_DEFINED__
#define __IPlotServices_INTERFACE_DEFINED__

/* interface IPlotServices */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPlotServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD7D-55E6-11d3-8365-006008BD5BC3")
    IPlotServices : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPlotTypesInformation( 
            SAFEARRAY * *pp2DTypeIDs,
            SAFEARRAY * *pp3DTypeIds,
            SAFEARRAY * *pp2DTypeNames,
            SAFEARRAY * *pp3DTypeNames,
            SAFEARRAY * *pp2DTypeInstanceNumbers,
            SAFEARRAY * *pp3DTypeInstanceNumbers,
            SAFEARRAY * *pp2DTypeInstances,
            SAFEARRAY * *pp3DTypeInstances) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlotServicesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlotServices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlotServices * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlotServices * This);
        
        DECLSPEC_XFGVIRT(IPlotServices, GetPlotTypesInformation)
        HRESULT ( STDMETHODCALLTYPE *GetPlotTypesInformation )( 
            IPlotServices * This,
            SAFEARRAY * *pp2DTypeIDs,
            SAFEARRAY * *pp3DTypeIds,
            SAFEARRAY * *pp2DTypeNames,
            SAFEARRAY * *pp3DTypeNames,
            SAFEARRAY * *pp2DTypeInstanceNumbers,
            SAFEARRAY * *pp3DTypeInstanceNumbers,
            SAFEARRAY * *pp2DTypeInstances,
            SAFEARRAY * *pp3DTypeInstances);
        
        END_INTERFACE
    } IPlotServicesVtbl;

    interface IPlotServices
    {
        CONST_VTBL struct IPlotServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlotServices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlotServices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlotServices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlotServices_GetPlotTypesInformation(This,pp2DTypeIDs,pp3DTypeIds,pp2DTypeNames,pp3DTypeNames,pp2DTypeInstanceNumbers,pp3DTypeInstanceNumbers,pp2DTypeInstances,pp3DTypeInstances)	\
    ( (This)->lpVtbl -> GetPlotTypesInformation(This,pp2DTypeIDs,pp3DTypeIds,pp2DTypeNames,pp3DTypeNames,pp2DTypeInstanceNumbers,pp3DTypeInstanceNumbers,pp2DTypeInstances,pp3DTypeInstances) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlotServices_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GraphicSegment;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD7C-55E6-11d3-8365-006008BD5BC3")
GraphicSegment;
#endif

EXTERN_C const CLSID CLSID_Plot;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD79-55E6-11d3-8365-006008BD5BC3")
Plot;
#endif

EXTERN_C const CLSID CLSID_BasePlot;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD7A-55E6-11d3-8365-006008BD5BC3")
BasePlot;
#endif
#endif /* __Plot_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


