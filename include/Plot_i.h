

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 22 12:44:20 2017
 */
/* Compiler settings for Plot.odl:
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


#ifndef __Plot_i_h__
#define __Plot_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
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
    
    MIDL_INTERFACE("8CAEFD7D-55E6-11d3-8365-006008BD5BC3")
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
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGraphicSegmentActionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicSegmentAction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicSegmentAction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicSegmentAction * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Selector )( 
            IGraphicSegmentAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Unselector )( 
            IGraphicSegmentAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *MenuRequest )( 
            IGraphicSegmentAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *LeftMouse )( 
            IGraphicSegmentAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *RightMouse )( 
            IGraphicSegmentAction * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MouseMove )( 
            IGraphicSegmentAction * This,
            POINT *ptMouse);
        
        HRESULT ( STDMETHODCALLTYPE *MouseRelease )( 
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
            /* external definition not present */ IOpenGLImplementation *openGLImplementation,
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
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGraphicSegment * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGraphicSegment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGraphicSegment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGraphicSegment * This,
            /* external definition not present */ IOpenGLImplementation *openGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IGraphicSegment * This,
            /* [retval][out] */ long *getID);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IGraphicSegment * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IGraphicSegment0000);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IGraphicSegment * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IGraphicSegment0001);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorProperty )( 
            IGraphicSegment * This,
            /* [in] */ /* external definition not present */ IGProperty *pIColor);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )( 
            IGraphicSegment * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **__MIDL__IGraphicSegment0002);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IGraphicSegment * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IGraphicSegment * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            IGraphicSegment * This,
            /* [retval][out] */ long *segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IGraphicSegment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            IGraphicSegment * This,
            USHORT drawOnClose);
        
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IGraphicSegment * This);
        
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


#define IGraphicSegment_Initialize(This,openGLImplementation,pIPropertyLineColor,pIPropertyLineWeight)	\
    ( (This)->lpVtbl -> Initialize(This,openGLImplementation,pIPropertyLineColor,pIPropertyLineWeight) ) 

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
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DataSet( 
            /* [in] */ /* external definition not present */ IDataSet *dataSet) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataArity( 
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IBasePlot0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *getID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActionTable( 
            /* [in] */ IGraphicSegmentAction *__MIDL__IBasePlot0001) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IBasePlot0002) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotView( 
            /* [in] */ enum /* external definition not present */ PlotViews newPlotView) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotView( 
            /* [retval][out] */ enum /* external definition not present */ PlotViews *getPlotView) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotType( 
            /* [in] */ enum /* external definition not present */ PlotTypes newPlotSubTppe) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType( 
            /* [retval][out] */ enum /* external definition not present */ PlotTypes *getPlotSubType) = 0;
        
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
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *pIPropertyFloor,
            /* external definition not present */ IGProperty *pIPropertyCeiling) = 0;
        
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
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasePlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasePlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasePlot * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSet )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IDataSet *dataSet);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSet )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataArity )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IBasePlot0000);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IBasePlot * This,
            /* [retval][out] */ long *getID);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IBasePlot * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IBasePlot0001);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IBasePlot * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IBasePlot0002);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotView )( 
            IBasePlot * This,
            /* [in] */ enum /* external definition not present */ PlotViews newPlotView);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotView )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ PlotViews *getPlotView);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotType )( 
            IBasePlot * This,
            /* [in] */ enum /* external definition not present */ PlotTypes newPlotSubTppe);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType )( 
            IBasePlot * This,
            /* [retval][out] */ enum /* external definition not present */ PlotTypes *getPlotSubType);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorProperty )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IBasePlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IBasePlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        /* [hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IBasePlot * This,
            /* [retval][out] */ long *pCount);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IBasePlot * This,
            /* [in] */ long *pSegmentArray);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            IBasePlot * This,
            /* [retval][out] */ long *segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IBasePlot * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *pIPropertyFloor,
            /* external definition not present */ IGProperty *pIPropertyCeiling);
        
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IBasePlot * This,
            void *text,
            char *name,
            int idNumber);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveText )( 
            IBasePlot * This,
            void *t);
        
        HRESULT ( STDMETHODCALLTYPE *StubPlot )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *DrawPolygon )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *DrawGDI )( 
            IBasePlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveFromWorldDomain )( 
            IBasePlot * This);
        
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


#define IBasePlot_put_DataSet(This,dataSet)	\
    ( (This)->lpVtbl -> put_DataSet(This,dataSet) ) 

