

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for DataSet.odl:
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


#ifndef __DataSet_i_h__
#define __DataSet_i_h__

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

#ifndef __IDataSet_FWD_DEFINED__
#define __IDataSet_FWD_DEFINED__
typedef interface IDataSet IDataSet;

#endif 	/* __IDataSet_FWD_DEFINED__ */


#ifndef __IDataSetEvents_FWD_DEFINED__
#define __IDataSetEvents_FWD_DEFINED__
typedef interface IDataSetEvents IDataSetEvents;

#endif 	/* __IDataSetEvents_FWD_DEFINED__ */


#ifndef __DataSet_FWD_DEFINED__
#define __DataSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class DataSet DataSet;
#else
typedef struct DataSet DataSet;
#endif /* __cplusplus */

#endif 	/* __DataSet_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DataSet_LIBRARY_DEFINED__
#define __DataSet_LIBRARY_DEFINED__

/* library DataSet */
/* [version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_DataSet;

#ifndef __IDataSet_INTERFACE_DEFINED__
#define __IDataSet_INTERFACE_DEFINED__

/* interface IDataSet */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IDataSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDA2-55E6-11d3-8365-006008BD5BC3")
    IDataSet : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DataSource( 
            /* [in] */ BSTR dataSource) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataSource( 
            /* [retval][out] */ BSTR *pDataSource) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsFunctionSource( 
            /* [in] */ VARIANT_BOOL __MIDL__IDataSet0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsFunctionSource( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IDataSet0001) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IFunction( 
            /* [in] */ void *pIFunction) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IFunction( 
            /* [retval][out] */ void **ppIFunction) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IPlot( 
            /* [in] */ void *pIPlot) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IPlot( 
            /* [retval][out] */ void **ppIPlot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            void *pvIDataSet_Domain,
            void *pIOpenGLImplementation,
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
            /* external definition not present */ IGProperty *parentPropertyTFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IDataSet0002,
                ULONG_PTR __MIDL__IDataSet0003),
            /* [in] */ void *pArg,
            ULONG_PTR cookie) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_OnChangeCallback( 
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IDataSet0005,
                ULONG_PTR __MIDL__IDataSet0006),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR cookie) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_maxX( 
            /* [in] */ double maxVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_maxX( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_maxY( 
            /* [in] */ double maxVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_maxY( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_maxZ( 
            /* [in] */ double maxVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_maxZ( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_minX( 
            /* [in] */ double minVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_minX( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_minY( 
            /* [in] */ double minVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_minY( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_minZ( 
            /* [in] */ double minVal) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_minZ( 
            /* [retval][out] */ double *getVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_XFloor( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0008) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_XCeiling( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0009) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YFloor( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0010) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YCeiling( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0011) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ZFloor( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0012) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ZCeiling( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0013) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_top( 
            /* [retval][out] */ struct /* external definition not present */ DataList **getTop) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_bottom( 
            /* [retval][out] */ struct /* external definition not present */ DataList **getBottom) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_countPoints( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual enum /* external definition not present */ DataArity STDMETHODCALLTYPE DataArity( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE peek( 
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE peekInt( 
            /* [in] */ int item,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE peekGDI( 
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get( 
            struct /* external definition not present */ DataList *afterItem,
            struct /* external definition not present */ DataPoint *data,
            struct /* external definition not present */ DataList **nextItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE set( 
            struct /* external definition not present */ DataList *item,
            struct /* external definition not present */ DataPoint *data) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE pushString( 
            char *valueString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE pushDataPoint( 
            struct /* external definition not present */ DataPoint *point,
            /* [defaultvalue][optional] */ void ( STDMETHODCALLTYPE *pAction )( 
                void *__MIDL__IDataSet0014,
                void *__MIDL__IDataSet0015) = 0,
            /* [defaultvalue][optional] */ void *pArg1 = 0,
            /* [defaultvalue][optional] */ void *pArg2 = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE popDataPoint( 
            struct /* external definition not present */ DataPoint *point) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReSet( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE insert( 
            struct /* external definition not present */ DataList *insertBefore,
            struct /* external definition not present */ DataPoint *data) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE addXYZ( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE addMovePoint( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE makeUnitSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLimits( 
            struct /* external definition not present */ DataPoint *__MIDL__IDataSet0017) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDomain( 
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDomainXYZ( 
            double *xmin,
            double *ymin,
            double *zmin,
            double *xmax,
            double *ymax,
            double *zmax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDomain( 
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IncludeDomain( 
            IDataSet *pTheOtherDataSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsIncludedDomain( 
            /* [in] */ IDataSet *pOtherDataSet,
            /* [retval][out] */ boolean *__MIDL__IDataSet0018) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveIncludedDomain( 
            IDataSet *pTheOtherDataSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorRGB( 
            double *red,
            double *green,
            double *blue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFirstNaturalPoint( 
            struct /* external definition not present */ DataPoint *pPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scale( 
            struct /* external definition not present */ DataPoint *scaleVector) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Translate( 
            struct /* external definition not present */ DataPoint *translate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateGDI( 
            POINT *ptGDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotate( 
            char axis,
            double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RotateVector( 
            double angle,
            struct /* external definition not present */ DataPoint *v) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            struct /* external definition not present */ DataPoint *toPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shear( 
            char axis,
            double ratio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateBoundingBox( 
            IDataSet *pIDataSetBoundingBox) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateGDICoordinates( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConvertGDIToWorld( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveAsGDICoordinates( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushExtents( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PopExtents( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Evaluate( 
            BSTR expression,
            double *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDomainGDI( 
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IDataSet0019) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseGSGraphicServices( 
            void *__MIDL__IDataSet0020) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataSetVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDataSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, put_Name)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDataSet * This,
            /* [in] */ BSTR name);
        
        DECLSPEC_XFGVIRT(IDataSet, get_Name)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDataSet * This,
            /* [retval][out] */ BSTR *pName);
        
        DECLSPEC_XFGVIRT(IDataSet, put_DataSource)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            IDataSet * This,
            /* [in] */ BSTR dataSource);
        
        DECLSPEC_XFGVIRT(IDataSet, get_DataSource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            IDataSet * This,
            /* [retval][out] */ BSTR *pDataSource);
        
        DECLSPEC_XFGVIRT(IDataSet, put_IsFunctionSource)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFunctionSource )( 
            IDataSet * This,
            /* [in] */ VARIANT_BOOL __MIDL__IDataSet0000);
        
        DECLSPEC_XFGVIRT(IDataSet, get_IsFunctionSource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFunctionSource )( 
            IDataSet * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IDataSet0001);
        
        DECLSPEC_XFGVIRT(IDataSet, put_IFunction)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IFunction )( 
            IDataSet * This,
            /* [in] */ void *pIFunction);
        
        DECLSPEC_XFGVIRT(IDataSet, get_IFunction)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IFunction )( 
            IDataSet * This,
            /* [retval][out] */ void **ppIFunction);
        
        DECLSPEC_XFGVIRT(IDataSet, put_IPlot)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IPlot )( 
            IDataSet * This,
            /* [in] */ void *pIPlot);
        
        DECLSPEC_XFGVIRT(IDataSet, get_IPlot)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IPlot )( 
            IDataSet * This,
            /* [retval][out] */ void **ppIPlot);
        
        DECLSPEC_XFGVIRT(IDataSet, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDataSet * This,
            void *pvIDataSet_Domain,
            void *pIOpenGLImplementation,
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
            /* external definition not present */ IGProperty *parentPropertyTFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IDataSet0002,
                ULONG_PTR __MIDL__IDataSet0003),
            /* [in] */ void *pArg,
            ULONG_PTR cookie);
        
        DECLSPEC_XFGVIRT(IDataSet, put_OnChangeCallback)
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_OnChangeCallback )( 
            IDataSet * This,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IDataSet0005,
                ULONG_PTR __MIDL__IDataSet0006),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR cookie);
        
        DECLSPEC_XFGVIRT(IDataSet, put_maxX)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxX )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_maxX)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxX )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_maxY)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxY )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_maxY)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxY )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_maxZ)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxZ )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_maxZ)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxZ )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_minX)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minX )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_minX)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minX )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_minY)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minY )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_minY)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minY )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_minZ)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minZ )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        DECLSPEC_XFGVIRT(IDataSet, get_minZ)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minZ )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        DECLSPEC_XFGVIRT(IDataSet, put_XFloor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_XFloor )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0008);
        
        DECLSPEC_XFGVIRT(IDataSet, put_XCeiling)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_XCeiling )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0009);
        
        DECLSPEC_XFGVIRT(IDataSet, put_YFloor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YFloor )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0010);
        
        DECLSPEC_XFGVIRT(IDataSet, put_YCeiling)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YCeiling )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0011);
        
        DECLSPEC_XFGVIRT(IDataSet, put_ZFloor)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZFloor )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0012);
        
        DECLSPEC_XFGVIRT(IDataSet, put_ZCeiling)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ZCeiling )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0013);
        
        DECLSPEC_XFGVIRT(IDataSet, get_top)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_top )( 
            IDataSet * This,
            /* [retval][out] */ struct /* external definition not present */ DataList **getTop);
        
        DECLSPEC_XFGVIRT(IDataSet, get_bottom)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_bottom )( 
            IDataSet * This,
            /* [retval][out] */ struct /* external definition not present */ DataList **getBottom);
        
        DECLSPEC_XFGVIRT(IDataSet, get_countPoints)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_countPoints )( 
            IDataSet * This,
            /* [retval][out] */ long *pCount);
        
        DECLSPEC_XFGVIRT(IDataSet, DataArity)
        enum /* external definition not present */ DataArity ( STDMETHODCALLTYPE *DataArity )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, peek)
        HRESULT ( STDMETHODCALLTYPE *peek )( 
            IDataSet * This,
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        DECLSPEC_XFGVIRT(IDataSet, peekInt)
        HRESULT ( STDMETHODCALLTYPE *peekInt )( 
            IDataSet * This,
            /* [in] */ int item,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        DECLSPEC_XFGVIRT(IDataSet, peekGDI)
        HRESULT ( STDMETHODCALLTYPE *peekGDI )( 
            IDataSet * This,
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        DECLSPEC_XFGVIRT(IDataSet, get)
        HRESULT ( STDMETHODCALLTYPE *get )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *afterItem,
            struct /* external definition not present */ DataPoint *data,
            struct /* external definition not present */ DataList **nextItem);
        
        DECLSPEC_XFGVIRT(IDataSet, set)
        HRESULT ( STDMETHODCALLTYPE *set )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *item,
            struct /* external definition not present */ DataPoint *data);
        
        DECLSPEC_XFGVIRT(IDataSet, pushString)
        HRESULT ( STDMETHODCALLTYPE *pushString )( 
            IDataSet * This,
            char *valueString);
        
        DECLSPEC_XFGVIRT(IDataSet, pushDataPoint)
        HRESULT ( STDMETHODCALLTYPE *pushDataPoint )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *point,
            /* [defaultvalue][optional] */ void ( STDMETHODCALLTYPE *pAction )( 
                void *__MIDL__IDataSet0014,
                void *__MIDL__IDataSet0015),
            /* [defaultvalue][optional] */ void *pArg1,
            /* [defaultvalue][optional] */ void *pArg2);
        
        DECLSPEC_XFGVIRT(IDataSet, popDataPoint)
        HRESULT ( STDMETHODCALLTYPE *popDataPoint )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *point);
        
        DECLSPEC_XFGVIRT(IDataSet, ReSet)
        HRESULT ( STDMETHODCALLTYPE *ReSet )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, insert)
        HRESULT ( STDMETHODCALLTYPE *insert )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *insertBefore,
            struct /* external definition not present */ DataPoint *data);
        
        DECLSPEC_XFGVIRT(IDataSet, addXYZ)
        HRESULT ( STDMETHODCALLTYPE *addXYZ )( 
            IDataSet * This,
            double *x,
            double *y,
            double *z);
        
        DECLSPEC_XFGVIRT(IDataSet, addMovePoint)
        HRESULT ( STDMETHODCALLTYPE *addMovePoint )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, makeUnitSize)
        HRESULT ( STDMETHODCALLTYPE *makeUnitSize )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, ResetLimits)
        HRESULT ( STDMETHODCALLTYPE *ResetLimits )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *__MIDL__IDataSet0017);
        
        DECLSPEC_XFGVIRT(IDataSet, SetDomain)
        HRESULT ( STDMETHODCALLTYPE *SetDomain )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        DECLSPEC_XFGVIRT(IDataSet, SetDomainXYZ)
        HRESULT ( STDMETHODCALLTYPE *SetDomainXYZ )( 
            IDataSet * This,
            double *xmin,
            double *ymin,
            double *zmin,
            double *xmax,
            double *ymax,
            double *zmax);
        
        DECLSPEC_XFGVIRT(IDataSet, GetDomain)
        HRESULT ( STDMETHODCALLTYPE *GetDomain )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        DECLSPEC_XFGVIRT(IDataSet, IncludeDomain)
        HRESULT ( STDMETHODCALLTYPE *IncludeDomain )( 
            IDataSet * This,
            IDataSet *pTheOtherDataSet);
        
        DECLSPEC_XFGVIRT(IDataSet, get_IsIncludedDomain)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIncludedDomain )( 
            IDataSet * This,
            /* [in] */ IDataSet *pOtherDataSet,
            /* [retval][out] */ boolean *__MIDL__IDataSet0018);
        
        DECLSPEC_XFGVIRT(IDataSet, RemoveIncludedDomain)
        HRESULT ( STDMETHODCALLTYPE *RemoveIncludedDomain )( 
            IDataSet * This,
            IDataSet *pTheOtherDataSet);
        
        DECLSPEC_XFGVIRT(IDataSet, SetColorRGB)
        HRESULT ( STDMETHODCALLTYPE *SetColorRGB )( 
            IDataSet * This,
            double *red,
            double *green,
            double *blue);
        
        DECLSPEC_XFGVIRT(IDataSet, GetFirstNaturalPoint)
        HRESULT ( STDMETHODCALLTYPE *GetFirstNaturalPoint )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *pPoint);
        
        DECLSPEC_XFGVIRT(IDataSet, Scale)
        HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *scaleVector);
        
        DECLSPEC_XFGVIRT(IDataSet, Translate)
        HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *translate);
        
        DECLSPEC_XFGVIRT(IDataSet, TranslateGDI)
        HRESULT ( STDMETHODCALLTYPE *TranslateGDI )( 
            IDataSet * This,
            POINT *ptGDI);
        
        DECLSPEC_XFGVIRT(IDataSet, Rotate)
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IDataSet * This,
            char axis,
            double degrees);
        
        DECLSPEC_XFGVIRT(IDataSet, RotateVector)
        HRESULT ( STDMETHODCALLTYPE *RotateVector )( 
            IDataSet * This,
            double angle,
            struct /* external definition not present */ DataPoint *v);
        
        DECLSPEC_XFGVIRT(IDataSet, Move)
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *toPoint);
        
        DECLSPEC_XFGVIRT(IDataSet, Shear)
        HRESULT ( STDMETHODCALLTYPE *Shear )( 
            IDataSet * This,
            char axis,
            double ratio);
        
        DECLSPEC_XFGVIRT(IDataSet, GenerateBoundingBox)
        HRESULT ( STDMETHODCALLTYPE *GenerateBoundingBox )( 
            IDataSet * This,
            IDataSet *pIDataSetBoundingBox);
        
        DECLSPEC_XFGVIRT(IDataSet, GenerateGDICoordinates)
        HRESULT ( STDMETHODCALLTYPE *GenerateGDICoordinates )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, ConvertGDIToWorld)
        HRESULT ( STDMETHODCALLTYPE *ConvertGDIToWorld )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, SaveAsGDICoordinates)
        HRESULT ( STDMETHODCALLTYPE *SaveAsGDICoordinates )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, PushExtents)
        HRESULT ( STDMETHODCALLTYPE *PushExtents )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, PopExtents)
        HRESULT ( STDMETHODCALLTYPE *PopExtents )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, Evaluate)
        HRESULT ( STDMETHODCALLTYPE *Evaluate )( 
            IDataSet * This,
            BSTR expression,
            double *result);
        
        DECLSPEC_XFGVIRT(IDataSet, GetDomainGDI)
        HRESULT ( STDMETHODCALLTYPE *GetDomainGDI )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        DECLSPEC_XFGVIRT(IDataSet, Start)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IDataSet * This);
        
        DECLSPEC_XFGVIRT(IDataSet, AdviseGSystemStatusBar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IDataSet * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IDataSet0019);
        
        DECLSPEC_XFGVIRT(IDataSet, AdviseGSGraphicServices)
        HRESULT ( STDMETHODCALLTYPE *AdviseGSGraphicServices )( 
            IDataSet * This,
            void *__MIDL__IDataSet0020);
        
        END_INTERFACE
    } IDataSetVtbl;

    interface IDataSet
    {
        CONST_VTBL struct IDataSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataSet_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IDataSet_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IDataSet_put_DataSource(This,dataSource)	\
    ( (This)->lpVtbl -> put_DataSource(This,dataSource) ) 

#define IDataSet_get_DataSource(This,pDataSource)	\
    ( (This)->lpVtbl -> get_DataSource(This,pDataSource) ) 

#define IDataSet_put_IsFunctionSource(This,__MIDL__IDataSet0000)	\
    ( (This)->lpVtbl -> put_IsFunctionSource(This,__MIDL__IDataSet0000) ) 

#define IDataSet_get_IsFunctionSource(This,__MIDL__IDataSet0001)	\
    ( (This)->lpVtbl -> get_IsFunctionSource(This,__MIDL__IDataSet0001) ) 

#define IDataSet_put_IFunction(This,pIFunction)	\
    ( (This)->lpVtbl -> put_IFunction(This,pIFunction) ) 

#define IDataSet_get_IFunction(This,ppIFunction)	\
    ( (This)->lpVtbl -> get_IFunction(This,ppIFunction) ) 

#define IDataSet_put_IPlot(This,pIPlot)	\
    ( (This)->lpVtbl -> put_IPlot(This,pIPlot) ) 

#define IDataSet_get_IPlot(This,ppIPlot)	\
    ( (This)->lpVtbl -> get_IPlot(This,ppIPlot) ) 

#define IDataSet_Initialize(This,pvIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyTFloor,parentPropertyZCeiling,pCallback,pArg,cookie)	\
    ( (This)->lpVtbl -> Initialize(This,pvIDataSet_Domain,pIOpenGLImplementation,pIEvaluator,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyTFloor,parentPropertyZCeiling,pCallback,pArg,cookie) ) 

#define IDataSet_put_OnChangeCallback(This,pCallback,pArg,cookie)	\
    ( (This)->lpVtbl -> put_OnChangeCallback(This,pCallback,pArg,cookie) ) 

#define IDataSet_put_maxX(This,maxVal)	\
    ( (This)->lpVtbl -> put_maxX(This,maxVal) ) 

#define IDataSet_get_maxX(This,getVal)	\
    ( (This)->lpVtbl -> get_maxX(This,getVal) ) 

#define IDataSet_put_maxY(This,maxVal)	\
    ( (This)->lpVtbl -> put_maxY(This,maxVal) ) 

#define IDataSet_get_maxY(This,getVal)	\
    ( (This)->lpVtbl -> get_maxY(This,getVal) ) 

#define IDataSet_put_maxZ(This,maxVal)	\
    ( (This)->lpVtbl -> put_maxZ(This,maxVal) ) 

#define IDataSet_get_maxZ(This,getVal)	\
    ( (This)->lpVtbl -> get_maxZ(This,getVal) ) 

#define IDataSet_put_minX(This,minVal)	\
    ( (This)->lpVtbl -> put_minX(This,minVal) ) 

#define IDataSet_get_minX(This,getVal)	\
    ( (This)->lpVtbl -> get_minX(This,getVal) ) 

#define IDataSet_put_minY(This,minVal)	\
    ( (This)->lpVtbl -> put_minY(This,minVal) ) 

#define IDataSet_get_minY(This,getVal)	\
    ( (This)->lpVtbl -> get_minY(This,getVal) ) 

#define IDataSet_put_minZ(This,minVal)	\
    ( (This)->lpVtbl -> put_minZ(This,minVal) ) 

#define IDataSet_get_minZ(This,getVal)	\
    ( (This)->lpVtbl -> get_minZ(This,getVal) ) 

#define IDataSet_put_XFloor(This,__MIDL__IDataSet0008)	\
    ( (This)->lpVtbl -> put_XFloor(This,__MIDL__IDataSet0008) ) 

#define IDataSet_put_XCeiling(This,__MIDL__IDataSet0009)	\
    ( (This)->lpVtbl -> put_XCeiling(This,__MIDL__IDataSet0009) ) 

#define IDataSet_put_YFloor(This,__MIDL__IDataSet0010)	\
    ( (This)->lpVtbl -> put_YFloor(This,__MIDL__IDataSet0010) ) 

#define IDataSet_put_YCeiling(This,__MIDL__IDataSet0011)	\
    ( (This)->lpVtbl -> put_YCeiling(This,__MIDL__IDataSet0011) ) 

#define IDataSet_put_ZFloor(This,__MIDL__IDataSet0012)	\
    ( (This)->lpVtbl -> put_ZFloor(This,__MIDL__IDataSet0012) ) 

#define IDataSet_put_ZCeiling(This,__MIDL__IDataSet0013)	\
    ( (This)->lpVtbl -> put_ZCeiling(This,__MIDL__IDataSet0013) ) 

#define IDataSet_get_top(This,getTop)	\
    ( (This)->lpVtbl -> get_top(This,getTop) ) 

#define IDataSet_get_bottom(This,getBottom)	\
    ( (This)->lpVtbl -> get_bottom(This,getBottom) ) 

#define IDataSet_get_countPoints(This,pCount)	\
    ( (This)->lpVtbl -> get_countPoints(This,pCount) ) 

#define IDataSet_DataArity(This)	\
    ( (This)->lpVtbl -> DataArity(This) ) 

#define IDataSet_peek(This,afterItem,getItem)	\
    ( (This)->lpVtbl -> peek(This,afterItem,getItem) ) 

#define IDataSet_peekInt(This,item,getItem)	\
    ( (This)->lpVtbl -> peekInt(This,item,getItem) ) 

#define IDataSet_peekGDI(This,afterItem,getItem)	\
    ( (This)->lpVtbl -> peekGDI(This,afterItem,getItem) ) 

#define IDataSet_get(This,afterItem,data,nextItem)	\
    ( (This)->lpVtbl -> get(This,afterItem,data,nextItem) ) 

#define IDataSet_set(This,item,data)	\
    ( (This)->lpVtbl -> set(This,item,data) ) 

#define IDataSet_pushString(This,valueString)	\
    ( (This)->lpVtbl -> pushString(This,valueString) ) 

#define IDataSet_pushDataPoint(This,point,pAction,pArg1,pArg2)	\
    ( (This)->lpVtbl -> pushDataPoint(This,point,pAction,pArg1,pArg2) ) 

#define IDataSet_popDataPoint(This,point)	\
    ( (This)->lpVtbl -> popDataPoint(This,point) ) 

#define IDataSet_ReSet(This)	\
    ( (This)->lpVtbl -> ReSet(This) ) 

#define IDataSet_insert(This,insertBefore,data)	\
    ( (This)->lpVtbl -> insert(This,insertBefore,data) ) 

#define IDataSet_addXYZ(This,x,y,z)	\
    ( (This)->lpVtbl -> addXYZ(This,x,y,z) ) 

#define IDataSet_addMovePoint(This)	\
    ( (This)->lpVtbl -> addMovePoint(This) ) 

#define IDataSet_makeUnitSize(This)	\
    ( (This)->lpVtbl -> makeUnitSize(This) ) 

#define IDataSet_ResetLimits(This,__MIDL__IDataSet0017)	\
    ( (This)->lpVtbl -> ResetLimits(This,__MIDL__IDataSet0017) ) 

#define IDataSet_SetDomain(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> SetDomain(This,minPoint,maxPoint) ) 

#define IDataSet_SetDomainXYZ(This,xmin,ymin,zmin,xmax,ymax,zmax)	\
    ( (This)->lpVtbl -> SetDomainXYZ(This,xmin,ymin,zmin,xmax,ymax,zmax) ) 

#define IDataSet_GetDomain(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> GetDomain(This,minPoint,maxPoint) ) 

#define IDataSet_IncludeDomain(This,pTheOtherDataSet)	\
    ( (This)->lpVtbl -> IncludeDomain(This,pTheOtherDataSet) ) 

#define IDataSet_get_IsIncludedDomain(This,pOtherDataSet,__MIDL__IDataSet0018)	\
    ( (This)->lpVtbl -> get_IsIncludedDomain(This,pOtherDataSet,__MIDL__IDataSet0018) ) 

#define IDataSet_RemoveIncludedDomain(This,pTheOtherDataSet)	\
    ( (This)->lpVtbl -> RemoveIncludedDomain(This,pTheOtherDataSet) ) 

#define IDataSet_SetColorRGB(This,red,green,blue)	\
    ( (This)->lpVtbl -> SetColorRGB(This,red,green,blue) ) 

#define IDataSet_GetFirstNaturalPoint(This,pPoint)	\
    ( (This)->lpVtbl -> GetFirstNaturalPoint(This,pPoint) ) 

#define IDataSet_Scale(This,scaleVector)	\
    ( (This)->lpVtbl -> Scale(This,scaleVector) ) 

#define IDataSet_Translate(This,translate)	\
    ( (This)->lpVtbl -> Translate(This,translate) ) 

#define IDataSet_TranslateGDI(This,ptGDI)	\
    ( (This)->lpVtbl -> TranslateGDI(This,ptGDI) ) 

#define IDataSet_Rotate(This,axis,degrees)	\
    ( (This)->lpVtbl -> Rotate(This,axis,degrees) ) 

#define IDataSet_RotateVector(This,angle,v)	\
    ( (This)->lpVtbl -> RotateVector(This,angle,v) ) 

#define IDataSet_Move(This,toPoint)	\
    ( (This)->lpVtbl -> Move(This,toPoint) ) 

#define IDataSet_Shear(This,axis,ratio)	\
    ( (This)->lpVtbl -> Shear(This,axis,ratio) ) 

#define IDataSet_GenerateBoundingBox(This,pIDataSetBoundingBox)	\
    ( (This)->lpVtbl -> GenerateBoundingBox(This,pIDataSetBoundingBox) ) 

#define IDataSet_GenerateGDICoordinates(This)	\
    ( (This)->lpVtbl -> GenerateGDICoordinates(This) ) 

#define IDataSet_ConvertGDIToWorld(This)	\
    ( (This)->lpVtbl -> ConvertGDIToWorld(This) ) 

#define IDataSet_SaveAsGDICoordinates(This)	\
    ( (This)->lpVtbl -> SaveAsGDICoordinates(This) ) 

#define IDataSet_PushExtents(This)	\
    ( (This)->lpVtbl -> PushExtents(This) ) 

#define IDataSet_PopExtents(This)	\
    ( (This)->lpVtbl -> PopExtents(This) ) 

#define IDataSet_Evaluate(This,expression,result)	\
    ( (This)->lpVtbl -> Evaluate(This,expression,result) ) 

#define IDataSet_GetDomainGDI(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> GetDomainGDI(This,minPoint,maxPoint) ) 

#define IDataSet_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IDataSet_AdviseGSystemStatusBar(This,__MIDL__IDataSet0019)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IDataSet0019) ) 

#define IDataSet_AdviseGSGraphicServices(This,__MIDL__IDataSet0020)	\
    ( (This)->lpVtbl -> AdviseGSGraphicServices(This,__MIDL__IDataSet0020) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataSet_INTERFACE_DEFINED__ */


#ifndef __IDataSetEvents_INTERFACE_DEFINED__
#define __IDataSetEvents_INTERFACE_DEFINED__

/* interface IDataSetEvents */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IDataSetEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDA3-55E6-11d3-8365-006008BD5BC3")
    IDataSetEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Started( 
            /* [in] */ long cntExpectedResults) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TakeValues( 
            /* [in] */ long iterationNo,
            /* [in] */ long valueCount,
            /* [in] */ SAFEARRAY * *pNamesArrayOfStrings,
            /* [in] */ SAFEARRAY * *pValuesArrayOfDoubles) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Finished( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataSetEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDataSetEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDataSetEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDataSetEvents * This);
        
        DECLSPEC_XFGVIRT(IDataSetEvents, Clear)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IDataSetEvents * This);
        
        DECLSPEC_XFGVIRT(IDataSetEvents, Started)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Started )( 
            IDataSetEvents * This,
            /* [in] */ long cntExpectedResults);
        
        DECLSPEC_XFGVIRT(IDataSetEvents, TakeValues)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TakeValues )( 
            IDataSetEvents * This,
            /* [in] */ long iterationNo,
            /* [in] */ long valueCount,
            /* [in] */ SAFEARRAY * *pNamesArrayOfStrings,
            /* [in] */ SAFEARRAY * *pValuesArrayOfDoubles);
        
        DECLSPEC_XFGVIRT(IDataSetEvents, Finished)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Finished )( 
            IDataSetEvents * This);
        
        END_INTERFACE
    } IDataSetEventsVtbl;

    interface IDataSetEvents
    {
        CONST_VTBL struct IDataSetEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataSetEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataSetEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataSetEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataSetEvents_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDataSetEvents_Started(This,cntExpectedResults)	\
    ( (This)->lpVtbl -> Started(This,cntExpectedResults) ) 

#define IDataSetEvents_TakeValues(This,iterationNo,valueCount,pNamesArrayOfStrings,pValuesArrayOfDoubles)	\
    ( (This)->lpVtbl -> TakeValues(This,iterationNo,valueCount,pNamesArrayOfStrings,pValuesArrayOfDoubles) ) 

#define IDataSetEvents_Finished(This)	\
    ( (This)->lpVtbl -> Finished(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataSetEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DataSet;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFDA4-55E6-11d3-8365-006008BD5BC3")
DataSet;
#endif
#endif /* __DataSet_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


