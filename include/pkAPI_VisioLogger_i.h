

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for pkAPI_VisioLogger.odl:
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


#ifndef __pkAPI_VisioLogger_i_h__
#define __pkAPI_VisioLogger_i_h__

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

#ifndef __IVisioLoggerSignaturePad_FWD_DEFINED__
#define __IVisioLoggerSignaturePad_FWD_DEFINED__
typedef interface IVisioLoggerSignaturePad IVisioLoggerSignaturePad;

#endif 	/* __IVisioLoggerSignaturePad_FWD_DEFINED__ */


#ifndef __IVisioLoggerSignaturePadEvents_FWD_DEFINED__
#define __IVisioLoggerSignaturePadEvents_FWD_DEFINED__
typedef interface IVisioLoggerSignaturePadEvents IVisioLoggerSignaturePadEvents;

#endif 	/* __IVisioLoggerSignaturePadEvents_FWD_DEFINED__ */


#ifndef __IVisioLoggerKioskPad_FWD_DEFINED__
#define __IVisioLoggerKioskPad_FWD_DEFINED__
typedef interface IVisioLoggerKioskPad IVisioLoggerKioskPad;

#endif 	/* __IVisioLoggerKioskPad_FWD_DEFINED__ */


#ifndef __IVisioLoggerKioskPadEvents_FWD_DEFINED__
#define __IVisioLoggerKioskPadEvents_FWD_DEFINED__
typedef interface IVisioLoggerKioskPadEvents IVisioLoggerKioskPadEvents;

#endif 	/* __IVisioLoggerKioskPadEvents_FWD_DEFINED__ */


#ifndef __SignaturePad_FWD_DEFINED__
#define __SignaturePad_FWD_DEFINED__

#ifdef __cplusplus
typedef class SignaturePad SignaturePad;
#else
typedef struct SignaturePad SignaturePad;
#endif /* __cplusplus */

#endif 	/* __SignaturePad_FWD_DEFINED__ */


#ifndef __KioskPad_FWD_DEFINED__
#define __KioskPad_FWD_DEFINED__

#ifdef __cplusplus
typedef class KioskPad KioskPad;
#else
typedef struct KioskPad KioskPad;
#endif /* __cplusplus */

#endif 	/* __KioskPad_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __InnoVisioNatePhabletSignaturePad_LIBRARY_DEFINED__
#define __InnoVisioNatePhabletSignaturePad_LIBRARY_DEFINED__

/* library InnoVisioNatePhabletSignaturePad */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_InnoVisioNatePhabletSignaturePad;

#ifndef __IVisioLoggerSignaturePad_INTERFACE_DEFINED__
#define __IVisioLoggerSignaturePad_INTERFACE_DEFINED__

