

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 22 12:32:16 2017
 */
/* Compiler settings for DataSet.odl:
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


#ifndef __DataSet_i_h__
#define __DataSet_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
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
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_floor( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0000) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ceiling( 
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_top( 
            /* [retval][out] */ struct /* external definition not present */ DataList **getTop) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_bottom( 
            /* [retval][out] */ struct /* external definition not present */ DataList **getBottom) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_countPoints( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DataArity( 
            /* [in] */ enum /* external definition not present */ DataArity __MIDL__IDataSet0002) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DataArity( 
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IDataSet0003) = 0;
        
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
            struct /* external definition not present */ DataPoint *point) = 0;
        
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
            struct /* external definition not present */ DataPoint *__MIDL__IDataSet0004) = 0;
        
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
            /* [retval][out] */ boolean *__MIDL__IDataSet0005) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveIncludedDomain( 
            IDataSet *pTheOtherDataSet) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetColorRGB( 
            double *red,
            double *green,
            double *blue) = 0;
        
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
        
        virtual HRESULT STDMETHODCALLTYPE GenerateGDICoordinates( 
            IUnknown *castablePtrToIOpenGLImplementation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PushExtents( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PopExtents( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Evaluate( 
            BSTR expression,
            double *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDomainGDI( 
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDataSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDataSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDataSet * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDataSet * This,
            /* [in] */ BSTR name);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDataSet * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataSource )( 
            IDataSet * This,
            /* [in] */ BSTR dataSource);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSource )( 
            IDataSet * This,
            /* [retval][out] */ BSTR *pDataSource);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxX )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxX )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxY )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxY )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxZ )( 
            IDataSet * This,
            /* [in] */ double maxVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxZ )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minX )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minX )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minY )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minY )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_minZ )( 
            IDataSet * This,
            /* [in] */ double minVal);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_minZ )( 
            IDataSet * This,
            /* [retval][out] */ double *getVal);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_floor )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ceiling )( 
            IDataSet * This,
            /* [in] */ /* external definition not present */ IGProperty *__MIDL__IDataSet0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_top )( 
            IDataSet * This,
            /* [retval][out] */ struct /* external definition not present */ DataList **getTop);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_bottom )( 
            IDataSet * This,
            /* [retval][out] */ struct /* external definition not present */ DataList **getBottom);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_countPoints )( 
            IDataSet * This,
            /* [retval][out] */ long *pCount);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DataArity )( 
            IDataSet * This,
            /* [in] */ enum /* external definition not present */ DataArity __MIDL__IDataSet0002);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataArity )( 
            IDataSet * This,
            /* [retval][out] */ enum /* external definition not present */ DataArity *__MIDL__IDataSet0003);
        
        HRESULT ( STDMETHODCALLTYPE *peek )( 
            IDataSet * This,
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        HRESULT ( STDMETHODCALLTYPE *peekInt )( 
            IDataSet * This,
            /* [in] */ int item,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        HRESULT ( STDMETHODCALLTYPE *peekGDI )( 
            IDataSet * This,
            /* [in] */ struct /* external definition not present */ DataList *afterItem,
            /* [retval][out] */ struct /* external definition not present */ DataList **getItem);
        
        HRESULT ( STDMETHODCALLTYPE *get )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *afterItem,
            struct /* external definition not present */ DataPoint *data,
            struct /* external definition not present */ DataList **nextItem);
        
        HRESULT ( STDMETHODCALLTYPE *set )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *item,
            struct /* external definition not present */ DataPoint *data);
        
        HRESULT ( STDMETHODCALLTYPE *pushString )( 
            IDataSet * This,
            char *valueString);
        
        HRESULT ( STDMETHODCALLTYPE *pushDataPoint )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *point);
        
        HRESULT ( STDMETHODCALLTYPE *popDataPoint )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *point);
        
        HRESULT ( STDMETHODCALLTYPE *ReSet )( 
            IDataSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *insert )( 
            IDataSet * This,
            struct /* external definition not present */ DataList *insertBefore,
            struct /* external definition not present */ DataPoint *data);
        
        HRESULT ( STDMETHODCALLTYPE *addXYZ )( 
            IDataSet * This,
            double *x,
            double *y,
            double *z);
        
        HRESULT ( STDMETHODCALLTYPE *addMovePoint )( 
            IDataSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *makeUnitSize )( 
            IDataSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLimits )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *__MIDL__IDataSet0004);
        
        HRESULT ( STDMETHODCALLTYPE *SetDomain )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        HRESULT ( STDMETHODCALLTYPE *SetDomainXYZ )( 
            IDataSet * This,
            double *xmin,
            double *ymin,
            double *zmin,
            double *xmax,
            double *ymax,
            double *zmax);
        
        HRESULT ( STDMETHODCALLTYPE *GetDomain )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
        HRESULT ( STDMETHODCALLTYPE *IncludeDomain )( 
            IDataSet * This,
            IDataSet *pTheOtherDataSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIncludedDomain )( 
            IDataSet * This,
            /* [in] */ IDataSet *pOtherDataSet,
            /* [retval][out] */ boolean *__MIDL__IDataSet0005);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveIncludedDomain )( 
            IDataSet * This,
            IDataSet *pTheOtherDataSet);
        
        HRESULT ( STDMETHODCALLTYPE *SetColorRGB )( 
            IDataSet * This,
            double *red,
            double *green,
            double *blue);
        
        HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *scaleVector);
        
        HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *translate);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateGDI )( 
            IDataSet * This,
            POINT *ptGDI);
        
        HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IDataSet * This,
            char axis,
            double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *RotateVector )( 
            IDataSet * This,
            double angle,
            struct /* external definition not present */ DataPoint *v);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *toPoint);
        
        HRESULT ( STDMETHODCALLTYPE *Shear )( 
            IDataSet * This,
            char axis,
            double ratio);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateBoundingBox )( 
            IDataSet * This,
            IDataSet *pIDataSetBoundingBox);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateGDICoordinates )( 
            IDataSet * This,
            IUnknown *castablePtrToIOpenGLImplementation);
        
        HRESULT ( STDMETHODCALLTYPE *PushExtents )( 
            IDataSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *PopExtents )( 
            IDataSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *Evaluate )( 
            IDataSet * This,
            BSTR expression,
            double *result);
        
        HRESULT ( STDMETHODCALLTYPE *GetDomainGDI )( 
            IDataSet * This,
            struct /* external definition not present */ DataPoint *minPoint,
            struct /* external definition not present */ DataPoint *maxPoint);
        
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

