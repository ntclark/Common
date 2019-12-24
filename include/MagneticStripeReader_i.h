

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for MagneticStripeReader.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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


#ifndef __MagneticStripeReader_i_h__
#define __MagneticStripeReader_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMagneticStripeReader_FWD_DEFINED__
#define __IMagneticStripeReader_FWD_DEFINED__
typedef interface IMagneticStripeReader IMagneticStripeReader;

#endif 	/* __IMagneticStripeReader_FWD_DEFINED__ */


#ifndef __IMagneticStripeReaderEvents_FWD_DEFINED__
#define __IMagneticStripeReaderEvents_FWD_DEFINED__
typedef interface IMagneticStripeReaderEvents IMagneticStripeReaderEvents;

#endif 	/* __IMagneticStripeReaderEvents_FWD_DEFINED__ */


#ifndef __MagneticStripeReader_FWD_DEFINED__
#define __MagneticStripeReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class MagneticStripeReader MagneticStripeReader;
#else
typedef struct MagneticStripeReader MagneticStripeReader;
#endif /* __cplusplus */

#endif 	/* __MagneticStripeReader_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MagneticStripeReader_LIBRARY_DEFINED__
#define __MagneticStripeReader_LIBRARY_DEFINED__

/* library MagneticStripeReader */
/* [version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_MagneticStripeReader;

#ifndef __IMagneticStripeReader_INTERFACE_DEFINED__
#define __IMagneticStripeReader_INTERFACE_DEFINED__

/* interface IMagneticStripeReader */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IMagneticStripeReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B707E74-3C41-48a0-B02B-AD5FF46B23C7")
    IMagneticStripeReader : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionStatus( 
            /* [retval][out] */ long *pLong) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMagneticStripeReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMagneticStripeReader * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMagneticStripeReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMagneticStripeReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMagneticStripeReader * This);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMagneticStripeReader * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )( 
            IMagneticStripeReader * This,
            /* [retval][out] */ long *pLong);
        
        END_INTERFACE
    } IMagneticStripeReaderVtbl;

    interface IMagneticStripeReader
    {
        CONST_VTBL struct IMagneticStripeReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMagneticStripeReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMagneticStripeReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMagneticStripeReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMagneticStripeReader_Connect(This)	\
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMagneticStripeReader_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMagneticStripeReader_get_ConnectionStatus(This,pLong)	\
    ( (This)->lpVtbl -> get_ConnectionStatus(This,pLong) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMagneticStripeReader_INTERFACE_DEFINED__ */


#ifndef __IMagneticStripeReaderEvents_INTERFACE_DEFINED__
#define __IMagneticStripeReaderEvents_INTERFACE_DEFINED__

/* interface IMagneticStripeReaderEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IMagneticStripeReaderEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B707E74-3C41-48a0-B02B-AD5FF46B23C8")
    IMagneticStripeReaderEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CardData( 
            BSTR cardDataFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMagneticStripeReaderEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMagneticStripeReaderEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMagneticStripeReaderEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMagneticStripeReaderEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *CardData )( 
            IMagneticStripeReaderEvents * This,
            BSTR cardDataFile);
        
        END_INTERFACE
    } IMagneticStripeReaderEventsVtbl;

    interface IMagneticStripeReaderEvents
    {
        CONST_VTBL struct IMagneticStripeReaderEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMagneticStripeReaderEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMagneticStripeReaderEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMagneticStripeReaderEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMagneticStripeReaderEvents_CardData(This,cardDataFile)	\
    ( (This)->lpVtbl -> CardData(This,cardDataFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMagneticStripeReaderEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MagneticStripeReader;

#ifdef __cplusplus

class DECLSPEC_UUID("7B707E74-3C41-48a0-B02B-AD5FF46B23C9")
MagneticStripeReader;
#endif
#endif /* __MagneticStripeReader_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


