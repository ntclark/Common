

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Aug 16 12:08:35 2017
 */
/* Compiler settings for pkAPI.odl:
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


#ifndef __pkAPI_i_h__
#define __pkAPI_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBasicSignaturePad_FWD_DEFINED__
#define __IBasicSignaturePad_FWD_DEFINED__
typedef interface IBasicSignaturePad IBasicSignaturePad;

#endif 	/* __IBasicSignaturePad_FWD_DEFINED__ */


#ifndef __IPhabletSignaturePad_FWD_DEFINED__
#define __IPhabletSignaturePad_FWD_DEFINED__
typedef interface IPhabletSignaturePad IPhabletSignaturePad;

#endif 	/* __IPhabletSignaturePad_FWD_DEFINED__ */


#ifndef __IPhabletSignaturePadEvents_FWD_DEFINED__
#define __IPhabletSignaturePadEvents_FWD_DEFINED__
typedef interface IPhabletSignaturePadEvents IPhabletSignaturePadEvents;

#endif 	/* __IPhabletSignaturePadEvents_FWD_DEFINED__ */


#ifndef __PhabletSignaturePad_FWD_DEFINED__
#define __PhabletSignaturePad_FWD_DEFINED__

#ifdef __cplusplus
typedef class PhabletSignaturePad PhabletSignaturePad;
#else
typedef struct PhabletSignaturePad PhabletSignaturePad;
#endif /* __cplusplus */

#endif 	/* __PhabletSignaturePad_FWD_DEFINED__ */


#ifndef __ExtendedPhabletSignaturePad_FWD_DEFINED__
#define __ExtendedPhabletSignaturePad_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExtendedPhabletSignaturePad ExtendedPhabletSignaturePad;
#else
typedef struct ExtendedPhabletSignaturePad ExtendedPhabletSignaturePad;
#endif /* __cplusplus */

#endif 	/* __ExtendedPhabletSignaturePad_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PhabletSignaturePad_LIBRARY_DEFINED__
#define __PhabletSignaturePad_LIBRARY_DEFINED__

/* library PhabletSignaturePad */
/* [version][lcid][helpstring][uuid] */ 

typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_pkAPI_0000_0000_0001
    {
    float left;
    float top;
    float right;
    float bottom;
    } 	RECTF;


EXTERN_C const IID LIBID_PhabletSignaturePad;

#ifndef __IBasicSignaturePad_INTERFACE_DEFINED__
#define __IBasicSignaturePad_INTERFACE_DEFINED__

