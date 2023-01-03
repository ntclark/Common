

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for idasMap.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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


#ifndef __IDASMap_i_h__
#define __IDASMap_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IIDASMapSupport_FWD_DEFINED__
#define __IIDASMapSupport_FWD_DEFINED__
typedef interface IIDASMapSupport IIDASMapSupport;

#endif 	/* __IIDASMapSupport_FWD_DEFINED__ */


#ifndef __IIDASMap_FWD_DEFINED__
#define __IIDASMap_FWD_DEFINED__
typedef interface IIDASMap IIDASMap;

#endif 	/* __IIDASMap_FWD_DEFINED__ */


#ifndef __IIDASMapEvents_FWD_DEFINED__
#define __IIDASMapEvents_FWD_DEFINED__
typedef interface IIDASMapEvents IIDASMapEvents;

#endif 	/* __IIDASMapEvents_FWD_DEFINED__ */


#ifndef __IDASMap_FWD_DEFINED__
#define __IDASMap_FWD_DEFINED__

#ifdef __cplusplus
typedef class IDASMap IDASMap;
#else
typedef struct IDASMap IDASMap;
#endif /* __cplusplus */

#endif 	/* __IDASMap_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __IDASMap_LIBRARY_DEFINED__
#define __IDASMap_LIBRARY_DEFINED__

/* library IDASMap */
/* [version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_IDASMap;

#ifndef __IIDASMapSupport_INTERFACE_DEFINED__
#define __IIDASMapSupport_INTERFACE_DEFINED__

/* interface IIDASMapSupport */
/* [object][uuid] */ 


