

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Oct 18 11:31:26 2017
 */
/* Compiler settings for forwardToReceptor.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
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


#ifndef __forwardToReceptor_i_h__
#define __forwardToReceptor_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
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


EXTERN_C const IID LIBID_CursiVisionForwardToReceptorBackEnd;

#ifndef __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__
#define __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__

/* interface ICursiVisionForwardToReceptorBackEnd */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICursiVisionForwardToReceptorBackEnd;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C78A8C5E-89DC-4957-A263-831BFAC300E3")
    ICursiVisionForwardToReceptorBackEnd : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetServer( 
            char *pszServerName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPort( 
            long portNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICursiVisionForwardToReceptorBackEndVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICursiVisionForwardToReceptorBackEnd * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICursiVisionForwardToReceptorBackEnd * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICursiVisionForwardToReceptorBackEnd * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetServer )( 
            ICursiVisionForwardToReceptorBackEnd * This,
            char *pszServerName);
        
        HRESULT ( STDMETHODCALLTYPE *SetPort )( 
            ICursiVisionForwardToReceptorBackEnd * This,
            long portNumber);
        
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

#define ICursiVisionForwardToReceptorBackEnd_SetPort(This,portNumber)	\
    ( (This)->lpVtbl -> SetPort(This,portNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICursiVisionForwardToReceptorBackEnd_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionForwardToReceptorBackEnd;

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


