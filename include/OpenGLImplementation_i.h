

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for OpenGLImplementation.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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

/* Forward Declarations */ 

#ifndef __IOpenGLImplementation_FWD_DEFINED__
#define __IOpenGLImplementation_FWD_DEFINED__
typedef interface IOpenGLImplementation IOpenGLImplementation;

#endif 	/* __IOpenGLImplementation_FWD_DEFINED__ */


#ifndef __IOpenGL_FWD_DEFINED__
#define __IOpenGL_FWD_DEFINED__
typedef interface IOpenGL IOpenGL;

#endif 	/* __IOpenGL_FWD_DEFINED__ */


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
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOpenGLImplementationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenGLImplementation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenGLImplementation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOpenGLImplementation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOpenGLImplementation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOpenGLImplementation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
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
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IEvaluator *pIEvaluator);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetBaseWindow )( 
            IOpenGLImplementation * This,
            HWND __MIDL__IOpenGLImplementation0000);
        
        HRESULT ( STDMETHODCALLTYPE *SetTargetWindow )( 
            IOpenGLImplementation * This,
            HWND __MIDL__IOpenGLImplementation0001);
        
        HDC ( STDMETHODCALLTYPE *TargetDC )( 
            IOpenGLImplementation * This);
        
        HWND ( STDMETHODCALLTYPE *TargetHWND )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrintSetup )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrintFinish )( 
            IOpenGLImplementation * This);
        
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
        
        HRESULT ( STDMETHODCALLTYPE *UnSetViewProperties )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *Set2D )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IDataSet *masterDataset,
            long margins,
            char directionRight,
            char directionUp);
        
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
        
        HRESULT ( STDMETHODCALLTYPE *IsInitialized )( 
            IOpenGLImplementation * This,
            VARIANT_BOOL *bIsInitialized);
        
        HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0002);
        
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IOpenGLImplementation * This,
            char axis,
            double angle);
        
        HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *__MIDL__IOpenGLImplementation0003);
        
        HRESULT ( STDMETHODCALLTYPE *SetLighting )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IGProperty *pPropLightEnabled[  ],
            /* external definition not present */ IGProperty *pPropAmbientLight[  ],
            /* external definition not present */ IGProperty *pPropDiffuseLight[  ],
            /* external definition not present */ IGProperty *pPropSpecularLight[  ],
            /* external definition not present */ IGProperty *pPropLightPos[  ],
            /* external definition not present */ IGProperty *pPropCountLights,
            /* external definition not present */ IGProperty *pPropShinyness);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Push )( 
            IOpenGLImplementation * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Pop )( 
            IOpenGLImplementation * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewPort )( 
            IOpenGLImplementation * This,
            /* [in] */ int *fourElementViewPortArray);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPort )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ int *fourElementViewPortArray);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedLightCount )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ long *pSupportedLightCount);
        
        HRESULT ( STDMETHODCALLTYPE *PixelsToUnits )( 
            IOpenGLImplementation * This,
            char direction,
            double inPixels,
            double *answer);
        
        HRESULT ( STDMETHODCALLTYPE *UnitsToPixels )( 
            IOpenGLImplementation * This,
            char direction,
            double inUnits,
            double *answer);
        
        HRESULT ( STDMETHODCALLTYPE *DataToWindow )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpSource,
            enum /* external definition not present */ UnitOfMeasure units,
            struct /* external definition not present */ DataPoint *dpTarget);
        
        HRESULT ( STDMETHODCALLTYPE *WindowToData )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpSource,
            struct /* external definition not present */ DataPoint *dpTarget);
        
        HRESULT ( STDMETHODCALLTYPE *DataListToWindow )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataList *dpSources,
            struct /* external definition not present */ DataList *dpTargets);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelPoint )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpAnswer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PixelVector )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpBeginning,
            struct /* external definition not present */ DataPoint *dpEnding,
            struct /* external definition not present */ DataPoint *dpAnswer);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IOpenGLImplementation * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IOpenGLImplementation0004);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPixels )( 
            IOpenGLImplementation * This,
            long x1,
            long y1,
            long x2,
            long y2,
            BYTE *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnableOpenGLCapability )( 
            IOpenGLImplementation * This,
            int GlEnum,
            BOOL isEnabled);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HDC )( 
            IOpenGLImplementation * This,
            HDC *getHDC);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IOpenGLImplementation * This,
            HWND *getHWND);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MousePositionClient )( 
            IOpenGLImplementation * This,
            POINT *ptMouse);
        
        BOOL ( STDMETHODCALLTYPE *IsRendered )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetExtents )( 
            IOpenGLImplementation * This,
            double *minx,
            double *miny,
            double *minz,
            double *maxx,
            double *maxy,
            double *maxz);
        
        HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IOpenGLImplementation * This,
            /* [defaultvalue][optional] */ /* external definition not present */ IGProperty *pPropBackgroundColor);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDepth )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *NewLine )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        HRESULT ( STDMETHODCALLTYPE *NewPolygon )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        HRESULT ( STDMETHODCALLTYPE *Vertex )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *p);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSurface )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        HRESULT ( STDMETHODCALLTYPE *EndSurface )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *BeginWireframe )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight);
        
        HRESULT ( STDMETHODCALLTYPE *EndWireframe )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSolids )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        HRESULT ( STDMETHODCALLTYPE *EndSolids )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTriangleSolids )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropTopColor,
            /* external definition not present */ IGProperty *pPropBottomColor);
        
        HRESULT ( STDMETHODCALLTYPE *EndTriangleSolids )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *BeginOpenGLMode )( 
            IOpenGLImplementation * This,
            long mode);
        
        HRESULT ( STDMETHODCALLTYPE *EndOpenGLMode )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClipPlane )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *dpStartLine,
            struct /* external definition not present */ DataPoint *dpEndLine,
            struct /* external definition not present */ DataPoint *dpCorner1,
            struct /* external definition not present */ DataPoint *dpCorner2);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ /* external definition not present */ IGProperty **pIPropertyBackgroundColor);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewThetaRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewTheta);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPhiRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewPhi);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewSpinRadians )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewSpin);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewThetaDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewTheta);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPhiDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewPhi);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewSpinDegrees )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ double *pViewSpin);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotView )( 
            IOpenGLImplementation * This,
            /* [retval][out] */ long *pPlotView);
        
        HRESULT ( STDMETHODCALLTYPE *Finalize )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetColor )( 
            IOpenGLImplementation * This,
            float *__MIDL__IOpenGLImplementation0005);
        
        HRESULT ( STDMETHODCALLTYPE *SetLineWeight )( 
            IOpenGLImplementation * This,
            float __MIDL__IOpenGLImplementation0006);
        
        HRESULT ( STDMETHODCALLTYPE *Normal3dv )( 
            IOpenGLImplementation * This,
            double *normal);
        
        HRESULT ( STDMETHODCALLTYPE *NormalDp )( 
            IOpenGLImplementation * This,
            struct /* external definition not present */ DataPoint *pDP);
        
        HRESULT ( STDMETHODCALLTYPE *SetColor3dv )( 
            IOpenGLImplementation * This,
            double *__MIDL__IOpenGLImplementation0007);
        
        HRESULT ( STDMETHODCALLTYPE *GetPickBoxHits )( 
            IOpenGLImplementation * This,
            POINTL *ptl,
            long pickWindowWidth,
            long pickWindowHeight,
            unsigned int *hitTable,
            long hitTableSize,
            long *pCallLists,
            unsigned int *hitTableHits);
        
        HRESULT ( STDMETHODCALLTYPE *OpenSegment )( 
            IOpenGLImplementation * This,
            long segmentID,
            /* external definition not present */ IGProperty *pPropLineColor,
            /* external definition not present */ IGProperty *pPropLineWeight);
        
        HRESULT ( STDMETHODCALLTYPE *RedrawSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *CloseSegment )( 
            IOpenGLImplementation * This,
            long segmentID,
            unsigned short drawOnClose);
        
        HRESULT ( STDMETHODCALLTYPE *NewSegments )( 
            IOpenGLImplementation * This,
            long numberToMake,
            long *firstInList);
        
        HRESULT ( STDMETHODCALLTYPE *StartSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *EndSegment )( 
            IOpenGLImplementation * This);
        
        HRESULT ( STDMETHODCALLTYPE *PlaySegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSegment )( 
            IOpenGLImplementation * This,
            long segmentID);
        
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

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenGLImplementation_INTERFACE_DEFINED__ */


