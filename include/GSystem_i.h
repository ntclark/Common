

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Dec 05 22:37:00 2017
 */
/* Compiler settings for GSystem.odl:
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


#ifndef __GSystem_i_h__
#define __GSystem_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGSystemStatusBar_FWD_DEFINED__
#define __IGSystemStatusBar_FWD_DEFINED__
typedef interface IGSystemStatusBar IGSystemStatusBar;

#endif 	/* __IGSystemStatusBar_FWD_DEFINED__ */


#ifndef __GSystems_FWD_DEFINED__
#define __GSystems_FWD_DEFINED__

#ifdef __cplusplus
typedef class GSystems GSystems;
#else
typedef struct GSystems GSystems;
#endif /* __cplusplus */

#endif 	/* __GSystems_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __GSystems_LIBRARY_DEFINED__
#define __GSystems_LIBRARY_DEFINED__

/* library GSystems */
/* [control][version][lcid][helpstring][uuid] */ 

struct DataPoint
    {
    double x;
    double y;
    double z;
    } ;
struct DataList
    {
    struct DataList *previous;
    struct DataList *next;
    struct DataPoint data;
    double colorRGB[ 3 ];
    } ;

enum CoordinatePlane
    {
        CoordinatePlane_unspecified	= 0,
        CoordinatePlane_XY	= 1,
        CoordinatePlane_YX	= 2,
        CoordinatePlane_XZ	= 3,
        CoordinatePlane_ZX	= 4,
        CoordinatePlane_YZ	= 5,
        CoordinatePlane_ZY	= 6,
        CoordinatePlane_screen	= 7,
        CoordinatePlane_normal	= ( CoordinatePlane_screen + 1 ) 
    } ;

enum UnitOfMeasure
    {
        UNIT_PIXEL	= 0,
        UNIT_PERCENT	= 1
    } ;

enum DataArity
    {
        DATA_ARITY_UNKNOWN	= 0,
        DATA_ARITY_2D	= 1,
        DATA_ARITY_3D	= 2
    } ;

enum TextFormat
    {
        TEXT_FORMAT_NONE	= 0,
        TEXT_FORMAT_LEFT	= 0x1,
        TEXT_FORMAT_RIGHT	= 0x2,
        TEXT_FORMAT_CENTER	= 0x4,
        TEXT_COORDINATES_FROM_TOP	= 0x10,
        TEXT_COORDINATES_FROM_CENTER	= 0x20,
        TEXT_COORDINATES_FROM_BOTTOM	= 0x40
    } ;

enum TextSizeUnits
    {
        TEXT_SIZE_PIXELS	= 0,
        TEXT_SIZE_PERCENT	= 0x1,
        TEXT_SIZE_POINTS	= 0x2
    } ;

EXTERN_C const IID LIBID_GSystems;

#ifndef __IGSystemStatusBar_INTERFACE_DEFINED__
#define __IGSystemStatusBar_INTERFACE_DEFINED__

/* interface IGSystemStatusBar */
/* [object][uuid] */ 


EXTERN_C const IID IID_IGSystemStatusBar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDCD-55E6-11d3-8365-006008BD5BC3")
    IGSystemStatusBar : public IUnknown
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StatusText( 
            /* [in] */ long zeroBasedPaneIndex,
            /* [in] */ char *pszText) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusText( 
            /* [in] */ long zeroBasedPaneIndex,
            /* [retval][out] */ char **pszText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGSystemStatusBarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSystemStatusBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSystemStatusBar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSystemStatusBar * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusText )( 
            IGSystemStatusBar * This,
            /* [in] */ long zeroBasedPaneIndex,
            /* [in] */ char *pszText);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusText )( 
            IGSystemStatusBar * This,
            /* [in] */ long zeroBasedPaneIndex,
            /* [retval][out] */ char **pszText);
        
        END_INTERFACE
    } IGSystemStatusBarVtbl;

    interface IGSystemStatusBar
    {
        CONST_VTBL struct IGSystemStatusBarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSystemStatusBar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSystemStatusBar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSystemStatusBar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSystemStatusBar_put_StatusText(This,zeroBasedPaneIndex,pszText)	\
    ( (This)->lpVtbl -> put_StatusText(This,zeroBasedPaneIndex,pszText) ) 

#define IGSystemStatusBar_get_StatusText(This,zeroBasedPaneIndex,pszText)	\
    ( (This)->lpVtbl -> get_StatusText(This,zeroBasedPaneIndex,pszText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGSystemStatusBar_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GSystems;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD69-55E6-11d3-8365-006008BD5BC3")
GSystems;
#endif
#endif /* __GSystems_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