/* interface IVisioLoggerSignaturePad */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerSignaturePad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6621BD-F297-4E50-A5CC-41D4A6AFC5E2")
    IVisioLoggerSignaturePad : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            BSTR padName,
            UINT_PTR hwndHost) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearDisplay( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowBitmap( 
            long x,
            long y,
            long width,
            long height,
            UINT_PTR hBitmap,
            long durationInMilliseconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddBitmap( 
            long x,
            long y,
            long width,
            long height,
            UINT_PTR hBitmap,
            long durationInMilliseconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlushBitmap( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Kill( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ long *__MIDL__IVisioLoggerSignaturePad0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasLCD( 
            /* [retval][out] */ long *__MIDL__IVisioLoggerSignaturePad0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *pWidth) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long xSize) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *pLCDYSize) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long ySize) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PadScaleX( 
            /* [retval][out] */ double *pPadScaleX) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PadScaleY( 
            /* [retval][out] */ double *pPadScaleY) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MenuMode( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MenuMode( 
            /* [in] */ long menuMode) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SmallFontSize( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MediumFontSize( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LargeFontSize( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SmallFontPixels( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MediumFontPixels( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LargeFontPixels( 
            /* [retval][out] */ long *pResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BitDepth( 
            /* [in] */ long bitDepth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NativeSizeImage( 
            /* [retval][out] */ UINT_PTR *pImageInPadDimensions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerSignaturePadVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerSignaturePad * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IVisioLoggerSignaturePad * This,
            BSTR padName,
            UINT_PTR hwndHost);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, Clear)
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, ClearDisplay)
        HRESULT ( STDMETHODCALLTYPE *ClearDisplay )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, ShowBitmap)
        HRESULT ( STDMETHODCALLTYPE *ShowBitmap )( 
            IVisioLoggerSignaturePad * This,
            long x,
            long y,
            long width,
            long height,
            UINT_PTR hBitmap,
            long durationInMilliseconds);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, AddBitmap)
        HRESULT ( STDMETHODCALLTYPE *AddBitmap )( 
            IVisioLoggerSignaturePad * This,
            long x,
            long y,
            long width,
            long height,
            UINT_PTR hBitmap,
            long durationInMilliseconds);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, FlushBitmap)
        HRESULT ( STDMETHODCALLTYPE *FlushBitmap )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, Start)
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, Stop)
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, Kill)
        HRESULT ( STDMETHODCALLTYPE *Kill )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_IsConnected)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IVisioLoggerSignaturePad0000);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_HasLCD)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasLCD )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IVisioLoggerSignaturePad0001);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_Width)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pWidth);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, put_Width)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IVisioLoggerSignaturePad * This,
            /* [in] */ long xSize);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_Height)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pLCDYSize);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, put_Height)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IVisioLoggerSignaturePad * This,
            /* [in] */ long ySize);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_PadScaleX)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PadScaleX )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ double *pPadScaleX);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_PadScaleY)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PadScaleY )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ double *pPadScaleY);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_MenuMode)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MenuMode )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, put_MenuMode)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MenuMode )( 
            IVisioLoggerSignaturePad * This,
            /* [in] */ long menuMode);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_SmallFontSize)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmallFontSize )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_MediumFontSize)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MediumFontSize )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_LargeFontSize)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LargeFontSize )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_SmallFontPixels)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmallFontPixels )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_MediumFontPixels)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MediumFontPixels )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_LargeFontPixels)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LargeFontPixels )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ long *pResult);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, put_BitDepth)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitDepth )( 
            IVisioLoggerSignaturePad * This,
            /* [in] */ long bitDepth);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, ShowProperties)
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IVisioLoggerSignaturePad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePad, get_NativeSizeImage)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeSizeImage )( 
            IVisioLoggerSignaturePad * This,
            /* [retval][out] */ UINT_PTR *pImageInPadDimensions);
        
        END_INTERFACE
    } IVisioLoggerSignaturePadVtbl;

    interface IVisioLoggerSignaturePad
    {
        CONST_VTBL struct IVisioLoggerSignaturePadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerSignaturePad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerSignaturePad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerSignaturePad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerSignaturePad_Initialize(This,padName,hwndHost)	\
    ( (This)->lpVtbl -> Initialize(This,padName,hwndHost) ) 

#define IVisioLoggerSignaturePad_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IVisioLoggerSignaturePad_ClearDisplay(This)	\
    ( (This)->lpVtbl -> ClearDisplay(This) ) 

#define IVisioLoggerSignaturePad_ShowBitmap(This,x,y,width,height,hBitmap,durationInMilliseconds)	\
    ( (This)->lpVtbl -> ShowBitmap(This,x,y,width,height,hBitmap,durationInMilliseconds) ) 

#define IVisioLoggerSignaturePad_AddBitmap(This,x,y,width,height,hBitmap,durationInMilliseconds)	\
    ( (This)->lpVtbl -> AddBitmap(This,x,y,width,height,hBitmap,durationInMilliseconds) ) 

#define IVisioLoggerSignaturePad_FlushBitmap(This)	\
    ( (This)->lpVtbl -> FlushBitmap(This) ) 

#define IVisioLoggerSignaturePad_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IVisioLoggerSignaturePad_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IVisioLoggerSignaturePad_Kill(This)	\
    ( (This)->lpVtbl -> Kill(This) ) 

#define IVisioLoggerSignaturePad_get_IsConnected(This,__MIDL__IVisioLoggerSignaturePad0000)	\
    ( (This)->lpVtbl -> get_IsConnected(This,__MIDL__IVisioLoggerSignaturePad0000) ) 

#define IVisioLoggerSignaturePad_get_HasLCD(This,__MIDL__IVisioLoggerSignaturePad0001)	\
    ( (This)->lpVtbl -> get_HasLCD(This,__MIDL__IVisioLoggerSignaturePad0001) ) 

#define IVisioLoggerSignaturePad_get_Width(This,pWidth)	\
    ( (This)->lpVtbl -> get_Width(This,pWidth) ) 

#define IVisioLoggerSignaturePad_put_Width(This,xSize)	\
    ( (This)->lpVtbl -> put_Width(This,xSize) ) 

#define IVisioLoggerSignaturePad_get_Height(This,pLCDYSize)	\
    ( (This)->lpVtbl -> get_Height(This,pLCDYSize) ) 

#define IVisioLoggerSignaturePad_put_Height(This,ySize)	\
    ( (This)->lpVtbl -> put_Height(This,ySize) ) 

#define IVisioLoggerSignaturePad_get_PadScaleX(This,pPadScaleX)	\
    ( (This)->lpVtbl -> get_PadScaleX(This,pPadScaleX) ) 

#define IVisioLoggerSignaturePad_get_PadScaleY(This,pPadScaleY)	\
    ( (This)->lpVtbl -> get_PadScaleY(This,pPadScaleY) ) 

#define IVisioLoggerSignaturePad_get_MenuMode(This,pResult)	\
    ( (This)->lpVtbl -> get_MenuMode(This,pResult) ) 

#define IVisioLoggerSignaturePad_put_MenuMode(This,menuMode)	\
    ( (This)->lpVtbl -> put_MenuMode(This,menuMode) ) 

#define IVisioLoggerSignaturePad_get_SmallFontSize(This,pResult)	\
    ( (This)->lpVtbl -> get_SmallFontSize(This,pResult) ) 

#define IVisioLoggerSignaturePad_get_MediumFontSize(This,pResult)	\
    ( (This)->lpVtbl -> get_MediumFontSize(This,pResult) ) 

#define IVisioLoggerSignaturePad_get_LargeFontSize(This,pResult)	\
    ( (This)->lpVtbl -> get_LargeFontSize(This,pResult) ) 

#define IVisioLoggerSignaturePad_get_SmallFontPixels(This,pResult)	\
    ( (This)->lpVtbl -> get_SmallFontPixels(This,pResult) ) 

#define IVisioLoggerSignaturePad_get_MediumFontPixels(This,pResult)	\
    ( (This)->lpVtbl -> get_MediumFontPixels(This,pResult) ) 

#define IVisioLoggerSignaturePad_get_LargeFontPixels(This,pResult)	\
    ( (This)->lpVtbl -> get_LargeFontPixels(This,pResult) ) 

#define IVisioLoggerSignaturePad_put_BitDepth(This,bitDepth)	\
    ( (This)->lpVtbl -> put_BitDepth(This,bitDepth) ) 

#define IVisioLoggerSignaturePad_ShowProperties(This)	\
    ( (This)->lpVtbl -> ShowProperties(This) ) 

#define IVisioLoggerSignaturePad_get_NativeSizeImage(This,pImageInPadDimensions)	\
    ( (This)->lpVtbl -> get_NativeSizeImage(This,pImageInPadDimensions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerSignaturePad_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerSignaturePadEvents_INTERFACE_DEFINED__
#define __IVisioLoggerSignaturePadEvents_INTERFACE_DEFINED__

/* interface IVisioLoggerSignaturePadEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerSignaturePadEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6621BD-F297-4E50-A5CC-41D4A6AFC5E3")
    IVisioLoggerSignaturePadEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TabletTimerEvent( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenDown( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenUp( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clicked( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenPoint( 
            long x,
            long y,
            float inkWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OptionSelected( 
            long optionNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerSignaturePadEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerSignaturePadEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerSignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerSignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, TabletTimerEvent)
        HRESULT ( STDMETHODCALLTYPE *TabletTimerEvent )( 
            IVisioLoggerSignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, PenDown)
        HRESULT ( STDMETHODCALLTYPE *PenDown )( 
            IVisioLoggerSignaturePadEvents * This,
            long x,
            long y);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, PenUp)
        HRESULT ( STDMETHODCALLTYPE *PenUp )( 
            IVisioLoggerSignaturePadEvents * This,
            long x,
            long y);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, Clicked)
        HRESULT ( STDMETHODCALLTYPE *Clicked )( 
            IVisioLoggerSignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, PenPoint)
        HRESULT ( STDMETHODCALLTYPE *PenPoint )( 
            IVisioLoggerSignaturePadEvents * This,
            long x,
            long y,
            float inkWeight);
        
        DECLSPEC_XFGVIRT(IVisioLoggerSignaturePadEvents, OptionSelected)
        HRESULT ( STDMETHODCALLTYPE *OptionSelected )( 
            IVisioLoggerSignaturePadEvents * This,
            long optionNumber);
        
        END_INTERFACE
    } IVisioLoggerSignaturePadEventsVtbl;

    interface IVisioLoggerSignaturePadEvents
    {
        CONST_VTBL struct IVisioLoggerSignaturePadEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerSignaturePadEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerSignaturePadEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerSignaturePadEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerSignaturePadEvents_TabletTimerEvent(This)	\
    ( (This)->lpVtbl -> TabletTimerEvent(This) ) 

#define IVisioLoggerSignaturePadEvents_PenDown(This,x,y)	\
    ( (This)->lpVtbl -> PenDown(This,x,y) ) 

#define IVisioLoggerSignaturePadEvents_PenUp(This,x,y)	\
    ( (This)->lpVtbl -> PenUp(This,x,y) ) 

#define IVisioLoggerSignaturePadEvents_Clicked(This)	\
    ( (This)->lpVtbl -> Clicked(This) ) 

#define IVisioLoggerSignaturePadEvents_PenPoint(This,x,y,inkWeight)	\
    ( (This)->lpVtbl -> PenPoint(This,x,y,inkWeight) ) 

#define IVisioLoggerSignaturePadEvents_OptionSelected(This,optionNumber)	\
    ( (This)->lpVtbl -> OptionSelected(This,optionNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerSignaturePadEvents_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerKioskPad_INTERFACE_DEFINED__
#define __IVisioLoggerKioskPad_INTERFACE_DEFINED__

/* interface IVisioLoggerKioskPad */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerKioskPad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6621BD-F297-4E50-A5CC-41D4A6AFC5E4")
    IVisioLoggerKioskPad : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ BSTR networkNameOrIPAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostWidth( 
            /* [in] */ long __MIDL__IVisioLoggerKioskPad0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HostHeight( 
            /* [in] */ long __MIDL__IVisioLoggerKioskPad0001) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Background( 
            /* [in] */ UINT_PTR hBitmap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerKioskPadVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerKioskPad * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerKioskPad * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerKioskPad * This);
        
        DECLSPEC_XFGVIRT(IVisioLoggerKioskPad, Connect)
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IVisioLoggerKioskPad * This,
            /* [in] */ BSTR networkNameOrIPAddress);
        
        DECLSPEC_XFGVIRT(IVisioLoggerKioskPad, HostWidth)
        HRESULT ( STDMETHODCALLTYPE *HostWidth )( 
            IVisioLoggerKioskPad * This,
            /* [in] */ long __MIDL__IVisioLoggerKioskPad0000);
        
        DECLSPEC_XFGVIRT(IVisioLoggerKioskPad, HostHeight)
        HRESULT ( STDMETHODCALLTYPE *HostHeight )( 
            IVisioLoggerKioskPad * This,
            /* [in] */ long __MIDL__IVisioLoggerKioskPad0001);
        
        DECLSPEC_XFGVIRT(IVisioLoggerKioskPad, put_Background)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Background )( 
            IVisioLoggerKioskPad * This,
            /* [in] */ UINT_PTR hBitmap);
        
        END_INTERFACE
    } IVisioLoggerKioskPadVtbl;

    interface IVisioLoggerKioskPad
    {
        CONST_VTBL struct IVisioLoggerKioskPadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerKioskPad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerKioskPad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerKioskPad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerKioskPad_Connect(This,networkNameOrIPAddress)	\
    ( (This)->lpVtbl -> Connect(This,networkNameOrIPAddress) ) 

#define IVisioLoggerKioskPad_HostWidth(This,__MIDL__IVisioLoggerKioskPad0000)	\
    ( (This)->lpVtbl -> HostWidth(This,__MIDL__IVisioLoggerKioskPad0000) ) 

#define IVisioLoggerKioskPad_HostHeight(This,__MIDL__IVisioLoggerKioskPad0001)	\
    ( (This)->lpVtbl -> HostHeight(This,__MIDL__IVisioLoggerKioskPad0001) ) 

#define IVisioLoggerKioskPad_put_Background(This,hBitmap)	\
    ( (This)->lpVtbl -> put_Background(This,hBitmap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerKioskPad_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerKioskPadEvents_INTERFACE_DEFINED__
#define __IVisioLoggerKioskPadEvents_INTERFACE_DEFINED__

/* interface IVisioLoggerKioskPadEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerKioskPadEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6621BD-F297-4E50-A5CC-41D4A6AFC5E5")
    IVisioLoggerKioskPadEvents : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerKioskPadEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerKioskPadEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerKioskPadEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerKioskPadEvents * This);
        
        END_INTERFACE
    } IVisioLoggerKioskPadEventsVtbl;

    interface IVisioLoggerKioskPadEvents
    {
        CONST_VTBL struct IVisioLoggerKioskPadEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerKioskPadEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerKioskPadEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerKioskPadEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerKioskPadEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SignaturePad;

#ifdef __cplusplus

class DECLSPEC_UUID("B5A6A777-EA35-4dd7-9A54-F47239125534")
SignaturePad;
#endif

EXTERN_C const CLSID CLSID_KioskPad;

#ifdef __cplusplus

class DECLSPEC_UUID("B5A6A777-EA35-4dd7-9A54-F47239125535")
KioskPad;
#endif
#endif /* __InnoVisioNatePhabletSignaturePad_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


