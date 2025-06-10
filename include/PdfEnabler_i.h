

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for PdfEnabler.odl:
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


#ifndef __PdfEnabler_i_h__
#define __PdfEnabler_i_h__

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

#ifndef __IPdfPage_FWD_DEFINED__
#define __IPdfPage_FWD_DEFINED__
typedef interface IPdfPage IPdfPage;

#endif 	/* __IPdfPage_FWD_DEFINED__ */


#ifndef __IPdfDocument_FWD_DEFINED__
#define __IPdfDocument_FWD_DEFINED__
typedef interface IPdfDocument IPdfDocument;

#endif 	/* __IPdfDocument_FWD_DEFINED__ */


#ifndef __IPdfEnabler_FWD_DEFINED__
#define __IPdfEnabler_FWD_DEFINED__
typedef interface IPdfEnabler IPdfEnabler;

#endif 	/* __IPdfEnabler_FWD_DEFINED__ */


#ifndef __PdfEnabler_FWD_DEFINED__
#define __PdfEnabler_FWD_DEFINED__

#ifdef __cplusplus
typedef class PdfEnabler PdfEnabler;
#else
typedef struct PdfEnabler PdfEnabler;
#endif /* __cplusplus */

#endif 	/* __PdfEnabler_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PdfEnabler_LIBRARY_DEFINED__
#define __PdfEnabler_LIBRARY_DEFINED__

/* library PdfEnabler */
/* [version][lcid][helpstring][helpfile][uuid] */ 


DEFINE_GUID(LIBID_PdfEnabler,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x15);

#ifndef __IPdfPage_INTERFACE_DEFINED__
#define __IPdfPage_INTERFACE_DEFINED__

/* interface IPdfPage */
/* [object][unique][nonextensible][oleautomation][dual][helpstring][uuid] */ 


