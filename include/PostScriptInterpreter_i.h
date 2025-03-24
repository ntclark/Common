

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Sources\COM Implementation\PostScriptInterpreter.odl:
    Oicf, W0, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
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


#ifndef __PostScriptInterpreter_i_h__
#define __PostScriptInterpreter_i_h__

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

#ifndef __IPostScript_FWD_DEFINED__
#define __IPostScript_FWD_DEFINED__
typedef interface IPostScript IPostScript;

#endif 	/* __IPostScript_FWD_DEFINED__ */


#ifndef __IPostScriptTakeText_FWD_DEFINED__
#define __IPostScriptTakeText_FWD_DEFINED__
typedef interface IPostScriptTakeText IPostScriptTakeText;

#endif 	/* __IPostScriptTakeText_FWD_DEFINED__ */


#ifndef __IPostScriptEvents_FWD_DEFINED__
#define __IPostScriptEvents_FWD_DEFINED__
typedef interface IPostScriptEvents IPostScriptEvents;

#endif 	/* __IPostScriptEvents_FWD_DEFINED__ */


#ifndef __PostScriptInterpreter_FWD_DEFINED__
#define __PostScriptInterpreter_FWD_DEFINED__

#ifdef __cplusplus
typedef class PostScriptInterpreter PostScriptInterpreter;
#else
typedef struct PostScriptInterpreter PostScriptInterpreter;
#endif /* __cplusplus */

#endif 	/* __PostScriptInterpreter_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PostScriptInterpreter_LIBRARY_DEFINED__
#define __PostScriptInterpreter_LIBRARY_DEFINED__

/* library PostScriptInterpreter */
/* [version][lcid][helpstring][uuid] */ 

typedef 
enum logLevel
    {
        none	= 0,
        verbose	= 1
    } 	logLevel;


EXTERN_C const IID LIBID_PostScriptInterpreter;

#ifndef __IPostScript_INTERFACE_DEFINED__
#define __IPostScript_INTERFACE_DEFINED__

/* interface IPostScript */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPostScript;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6B")
    IPostScript : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            char *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parse( 
            /* [defaultvalue] */ char *pszFileName = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseText( 
            char *pszText,
            long length,
            void *pvIPdfPage,
            void *pvIPostScriptTakeText,
            HDC hdc,
            RECT *prcWindowsClip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastError( 
            char **ppszError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogLevel( 
            logLevel theLogLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPostScript * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPostScript * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPostScript * This);
        
        DECLSPEC_XFGVIRT(IPostScript, SetSource)
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IPostScript * This,
            char *pszFileName);
        
        DECLSPEC_XFGVIRT(IPostScript, Parse)
        HRESULT ( STDMETHODCALLTYPE *Parse )( 
            IPostScript * This,
            /* [defaultvalue] */ char *pszFileName);
        
        DECLSPEC_XFGVIRT(IPostScript, ParseText)
        HRESULT ( STDMETHODCALLTYPE *ParseText )( 
            IPostScript * This,
            char *pszText,
            long length,
            void *pvIPdfPage,
            void *pvIPostScriptTakeText,
            HDC hdc,
            RECT *prcWindowsClip);
        
        DECLSPEC_XFGVIRT(IPostScript, GetLastError)
        HRESULT ( STDMETHODCALLTYPE *GetLastError )( 
            IPostScript * This,
            char **ppszError);
        
        DECLSPEC_XFGVIRT(IPostScript, LogLevel)
        HRESULT ( STDMETHODCALLTYPE *LogLevel )( 
            IPostScript * This,
            logLevel theLogLevel);
        
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


#define IPostScript_SetSource(This,pszFileName)	\
    ( (This)->lpVtbl -> SetSource(This,pszFileName) ) 

#define IPostScript_Parse(This,pszFileName)	\
    ( (This)->lpVtbl -> Parse(This,pszFileName) ) 

#define IPostScript_ParseText(This,pszText,length,pvIPdfPage,pvIPostScriptTakeText,hdc,prcWindowsClip)	\
    ( (This)->lpVtbl -> ParseText(This,pszText,length,pvIPdfPage,pvIPostScriptTakeText,hdc,prcWindowsClip) ) 

#define IPostScript_GetLastError(This,ppszError)	\
    ( (This)->lpVtbl -> GetLastError(This,ppszError) ) 

#define IPostScript_LogLevel(This,theLogLevel)	\
    ( (This)->lpVtbl -> LogLevel(This,theLogLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScript_INTERFACE_DEFINED__ */


#ifndef __IPostScriptTakeText_INTERFACE_DEFINED__
#define __IPostScriptTakeText_INTERFACE_DEFINED__

/* interface IPostScriptTakeText */
/* [uuid] */ 


EXTERN_C const IID IID_IPostScriptTakeText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6C")
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
        
        DECLSPEC_XFGVIRT(IPostScriptTakeText, TakeText)
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


#ifndef __IPostScriptEvents_INTERFACE_DEFINED__
#define __IPostScriptEvents_INTERFACE_DEFINED__

/* interface IPostScriptEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPostScriptEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6D")
    IPostScriptEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RenderChar( 
            POINT *pPoint,
            char theChar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderString( 
            POINT *pPoint,
            char *pszString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPostScriptEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPostScriptEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPostScriptEvents * This);
        
        DECLSPEC_XFGVIRT(IPostScriptEvents, RenderChar)
        HRESULT ( STDMETHODCALLTYPE *RenderChar )( 
            IPostScriptEvents * This,
            POINT *pPoint,
            char theChar);
        
        DECLSPEC_XFGVIRT(IPostScriptEvents, RenderString)
        HRESULT ( STDMETHODCALLTYPE *RenderString )( 
            IPostScriptEvents * This,
            POINT *pPoint,
            char *pszString);
        
        END_INTERFACE
    } IPostScriptEventsVtbl;

    interface IPostScriptEvents
    {
        CONST_VTBL struct IPostScriptEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScriptEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPostScriptEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPostScriptEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPostScriptEvents_RenderChar(This,pPoint,theChar)	\
    ( (This)->lpVtbl -> RenderChar(This,pPoint,theChar) ) 

#define IPostScriptEvents_RenderString(This,pPoint,pszString)	\
    ( (This)->lpVtbl -> RenderString(This,pPoint,pszString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScriptEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PostScriptInterpreter;

#ifdef __cplusplus

class DECLSPEC_UUID("AC9B7C38-86E1-4c17-8BE2-897AA5535A6E")
PostScriptInterpreter;
#endif
#endif /* __PostScriptInterpreter_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


