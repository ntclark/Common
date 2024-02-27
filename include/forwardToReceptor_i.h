

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for forwardToReceptor.odl:
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


#ifndef __forwardToReceptor_i_h__
#define __forwardToReceptor_i_h__

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

#ifndef __ICursiVisionForwardToReceptorBackEnd_FWD_DEFINED__
#define __ICursiVisionForwardToReceptorBackEnd_FWD_DEFINED__
typedef interface ICursiVisionForwardToReceptorBackEnd ICursiVisionForwardToReceptorBackEnd;

#endif 	/* __ICursiVisionForwardToReceptorBackEnd_FWD_DEFINED__ */


#ifndef __CursiVisionForwardToReceptorBackEnd_FWD_DEFINED__
#define __CursiVisionForwardToReceptorBackEnd_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionForwardToReceptorBackEnd CursiVisionForwardToReceptorBackEnd;
#else
typedef struct CursiVisionForwardToReceptorBackEnd CursiVisionForwardToReceptorBackEnd;
#endif /* __cplusplus */

#endif 	/* __CursiVisionForwardToReceptorBackEnd_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionForwardToReceptorBackEnd_LIBRARY_DEFINED__
#define __CursiVisionForwardToReceptorBackEnd_LIBRARY_DEFINED__

/* library CursiVisionForwardToReceptorBackEnd */
/* [version][lcid][helpstring][uuid] */ 


DEFINE_GUID(LIBID_CursiVisionForwardToReceptorBackEnd,0xC78A8C5E,0x89DC,0x4957,0xA2,0x63,0x83,0x1B,0xFA,0xC3,0x00,0xE1);

#ifndef __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__
#define __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__

/* interface ICursiVisionForwardToReceptorBackEnd */
/* [object][uuid] */ 


DEFINE_GUID(IID_ICursiVisionForwardToReceptorBackEnd,0xC78A8C5E,0x89DC,0x4957,0xA2,0x63,0x83,0x1B,0xFA,0xC3,0x00,0xE3);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C78A8C5E-89DC-4957-A263-831BFAC300E3")
    ICursiVisionForwardToReceptorBackEnd : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetServer( 
            char *pszServerName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionForwardToReceptorBackEndVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionForwardToReceptorBackEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionForwardToReceptorBackEnd * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionForwardToReceptorBackEnd * This);
        
        DECLSPEC_XFGVIRT(ICursiVisionForwardToReceptorBackEnd, SetServer)
        HRESULT ( STDMETHODCALLTYPE *SetServer )( 
            ICursiVisionForwardToReceptorBackEnd * This,
            char *pszServerName);
        
        END_INTERFACE
    } ICursiVisionForwardToReceptorBackEndVtbl;

    interface ICursiVisionForwardToReceptorBackEnd
    {
        CONST_VTBL struct ICursiVisionForwardToReceptorBackEndVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICursiVisionForwardToReceptorBackEnd_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICursiVisionForwardToReceptorBackEnd_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICursiVisionForwardToReceptorBackEnd_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICursiVisionForwardToReceptorBackEnd_SetServer(This,pszServerName)	\
    ( (This)->lpVtbl -> SetServer(This,pszServerName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_CursiVisionForwardToReceptorBackEnd,0xC78A8C5E,0x89DC,0x4957,0xA2,0x63,0x83,0x1B,0xFA,0xC3,0x00,0xE2);

#ifdef __cplusplus

class DECLSPEC_UUID("C78A8C5E-89DC-4957-A263-831BFAC300E2")
CursiVisionForwardToReceptorBackEnd;
#endif
#endif /* __CursiVisionForwardToReceptorBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