EXTERN_C const IID IID_IIDASMapSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DCD32E9-93B1-4018-806C-20F02612573A")
    IIDASMapSupport : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IIDASMapSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIDASMapSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIDASMapSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIDASMapSupport * This);
        
        END_INTERFACE
    } IIDASMapSupportVtbl;

    interface IIDASMapSupport
    {
        CONST_VTBL struct IIDASMapSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIDASMapSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIDASMapSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIDASMapSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIDASMapSupport_INTERFACE_DEFINED__ */


#ifndef __IIDASMap_INTERFACE_DEFINED__
#define __IIDASMap_INTERFACE_DEFINED__

/* interface IIDASMap */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IIDASMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DCD32E9-93B1-4018-806C-20F02612572D")
    IIDASMap : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLoaded( 
            /* [retval][out] */ BOOL *__MIDL__IIDASMap0000) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long newHeight) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *pHeight) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long newWidth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *width) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SouthWestLatitude( 
            /* [in] */ double v) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SouthWestLatitude( 
            /* [retval][out] */ double *v) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SouthWestLongitude( 
            /* [in] */ double v) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SouthWestLongitude( 
            /* [retval][out] */ double *v) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NorthEastLatitude( 
            /* [in] */ double v) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NorthEastLatitude( 
            /* [retval][out] */ double *v) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NorthEastLongitude( 
            /* [in] */ double v) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NorthEastLongitude( 
            /* [retval][out] */ double *v) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IDASDatabaseName( 
            /* [in] */ BSTR __MIDL__IIDASMap0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IDASDatabaseName( 
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0002) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IDASDatabaseUsername( 
            /* [in] */ BSTR __MIDL__IIDASMap0003) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IDASDatabaseUsername( 
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0004) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IDASDatabasePassword( 
            /* [in] */ BSTR __MIDL__IIDASMap0005) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IDASDatabasePassword( 
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0006) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDomain( 
            double xMin,
            double yMin,
            double xMax,
            double yMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetViewExtents( 
            double xMin,
            double yMin,
            double xMax,
            double yMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewExtents( 
            /* [out] */ double *pxMin,
            /* [out] */ double *pyMin,
            /* [out] */ double *pxMax,
            /* [out] */ double *pyMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadIDASDatabase( 
            /* [in] */ BSTR dbProvider,
            /* [in] */ BSTR dbODBCConnectionParameters,
            /* [in] */ BSTR itsOptionName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IDASDatabase( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadNetworkShapeFile( 
            /* [in] */ BSTR shapeFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadObjectShapeFile( 
            /* [in] */ BSTR shapeFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShapeFiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateDatabase( 
            HWND hwndStatusBar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawNetwork( 
            HDC hdc,
            RECT *rcBounds,
            RECT *rcClip,
            double southWestLatitude,
            double southWestLongitude,
            double northEastLatitude,
            double northEastLongitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectNodes( 
            RECT *pRect,
            long *pCountFound) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectLink( 
            long linkIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectLinkFromNodes( 
            long aNode,
            long bNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnSelectLink( 
            long linkIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnSelectLinkFromNodes( 
            long aNode,
            long bNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawSelectedNodes( 
            HDC hdc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawSelectedLink( 
            HDC __MIDL__IIDASMap0007) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawLink( 
            HDC __MIDL__IIDASMap0008,
            long linkIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawLinkFromNodes( 
            HDC __MIDL__IIDASMap0009,
            long aNode,
            long bNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CircleLink( 
            HDC __MIDL__IIDASMap0010,
            long linkIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CircleLinkFromNodes( 
            HDC __MIDL__IIDASMap0011,
            long aNode,
            long bNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveSelectedNodes( 
            HDC hdc,
            long pixelsX,
            long pixelsY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveSelectedLink( 
            HDC hdc,
            long pixelsX,
            long pixelsY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitMovedNodes( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitMovedLink( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLinkCount( 
            long *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConversionBegin( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetANodePixels( 
            long linkIndex,
            float *pixelX,
            float *pixelY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBNodePixels( 
            long linkIndex,
            float *pixelX,
            float *pixelY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetANodeCoordinates( 
            long linkIndex,
            double x,
            double y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBNodeCoordinates( 
            long linkIndex,
            double x,
            double y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConversionEnd( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PickTest( 
            long pixelX,
            long pixelY,
            long *pLinkIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectPickTest( 
            long pixelX,
            long pixelY,
            long *pGroupIndex,
            long *pObjectIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            long linkIndex,
            char *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectName( 
            long objectGroupIndex,
            long objectIndex,
            char *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNodes( 
            long linkIndex,
            long *aNode,
            long *bNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDatabaseDirectory( 
            char *pszResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowFreeways( 
            boolean showFreeways) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowArterials( 
            boolean showArterials) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowRamps( 
            boolean showRamps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowEquipment( 
            boolean showEquipment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowControls( 
            boolean showControls) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Snapshot( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PositionMap( 
            double swLatitude,
            double swLongitude,
            double neLatitude,
            double neLongitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateView( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawLine( 
            HDC hdc,
            COLORREF color,
            double startLat,
            double startLon,
            double endLat,
            double endLon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawMarker( 
            BSTR title,
            double latitude,
            double longitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawCircle( 
            HDC hdc,
            COLORREF color,
            long pixels,
            double lat,
            double lon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStatus( 
            BSTR theStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DrawGeoShapeFile( 
            HDC hdc,
            BSTR shapeFileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIDASMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIDASMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIDASMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIDASMap * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLoaded )( 
            IIDASMap * This,
            /* [retval][out] */ BOOL *__MIDL__IIDASMap0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IIDASMap * This,
            /* [in] */ long newHeight);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IIDASMap * This,
            /* [retval][out] */ long *pHeight);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IIDASMap * This,
            /* [in] */ long newWidth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IIDASMap * This,
            /* [retval][out] */ long *width);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SouthWestLatitude )( 
            IIDASMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SouthWestLatitude )( 
            IIDASMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SouthWestLongitude )( 
            IIDASMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SouthWestLongitude )( 
            IIDASMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NorthEastLatitude )( 
            IIDASMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NorthEastLatitude )( 
            IIDASMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NorthEastLongitude )( 
            IIDASMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NorthEastLongitude )( 
            IIDASMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDASDatabaseName )( 
            IIDASMap * This,
            /* [in] */ BSTR __MIDL__IIDASMap0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDASDatabaseName )( 
            IIDASMap * This,
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0002);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDASDatabaseUsername )( 
            IIDASMap * This,
            /* [in] */ BSTR __MIDL__IIDASMap0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDASDatabaseUsername )( 
            IIDASMap * This,
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0004);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDASDatabasePassword )( 
            IIDASMap * This,
            /* [in] */ BSTR __MIDL__IIDASMap0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDASDatabasePassword )( 
            IIDASMap * This,
            /* [retval][out] */ BSTR *__MIDL__IIDASMap0006);
        
        HRESULT ( STDMETHODCALLTYPE *SetDomain )( 
            IIDASMap * This,
            double xMin,
            double yMin,
            double xMax,
            double yMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetViewExtents )( 
            IIDASMap * This,
            double xMin,
            double yMin,
            double xMax,
            double yMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewExtents )( 
            IIDASMap * This,
            /* [out] */ double *pxMin,
            /* [out] */ double *pyMin,
            /* [out] */ double *pxMax,
            /* [out] */ double *pyMax);
        
        HRESULT ( STDMETHODCALLTYPE *LoadIDASDatabase )( 
            IIDASMap * This,
            /* [in] */ BSTR dbProvider,
            /* [in] */ BSTR dbODBCConnectionParameters,
            /* [in] */ BSTR itsOptionName);
        
        HRESULT ( STDMETHODCALLTYPE *IDASDatabase )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoadNetworkShapeFile )( 
            IIDASMap * This,
            /* [in] */ BSTR shapeFile);
        
        HRESULT ( STDMETHODCALLTYPE *LoadObjectShapeFile )( 
            IIDASMap * This,
            /* [in] */ BSTR shapeFile);
        
        HRESULT ( STDMETHODCALLTYPE *ShapeFiles )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateDatabase )( 
            IIDASMap * This,
            HWND hwndStatusBar);
        
        HRESULT ( STDMETHODCALLTYPE *DrawNetwork )( 
            IIDASMap * This,
            HDC hdc,
            RECT *rcBounds,
            RECT *rcClip,
            double southWestLatitude,
            double southWestLongitude,
            double northEastLatitude,
            double northEastLongitude);
        
        HRESULT ( STDMETHODCALLTYPE *SelectNodes )( 
            IIDASMap * This,
            RECT *pRect,
            long *pCountFound);
        
        HRESULT ( STDMETHODCALLTYPE *SelectLink )( 
            IIDASMap * This,
            long linkIndex);
        
        HRESULT ( STDMETHODCALLTYPE *SelectLinkFromNodes )( 
            IIDASMap * This,
            long aNode,
            long bNode);
        
        HRESULT ( STDMETHODCALLTYPE *UnSelectLink )( 
            IIDASMap * This,
            long linkIndex);
        
        HRESULT ( STDMETHODCALLTYPE *UnSelectLinkFromNodes )( 
            IIDASMap * This,
            long aNode,
            long bNode);
        
        HRESULT ( STDMETHODCALLTYPE *DrawSelectedNodes )( 
            IIDASMap * This,
            HDC hdc);
        
        HRESULT ( STDMETHODCALLTYPE *DrawSelectedLink )( 
            IIDASMap * This,
            HDC __MIDL__IIDASMap0007);
        
        HRESULT ( STDMETHODCALLTYPE *DrawLink )( 
            IIDASMap * This,
            HDC __MIDL__IIDASMap0008,
            long linkIndex);
        
        HRESULT ( STDMETHODCALLTYPE *DrawLinkFromNodes )( 
            IIDASMap * This,
            HDC __MIDL__IIDASMap0009,
            long aNode,
            long bNode);
        
        HRESULT ( STDMETHODCALLTYPE *CircleLink )( 
            IIDASMap * This,
            HDC __MIDL__IIDASMap0010,
            long linkIndex);
        
        HRESULT ( STDMETHODCALLTYPE *CircleLinkFromNodes )( 
            IIDASMap * This,
            HDC __MIDL__IIDASMap0011,
            long aNode,
            long bNode);
        
        HRESULT ( STDMETHODCALLTYPE *MoveSelectedNodes )( 
            IIDASMap * This,
            HDC hdc,
            long pixelsX,
            long pixelsY);
        
        HRESULT ( STDMETHODCALLTYPE *MoveSelectedLink )( 
            IIDASMap * This,
            HDC hdc,
            long pixelsX,
            long pixelsY);
        
        HRESULT ( STDMETHODCALLTYPE *CommitMovedNodes )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *CommitMovedLink )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLinkCount )( 
            IIDASMap * This,
            long *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *ConversionBegin )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetANodePixels )( 
            IIDASMap * This,
            long linkIndex,
            float *pixelX,
            float *pixelY);
        
        HRESULT ( STDMETHODCALLTYPE *GetBNodePixels )( 
            IIDASMap * This,
            long linkIndex,
            float *pixelX,
            float *pixelY);
        
        HRESULT ( STDMETHODCALLTYPE *SetANodeCoordinates )( 
            IIDASMap * This,
            long linkIndex,
            double x,
            double y);
        
        HRESULT ( STDMETHODCALLTYPE *SetBNodeCoordinates )( 
            IIDASMap * This,
            long linkIndex,
            double x,
            double y);
        
        HRESULT ( STDMETHODCALLTYPE *ConversionEnd )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *PickTest )( 
            IIDASMap * This,
            long pixelX,
            long pixelY,
            long *pLinkIndex);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectPickTest )( 
            IIDASMap * This,
            long pixelX,
            long pixelY,
            long *pGroupIndex,
            long *pObjectIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IIDASMap * This,
            long linkIndex,
            char *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectName )( 
            IIDASMap * This,
            long objectGroupIndex,
            long objectIndex,
            char *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetNodes )( 
            IIDASMap * This,
            long linkIndex,
            long *aNode,
            long *bNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetDatabaseDirectory )( 
            IIDASMap * This,
            char *pszResult);
        
        HRESULT ( STDMETHODCALLTYPE *ShowFreeways )( 
            IIDASMap * This,
            boolean showFreeways);
        
        HRESULT ( STDMETHODCALLTYPE *ShowArterials )( 
            IIDASMap * This,
            boolean showArterials);
        
        HRESULT ( STDMETHODCALLTYPE *ShowRamps )( 
            IIDASMap * This,
            boolean showRamps);
        
        HRESULT ( STDMETHODCALLTYPE *ShowEquipment )( 
            IIDASMap * This,
            boolean showEquipment);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControls )( 
            IIDASMap * This,
            boolean showControls);
        
        HRESULT ( STDMETHODCALLTYPE *Snapshot )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *PositionMap )( 
            IIDASMap * This,
            double swLatitude,
            double swLongitude,
            double neLatitude,
            double neLongitude);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateView )( 
            IIDASMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *DrawLine )( 
            IIDASMap * This,
            HDC hdc,
            COLORREF color,
            double startLat,
            double startLon,
            double endLat,
            double endLon);
        
        HRESULT ( STDMETHODCALLTYPE *DrawMarker )( 
            IIDASMap * This,
            BSTR title,
            double latitude,
            double longitude);
        
        HRESULT ( STDMETHODCALLTYPE *DrawCircle )( 
            IIDASMap * This,
            HDC hdc,
            COLORREF color,
            long pixels,
            double lat,
            double lon);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IIDASMap * This,
            BSTR theStatus);
        
        HRESULT ( STDMETHODCALLTYPE *DrawGeoShapeFile )( 
            IIDASMap * This,
            HDC hdc,
            BSTR shapeFileName);
        
        END_INTERFACE
    } IIDASMapVtbl;

    interface IIDASMap
    {
        CONST_VTBL struct IIDASMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIDASMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIDASMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIDASMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIDASMap_get_IsLoaded(This,__MIDL__IIDASMap0000)	\
    ( (This)->lpVtbl -> get_IsLoaded(This,__MIDL__IIDASMap0000) ) 

#define IIDASMap_put_Height(This,newHeight)	\
    ( (This)->lpVtbl -> put_Height(This,newHeight) ) 

#define IIDASMap_get_Height(This,pHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pHeight) ) 

#define IIDASMap_put_Width(This,newWidth)	\
    ( (This)->lpVtbl -> put_Width(This,newWidth) ) 

#define IIDASMap_get_Width(This,width)	\
    ( (This)->lpVtbl -> get_Width(This,width) ) 

#define IIDASMap_put_SouthWestLatitude(This,v)	\
    ( (This)->lpVtbl -> put_SouthWestLatitude(This,v) ) 

#define IIDASMap_get_SouthWestLatitude(This,v)	\
    ( (This)->lpVtbl -> get_SouthWestLatitude(This,v) ) 

#define IIDASMap_put_SouthWestLongitude(This,v)	\
    ( (This)->lpVtbl -> put_SouthWestLongitude(This,v) ) 

#define IIDASMap_get_SouthWestLongitude(This,v)	\
    ( (This)->lpVtbl -> get_SouthWestLongitude(This,v) ) 

#define IIDASMap_put_NorthEastLatitude(This,v)	\
    ( (This)->lpVtbl -> put_NorthEastLatitude(This,v) ) 

#define IIDASMap_get_NorthEastLatitude(This,v)	\
    ( (This)->lpVtbl -> get_NorthEastLatitude(This,v) ) 

#define IIDASMap_put_NorthEastLongitude(This,v)	\
    ( (This)->lpVtbl -> put_NorthEastLongitude(This,v) ) 

#define IIDASMap_get_NorthEastLongitude(This,v)	\
    ( (This)->lpVtbl -> get_NorthEastLongitude(This,v) ) 

#define IIDASMap_put_IDASDatabaseName(This,__MIDL__IIDASMap0001)	\
    ( (This)->lpVtbl -> put_IDASDatabaseName(This,__MIDL__IIDASMap0001) ) 

#define IIDASMap_get_IDASDatabaseName(This,__MIDL__IIDASMap0002)	\
    ( (This)->lpVtbl -> get_IDASDatabaseName(This,__MIDL__IIDASMap0002) ) 

#define IIDASMap_put_IDASDatabaseUsername(This,__MIDL__IIDASMap0003)	\
    ( (This)->lpVtbl -> put_IDASDatabaseUsername(This,__MIDL__IIDASMap0003) ) 

#define IIDASMap_get_IDASDatabaseUsername(This,__MIDL__IIDASMap0004)	\
    ( (This)->lpVtbl -> get_IDASDatabaseUsername(This,__MIDL__IIDASMap0004) ) 

#define IIDASMap_put_IDASDatabasePassword(This,__MIDL__IIDASMap0005)	\
    ( (This)->lpVtbl -> put_IDASDatabasePassword(This,__MIDL__IIDASMap0005) ) 

#define IIDASMap_get_IDASDatabasePassword(This,__MIDL__IIDASMap0006)	\
    ( (This)->lpVtbl -> get_IDASDatabasePassword(This,__MIDL__IIDASMap0006) ) 

#define IIDASMap_SetDomain(This,xMin,yMin,xMax,yMax)	\
    ( (This)->lpVtbl -> SetDomain(This,xMin,yMin,xMax,yMax) ) 

#define IIDASMap_SetViewExtents(This,xMin,yMin,xMax,yMax)	\
    ( (This)->lpVtbl -> SetViewExtents(This,xMin,yMin,xMax,yMax) ) 

#define IIDASMap_GetViewExtents(This,pxMin,pyMin,pxMax,pyMax)	\
    ( (This)->lpVtbl -> GetViewExtents(This,pxMin,pyMin,pxMax,pyMax) ) 

#define IIDASMap_LoadIDASDatabase(This,dbProvider,dbODBCConnectionParameters,itsOptionName)	\
    ( (This)->lpVtbl -> LoadIDASDatabase(This,dbProvider,dbODBCConnectionParameters,itsOptionName) ) 

#define IIDASMap_IDASDatabase(This)	\
    ( (This)->lpVtbl -> IDASDatabase(This) ) 

#define IIDASMap_LoadNetworkShapeFile(This,shapeFile)	\
    ( (This)->lpVtbl -> LoadNetworkShapeFile(This,shapeFile) ) 

#define IIDASMap_LoadObjectShapeFile(This,shapeFile)	\
    ( (This)->lpVtbl -> LoadObjectShapeFile(This,shapeFile) ) 

#define IIDASMap_ShapeFiles(This)	\
    ( (This)->lpVtbl -> ShapeFiles(This) ) 

#define IIDASMap_UpdateDatabase(This,hwndStatusBar)	\
    ( (This)->lpVtbl -> UpdateDatabase(This,hwndStatusBar) ) 

#define IIDASMap_DrawNetwork(This,hdc,rcBounds,rcClip,southWestLatitude,southWestLongitude,northEastLatitude,northEastLongitude)	\
    ( (This)->lpVtbl -> DrawNetwork(This,hdc,rcBounds,rcClip,southWestLatitude,southWestLongitude,northEastLatitude,northEastLongitude) ) 

#define IIDASMap_SelectNodes(This,pRect,pCountFound)	\
    ( (This)->lpVtbl -> SelectNodes(This,pRect,pCountFound) ) 

#define IIDASMap_SelectLink(This,linkIndex)	\
    ( (This)->lpVtbl -> SelectLink(This,linkIndex) ) 

#define IIDASMap_SelectLinkFromNodes(This,aNode,bNode)	\
    ( (This)->lpVtbl -> SelectLinkFromNodes(This,aNode,bNode) ) 

#define IIDASMap_UnSelectLink(This,linkIndex)	\
    ( (This)->lpVtbl -> UnSelectLink(This,linkIndex) ) 

#define IIDASMap_UnSelectLinkFromNodes(This,aNode,bNode)	\
    ( (This)->lpVtbl -> UnSelectLinkFromNodes(This,aNode,bNode) ) 

#define IIDASMap_DrawSelectedNodes(This,hdc)	\
    ( (This)->lpVtbl -> DrawSelectedNodes(This,hdc) ) 

#define IIDASMap_DrawSelectedLink(This,__MIDL__IIDASMap0007)	\
    ( (This)->lpVtbl -> DrawSelectedLink(This,__MIDL__IIDASMap0007) ) 

#define IIDASMap_DrawLink(This,__MIDL__IIDASMap0008,linkIndex)	\
    ( (This)->lpVtbl -> DrawLink(This,__MIDL__IIDASMap0008,linkIndex) ) 

#define IIDASMap_DrawLinkFromNodes(This,__MIDL__IIDASMap0009,aNode,bNode)	\
    ( (This)->lpVtbl -> DrawLinkFromNodes(This,__MIDL__IIDASMap0009,aNode,bNode) ) 

#define IIDASMap_CircleLink(This,__MIDL__IIDASMap0010,linkIndex)	\
    ( (This)->lpVtbl -> CircleLink(This,__MIDL__IIDASMap0010,linkIndex) ) 

#define IIDASMap_CircleLinkFromNodes(This,__MIDL__IIDASMap0011,aNode,bNode)	\
    ( (This)->lpVtbl -> CircleLinkFromNodes(This,__MIDL__IIDASMap0011,aNode,bNode) ) 

#define IIDASMap_MoveSelectedNodes(This,hdc,pixelsX,pixelsY)	\
    ( (This)->lpVtbl -> MoveSelectedNodes(This,hdc,pixelsX,pixelsY) ) 

#define IIDASMap_MoveSelectedLink(This,hdc,pixelsX,pixelsY)	\
    ( (This)->lpVtbl -> MoveSelectedLink(This,hdc,pixelsX,pixelsY) ) 

#define IIDASMap_CommitMovedNodes(This)	\
    ( (This)->lpVtbl -> CommitMovedNodes(This) ) 

#define IIDASMap_CommitMovedLink(This)	\
    ( (This)->lpVtbl -> CommitMovedLink(This) ) 

#define IIDASMap_GetLinkCount(This,pCount)	\
    ( (This)->lpVtbl -> GetLinkCount(This,pCount) ) 

#define IIDASMap_ConversionBegin(This)	\
    ( (This)->lpVtbl -> ConversionBegin(This) ) 

#define IIDASMap_GetANodePixels(This,linkIndex,pixelX,pixelY)	\
    ( (This)->lpVtbl -> GetANodePixels(This,linkIndex,pixelX,pixelY) ) 

#define IIDASMap_GetBNodePixels(This,linkIndex,pixelX,pixelY)	\
    ( (This)->lpVtbl -> GetBNodePixels(This,linkIndex,pixelX,pixelY) ) 

#define IIDASMap_SetANodeCoordinates(This,linkIndex,x,y)	\
    ( (This)->lpVtbl -> SetANodeCoordinates(This,linkIndex,x,y) ) 

#define IIDASMap_SetBNodeCoordinates(This,linkIndex,x,y)	\
    ( (This)->lpVtbl -> SetBNodeCoordinates(This,linkIndex,x,y) ) 

#define IIDASMap_ConversionEnd(This)	\
    ( (This)->lpVtbl -> ConversionEnd(This) ) 

#define IIDASMap_PickTest(This,pixelX,pixelY,pLinkIndex)	\
    ( (This)->lpVtbl -> PickTest(This,pixelX,pixelY,pLinkIndex) ) 

#define IIDASMap_ObjectPickTest(This,pixelX,pixelY,pGroupIndex,pObjectIndex)	\
    ( (This)->lpVtbl -> ObjectPickTest(This,pixelX,pixelY,pGroupIndex,pObjectIndex) ) 

#define IIDASMap_GetName(This,linkIndex,pszName)	\
    ( (This)->lpVtbl -> GetName(This,linkIndex,pszName) ) 

#define IIDASMap_GetObjectName(This,objectGroupIndex,objectIndex,pszName)	\
    ( (This)->lpVtbl -> GetObjectName(This,objectGroupIndex,objectIndex,pszName) ) 

#define IIDASMap_GetNodes(This,linkIndex,aNode,bNode)	\
    ( (This)->lpVtbl -> GetNodes(This,linkIndex,aNode,bNode) ) 

#define IIDASMap_GetDatabaseDirectory(This,pszResult)	\
    ( (This)->lpVtbl -> GetDatabaseDirectory(This,pszResult) ) 

#define IIDASMap_ShowFreeways(This,showFreeways)	\
    ( (This)->lpVtbl -> ShowFreeways(This,showFreeways) ) 

#define IIDASMap_ShowArterials(This,showArterials)	\
    ( (This)->lpVtbl -> ShowArterials(This,showArterials) ) 

#define IIDASMap_ShowRamps(This,showRamps)	\
    ( (This)->lpVtbl -> ShowRamps(This,showRamps) ) 

#define IIDASMap_ShowEquipment(This,showEquipment)	\
    ( (This)->lpVtbl -> ShowEquipment(This,showEquipment) ) 

#define IIDASMap_ShowControls(This,showControls)	\
    ( (This)->lpVtbl -> ShowControls(This,showControls) ) 

#define IIDASMap_Snapshot(This)	\
    ( (This)->lpVtbl -> Snapshot(This) ) 

#define IIDASMap_PositionMap(This,swLatitude,swLongitude,neLatitude,neLongitude)	\
    ( (This)->lpVtbl -> PositionMap(This,swLatitude,swLongitude,neLatitude,neLongitude) ) 

#define IIDASMap_UpdateView(This)	\
    ( (This)->lpVtbl -> UpdateView(This) ) 

#define IIDASMap_DrawLine(This,hdc,color,startLat,startLon,endLat,endLon)	\
    ( (This)->lpVtbl -> DrawLine(This,hdc,color,startLat,startLon,endLat,endLon) ) 

#define IIDASMap_DrawMarker(This,title,latitude,longitude)	\
    ( (This)->lpVtbl -> DrawMarker(This,title,latitude,longitude) ) 

#define IIDASMap_DrawCircle(This,hdc,color,pixels,lat,lon)	\
    ( (This)->lpVtbl -> DrawCircle(This,hdc,color,pixels,lat,lon) ) 

#define IIDASMap_SetStatus(This,theStatus)	\
    ( (This)->lpVtbl -> SetStatus(This,theStatus) ) 

#define IIDASMap_DrawGeoShapeFile(This,hdc,shapeFileName)	\
    ( (This)->lpVtbl -> DrawGeoShapeFile(This,hdc,shapeFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIDASMap_INTERFACE_DEFINED__ */


#ifndef __IIDASMapEvents_INTERFACE_DEFINED__
#define __IIDASMapEvents_INTERFACE_DEFINED__

/* interface IIDASMapEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IIDASMapEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DCD32E9-93B1-4018-806C-20F02612572E")
    IIDASMapEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MapLoaded( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PositionChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapRedrawn( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClientDraw( 
            HDC __MIDL__IIDASMapEvents0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIDASMapEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIDASMapEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIDASMapEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIDASMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapLoaded )( 
            IIDASMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *PositionChanged )( 
            IIDASMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapRedrawn )( 
            IIDASMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClientDraw )( 
            IIDASMapEvents * This,
            HDC __MIDL__IIDASMapEvents0000);
        
        END_INTERFACE
    } IIDASMapEventsVtbl;

    interface IIDASMapEvents
    {
        CONST_VTBL struct IIDASMapEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIDASMapEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIDASMapEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIDASMapEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIDASMapEvents_MapLoaded(This)	\
    ( (This)->lpVtbl -> MapLoaded(This) ) 

#define IIDASMapEvents_PositionChanged(This)	\
    ( (This)->lpVtbl -> PositionChanged(This) ) 

#define IIDASMapEvents_MapRedrawn(This)	\
    ( (This)->lpVtbl -> MapRedrawn(This) ) 

#define IIDASMapEvents_ClientDraw(This,__MIDL__IIDASMapEvents0000)	\
    ( (This)->lpVtbl -> ClientDraw(This,__MIDL__IIDASMapEvents0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIDASMapEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_IDASMap;

#ifdef __cplusplus

class DECLSPEC_UUID("9DCD32E9-93B1-4018-806C-20F02612572F")
IDASMap;
#endif
#endif /* __IDASMap_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