#define IBasePlot_get_DataSet(This,dataSet)	\
    ( (This)->lpVtbl -> get_DataSet(This,dataSet) ) 

#define IBasePlot_get_DataArity(This,__MIDL__IBasePlot0000)	\
    ( (This)->lpVtbl -> get_DataArity(This,__MIDL__IBasePlot0000) ) 

#define IBasePlot_get_SegmentID(This,getID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,getID) ) 

#define IBasePlot_put_ActionTable(This,__MIDL__IBasePlot0001)	\
    ( (This)->lpVtbl -> put_ActionTable(This,__MIDL__IBasePlot0001) ) 

#define IBasePlot_get_ActionTable(This,__MIDL__IBasePlot0002)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IBasePlot0002) ) 

#define IBasePlot_put_PlotView(This,newPlotView)	\
    ( (This)->lpVtbl -> put_PlotView(This,newPlotView) ) 

#define IBasePlot_get_PlotView(This,getPlotView)	\
    ( (This)->lpVtbl -> get_PlotView(This,getPlotView) ) 

#define IBasePlot_put_PlotType(This,newPlotSubTppe)	\
    ( (This)->lpVtbl -> put_PlotType(This,newPlotSubTppe) ) 

#define IBasePlot_get_PlotType(This,getPlotSubType)	\
    ( (This)->lpVtbl -> get_PlotType(This,getPlotSubType) ) 

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

#define IBasePlot_Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,pIPropertyFloor,pIPropertyCeiling)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,pIPropertyFloor,pIPropertyCeiling) ) 

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
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *getID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ActionTable( 
            /* [in] */ IGraphicSegmentAction *__MIDL__IPlot0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IPlot0001) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DataSet( 
            /* [in] */ /* external definition not present */ IDataSet *dataSet) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataArity( 
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IPlot0002) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlotNotify( 
            /* [in] */ IPlotNotify *setIPlotNotify) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlotNotify( 
            /* [retval][out] */ IPlotNotify **getIPlotNotify) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ SAFEARRAY * color) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ SAFEARRAY * *pColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ColorProperty( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeight( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ParentWindow( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual /* [hidden][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentCount( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE GetSegments( 
            /* [in] */ long *pSegmentArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyFloor,
            /* external definition not present */ IGProperty *parentPropertyCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IPlot0003),
            /* [in] */ void *pArg) = 0;
        
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
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlotVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlot * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPlot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPlot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPlot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
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
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IPlot * This,
            /* [in] */ BSTR plotName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPlot * This,
            /* [retval][out] */ BSTR *plotName);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OkToPlot )( 
            IPlot * This,
            /* [in] */ long okToPlot);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OkToPlot )( 
            IPlot * This,
            /* [retval][out] */ long *okToPlot);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoPlotViewDetection )( 
            IPlot * This,
            /* [in] */ long autoTypeDetection);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoPlotViewDetection )( 
            IPlot * This,
            /* [retval][out] */ long *autoTypeDetection);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverrideOwnerPlotView )( 
            IPlot * This,
            /* [in] */ VARIANT_BOOL overrideOwnerPlotView);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverrideOwnerPlotView )( 
            IPlot * This,
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotView);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverrideOwnerPlotType )( 
            IPlot * This,
            /* [in] */ VARIANT_BOOL overrideOwnerPlotType);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverrideOwnerPlotType )( 
            IPlot * This,
            /* [retval][out] */ VARIANT_BOOL *pOverrideOwnerPlotType);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotViewProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pPlotTypeProperty);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotViewProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotTypeProperty);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotTypeProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pPlotsubTypeProperty);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotTypeProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppPlotSubTypeProperty);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IPlot * This,
            /* [retval][out] */ long *getID);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ActionTable )( 
            IPlot * This,
            /* [in] */ IGraphicSegmentAction *__MIDL__IPlot0000);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IPlot * This,
            /* [retval][out] */ IGraphicSegmentAction **__MIDL__IPlot0001);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSet )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IDataSet *dataSet);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSet )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **dataSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataArity )( 
            IPlot * This,
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IPlot0002);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotNotify )( 
            IPlot * This,
            /* [in] */ IPlotNotify *setIPlotNotify);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotNotify )( 
            IPlot * This,
            /* [retval][out] */ IPlotNotify **getIPlotNotify);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IPlot * This,
            /* [in] */ SAFEARRAY * color);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IPlot * This,
            /* [retval][out] */ SAFEARRAY * *pColor);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorProperty )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyColor);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorProperty )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyColor);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IPlot * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyLineWeightInPixels);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IPlot * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **ppIPropertyLineWeightInPixels);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            IPlot * This,
            /* [in] */ HWND hwndParent);
        
        /* [hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IPlot * This,
            /* [retval][out] */ long *pCount);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IPlot * This,
            /* [in] */ long *pSegmentArray);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IPlot * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyFloor,
            /* external definition not present */ IGProperty *parentPropertyCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IPlot0003),
            /* [in] */ void *pArg);
        
        HRESULT ( STDMETHODCALLTYPE *PrepareForData )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDataPoint )( 
            IPlot * This,
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0005);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDataString )( 
            IPlot * This,
            BSTR inputData);
        
        HRESULT ( STDMETHODCALLTYPE *ResetData )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *LastPoint )( 
            IPlot * This,
            struct /* external definition not present */ DataPoint *__MIDL__IPlot0006);
        
        HRESULT ( STDMETHODCALLTYPE *StubPlot )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IPlot * This,
            void *text,
            char *name,
            int idNumber);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveText )( 
            IPlot * This,
            void *t);
        
        HRESULT ( STDMETHODCALLTYPE *PrepData )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IPlot * This);
        
        HRESULT ( STDMETHODCALLTYPE *Plotter )( 
            IPlot * This,
            long cntPlots,
            IPlot ***thePlotList);
        
        HRESULT ( STDMETHODCALLTYPE *PlotList )( 
            IPlot * This,
            long cntPlots,
            IPlot ***thePlotList,
            long *theThreadHandle);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IPlot * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IPlot * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IPlot0007);
        
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

