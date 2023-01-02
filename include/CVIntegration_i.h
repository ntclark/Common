

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for CVIntegration.odl:
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


#ifndef __CVIntegration_i_h__
#define __CVIntegration_i_h__

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

#ifndef __ICursiVisionIntegration_FWD_DEFINED__
#define __ICursiVisionIntegration_FWD_DEFINED__
typedef interface ICursiVisionIntegration ICursiVisionIntegration;

#endif 	/* __ICursiVisionIntegration_FWD_DEFINED__ */


#ifndef __CursiVisionIntegration_FWD_DEFINED__
#define __CursiVisionIntegration_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionIntegration CursiVisionIntegration;
#else
typedef struct CursiVisionIntegration CursiVisionIntegration;
#endif /* __cplusplus */

#endif 	/* __CursiVisionIntegration_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "dispex.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionIntegration_LIBRARY_DEFINED__
#define __CursiVisionIntegration_LIBRARY_DEFINED__

/* library CursiVisionIntegration */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CursiVisionIntegration;

#ifndef __ICursiVisionIntegration_INTERFACE_DEFINED__
#define __ICursiVisionIntegration_INTERFACE_DEFINED__

/* interface ICursiVisionIntegration */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ICursiVisionIntegration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64FBBD0E-2BDC-4227-8809-A7003F50FD19")
    ICursiVisionIntegration : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MainOption( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionIntegrationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionIntegration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionIntegration * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionIntegration * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionIntegration, MainOption)
        HRESULT ( STDMETHODCALLTYPE *MainOption )( 
            ICursiVisionIntegration * This);
        
        END_INTERFACE
    } ICursiVisionIntegrationVtbl;

    interface ICursiVisionIntegration
    {
        CONST_VTBL struct ICursiVisionIntegrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionIntegration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionIntegration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionIntegration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionIntegration_MainOption(This)	\
    ( (This)->lpVtbl -> MainOption(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionIntegration_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionIntegration;

#ifdef __cplusplus

class DECLSPEC_UUID("64FBBD0E-2BDC-4227-8809-A7003F50FD20")
CursiVisionIntegration;
#endif
#endif /* __CursiVisionIntegration_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


