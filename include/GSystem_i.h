

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for GSystem.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
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


#ifndef __GSystem_i_h__
#define __GSystem_i_h__

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

#ifndef __IGSystemStatusBar_FWD_DEFINED__
#define __IGSystemStatusBar_FWD_DEFINED__
typedef interface IGSystemStatusBar IGSystemStatusBar;

#endif 	/* __IGSystemStatusBar_FWD_DEFINED__ */


#ifndef __IGSystemPlotType_FWD_DEFINED__
#define __IGSystemPlotType_FWD_DEFINED__
typedef interface IGSystemPlotType IGSystemPlotType;

#endif 	/* __IGSystemPlotType_FWD_DEFINED__ */


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
    void *pvAction;
    void *pvArg1;
    void *pvArg2;
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
        DATA_ARITY_1D	= 1,
        DATA_ARITY_2D	= 2,
        DATA_ARITY_3D	= 3
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

enum PlotViews
    {
        gcPlotView2D	= 0x1,
        gcPlotView3D	= 0x2,
        gcPlotViewMask	= 0xfffffffc
    } ;

enum gc2DPlotTypes
    {
        gcPlotTypeNone	= 0,
        gcPlotType2DExternal1	= 0x1,
        gcPlotType2DExternal2	= 0x2,
        gcPlotType2DExternal3	= 0x4,
        gcPlotType2DExternal4	= 0x8,
        gcPlotType2DExternal5	= 0x10,
        gcPlotType2DExternal6	= 0x20,
        gcPlotType2DExternal7	= 0x40,
        gcPlotType2DExternal8	= 0x80,
        gcPlotType2DExternal9	= 0x100,
        gcPlotType2DExternal10	= 0x200,
        gcPlotType2DExternal11	= 0x400,
        gcPlotType2DExternal12	= 0x800,
        gcPlotType2DExternal13	= 0x1000,
        gcPlotType2DExternal14	= 0x2000,
        gcPlotType2DExternal15	= 0x4000,
        gcPlotType2DExternal16	= 0x8000,
        gcPlotType2DExternal17	= 0x10000,
        gcPlotType2DExternal18	= 0x20000,
        gcPlotType2DExternal19	= 0x30000,
        gcPlotType2DExternal20	= 0x80000,
        gcPlotType2DExternal21	= 0x100000,
        gcPlotType2DExternal22	= 0x200000,
        gcPlotType2DExternal23	= 0x400000,
        gcPlotType2DExternal24	= 0x800000,
        gcPlotType2DExternal25	= 0x1000000,
        gcPlotType2DExternal26	= 0x2000000,
        gcPlotType2DExternal27	= 0x4000000,
        gcPlotType2DExternal28	= 0x8000000,
        gcPlotType2DExternal29	= 0x10000000,
        gcPlotType2DExternal30	= 0x20000000,
        gcPlotType2DExternal31	= 0x40000000,
        gcPlotType2DExternal32	= 0x80000000
    } ;

enum gc3DPlotTypes
    {
        gcPlotType3DNone	= 0,
        gcPlotType3DExternal1	= 0x1,
        gcPlotType3DExternal2	= 0x2,
        gcPlotType3DExternal3	= 0x4,
        gcPlotType3DExternal4	= 0x8,
        gcPlotType3DExternal5	= 0x10,
        gcPlotType3DExternal6	= 0x20,
        gcPlotType3DExternal7	= 0x40,
        gcPlotType3DExternal8	= 0x80,
        gcPlotType3DExternal9	= 0x100,
        gcPlotType3DExternal10	= 0x200,
        gcPlotType3DExternal11	= 0x400,
        gcPlotType3DExternal12	= 0x800,
        gcPlotType3DExternal13	= 0x1000,
        gcPlotType3DExternal14	= 0x2000,
        gcPlotType3DExternal15	= 0x4000,
        gcPlotType3DExternal16	= 0x8000,
        gcPlotType3DExternal17	= 0x10000,
        gcPlotType3DExternal18	= 0x20000,
        gcPlotType3DExternal19	= 0x30000,
        gcPlotType3DExternal20	= 0x80000,
        gcPlotType3DExternal21	= 0x100000,
        gcPlotType3DExternal22	= 0x200000,
        gcPlotType3DExternal23	= 0x400000,
        gcPlotType3DExternal24	= 0x800000,
        gcPlotType3DExternal25	= 0x1000000,
        gcPlotType3DExternal26	= 0x2000000,
        gcPlotType3DExternal27	= 0x4000000,
        gcPlotType3DExternal28	= 0x8000000,
        gcPlotType3DExternal29	= 0x10000000,
        gcPlotType3DExternal30	= 0x20000000,
        gcPlotType3DExternal31	= 0x40000000,
        gcPlotType3DExternal32	= 0x80000000
    } ;

enum PlotIdBands
    {
        plotIdFunctions	= 100,
        plotIdDataSets	= 200
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
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSystemStatusBar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSystemStatusBar * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSystemStatusBar * This);
        
        DECLSPEC_XFGVIRT(IGSystemStatusBar, put_StatusText)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StatusText )( 
            IGSystemStatusBar * This,
            /* [in] */ long zeroBasedPaneIndex,
            /* [in] */ char *pszText);
        
        DECLSPEC_XFGVIRT(IGSystemStatusBar, get_StatusText)
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