#define IPlot_get_SegmentID(This,getID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,getID) ) 

#define IPlot_put_ActionTable(This,__MIDL__IPlot0000)	\
    ( (This)->lpVtbl -> put_ActionTable(This,__MIDL__IPlot0000) ) 

#define IPlot_get_ActionTable(This,__MIDL__IPlot0001)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IPlot0001) ) 

#define IPlot_put_DataSet(This,dataSet)	\
    ( (This)->lpVtbl -> put_DataSet(This,dataSet) ) 

#define IPlot_get_DataSet(This,dataSet)	\
    ( (This)->lpVtbl -> get_DataSet(This,dataSet) ) 

#define IPlot_get_DataArity(This,__MIDL__IPlot0002)	\
    ( (This)->lpVtbl -> get_DataArity(This,__MIDL__IPlot0002) ) 

#define IPlot_put_PlotNotify(This,setIPlotNotify)	\
    ( (This)->lpVtbl -> put_PlotNotify(This,setIPlotNotify) ) 

#define IPlot_get_PlotNotify(This,getIPlotNotify)	\
    ( (This)->lpVtbl -> get_PlotNotify(This,getIPlotNotify) ) 

#define IPlot_put_Color(This,color)	\
    ( (This)->lpVtbl -> put_Color(This,color) ) 

#define IPlot_get_Color(This,pColor)	\
    ( (This)->lpVtbl -> get_Color(This,pColor) ) 

#define IPlot_put_ColorProperty(This,pIPropertyColor)	\
    ( (This)->lpVtbl -> put_ColorProperty(This,pIPropertyColor) ) 

#define IPlot_get_ColorProperty(This,ppIPropertyColor)	\
    ( (This)->lpVtbl -> get_ColorProperty(This,ppIPropertyColor) ) 

#define IPlot_put_LineWeight(This,pIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> put_LineWeight(This,pIPropertyLineWeightInPixels) ) 

#define IPlot_get_LineWeight(This,ppIPropertyLineWeightInPixels)	\
    ( (This)->lpVtbl -> get_LineWeight(This,ppIPropertyLineWeightInPixels) ) 

#define IPlot_put_ParentWindow(This,hwndParent)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,hwndParent) ) 

#define IPlot_get_SegmentCount(This,pCount)	\
    ( (This)->lpVtbl -> get_SegmentCount(This,pCount) ) 

#define IPlot_GetSegments(This,pSegmentArray)	\
    ( (This)->lpVtbl -> GetSegments(This,pSegmentArray) ) 

#define IPlot_Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyFloor,parentPropertyCeiling,pCallback,pArg)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyFloor,parentPropertyCeiling,pCallback,pArg) ) 

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
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlotNotify * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlotNotify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlotNotify * This);
        
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