DEFINE_GUID(IID_IPdfPage,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x16);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570316")
    IPdfPage : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddStream( 
            BYTE *pData,
            long dataSize,
            long identifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageSize( 
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Rotation( 
            double *pRotation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddImage( 
            double inchesFromLeft,
            double inchesFromTop,
            double scaleX,
            double scaleY,
            HBITMAP bitmapHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisplayedPageSize( 
            RECT *pRect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddImageFromFile( 
            double inchesFromLeft,
            double inchesFromTop,
            double scaleX,
            double scaleY,
            BSTR bstrFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCenteredImageFromFile( 
            double inchesFromLeft,
            double inchesFromTop,
            BSTR bstrFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddSizedImageFromFile( 
            double inchesFromLeft,
            double inchesFromTop,
            double widthInInches,
            double heightInInches,
            BSTR bstrFileName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PageNumber( 
            /* [retval][out] */ long *pPageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseText( 
            HDC hdc,
            RECT *prcWindowsClip,
            void *pvIPostScriptTakeText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNativePdfPage( 
            void **ppPdfPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastError( 
            char **ppszError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddBinaryObjectFromFile( 
            BSTR objectName,
            BSTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBinaryObjectToFile( 
            BSTR objectName,
            BSTR fileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddText( 
            char *pszText,
            double inchesFromLeft,
            double inchesFromTop,
            /* [defaultvalue][optional] */ char *pszFont = 0,
            /* [defaultvalue][optional] */ double fontSize = 8) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPdfPageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPdfPage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPdfPage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPdfPage * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPdfPage * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPdfPage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPdfPage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPdfPage * This,
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
        
        DECLSPEC_XFGVIRT(IPdfPage, AddStream)
        HRESULT ( STDMETHODCALLTYPE *AddStream )( 
            IPdfPage * This,
            BYTE *pData,
            long dataSize,
            long identifier);
        
        DECLSPEC_XFGVIRT(IPdfPage, PageSize)
        HRESULT ( STDMETHODCALLTYPE *PageSize )( 
            IPdfPage * This,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPdfPage, Rotation)
        HRESULT ( STDMETHODCALLTYPE *Rotation )( 
            IPdfPage * This,
            double *pRotation);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddImage)
        HRESULT ( STDMETHODCALLTYPE *AddImage )( 
            IPdfPage * This,
            double inchesFromLeft,
            double inchesFromTop,
            double scaleX,
            double scaleY,
            HBITMAP bitmapHandle);
        
        DECLSPEC_XFGVIRT(IPdfPage, DisplayedPageSize)
        HRESULT ( STDMETHODCALLTYPE *DisplayedPageSize )( 
            IPdfPage * This,
            RECT *pRect);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddImageFromFile)
        HRESULT ( STDMETHODCALLTYPE *AddImageFromFile )( 
            IPdfPage * This,
            double inchesFromLeft,
            double inchesFromTop,
            double scaleX,
            double scaleY,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddCenteredImageFromFile)
        HRESULT ( STDMETHODCALLTYPE *AddCenteredImageFromFile )( 
            IPdfPage * This,
            double inchesFromLeft,
            double inchesFromTop,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddSizedImageFromFile)
        HRESULT ( STDMETHODCALLTYPE *AddSizedImageFromFile )( 
            IPdfPage * This,
            double inchesFromLeft,
            double inchesFromTop,
            double widthInInches,
            double heightInInches,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IPdfPage, get_PageNumber)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageNumber )( 
            IPdfPage * This,
            /* [retval][out] */ long *pPageNumber);
        
        DECLSPEC_XFGVIRT(IPdfPage, ParseText)
        HRESULT ( STDMETHODCALLTYPE *ParseText )( 
            IPdfPage * This,
            HDC hdc,
            RECT *prcWindowsClip,
            void *pvIPostScriptTakeText);
        
        DECLSPEC_XFGVIRT(IPdfPage, GetNativePdfPage)
        HRESULT ( STDMETHODCALLTYPE *GetNativePdfPage )( 
            IPdfPage * This,
            void **ppPdfPage);
        
        DECLSPEC_XFGVIRT(IPdfPage, GetLastError)
        HRESULT ( STDMETHODCALLTYPE *GetLastError )( 
            IPdfPage * This,
            char **ppszError);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddBinaryObjectFromFile)
        HRESULT ( STDMETHODCALLTYPE *AddBinaryObjectFromFile )( 
            IPdfPage * This,
            BSTR objectName,
            BSTR fileName);
        
        DECLSPEC_XFGVIRT(IPdfPage, GetBinaryObjectToFile)
        HRESULT ( STDMETHODCALLTYPE *GetBinaryObjectToFile )( 
            IPdfPage * This,
            BSTR objectName,
            BSTR fileName);
        
        DECLSPEC_XFGVIRT(IPdfPage, AddText)
        HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IPdfPage * This,
            char *pszText,
            double inchesFromLeft,
            double inchesFromTop,
            /* [defaultvalue][optional] */ char *pszFont,
            /* [defaultvalue][optional] */ double fontSize);
        
        END_INTERFACE
    } IPdfPageVtbl;

    interface IPdfPage
    {
        CONST_VTBL struct IPdfPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPdfPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPdfPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPdfPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPdfPage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPdfPage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPdfPage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPdfPage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPdfPage_AddStream(This,pData,dataSize,identifier)	\
    ( (This)->lpVtbl -> AddStream(This,pData,dataSize,identifier) ) 

#define IPdfPage_PageSize(This,pRect)	\
    ( (This)->lpVtbl -> PageSize(This,pRect) ) 

#define IPdfPage_Rotation(This,pRotation)	\
    ( (This)->lpVtbl -> Rotation(This,pRotation) ) 

#define IPdfPage_AddImage(This,inchesFromLeft,inchesFromTop,scaleX,scaleY,bitmapHandle)	\
    ( (This)->lpVtbl -> AddImage(This,inchesFromLeft,inchesFromTop,scaleX,scaleY,bitmapHandle) ) 

#define IPdfPage_DisplayedPageSize(This,pRect)	\
    ( (This)->lpVtbl -> DisplayedPageSize(This,pRect) ) 

#define IPdfPage_AddImageFromFile(This,inchesFromLeft,inchesFromTop,scaleX,scaleY,bstrFileName)	\
    ( (This)->lpVtbl -> AddImageFromFile(This,inchesFromLeft,inchesFromTop,scaleX,scaleY,bstrFileName) ) 

#define IPdfPage_AddCenteredImageFromFile(This,inchesFromLeft,inchesFromTop,bstrFileName)	\
    ( (This)->lpVtbl -> AddCenteredImageFromFile(This,inchesFromLeft,inchesFromTop,bstrFileName) ) 

#define IPdfPage_AddSizedImageFromFile(This,inchesFromLeft,inchesFromTop,widthInInches,heightInInches,bstrFileName)	\
    ( (This)->lpVtbl -> AddSizedImageFromFile(This,inchesFromLeft,inchesFromTop,widthInInches,heightInInches,bstrFileName) ) 

#define IPdfPage_get_PageNumber(This,pPageNumber)	\
    ( (This)->lpVtbl -> get_PageNumber(This,pPageNumber) ) 

#define IPdfPage_ParseText(This,hdc,prcWindowsClip,pvIPostScriptTakeText)	\
    ( (This)->lpVtbl -> ParseText(This,hdc,prcWindowsClip,pvIPostScriptTakeText) ) 

#define IPdfPage_GetNativePdfPage(This,ppPdfPage)	\
    ( (This)->lpVtbl -> GetNativePdfPage(This,ppPdfPage) ) 

#define IPdfPage_GetLastError(This,ppszError)	\
    ( (This)->lpVtbl -> GetLastError(This,ppszError) ) 

#define IPdfPage_AddBinaryObjectFromFile(This,objectName,fileName)	\
    ( (This)->lpVtbl -> AddBinaryObjectFromFile(This,objectName,fileName) ) 

#define IPdfPage_GetBinaryObjectToFile(This,objectName,fileName)	\
    ( (This)->lpVtbl -> GetBinaryObjectToFile(This,objectName,fileName) ) 

#define IPdfPage_AddText(This,pszText,inchesFromLeft,inchesFromTop,pszFont,fontSize)	\
    ( (This)->lpVtbl -> AddText(This,pszText,inchesFromLeft,inchesFromTop,pszFont,fontSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPdfPage_INTERFACE_DEFINED__ */


#ifndef __IPdfDocument_INTERFACE_DEFINED__
#define __IPdfDocument_INTERFACE_DEFINED__

/* interface IPdfDocument */
/* [object][unique][nonextensible][oleautomation][dual][helpstring][uuid] */ 


DEFINE_GUID(IID_IPdfDocument,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x17);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570317")
    IPdfDocument : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Open( 
            BSTR bstrFileName,
            /* [in] */ BSTR bstrUserPassword,
            /* [in] */ BSTR bstrOwnerPassword) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Page( 
            long pageNumber,
            /* [defaultvalue][optional] */ char *pszPageLabel,
            /* [retval][out] */ IPdfPage **ppPage_DoNotAddRef_Or_Release) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageFromLabel( 
            char *pszPageLabel,
            /* [retval][out] */ long *pPageIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LabelFromPage( 
            long pageNumber,
            long stringSize,
            /* [retval][out] */ char *pszPageLabel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Write( 
            BSTR bstrOutputName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryInfoSize( 
            /* [retval][out] */ long *pInfoSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryInfo( 
            /* [retval][out] */ char *pszBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteUncompressed( 
            BSTR bstrOutputName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_PageCount( 
            /* [retval][out] */ long *pPageCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateNamedCount( 
            /* [in] */ BSTR name,
            /* [in] */ long currentCount,
            /* [in] */ long maxCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_NamedCount( 
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveLastAddedStream( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveIndexedAddedStream( 
            long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EraseLastAddedStream( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EraseIndexedAddedStream( 
            long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveStreamByID( 
            long identifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_RemovableStreams( 
            /* [retval][out] */ long *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Seal( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FirstPage( 
            /* [out] */ IPdfPage **ppIPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LastPage( 
            /* [out] */ IPdfPage **ppIPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPage( 
            /* [out] */ long *pPageNumber,
            /* [out] */ IPdfPage **ppIPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemovePage( 
            /* [in] */ long pageNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplicateStream( 
            long streamNumber,
            long newPage,
            POINT *pSource,
            POINT *pOffset,
            double scaleX,
            double scaleY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseText( 
            long pageNumber,
            HDC hdc,
            RECT *prcWindowsClip,
            void *pvIPostScriptTakeText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastError( 
            char **ppszError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExtractFonts( 
            char *pszToDirectory,
            char **ppszFilesRootNameList) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPdfDocumentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPdfDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPdfDocument * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPdfDocument * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPdfDocument * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPdfDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPdfDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPdfDocument * This,
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
        
        DECLSPEC_XFGVIRT(IPdfDocument, Open)
        HRESULT ( STDMETHODCALLTYPE *Open )( 
            IPdfDocument * This,
            BSTR bstrFileName,
            /* [in] */ BSTR bstrUserPassword,
            /* [in] */ BSTR bstrOwnerPassword);
        
        DECLSPEC_XFGVIRT(IPdfDocument, Page)
        HRESULT ( STDMETHODCALLTYPE *Page )( 
            IPdfDocument * This,
            long pageNumber,
            /* [defaultvalue][optional] */ char *pszPageLabel,
            /* [retval][out] */ IPdfPage **ppPage_DoNotAddRef_Or_Release);
        
        DECLSPEC_XFGVIRT(IPdfDocument, PageFromLabel)
        HRESULT ( STDMETHODCALLTYPE *PageFromLabel )( 
            IPdfDocument * This,
            char *pszPageLabel,
            /* [retval][out] */ long *pPageIndex);
        
        DECLSPEC_XFGVIRT(IPdfDocument, LabelFromPage)
        HRESULT ( STDMETHODCALLTYPE *LabelFromPage )( 
            IPdfDocument * This,
            long pageNumber,
            long stringSize,
            /* [retval][out] */ char *pszPageLabel);
        
        DECLSPEC_XFGVIRT(IPdfDocument, Write)
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            IPdfDocument * This,
            BSTR bstrOutputName);
        
        DECLSPEC_XFGVIRT(IPdfDocument, QueryInfoSize)
        HRESULT ( STDMETHODCALLTYPE *QueryInfoSize )( 
            IPdfDocument * This,
            /* [retval][out] */ long *pInfoSize);
        
        DECLSPEC_XFGVIRT(IPdfDocument, QueryInfo)
        HRESULT ( STDMETHODCALLTYPE *QueryInfo )( 
            IPdfDocument * This,
            /* [retval][out] */ char *pszBuffer);
        
        DECLSPEC_XFGVIRT(IPdfDocument, WriteUncompressed)
        HRESULT ( STDMETHODCALLTYPE *WriteUncompressed )( 
            IPdfDocument * This,
            BSTR bstrOutputName);
        
        DECLSPEC_XFGVIRT(IPdfDocument, get_PageCount)
        HRESULT ( STDMETHODCALLTYPE *get_PageCount )( 
            IPdfDocument * This,
            /* [retval][out] */ long *pPageCount);
        
        DECLSPEC_XFGVIRT(IPdfDocument, UpdateNamedCount)
        HRESULT ( STDMETHODCALLTYPE *UpdateNamedCount )( 
            IPdfDocument * This,
            /* [in] */ BSTR name,
            /* [in] */ long currentCount,
            /* [in] */ long maxCount);
        
        DECLSPEC_XFGVIRT(IPdfDocument, get_NamedCount)
        HRESULT ( STDMETHODCALLTYPE *get_NamedCount )( 
            IPdfDocument * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pCount);
        
        DECLSPEC_XFGVIRT(IPdfDocument, RemoveLastAddedStream)
        HRESULT ( STDMETHODCALLTYPE *RemoveLastAddedStream )( 
            IPdfDocument * This);
        
        DECLSPEC_XFGVIRT(IPdfDocument, RemoveIndexedAddedStream)
        HRESULT ( STDMETHODCALLTYPE *RemoveIndexedAddedStream )( 
            IPdfDocument * This,
            long index);
        
        DECLSPEC_XFGVIRT(IPdfDocument, EraseLastAddedStream)
        HRESULT ( STDMETHODCALLTYPE *EraseLastAddedStream )( 
            IPdfDocument * This);
        
        DECLSPEC_XFGVIRT(IPdfDocument, EraseIndexedAddedStream)
        HRESULT ( STDMETHODCALLTYPE *EraseIndexedAddedStream )( 
            IPdfDocument * This,
            long index);
        
        DECLSPEC_XFGVIRT(IPdfDocument, RemoveStreamByID)
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamByID )( 
            IPdfDocument * This,
            long identifier);
        
        DECLSPEC_XFGVIRT(IPdfDocument, get_RemovableStreams)
        HRESULT ( STDMETHODCALLTYPE *get_RemovableStreams )( 
            IPdfDocument * This,
            /* [retval][out] */ long *pCount);
        
        DECLSPEC_XFGVIRT(IPdfDocument, Seal)
        HRESULT ( STDMETHODCALLTYPE *Seal )( 
            IPdfDocument * This);
        
        DECLSPEC_XFGVIRT(IPdfDocument, FirstPage)
        HRESULT ( STDMETHODCALLTYPE *FirstPage )( 
            IPdfDocument * This,
            /* [out] */ IPdfPage **ppIPage);
        
        DECLSPEC_XFGVIRT(IPdfDocument, LastPage)
        HRESULT ( STDMETHODCALLTYPE *LastPage )( 
            IPdfDocument * This,
            /* [out] */ IPdfPage **ppIPage);
        
        DECLSPEC_XFGVIRT(IPdfDocument, AddPage)
        HRESULT ( STDMETHODCALLTYPE *AddPage )( 
            IPdfDocument * This,
            /* [out] */ long *pPageNumber,
            /* [out] */ IPdfPage **ppIPage);
        
        DECLSPEC_XFGVIRT(IPdfDocument, RemovePage)
        HRESULT ( STDMETHODCALLTYPE *RemovePage )( 
            IPdfDocument * This,
            /* [in] */ long pageNumber);
        
        DECLSPEC_XFGVIRT(IPdfDocument, ReplicateStream)
        HRESULT ( STDMETHODCALLTYPE *ReplicateStream )( 
            IPdfDocument * This,
            long streamNumber,
            long newPage,
            POINT *pSource,
            POINT *pOffset,
            double scaleX,
            double scaleY);
        
        DECLSPEC_XFGVIRT(IPdfDocument, ParseText)
        HRESULT ( STDMETHODCALLTYPE *ParseText )( 
            IPdfDocument * This,
            long pageNumber,
            HDC hdc,
            RECT *prcWindowsClip,
            void *pvIPostScriptTakeText);
        
        DECLSPEC_XFGVIRT(IPdfDocument, GetLastError)
        HRESULT ( STDMETHODCALLTYPE *GetLastError )( 
            IPdfDocument * This,
            char **ppszError);
        
        DECLSPEC_XFGVIRT(IPdfDocument, ExtractFonts)
        HRESULT ( STDMETHODCALLTYPE *ExtractFonts )( 
            IPdfDocument * This,
            char *pszToDirectory,
            char **ppszFilesRootNameList);
        
        END_INTERFACE
    } IPdfDocumentVtbl;

    interface IPdfDocument
    {
        CONST_VTBL struct IPdfDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPdfDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPdfDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPdfDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPdfDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPdfDocument_Open(This,bstrFileName,bstrUserPassword,bstrOwnerPassword)	\
    ( (This)->lpVtbl -> Open(This,bstrFileName,bstrUserPassword,bstrOwnerPassword) ) 

#define IPdfDocument_Page(This,pageNumber,pszPageLabel,ppPage_DoNotAddRef_Or_Release)	\
    ( (This)->lpVtbl -> Page(This,pageNumber,pszPageLabel,ppPage_DoNotAddRef_Or_Release) ) 

#define IPdfDocument_PageFromLabel(This,pszPageLabel,pPageIndex)	\
    ( (This)->lpVtbl -> PageFromLabel(This,pszPageLabel,pPageIndex) ) 

#define IPdfDocument_LabelFromPage(This,pageNumber,stringSize,pszPageLabel)	\
    ( (This)->lpVtbl -> LabelFromPage(This,pageNumber,stringSize,pszPageLabel) ) 

#define IPdfDocument_Write(This,bstrOutputName)	\
    ( (This)->lpVtbl -> Write(This,bstrOutputName) ) 

#define IPdfDocument_QueryInfoSize(This,pInfoSize)	\
    ( (This)->lpVtbl -> QueryInfoSize(This,pInfoSize) ) 

#define IPdfDocument_QueryInfo(This,pszBuffer)	\
    ( (This)->lpVtbl -> QueryInfo(This,pszBuffer) ) 

#define IPdfDocument_WriteUncompressed(This,bstrOutputName)	\
    ( (This)->lpVtbl -> WriteUncompressed(This,bstrOutputName) ) 

#define IPdfDocument_get_PageCount(This,pPageCount)	\
    ( (This)->lpVtbl -> get_PageCount(This,pPageCount) ) 

#define IPdfDocument_UpdateNamedCount(This,name,currentCount,maxCount)	\
    ( (This)->lpVtbl -> UpdateNamedCount(This,name,currentCount,maxCount) ) 

#define IPdfDocument_get_NamedCount(This,name,pCount)	\
    ( (This)->lpVtbl -> get_NamedCount(This,name,pCount) ) 

#define IPdfDocument_RemoveLastAddedStream(This)	\
    ( (This)->lpVtbl -> RemoveLastAddedStream(This) ) 

#define IPdfDocument_RemoveIndexedAddedStream(This,index)	\
    ( (This)->lpVtbl -> RemoveIndexedAddedStream(This,index) ) 

#define IPdfDocument_EraseLastAddedStream(This)	\
    ( (This)->lpVtbl -> EraseLastAddedStream(This) ) 

#define IPdfDocument_EraseIndexedAddedStream(This,index)	\
    ( (This)->lpVtbl -> EraseIndexedAddedStream(This,index) ) 

#define IPdfDocument_RemoveStreamByID(This,identifier)	\
    ( (This)->lpVtbl -> RemoveStreamByID(This,identifier) ) 

#define IPdfDocument_get_RemovableStreams(This,pCount)	\
    ( (This)->lpVtbl -> get_RemovableStreams(This,pCount) ) 

#define IPdfDocument_Seal(This)	\
    ( (This)->lpVtbl -> Seal(This) ) 

#define IPdfDocument_FirstPage(This,ppIPage)	\
    ( (This)->lpVtbl -> FirstPage(This,ppIPage) ) 

#define IPdfDocument_LastPage(This,ppIPage)	\
    ( (This)->lpVtbl -> LastPage(This,ppIPage) ) 

#define IPdfDocument_AddPage(This,pPageNumber,ppIPage)	\
    ( (This)->lpVtbl -> AddPage(This,pPageNumber,ppIPage) ) 

#define IPdfDocument_RemovePage(This,pageNumber)	\
    ( (This)->lpVtbl -> RemovePage(This,pageNumber) ) 

#define IPdfDocument_ReplicateStream(This,streamNumber,newPage,pSource,pOffset,scaleX,scaleY)	\
    ( (This)->lpVtbl -> ReplicateStream(This,streamNumber,newPage,pSource,pOffset,scaleX,scaleY) ) 

#define IPdfDocument_ParseText(This,pageNumber,hdc,prcWindowsClip,pvIPostScriptTakeText)	\
    ( (This)->lpVtbl -> ParseText(This,pageNumber,hdc,prcWindowsClip,pvIPostScriptTakeText) ) 

#define IPdfDocument_GetLastError(This,ppszError)	\
    ( (This)->lpVtbl -> GetLastError(This,ppszError) ) 

#define IPdfDocument_ExtractFonts(This,pszToDirectory,ppszFilesRootNameList)	\
    ( (This)->lpVtbl -> ExtractFonts(This,pszToDirectory,ppszFilesRootNameList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPdfDocument_INTERFACE_DEFINED__ */


#ifndef __IPdfEnabler_INTERFACE_DEFINED__
#define __IPdfEnabler_INTERFACE_DEFINED__

/* interface IPdfEnabler */
/* [object][unique][nonextensible][oleautomation][dual][helpstring][uuid] */ 


DEFINE_GUID(IID_IPdfEnabler,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x18);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570318")
    IPdfEnabler : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Document( 
            /* [retval][out] */ IPdfDocument **ppDocument) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPdfEnablerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPdfEnabler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPdfEnabler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPdfEnabler * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPdfEnabler * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPdfEnabler * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPdfEnabler * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPdfEnabler * This,
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
        
        DECLSPEC_XFGVIRT(IPdfEnabler, Document)
        HRESULT ( STDMETHODCALLTYPE *Document )( 
            IPdfEnabler * This,
            /* [retval][out] */ IPdfDocument **ppDocument);
        
        END_INTERFACE
    } IPdfEnablerVtbl;

    interface IPdfEnabler
    {
        CONST_VTBL struct IPdfEnablerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPdfEnabler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPdfEnabler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPdfEnabler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPdfEnabler_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPdfEnabler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPdfEnabler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPdfEnabler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPdfEnabler_Document(This,ppDocument)	\
    ( (This)->lpVtbl -> Document(This,ppDocument) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPdfEnabler_INTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_PdfEnabler,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x19);

#ifdef __cplusplus

class DECLSPEC_UUID("A64AB7AF-8A26-4f07-8877-56FE99570319")
PdfEnabler;
#endif
#endif /* __PdfEnabler_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