/* interface IBasicSignaturePad */
/* [object][unique][oleautomation][dual][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasicSignaturePad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FAAB00E-3D9F-4b4d-B5FE-B71B6B7BDDDE")
    IBasicSignaturePad : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Connect( 
            BSTR serverIPorNetworkName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IBasicSignaturePad0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IPOrNetworkName( 
            BSTR bstrAddress) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IPOrNetworkName( 
            /* [retval][out] */ BSTR *pBstrAddress) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Width( 
            long value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *pValue) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_DeviceWidth( 
            /* [retval][out] */ long *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WidthInches( 
            float value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WidthInches( 
            /* [retval][out] */ float *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Height( 
            long value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *pValue) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_DeviceHeight( 
            /* [retval][out] */ long *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HeightInches( 
            float value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HeightInches( 
            /* [retval][out] */ float *pValue) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Bounds( 
            /* [in] */ RECT *pBounds) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bounds( 
            /* [retval][out] */ RECT *pResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BoundsInches( 
            /* [in] */ RECTF *pBounds) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BoundsInches( 
            /* [retval][out] */ RECTF *pResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_InkColor( 
            /* [in] */ long __MIDL__IBasicSignaturePad0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InkColor( 
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0002) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_InkWeight( 
            /* [in] */ long __MIDL__IBasicSignaturePad0003) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InkWeight( 
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0004) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FontSize( 
            /* [in] */ float __MIDL__IBasicSignaturePad0005) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ float *__MIDL__IBasicSignaturePad0006) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FontFamily( 
            /* [in] */ BSTR fontFamily) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontFamily( 
            /* [retval][out] */ BSTR *pFontFamily) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Image( 
            /* [retval][out] */ OLE_HANDLE *pImageInControlWindowDimensions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NativeSizeImage( 
            /* [retval][out] */ OLE_HANDLE *pImageInPadDimensions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ImageFile( 
            /* [retval][out] */ BSTR *pBSTRImageFileInControlDimensions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NativeSizeImageFile( 
            /* [retval][out] */ BSTR *pBSTRImageFileInPadDimensions) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundBitmapFile( 
            /* [in] */ BSTR imageFile) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundBitmapHandle( 
            /* [in] */ HBITMAP hBitmap) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PDFFile( 
            /* [in] */ BSTR pdfFile) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PDFFile( 
            /* [retval][out] */ BSTR *pPdfFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreaBitmapHandle( 
            HBITMAP hBitmap,
            long x,
            long y,
            long cx,
            long cy) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateButton( 
            BSTR buttonText,
            long eventID,
            long x,
            long y,
            BOOL isVisible) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDropDownBox( 
            BSTR commaDelimitedItems,
            long eventID,
            long x,
            long y,
            BOOL isVisible,
            /* [optional][in] */ VARIANT selectedItem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateLabel( 
            BSTR labelText,
            long controlID,
            long xPixels,
            long yPixels,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateLabelInches( 
            BSTR labelText,
            long controlID,
            float xInches,
            float yInches,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateCheckBox( 
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            BOOL isChecked) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateRadioButton( 
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            long groupNumber,
            BOOL isChecked) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTextBox( 
            BSTR theText,
            long controlID,
            long x,
            long y,
            long width,
            long maxHeight,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveControl( 
            long eventID) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_ControlBounds( 
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0007) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ControlPosition( 
            /* [in] */ long controlId,
            /* [in] */ POINT position) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlPosition( 
            /* [in] */ long controlId,
            /* [retval][out] */ POINT *pPositionResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ControlText( 
            /* [in] */ long controlId,
            /* [in] */ BSTR stringValue) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlText( 
            /* [in] */ long controlId,
            /* [retval][out] */ BSTR *__MIDL__IBasicSignaturePad0008) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ControlTextBounds( 
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0009) = 0;
        
        virtual /* [propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_DrawingWindowHandle( 
            /* [in] */ HWND hwndDrawingWindow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearInk( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearEverything( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearSettings( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearBackground( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearArea( 
            long x,
            long y,
            long width,
            long height) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FireOption( 
            long optionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FireSelection( 
            long controlId,
            BSTR selectedItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Hide( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProperties( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HideControl( 
            long controlID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowControl( 
            long controlID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HideControlList( 
            BSTR commaDelimitedIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowControlList( 
            BSTR commaDelimitedIds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBasicSignaturePadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasicSignaturePad * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasicSignaturePad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBasicSignaturePad * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBasicSignaturePad * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBasicSignaturePad * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBasicSignaturePad * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IBasicSignaturePad * This,
            BSTR serverIPorNetworkName);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IBasicSignaturePad * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IBasicSignaturePad0000);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IBasicSignaturePad * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IPOrNetworkName )( 
            IBasicSignaturePad * This,
            BSTR bstrAddress);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IPOrNetworkName )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ BSTR *pBstrAddress);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IBasicSignaturePad * This,
            long value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceWidth )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WidthInches )( 
            IBasicSignaturePad * This,
            float value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WidthInches )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ float *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IBasicSignaturePad * This,
            long value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceHeight )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HeightInches )( 
            IBasicSignaturePad * This,
            float value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeightInches )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ float *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bounds )( 
            IBasicSignaturePad * This,
            /* [in] */ RECT *pBounds);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bounds )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ RECT *pResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoundsInches )( 
            IBasicSignaturePad * This,
            /* [in] */ RECTF *pBounds);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundsInches )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ RECTF *pResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkColor )( 
            IBasicSignaturePad * This,
            /* [in] */ long __MIDL__IBasicSignaturePad0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkColor )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0002);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkWeight )( 
            IBasicSignaturePad * This,
            /* [in] */ long __MIDL__IBasicSignaturePad0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkWeight )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0004);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSize )( 
            IBasicSignaturePad * This,
            /* [in] */ float __MIDL__IBasicSignaturePad0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ float *__MIDL__IBasicSignaturePad0006);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontFamily )( 
            IBasicSignaturePad * This,
            /* [in] */ BSTR fontFamily);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFamily )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ BSTR *pFontFamily);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ OLE_HANDLE *pImageInControlWindowDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeSizeImage )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ OLE_HANDLE *pImageInPadDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFile )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ BSTR *pBSTRImageFileInControlDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeSizeImageFile )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ BSTR *pBSTRImageFileInPadDimensions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundBitmapFile )( 
            IBasicSignaturePad * This,
            /* [in] */ BSTR imageFile);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundBitmapHandle )( 
            IBasicSignaturePad * This,
            /* [in] */ HBITMAP hBitmap);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFFile )( 
            IBasicSignaturePad * This,
            /* [in] */ BSTR pdfFile);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFFile )( 
            IBasicSignaturePad * This,
            /* [retval][out] */ BSTR *pPdfFile);
        
        HRESULT ( STDMETHODCALLTYPE *AreaBitmapHandle )( 
            IBasicSignaturePad * This,
            HBITMAP hBitmap,
            long x,
            long y,
            long cx,
            long cy);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateButton )( 
            IBasicSignaturePad * This,
            BSTR buttonText,
            long eventID,
            long x,
            long y,
            BOOL isVisible);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDropDownBox )( 
            IBasicSignaturePad * This,
            BSTR commaDelimitedItems,
            long eventID,
            long x,
            long y,
            BOOL isVisible,
            /* [optional][in] */ VARIANT selectedItem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLabel )( 
            IBasicSignaturePad * This,
            BSTR labelText,
            long controlID,
            long xPixels,
            long yPixels,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLabelInches )( 
            IBasicSignaturePad * This,
            BSTR labelText,
            long controlID,
            float xInches,
            float yInches,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCheckBox )( 
            IBasicSignaturePad * This,
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            BOOL isChecked);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateRadioButton )( 
            IBasicSignaturePad * This,
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            long groupNumber,
            BOOL isChecked);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTextBox )( 
            IBasicSignaturePad * This,
            BSTR theText,
            long controlID,
            long x,
            long y,
            long width,
            long maxHeight,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveControl )( 
            IBasicSignaturePad * This,
            long eventID);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ControlBounds )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0007);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ControlPosition )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [in] */ POINT position);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlPosition )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ POINT *pPositionResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ControlText )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [in] */ BSTR stringValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlText )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ BSTR *__MIDL__IBasicSignaturePad0008);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlTextBounds )( 
            IBasicSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0009);
        
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_DrawingWindowHandle )( 
            IBasicSignaturePad * This,
            /* [in] */ HWND hwndDrawingWindow);
        
        HRESULT ( STDMETHODCALLTYPE *ClearInk )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearEverything )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearSettings )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearBackground )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearArea )( 
            IBasicSignaturePad * This,
            long x,
            long y,
            long width,
            long height);
        
        HRESULT ( STDMETHODCALLTYPE *FireOption )( 
            IBasicSignaturePad * This,
            long optionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *FireSelection )( 
            IBasicSignaturePad * This,
            long controlId,
            BSTR selectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *Hide )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IBasicSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *HideControl )( 
            IBasicSignaturePad * This,
            long controlID);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControl )( 
            IBasicSignaturePad * This,
            long controlID);
        
        HRESULT ( STDMETHODCALLTYPE *HideControlList )( 
            IBasicSignaturePad * This,
            BSTR commaDelimitedIds);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlList )( 
            IBasicSignaturePad * This,
            BSTR commaDelimitedIds);
        
        END_INTERFACE
    } IBasicSignaturePadVtbl;

    interface IBasicSignaturePad
    {
        CONST_VTBL struct IBasicSignaturePadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasicSignaturePad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBasicSignaturePad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBasicSignaturePad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBasicSignaturePad_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBasicSignaturePad_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBasicSignaturePad_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBasicSignaturePad_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBasicSignaturePad_Connect(This,serverIPorNetworkName)	\
    ( (This)->lpVtbl -> Connect(This,serverIPorNetworkName) ) 

#define IBasicSignaturePad_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IBasicSignaturePad_get_IsConnected(This,__MIDL__IBasicSignaturePad0000)	\
    ( (This)->lpVtbl -> get_IsConnected(This,__MIDL__IBasicSignaturePad0000) ) 

#define IBasicSignaturePad_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IBasicSignaturePad_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IBasicSignaturePad_put_IPOrNetworkName(This,bstrAddress)	\
    ( (This)->lpVtbl -> put_IPOrNetworkName(This,bstrAddress) ) 

#define IBasicSignaturePad_get_IPOrNetworkName(This,pBstrAddress)	\
    ( (This)->lpVtbl -> get_IPOrNetworkName(This,pBstrAddress) ) 

#define IBasicSignaturePad_put_Width(This,value)	\
    ( (This)->lpVtbl -> put_Width(This,value) ) 

#define IBasicSignaturePad_get_Width(This,pValue)	\
    ( (This)->lpVtbl -> get_Width(This,pValue) ) 

#define IBasicSignaturePad_get_DeviceWidth(This,pValue)	\
    ( (This)->lpVtbl -> get_DeviceWidth(This,pValue) ) 

#define IBasicSignaturePad_put_WidthInches(This,value)	\
    ( (This)->lpVtbl -> put_WidthInches(This,value) ) 

#define IBasicSignaturePad_get_WidthInches(This,pValue)	\
    ( (This)->lpVtbl -> get_WidthInches(This,pValue) ) 

#define IBasicSignaturePad_put_Height(This,value)	\
    ( (This)->lpVtbl -> put_Height(This,value) ) 

#define IBasicSignaturePad_get_Height(This,pValue)	\
    ( (This)->lpVtbl -> get_Height(This,pValue) ) 

#define IBasicSignaturePad_get_DeviceHeight(This,pValue)	\
    ( (This)->lpVtbl -> get_DeviceHeight(This,pValue) ) 

#define IBasicSignaturePad_put_HeightInches(This,value)	\
    ( (This)->lpVtbl -> put_HeightInches(This,value) ) 

#define IBasicSignaturePad_get_HeightInches(This,pValue)	\
    ( (This)->lpVtbl -> get_HeightInches(This,pValue) ) 

#define IBasicSignaturePad_put_Bounds(This,pBounds)	\
    ( (This)->lpVtbl -> put_Bounds(This,pBounds) ) 

#define IBasicSignaturePad_get_Bounds(This,pResult)	\
    ( (This)->lpVtbl -> get_Bounds(This,pResult) ) 

#define IBasicSignaturePad_put_BoundsInches(This,pBounds)	\
    ( (This)->lpVtbl -> put_BoundsInches(This,pBounds) ) 

#define IBasicSignaturePad_get_BoundsInches(This,pResult)	\
    ( (This)->lpVtbl -> get_BoundsInches(This,pResult) ) 

#define IBasicSignaturePad_put_InkColor(This,__MIDL__IBasicSignaturePad0001)	\
    ( (This)->lpVtbl -> put_InkColor(This,__MIDL__IBasicSignaturePad0001) ) 

#define IBasicSignaturePad_get_InkColor(This,__MIDL__IBasicSignaturePad0002)	\
    ( (This)->lpVtbl -> get_InkColor(This,__MIDL__IBasicSignaturePad0002) ) 

#define IBasicSignaturePad_put_InkWeight(This,__MIDL__IBasicSignaturePad0003)	\
    ( (This)->lpVtbl -> put_InkWeight(This,__MIDL__IBasicSignaturePad0003) ) 

#define IBasicSignaturePad_get_InkWeight(This,__MIDL__IBasicSignaturePad0004)	\
    ( (This)->lpVtbl -> get_InkWeight(This,__MIDL__IBasicSignaturePad0004) ) 

#define IBasicSignaturePad_put_FontSize(This,__MIDL__IBasicSignaturePad0005)	\
    ( (This)->lpVtbl -> put_FontSize(This,__MIDL__IBasicSignaturePad0005) ) 

#define IBasicSignaturePad_get_FontSize(This,__MIDL__IBasicSignaturePad0006)	\
    ( (This)->lpVtbl -> get_FontSize(This,__MIDL__IBasicSignaturePad0006) ) 

#define IBasicSignaturePad_put_FontFamily(This,fontFamily)	\
    ( (This)->lpVtbl -> put_FontFamily(This,fontFamily) ) 

#define IBasicSignaturePad_get_FontFamily(This,pFontFamily)	\
    ( (This)->lpVtbl -> get_FontFamily(This,pFontFamily) ) 

#define IBasicSignaturePad_get_Image(This,pImageInControlWindowDimensions)	\
    ( (This)->lpVtbl -> get_Image(This,pImageInControlWindowDimensions) ) 

#define IBasicSignaturePad_get_NativeSizeImage(This,pImageInPadDimensions)	\
    ( (This)->lpVtbl -> get_NativeSizeImage(This,pImageInPadDimensions) ) 

#define IBasicSignaturePad_get_ImageFile(This,pBSTRImageFileInControlDimensions)	\
    ( (This)->lpVtbl -> get_ImageFile(This,pBSTRImageFileInControlDimensions) ) 

#define IBasicSignaturePad_get_NativeSizeImageFile(This,pBSTRImageFileInPadDimensions)	\
    ( (This)->lpVtbl -> get_NativeSizeImageFile(This,pBSTRImageFileInPadDimensions) ) 

#define IBasicSignaturePad_put_BackgroundBitmapFile(This,imageFile)	\
    ( (This)->lpVtbl -> put_BackgroundBitmapFile(This,imageFile) ) 

#define IBasicSignaturePad_put_BackgroundBitmapHandle(This,hBitmap)	\
    ( (This)->lpVtbl -> put_BackgroundBitmapHandle(This,hBitmap) ) 

#define IBasicSignaturePad_put_PDFFile(This,pdfFile)	\
    ( (This)->lpVtbl -> put_PDFFile(This,pdfFile) ) 

#define IBasicSignaturePad_get_PDFFile(This,pPdfFile)	\
    ( (This)->lpVtbl -> get_PDFFile(This,pPdfFile) ) 

#define IBasicSignaturePad_AreaBitmapHandle(This,hBitmap,x,y,cx,cy)	\
    ( (This)->lpVtbl -> AreaBitmapHandle(This,hBitmap,x,y,cx,cy) ) 

#define IBasicSignaturePad_CreateButton(This,buttonText,eventID,x,y,isVisible)	\
    ( (This)->lpVtbl -> CreateButton(This,buttonText,eventID,x,y,isVisible) ) 

#define IBasicSignaturePad_CreateDropDownBox(This,commaDelimitedItems,eventID,x,y,isVisible,selectedItem)	\
    ( (This)->lpVtbl -> CreateDropDownBox(This,commaDelimitedItems,eventID,x,y,isVisible,selectedItem) ) 

#define IBasicSignaturePad_CreateLabel(This,labelText,controlID,xPixels,yPixels,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateLabel(This,labelText,controlID,xPixels,yPixels,isVisible,fontFace,fontSizeInPoints) ) 

#define IBasicSignaturePad_CreateLabelInches(This,labelText,controlID,xInches,yInches,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateLabelInches(This,labelText,controlID,xInches,yInches,isVisible,fontFace,fontSizeInPoints) ) 

#define IBasicSignaturePad_CreateCheckBox(This,labelText,controlID,x,y,isVisible,isChecked)	\
    ( (This)->lpVtbl -> CreateCheckBox(This,labelText,controlID,x,y,isVisible,isChecked) ) 

#define IBasicSignaturePad_CreateRadioButton(This,labelText,controlID,x,y,isVisible,groupNumber,isChecked)	\
    ( (This)->lpVtbl -> CreateRadioButton(This,labelText,controlID,x,y,isVisible,groupNumber,isChecked) ) 

#define IBasicSignaturePad_CreateTextBox(This,theText,controlID,x,y,width,maxHeight,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateTextBox(This,theText,controlID,x,y,width,maxHeight,isVisible,fontFace,fontSizeInPoints) ) 

#define IBasicSignaturePad_RemoveControl(This,eventID)	\
    ( (This)->lpVtbl -> RemoveControl(This,eventID) ) 

#define IBasicSignaturePad_get_ControlBounds(This,controlId,__MIDL__IBasicSignaturePad0007)	\
    ( (This)->lpVtbl -> get_ControlBounds(This,controlId,__MIDL__IBasicSignaturePad0007) ) 

#define IBasicSignaturePad_put_ControlPosition(This,controlId,position)	\
    ( (This)->lpVtbl -> put_ControlPosition(This,controlId,position) ) 

#define IBasicSignaturePad_get_ControlPosition(This,controlId,pPositionResult)	\
    ( (This)->lpVtbl -> get_ControlPosition(This,controlId,pPositionResult) ) 

#define IBasicSignaturePad_put_ControlText(This,controlId,stringValue)	\
    ( (This)->lpVtbl -> put_ControlText(This,controlId,stringValue) ) 

#define IBasicSignaturePad_get_ControlText(This,controlId,__MIDL__IBasicSignaturePad0008)	\
    ( (This)->lpVtbl -> get_ControlText(This,controlId,__MIDL__IBasicSignaturePad0008) ) 

#define IBasicSignaturePad_get_ControlTextBounds(This,controlId,__MIDL__IBasicSignaturePad0009)	\
    ( (This)->lpVtbl -> get_ControlTextBounds(This,controlId,__MIDL__IBasicSignaturePad0009) ) 

#define IBasicSignaturePad_put_DrawingWindowHandle(This,hwndDrawingWindow)	\
    ( (This)->lpVtbl -> put_DrawingWindowHandle(This,hwndDrawingWindow) ) 

#define IBasicSignaturePad_ClearInk(This)	\
    ( (This)->lpVtbl -> ClearInk(This) ) 

#define IBasicSignaturePad_ClearEverything(This)	\
    ( (This)->lpVtbl -> ClearEverything(This) ) 

#define IBasicSignaturePad_ClearSettings(This)	\
    ( (This)->lpVtbl -> ClearSettings(This) ) 

#define IBasicSignaturePad_ClearBackground(This)	\
    ( (This)->lpVtbl -> ClearBackground(This) ) 

#define IBasicSignaturePad_ClearArea(This,x,y,width,height)	\
    ( (This)->lpVtbl -> ClearArea(This,x,y,width,height) ) 

#define IBasicSignaturePad_FireOption(This,optionNumber)	\
    ( (This)->lpVtbl -> FireOption(This,optionNumber) ) 

#define IBasicSignaturePad_FireSelection(This,controlId,selectedItem)	\
    ( (This)->lpVtbl -> FireSelection(This,controlId,selectedItem) ) 

#define IBasicSignaturePad_Hide(This)	\
    ( (This)->lpVtbl -> Hide(This) ) 

#define IBasicSignaturePad_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define IBasicSignaturePad_ShowProperties(This)	\
    ( (This)->lpVtbl -> ShowProperties(This) ) 

#define IBasicSignaturePad_HideControl(This,controlID)	\
    ( (This)->lpVtbl -> HideControl(This,controlID) ) 

#define IBasicSignaturePad_ShowControl(This,controlID)	\
    ( (This)->lpVtbl -> ShowControl(This,controlID) ) 

#define IBasicSignaturePad_HideControlList(This,commaDelimitedIds)	\
    ( (This)->lpVtbl -> HideControlList(This,commaDelimitedIds) ) 

#define IBasicSignaturePad_ShowControlList(This,commaDelimitedIds)	\
    ( (This)->lpVtbl -> ShowControlList(This,commaDelimitedIds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBasicSignaturePad_INTERFACE_DEFINED__ */


#ifndef __IPhabletSignaturePad_INTERFACE_DEFINED__
#define __IPhabletSignaturePad_INTERFACE_DEFINED__

/* interface IPhabletSignaturePad */
/* [object][unique][oleautomation][dual][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IPhabletSignaturePad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FAAB00E-3D9F-4b4d-B5FE-B71B6B7BDDF0")
    IPhabletSignaturePad : public IBasicSignaturePad
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WidthInInches( 
            /* [in] */ double value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WidthInInches( 
            /* [retval][out] */ double *pValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPhabletSignaturePadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPhabletSignaturePad * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPhabletSignaturePad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPhabletSignaturePad * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPhabletSignaturePad * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPhabletSignaturePad * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPhabletSignaturePad * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IPhabletSignaturePad * This,
            BSTR serverIPorNetworkName);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IPhabletSignaturePad * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsConnected )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IBasicSignaturePad0000);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IPhabletSignaturePad * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IPOrNetworkName )( 
            IPhabletSignaturePad * This,
            BSTR bstrAddress);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IPOrNetworkName )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ BSTR *pBstrAddress);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            IPhabletSignaturePad * This,
            long value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceWidth )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WidthInches )( 
            IPhabletSignaturePad * This,
            float value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WidthInches )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ float *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            IPhabletSignaturePad * This,
            long value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceHeight )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HeightInches )( 
            IPhabletSignaturePad * This,
            float value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HeightInches )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ float *pValue);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Bounds )( 
            IPhabletSignaturePad * This,
            /* [in] */ RECT *pBounds);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bounds )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ RECT *pResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoundsInches )( 
            IPhabletSignaturePad * This,
            /* [in] */ RECTF *pBounds);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoundsInches )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ RECTF *pResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkColor )( 
            IPhabletSignaturePad * This,
            /* [in] */ long __MIDL__IBasicSignaturePad0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkColor )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0002);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_InkWeight )( 
            IPhabletSignaturePad * This,
            /* [in] */ long __MIDL__IBasicSignaturePad0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkWeight )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ long *__MIDL__IBasicSignaturePad0004);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSize )( 
            IPhabletSignaturePad * This,
            /* [in] */ float __MIDL__IBasicSignaturePad0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ float *__MIDL__IBasicSignaturePad0006);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontFamily )( 
            IPhabletSignaturePad * This,
            /* [in] */ BSTR fontFamily);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFamily )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ BSTR *pFontFamily);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Image )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ OLE_HANDLE *pImageInControlWindowDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeSizeImage )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ OLE_HANDLE *pImageInPadDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ImageFile )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ BSTR *pBSTRImageFileInControlDimensions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NativeSizeImageFile )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ BSTR *pBSTRImageFileInPadDimensions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundBitmapFile )( 
            IPhabletSignaturePad * This,
            /* [in] */ BSTR imageFile);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundBitmapHandle )( 
            IPhabletSignaturePad * This,
            /* [in] */ HBITMAP hBitmap);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PDFFile )( 
            IPhabletSignaturePad * This,
            /* [in] */ BSTR pdfFile);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PDFFile )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ BSTR *pPdfFile);
        
        HRESULT ( STDMETHODCALLTYPE *AreaBitmapHandle )( 
            IPhabletSignaturePad * This,
            HBITMAP hBitmap,
            long x,
            long y,
            long cx,
            long cy);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateButton )( 
            IPhabletSignaturePad * This,
            BSTR buttonText,
            long eventID,
            long x,
            long y,
            BOOL isVisible);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDropDownBox )( 
            IPhabletSignaturePad * This,
            BSTR commaDelimitedItems,
            long eventID,
            long x,
            long y,
            BOOL isVisible,
            /* [optional][in] */ VARIANT selectedItem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLabel )( 
            IPhabletSignaturePad * This,
            BSTR labelText,
            long controlID,
            long xPixels,
            long yPixels,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLabelInches )( 
            IPhabletSignaturePad * This,
            BSTR labelText,
            long controlID,
            float xInches,
            float yInches,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCheckBox )( 
            IPhabletSignaturePad * This,
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            BOOL isChecked);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateRadioButton )( 
            IPhabletSignaturePad * This,
            BSTR labelText,
            long controlID,
            long x,
            long y,
            BOOL isVisible,
            long groupNumber,
            BOOL isChecked);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTextBox )( 
            IPhabletSignaturePad * This,
            BSTR theText,
            long controlID,
            long x,
            long y,
            long width,
            long maxHeight,
            BOOL isVisible,
            /* [optional][in] */ VARIANT fontFace,
            /* [optional][in] */ VARIANT fontSizeInPoints);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveControl )( 
            IPhabletSignaturePad * This,
            long eventID);
        
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_ControlBounds )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0007);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ControlPosition )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [in] */ POINT position);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlPosition )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ POINT *pPositionResult);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ControlText )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [in] */ BSTR stringValue);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlText )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ BSTR *__MIDL__IBasicSignaturePad0008);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlTextBounds )( 
            IPhabletSignaturePad * This,
            /* [in] */ long controlId,
            /* [retval][out] */ RECT *__MIDL__IBasicSignaturePad0009);
        
        /* [propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_DrawingWindowHandle )( 
            IPhabletSignaturePad * This,
            /* [in] */ HWND hwndDrawingWindow);
        
        HRESULT ( STDMETHODCALLTYPE *ClearInk )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearEverything )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearSettings )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearBackground )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClearArea )( 
            IPhabletSignaturePad * This,
            long x,
            long y,
            long width,
            long height);
        
        HRESULT ( STDMETHODCALLTYPE *FireOption )( 
            IPhabletSignaturePad * This,
            long optionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *FireSelection )( 
            IPhabletSignaturePad * This,
            long controlId,
            BSTR selectedItem);
        
        HRESULT ( STDMETHODCALLTYPE *Hide )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IPhabletSignaturePad * This);
        
        HRESULT ( STDMETHODCALLTYPE *HideControl )( 
            IPhabletSignaturePad * This,
            long controlID);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControl )( 
            IPhabletSignaturePad * This,
            long controlID);
        
        HRESULT ( STDMETHODCALLTYPE *HideControlList )( 
            IPhabletSignaturePad * This,
            BSTR commaDelimitedIds);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlList )( 
            IPhabletSignaturePad * This,
            BSTR commaDelimitedIds);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WidthInInches )( 
            IPhabletSignaturePad * This,
            /* [in] */ double value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WidthInInches )( 
            IPhabletSignaturePad * This,
            /* [retval][out] */ double *pValue);
        
        END_INTERFACE
    } IPhabletSignaturePadVtbl;

    interface IPhabletSignaturePad
    {
        CONST_VTBL struct IPhabletSignaturePadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPhabletSignaturePad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPhabletSignaturePad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPhabletSignaturePad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPhabletSignaturePad_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPhabletSignaturePad_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPhabletSignaturePad_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPhabletSignaturePad_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPhabletSignaturePad_Connect(This,serverIPorNetworkName)	\
    ( (This)->lpVtbl -> Connect(This,serverIPorNetworkName) ) 

#define IPhabletSignaturePad_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IPhabletSignaturePad_get_IsConnected(This,__MIDL__IBasicSignaturePad0000)	\
    ( (This)->lpVtbl -> get_IsConnected(This,__MIDL__IBasicSignaturePad0000) ) 

#define IPhabletSignaturePad_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IPhabletSignaturePad_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IPhabletSignaturePad_put_IPOrNetworkName(This,bstrAddress)	\
    ( (This)->lpVtbl -> put_IPOrNetworkName(This,bstrAddress) ) 

#define IPhabletSignaturePad_get_IPOrNetworkName(This,pBstrAddress)	\
    ( (This)->lpVtbl -> get_IPOrNetworkName(This,pBstrAddress) ) 

#define IPhabletSignaturePad_put_Width(This,value)	\
    ( (This)->lpVtbl -> put_Width(This,value) ) 

#define IPhabletSignaturePad_get_Width(This,pValue)	\
    ( (This)->lpVtbl -> get_Width(This,pValue) ) 

#define IPhabletSignaturePad_get_DeviceWidth(This,pValue)	\
    ( (This)->lpVtbl -> get_DeviceWidth(This,pValue) ) 

#define IPhabletSignaturePad_put_WidthInches(This,value)	\
    ( (This)->lpVtbl -> put_WidthInches(This,value) ) 

#define IPhabletSignaturePad_get_WidthInches(This,pValue)	\
    ( (This)->lpVtbl -> get_WidthInches(This,pValue) ) 

#define IPhabletSignaturePad_put_Height(This,value)	\
    ( (This)->lpVtbl -> put_Height(This,value) ) 

#define IPhabletSignaturePad_get_Height(This,pValue)	\
    ( (This)->lpVtbl -> get_Height(This,pValue) ) 

#define IPhabletSignaturePad_get_DeviceHeight(This,pValue)	\
    ( (This)->lpVtbl -> get_DeviceHeight(This,pValue) ) 

#define IPhabletSignaturePad_put_HeightInches(This,value)	\
    ( (This)->lpVtbl -> put_HeightInches(This,value) ) 

#define IPhabletSignaturePad_get_HeightInches(This,pValue)	\
    ( (This)->lpVtbl -> get_HeightInches(This,pValue) ) 

#define IPhabletSignaturePad_put_Bounds(This,pBounds)	\
    ( (This)->lpVtbl -> put_Bounds(This,pBounds) ) 

#define IPhabletSignaturePad_get_Bounds(This,pResult)	\
    ( (This)->lpVtbl -> get_Bounds(This,pResult) ) 

#define IPhabletSignaturePad_put_BoundsInches(This,pBounds)	\
    ( (This)->lpVtbl -> put_BoundsInches(This,pBounds) ) 

#define IPhabletSignaturePad_get_BoundsInches(This,pResult)	\
    ( (This)->lpVtbl -> get_BoundsInches(This,pResult) ) 

#define IPhabletSignaturePad_put_InkColor(This,__MIDL__IBasicSignaturePad0001)	\
    ( (This)->lpVtbl -> put_InkColor(This,__MIDL__IBasicSignaturePad0001) ) 

#define IPhabletSignaturePad_get_InkColor(This,__MIDL__IBasicSignaturePad0002)	\
    ( (This)->lpVtbl -> get_InkColor(This,__MIDL__IBasicSignaturePad0002) ) 

#define IPhabletSignaturePad_put_InkWeight(This,__MIDL__IBasicSignaturePad0003)	\
    ( (This)->lpVtbl -> put_InkWeight(This,__MIDL__IBasicSignaturePad0003) ) 

#define IPhabletSignaturePad_get_InkWeight(This,__MIDL__IBasicSignaturePad0004)	\
    ( (This)->lpVtbl -> get_InkWeight(This,__MIDL__IBasicSignaturePad0004) ) 

#define IPhabletSignaturePad_put_FontSize(This,__MIDL__IBasicSignaturePad0005)	\
    ( (This)->lpVtbl -> put_FontSize(This,__MIDL__IBasicSignaturePad0005) ) 

#define IPhabletSignaturePad_get_FontSize(This,__MIDL__IBasicSignaturePad0006)	\
    ( (This)->lpVtbl -> get_FontSize(This,__MIDL__IBasicSignaturePad0006) ) 

#define IPhabletSignaturePad_put_FontFamily(This,fontFamily)	\
    ( (This)->lpVtbl -> put_FontFamily(This,fontFamily) ) 

#define IPhabletSignaturePad_get_FontFamily(This,pFontFamily)	\
    ( (This)->lpVtbl -> get_FontFamily(This,pFontFamily) ) 

#define IPhabletSignaturePad_get_Image(This,pImageInControlWindowDimensions)	\
    ( (This)->lpVtbl -> get_Image(This,pImageInControlWindowDimensions) ) 

#define IPhabletSignaturePad_get_NativeSizeImage(This,pImageInPadDimensions)	\
    ( (This)->lpVtbl -> get_NativeSizeImage(This,pImageInPadDimensions) ) 

#define IPhabletSignaturePad_get_ImageFile(This,pBSTRImageFileInControlDimensions)	\
    ( (This)->lpVtbl -> get_ImageFile(This,pBSTRImageFileInControlDimensions) ) 

#define IPhabletSignaturePad_get_NativeSizeImageFile(This,pBSTRImageFileInPadDimensions)	\
    ( (This)->lpVtbl -> get_NativeSizeImageFile(This,pBSTRImageFileInPadDimensions) ) 

#define IPhabletSignaturePad_put_BackgroundBitmapFile(This,imageFile)	\
    ( (This)->lpVtbl -> put_BackgroundBitmapFile(This,imageFile) ) 

#define IPhabletSignaturePad_put_BackgroundBitmapHandle(This,hBitmap)	\
    ( (This)->lpVtbl -> put_BackgroundBitmapHandle(This,hBitmap) ) 

#define IPhabletSignaturePad_put_PDFFile(This,pdfFile)	\
    ( (This)->lpVtbl -> put_PDFFile(This,pdfFile) ) 

#define IPhabletSignaturePad_get_PDFFile(This,pPdfFile)	\
    ( (This)->lpVtbl -> get_PDFFile(This,pPdfFile) ) 

#define IPhabletSignaturePad_AreaBitmapHandle(This,hBitmap,x,y,cx,cy)	\
    ( (This)->lpVtbl -> AreaBitmapHandle(This,hBitmap,x,y,cx,cy) ) 

#define IPhabletSignaturePad_CreateButton(This,buttonText,eventID,x,y,isVisible)	\
    ( (This)->lpVtbl -> CreateButton(This,buttonText,eventID,x,y,isVisible) ) 

#define IPhabletSignaturePad_CreateDropDownBox(This,commaDelimitedItems,eventID,x,y,isVisible,selectedItem)	\
    ( (This)->lpVtbl -> CreateDropDownBox(This,commaDelimitedItems,eventID,x,y,isVisible,selectedItem) ) 

#define IPhabletSignaturePad_CreateLabel(This,labelText,controlID,xPixels,yPixels,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateLabel(This,labelText,controlID,xPixels,yPixels,isVisible,fontFace,fontSizeInPoints) ) 

#define IPhabletSignaturePad_CreateLabelInches(This,labelText,controlID,xInches,yInches,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateLabelInches(This,labelText,controlID,xInches,yInches,isVisible,fontFace,fontSizeInPoints) ) 

#define IPhabletSignaturePad_CreateCheckBox(This,labelText,controlID,x,y,isVisible,isChecked)	\
    ( (This)->lpVtbl -> CreateCheckBox(This,labelText,controlID,x,y,isVisible,isChecked) ) 

#define IPhabletSignaturePad_CreateRadioButton(This,labelText,controlID,x,y,isVisible,groupNumber,isChecked)	\
    ( (This)->lpVtbl -> CreateRadioButton(This,labelText,controlID,x,y,isVisible,groupNumber,isChecked) ) 

#define IPhabletSignaturePad_CreateTextBox(This,theText,controlID,x,y,width,maxHeight,isVisible,fontFace,fontSizeInPoints)	\
    ( (This)->lpVtbl -> CreateTextBox(This,theText,controlID,x,y,width,maxHeight,isVisible,fontFace,fontSizeInPoints) ) 

#define IPhabletSignaturePad_RemoveControl(This,eventID)	\
    ( (This)->lpVtbl -> RemoveControl(This,eventID) ) 

#define IPhabletSignaturePad_get_ControlBounds(This,controlId,__MIDL__IBasicSignaturePad0007)	\
    ( (This)->lpVtbl -> get_ControlBounds(This,controlId,__MIDL__IBasicSignaturePad0007) ) 

#define IPhabletSignaturePad_put_ControlPosition(This,controlId,position)	\
    ( (This)->lpVtbl -> put_ControlPosition(This,controlId,position) ) 

#define IPhabletSignaturePad_get_ControlPosition(This,controlId,pPositionResult)	\
    ( (This)->lpVtbl -> get_ControlPosition(This,controlId,pPositionResult) ) 

#define IPhabletSignaturePad_put_ControlText(This,controlId,stringValue)	\
    ( (This)->lpVtbl -> put_ControlText(This,controlId,stringValue) ) 

#define IPhabletSignaturePad_get_ControlText(This,controlId,__MIDL__IBasicSignaturePad0008)	\
    ( (This)->lpVtbl -> get_ControlText(This,controlId,__MIDL__IBasicSignaturePad0008) ) 

#define IPhabletSignaturePad_get_ControlTextBounds(This,controlId,__MIDL__IBasicSignaturePad0009)	\
    ( (This)->lpVtbl -> get_ControlTextBounds(This,controlId,__MIDL__IBasicSignaturePad0009) ) 

#define IPhabletSignaturePad_put_DrawingWindowHandle(This,hwndDrawingWindow)	\
    ( (This)->lpVtbl -> put_DrawingWindowHandle(This,hwndDrawingWindow) ) 

#define IPhabletSignaturePad_ClearInk(This)	\
    ( (This)->lpVtbl -> ClearInk(This) ) 

#define IPhabletSignaturePad_ClearEverything(This)	\
    ( (This)->lpVtbl -> ClearEverything(This) ) 

#define IPhabletSignaturePad_ClearSettings(This)	\
    ( (This)->lpVtbl -> ClearSettings(This) ) 

#define IPhabletSignaturePad_ClearBackground(This)	\
    ( (This)->lpVtbl -> ClearBackground(This) ) 

#define IPhabletSignaturePad_ClearArea(This,x,y,width,height)	\
    ( (This)->lpVtbl -> ClearArea(This,x,y,width,height) ) 

#define IPhabletSignaturePad_FireOption(This,optionNumber)	\
    ( (This)->lpVtbl -> FireOption(This,optionNumber) ) 

#define IPhabletSignaturePad_FireSelection(This,controlId,selectedItem)	\
    ( (This)->lpVtbl -> FireSelection(This,controlId,selectedItem) ) 

#define IPhabletSignaturePad_Hide(This)	\
    ( (This)->lpVtbl -> Hide(This) ) 

#define IPhabletSignaturePad_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define IPhabletSignaturePad_ShowProperties(This)	\
    ( (This)->lpVtbl -> ShowProperties(This) ) 

#define IPhabletSignaturePad_HideControl(This,controlID)	\
    ( (This)->lpVtbl -> HideControl(This,controlID) ) 

#define IPhabletSignaturePad_ShowControl(This,controlID)	\
    ( (This)->lpVtbl -> ShowControl(This,controlID) ) 

#define IPhabletSignaturePad_HideControlList(This,commaDelimitedIds)	\
    ( (This)->lpVtbl -> HideControlList(This,commaDelimitedIds) ) 

#define IPhabletSignaturePad_ShowControlList(This,commaDelimitedIds)	\
    ( (This)->lpVtbl -> ShowControlList(This,commaDelimitedIds) ) 


#define IPhabletSignaturePad_put_WidthInInches(This,value)	\
    ( (This)->lpVtbl -> put_WidthInInches(This,value) ) 

#define IPhabletSignaturePad_get_WidthInInches(This,pValue)	\
    ( (This)->lpVtbl -> get_WidthInInches(This,pValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPhabletSignaturePad_INTERFACE_DEFINED__ */


#ifndef __IPhabletSignaturePadEvents_INTERFACE_DEFINED__
#define __IPhabletSignaturePadEvents_INTERFACE_DEFINED__

/* interface IPhabletSignaturePadEvents */
/* [object][uuid] */ 


EXTERN_C const IID IID_IPhabletSignaturePadEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FAAB00E-3D9F-4b4d-B5FE-B71B6B7BDDDF")
    IPhabletSignaturePadEvents : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PenDown( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenUp( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PenPoint( 
            long x,
            long y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OptionSelected( 
            long optionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OptionUnSelected( 
            long optionNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeviceReady( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigurationChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemSelected( 
            long controlId,
            BSTR theItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPhabletSignaturePadEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPhabletSignaturePadEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPhabletSignaturePadEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPhabletSignaturePadEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *PenDown )( 
            IPhabletSignaturePadEvents * This,
            long x,
            long y);
        
        HRESULT ( STDMETHODCALLTYPE *PenUp )( 
            IPhabletSignaturePadEvents * This,
            long x,
            long y);
        
        HRESULT ( STDMETHODCALLTYPE *PenPoint )( 
            IPhabletSignaturePadEvents * This,
            long x,
            long y);
        
        HRESULT ( STDMETHODCALLTYPE *OptionSelected )( 
            IPhabletSignaturePadEvents * This,
            long optionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *OptionUnSelected )( 
            IPhabletSignaturePadEvents * This,
            long optionNumber);
        
        HRESULT ( STDMETHODCALLTYPE *DeviceReady )( 
            IPhabletSignaturePadEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigurationChanged )( 
            IPhabletSignaturePadEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *ItemSelected )( 
            IPhabletSignaturePadEvents * This,
            long controlId,
            BSTR theItem);
        
        END_INTERFACE
    } IPhabletSignaturePadEventsVtbl;

    interface IPhabletSignaturePadEvents
    {
        CONST_VTBL struct IPhabletSignaturePadEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPhabletSignaturePadEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPhabletSignaturePadEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPhabletSignaturePadEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPhabletSignaturePadEvents_PenDown(This,x,y)	\
    ( (This)->lpVtbl -> PenDown(This,x,y) ) 

#define IPhabletSignaturePadEvents_PenUp(This,x,y)	\
    ( (This)->lpVtbl -> PenUp(This,x,y) ) 

#define IPhabletSignaturePadEvents_PenPoint(This,x,y)	\
    ( (This)->lpVtbl -> PenPoint(This,x,y) ) 

#define IPhabletSignaturePadEvents_OptionSelected(This,optionNumber)	\
    ( (This)->lpVtbl -> OptionSelected(This,optionNumber) ) 

#define IPhabletSignaturePadEvents_OptionUnSelected(This,optionNumber)	\
    ( (This)->lpVtbl -> OptionUnSelected(This,optionNumber) ) 

#define IPhabletSignaturePadEvents_DeviceReady(This)	\
    ( (This)->lpVtbl -> DeviceReady(This) ) 

#define IPhabletSignaturePadEvents_ConfigurationChanged(This)	\
    ( (This)->lpVtbl -> ConfigurationChanged(This) ) 

#define IPhabletSignaturePadEvents_ItemSelected(This,controlId,theItem)	\
    ( (This)->lpVtbl -> ItemSelected(This,controlId,theItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPhabletSignaturePadEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PhabletSignaturePad;

#ifdef __cplusplus

class DECLSPEC_UUID("2FAAB00E-3D9F-4b4d-B5FE-B71B6B7BDDE0")
PhabletSignaturePad;
#endif

EXTERN_C const CLSID CLSID_ExtendedPhabletSignaturePad;

#ifdef __cplusplus

class DECLSPEC_UUID("2FAAB00E-3D9F-4b4d-B5FE-B71B6B7BDDF1")
ExtendedPhabletSignaturePad;
#endif
#endif /* __PhabletSignaturePad_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

