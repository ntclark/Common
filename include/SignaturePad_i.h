

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for C:\Development\Common\source\SignaturePad.odl:
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


#ifndef __SignaturePad_i_h__
#define __SignaturePad_i_h__

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

#ifndef __ISignaturePad_FWD_DEFINED__
#define __ISignaturePad_FWD_DEFINED__
typedef interface ISignaturePad ISignaturePad;

#endif 	/* __ISignaturePad_FWD_DEFINED__ */


#ifndef __ISignaturePadEvents_FWD_DEFINED__
#define __ISignaturePadEvents_FWD_DEFINED__
typedef interface ISignaturePadEvents ISignaturePadEvents;

#endif 	/* __ISignaturePadEvents_FWD_DEFINED__ */


#ifndef __CursiVisionSignaturePad_FWD_DEFINED__
#define __CursiVisionSignaturePad_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionSignaturePad CursiVisionSignaturePad;
#else
typedef struct CursiVisionSignaturePad CursiVisionSignaturePad;
#endif /* __cplusplus */

#endif 	/* __CursiVisionSignaturePad_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionSignaturePad_LIBRARY_DEFINED__
#define __CursiVisionSignaturePad_LIBRARY_DEFINED__

/* library CursiVisionSignaturePad */
/* [version][lcid][helpstring][helpfile][uuid] */ 


DEFINE_GUID(LIBID_CursiVisionSignaturePad,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x20);

#ifndef __ISignaturePad_INTERFACE_DEFINED__
#define __ISignaturePad_INTERFACE_DEFINED__

/* interface ISignaturePad */
/* [object][unique][nonextensible][helpstring][uuid] */ 


