

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Text.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
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


#ifndef __Text_i_h__
#define __Text_i_h__

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

#ifndef __ITextNotify_FWD_DEFINED__
#define __ITextNotify_FWD_DEFINED__
typedef interface ITextNotify ITextNotify;

#endif 	/* __ITextNotify_FWD_DEFINED__ */


#ifndef __IText_FWD_DEFINED__
#define __IText_FWD_DEFINED__
typedef interface IText IText;

#endif 	/* __IText_FWD_DEFINED__ */


#ifndef __Text_FWD_DEFINED__
#define __Text_FWD_DEFINED__

#ifdef __cplusplus
typedef class Text Text;
#else
typedef struct Text Text;
#endif /* __cplusplus */

#endif 	/* __Text_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Text_LIBRARY_DEFINED__
#define __Text_LIBRARY_DEFINED__

/* library Text */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


enum TextPropertiesID
    {
        textPropertyText	= 0,
        textPropertyLength	= 1,
        textPropertyFormat	= 2,
        textPropertyFont	= 3,
        textPropertySizeProperty	= 4,
        textPropertySize	= 5,
        textPropertySizeUnits	= 6,
        textPropertyPosition	= 7,
        textPropertyPositionX	= 8,
        textPropertyPositionY	= 9,
        textPropertyPositionZ	= 10,
        textPropertyWindowPosition	= 11,
        textPropertyColor	= 20,
        textPropertyLineWeight	= 21,
        textPropertySegmentiD	= 22,
        textPropertyActionTable	= 23,
        textPropertyCoordinatePlane	= 24,
        textPropertyFlipHorizontal	= 25,
        textPropertyFlipVertical	= 26,
        textPropertyRotation	= 27,
        textPropertyMinX	= 28,
        textPropertyMinY	= 29,
        textPropertyMinZ	= 30,
        textPropertyMaxX	= 31,
        textPropertyMaxY	= 32,
        textPropertyMaxZ	= 33,
        textPropertyPartOfWorldDomain	= 34,
        textPropertyDescription	= 35,
        textpropertyPartOfMainGraphic	= 36,
        textPropertyShowContentPropertyPage	= 37,
        textPropertyShowStylePropertyPage	= 38,
        textPropertyShowOrientationPropertyPage	= 39,
        textPropertyEnablePositionSettings	= 40,
        textPropertyShowPositionSettings	= 41,
        textPropertyTextNotify	= 42,
        textPropertyPositionString	= 43
    } ;

enum TextMethodsID
    {
        textMethodInitialize	= 101,
        textMethodGetTextList	= 102,
        textMethodPrepData	= 103,
        textMethodDraw	= 104,
        textMethodRedraw	= 105,
        textMethodErase	= 106,
        textMethodAdviseGSystemStatusBar	= 107,
        textMethodPrepText	= 108,
        textMethodEditProperties	= 109
    } ;


EXTERN_C const IID LIBID_Text;

#ifndef __ITextNotify_INTERFACE_DEFINED__
#define __ITextNotify_INTERFACE_DEFINED__

