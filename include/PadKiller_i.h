

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for PadKiller.odl:
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


#ifndef __PadKiller_i_h__
#define __PadKiller_i_h__

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

#ifndef __IPadKiller_FWD_DEFINED__
#define __IPadKiller_FWD_DEFINED__
typedef interface IPadKiller IPadKiller;

#endif 	/* __IPadKiller_FWD_DEFINED__ */


#ifndef __PadKiller_FWD_DEFINED__
#define __PadKiller_FWD_DEFINED__

#ifdef __cplusplus
typedef class PadKiller PadKiller;
#else
typedef struct PadKiller PadKiller;
#endif /* __cplusplus */

#endif 	/* __PadKiller_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PadKiller_LIBRARY_DEFINED__
#define __PadKiller_LIBRARY_DEFINED__

/* library PadKiller */
/* [version][control][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_PadKiller;

#ifndef __IPadKiller_INTERFACE_DEFINED__
#define __IPadKiller_INTERFACE_DEFINED__

/* interface IPadKiller */
/* [object][oleautomation][helpstring][uuid] */ 


EXTERN_C const IID IID_IPadKiller;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49DA8BCC-9F35-44b8-9E19-EFF647987104")
    IPadKiller : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HelloWorld( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPadKillerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPadKiller * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPadKiller * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPadKiller * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPadKiller * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPadKiller * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPadKiller * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPadKiller * This,
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
        
        DECLSPEC_XFGVIRT(IPadKiller, HelloWorld)
        HRESULT ( STDMETHODCALLTYPE *HelloWorld )( 
            IPadKiller * This);
        
        END_INTERFACE
    } IPadKillerVtbl;

    interface IPadKiller
    {
        CONST_VTBL struct IPadKillerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPadKiller_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPadKiller_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPadKiller_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPadKiller_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPadKiller_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPadKiller_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPadKiller_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPadKiller_HelloWorld(This)	\
    ( (This)->lpVtbl -> HelloWorld(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPadKiller_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PadKiller;

#ifdef __cplusplus

class DECLSPEC_UUID("49DA8BCC-9F35-44b8-9E19-EFF647987105")
PadKiller;
#endif
#endif /* __PadKiller_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


