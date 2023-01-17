

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\PostScript.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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


#ifndef __PostScript_i_h__
#define __PostScript_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPostScript_FWD_DEFINED__
#define __IPostScript_FWD_DEFINED__
typedef interface IPostScript IPostScript;

#endif 	/* __IPostScript_FWD_DEFINED__ */


#ifndef __IPostScriptTakeText_FWD_DEFINED__
#define __IPostScriptTakeText_FWD_DEFINED__
typedef interface IPostScriptTakeText IPostScriptTakeText;

#endif 	/* __IPostScriptTakeText_FWD_DEFINED__ */


#ifndef __PostScript_FWD_DEFINED__
#define __PostScript_FWD_DEFINED__

#ifdef __cplusplus
typedef class PostScript PostScript;
#else
typedef struct PostScript PostScript;
#endif /* __cplusplus */

#endif 	/* __PostScript_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PostScript_LIBRARY_DEFINED__
#define __PostScript_LIBRARY_DEFINED__

/* library PostScript */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_PostScript;

#ifndef __IPostScript_INTERFACE_DEFINED__
#define __IPostScript_INTERFACE_DEFINED__

/* interface IPostScript */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPostScript;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A5B")
    IPostScript : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Parse( 
            wchar_t *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Convert( 
            wchar_t *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseText( 
            char *pszText,
            long length,
            void *pvIPdfPage,
            void *pvIPostScriptTakeText,
            HDC hdc,
            RECT *prcWindowsClip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastError( 
            char **ppszError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPostScript * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPostScript * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPostScript * This);
        
        HRESULT ( STDMETHODCALLTYPE *Parse )( 
            IPostScript * This,
            wchar_t *pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *Convert )( 
            IPostScript * This,
            wchar_t *pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *ParseText )( 
            IPostScript * This,
            char *pszText,
            long length,
            void *pvIPdfPage,
            void *pvIPostScriptTakeText,
            HDC hdc,
            RECT *prcWindowsClip);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastError )( 
            IPostScript * This,
            char **ppszError);
        
        END_INTERFACE
    } IPostScriptVtbl;

    interface IPostScript
    {
        CONST_VTBL struct IPostScriptVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScript_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPostScript_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPostScript_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPostScript_Parse(This,pszFileName)	\
    ( (This)->lpVtbl -> Parse(This,pszFileName) ) 

#define IPostScript_Convert(This,pszFileName)	\
    ( (This)->lpVtbl -> Convert(This,pszFileName) ) 

#define IPostScript_ParseText(This,pszText,length,pvIPdfPage,pvIPostScriptTakeText,hdc,prcWindowsClip)	\
    ( (This)->lpVtbl -> ParseText(This,pszText,length,pvIPdfPage,pvIPostScriptTakeText,hdc,prcWindowsClip) ) 

#define IPostScript_GetLastError(This,ppszError)	\
    ( (This)->lpVtbl -> GetLastError(This,ppszError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScript_INTERFACE_DEFINED__ */


#ifndef __IPostScriptTakeText_INTERFACE_DEFINED__
#define __IPostScriptTakeText_INTERFACE_DEFINED__

/* interface IPostScriptTakeText */
/* [uuid] */ 


EXTERN_C const IID IID_IPostScriptTakeText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A5C")
    IPostScriptTakeText
    {
    public:
        BEGIN_INTERFACE
        virtual HRESULT STDMETHODCALLTYPE TakeText( 
            RECT *pLocationPDF,
            char *pszText) = 0;
        
        END_INTERFACE
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptTakeTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *TakeText )( 
            IPostScriptTakeText * This,
            RECT *pLocationPDF,
            char *pszText);
        
        END_INTERFACE
    } IPostScriptTakeTextVtbl;

    interface IPostScriptTakeText
    {
        CONST_VTBL struct IPostScriptTakeTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScriptTakeText_TakeText(This,pLocationPDF,pszText)	\
    ( (This)->lpVtbl -> TakeText(This,pLocationPDF,pszText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScriptTakeText_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PostScript;

#ifdef __cplusplus

class DECLSPEC_UUID("AC9B7C38-86E1-4c17-8BE2-897AA5535A5E")
PostScript;
#endif
#endif /* __PostScript_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