DEFINE_GUID(IID_ISignaturePad,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x21);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570321")
    ISignaturePad : public IUnknown
    {
    public:
        virtual long STDMETHODCALLTYPE TakeFrameWindow( 
            HWND hwndFrame) = 0;
        
        virtual long STDMETHODCALLTYPE HostHandle( 
            HWND hwnd) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE Load( 
            char *pszName,
            HWND hwndClientHost,
            void *pvICursiVisionServices) = 0;
        
        virtual long STDMETHODCALLTYPE Start( void) = 0;
        
        virtual long STDMETHODCALLTYPE Unload( void) = 0;
        
        virtual long STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE IsActive( void) = 0;
        
        virtual long STDMETHODCALLTYPE Width( void) = 0;
        
        virtual long STDMETHODCALLTYPE Height( void) = 0;
        
        virtual long STDMETHODCALLTYPE LCDWidth( void) = 0;
        
        virtual long STDMETHODCALLTYPE LCDHeight( void) = 0;
        
        virtual double STDMETHODCALLTYPE WidthInInches( void) = 0;
        
        virtual double STDMETHODCALLTYPE HeightInInches( void) = 0;
        
        virtual double STDMETHODCALLTYPE PadToLCDScaleX( void) = 0;
        
        virtual double STDMETHODCALLTYPE PadToLCDScaleY( void) = 0;
        
        virtual double STDMETHODCALLTYPE PadTimeout( void) = 0;
        
        virtual double STDMETHODCALLTYPE SetZoomFactor( 
            double zoomFactor) = 0;
        
        virtual char *STDMETHODCALLTYPE DeviceName( void) = 0;
        
        virtual char *STDMETHODCALLTYPE DeviceProductName( void) = 0;
        
        virtual char *STDMETHODCALLTYPE DeviceModel( void) = 0;
        
        virtual long STDMETHODCALLTYPE IsLCD( void) = 0;
        
        virtual long STDMETHODCALLTYPE IsFullPage( void) = 0;
        
        virtual long STDMETHODCALLTYPE HasScaling( void) = 0;
        
        virtual long STDMETHODCALLTYPE IsTabletPC( void) = 0;
        
        virtual void STDMETHODCALLTYPE PrepareForPage( 
            RECT *pRect) = 0;
        
        virtual void STDMETHODCALLTYPE DisplaySignatureBitmapFile( 
            char *pszImageFile,
            /* [defaultvalue][optional] */ BOOL populatePad = 0,
            /* [defaultvalue][optional] */ BOOL isLastPage = 1) = 0;
        
        virtual void STDMETHODCALLTYPE DisplaySignatureBitmapHandle( 
            UINT_PTR hBitmap,
            HDC hdc,
            long x,
            long y,
            long cx,
            long cy) = 0;
        
        virtual void STDMETHODCALLTYPE OverlaySignatureBitmapHandle( 
            UINT_PTR hBitmap,
            HDC hdc,
            long x,
            long y,
            long cx,
            long cy) = 0;
        
        virtual void STDMETHODCALLTYPE DisplayHotSpotFile( 
            char *pszFile,
            long eventID,
            long x,
            long y,
            long cx,
            long cy) = 0;
        
        virtual void STDMETHODCALLTYPE DisplayHotSpotHandle( 
            UINT_PTR hBitmap,
            HDC hdc,
            long eventID,
            long x,
            long y,
            long cx,
            long cy) = 0;
        
        virtual void STDMETHODCALLTYPE DisplayOk( 
            long eventID) = 0;
        
        virtual void STDMETHODCALLTYPE DisplayClear( 
            long eventID) = 0;
        
        virtual void STDMETHODCALLTYPE DisplayCancel( 
            long eventID) = 0;
        
        virtual short STDMETHODCALLTYPE KeyPadQueryHotSpot( 
            short KeyCode) = 0;
        
        virtual void STDMETHODCALLTYPE SetBackgroundFile( 
            BSTR bstrFileName) = 0;
        
        virtual void STDMETHODCALLTYPE SetBackgroundHandle( 
            OLE_HANDLE __MIDL__ISignaturePad0000) = 0;
        
        virtual void STDMETHODCALLTYPE GetRect( 
            RECT *__MIDL__ISignaturePad0001) = 0;
        
        virtual void STDMETHODCALLTYPE GetHotSpot( 
            long hotSpotNumber,
            RECT *__MIDL__ISignaturePad0002) = 0;
        
        virtual long STDMETHODCALLTYPE ClearInk( void) = 0;
        
        virtual long STDMETHODCALLTYPE SignatureData( void) = 0;
        
        virtual double *STDMETHODCALLTYPE SignatureDataX( void) = 0;
        
        virtual double *STDMETHODCALLTYPE SignatureDataY( void) = 0;
        
        virtual void STDMETHODCALLTYPE ClearSignatureData( void) = 0;
        
        virtual void STDMETHODCALLTYPE DeleteSignatureData( void) = 0;
        
        virtual void STDMETHODCALLTYPE PutLCDCaptureMode( 
            long mode) = 0;
        
        virtual void STDMETHODCALLTYPE TabletState( 
            long __MIDL__ISignaturePad0003) = 0;
        
        virtual BOOL STDMETHODCALLTYPE EnableTablet( void) = 0;
        
        virtual void STDMETHODCALLTYPE ClearTablet( void) = 0;
        
        virtual BOOL STDMETHODCALLTYPE DisableTablet( void) = 0;
        
        virtual void STDMETHODCALLTYPE LCDRefresh( 
            long Mode,
            long XPos,
            long YPos,
            long XSize,
            long YSize) = 0;
        
        virtual void STDMETHODCALLTYPE SetSigWindow( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetInkArea( void) = 0;
        
        virtual long STDMETHODCALLTYPE GetPixelBits( 
            HDC __MIDL__ISignaturePad0004) = 0;
        
        virtual long STDMETHODCALLTYPE MaximumX( void) = 0;
        
        virtual long STDMETHODCALLTYPE MaximumY( void) = 0;
        
        virtual long STDMETHODCALLTYPE MinimumX( void) = 0;
        
        virtual long STDMETHODCALLTYPE MinimumY( void) = 0;
        
        virtual long STDMETHODCALLTYPE MaximumSignableY( void) = 0;
        
        virtual long STDMETHODCALLTYPE FireOption( 
            long optionNumber) = 0;
        
        virtual long STDMETHODCALLTYPE OriginPointX( void) = 0;
        
        virtual long STDMETHODCALLTYPE OriginPointY( void) = 0;
        
        virtual long STDMETHODCALLTYPE BaselinePointX( void) = 0;
        
        virtual long STDMETHODCALLTYPE BaselinePointY( void) = 0;
        
        virtual DWORD STDMETHODCALLTYPE InkColor( void) = 0;
        
        virtual long STDMETHODCALLTYPE InkWeight( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignaturePadVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignaturePad * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, TakeFrameWindow)
        long ( STDMETHODCALLTYPE *TakeFrameWindow )( 
            ISignaturePad * This,
            HWND hwndFrame);
        
        DECLSPEC_XFGVIRT(ISignaturePad, HostHandle)
        long ( STDMETHODCALLTYPE *HostHandle )( 
            ISignaturePad * This,
            HWND hwnd);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Load)
        /* [helpstring] */ long ( STDMETHODCALLTYPE *Load )( 
            ISignaturePad * This,
            char *pszName,
            HWND hwndClientHost,
            void *pvICursiVisionServices);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Start)
        long ( STDMETHODCALLTYPE *Start )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Unload)
        long ( STDMETHODCALLTYPE *Unload )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Stop)
        long ( STDMETHODCALLTYPE *Stop )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, IsActive)
        BOOL ( STDMETHODCALLTYPE *IsActive )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Width)
        long ( STDMETHODCALLTYPE *Width )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, Height)
        long ( STDMETHODCALLTYPE *Height )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, LCDWidth)
        long ( STDMETHODCALLTYPE *LCDWidth )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, LCDHeight)
        long ( STDMETHODCALLTYPE *LCDHeight )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, WidthInInches)
        double ( STDMETHODCALLTYPE *WidthInInches )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, HeightInInches)
        double ( STDMETHODCALLTYPE *HeightInInches )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, PadToLCDScaleX)
        double ( STDMETHODCALLTYPE *PadToLCDScaleX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, PadToLCDScaleY)
        double ( STDMETHODCALLTYPE *PadToLCDScaleY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, PadTimeout)
        double ( STDMETHODCALLTYPE *PadTimeout )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SetZoomFactor)
        double ( STDMETHODCALLTYPE *SetZoomFactor )( 
            ISignaturePad * This,
            double zoomFactor);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DeviceName)
        char *( STDMETHODCALLTYPE *DeviceName )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DeviceProductName)
        char *( STDMETHODCALLTYPE *DeviceProductName )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DeviceModel)
        char *( STDMETHODCALLTYPE *DeviceModel )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, IsLCD)
        long ( STDMETHODCALLTYPE *IsLCD )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, IsFullPage)
        long ( STDMETHODCALLTYPE *IsFullPage )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, HasScaling)
        long ( STDMETHODCALLTYPE *HasScaling )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, IsTabletPC)
        long ( STDMETHODCALLTYPE *IsTabletPC )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, PrepareForPage)
        void ( STDMETHODCALLTYPE *PrepareForPage )( 
            ISignaturePad * This,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplaySignatureBitmapFile)
        void ( STDMETHODCALLTYPE *DisplaySignatureBitmapFile )( 
            ISignaturePad * This,
            char *pszImageFile,
            /* [defaultvalue][optional] */ BOOL populatePad,
            /* [defaultvalue][optional] */ BOOL isLastPage);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplaySignatureBitmapHandle)
        void ( STDMETHODCALLTYPE *DisplaySignatureBitmapHandle )( 
            ISignaturePad * This,
            UINT_PTR hBitmap,
            HDC hdc,
            long x,
            long y,
            long cx,
            long cy);
        
        DECLSPEC_XFGVIRT(ISignaturePad, OverlaySignatureBitmapHandle)
        void ( STDMETHODCALLTYPE *OverlaySignatureBitmapHandle )( 
            ISignaturePad * This,
            UINT_PTR hBitmap,
            HDC hdc,
            long x,
            long y,
            long cx,
            long cy);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplayHotSpotFile)
        void ( STDMETHODCALLTYPE *DisplayHotSpotFile )( 
            ISignaturePad * This,
            char *pszFile,
            long eventID,
            long x,
            long y,
            long cx,
            long cy);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplayHotSpotHandle)
        void ( STDMETHODCALLTYPE *DisplayHotSpotHandle )( 
            ISignaturePad * This,
            UINT_PTR hBitmap,
            HDC hdc,
            long eventID,
            long x,
            long y,
            long cx,
            long cy);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplayOk)
        void ( STDMETHODCALLTYPE *DisplayOk )( 
            ISignaturePad * This,
            long eventID);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplayClear)
        void ( STDMETHODCALLTYPE *DisplayClear )( 
            ISignaturePad * This,
            long eventID);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisplayCancel)
        void ( STDMETHODCALLTYPE *DisplayCancel )( 
            ISignaturePad * This,
            long eventID);
        
        DECLSPEC_XFGVIRT(ISignaturePad, KeyPadQueryHotSpot)
        short ( STDMETHODCALLTYPE *KeyPadQueryHotSpot )( 
            ISignaturePad * This,
            short KeyCode);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SetBackgroundFile)
        void ( STDMETHODCALLTYPE *SetBackgroundFile )( 
            ISignaturePad * This,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SetBackgroundHandle)
        void ( STDMETHODCALLTYPE *SetBackgroundHandle )( 
            ISignaturePad * This,
            OLE_HANDLE __MIDL__ISignaturePad0000);
        
        DECLSPEC_XFGVIRT(ISignaturePad, GetRect)
        void ( STDMETHODCALLTYPE *GetRect )( 
            ISignaturePad * This,
            RECT *__MIDL__ISignaturePad0001);
        
        DECLSPEC_XFGVIRT(ISignaturePad, GetHotSpot)
        void ( STDMETHODCALLTYPE *GetHotSpot )( 
            ISignaturePad * This,
            long hotSpotNumber,
            RECT *__MIDL__ISignaturePad0002);
        
        DECLSPEC_XFGVIRT(ISignaturePad, ClearInk)
        long ( STDMETHODCALLTYPE *ClearInk )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SignatureData)
        long ( STDMETHODCALLTYPE *SignatureData )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SignatureDataX)
        double *( STDMETHODCALLTYPE *SignatureDataX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SignatureDataY)
        double *( STDMETHODCALLTYPE *SignatureDataY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, ClearSignatureData)
        void ( STDMETHODCALLTYPE *ClearSignatureData )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DeleteSignatureData)
        void ( STDMETHODCALLTYPE *DeleteSignatureData )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, PutLCDCaptureMode)
        void ( STDMETHODCALLTYPE *PutLCDCaptureMode )( 
            ISignaturePad * This,
            long mode);
        
        DECLSPEC_XFGVIRT(ISignaturePad, TabletState)
        void ( STDMETHODCALLTYPE *TabletState )( 
            ISignaturePad * This,
            long __MIDL__ISignaturePad0003);
        
        DECLSPEC_XFGVIRT(ISignaturePad, EnableTablet)
        BOOL ( STDMETHODCALLTYPE *EnableTablet )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, ClearTablet)
        void ( STDMETHODCALLTYPE *ClearTablet )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, DisableTablet)
        BOOL ( STDMETHODCALLTYPE *DisableTablet )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, LCDRefresh)
        void ( STDMETHODCALLTYPE *LCDRefresh )( 
            ISignaturePad * This,
            long Mode,
            long XPos,
            long YPos,
            long XSize,
            long YSize);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SetSigWindow)
        void ( STDMETHODCALLTYPE *SetSigWindow )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, SetInkArea)
        void ( STDMETHODCALLTYPE *SetInkArea )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, GetPixelBits)
        long ( STDMETHODCALLTYPE *GetPixelBits )( 
            ISignaturePad * This,
            HDC __MIDL__ISignaturePad0004);
        
        DECLSPEC_XFGVIRT(ISignaturePad, MaximumX)
        long ( STDMETHODCALLTYPE *MaximumX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, MaximumY)
        long ( STDMETHODCALLTYPE *MaximumY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, MinimumX)
        long ( STDMETHODCALLTYPE *MinimumX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, MinimumY)
        long ( STDMETHODCALLTYPE *MinimumY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, MaximumSignableY)
        long ( STDMETHODCALLTYPE *MaximumSignableY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, FireOption)
        long ( STDMETHODCALLTYPE *FireOption )( 
            ISignaturePad * This,
            long optionNumber);
        
        DECLSPEC_XFGVIRT(ISignaturePad, OriginPointX)
        long ( STDMETHODCALLTYPE *OriginPointX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, OriginPointY)
        long ( STDMETHODCALLTYPE *OriginPointY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, BaselinePointX)
        long ( STDMETHODCALLTYPE *BaselinePointX )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, BaselinePointY)
        long ( STDMETHODCALLTYPE *BaselinePointY )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, InkColor)
        DWORD ( STDMETHODCALLTYPE *InkColor )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, InkWeight)
        long ( STDMETHODCALLTYPE *InkWeight )( 
            ISignaturePad * This);
        
        DECLSPEC_XFGVIRT(ISignaturePad, ShowProperties)
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            ISignaturePad * This);
        
        END_INTERFACE
    } ISignaturePadVtbl;

    interface ISignaturePad
    {
        CONST_VTBL struct ISignaturePadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignaturePad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignaturePad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignaturePad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignaturePad_TakeFrameWindow(This,hwndFrame)	\
    ( (This)->lpVtbl -> TakeFrameWindow(This,hwndFrame) ) 

#define ISignaturePad_HostHandle(This,hwnd)	\
    ( (This)->lpVtbl -> HostHandle(This,hwnd) ) 

#define ISignaturePad_Load(This,pszName,hwndClientHost,pvICursiVisionServices)	\
    ( (This)->lpVtbl -> Load(This,pszName,hwndClientHost,pvICursiVisionServices) ) 

#define ISignaturePad_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define ISignaturePad_Unload(This)	\
    ( (This)->lpVtbl -> Unload(This) ) 

#define ISignaturePad_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ISignaturePad_IsActive(This)	\
    ( (This)->lpVtbl -> IsActive(This) ) 

#define ISignaturePad_Width(This)	\
    ( (This)->lpVtbl -> Width(This) ) 

#define ISignaturePad_Height(This)	\
    ( (This)->lpVtbl -> Height(This) ) 

#define ISignaturePad_LCDWidth(This)	\
    ( (This)->lpVtbl -> LCDWidth(This) ) 

#define ISignaturePad_LCDHeight(This)	\
    ( (This)->lpVtbl -> LCDHeight(This) ) 

#define ISignaturePad_WidthInInches(This)	\
    ( (This)->lpVtbl -> WidthInInches(This) ) 

#define ISignaturePad_HeightInInches(This)	\
    ( (This)->lpVtbl -> HeightInInches(This) ) 

#define ISignaturePad_PadToLCDScaleX(This)	\
    ( (This)->lpVtbl -> PadToLCDScaleX(This) ) 

#define ISignaturePad_PadToLCDScaleY(This)	\
    ( (This)->lpVtbl -> PadToLCDScaleY(This) ) 

#define ISignaturePad_PadTimeout(This)	\
    ( (This)->lpVtbl -> PadTimeout(This) ) 

#define ISignaturePad_SetZoomFactor(This,zoomFactor)	\
    ( (This)->lpVtbl -> SetZoomFactor(This,zoomFactor) ) 

#define ISignaturePad_DeviceName(This)	\
    ( (This)->lpVtbl -> DeviceName(This) ) 

#define ISignaturePad_DeviceProductName(This)	\
    ( (This)->lpVtbl -> DeviceProductName(This) ) 

#define ISignaturePad_DeviceModel(This)	\
    ( (This)->lpVtbl -> DeviceModel(This) ) 

#define ISignaturePad_IsLCD(This)	\
    ( (This)->lpVtbl -> IsLCD(This) ) 

#define ISignaturePad_IsFullPage(This)	\
    ( (This)->lpVtbl -> IsFullPage(This) ) 

#define ISignaturePad_HasScaling(This)	\
    ( (This)->lpVtbl -> HasScaling(This) ) 

#define ISignaturePad_IsTabletPC(This)	\
    ( (This)->lpVtbl -> IsTabletPC(This) ) 

#define ISignaturePad_PrepareForPage(This,pRect)	\
    ( (This)->lpVtbl -> PrepareForPage(This,pRect) ) 

#define ISignaturePad_DisplaySignatureBitmapFile(This,pszImageFile,populatePad,isLastPage)	\
    ( (This)->lpVtbl -> DisplaySignatureBitmapFile(This,pszImageFile,populatePad,isLastPage) ) 

#define ISignaturePad_DisplaySignatureBitmapHandle(This,hBitmap,hdc,x,y,cx,cy)	\
    ( (This)->lpVtbl -> DisplaySignatureBitmapHandle(This,hBitmap,hdc,x,y,cx,cy) ) 

#define ISignaturePad_OverlaySignatureBitmapHandle(This,hBitmap,hdc,x,y,cx,cy)	\
    ( (This)->lpVtbl -> OverlaySignatureBitmapHandle(This,hBitmap,hdc,x,y,cx,cy) ) 

#define ISignaturePad_DisplayHotSpotFile(This,pszFile,eventID,x,y,cx,cy)	\
    ( (This)->lpVtbl -> DisplayHotSpotFile(This,pszFile,eventID,x,y,cx,cy) ) 

#define ISignaturePad_DisplayHotSpotHandle(This,hBitmap,hdc,eventID,x,y,cx,cy)	\
    ( (This)->lpVtbl -> DisplayHotSpotHandle(This,hBitmap,hdc,eventID,x,y,cx,cy) ) 

#define ISignaturePad_DisplayOk(This,eventID)	\
    ( (This)->lpVtbl -> DisplayOk(This,eventID) ) 

#define ISignaturePad_DisplayClear(This,eventID)	\
    ( (This)->lpVtbl -> DisplayClear(This,eventID) ) 

#define ISignaturePad_DisplayCancel(This,eventID)	\
    ( (This)->lpVtbl -> DisplayCancel(This,eventID) ) 

#define ISignaturePad_KeyPadQueryHotSpot(This,KeyCode)	\
    ( (This)->lpVtbl -> KeyPadQueryHotSpot(This,KeyCode) ) 

#define ISignaturePad_SetBackgroundFile(This,bstrFileName)	\
    ( (This)->lpVtbl -> SetBackgroundFile(This,bstrFileName) ) 

#define ISignaturePad_SetBackgroundHandle(This,__MIDL__ISignaturePad0000)	\
    ( (This)->lpVtbl -> SetBackgroundHandle(This,__MIDL__ISignaturePad0000) ) 

#define ISignaturePad_GetRect(This,__MIDL__ISignaturePad0001)	\
    ( (This)->lpVtbl -> GetRect(This,__MIDL__ISignaturePad0001) ) 

#define ISignaturePad_GetHotSpot(This,hotSpotNumber,__MIDL__ISignaturePad0002)	\
    ( (This)->lpVtbl -> GetHotSpot(This,hotSpotNumber,__MIDL__ISignaturePad0002) ) 

#define ISignaturePad_ClearInk(This)	\
    ( (This)->lpVtbl -> ClearInk(This) ) 

#define ISignaturePad_SignatureData(This)	\
    ( (This)->lpVtbl -> SignatureData(This) ) 

#define ISignaturePad_SignatureDataX(This)	\
    ( (This)->lpVtbl -> SignatureDataX(This) ) 

#define ISignaturePad_SignatureDataY(This)	\
    ( (This)->lpVtbl -> SignatureDataY(This) ) 

#define ISignaturePad_ClearSignatureData(This)	\
    ( (This)->lpVtbl -> ClearSignatureData(This) ) 

#define ISignaturePad_DeleteSignatureData(This)	\
    ( (This)->lpVtbl -> DeleteSignatureData(This) ) 

#define ISignaturePad_PutLCDCaptureMode(This,mode)	\
    ( (This)->lpVtbl -> PutLCDCaptureMode(This,mode) ) 

#define ISignaturePad_TabletState(This,__MIDL__ISignaturePad0003)	\
    ( (This)->lpVtbl -> TabletState(This,__MIDL__ISignaturePad0003) ) 

#define ISignaturePad_EnableTablet(This)	\
    ( (This)->lpVtbl -> EnableTablet(This) ) 

#define ISignaturePad_ClearTablet(This)	\
    ( (This)->lpVtbl -> ClearTablet(This) ) 

#define ISignaturePad_DisableTablet(This)	\
    ( (This)->lpVtbl -> DisableTablet(This) ) 

#define ISignaturePad_LCDRefresh(This,Mode,XPos,YPos,XSize,YSize)	\
    ( (This)->lpVtbl -> LCDRefresh(This,Mode,XPos,YPos,XSize,YSize) ) 

#define ISignaturePad_SetSigWindow(This)	\
    ( (This)->lpVtbl -> SetSigWindow(This) ) 

#define ISignaturePad_SetInkArea(This)	\
    ( (This)->lpVtbl -> SetInkArea(This) ) 

#define ISignaturePad_GetPixelBits(This,__MIDL__ISignaturePad0004)	\
    ( (This)->lpVtbl -> GetPixelBits(This,__MIDL__ISignaturePad0004) ) 

#define ISignaturePad_MaximumX(This)	\
    ( (This)->lpVtbl -> MaximumX(This) ) 

#define ISignaturePad_MaximumY(This)	\
    ( (This)->lpVtbl -> MaximumY(This) ) 

#define ISignaturePad_MinimumX(This)	\
    ( (This)->lpVtbl -> MinimumX(This) ) 

#define ISignaturePad_MinimumY(This)	\
    ( (This)->lpVtbl -> MinimumY(This) ) 

#define ISignaturePad_MaximumSignableY(This)	\
    ( (This)->lpVtbl -> MaximumSignableY(This) ) 

#define ISignaturePad_FireOption(This,optionNumber)	\
    ( (This)->lpVtbl -> FireOption(This,optionNumber) ) 

#define ISignaturePad_OriginPointX(This)	\
    ( (This)->lpVtbl -> OriginPointX(This) ) 

#define ISignaturePad_OriginPointY(This)	\
    ( (This)->lpVtbl -> OriginPointY(This) ) 

#define ISignaturePad_BaselinePointX(This)	\
    ( (This)->lpVtbl -> BaselinePointX(This) ) 

#define ISignaturePad_BaselinePointY(This)	\
    ( (This)->lpVtbl -> BaselinePointY(This) ) 

#define ISignaturePad_InkColor(This)	\
    ( (This)->lpVtbl -> InkColor(This) ) 

#define ISignaturePad_InkWeight(This)	\
    ( (This)->lpVtbl -> InkWeight(This) ) 

#define ISignaturePad_ShowProperties(This)	\
    ( (This)->lpVtbl -> ShowProperties(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignaturePad_INTERFACE_DEFINED__ */


#ifndef __ISignaturePadEvents_INTERFACE_DEFINED__
#define __ISignaturePadEvents_INTERFACE_DEFINED__

/* interface ISignaturePadEvents */
/* [object][uuid] */ 


DEFINE_GUID(IID_ISignaturePadEvents,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x22);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570322")
    ISignaturePadEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PenDown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenUp( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenPoint( 
            long x,
            long y,
            float inkWeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OptionSelected( 
            long optionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemSelected( 
            long controlId,
            BSTR selectedItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignaturePadEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignaturePadEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(ISignaturePadEvents, PenDown)
        HRESULT ( STDMETHODCALLTYPE *PenDown )( 
            ISignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(ISignaturePadEvents, PenUp)
        HRESULT ( STDMETHODCALLTYPE *PenUp )( 
            ISignaturePadEvents * This);
        
        DECLSPEC_XFGVIRT(ISignaturePadEvents, PenPoint)
        HRESULT ( STDMETHODCALLTYPE *PenPoint )( 
            ISignaturePadEvents * This,
            long x,
            long y,
            float inkWeight);
        
        DECLSPEC_XFGVIRT(ISignaturePadEvents, OptionSelected)
        HRESULT ( STDMETHODCALLTYPE *OptionSelected )( 
            ISignaturePadEvents * This,
            long optionNumber);
        
        DECLSPEC_XFGVIRT(ISignaturePadEvents, ItemSelected)
        HRESULT ( STDMETHODCALLTYPE *ItemSelected )( 
            ISignaturePadEvents * This,
            long controlId,
            BSTR selectedItem);
        
        END_INTERFACE
    } ISignaturePadEventsVtbl;

    interface ISignaturePadEvents
    {
        CONST_VTBL struct ISignaturePadEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignaturePadEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignaturePadEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignaturePadEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignaturePadEvents_PenDown(This)	\
    ( (This)->lpVtbl -> PenDown(This) ) 

#define ISignaturePadEvents_PenUp(This)	\
    ( (This)->lpVtbl -> PenUp(This) ) 

#define ISignaturePadEvents_PenPoint(This,x,y,inkWeight)	\
    ( (This)->lpVtbl -> PenPoint(This,x,y,inkWeight) ) 

#define ISignaturePadEvents_OptionSelected(This,optionNumber)	\
    ( (This)->lpVtbl -> OptionSelected(This,optionNumber) ) 

#define ISignaturePadEvents_ItemSelected(This,controlId,selectedItem)	\
    ( (This)->lpVtbl -> ItemSelected(This,controlId,selectedItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignaturePadEvents_INTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_CursiVisionSignaturePad,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x23);

#ifdef __cplusplus

class DECLSPEC_UUID("A64AB7AF-8A26-4f07-8877-56FE99570323")
CursiVisionSignaturePad;
#endif
#endif /* __CursiVisionSignaturePad_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