/* interface ITextNotify */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ITextNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDD1-55E6-11d3-8365-006008BD5BC3")
    ITextNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeleteText( 
            IText *__MIDL__ITextNotify0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextNotifyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITextNotify * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITextNotify * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITextNotify * This);
        
        DECLSPEC_XFGVIRT(ITextNotify, DeleteText)
        HRESULT ( STDMETHODCALLTYPE *DeleteText )( 
            ITextNotify * This,
            IText *__MIDL__ITextNotify0000);
        
        END_INTERFACE
    } ITextNotifyVtbl;

    interface ITextNotify
    {
        CONST_VTBL struct ITextNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITextNotify_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITextNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITextNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITextNotify_DeleteText(This,__MIDL__ITextNotify0000)	\
    ( (This)->lpVtbl -> DeleteText(This,__MIDL__ITextNotify0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITextNotify_INTERFACE_DEFINED__ */


#ifndef __IText_INTERFACE_DEFINED__
#define __IText_INTERFACE_DEFINED__

/* interface IText */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDCF-55E6-11d3-8365-006008BD5BC3")
    IText : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR setText) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *getText) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Format( 
            /* [in] */ long setTextFormat) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Format( 
            /* [retval][out] */ long *getTextFormat) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Font( 
            /* [in] */ BSTR fontName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ BSTR *fontName) = 0;
        
        virtual /* [helpstring][id][hidden][propput] */ HRESULT STDMETHODCALLTYPE put_SizeProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pPropertySize,
            /* [in] */ /* external definition not present */ IGProperty *pPropertySizeUnits) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ double pSize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ double *pSize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SizeUnits( 
            /* [in] */ enum /* external definition not present */ TextSizeUnits sizeUnits) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SizeUnits( 
            /* [retval][out] */ enum /* external definition not present */ TextSizeUnits *pSizeUnits) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ SAFEARRAY * pStringArrayContainingPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ SAFEARRAY * *ppStringArrayContainingPosition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionString( 
            /* [in] */ BSTR pStringContainingPosition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionString( 
            /* [retval][out] */ BSTR *ppStringContainingPosition) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionX( 
            /* [in] */ double scalarValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionX( 
            /* [retval][out] */ double *pScalarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionY( 
            /* [in] */ double scalarValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionY( 
            /* [retval][out] */ double *pScalarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PositionZ( 
            /* [in] */ double scalarValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PositionZ( 
            /* [retval][out] */ double *pScalarValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WindowPosition( 
            /* [in] */ POINTL *putWindowPoint) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WindowPosition( 
            /* [retval][out] */ POINTL *getWindowPoint) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
            /* [in] */ SAFEARRAY * color) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
            /* [retval][out] */ SAFEARRAY * *pColor) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeight( 
            /* [in] */ double lineWeight) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ double *pLineWeight) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *pID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ /* external definition not present */ IGraphicSegmentAction **__MIDL__IText0000) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CoordinatePlane( 
            /* [in] */ enum /* external definition not present */ CoordinatePlane __MIDL__IText0001) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CoordinatePlane( 
            /* [retval][out] */ enum /* external definition not present */ CoordinatePlane *__MIDL__IText0002) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FlipHorizontal( 
            /* [in] */ VARIANT_BOOL __MIDL__IText0003) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlipHorizontal( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IText0004) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FlipVertical( 
            /* [in] */ VARIANT_BOOL __MIDL__IText0005) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FlipVertical( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IText0006) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Rotation( 
            /* [in] */ double rotation) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
            /* [retval][out] */ double *pRotation) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_minX( 
            /* [retval][out] */ double *__MIDL__IText0007) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_minY( 
            /* [retval][out] */ double *__MIDL__IText0008) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_minZ( 
            /* [retval][out] */ double *__MIDL__IText0009) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxX( 
            /* [retval][out] */ double *__MIDL__IText0010) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxY( 
            /* [retval][out] */ double *__MIDL__IText0011) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_maxZ( 
            /* [retval][out] */ double *__MIDL__IText0012) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PartOfWorldDomain( 
            /* [in] */ VARIANT_BOOL bIsPart) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartOfWorldDomain( 
            /* [retval][out] */ VARIANT_BOOL *pbIsPart) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR textDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pTextDescription) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PartOfMainGraphic( 
            /* [in] */ VARIANT_BOOL boolFalseToPreventDrawingOnMainGraphic) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartOfMainGraphic( 
            /* [retval][out] */ VARIANT_BOOL *pBoolFalseToPreventDrawingOnMainGraphic) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentCount( 
            /* [in] */ long *__MIDL__IText0013) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE GetSegments( 
            /* [in] */ long *__MIDL__IText0014) = 0;
        
        virtual /* [id][helpstring] */ HRESULT STDMETHODCALLTYPE TextColorProperty( 
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyTextColor) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowContentPropertyPage( 
            /* [in] */ VARIANT_BOOL bShow) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowContentPropertyPage( 
            /* [retval][out] */ VARIANT_BOOL *pbShow) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowStylePropertyPage( 
            /* [in] */ VARIANT_BOOL bShow) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowStylePropertyPage( 
            /* [retval][out] */ VARIANT_BOOL *pbShow) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowOrientationPropertyPage( 
            /* [in] */ VARIANT_BOOL bShow) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowOrientationPropertyPage( 
            /* [retval][out] */ VARIANT_BOOL *pbShow) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnablePositionSettings( 
            /* [in] */ VARIANT_BOOL bEnable) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnablePositionSettings( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowPositionSettings( 
            /* [in] */ VARIANT_BOOL bEnable) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowPositionSettings( 
            /* [retval][out] */ VARIANT_BOOL *pbEnable) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TextNotify( 
            ITextNotify *pITextNotify) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IOpenGLImplementation *__MIDL__IText0015,
            /* external definition not present */ IEvaluator *__MIDL__IText0016,
            /* external definition not present */ IDataSet *__MIDL__IText0017,
            /* external definition not present */ IGProperty *pPropXFloor,
            /* external definition not present */ IGProperty *pPropXCeiling,
            /* external definition not present */ IGProperty *pPropYFloor,
            /* external definition not present */ IGProperty *pPropYCeiling,
            /* external definition not present */ IGProperty *pPropZFloor,
            /* external definition not present */ IGProperty *pPropZCeiling,
            char *text,
            struct /* external definition not present */ DataPoint *position,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenChangedCallback )( 
                void *__MIDL__IText0018,
                ULONG_PTR __MIDL__IText0019),
            /* [in] */ void *pWhenChangedArg,
            /* [in] */ ULONG_PTR whenChangedCookie) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PrepData( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Draw( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Erase( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Redraw( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IText0021) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFrom( 
            IText *pIText_Source) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GDIBoundingBox( 
            /* [retval][out] */ RECT *__MIDL__IText0022) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GDIBoundingBox( 
            /* [in] */ RECT *__MIDL__IText0023) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LineUp( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **__MIDL__IText0024) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasContent( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseGSGraphicServices( 
            void *__MIDL__IText0025) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IText * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IText * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IText * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IText * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IText * This,
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
        
        DECLSPEC_XFGVIRT(IText, put_Text)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IText * This,
            /* [in] */ BSTR setText);
        
        DECLSPEC_XFGVIRT(IText, get_Text)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IText * This,
            /* [retval][out] */ BSTR *getText);
        
        DECLSPEC_XFGVIRT(IText, put_Format)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Format )( 
            IText * This,
            /* [in] */ long setTextFormat);
        
        DECLSPEC_XFGVIRT(IText, get_Format)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Format )( 
            IText * This,
            /* [retval][out] */ long *getTextFormat);
        
        DECLSPEC_XFGVIRT(IText, put_Font)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Font )( 
            IText * This,
            /* [in] */ BSTR fontName);
        
        DECLSPEC_XFGVIRT(IText, get_Font)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IText * This,
            /* [retval][out] */ BSTR *fontName);
        
        DECLSPEC_XFGVIRT(IText, put_SizeProperty)
        /* [helpstring][id][hidden][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeProperty )( 
            IText * This,
            /* [in] */ /* external definition not present */ IGProperty *pPropertySize,
            /* [in] */ /* external definition not present */ IGProperty *pPropertySizeUnits);
        
        DECLSPEC_XFGVIRT(IText, put_Size)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IText * This,
            /* [in] */ double pSize);
        
        DECLSPEC_XFGVIRT(IText, get_Size)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IText * This,
            /* [retval][out] */ double *pSize);
        
        DECLSPEC_XFGVIRT(IText, put_SizeUnits)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SizeUnits )( 
            IText * This,
            /* [in] */ enum /* external definition not present */ TextSizeUnits sizeUnits);
        
        DECLSPEC_XFGVIRT(IText, get_SizeUnits)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SizeUnits )( 
            IText * This,
            /* [retval][out] */ enum /* external definition not present */ TextSizeUnits *pSizeUnits);
        
        DECLSPEC_XFGVIRT(IText, put_Position)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IText * This,
            /* [in] */ SAFEARRAY * pStringArrayContainingPosition);
        
        DECLSPEC_XFGVIRT(IText, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IText * This,
            /* [retval][out] */ SAFEARRAY * *ppStringArrayContainingPosition);
        
        DECLSPEC_XFGVIRT(IText, put_PositionString)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionString )( 
            IText * This,
            /* [in] */ BSTR pStringContainingPosition);
        
        DECLSPEC_XFGVIRT(IText, get_PositionString)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionString )( 
            IText * This,
            /* [retval][out] */ BSTR *ppStringContainingPosition);
        
        DECLSPEC_XFGVIRT(IText, put_PositionX)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionX )( 
            IText * This,
            /* [in] */ double scalarValue);
        
        DECLSPEC_XFGVIRT(IText, get_PositionX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionX )( 
            IText * This,
            /* [retval][out] */ double *pScalarValue);
        
        DECLSPEC_XFGVIRT(IText, put_PositionY)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionY )( 
            IText * This,
            /* [in] */ double scalarValue);
        
        DECLSPEC_XFGVIRT(IText, get_PositionY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionY )( 
            IText * This,
            /* [retval][out] */ double *pScalarValue);
        
        DECLSPEC_XFGVIRT(IText, put_PositionZ)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PositionZ )( 
            IText * This,
            /* [in] */ double scalarValue);
        
        DECLSPEC_XFGVIRT(IText, get_PositionZ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PositionZ )( 
            IText * This,
            /* [retval][out] */ double *pScalarValue);
        
        DECLSPEC_XFGVIRT(IText, put_WindowPosition)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WindowPosition )( 
            IText * This,
            /* [in] */ POINTL *putWindowPoint);
        
        DECLSPEC_XFGVIRT(IText, get_WindowPosition)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WindowPosition )( 
            IText * This,
            /* [retval][out] */ POINTL *getWindowPoint);
        
        DECLSPEC_XFGVIRT(IText, put_Color)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            IText * This,
            /* [in] */ SAFEARRAY * color);
        
        DECLSPEC_XFGVIRT(IText, get_Color)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            IText * This,
            /* [retval][out] */ SAFEARRAY * *pColor);
        
        DECLSPEC_XFGVIRT(IText, put_LineWeight)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IText * This,
            /* [in] */ double lineWeight);
        
        DECLSPEC_XFGVIRT(IText, get_LineWeight)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IText * This,
            /* [retval][out] */ double *pLineWeight);
        
        DECLSPEC_XFGVIRT(IText, get_SegmentID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IText * This,
            /* [retval][out] */ long *pID);
        
        DECLSPEC_XFGVIRT(IText, get_ActionTable)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IText * This,
            /* [retval][out] */ /* external definition not present */ IGraphicSegmentAction **__MIDL__IText0000);
        
        DECLSPEC_XFGVIRT(IText, put_CoordinatePlane)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CoordinatePlane )( 
            IText * This,
            /* [in] */ enum /* external definition not present */ CoordinatePlane __MIDL__IText0001);
        
        DECLSPEC_XFGVIRT(IText, get_CoordinatePlane)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CoordinatePlane )( 
            IText * This,
            /* [retval][out] */ enum /* external definition not present */ CoordinatePlane *__MIDL__IText0002);
        
        DECLSPEC_XFGVIRT(IText, put_FlipHorizontal)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FlipHorizontal )( 
            IText * This,
            /* [in] */ VARIANT_BOOL __MIDL__IText0003);
        
        DECLSPEC_XFGVIRT(IText, get_FlipHorizontal)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FlipHorizontal )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IText0004);
        
        DECLSPEC_XFGVIRT(IText, put_FlipVertical)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FlipVertical )( 
            IText * This,
            /* [in] */ VARIANT_BOOL __MIDL__IText0005);
        
        DECLSPEC_XFGVIRT(IText, get_FlipVertical)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FlipVertical )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IText0006);
        
        DECLSPEC_XFGVIRT(IText, put_Rotation)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Rotation )( 
            IText * This,
            /* [in] */ double rotation);
        
        DECLSPEC_XFGVIRT(IText, get_Rotation)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            IText * This,
            /* [retval][out] */ double *pRotation);
        
        DECLSPEC_XFGVIRT(IText, get_minX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minX )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0007);
        
        DECLSPEC_XFGVIRT(IText, get_minY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minY )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0008);
        
        DECLSPEC_XFGVIRT(IText, get_minZ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minZ )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0009);
        
        DECLSPEC_XFGVIRT(IText, get_maxX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxX )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0010);
        
        DECLSPEC_XFGVIRT(IText, get_maxY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxY )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0011);
        
        DECLSPEC_XFGVIRT(IText, get_maxZ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxZ )( 
            IText * This,
            /* [retval][out] */ double *__MIDL__IText0012);
        
        DECLSPEC_XFGVIRT(IText, put_PartOfWorldDomain)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PartOfWorldDomain )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bIsPart);
        
        DECLSPEC_XFGVIRT(IText, get_PartOfWorldDomain)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfWorldDomain )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsPart);
        
        DECLSPEC_XFGVIRT(IText, put_Description)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IText * This,
            /* [in] */ BSTR textDescription);
        
        DECLSPEC_XFGVIRT(IText, get_Description)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IText * This,
            /* [retval][out] */ BSTR *pTextDescription);
        
        DECLSPEC_XFGVIRT(IText, put_PartOfMainGraphic)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PartOfMainGraphic )( 
            IText * This,
            /* [in] */ VARIANT_BOOL boolFalseToPreventDrawingOnMainGraphic);
        
        DECLSPEC_XFGVIRT(IText, get_PartOfMainGraphic)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfMainGraphic )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pBoolFalseToPreventDrawingOnMainGraphic);
        
        DECLSPEC_XFGVIRT(IText, get_SegmentCount)
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IText * This,
            /* [in] */ long *__MIDL__IText0013);
        
        DECLSPEC_XFGVIRT(IText, GetSegments)
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IText * This,
            /* [in] */ long *__MIDL__IText0014);
        
        DECLSPEC_XFGVIRT(IText, TextColorProperty)
        /* [id][helpstring] */ HRESULT ( STDMETHODCALLTYPE *TextColorProperty )( 
            IText * This,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyTextColor);
        
        DECLSPEC_XFGVIRT(IText, put_ShowContentPropertyPage)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowContentPropertyPage )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bShow);
        
        DECLSPEC_XFGVIRT(IText, get_ShowContentPropertyPage)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowContentPropertyPage )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbShow);
        
        DECLSPEC_XFGVIRT(IText, put_ShowStylePropertyPage)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowStylePropertyPage )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bShow);
        
        DECLSPEC_XFGVIRT(IText, get_ShowStylePropertyPage)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowStylePropertyPage )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbShow);
        
        DECLSPEC_XFGVIRT(IText, put_ShowOrientationPropertyPage)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowOrientationPropertyPage )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bShow);
        
        DECLSPEC_XFGVIRT(IText, get_ShowOrientationPropertyPage)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowOrientationPropertyPage )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbShow);
        
        DECLSPEC_XFGVIRT(IText, put_EnablePositionSettings)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnablePositionSettings )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bEnable);
        
        DECLSPEC_XFGVIRT(IText, get_EnablePositionSettings)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnablePositionSettings )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        DECLSPEC_XFGVIRT(IText, put_ShowPositionSettings)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowPositionSettings )( 
            IText * This,
            /* [in] */ VARIANT_BOOL bEnable);
        
        DECLSPEC_XFGVIRT(IText, get_ShowPositionSettings)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowPositionSettings )( 
            IText * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnable);
        
        DECLSPEC_XFGVIRT(IText, put_TextNotify)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TextNotify )( 
            IText * This,
            ITextNotify *pITextNotify);
        
        DECLSPEC_XFGVIRT(IText, Initialize)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IText * This,
            /* external definition not present */ IOpenGLImplementation *__MIDL__IText0015,
            /* external definition not present */ IEvaluator *__MIDL__IText0016,
            /* external definition not present */ IDataSet *__MIDL__IText0017,
            /* external definition not present */ IGProperty *pPropXFloor,
            /* external definition not present */ IGProperty *pPropXCeiling,
            /* external definition not present */ IGProperty *pPropYFloor,
            /* external definition not present */ IGProperty *pPropYCeiling,
            /* external definition not present */ IGProperty *pPropZFloor,
            /* external definition not present */ IGProperty *pPropZCeiling,
            char *text,
            struct /* external definition not present */ DataPoint *position,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenChangedCallback )( 
                void *__MIDL__IText0018,
                ULONG_PTR __MIDL__IText0019),
            /* [in] */ void *pWhenChangedArg,
            /* [in] */ ULONG_PTR whenChangedCookie);
        
        DECLSPEC_XFGVIRT(IText, PrepData)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PrepData )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, Draw)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, Erase)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, Redraw)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, AdviseGSystemStatusBar)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IText * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IText0021);
        
        DECLSPEC_XFGVIRT(IText, EditProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, CopyFrom)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFrom )( 
            IText * This,
            IText *pIText_Source);
        
        DECLSPEC_XFGVIRT(IText, get_GDIBoundingBox)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GDIBoundingBox )( 
            IText * This,
            /* [retval][out] */ RECT *__MIDL__IText0022);
        
        DECLSPEC_XFGVIRT(IText, put_GDIBoundingBox)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GDIBoundingBox )( 
            IText * This,
            /* [in] */ RECT *__MIDL__IText0023);
        
        DECLSPEC_XFGVIRT(IText, LineUp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LineUp )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, get_DataSet)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSet )( 
            IText * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **__MIDL__IText0024);
        
        DECLSPEC_XFGVIRT(IText, HasContent)
        HRESULT ( STDMETHODCALLTYPE *HasContent )( 
            IText * This);
        
        DECLSPEC_XFGVIRT(IText, AdviseGSGraphicServices)
        HRESULT ( STDMETHODCALLTYPE *AdviseGSGraphicServices )( 
            IText * This,
            void *__MIDL__IText0025);
        
        END_INTERFACE
    } ITextVtbl;

    interface IText
    {
        CONST_VTBL struct ITextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IText_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IText_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IText_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IText_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IText_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IText_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IText_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IText_put_Text(This,setText)	\
    ( (This)->lpVtbl -> put_Text(This,setText) ) 

#define IText_get_Text(This,getText)	\
    ( (This)->lpVtbl -> get_Text(This,getText) ) 

#define IText_put_Format(This,setTextFormat)	\
    ( (This)->lpVtbl -> put_Format(This,setTextFormat) ) 

#define IText_get_Format(This,getTextFormat)	\
    ( (This)->lpVtbl -> get_Format(This,getTextFormat) ) 

#define IText_put_Font(This,fontName)	\
    ( (This)->lpVtbl -> put_Font(This,fontName) ) 

#define IText_get_Font(This,fontName)	\
    ( (This)->lpVtbl -> get_Font(This,fontName) ) 

#define IText_put_SizeProperty(This,pPropertySize,pPropertySizeUnits)	\
    ( (This)->lpVtbl -> put_SizeProperty(This,pPropertySize,pPropertySizeUnits) ) 

#define IText_put_Size(This,pSize)	\
    ( (This)->lpVtbl -> put_Size(This,pSize) ) 

#define IText_get_Size(This,pSize)	\
    ( (This)->lpVtbl -> get_Size(This,pSize) ) 

#define IText_put_SizeUnits(This,sizeUnits)	\
    ( (This)->lpVtbl -> put_SizeUnits(This,sizeUnits) ) 

#define IText_get_SizeUnits(This,pSizeUnits)	\
    ( (This)->lpVtbl -> get_SizeUnits(This,pSizeUnits) ) 

#define IText_put_Position(This,pStringArrayContainingPosition)	\
    ( (This)->lpVtbl -> put_Position(This,pStringArrayContainingPosition) ) 

#define IText_get_Position(This,ppStringArrayContainingPosition)	\
    ( (This)->lpVtbl -> get_Position(This,ppStringArrayContainingPosition) ) 

#define IText_put_PositionString(This,pStringContainingPosition)	\
    ( (This)->lpVtbl -> put_PositionString(This,pStringContainingPosition) ) 

#define IText_get_PositionString(This,ppStringContainingPosition)	\
    ( (This)->lpVtbl -> get_PositionString(This,ppStringContainingPosition) ) 

#define IText_put_PositionX(This,scalarValue)	\
    ( (This)->lpVtbl -> put_PositionX(This,scalarValue) ) 

#define IText_get_PositionX(This,pScalarValue)	\
    ( (This)->lpVtbl -> get_PositionX(This,pScalarValue) ) 

#define IText_put_PositionY(This,scalarValue)	\
    ( (This)->lpVtbl -> put_PositionY(This,scalarValue) ) 

#define IText_get_PositionY(This,pScalarValue)	\
    ( (This)->lpVtbl -> get_PositionY(This,pScalarValue) ) 

#define IText_put_PositionZ(This,scalarValue)	\
    ( (This)->lpVtbl -> put_PositionZ(This,scalarValue) ) 

#define IText_get_PositionZ(This,pScalarValue)	\
    ( (This)->lpVtbl -> get_PositionZ(This,pScalarValue) ) 

#define IText_put_WindowPosition(This,putWindowPoint)	\
    ( (This)->lpVtbl -> put_WindowPosition(This,putWindowPoint) ) 

#define IText_get_WindowPosition(This,getWindowPoint)	\
    ( (This)->lpVtbl -> get_WindowPosition(This,getWindowPoint) ) 

#define IText_put_Color(This,color)	\
    ( (This)->lpVtbl -> put_Color(This,color) ) 

#define IText_get_Color(This,pColor)	\
    ( (This)->lpVtbl -> get_Color(This,pColor) ) 

#define IText_put_LineWeight(This,lineWeight)	\
    ( (This)->lpVtbl -> put_LineWeight(This,lineWeight) ) 

#define IText_get_LineWeight(This,pLineWeight)	\
    ( (This)->lpVtbl -> get_LineWeight(This,pLineWeight) ) 

#define IText_get_SegmentID(This,pID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,pID) ) 

#define IText_get_ActionTable(This,__MIDL__IText0000)	\
    ( (This)->lpVtbl -> get_ActionTable(This,__MIDL__IText0000) ) 

#define IText_put_CoordinatePlane(This,__MIDL__IText0001)	\
    ( (This)->lpVtbl -> put_CoordinatePlane(This,__MIDL__IText0001) ) 

#define IText_get_CoordinatePlane(This,__MIDL__IText0002)	\
    ( (This)->lpVtbl -> get_CoordinatePlane(This,__MIDL__IText0002) ) 

#define IText_put_FlipHorizontal(This,__MIDL__IText0003)	\
    ( (This)->lpVtbl -> put_FlipHorizontal(This,__MIDL__IText0003) ) 

#define IText_get_FlipHorizontal(This,__MIDL__IText0004)	\
    ( (This)->lpVtbl -> get_FlipHorizontal(This,__MIDL__IText0004) ) 

#define IText_put_FlipVertical(This,__MIDL__IText0005)	\
    ( (This)->lpVtbl -> put_FlipVertical(This,__MIDL__IText0005) ) 

#define IText_get_FlipVertical(This,__MIDL__IText0006)	\
    ( (This)->lpVtbl -> get_FlipVertical(This,__MIDL__IText0006) ) 

#define IText_put_Rotation(This,rotation)	\
    ( (This)->lpVtbl -> put_Rotation(This,rotation) ) 

#define IText_get_Rotation(This,pRotation)	\
    ( (This)->lpVtbl -> get_Rotation(This,pRotation) ) 

#define IText_get_minX(This,__MIDL__IText0007)	\
    ( (This)->lpVtbl -> get_minX(This,__MIDL__IText0007) ) 

#define IText_get_minY(This,__MIDL__IText0008)	\
    ( (This)->lpVtbl -> get_minY(This,__MIDL__IText0008) ) 

#define IText_get_minZ(This,__MIDL__IText0009)	\
    ( (This)->lpVtbl -> get_minZ(This,__MIDL__IText0009) ) 

#define IText_get_maxX(This,__MIDL__IText0010)	\
    ( (This)->lpVtbl -> get_maxX(This,__MIDL__IText0010) ) 

#define IText_get_maxY(This,__MIDL__IText0011)	\
    ( (This)->lpVtbl -> get_maxY(This,__MIDL__IText0011) ) 

#define IText_get_maxZ(This,__MIDL__IText0012)	\
    ( (This)->lpVtbl -> get_maxZ(This,__MIDL__IText0012) ) 

#define IText_put_PartOfWorldDomain(This,bIsPart)	\
    ( (This)->lpVtbl -> put_PartOfWorldDomain(This,bIsPart) ) 

#define IText_get_PartOfWorldDomain(This,pbIsPart)	\
    ( (This)->lpVtbl -> get_PartOfWorldDomain(This,pbIsPart) ) 

#define IText_put_Description(This,textDescription)	\
    ( (This)->lpVtbl -> put_Description(This,textDescription) ) 

#define IText_get_Description(This,pTextDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pTextDescription) ) 

#define IText_put_PartOfMainGraphic(This,boolFalseToPreventDrawingOnMainGraphic)	\
    ( (This)->lpVtbl -> put_PartOfMainGraphic(This,boolFalseToPreventDrawingOnMainGraphic) ) 

#define IText_get_PartOfMainGraphic(This,pBoolFalseToPreventDrawingOnMainGraphic)	\
    ( (This)->lpVtbl -> get_PartOfMainGraphic(This,pBoolFalseToPreventDrawingOnMainGraphic) ) 

#define IText_get_SegmentCount(This,__MIDL__IText0013)	\
    ( (This)->lpVtbl -> get_SegmentCount(This,__MIDL__IText0013) ) 

#define IText_GetSegments(This,__MIDL__IText0014)	\
    ( (This)->lpVtbl -> GetSegments(This,__MIDL__IText0014) ) 

#define IText_TextColorProperty(This,pIPropertyTextColor)	\
    ( (This)->lpVtbl -> TextColorProperty(This,pIPropertyTextColor) ) 

#define IText_put_ShowContentPropertyPage(This,bShow)	\
    ( (This)->lpVtbl -> put_ShowContentPropertyPage(This,bShow) ) 

#define IText_get_ShowContentPropertyPage(This,pbShow)	\
    ( (This)->lpVtbl -> get_ShowContentPropertyPage(This,pbShow) ) 

#define IText_put_ShowStylePropertyPage(This,bShow)	\
    ( (This)->lpVtbl -> put_ShowStylePropertyPage(This,bShow) ) 

#define IText_get_ShowStylePropertyPage(This,pbShow)	\
    ( (This)->lpVtbl -> get_ShowStylePropertyPage(This,pbShow) ) 

#define IText_put_ShowOrientationPropertyPage(This,bShow)	\
    ( (This)->lpVtbl -> put_ShowOrientationPropertyPage(This,bShow) ) 

#define IText_get_ShowOrientationPropertyPage(This,pbShow)	\
    ( (This)->lpVtbl -> get_ShowOrientationPropertyPage(This,pbShow) ) 

#define IText_put_EnablePositionSettings(This,bEnable)	\
    ( (This)->lpVtbl -> put_EnablePositionSettings(This,bEnable) ) 

#define IText_get_EnablePositionSettings(This,pbEnable)	\
    ( (This)->lpVtbl -> get_EnablePositionSettings(This,pbEnable) ) 

#define IText_put_ShowPositionSettings(This,bEnable)	\
    ( (This)->lpVtbl -> put_ShowPositionSettings(This,bEnable) ) 

#define IText_get_ShowPositionSettings(This,pbEnable)	\
    ( (This)->lpVtbl -> get_ShowPositionSettings(This,pbEnable) ) 

#define IText_put_TextNotify(This,pITextNotify)	\
    ( (This)->lpVtbl -> put_TextNotify(This,pITextNotify) ) 

#define IText_Initialize(This,__MIDL__IText0015,__MIDL__IText0016,__MIDL__IText0017,pPropXFloor,pPropXCeiling,pPropYFloor,pPropYCeiling,pPropZFloor,pPropZCeiling,text,position,pWhenChangedCallback,pWhenChangedArg,whenChangedCookie)	\
    ( (This)->lpVtbl -> Initialize(This,__MIDL__IText0015,__MIDL__IText0016,__MIDL__IText0017,pPropXFloor,pPropXCeiling,pPropYFloor,pPropYCeiling,pPropZFloor,pPropZCeiling,text,position,pWhenChangedCallback,pWhenChangedArg,whenChangedCookie) ) 

#define IText_PrepData(This)	\
    ( (This)->lpVtbl -> PrepData(This) ) 

#define IText_Draw(This)	\
    ( (This)->lpVtbl -> Draw(This) ) 

#define IText_Erase(This)	\
    ( (This)->lpVtbl -> Erase(This) ) 

#define IText_Redraw(This)	\
    ( (This)->lpVtbl -> Redraw(This) ) 

#define IText_AdviseGSystemStatusBar(This,__MIDL__IText0021)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IText0021) ) 

#define IText_EditProperties(This)	\
    ( (This)->lpVtbl -> EditProperties(This) ) 

#define IText_CopyFrom(This,pIText_Source)	\
    ( (This)->lpVtbl -> CopyFrom(This,pIText_Source) ) 

#define IText_get_GDIBoundingBox(This,__MIDL__IText0022)	\
    ( (This)->lpVtbl -> get_GDIBoundingBox(This,__MIDL__IText0022) ) 

#define IText_put_GDIBoundingBox(This,__MIDL__IText0023)	\
    ( (This)->lpVtbl -> put_GDIBoundingBox(This,__MIDL__IText0023) ) 

#define IText_LineUp(This)	\
    ( (This)->lpVtbl -> LineUp(This) ) 

#define IText_get_DataSet(This,__MIDL__IText0024)	\
    ( (This)->lpVtbl -> get_DataSet(This,__MIDL__IText0024) ) 

#define IText_HasContent(This)	\
    ( (This)->lpVtbl -> HasContent(This) ) 

#define IText_AdviseGSGraphicServices(This,__MIDL__IText0025)	\
    ( (This)->lpVtbl -> AdviseGSGraphicServices(This,__MIDL__IText0025) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IText_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Text;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFDD0-55E6-11d3-8365-006008BD5BC3")
Text;
#endif
#endif /* __Text_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


