

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for viewSet.odl:
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


#ifndef __viewSet_i_h__
#define __viewSet_i_h__

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

#ifndef __IViewSet_FWD_DEFINED__
#define __IViewSet_FWD_DEFINED__
typedef interface IViewSet IViewSet;

#endif 	/* __IViewSet_FWD_DEFINED__ */


#ifndef __ViewSet_FWD_DEFINED__
#define __ViewSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class ViewSet ViewSet;
#else
typedef struct ViewSet ViewSet;
#endif /* __cplusplus */

#endif 	/* __ViewSet_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __ViewSet_LIBRARY_DEFINED__
#define __ViewSet_LIBRARY_DEFINED__

/* library ViewSet */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_ViewSet;

#ifndef __IViewSet_INTERFACE_DEFINED__
#define __IViewSet_INTERFACE_DEFINED__

/* interface IViewSet */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IViewSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD7F-55E6-11d3-8365-006008BD5BC3")
    IViewSet : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *parentPlotView,
            /* external definition not present */ IGProperty *parentTheta,
            /* external definition not present */ IGProperty *parentPhi,
            /* external definition not present */ IGProperty *parentSpin,
            /* external definition not present */ IGProperty *parentFloor,
            /* external definition not present */ IGProperty *parentCeiling,
            /* external definition not present */ IDataSet *pIDataSet,
            /* external definition not present */ IAxis *pIAxis_X,
            /* external definition not present */ IAxis *pIAxis_Y,
            /* external definition not present */ IAxis *pIAxis_Z) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Properties( 
            /* [in] */ HWND hwndParent,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenDoneCallback )( 
                void *__MIDL__IViewSet0000),
            /* [in] */ void *pArg) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IViewSetVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewSet * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewSet * This);
        
        DECLSPEC_XFGVIRT(IViewSet, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IViewSet * This,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IEvaluator *pIEvaluator,
            /* external definition not present */ IGProperty *parentPlotView,
            /* external definition not present */ IGProperty *parentTheta,
            /* external definition not present */ IGProperty *parentPhi,
            /* external definition not present */ IGProperty *parentSpin,
            /* external definition not present */ IGProperty *parentFloor,
            /* external definition not present */ IGProperty *parentCeiling,
            /* external definition not present */ IDataSet *pIDataSet,
            /* external definition not present */ IAxis *pIAxis_X,
            /* external definition not present */ IAxis *pIAxis_Y,
            /* external definition not present */ IAxis *pIAxis_Z);
        
        DECLSPEC_XFGVIRT(IViewSet, Properties)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IViewSet * This,
            /* [in] */ HWND hwndParent,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenDoneCallback )( 
                void *__MIDL__IViewSet0000),
            /* [in] */ void *pArg);
        
        END_INTERFACE
    } IViewSetVtbl;

    interface IViewSet
    {
        CONST_VTBL struct IViewSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewSet_Initialize(This,pIOpenGLImplementation,pIEvaluator,parentPlotView,parentTheta,parentPhi,parentSpin,parentFloor,parentCeiling,pIDataSet,pIAxis_X,pIAxis_Y,pIAxis_Z)	\
    ( (This)->lpVtbl -> Initialize(This,pIOpenGLImplementation,pIEvaluator,parentPlotView,parentTheta,parentPhi,parentSpin,parentFloor,parentCeiling,pIDataSet,pIAxis_X,pIAxis_Y,pIAxis_Z) ) 

#define IViewSet_Properties(This,hwndParent,pWhenDoneCallback,pArg)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent,pWhenDoneCallback,pArg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewSet_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ViewSet;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD80-55E6-11d3-8365-006008BD5BC3")
ViewSet;
#endif
#endif /* __ViewSet_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