#define IDataSet_put_floor(This,__MIDL__IDataSet0000)	\
    ( (This)->lpVtbl -> put_floor(This,__MIDL__IDataSet0000) ) 

#define IDataSet_put_ceiling(This,__MIDL__IDataSet0001)	\
    ( (This)->lpVtbl -> put_ceiling(This,__MIDL__IDataSet0001) ) 

#define IDataSet_get_top(This,getTop)	\
    ( (This)->lpVtbl -> get_top(This,getTop) ) 

#define IDataSet_get_bottom(This,getBottom)	\
    ( (This)->lpVtbl -> get_bottom(This,getBottom) ) 

#define IDataSet_get_countPoints(This,pCount)	\
    ( (This)->lpVtbl -> get_countPoints(This,pCount) ) 

#define IDataSet_put_DataArity(This,__MIDL__IDataSet0002)	\
    ( (This)->lpVtbl -> put_DataArity(This,__MIDL__IDataSet0002) ) 

#define IDataSet_get_DataArity(This,__MIDL__IDataSet0003)	\
    ( (This)->lpVtbl -> get_DataArity(This,__MIDL__IDataSet0003) ) 

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

#define IDataSet_pushDataPoint(This,point)	\
    ( (This)->lpVtbl -> pushDataPoint(This,point) ) 

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

#define IDataSet_ResetLimits(This,__MIDL__IDataSet0004)	\
    ( (This)->lpVtbl -> ResetLimits(This,__MIDL__IDataSet0004) ) 

#define IDataSet_SetDomain(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> SetDomain(This,minPoint,maxPoint) ) 

#define IDataSet_SetDomainXYZ(This,xmin,ymin,zmin,xmax,ymax,zmax)	\
    ( (This)->lpVtbl -> SetDomainXYZ(This,xmin,ymin,zmin,xmax,ymax,zmax) ) 

#define IDataSet_GetDomain(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> GetDomain(This,minPoint,maxPoint) ) 

#define IDataSet_IncludeDomain(This,pTheOtherDataSet)	\
    ( (This)->lpVtbl -> IncludeDomain(This,pTheOtherDataSet) ) 

#define IDataSet_get_IsIncludedDomain(This,pOtherDataSet,__MIDL__IDataSet0005)	\
    ( (This)->lpVtbl -> get_IsIncludedDomain(This,pOtherDataSet,__MIDL__IDataSet0005) ) 

#define IDataSet_RemoveIncludedDomain(This,pTheOtherDataSet)	\
    ( (This)->lpVtbl -> RemoveIncludedDomain(This,pTheOtherDataSet) ) 

#define IDataSet_SetColorRGB(This,red,green,blue)	\
    ( (This)->lpVtbl -> SetColorRGB(This,red,green,blue) ) 

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

#define IDataSet_GenerateGDICoordinates(This,castablePtrToIOpenGLImplementation)	\
    ( (This)->lpVtbl -> GenerateGDICoordinates(This,castablePtrToIOpenGLImplementation) ) 

#define IDataSet_PushExtents(This)	\
    ( (This)->lpVtbl -> PushExtents(This) ) 

#define IDataSet_PopExtents(This)	\
    ( (This)->lpVtbl -> PopExtents(This) ) 

#define IDataSet_Evaluate(This,expression,result)	\
    ( (This)->lpVtbl -> Evaluate(This,expression,result) ) 

#define IDataSet_GetDomainGDI(This,minPoint,maxPoint)	\
    ( (This)->lpVtbl -> GetDomainGDI(This,minPoint,maxPoint) ) 

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
    };
    
    
#else 	/* C style interface */

    typedef struct IDataSetEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDataSetEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDataSetEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
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

