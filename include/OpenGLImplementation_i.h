

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for OpenGLImplementation.odl:
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


#ifndef __OpenGLImplementation_i_h__
#define __OpenGLImplementation_i_h__

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

#ifndef __IOpenGLImplementation_FWD_DEFINED__
#define __IOpenGLImplementation_FWD_DEFINED__
typedef interface IOpenGLImplementation IOpenGLImplementation;

#endif 	/* __IOpenGLImplementation_FWD_DEFINED__ */


#ifndef __OpenGLImplementor_FWD_DEFINED__
#define __OpenGLImplementor_FWD_DEFINED__

#ifdef __cplusplus
typedef class OpenGLImplementor OpenGLImplementor;
#else
typedef struct OpenGLImplementor OpenGLImplementor;
#endif /* __cplusplus */

#endif 	/* __OpenGLImplementor_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __OpenGLImplementor_LIBRARY_DEFINED__
#define __OpenGLImplementor_LIBRARY_DEFINED__

/* library OpenGLImplementor */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_OpenGLImplementor;

#ifndef __IOpenGLImplementation_INTERFACE_DEFINED__
#define __IOpenGLImplementation_INTERFACE_DEFINED__

/* interface IOpenGLImplementation */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IOpenGLImplementation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD97-55E6-11d3-8365-006008BD5BC3")
    IOpenGLImplementation : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IEvaluator *pIEvaluator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBaseWindow( 
            HWND __MIDL__IOpenGLImplementation0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTargetWindow( 
            HWND __MIDL__IOpenGLImplementation0001) = 0;
        
        virtual HDC STDMETHODCALLTYPE TargetDC( void) = 0;
        
        virtual HWND STDMETHODCALLTYPE TargetHWND( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintSetup( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintFinish( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetViewProperties( 
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropPlotView = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationPhi = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationTheta = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *ppropRotationSpin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropLeftMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropTopMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRightMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBottomMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropMarginUnits = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropStretchToMargins = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnSetViewProperties( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Set2D( 
            /* external definition not present */ IDataSet *masterDataset,
            long margins,
            char directionRight,
            char directionUp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUp( 
            /* external definition not present */ IDataSet *masterdataset,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropPlotView = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationPhi = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationTheta = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *ppropRotationSpin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropLeftMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropTopMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRightMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBottomMargin = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropMarginUnits = 0,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropStretchToMargins = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsInitialized( 
            VARIANT_BOOL *bIsInitialized) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Translate( 
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0002) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotate( 
            char axis,
            double angle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scale( 
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0003) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLighting( 
            /* external definition not present */ IGProperty *pPropLightEnabled[  ],
            /* external definition not present */ IGProperty *pPropAmbientLight[  ],
            /* external definition not present */ IGProperty *pPropDiffuseLight[  ],
            /* external definition not present */ IGProperty *pPropSpecularLight[  ],
            /* external definition not present */ IGProperty *pPropLightPos[  ],
            /* external definition not present */ IGProperty *pPropCountLights,
            /* external definition not present */ IGProperty *pPropShinyness) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Push( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Pop( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ViewPort( 
            /* [in] */ int *fourElementViewPortArray) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewPort( 
            /* [retval][out] */ int *fourElementViewPortArray) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportedLightCount( 
            /* [retval][out] */ long *pSupportedLightCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PixelsToUnits( 
            char direction,
            double inPixels,
            double *answer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnitsToPixels( 
            char direction,
            double inUnits,
            double *answer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DataToWindow( 
            struct /* external definition not present */ DataPoint *dpSource,
            enum /* external definition not present */ UnitOfMeasure units,
            struct /* external definition not present */ DataPoint *dpTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WindowToData( 
            struct /* external definition not present */ DataPoint *dpSource,
            struct /* external definition not present */ DataPoint *dpTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DataListToWindow( 
            struct /* external definition not present */ DataList *dpSources,
            struct /* external definition not present */ DataList *dpTargets) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PixelPoint( 
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpAnswer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PixelVector( 
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpEnding,
            struct /* external definition not present */ DataPoint *dpAnswer) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IOpenGLImplementation0004) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPixels( 
            long x1,
            long y1,
            long x2,
            long y2,
            BYTE *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableOpenGLCapability( 
            int GlEnum,
            BOOL isEnabled) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HDC( 
            HDC *getHDC) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            HWND *getHWND) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MousePositionClient( 
            POINT *ptMouse) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsRendered( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExtents( 
            double *minx,
            double *miny,
            double *minz,
            double *maxx,
            double *maxy,
            double *maxz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Erase( 
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBackgroundColor = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDepth( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewLine( 
            struct /* external definition not present */ DataPoint *p) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewPolygon( 
            struct /* external definition not present */ DataPoint *p) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Vertex( 
            struct /* external definition not present */ DataPoint *p) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSurface( 
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSurface( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginWireframe( 
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndWireframe( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSolids( 
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSolids( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginTriangleSolids( 
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndTriangleSolids( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginOpenGLMode( 
            long mode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpenGLMode( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClipPlane( 
            struct /* external definition not present */ DataPoint *dpStartLine,
            struct /* external definition not present */ DataPoint *dpEndLine,
            struct /* external definition not present */ DataPoint *dpCorner1,
            struct /* external definition not present */ DataPoint *dpCorner2) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ /* external definition not present */ IGProperty **pIPropertyBackgroundColor) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewThetaRadians( 
            /* [retval][out] */ double *pViewTheta) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewPhiRadians( 
            /* [retval][out] */ double *pViewPhi) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewSpinRadians( 
            /* [retval][out] */ double *pViewSpin) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewThetaDegrees( 
            /* [retval][out] */ double *pViewTheta) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewPhiDegrees( 
            /* [retval][out] */ double *pViewPhi) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewSpinDegrees( 
            /* [retval][out] */ double *pViewSpin) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PlotView( 
            /* [retval][out] */ long *pPlotView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Finalize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColor( 
            float *__MIDL__IOpenGLImplementation0005) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLineWeight( 
            float __MIDL__IOpenGLImplementation0006) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Normal3dv( 
            double *normal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NormalDp( 
            struct /* external definition not present */ DataPoint *pDP) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColor3dv( 
            double *__MIDL__IOpenGLImplementation0007) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPickBoxHits( 
            POINTL *ptl,
            long pickWindowWidth,
            long pickWindowHeight,
            unsigned int *hitTable,
            long hitTableSize,
            long *pCallLists,
            unsigned int *hitTableHits) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenSegment( 
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedrawSegment( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseSegment( 
            long segmentID,
            unsigned short drawOnClose) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewSegments( 
            long numberToMake,
            long *firstInList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartSegment( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSegment( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlaySegment( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSegment( 
            long segmentID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenGLClearColor( 
            float *pRGBAVector) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenGLClearDepth( 
            double *pv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChoosePixelFormat( 
            int *pAttributes,
            int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenGLCreateContext( 
            int *pAttributes,
            UINT_PTR *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenGLMakeCurrent( 
            UINT_PTR deviceContext,
            UINT_PTR renderingContext,
            BOOL *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOpenGLImplementationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenGLImplementation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOpenGLImplementation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOpenGLImplementation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOpenGLImplementation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOpenGLImplementation * This,
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
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IEvaluator *pIEvaluator);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Start)
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Stop)
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetBaseWindow)
        HRESULT ( STDMETHODCALLTYPE *SetBaseWindow )( 
            IOpenGLImplementation * This,
            HWND __MIDL__IOpenGLImplementation0000);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetTargetWindow)
        HRESULT ( STDMETHODCALLTYPE *SetTargetWindow )( 
            IOpenGLImplementation * This,
            HWND __MIDL__IOpenGLImplementation0001);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, TargetDC)
        HDC ( STDMETHODCALLTYPE *TargetDC )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, TargetHWND)
        HWND ( STDMETHODCALLTYPE *TargetHWND )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PrintSetup)
        HRESULT ( STDMETHODCALLTYPE *PrintSetup )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PrintFinish)
        HRESULT ( STDMETHODCALLTYPE *PrintFinish )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetViewProperties)
        HRESULT ( STDMETHODCALLTYPE *SetViewProperties )( 
            IOpenGLImplementation * This,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropPlotView,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationPhi,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationTheta,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *ppropRotationSpin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropLeftMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropTopMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRightMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBottomMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropMarginUnits,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropStretchToMargins);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, UnSetViewProperties)
        HRESULT ( STDMETHODCALLTYPE *UnSetViewProperties )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Set2D)
        HRESULT ( STDMETHODCALLTYPE *Set2D )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IDataSet *masterDataset,
            long margins,
            char directionRight,
            char directionUp);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetUp)
        HRESULT ( STDMETHODCALLTYPE *SetUp )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IDataSet *masterdataset,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropPlotView,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationPhi,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRotationTheta,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *ppropRotationSpin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropLeftMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropTopMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropRightMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBottomMargin,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropMarginUnits,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropStretchToMargins);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, IsInitialized)
        HRESULT ( STDMETHODCALLTYPE *IsInitialized )( 
            IOpenGLImplementation * This,
            VARIANT_BOOL *bIsInitialized);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Translate)
        HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0002);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Rotate)
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IOpenGLImplementation * This,
            char axis,
            double angle);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Scale)
        HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0003);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetLighting)
        HRESULT ( STDMETHODCALLTYPE *SetLighting )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IGProperty *pPropLightEnabled[  ],
            /* external definition not present */ IGProperty *pPropAmbientLight[  ],
            /* external definition not present */ IGProperty *pPropDiffuseLight[  ],
            /* external definition not present */ IGProperty *pPropSpecularLight[  ],
            /* external definition not present */ IGProperty *pPropLightPos[  ],
            /* external definition not present */ IGProperty *pPropCountLights,
            /* external definition not present */ IGProperty *pPropShinyness);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Push)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Push )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Pop)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Pop )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, put_ViewPort)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewPort )( 
            IOpenGLImplementation * This,
            /* [in] */ int *fourElementViewPortArray);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewPort)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPort )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ int *fourElementViewPortArray);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_SupportedLightCount)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedLightCount )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ long *pSupportedLightCount);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PixelsToUnits)
        HRESULT ( STDMETHODCALLTYPE *PixelsToUnits )( 
            IOpenGLImplementation * This,
            char direction,
            double inPixels,
            double *answer);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, UnitsToPixels)
        HRESULT ( STDMETHODCALLTYPE *UnitsToPixels )( 
            IOpenGLImplementation * This,
            char direction,
            double inUnits,
            double *answer);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, DataToWindow)
        HRESULT ( STDMETHODCALLTYPE *DataToWindow )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpSource,
            enum /* external definition not present */ UnitOfMeasure units,
            struct /* external definition not present */ DataPoint *dpTarget);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, WindowToData)
        HRESULT ( STDMETHODCALLTYPE *WindowToData )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpSource,
            struct /* external definition not present */ DataPoint *dpTarget);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, DataListToWindow)
        HRESULT ( STDMETHODCALLTYPE *DataListToWindow )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataList *dpSources,
            struct /* external definition not present */ DataList *dpTargets);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PixelPoint)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelPoint )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpAnswer);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PixelVector)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelVector )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpEnding,
            struct /* external definition not present */ DataPoint *dpAnswer);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, AdviseGSystemStatusBar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IOpenGLImplementation0004);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, GetPixels)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPixels )( 
            IOpenGLImplementation * This,
            long x1,
            long y1,
            long x2,
            long y2,
            BYTE *pResult);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EnableOpenGLCapability)
        HRESULT ( STDMETHODCALLTYPE *EnableOpenGLCapability )( 
            IOpenGLImplementation * This,
            int GlEnum,
            BOOL isEnabled);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_HDC)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HDC )( 
            IOpenGLImplementation * This,
            HDC *getHDC);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_HWND)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IOpenGLImplementation * This,
            HWND *getHWND);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_MousePositionClient)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MousePositionClient )( 
            IOpenGLImplementation * This,
            POINT *ptMouse);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, IsRendered)
        BOOL ( STDMETHODCALLTYPE *IsRendered )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, GetExtents)
        HRESULT ( STDMETHODCALLTYPE *GetExtents )( 
            IOpenGLImplementation * This,
            double *minx,
            double *miny,
            double *minz,
            double *maxx,
            double *maxy,
            double *maxz);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Erase)
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IOpenGLImplementation * This,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBackgroundColor);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, ResetDepth)
        HRESULT ( STDMETHODCALLTYPE *ResetDepth )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, NewLine)
        HRESULT ( STDMETHODCALLTYPE *NewLine )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, NewPolygon)
        HRESULT ( STDMETHODCALLTYPE *NewPolygon )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Vertex)
        HRESULT ( STDMETHODCALLTYPE *Vertex )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, BeginSurface)
        HRESULT ( STDMETHODCALLTYPE *BeginSurface )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndSurface)
        HRESULT ( STDMETHODCALLTYPE *EndSurface )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, BeginWireframe)
        HRESULT ( STDMETHODCALLTYPE *BeginWireframe )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndWireframe)
        HRESULT ( STDMETHODCALLTYPE *EndWireframe )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, BeginSolids)
        HRESULT ( STDMETHODCALLTYPE *BeginSolids )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndSolids)
        HRESULT ( STDMETHODCALLTYPE *EndSolids )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, BeginTriangleSolids)
        HRESULT ( STDMETHODCALLTYPE *BeginTriangleSolids )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndTriangleSolids)
        HRESULT ( STDMETHODCALLTYPE *EndTriangleSolids )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, BeginOpenGLMode)
        HRESULT ( STDMETHODCALLTYPE *BeginOpenGLMode )( 
            IOpenGLImplementation * This,
            long mode);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndOpenGLMode)
        HRESULT ( STDMETHODCALLTYPE *EndOpenGLMode )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, ClipPlane)
        HRESULT ( STDMETHODCALLTYPE *ClipPlane )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpStartLine,
            struct /* external definition not present */ DataPoint *dpEndLine,
            struct /* external definition not present */ DataPoint *dpCorner1,
            struct /* external definition not present */ DataPoint *dpCorner2);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_BackgroundColor)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **pIPropertyBackgroundColor);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewThetaRadians)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewThetaRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewTheta);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewPhiRadians)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPhiRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewPhi);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewSpinRadians)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewSpinRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewSpin);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewThetaDegrees)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewThetaDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewTheta);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewPhiDegrees)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPhiDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewPhi);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_ViewSpinDegrees)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewSpinDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewSpin);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, get_PlotView)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotView )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ long *pPlotView);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Finalize)
        HRESULT ( STDMETHODCALLTYPE *Finalize )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetColor)
        HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IOpenGLImplementation * This,
            float *__MIDL__IOpenGLImplementation0005);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetLineWeight)
        HRESULT ( STDMETHODCALLTYPE *SetLineWeight )( 
            IOpenGLImplementation * This,
            float __MIDL__IOpenGLImplementation0006);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, Normal3dv)
        HRESULT ( STDMETHODCALLTYPE *Normal3dv )( 
            IOpenGLImplementation * This,
            double *normal);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, NormalDp)
        HRESULT ( STDMETHODCALLTYPE *NormalDp )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *pDP);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, SetColor3dv)
        HRESULT ( STDMETHODCALLTYPE *SetColor3dv )( 
            IOpenGLImplementation * This,
            double *__MIDL__IOpenGLImplementation0007);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, GetPickBoxHits)
        HRESULT ( STDMETHODCALLTYPE *GetPickBoxHits )( 
            IOpenGLImplementation * This,
            POINTL *ptl,
            long pickWindowWidth,
            long pickWindowHeight,
            unsigned int *hitTable,
            long hitTableSize,
            long *pCallLists,
            unsigned int *hitTableHits);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, OpenSegment)
        HRESULT ( STDMETHODCALLTYPE *OpenSegment )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, RedrawSegment)
        HRESULT ( STDMETHODCALLTYPE *RedrawSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, CloseSegment)
        HRESULT ( STDMETHODCALLTYPE *CloseSegment )( 
            IOpenGLImplementation * This,
            long segmentID,
            unsigned short drawOnClose);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, NewSegments)
        HRESULT ( STDMETHODCALLTYPE *NewSegments )( 
            IOpenGLImplementation * This,
            long numberToMake,
            long *firstInList);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, StartSegment)
        HRESULT ( STDMETHODCALLTYPE *StartSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, EndSegment)
        HRESULT ( STDMETHODCALLTYPE *EndSegment )( 
            IOpenGLImplementation * This);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, PlaySegment)
        HRESULT ( STDMETHODCALLTYPE *PlaySegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, DeleteSegment)
        HRESULT ( STDMETHODCALLTYPE *DeleteSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, OpenGLClearColor)
        HRESULT ( STDMETHODCALLTYPE *OpenGLClearColor )( 
            IOpenGLImplementation * This,
            float *pRGBAVector);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, OpenGLClearDepth)
        HRESULT ( STDMETHODCALLTYPE *OpenGLClearDepth )( 
            IOpenGLImplementation * This,
            double *pv);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, ChoosePixelFormat)
        HRESULT ( STDMETHODCALLTYPE *ChoosePixelFormat )( 
            IOpenGLImplementation * This,
            int *pAttributes,
            int *pResult);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, OpenGLCreateContext)
        HRESULT ( STDMETHODCALLTYPE *OpenGLCreateContext )( 
            IOpenGLImplementation * This,
            int *pAttributes,
            UINT_PTR *pResult);
        
        DECLSPEC_XFGVIRT(IOpenGLImplementation, OpenGLMakeCurrent)
        HRESULT ( STDMETHODCALLTYPE *OpenGLMakeCurrent )( 
            IOpenGLImplementation * This,
            UINT_PTR deviceContext,
            UINT_PTR renderingContext,
            BOOL *pResult);
        
        END_INTERFACE
    } IOpenGLImplementationVtbl;

    interface IOpenGLImplementation
    {
        CONST_VTBL struct IOpenGLImplementationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenGLImplementation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenGLImplementation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenGLImplementation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenGLImplementation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOpenGLImplementation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOpenGLImplementation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOpenGLImplementation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOpenGLImplementation_Initialize(This,pIEvaluator)	\
    ( (This)->lpVtbl -> Initialize(This,pIEvaluator) ) 

#define IOpenGLImplementation_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IOpenGLImplementation_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IOpenGLImplementation_SetBaseWindow(This,__MIDL__IOpenGLImplementation0000)	\
    ( (This)->lpVtbl -> SetBaseWindow(This,__MIDL__IOpenGLImplementation0000) ) 

#define IOpenGLImplementation_SetTargetWindow(This,__MIDL__IOpenGLImplementation0001)	\
    ( (This)->lpVtbl -> SetTargetWindow(This,__MIDL__IOpenGLImplementation0001) ) 

#define IOpenGLImplementation_TargetDC(This)	\
    ( (This)->lpVtbl -> TargetDC(This) ) 

#define IOpenGLImplementation_TargetHWND(This)	\
    ( (This)->lpVtbl -> TargetHWND(This) ) 

#define IOpenGLImplementation_PrintSetup(This)	\
    ( (This)->lpVtbl -> PrintSetup(This) ) 

#define IOpenGLImplementation_PrintFinish(This)	\
    ( (This)->lpVtbl -> PrintFinish(This) ) 

#define IOpenGLImplementation_SetViewProperties(This,pPropPlotView,pPropRotationPhi,pPropRotationTheta,ppropRotationSpin,pPropLeftMargin,pPropTopMargin,pPropRightMargin,pPropBottomMargin,pPropMarginUnits,pPropStretchToMargins)	\
    ( (This)->lpVtbl -> SetViewProperties(This,pPropPlotView,pPropRotationPhi,pPropRotationTheta,ppropRotationSpin,pPropLeftMargin,pPropTopMargin,pPropRightMargin,pPropBottomMargin,pPropMarginUnits,pPropStretchToMargins) ) 

#define IOpenGLImplementation_UnSetViewProperties(This)	\
    ( (This)->lpVtbl -> UnSetViewProperties(This) ) 

#define IOpenGLImplementation_Set2D(This,masterDataset,margins,directionRight,directionUp)	\
    ( (This)->lpVtbl -> Set2D(This,masterDataset,margins,directionRight,directionUp) ) 

#define IOpenGLImplementation_SetUp(This,masterdataset,pPropPlotView,pPropRotationPhi,pPropRotationTheta,ppropRotationSpin,pPropLeftMargin,pPropTopMargin,pPropRightMargin,pPropBottomMargin,pPropMarginUnits,pPropStretchToMargins)	\
    ( (This)->lpVtbl -> SetUp(This,masterdataset,pPropPlotView,pPropRotationPhi,pPropRotationTheta,ppropRotationSpin,pPropLeftMargin,pPropTopMargin,pPropRightMargin,pPropBottomMargin,pPropMarginUnits,pPropStretchToMargins) ) 

#define IOpenGLImplementation_IsInitialized(This,bIsInitialized)	\
    ( (This)->lpVtbl -> IsInitialized(This,bIsInitialized) ) 

#define IOpenGLImplementation_Translate(This,__MIDL__IOpenGLImplementation0002)	\
    ( (This)->lpVtbl -> Translate(This,__MIDL__IOpenGLImplementation0002) ) 

#define IOpenGLImplementation_Rotate(This,axis,angle)	\
    ( (This)->lpVtbl -> Rotate(This,axis,angle) ) 

#define IOpenGLImplementation_Scale(This,__MIDL__IOpenGLImplementation0003)	\
    ( (This)->lpVtbl -> Scale(This,__MIDL__IOpenGLImplementation0003) ) 

#define IOpenGLImplementation_SetLighting(This,pPropLightEnabled,pPropAmbientLight,pPropDiffuseLight,pPropSpecularLight,pPropLightPos,pPropCountLights,pPropShinyness)	\
    ( (This)->lpVtbl -> SetLighting(This,pPropLightEnabled,pPropAmbientLight,pPropDiffuseLight,pPropSpecularLight,pPropLightPos,pPropCountLights,pPropShinyness) ) 

#define IOpenGLImplementation_Push(This)	\
    ( (This)->lpVtbl -> Push(This) ) 

#define IOpenGLImplementation_Pop(This)	\
    ( (This)->lpVtbl -> Pop(This) ) 

#define IOpenGLImplementation_put_ViewPort(This,fourElementViewPortArray)	\
    ( (This)->lpVtbl -> put_ViewPort(This,fourElementViewPortArray) ) 

#define IOpenGLImplementation_get_ViewPort(This,fourElementViewPortArray)	\
    ( (This)->lpVtbl -> get_ViewPort(This,fourElementViewPortArray) ) 

#define IOpenGLImplementation_get_SupportedLightCount(This,pSupportedLightCount)	\
    ( (This)->lpVtbl -> get_SupportedLightCount(This,pSupportedLightCount) ) 

#define IOpenGLImplementation_PixelsToUnits(This,direction,inPixels,answer)	\
    ( (This)->lpVtbl -> PixelsToUnits(This,direction,inPixels,answer) ) 

#define IOpenGLImplementation_UnitsToPixels(This,direction,inUnits,answer)	\
    ( (This)->lpVtbl -> UnitsToPixels(This,direction,inUnits,answer) ) 

#define IOpenGLImplementation_DataToWindow(This,dpSource,units,dpTarget)	\
    ( (This)->lpVtbl -> DataToWindow(This,dpSource,units,dpTarget) ) 

#define IOpenGLImplementation_WindowToData(This,dpSource,dpTarget)	\
    ( (This)->lpVtbl -> WindowToData(This,dpSource,dpTarget) ) 

#define IOpenGLImplementation_DataListToWindow(This,dpSources,dpTargets)	\
    ( (This)->lpVtbl -> DataListToWindow(This,dpSources,dpTargets) ) 

#define IOpenGLImplementation_PixelPoint(This,dpBeginning,dpAnswer)	\
    ( (This)->lpVtbl -> PixelPoint(This,dpBeginning,dpAnswer) ) 

#define IOpenGLImplementation_PixelVector(This,dpBeginning,dpEnding,dpAnswer)	\
    ( (This)->lpVtbl -> PixelVector(This,dpBeginning,dpEnding,dpAnswer) ) 

#define IOpenGLImplementation_AdviseGSystemStatusBar(This,__MIDL__IOpenGLImplementation0004)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IOpenGLImplementation0004) ) 

#define IOpenGLImplementation_GetPixels(This,x1,y1,x2,y2,pResult)	\
    ( (This)->lpVtbl -> GetPixels(This,x1,y1,x2,y2,pResult) ) 

#define IOpenGLImplementation_EnableOpenGLCapability(This,GlEnum,isEnabled)	\
    ( (This)->lpVtbl -> EnableOpenGLCapability(This,GlEnum,isEnabled) ) 

#define IOpenGLImplementation_get_HDC(This,getHDC)	\
    ( (This)->lpVtbl -> get_HDC(This,getHDC) ) 

#define IOpenGLImplementation_get_HWND(This,getHWND)	\
    ( (This)->lpVtbl -> get_HWND(This,getHWND) ) 

#define IOpenGLImplementation_get_MousePositionClient(This,ptMouse)	\
    ( (This)->lpVtbl -> get_MousePositionClient(This,ptMouse) ) 

#define IOpenGLImplementation_IsRendered(This)	\
    ( (This)->lpVtbl -> IsRendered(This) ) 

#define IOpenGLImplementation_GetExtents(This,minx,miny,minz,maxx,maxy,maxz)	\
    ( (This)->lpVtbl -> GetExtents(This,minx,miny,minz,maxx,maxy,maxz) ) 

#define IOpenGLImplementation_Erase(This,pPropBackgroundColor)	\
    ( (This)->lpVtbl -> Erase(This,pPropBackgroundColor) ) 

#define IOpenGLImplementation_ResetDepth(This)	\
    ( (This)->lpVtbl -> ResetDepth(This) ) 

#define IOpenGLImplementation_NewLine(This,p)	\
    ( (This)->lpVtbl -> NewLine(This,p) ) 

#define IOpenGLImplementation_NewPolygon(This,p)	\
    ( (This)->lpVtbl -> NewPolygon(This,p) ) 

#define IOpenGLImplementation_Vertex(This,p)	\
    ( (This)->lpVtbl -> Vertex(This,p) ) 

#define IOpenGLImplementation_BeginSurface(This,segmentID,pPropTopColor,pPropBottomColor)	\
    ( (This)->lpVtbl -> BeginSurface(This,segmentID,pPropTopColor,pPropBottomColor) ) 

#define IOpenGLImplementation_EndSurface(This,segmentID)	\
    ( (This)->lpVtbl -> EndSurface(This,segmentID) ) 

#define IOpenGLImplementation_BeginWireframe(This,segmentID,pPropLineColor,pPropLineWeight)	\
    ( (This)->lpVtbl -> BeginWireframe(This,segmentID,pPropLineColor,pPropLineWeight) ) 

#define IOpenGLImplementation_EndWireframe(This,segmentID)	\
    ( (This)->lpVtbl -> EndWireframe(This,segmentID) ) 

#define IOpenGLImplementation_BeginSolids(This,segmentID,pPropTopColor,pPropBottomColor)	\
    ( (This)->lpVtbl -> BeginSolids(This,segmentID,pPropTopColor,pPropBottomColor) ) 

#define IOpenGLImplementation_EndSolids(This,segmentID)	\
    ( (This)->lpVtbl -> EndSolids(This,segmentID) ) 

#define IOpenGLImplementation_BeginTriangleSolids(This,segmentID,pPropTopColor,pPropBottomColor)	\
    ( (This)->lpVtbl -> BeginTriangleSolids(This,segmentID,pPropTopColor,pPropBottomColor) ) 

#define IOpenGLImplementation_EndTriangleSolids(This,segmentID)	\
    ( (This)->lpVtbl -> EndTriangleSolids(This,segmentID) ) 

#define IOpenGLImplementation_BeginOpenGLMode(This,mode)	\
    ( (This)->lpVtbl -> BeginOpenGLMode(This,mode) ) 

#define IOpenGLImplementation_EndOpenGLMode(This)	\
    ( (This)->lpVtbl -> EndOpenGLMode(This) ) 

#define IOpenGLImplementation_ClipPlane(This,dpStartLine,dpEndLine,dpCorner1,dpCorner2)	\
    ( (This)->lpVtbl -> ClipPlane(This,dpStartLine,dpEndLine,dpCorner1,dpCorner2) ) 

#define IOpenGLImplementation_get_BackgroundColor(This,pIPropertyBackgroundColor)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,pIPropertyBackgroundColor) ) 

#define IOpenGLImplementation_get_ViewThetaRadians(This,pViewTheta)	\
    ( (This)->lpVtbl -> get_ViewThetaRadians(This,pViewTheta) ) 

#define IOpenGLImplementation_get_ViewPhiRadians(This,pViewPhi)	\
    ( (This)->lpVtbl -> get_ViewPhiRadians(This,pViewPhi) ) 

#define IOpenGLImplementation_get_ViewSpinRadians(This,pViewSpin)	\
    ( (This)->lpVtbl -> get_ViewSpinRadians(This,pViewSpin) ) 

#define IOpenGLImplementation_get_ViewThetaDegrees(This,pViewTheta)	\
    ( (This)->lpVtbl -> get_ViewThetaDegrees(This,pViewTheta) ) 

#define IOpenGLImplementation_get_ViewPhiDegrees(This,pViewPhi)	\
    ( (This)->lpVtbl -> get_ViewPhiDegrees(This,pViewPhi) ) 

#define IOpenGLImplementation_get_ViewSpinDegrees(This,pViewSpin)	\
    ( (This)->lpVtbl -> get_ViewSpinDegrees(This,pViewSpin) ) 

#define IOpenGLImplementation_get_PlotView(This,pPlotView)	\
    ( (This)->lpVtbl -> get_PlotView(This,pPlotView) ) 

#define IOpenGLImplementation_Finalize(This)	\
    ( (This)->lpVtbl -> Finalize(This) ) 

#define IOpenGLImplementation_SetColor(This,__MIDL__IOpenGLImplementation0005)	\
    ( (This)->lpVtbl -> SetColor(This,__MIDL__IOpenGLImplementation0005) ) 

#define IOpenGLImplementation_SetLineWeight(This,__MIDL__IOpenGLImplementation0006)	\
    ( (This)->lpVtbl -> SetLineWeight(This,__MIDL__IOpenGLImplementation0006) ) 

#define IOpenGLImplementation_Normal3dv(This,normal)	\
    ( (This)->lpVtbl -> Normal3dv(This,normal) ) 

#define IOpenGLImplementation_NormalDp(This,pDP)	\
    ( (This)->lpVtbl -> NormalDp(This,pDP) ) 

#define IOpenGLImplementation_SetColor3dv(This,__MIDL__IOpenGLImplementation0007)	\
    ( (This)->lpVtbl -> SetColor3dv(This,__MIDL__IOpenGLImplementation0007) ) 

#define IOpenGLImplementation_GetPickBoxHits(This,ptl,pickWindowWidth,pickWindowHeight,hitTable,hitTableSize,pCallLists,hitTableHits)	\
    ( (This)->lpVtbl -> GetPickBoxHits(This,ptl,pickWindowWidth,pickWindowHeight,hitTable,hitTableSize,pCallLists,hitTableHits) ) 

#define IOpenGLImplementation_OpenSegment(This,segmentID,pPropLineColor,pPropLineWeight)	\
    ( (This)->lpVtbl -> OpenSegment(This,segmentID,pPropLineColor,pPropLineWeight) ) 

#define IOpenGLImplementation_RedrawSegment(This,segmentID)	\
    ( (This)->lpVtbl -> RedrawSegment(This,segmentID) ) 

#define IOpenGLImplementation_CloseSegment(This,segmentID,drawOnClose)	\
    ( (This)->lpVtbl -> CloseSegment(This,segmentID,drawOnClose) ) 

#define IOpenGLImplementation_NewSegments(This,numberToMake,firstInList)	\
    ( (This)->lpVtbl -> NewSegments(This,numberToMake,firstInList) ) 

#define IOpenGLImplementation_StartSegment(This,segmentID)	\
    ( (This)->lpVtbl -> StartSegment(This,segmentID) ) 

#define IOpenGLImplementation_EndSegment(This)	\
    ( (This)->lpVtbl -> EndSegment(This) ) 

#define IOpenGLImplementation_PlaySegment(This,segmentID)	\
    ( (This)->lpVtbl -> PlaySegment(This,segmentID) ) 

#define IOpenGLImplementation_DeleteSegment(This,segmentID)	\
    ( (This)->lpVtbl -> DeleteSegment(This,segmentID) ) 

#define IOpenGLImplementation_OpenGLClearColor(This,pRGBAVector)	\
    ( (This)->lpVtbl -> OpenGLClearColor(This,pRGBAVector) ) 

#define IOpenGLImplementation_OpenGLClearDepth(This,pv)	\
    ( (This)->lpVtbl -> OpenGLClearDepth(This,pv) ) 

#define IOpenGLImplementation_ChoosePixelFormat(This,pAttributes,pResult)	\
    ( (This)->lpVtbl -> ChoosePixelFormat(This,pAttributes,pResult) ) 

#define IOpenGLImplementation_OpenGLCreateContext(This,pAttributes,pResult)	\
    ( (This)->lpVtbl -> OpenGLCreateContext(This,pAttributes,pResult) ) 

#define IOpenGLImplementation_OpenGLMakeCurrent(This,deviceContext,renderingContext,pResult)	\
    ( (This)->lpVtbl -> OpenGLMakeCurrent(This,deviceContext,renderingContext,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenGLImplementation_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_OpenGLImplementor;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD98-55E6-11d3-8365-006008BD5BC3")
OpenGLImplementor;
#endif
#endif /* __OpenGLImplementor_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


