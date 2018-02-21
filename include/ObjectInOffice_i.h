

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Jan 29 13:05:52 2018
 */
/* Compiler settings for ObjectInOffice.odl:
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


#ifndef __ObjectInOffice_i_h__
#define __ObjectInOffice_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IObjectInOffice_FWD_DEFINED__
#define __IObjectInOffice_FWD_DEFINED__
typedef interface IObjectInOffice IObjectInOffice;

#endif 	/* __IObjectInOffice_FWD_DEFINED__ */


#ifndef __ObjectInOffice_FWD_DEFINED__
#define __ObjectInOffice_FWD_DEFINED__

#ifdef __cplusplus
typedef class ObjectInOffice ObjectInOffice;
#else
typedef struct ObjectInOffice ObjectInOffice;
#endif /* __cplusplus */

#endif 	/* __ObjectInOffice_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __ObjectInOffice_LIBRARY_DEFINED__
#define __ObjectInOffice_LIBRARY_DEFINED__

/* library ObjectInOffice */
/* [control][version][lcid][uuid] */ 


EXTERN_C const IID LIBID_ObjectInOffice;

#ifndef __IObjectInOffice_INTERFACE_DEFINED__
#define __IObjectInOffice_INTERFACE_DEFINED__

/* interface IObjectInOffice */
/* [object][uuid] */ 


EXTERN_C const IID IID_IObjectInOffice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("117F6326-C767-42BD-AAD2-47C3B23BE5F0")
    IObjectInOffice : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectInOfficeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectInOffice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectInOffice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectInOffice * This);
        
        END_INTERFACE
    } IObjectInOfficeVtbl;

    interface IObjectInOffice
    {
        CONST_VTBL struct IObjectInOfficeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectInOffice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectInOffice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectInOffice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectInOffice_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ObjectInOffice;

#ifdef __cplusplus

class DECLSPEC_UUID("117F6326-C767-42BD-AAD2-47C3B23BE5F1")
ObjectInOffice;
#endif
#endif /* __ObjectInOffice_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