#ifndef __IOpenGL_INTERFACE_DEFINED__
#define __IOpenGL_INTERFACE_DEFINED__

/* interface IOpenGL */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IOpenGL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD99-55E6-11d3-8365-006008BD5BC3")
    IOpenGL : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOpenGLTargetWindow( 
            HWND hwndTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearColor( 
            float red,
            float green,
            float blue,
            float alpha) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearDepth( 
            double depth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( 
            unsigned int bitField) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChooseAndSetPixelFormat( 
            UINT_PTR deviceContext,
            int *pAttributes,
            int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateContext( 
            UINT_PTR deviceContext,
            UINT_PTR *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteContext( 
            UINT_PTR renderingContext,
            BOOL *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MakeCurrent( 
            UINT_PTR deviceContext,
            UINT_PTR renderingContext,
            BOOL *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloatv( 
            unsigned int GLenum,
            float *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enable( 
            unsigned int glEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disable( 
            unsigned int glEnum) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsEnabled( 
            unsigned int glEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ColorMask( 
            unsigned char red,
            unsigned char green,
            unsigned char blue,
            unsigned char alpha) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DepthFunc( 
            unsigned int v) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DepthMask( 
            unsigned char __MIDL__IOpenGL0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Viewport( 
            int __MIDL__IOpenGL0001,
            int __MIDL__IOpenGL0002,
            int __MIDL__IOpenGL0003,
            int __MIDL__IOpenGL0004) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scissor( 
            int __MIDL__IOpenGL0005,
            int __MIDL__IOpenGL0006,
            int __MIDL__IOpenGL0007,
            int __MIDL__IOpenGL0008) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CullFace( 
            unsigned int __MIDL__IOpenGL0009) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIntegerv( 
            unsigned int GLenum,
            int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PixelStorei( 
            unsigned int GLenum,
            int value) = 0;
        
        virtual unsigned char *STDMETHODCALLTYPE GetString( 
            unsigned int GLenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentContext( 
            UINT_PTR *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawBuffer( 
            unsigned int GLenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadBuffer( 
            unsigned int GLenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramebufferAttachmentParameteriv( 
            unsigned int target,
            unsigned int attachment,
            unsigned int pName,
            int *pParams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PointSize( 
            float size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteBuffers( 
            int countBuffers,
            unsigned int *pBuffers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindBuffer( 
            unsigned int target,
            int buffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BufferData( 
            unsigned int target,
            long long size,
            void *pData,
            unsigned int usage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenBuffers( 
            int count,
            unsigned int *pBuffers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindVertexArray( 
            unsigned int array) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteVertexArrays( 
            int count,
            unsigned int *pArrays) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenVertexArrays( 
            int count,
            unsigned int *pArrays) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableVertexAttribArray( 
            unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VertexAttribPointer( 
            unsigned int index,
            int size,
            unsigned int type,
            boolean normalized,
            int strid,
            void *pointer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VertexAttribDivisorARB( 
            unsigned int index,
            unsigned int divisor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisableVertexAttribArray( 
            unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShaderSource( 
            unsigned int shader,
            int count,
            const char *const *ppString,
            int *pLength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompileShader( 
            int shader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateProgram( 
            unsigned int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateShader( 
            unsigned int type,
            unsigned int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShaderiv( 
            unsigned int shader,
            unsigned int pname,
            int *pParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShaderInfoLog( 
            unsigned int shader,
            int bufSize,
            int *pLength,
            char *infoLog) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteShader( 
            unsigned int shader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AttachShader( 
            unsigned int program,
            unsigned int shader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DetachShader( 
            unsigned int program,
            unsigned int shader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawRangeElements( 
            unsigned int mode,
            int start,
            int end,
            int count,
            unsigned int type,
            const void *indices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindFragDataLocation( 
            int program,
            int colorNumber,
            const char *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LinkProgram( 
            int program) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramiv( 
            int program,
            unsigned int pname,
            int *param) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramInfoLog( 
            int program,
            int bufferSize,
            int *oKength,
            char *infoLog) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UseProgram( 
            int program) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProgram( 
            int program) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUniformLocation( 
            int program,
            const char *name,
            int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform1i( 
            int location,
            int v0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform1iv( 
            int location,
            int count,
            const int *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform1f( 
            int location,
            float v0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform1fv( 
            int location,
            int count,
            const float *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform2iv( 
            int location,
            int count,
            const int *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform2fv( 
            int location,
            int count,
            const float *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform3fv( 
            int location,
            int count,
            const float *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uniform4fv( 
            int location,
            int count,
            const float *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttribLocation( 
            int program,
            const char *name,
            int *pResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UniformMatrix4fv( 
            int location,
            int count,
            boolean transpose,
            const float *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BlendFuncSeparate( 
            unsigned int sfactorRGB,
            unsigned int dfactorRGB,
            unsigned int sfactorAlpha,
            unsigned int dfactorAlpha) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BlendEquationSeparate( 
            unsigned int modeRGB,
            unsigned int modeAlpha) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOpenGLVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenGL * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenGL * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenGL * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetOpenGLTargetWindow )( 
            IOpenGL * This,
            HWND hwndTarget);
        
        HRESULT ( STDMETHODCALLTYPE *ClearColor )( 
            IOpenGL * This,
            float red,
            float green,
            float blue,
            float alpha);
        
        HRESULT ( STDMETHODCALLTYPE *ClearDepth )( 
            IOpenGL * This,
            double depth);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IOpenGL * This,
            unsigned int bitField);
        
        HRESULT ( STDMETHODCALLTYPE *ChooseAndSetPixelFormat )( 
            IOpenGL * This,
            UINT_PTR deviceContext,
            int *pAttributes,
            int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *CreateContext )( 
            IOpenGL * This,
            UINT_PTR deviceContext,
            UINT_PTR *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteContext )( 
            IOpenGL * This,
            UINT_PTR renderingContext,
            BOOL *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *MakeCurrent )( 
            IOpenGL * This,
            UINT_PTR deviceContext,
            UINT_PTR renderingContext,
            BOOL *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloatv )( 
            IOpenGL * This,
            unsigned int GLenum,
            float *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IOpenGL * This,
            unsigned int glEnum);
        
        HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IOpenGL * This,
            unsigned int glEnum);
        
        BOOL ( STDMETHODCALLTYPE *IsEnabled )( 
            IOpenGL * This,
            unsigned int glEnum);
        
        HRESULT ( STDMETHODCALLTYPE *ColorMask )( 
            IOpenGL * This,
            unsigned char red,
            unsigned char green,
            unsigned char blue,
            unsigned char alpha);
        
        HRESULT ( STDMETHODCALLTYPE *DepthFunc )( 
            IOpenGL * This,
            unsigned int v);
        
        HRESULT ( STDMETHODCALLTYPE *DepthMask )( 
            IOpenGL * This,
            unsigned char __MIDL__IOpenGL0000);
        
        HRESULT ( STDMETHODCALLTYPE *Viewport )( 
            IOpenGL * This,
            int __MIDL__IOpenGL0001,
            int __MIDL__IOpenGL0002,
            int __MIDL__IOpenGL0003,
            int __MIDL__IOpenGL0004);
        
        HRESULT ( STDMETHODCALLTYPE *Scissor )( 
            IOpenGL * This,
            int __MIDL__IOpenGL0005,
            int __MIDL__IOpenGL0006,
            int __MIDL__IOpenGL0007,
            int __MIDL__IOpenGL0008);
        
        HRESULT ( STDMETHODCALLTYPE *CullFace )( 
            IOpenGL * This,
            unsigned int __MIDL__IOpenGL0009);
        
        HRESULT ( STDMETHODCALLTYPE *GetIntegerv )( 
            IOpenGL * This,
            unsigned int GLenum,
            int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *PixelStorei )( 
            IOpenGL * This,
            unsigned int GLenum,
            int value);
        
        unsigned char *( STDMETHODCALLTYPE *GetString )( 
            IOpenGL * This,
            unsigned int GLenum);
        
        HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IOpenGL * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentContext )( 
            IOpenGL * This,
            UINT_PTR *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *DrawBuffer )( 
            IOpenGL * This,
            unsigned int GLenum);
        
        HRESULT ( STDMETHODCALLTYPE *ReadBuffer )( 
            IOpenGL * This,
            unsigned int GLenum);
        
        HRESULT ( STDMETHODCALLTYPE *GetFramebufferAttachmentParameteriv )( 
            IOpenGL * This,
            unsigned int target,
            unsigned int attachment,
            unsigned int pName,
            int *pParams);
        
        HRESULT ( STDMETHODCALLTYPE *PointSize )( 
            IOpenGL * This,
            float size);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteBuffers )( 
            IOpenGL * This,
            int countBuffers,
            unsigned int *pBuffers);
        
        HRESULT ( STDMETHODCALLTYPE *BindBuffer )( 
            IOpenGL * This,
            unsigned int target,
            int buffer);
        
        HRESULT ( STDMETHODCALLTYPE *BufferData )( 
            IOpenGL * This,
            unsigned int target,
            long long size,
            void *pData,
            unsigned int usage);
        
        HRESULT ( STDMETHODCALLTYPE *GenBuffers )( 
            IOpenGL * This,
            int count,
            unsigned int *pBuffers);
        
        HRESULT ( STDMETHODCALLTYPE *BindVertexArray )( 
            IOpenGL * This,
            unsigned int array);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteVertexArrays )( 
            IOpenGL * This,
            int count,
            unsigned int *pArrays);
        
        HRESULT ( STDMETHODCALLTYPE *GenVertexArrays )( 
            IOpenGL * This,
            int count,
            unsigned int *pArrays);
        
        HRESULT ( STDMETHODCALLTYPE *EnableVertexAttribArray )( 
            IOpenGL * This,
            unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *VertexAttribPointer )( 
            IOpenGL * This,
            unsigned int index,
            int size,
            unsigned int type,
            boolean normalized,
            int strid,
            void *pointer);
        
        HRESULT ( STDMETHODCALLTYPE *VertexAttribDivisorARB )( 
            IOpenGL * This,
            unsigned int index,
            unsigned int divisor);
        
        HRESULT ( STDMETHODCALLTYPE *DisableVertexAttribArray )( 
            IOpenGL * This,
            unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *ShaderSource )( 
            IOpenGL * This,
            unsigned int shader,
            int count,
            const char *const *ppString,
            int *pLength);
        
        HRESULT ( STDMETHODCALLTYPE *CompileShader )( 
            IOpenGL * This,
            int shader);
        
        HRESULT ( STDMETHODCALLTYPE *CreateProgram )( 
            IOpenGL * This,
            unsigned int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *CreateShader )( 
            IOpenGL * This,
            unsigned int type,
            unsigned int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetShaderiv )( 
            IOpenGL * This,
            unsigned int shader,
            unsigned int pname,
            int *pParam);
        
        HRESULT ( STDMETHODCALLTYPE *GetShaderInfoLog )( 
            IOpenGL * This,
            unsigned int shader,
            int bufSize,
            int *pLength,
            char *infoLog);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteShader )( 
            IOpenGL * This,
            unsigned int shader);
        
        HRESULT ( STDMETHODCALLTYPE *AttachShader )( 
            IOpenGL * This,
            unsigned int program,
            unsigned int shader);
        
        HRESULT ( STDMETHODCALLTYPE *DetachShader )( 
            IOpenGL * This,
            unsigned int program,
            unsigned int shader);
        
        HRESULT ( STDMETHODCALLTYPE *DrawRangeElements )( 
            IOpenGL * This,
            unsigned int mode,
            int start,
            int end,
            int count,
            unsigned int type,
            const void *indices);
        
        HRESULT ( STDMETHODCALLTYPE *BindFragDataLocation )( 
            IOpenGL * This,
            int program,
            int colorNumber,
            const char *name);
        
        HRESULT ( STDMETHODCALLTYPE *LinkProgram )( 
            IOpenGL * This,
            int program);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramiv )( 
            IOpenGL * This,
            int program,
            unsigned int pname,
            int *param);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramInfoLog )( 
            IOpenGL * This,
            int program,
            int bufferSize,
            int *oKength,
            char *infoLog);
        
        HRESULT ( STDMETHODCALLTYPE *UseProgram )( 
            IOpenGL * This,
            int program);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteProgram )( 
            IOpenGL * This,
            int program);
        
        HRESULT ( STDMETHODCALLTYPE *GetUniformLocation )( 
            IOpenGL * This,
            int program,
            const char *name,
            int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform1i )( 
            IOpenGL * This,
            int location,
            int v0);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform1iv )( 
            IOpenGL * This,
            int location,
            int count,
            const int *value);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform1f )( 
            IOpenGL * This,
            int location,
            float v0);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform1fv )( 
            IOpenGL * This,
            int location,
            int count,
            const float *value);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform2iv )( 
            IOpenGL * This,
            int location,
            int count,
            const int *value);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform2fv )( 
            IOpenGL * This,
            int location,
            int count,
            const float *value);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform3fv )( 
            IOpenGL * This,
            int location,
            int count,
            const float *value);
        
        HRESULT ( STDMETHODCALLTYPE *Uniform4fv )( 
            IOpenGL * This,
            int location,
            int count,
            const float *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribLocation )( 
            IOpenGL * This,
            int program,
            const char *name,
            int *pResult);
        
        HRESULT ( STDMETHODCALLTYPE *UniformMatrix4fv )( 
            IOpenGL * This,
            int location,
            int count,
            boolean transpose,
            const float *value);
        
        HRESULT ( STDMETHODCALLTYPE *BlendFuncSeparate )( 
            IOpenGL * This,
            unsigned int sfactorRGB,
            unsigned int dfactorRGB,
            unsigned int sfactorAlpha,
            unsigned int dfactorAlpha);
        
        HRESULT ( STDMETHODCALLTYPE *BlendEquationSeparate )( 
            IOpenGL * This,
            unsigned int modeRGB,
            unsigned int modeAlpha);
        
        END_INTERFACE
    } IOpenGLVtbl;

    interface IOpenGL
    {
        CONST_VTBL struct IOpenGLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenGL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenGL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenGL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenGL_SetOpenGLTargetWindow(This,hwndTarget)	\
    ( (This)->lpVtbl -> SetOpenGLTargetWindow(This,hwndTarget) ) 

#define IOpenGL_ClearColor(This,red,green,blue,alpha)	\
    ( (This)->lpVtbl -> ClearColor(This,red,green,blue,alpha) ) 

#define IOpenGL_ClearDepth(This,depth)	\
    ( (This)->lpVtbl -> ClearDepth(This,depth) ) 

#define IOpenGL_Clear(This,bitField)	\
    ( (This)->lpVtbl -> Clear(This,bitField) ) 

#define IOpenGL_ChooseAndSetPixelFormat(This,deviceContext,pAttributes,pResult)	\
    ( (This)->lpVtbl -> ChooseAndSetPixelFormat(This,deviceContext,pAttributes,pResult) ) 

#define IOpenGL_CreateContext(This,deviceContext,pResult)	\
    ( (This)->lpVtbl -> CreateContext(This,deviceContext,pResult) ) 

#define IOpenGL_DeleteContext(This,renderingContext,pResult)	\
    ( (This)->lpVtbl -> DeleteContext(This,renderingContext,pResult) ) 

#define IOpenGL_MakeCurrent(This,deviceContext,renderingContext,pResult)	\
    ( (This)->lpVtbl -> MakeCurrent(This,deviceContext,renderingContext,pResult) ) 

#define IOpenGL_GetFloatv(This,GLenum,pResult)	\
    ( (This)->lpVtbl -> GetFloatv(This,GLenum,pResult) ) 

#define IOpenGL_Enable(This,glEnum)	\
    ( (This)->lpVtbl -> Enable(This,glEnum) ) 

#define IOpenGL_Disable(This,glEnum)	\
    ( (This)->lpVtbl -> Disable(This,glEnum) ) 

#define IOpenGL_IsEnabled(This,glEnum)	\
    ( (This)->lpVtbl -> IsEnabled(This,glEnum) ) 

#define IOpenGL_ColorMask(This,red,green,blue,alpha)	\
    ( (This)->lpVtbl -> ColorMask(This,red,green,blue,alpha) ) 

#define IOpenGL_DepthFunc(This,v)	\
    ( (This)->lpVtbl -> DepthFunc(This,v) ) 

#define IOpenGL_DepthMask(This,__MIDL__IOpenGL0000)	\
    ( (This)->lpVtbl -> DepthMask(This,__MIDL__IOpenGL0000) ) 

#define IOpenGL_Viewport(This,__MIDL__IOpenGL0001,__MIDL__IOpenGL0002,__MIDL__IOpenGL0003,__MIDL__IOpenGL0004)	\
    ( (This)->lpVtbl -> Viewport(This,__MIDL__IOpenGL0001,__MIDL__IOpenGL0002,__MIDL__IOpenGL0003,__MIDL__IOpenGL0004) ) 

#define IOpenGL_Scissor(This,__MIDL__IOpenGL0005,__MIDL__IOpenGL0006,__MIDL__IOpenGL0007,__MIDL__IOpenGL0008)	\
    ( (This)->lpVtbl -> Scissor(This,__MIDL__IOpenGL0005,__MIDL__IOpenGL0006,__MIDL__IOpenGL0007,__MIDL__IOpenGL0008) ) 

#define IOpenGL_CullFace(This,__MIDL__IOpenGL0009)	\
    ( (This)->lpVtbl -> CullFace(This,__MIDL__IOpenGL0009) ) 

#define IOpenGL_GetIntegerv(This,GLenum,pResult)	\
    ( (This)->lpVtbl -> GetIntegerv(This,GLenum,pResult) ) 

#define IOpenGL_PixelStorei(This,GLenum,value)	\
    ( (This)->lpVtbl -> PixelStorei(This,GLenum,value) ) 

#define IOpenGL_GetString(This,GLenum)	\
    ( (This)->lpVtbl -> GetString(This,GLenum) ) 

#define IOpenGL_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IOpenGL_GetCurrentContext(This,pResult)	\
    ( (This)->lpVtbl -> GetCurrentContext(This,pResult) ) 

#define IOpenGL_DrawBuffer(This,GLenum)	\
    ( (This)->lpVtbl -> DrawBuffer(This,GLenum) ) 

#define IOpenGL_ReadBuffer(This,GLenum)	\
    ( (This)->lpVtbl -> ReadBuffer(This,GLenum) ) 

#define IOpenGL_GetFramebufferAttachmentParameteriv(This,target,attachment,pName,pParams)	\
    ( (This)->lpVtbl -> GetFramebufferAttachmentParameteriv(This,target,attachment,pName,pParams) ) 

#define IOpenGL_PointSize(This,size)	\
    ( (This)->lpVtbl -> PointSize(This,size) ) 

#define IOpenGL_DeleteBuffers(This,countBuffers,pBuffers)	\
    ( (This)->lpVtbl -> DeleteBuffers(This,countBuffers,pBuffers) ) 

#define IOpenGL_BindBuffer(This,target,buffer)	\
    ( (This)->lpVtbl -> BindBuffer(This,target,buffer) ) 

#define IOpenGL_BufferData(This,target,size,pData,usage)	\
    ( (This)->lpVtbl -> BufferData(This,target,size,pData,usage) ) 

#define IOpenGL_GenBuffers(This,count,pBuffers)	\
    ( (This)->lpVtbl -> GenBuffers(This,count,pBuffers) ) 

#define IOpenGL_BindVertexArray(This,array)	\
    ( (This)->lpVtbl -> BindVertexArray(This,array) ) 

#define IOpenGL_DeleteVertexArrays(This,count,pArrays)	\
    ( (This)->lpVtbl -> DeleteVertexArrays(This,count,pArrays) ) 

#define IOpenGL_GenVertexArrays(This,count,pArrays)	\
    ( (This)->lpVtbl -> GenVertexArrays(This,count,pArrays) ) 

#define IOpenGL_EnableVertexAttribArray(This,index)	\
    ( (This)->lpVtbl -> EnableVertexAttribArray(This,index) ) 

#define IOpenGL_VertexAttribPointer(This,index,size,type,normalized,strid,pointer)	\
    ( (This)->lpVtbl -> VertexAttribPointer(This,index,size,type,normalized,strid,pointer) ) 

#define IOpenGL_VertexAttribDivisorARB(This,index,divisor)	\
    ( (This)->lpVtbl -> VertexAttribDivisorARB(This,index,divisor) ) 

#define IOpenGL_DisableVertexAttribArray(This,index)	\
    ( (This)->lpVtbl -> DisableVertexAttribArray(This,index) ) 

#define IOpenGL_ShaderSource(This,shader,count,ppString,pLength)	\
    ( (This)->lpVtbl -> ShaderSource(This,shader,count,ppString,pLength) ) 

#define IOpenGL_CompileShader(This,shader)	\
    ( (This)->lpVtbl -> CompileShader(This,shader) ) 

#define IOpenGL_CreateProgram(This,pResult)	\
    ( (This)->lpVtbl -> CreateProgram(This,pResult) ) 

#define IOpenGL_CreateShader(This,type,pResult)	\
    ( (This)->lpVtbl -> CreateShader(This,type,pResult) ) 

#define IOpenGL_GetShaderiv(This,shader,pname,pParam)	\
    ( (This)->lpVtbl -> GetShaderiv(This,shader,pname,pParam) ) 

#define IOpenGL_GetShaderInfoLog(This,shader,bufSize,pLength,infoLog)	\
    ( (This)->lpVtbl -> GetShaderInfoLog(This,shader,bufSize,pLength,infoLog) ) 

#define IOpenGL_DeleteShader(This,shader)	\
    ( (This)->lpVtbl -> DeleteShader(This,shader) ) 

#define IOpenGL_AttachShader(This,program,shader)	\
    ( (This)->lpVtbl -> AttachShader(This,program,shader) ) 

#define IOpenGL_DetachShader(This,program,shader)	\
    ( (This)->lpVtbl -> DetachShader(This,program,shader) ) 

#define IOpenGL_DrawRangeElements(This,mode,start,end,count,type,indices)	\
    ( (This)->lpVtbl -> DrawRangeElements(This,mode,start,end,count,type,indices) ) 

#define IOpenGL_BindFragDataLocation(This,program,colorNumber,name)	\
    ( (This)->lpVtbl -> BindFragDataLocation(This,program,colorNumber,name) ) 

#define IOpenGL_LinkProgram(This,program)	\
    ( (This)->lpVtbl -> LinkProgram(This,program) ) 

#define IOpenGL_GetProgramiv(This,program,pname,param)	\
    ( (This)->lpVtbl -> GetProgramiv(This,program,pname,param) ) 

#define IOpenGL_GetProgramInfoLog(This,program,bufferSize,oKength,infoLog)	\
    ( (This)->lpVtbl -> GetProgramInfoLog(This,program,bufferSize,oKength,infoLog) ) 

#define IOpenGL_UseProgram(This,program)	\
    ( (This)->lpVtbl -> UseProgram(This,program) ) 

#define IOpenGL_DeleteProgram(This,program)	\
    ( (This)->lpVtbl -> DeleteProgram(This,program) ) 

#define IOpenGL_GetUniformLocation(This,program,name,pResult)	\
    ( (This)->lpVtbl -> GetUniformLocation(This,program,name,pResult) ) 

#define IOpenGL_Uniform1i(This,location,v0)	\
    ( (This)->lpVtbl -> Uniform1i(This,location,v0) ) 

#define IOpenGL_Uniform1iv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform1iv(This,location,count,value) ) 

#define IOpenGL_Uniform1f(This,location,v0)	\
    ( (This)->lpVtbl -> Uniform1f(This,location,v0) ) 

#define IOpenGL_Uniform1fv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform1fv(This,location,count,value) ) 

#define IOpenGL_Uniform2iv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform2iv(This,location,count,value) ) 

#define IOpenGL_Uniform2fv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform2fv(This,location,count,value) ) 

#define IOpenGL_Uniform3fv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform3fv(This,location,count,value) ) 

#define IOpenGL_Uniform4fv(This,location,count,value)	\
    ( (This)->lpVtbl -> Uniform4fv(This,location,count,value) ) 

#define IOpenGL_GetAttribLocation(This,program,name,pResult)	\
    ( (This)->lpVtbl -> GetAttribLocation(This,program,name,pResult) ) 

#define IOpenGL_UniformMatrix4fv(This,location,count,transpose,value)	\
    ( (This)->lpVtbl -> UniformMatrix4fv(This,location,count,transpose,value) ) 

#define IOpenGL_BlendFuncSeparate(This,sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha)	\
    ( (This)->lpVtbl -> BlendFuncSeparate(This,sfactorRGB,dfactorRGB,sfactorAlpha,dfactorAlpha) ) 

#define IOpenGL_BlendEquationSeparate(This,modeRGB,modeAlpha)	\
    ( (This)->lpVtbl -> BlendEquationSeparate(This,modeRGB,modeAlpha) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOpenGL_INTERFACE_DEFINED__ */


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


