

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Sep 26 15:06:56 2017
 */
/* Compiler settings for PrintingBackEnd.odl:
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


#ifndef __PrintingBackEnd_i_h__
#define __PrintingBackEnd_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPrintingBackEndAdditional_FWD_DEFINED__
#define __IPrintingBackEndAdditional_FWD_DEFINED__
typedef interface IPrintingBackEndAdditional IPrintingBackEndAdditional;

#endif 	/* __IPrintingBackEndAdditional_FWD_DEFINED__ */


#ifndef __CursiVisionPrintingBackEnd_FWD_DEFINED__
#define __CursiVisionPrintingBackEnd_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionPrintingBackEnd CursiVisionPrintingBackEnd;
#else
typedef struct CursiVisionPrintingBackEnd CursiVisionPrintingBackEnd;
#endif /* __cplusplus */

#endif 	/* __CursiVisionPrintingBackEnd_FWD_DEFINED__ */


#ifndef __CursiVisionPrintingBackEndAdditional_FWD_DEFINED__
#define __CursiVisionPrintingBackEndAdditional_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionPrintingBackEndAdditional CursiVisionPrintingBackEndAdditional;
#else
typedef struct CursiVisionPrintingBackEndAdditional CursiVisionPrintingBackEndAdditional;
#endif /* __cplusplus */

#endif 	/* __CursiVisionPrintingBackEndAdditional_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionPrintingBackEnd_LIBRARY_DEFINED__
#define __CursiVisionPrintingBackEnd_LIBRARY_DEFINED__

/* library CursiVisionPrintingBackEnd */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CursiVisionPrintingBackEnd;

#ifndef __IPrintingBackEndAdditional_INTERFACE_DEFINED__
#define __IPrintingBackEndAdditional_INTERFACE_DEFINED__

/* interface IPrintingBackEndAdditional */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrintingBackEndAdditional;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("800A9812-5DC2-402d-8BF2-131E50384FF1")
    IPrintingBackEndAdditional : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeMainWindow( 
            HWND hwndMainWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrintDocument( 
            char *pszDocument) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrintingBackEndAdditionalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrintingBackEndAdditional * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrintingBackEndAdditional * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrintingBackEndAdditional * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeMainWindow )( 
            IPrintingBackEndAdditional * This,
            HWND hwndMainWindow);
        
        HRESULT ( STDMETHODCALLTYPE *PrintDocument )( 
            IPrintingBackEndAdditional * This,
            char *pszDocument);
        
        END_INTERFACE
    } IPrintingBackEndAdditionalVtbl;

    interface IPrintingBackEndAdditional
    {
        CONST_VTBL struct IPrintingBackEndAdditionalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrintingBackEndAdditional_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrintingBackEndAdditional_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrintingBackEndAdditional_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrintingBackEndAdditional_TakeMainWindow(This,hwndMainWindow)	\
    ( (This)->lpVtbl -> TakeMainWindow(This,hwndMainWindow) ) 

#define IPrintingBackEndAdditional_PrintDocument(This,pszDocument)	\
    ( (This)->lpVtbl -> PrintDocument(This,pszDocument) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrintingBackEndAdditional_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionPrintingBackEnd;

#ifdef __cplusplus

class DECLSPEC_UUID("800A9812-5DC2-402d-8BF2-131E50384FF0")
CursiVisionPrintingBackEnd;
#endif

EXTERN_C const CLSID CLSID_CursiVisionPrintingBackEndAdditional;

#ifdef __cplusplus

class DECLSPEC_UUID("800A9812-5DC2-402d-8BF2-131E50384FF2")
CursiVisionPrintingBackEndAdditional;
#endif
#endif /* __CursiVisionPrintingBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