#ifndef __IGSystemPlotType_INTERFACE_DEFINED__
#define __IGSystemPlotType_INTERFACE_DEFINED__

/* interface IGSystemPlotType */
/* [object][uuid] */ 


EXTERN_C const IID IID_IGSystemPlotType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CBEFD00-55E6-11d3-8365-006008BD5BC3")
    IGSystemPlotType : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pCountProvided) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [in] */ long item,
            /* [retval][out] */ BSTR *pBstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Is3DOnly( 
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UsesMaterialShading( 
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasProperties( 
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0002) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitNew( 
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            /* [in] */ void *pvIStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            /* [in] */ void *pvIStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( 
            /* [in] */ long item,
            /* [in] */ HWND hwndParent,
            REFIID instanceGuid,
            void ( STDMETHODCALLTYPE __stdcall *whenDoneCallBack )( 
                void *pArg,
                ULONG_PTR cookie),
            void *pArg,
            ULONG_PTR cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            long segmentID,
            void *pvIPlot,
            void *pvIOpenGLImplementation,
            void *pvIDataSet) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGSystemPlotTypeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSystemPlotType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSystemPlotType * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSystemPlotType * This);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, get_Count)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IGSystemPlotType * This,
            /* [retval][out] */ long *pCountProvided);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, get_Name)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [retval][out] */ BSTR *pBstr);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, get_Is3DOnly)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Is3DOnly )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0000);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, get_UsesMaterialShading)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsesMaterialShading )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0001);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, get_HasProperties)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasProperties )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSystemPlotType0002);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, InitNew)
        HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, Save)
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            /* [in] */ void *pvIStream);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, Load)
        HRESULT ( STDMETHODCALLTYPE *Load )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            /* [in] */ void *pvIStream);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, ShowProperties)
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [in] */ HWND hwndParent,
            REFIID instanceGuid,
            void ( STDMETHODCALLTYPE __stdcall *whenDoneCallBack )( 
                void *pArg,
                ULONG_PTR cookie),
            void *pArg,
            ULONG_PTR cookie);
        
        DECLSPEC_XFGVIRT(IGSystemPlotType, Execute)
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            IGSystemPlotType * This,
            /* [in] */ long item,
            /* [in] */ REFIID instanceGUID,
            long segmentID,
            void *pvIPlot,
            void *pvIOpenGLImplementation,
            void *pvIDataSet);
        
        END_INTERFACE
    } IGSystemPlotTypeVtbl;

    interface IGSystemPlotType
    {
        CONST_VTBL struct IGSystemPlotTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSystemPlotType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSystemPlotType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSystemPlotType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSystemPlotType_get_Count(This,pCountProvided)	\
    ( (This)->lpVtbl -> get_Count(This,pCountProvided) ) 

#define IGSystemPlotType_get_Name(This,item,pBstr)	\
    ( (This)->lpVtbl -> get_Name(This,item,pBstr) ) 

#define IGSystemPlotType_get_Is3DOnly(This,item,__MIDL__IGSystemPlotType0000)	\
    ( (This)->lpVtbl -> get_Is3DOnly(This,item,__MIDL__IGSystemPlotType0000) ) 

#define IGSystemPlotType_get_UsesMaterialShading(This,item,__MIDL__IGSystemPlotType0001)	\
    ( (This)->lpVtbl -> get_UsesMaterialShading(This,item,__MIDL__IGSystemPlotType0001) ) 

#define IGSystemPlotType_get_HasProperties(This,item,__MIDL__IGSystemPlotType0002)	\
    ( (This)->lpVtbl -> get_HasProperties(This,item,__MIDL__IGSystemPlotType0002) ) 

#define IGSystemPlotType_InitNew(This,item,instanceGUID)	\
    ( (This)->lpVtbl -> InitNew(This,item,instanceGUID) ) 

#define IGSystemPlotType_Save(This,item,instanceGUID,pvIStream)	\
    ( (This)->lpVtbl -> Save(This,item,instanceGUID,pvIStream) ) 

#define IGSystemPlotType_Load(This,item,instanceGUID,pvIStream)	\
    ( (This)->lpVtbl -> Load(This,item,instanceGUID,pvIStream) ) 

#define IGSystemPlotType_ShowProperties(This,item,hwndParent,instanceGuid,whenDoneCallBack,pArg,cookie)	\
    ( (This)->lpVtbl -> ShowProperties(This,item,hwndParent,instanceGuid,whenDoneCallBack,pArg,cookie) ) 

#define IGSystemPlotType_Execute(This,item,instanceGUID,segmentID,pvIPlot,pvIOpenGLImplementation,pvIDataSet)	\
    ( (This)->lpVtbl -> Execute(This,item,instanceGUID,segmentID,pvIPlot,pvIOpenGLImplementation,pvIDataSet) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGSystemPlotType_INTERFACE_DEFINED__ */


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


