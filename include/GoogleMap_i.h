

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for GoogleMap.odl:
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


#ifndef __GoogleMap_i_h__
#define __GoogleMap_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGoogleMap_FWD_DEFINED__
#define __IGoogleMap_FWD_DEFINED__
typedef interface IGoogleMap IGoogleMap;

#endif 	/* __IGoogleMap_FWD_DEFINED__ */


#ifndef __IGoogleMapEvents_FWD_DEFINED__
#define __IGoogleMapEvents_FWD_DEFINED__
typedef interface IGoogleMapEvents IGoogleMapEvents;

#endif 	/* __IGoogleMapEvents_FWD_DEFINED__ */


#ifndef __GoogleMap_FWD_DEFINED__
#define __GoogleMap_FWD_DEFINED__

#ifdef __cplusplus
typedef class GoogleMap GoogleMap;
#else
typedef struct GoogleMap GoogleMap;
#endif /* __cplusplus */

#endif 	/* __GoogleMap_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __GoogleMap_LIBRARY_DEFINED__
#define __GoogleMap_LIBRARY_DEFINED__

/* library GoogleMap */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_GoogleMap;

#ifndef __IGoogleMap_INTERFACE_DEFINED__
#define __IGoogleMap_INTERFACE_DEFINED__

/* interface IGoogleMap */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGoogleMap;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07DC177E-C5E9-4A31-8B06-4E8CCF3038B1")
    IGoogleMap : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsLoaded( 
            /* [retval][out] */ BOOL *__MIDL__IGoogleMap0000) = 0;
        
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

    typedef struct IGoogleMapVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleMap * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleMap * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleMap * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLoaded )( 
            IGoogleMap * This,
            /* [retval][out] */ BOOL *__MIDL__IGoogleMap0000);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IGoogleMap * This,
            /* [in] */ long newHeight);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IGoogleMap * This,
            /* [retval][out] */ long *pHeight);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IGoogleMap * This,
            /* [in] */ long newWidth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IGoogleMap * This,
            /* [retval][out] */ long *width);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SouthWestLatitude )( 
            IGoogleMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SouthWestLatitude )( 
            IGoogleMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SouthWestLongitude )( 
            IGoogleMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SouthWestLongitude )( 
            IGoogleMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NorthEastLatitude )( 
            IGoogleMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NorthEastLatitude )( 
            IGoogleMap * This,
            /* [retval][out] */ double *v);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NorthEastLongitude )( 
            IGoogleMap * This,
            /* [in] */ double v);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NorthEastLongitude )( 
            IGoogleMap * This,
            /* [retval][out] */ double *v);
        
        HRESULT ( STDMETHODCALLTYPE *SetDomain )( 
            IGoogleMap * This,
            double xMin,
            double yMin,
            double xMax,
            double yMax);
        
        HRESULT ( STDMETHODCALLTYPE *SetViewExtents )( 
            IGoogleMap * This,
            double xMin,
            double yMin,
            double xMax,
            double yMax);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewExtents )( 
            IGoogleMap * This,
            /* [out] */ double *pxMin,
            /* [out] */ double *pyMin,
            /* [out] */ double *pxMax,
            /* [out] */ double *pyMax);
        
        HRESULT ( STDMETHODCALLTYPE *Snapshot )( 
            IGoogleMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *PositionMap )( 
            IGoogleMap * This,
            double swLatitude,
            double swLongitude,
            double neLatitude,
            double neLongitude);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateView )( 
            IGoogleMap * This);
        
        HRESULT ( STDMETHODCALLTYPE *DrawLine )( 
            IGoogleMap * This,
            HDC hdc,
            COLORREF color,
            double startLat,
            double startLon,
            double endLat,
            double endLon);
        
        HRESULT ( STDMETHODCALLTYPE *DrawMarker )( 
            IGoogleMap * This,
            BSTR title,
            double latitude,
            double longitude);
        
        HRESULT ( STDMETHODCALLTYPE *DrawCircle )( 
            IGoogleMap * This,
            HDC hdc,
            COLORREF color,
            long pixels,
            double lat,
            double lon);
        
        HRESULT ( STDMETHODCALLTYPE *SetStatus )( 
            IGoogleMap * This,
            BSTR theStatus);
        
        HRESULT ( STDMETHODCALLTYPE *DrawGeoShapeFile )( 
            IGoogleMap * This,
            HDC hdc,
            BSTR shapeFileName);
        
        END_INTERFACE
    } IGoogleMapVtbl;

    interface IGoogleMap
    {
        CONST_VTBL struct IGoogleMapVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleMap_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleMap_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleMap_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleMap_get_IsLoaded(This,__MIDL__IGoogleMap0000)	\
    ( (This)->lpVtbl -> get_IsLoaded(This,__MIDL__IGoogleMap0000) ) 

#define IGoogleMap_put_Height(This,newHeight)	\
    ( (This)->lpVtbl -> put_Height(This,newHeight) ) 

#define IGoogleMap_get_Height(This,pHeight)	\
    ( (This)->lpVtbl -> get_Height(This,pHeight) ) 

#define IGoogleMap_put_Width(This,newWidth)	\
    ( (This)->lpVtbl -> put_Width(This,newWidth) ) 

#define IGoogleMap_get_Width(This,width)	\
    ( (This)->lpVtbl -> get_Width(This,width) ) 

#define IGoogleMap_put_SouthWestLatitude(This,v)	\
    ( (This)->lpVtbl -> put_SouthWestLatitude(This,v) ) 

#define IGoogleMap_get_SouthWestLatitude(This,v)	\
    ( (This)->lpVtbl -> get_SouthWestLatitude(This,v) ) 

#define IGoogleMap_put_SouthWestLongitude(This,v)	\
    ( (This)->lpVtbl -> put_SouthWestLongitude(This,v) ) 

#define IGoogleMap_get_SouthWestLongitude(This,v)	\
    ( (This)->lpVtbl -> get_SouthWestLongitude(This,v) ) 

#define IGoogleMap_put_NorthEastLatitude(This,v)	\
    ( (This)->lpVtbl -> put_NorthEastLatitude(This,v) ) 

#define IGoogleMap_get_NorthEastLatitude(This,v)	\
    ( (This)->lpVtbl -> get_NorthEastLatitude(This,v) ) 

#define IGoogleMap_put_NorthEastLongitude(This,v)	\
    ( (This)->lpVtbl -> put_NorthEastLongitude(This,v) ) 

#define IGoogleMap_get_NorthEastLongitude(This,v)	\
    ( (This)->lpVtbl -> get_NorthEastLongitude(This,v) ) 

#define IGoogleMap_SetDomain(This,xMin,yMin,xMax,yMax)	\
    ( (This)->lpVtbl -> SetDomain(This,xMin,yMin,xMax,yMax) ) 

#define IGoogleMap_SetViewExtents(This,xMin,yMin,xMax,yMax)	\
    ( (This)->lpVtbl -> SetViewExtents(This,xMin,yMin,xMax,yMax) ) 

#define IGoogleMap_GetViewExtents(This,pxMin,pyMin,pxMax,pyMax)	\
    ( (This)->lpVtbl -> GetViewExtents(This,pxMin,pyMin,pxMax,pyMax) ) 

#define IGoogleMap_Snapshot(This)	\
    ( (This)->lpVtbl -> Snapshot(This) ) 

#define IGoogleMap_PositionMap(This,swLatitude,swLongitude,neLatitude,neLongitude)	\
    ( (This)->lpVtbl -> PositionMap(This,swLatitude,swLongitude,neLatitude,neLongitude) ) 

#define IGoogleMap_UpdateView(This)	\
    ( (This)->lpVtbl -> UpdateView(This) ) 

#define IGoogleMap_DrawLine(This,hdc,color,startLat,startLon,endLat,endLon)	\
    ( (This)->lpVtbl -> DrawLine(This,hdc,color,startLat,startLon,endLat,endLon) ) 

#define IGoogleMap_DrawMarker(This,title,latitude,longitude)	\
    ( (This)->lpVtbl -> DrawMarker(This,title,latitude,longitude) ) 

#define IGoogleMap_DrawCircle(This,hdc,color,pixels,lat,lon)	\
    ( (This)->lpVtbl -> DrawCircle(This,hdc,color,pixels,lat,lon) ) 

#define IGoogleMap_SetStatus(This,theStatus)	\
    ( (This)->lpVtbl -> SetStatus(This,theStatus) ) 

#define IGoogleMap_DrawGeoShapeFile(This,hdc,shapeFileName)	\
    ( (This)->lpVtbl -> DrawGeoShapeFile(This,hdc,shapeFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleMap_INTERFACE_DEFINED__ */


#ifndef __IGoogleMapEvents_INTERFACE_DEFINED__
#define __IGoogleMapEvents_INTERFACE_DEFINED__

/* interface IGoogleMapEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IGoogleMapEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07DC177E-C5E9-4A31-8B06-4E8CCF3038B2")
    IGoogleMapEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MapLoaded( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PositionChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MapRedrawn( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClientDraw( 
            HDC __MIDL__IGoogleMapEvents0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGoogleMapEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGoogleMapEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGoogleMapEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGoogleMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapLoaded )( 
            IGoogleMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *PositionChanged )( 
            IGoogleMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *MapRedrawn )( 
            IGoogleMapEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClientDraw )( 
            IGoogleMapEvents * This,
            HDC __MIDL__IGoogleMapEvents0000);
        
        END_INTERFACE
    } IGoogleMapEventsVtbl;

    interface IGoogleMapEvents
    {
        CONST_VTBL struct IGoogleMapEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoogleMapEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGoogleMapEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGoogleMapEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGoogleMapEvents_MapLoaded(This)	\
    ( (This)->lpVtbl -> MapLoaded(This) ) 

#define IGoogleMapEvents_PositionChanged(This)	\
    ( (This)->lpVtbl -> PositionChanged(This) ) 

#define IGoogleMapEvents_MapRedrawn(This)	\
    ( (This)->lpVtbl -> MapRedrawn(This) ) 

#define IGoogleMapEvents_ClientDraw(This,__MIDL__IGoogleMapEvents0000)	\
    ( (This)->lpVtbl -> ClientDraw(This,__MIDL__IGoogleMapEvents0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGoogleMapEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GoogleMap;

#ifdef __cplusplus

class DECLSPEC_UUID("07DC177E-C5E9-4A31-8B06-4E8CCF3038B3")
GoogleMap;
#endif
#endif /* __GoogleMap_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


