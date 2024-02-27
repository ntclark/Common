

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for EmailNewRow.odl:
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


#ifndef __EmailNewRow_i_h__
#define __EmailNewRow_i_h__

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

#ifndef __IVisioLoggerEmailUtilities_FWD_DEFINED__
#define __IVisioLoggerEmailUtilities_FWD_DEFINED__
typedef interface IVisioLoggerEmailUtilities IVisioLoggerEmailUtilities;

#endif 	/* __IVisioLoggerEmailUtilities_FWD_DEFINED__ */


#ifndef __VisioLoggerEmailProcessor_FWD_DEFINED__
#define __VisioLoggerEmailProcessor_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerEmailProcessor VisioLoggerEmailProcessor;
#else
typedef struct VisioLoggerEmailProcessor VisioLoggerEmailProcessor;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerEmailProcessor_FWD_DEFINED__ */


#ifndef __VisioLoggerEmailActionProcessor_FWD_DEFINED__
#define __VisioLoggerEmailActionProcessor_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerEmailActionProcessor VisioLoggerEmailActionProcessor;
#else
typedef struct VisioLoggerEmailActionProcessor VisioLoggerEmailActionProcessor;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerEmailActionProcessor_FWD_DEFINED__ */


#ifndef __VisioLoggerEmailUtilities_FWD_DEFINED__
#define __VisioLoggerEmailUtilities_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerEmailUtilities VisioLoggerEmailUtilities;
#else
typedef struct VisioLoggerEmailUtilities VisioLoggerEmailUtilities;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerEmailUtilities_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VisioLoggerEmailProcessor_LIBRARY_DEFINED__
#define __VisioLoggerEmailProcessor_LIBRARY_DEFINED__

/* library VisioLoggerEmailProcessor */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_VisioLoggerEmailProcessor;

#ifndef __IVisioLoggerEmailUtilities_INTERFACE_DEFINED__
#define __IVisioLoggerEmailUtilities_INTERFACE_DEFINED__

/* interface IVisioLoggerEmailUtilities */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerEmailUtilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75FD19CF-BB6A-4a9e-AEC0-E36B6B106BFB")
    IVisioLoggerEmailUtilities : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Send( 
            BSTR serverName,
            long smtpPort,
            BSTR userName,
            BSTR password,
            BSTR replyTo,
            BSTR recipient,
            BSTR subject,
            BSTR body) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerEmailUtilitiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerEmailUtilities * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerEmailUtilities * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerEmailUtilities * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerEmailUtilities, Send)
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IVisioLoggerEmailUtilities * This,
            BSTR serverName,
            long smtpPort,
            BSTR userName,
            BSTR password,
            BSTR replyTo,
            BSTR recipient,
            BSTR subject,
            BSTR body);
        
        END_INTERFACE
    } IVisioLoggerEmailUtilitiesVtbl;

    interface IVisioLoggerEmailUtilities
    {
        CONST_VTBL struct IVisioLoggerEmailUtilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerEmailUtilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerEmailUtilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerEmailUtilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerEmailUtilities_Send(This,serverName,smtpPort,userName,password,replyTo,recipient,subject,body)	\
    ( (This)->lpVtbl -> Send(This,serverName,smtpPort,userName,password,replyTo,recipient,subject,body) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerEmailUtilities_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VisioLoggerEmailProcessor;

#ifdef __cplusplus

class DECLSPEC_UUID("D07CC650-9FD3-4270-9C10-6AE7938C62E1")
VisioLoggerEmailProcessor;
#endif

EXTERN_C const CLSID CLSID_VisioLoggerEmailActionProcessor;

#ifdef __cplusplus

class DECLSPEC_UUID("D07CC650-9FD3-4270-9C10-6AE7938C62E2")
VisioLoggerEmailActionProcessor;
#endif

EXTERN_C const CLSID CLSID_VisioLoggerEmailUtilities;

#ifdef __cplusplus

class DECLSPEC_UUID("75FD19CF-BB6A-4a9e-AEC0-E36B6B106BFA")
VisioLoggerEmailUtilities;
#endif
#endif /* __VisioLoggerEmailProcessor_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


