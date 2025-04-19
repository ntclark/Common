

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

#ifndef __IPostScriptInterpreter_FWD_DEFINED__
#define __IPostScriptInterpreter_FWD_DEFINED__
typedef interface IPostScriptInterpreter IPostScriptInterpreter;

#endif 	/* __IPostScriptInterpreter_FWD_DEFINED__ */


#ifndef __IPostScriptInterpreterTakeText_FWD_DEFINED__
#define __IPostScriptInterpreterTakeText_FWD_DEFINED__
typedef interface IPostScriptInterpreterTakeText IPostScriptInterpreterTakeText;

#endif 	/* __IPostScriptInterpreterTakeText_FWD_DEFINED__ */


#ifndef __IPostScriptInterpreterEvents_FWD_DEFINED__
#define __IPostScriptInterpreterEvents_FWD_DEFINED__
typedef interface IPostScriptInterpreterEvents IPostScriptInterpreterEvents;

#endif 	/* __IPostScriptInterpreterEvents_FWD_DEFINED__ */


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

#ifndef __IPostScriptInterpreter_INTERFACE_DEFINED__
#define __IPostScriptInterpreter_INTERFACE_DEFINED__

/* interface IPostScriptInterpreter */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPostScriptInterpreter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6B")
    IPostScriptInterpreter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            char *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Parse( 
            /* [defaultvalue] */ char *pszFileName = 0) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseText( 
            char *pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastError( 
            char **ppszError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogLevel( 
            logLevel theLogLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RendererLogLevel( 
            logLevel theLogLevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeristableProperties( 
            UINT_PTR *pProperties,
            long *pSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPeristableProperties( 
            UINT_PTR pProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptInterpreterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPostScriptInterpreter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPostScriptInterpreter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPostScriptInterpreter * This);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, SetSource)
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IPostScriptInterpreter * This,
            char *pszFileName);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, Parse)
        HRESULT ( STDMETHODCALLTYPE *Parse )( 
            IPostScriptInterpreter * This,
            /* [defaultvalue] */ char *pszFileName);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, ParseText)
        HRESULT ( STDMETHODCALLTYPE *ParseText )( 
            IPostScriptInterpreter * This,
            char *pszText);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, GetLastError)
        HRESULT ( STDMETHODCALLTYPE *GetLastError )( 
            IPostScriptInterpreter * This,
            char **ppszError);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, LogLevel)
        HRESULT ( STDMETHODCALLTYPE *LogLevel )( 
            IPostScriptInterpreter * This,
            logLevel theLogLevel);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, RendererLogLevel)
        HRESULT ( STDMETHODCALLTYPE *RendererLogLevel )( 
            IPostScriptInterpreter * This,
            logLevel theLogLevel);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, GetPeristableProperties)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPeristableProperties )( 
            IPostScriptInterpreter * This,
            UINT_PTR *pProperties,
            long *pSize);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreter, SetPeristableProperties)
        HRESULT ( STDMETHODCALLTYPE *SetPeristableProperties )( 
            IPostScriptInterpreter * This,
            UINT_PTR pProperties);
        
        END_INTERFACE
    } IPostScriptInterpreterVtbl;

    interface IPostScriptInterpreter
    {
        CONST_VTBL struct IPostScriptInterpreterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScriptInterpreter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPostScriptInterpreter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPostScriptInterpreter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPostScriptInterpreter_SetSource(This,pszFileName)	\
    ( (This)->lpVtbl -> SetSource(This,pszFileName) ) 

#define IPostScriptInterpreter_Parse(This,pszFileName)	\
    ( (This)->lpVtbl -> Parse(This,pszFileName) ) 

#define IPostScriptInterpreter_ParseText(This,pszText)	\
    ( (This)->lpVtbl -> ParseText(This,pszText) ) 

#define IPostScriptInterpreter_GetLastError(This,ppszError)	\
    ( (This)->lpVtbl -> GetLastError(This,ppszError) ) 

#define IPostScriptInterpreter_LogLevel(This,theLogLevel)	\
    ( (This)->lpVtbl -> LogLevel(This,theLogLevel) ) 

#define IPostScriptInterpreter_RendererLogLevel(This,theLogLevel)	\
    ( (This)->lpVtbl -> RendererLogLevel(This,theLogLevel) ) 

#define IPostScriptInterpreter_GetPeristableProperties(This,pProperties,pSize)	\
    ( (This)->lpVtbl -> GetPeristableProperties(This,pProperties,pSize) ) 

#define IPostScriptInterpreter_SetPeristableProperties(This,pProperties)	\
    ( (This)->lpVtbl -> SetPeristableProperties(This,pProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScriptInterpreter_INTERFACE_DEFINED__ */


#ifndef __IPostScriptInterpreterTakeText_INTERFACE_DEFINED__
#define __IPostScriptInterpreterTakeText_INTERFACE_DEFINED__

/* interface IPostScriptInterpreterTakeText */
/* [uuid] */ 


EXTERN_C const IID IID_IPostScriptInterpreterTakeText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6C")
    IPostScriptInterpreterTakeText
    {
    public:
        BEGIN_INTERFACE
        virtual HRESULT STDMETHODCALLTYPE TakeText( 
            RECT *pLocationPDF,
            char *pszText) = 0;
        
        END_INTERFACE
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptInterpreterTakeTextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreterTakeText, TakeText)
        HRESULT ( STDMETHODCALLTYPE *TakeText )( 
            IPostScriptInterpreterTakeText * This,
            RECT *pLocationPDF,
            char *pszText);
        
        END_INTERFACE
    } IPostScriptInterpreterTakeTextVtbl;

    interface IPostScriptInterpreterTakeText
    {
        CONST_VTBL struct IPostScriptInterpreterTakeTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScriptInterpreterTakeText_TakeText(This,pLocationPDF,pszText)	\
    ( (This)->lpVtbl -> TakeText(This,pLocationPDF,pszText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScriptInterpreterTakeText_INTERFACE_DEFINED__ */


#ifndef __IPostScriptInterpreterEvents_INTERFACE_DEFINED__
#define __IPostScriptInterpreterEvents_INTERFACE_DEFINED__

/* interface IPostScriptInterpreterEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPostScriptInterpreterEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC9B7C38-86E1-4c17-8BE2-897AA5535A6D")
    IPostScriptInterpreterEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RenderChar( 
            POINT *pPoint,
            char theChar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderString( 
            POINT *pPoint,
            char *pszString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ErrorNotification( 
            UINT_PTR pszError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPostScriptInterpreterEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPostScriptInterpreterEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPostScriptInterpreterEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPostScriptInterpreterEvents * This);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreterEvents, RenderChar)
        HRESULT ( STDMETHODCALLTYPE *RenderChar )( 
            IPostScriptInterpreterEvents * This,
            POINT *pPoint,
            char theChar);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreterEvents, RenderString)
        HRESULT ( STDMETHODCALLTYPE *RenderString )( 
            IPostScriptInterpreterEvents * This,
            POINT *pPoint,
            char *pszString);
        
        DECLSPEC_XFGVIRT(IPostScriptInterpreterEvents, ErrorNotification)
        HRESULT ( STDMETHODCALLTYPE *ErrorNotification )( 
            IPostScriptInterpreterEvents * This,
            UINT_PTR pszError);
        
        END_INTERFACE
    } IPostScriptInterpreterEventsVtbl;

    interface IPostScriptInterpreterEvents
    {
        CONST_VTBL struct IPostScriptInterpreterEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPostScriptInterpreterEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPostScriptInterpreterEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPostScriptInterpreterEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPostScriptInterpreterEvents_RenderChar(This,pPoint,theChar)	\
    ( (This)->lpVtbl -> RenderChar(This,pPoint,theChar) ) 

#define IPostScriptInterpreterEvents_RenderString(This,pPoint,pszString)	\
    ( (This)->lpVtbl -> RenderString(This,pPoint,pszString) ) 

#define IPostScriptInterpreterEvents_ErrorNotification(This,pszError)	\
    ( (This)->lpVtbl -> ErrorNotification(This,pszError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPostScriptInterpreterEvents_INTERFACE_DEFINED__ */


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


