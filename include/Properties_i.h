

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Com-Implementation\Properties.odl:
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


#ifndef __Properties_i_h__
#define __Properties_i_h__

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

#ifndef __IGPropertyClient_FWD_DEFINED__
#define __IGPropertyClient_FWD_DEFINED__
typedef interface IGPropertyClient IGPropertyClient;

#endif 	/* __IGPropertyClient_FWD_DEFINED__ */


#ifndef __IGPropertiesClient_FWD_DEFINED__
#define __IGPropertiesClient_FWD_DEFINED__
typedef interface IGPropertiesClient IGPropertiesClient;

#endif 	/* __IGPropertiesClient_FWD_DEFINED__ */


#ifndef __IGPropertyPageClient_FWD_DEFINED__
#define __IGPropertyPageClient_FWD_DEFINED__
typedef interface IGPropertyPageClient IGPropertyPageClient;

#endif 	/* __IGPropertyPageClient_FWD_DEFINED__ */


#ifndef __IGProperty_FWD_DEFINED__
#define __IGProperty_FWD_DEFINED__
typedef interface IGProperty IGProperty;

#endif 	/* __IGProperty_FWD_DEFINED__ */


#ifndef __IGProperties_FWD_DEFINED__
#define __IGProperties_FWD_DEFINED__
typedef interface IGProperties IGProperties;

#endif 	/* __IGProperties_FWD_DEFINED__ */


#ifndef __InnoVisioNateProperty_FWD_DEFINED__
#define __InnoVisioNateProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class InnoVisioNateProperty InnoVisioNateProperty;
#else
typedef struct InnoVisioNateProperty InnoVisioNateProperty;
#endif /* __cplusplus */

#endif 	/* __InnoVisioNateProperty_FWD_DEFINED__ */


#ifndef __InnoVisioNateProperties_FWD_DEFINED__
#define __InnoVisioNateProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class InnoVisioNateProperties InnoVisioNateProperties;
#else
typedef struct InnoVisioNateProperties InnoVisioNateProperties;
#endif /* __cplusplus */

#endif 	/* __InnoVisioNateProperties_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __InnoVisioNateProperties_LIBRARY_DEFINED__
#define __InnoVisioNateProperties_LIBRARY_DEFINED__

/* library InnoVisioNateProperties */
/* [version][lcid][helpstring][helpfile][uuid] */ 





enum PropertyType
    {
        TYPE_LONG	= 0,
        TYPE_DOUBLE	= ( TYPE_LONG + 1 ) ,
        TYPE_SZSTRING	= ( TYPE_DOUBLE + 1 ) ,
        TYPE_STRING	= ( TYPE_SZSTRING + 1 ) ,
        TYPE_BINARY	= ( TYPE_STRING + 1 ) ,
        TYPE_RAW_BINARY	= ( TYPE_BINARY + 1 ) ,
        TYPE_BOOL	= ( TYPE_RAW_BINARY + 1 ) ,
        TYPE_VARIANT	= ( TYPE_BOOL + 1 ) ,
        TYPE_ARRAY	= ( TYPE_VARIANT + 1 ) ,
        TYPE_OBJECT_STORAGE_ARRAY	= ( TYPE_ARRAY + 1 ) ,
        TYPE_UNSPECIFIED	= 99
    } ;

enum PropertySize
    {
        SIZE_UNSPECIFIED	= 0,
        SIZE_LONG	= sizeof( long  ),
        SIZE_DOUBLE	= sizeof( double  ),
        SIZE_BOOL	= sizeof( short  ),
        MAX_PROPERTY_SIZE	= 512
    } ;

enum PersistenceMechanism
    {
        MECHANISM_STORAGE	= 1,
        MECHANISM_STREAM	= 2,
        MECHANISM_STREAMINIT	= 3,
        MECHANISM_PROPERTYBAG	= 4,
        MECHANISM_PROPERTYBAG2	= 5,
        MECHANISM_INIFILE	= 6,
        MECHANISM_DEFAULT	= MECHANISM_STORAGE
    } ;

enum ArrayIndex
    {
        ARRAY_INDEX_REMOVE	= -4,
        ARRAY_INDEX_ADD	= -3,
        ARRAY_INDEX_FIRST	= -2,
        ARRAY_INDEX_LAST	= -1
    } ;

EXTERN_C const IID LIBID_InnoVisioNateProperties;

#ifndef __IGPropertyClient_INTERFACE_DEFINED__
#define __IGPropertyClient_INTERFACE_DEFINED__

/* interface IGPropertyClient */
/* [object][unique][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IGPropertyClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CAEFD8E-55E6-11d3-8365-006008BD5BC3")
    IGPropertyClient : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Changed( 
            /* [in] */ IGProperty *__MIDL__IGPropertyClient0000) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPropertyClientVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGPropertyClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGPropertyClient * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGPropertyClient * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGPropertyClient * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGPropertyClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGPropertyClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGPropertyClient * This,
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
        
        DECLSPEC_XFGVIRT(IGPropertyClient, Changed)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Changed )( 
            IGPropertyClient * This,
            /* [in] */ IGProperty *__MIDL__IGPropertyClient0000);
        
        END_INTERFACE
    } IGPropertyClientVtbl;

    interface IGPropertyClient
    {
        CONST_VTBL struct IGPropertyClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGPropertyClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGPropertyClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGPropertyClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGPropertyClient_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGPropertyClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGPropertyClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGPropertyClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGPropertyClient_Changed(This,__MIDL__IGPropertyClient0000)	\
    ( (This)->lpVtbl -> Changed(This,__MIDL__IGPropertyClient0000) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGPropertyClient_INTERFACE_DEFINED__ */


#ifndef __IGPropertiesClient_INTERFACE_DEFINED__
#define __IGPropertiesClient_INTERFACE_DEFINED__

/* interface IGPropertiesClient */
/* [object][unique][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IGPropertiesClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CAEFD8B-55E6-11d3-8365-006008BD5BC3")
    IGPropertiesClient : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SavePrep( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitNew( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Loaded( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsDirty( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetClassID( 
            /* [out][in] */ BYTE *pCLSID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPropertiesClientVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGPropertiesClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertiesClient, SavePrep)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SavePrep )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertiesClient, InitNew)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertiesClient, Loaded)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Loaded )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertiesClient, IsDirty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsDirty )( 
            IGPropertiesClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertiesClient, GetClassID)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IGPropertiesClient * This,
            /* [out][in] */ BYTE *pCLSID);
        
        END_INTERFACE
    } IGPropertiesClientVtbl;

    interface IGPropertiesClient
    {
        CONST_VTBL struct IGPropertiesClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGPropertiesClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGPropertiesClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGPropertiesClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGPropertiesClient_SavePrep(This)	\
    ( (This)->lpVtbl -> SavePrep(This) ) 

#define IGPropertiesClient_InitNew(This)	\
    ( (This)->lpVtbl -> InitNew(This) ) 

#define IGPropertiesClient_Loaded(This)	\
    ( (This)->lpVtbl -> Loaded(This) ) 

#define IGPropertiesClient_IsDirty(This)	\
    ( (This)->lpVtbl -> IsDirty(This) ) 

#define IGPropertiesClient_GetClassID(This,pCLSID)	\
    ( (This)->lpVtbl -> GetClassID(This,pCLSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGPropertiesClient_INTERFACE_DEFINED__ */


#ifndef __IGPropertyPageClient_INTERFACE_DEFINED__
#define __IGPropertyPageClient_INTERFACE_DEFINED__

/* interface IGPropertyPageClient */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IGPropertyPageClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CAEFD8B-55E7-11d3-8365-006008BD5BC3")
    IGPropertyPageClient : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeforeAllPropertyPages( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertyPagesInfo( 
            /* [in] */ long *countPages,
            /* [out][in] */ SAFEARRAY * *stringPageNames,
            /* [out][in] */ SAFEARRAY * *stringHelpDirs,
            /* [out][in] */ SAFEARRAY * *pSize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePropertyPage( 
            /* [in] */ long pageNumber,
            /* [in] */ HWND hwndPropertyPageParent,
            /* [in] */ RECT *pRect,
            /* [in] */ BOOL isModal,
            /* [retval][out] */ HWND *pHwndPropertyPage) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsPageDirty( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ int *__MIDL__IGPropertyPageClient0000) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Help( 
            BSTR bstrHelpFile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TranslateAccelerator( 
            /* [in] */ long pMsg,
            /* [retval][out] */ long *returnValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Apply( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AfterAllPropertyPages( 
            int userCancelled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DestroyPropertyPage( 
            /* [in] */ long pageNumberNumber) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertySheetHeader( 
            void *pHeader) = 0;
        
        virtual /* [propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_PropertyPageCount( 
            /* [retval][out] */ long *pCountPages) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertySheets( 
            void *pSheets) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TakePropertySheetDialogs( 
            SAFEARRAY *pDialogHandles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPropertyPageClientVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGPropertyPageClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGPropertyPageClient * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGPropertyPageClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, BeforeAllPropertyPages)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeforeAllPropertyPages )( 
            IGPropertyPageClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, GetPropertyPagesInfo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyPagesInfo )( 
            IGPropertyPageClient * This,
            /* [in] */ long *countPages,
            /* [out][in] */ SAFEARRAY * *stringPageNames,
            /* [out][in] */ SAFEARRAY * *stringHelpDirs,
            /* [out][in] */ SAFEARRAY * *pSize);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, CreatePropertyPage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyPage )( 
            IGPropertyPageClient * This,
            /* [in] */ long pageNumber,
            /* [in] */ HWND hwndPropertyPageParent,
            /* [in] */ RECT *pRect,
            /* [in] */ BOOL isModal,
            /* [retval][out] */ HWND *pHwndPropertyPage);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, IsPageDirty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsPageDirty )( 
            IGPropertyPageClient * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ int *__MIDL__IGPropertyPageClient0000);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, Help)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Help )( 
            IGPropertyPageClient * This,
            BSTR bstrHelpFile);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, TranslateAccelerator)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )( 
            IGPropertyPageClient * This,
            /* [in] */ long pMsg,
            /* [retval][out] */ long *returnValue);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, Apply)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IGPropertyPageClient * This);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, AfterAllPropertyPages)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AfterAllPropertyPages )( 
            IGPropertyPageClient * This,
            int userCancelled);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, DestroyPropertyPage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyPropertyPage )( 
            IGPropertyPageClient * This,
            /* [in] */ long pageNumberNumber);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, GetPropertySheetHeader)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertySheetHeader )( 
            IGPropertyPageClient * This,
            void *pHeader);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, get_PropertyPageCount)
        /* [propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyPageCount )( 
            IGPropertyPageClient * This,
            /* [retval][out] */ long *pCountPages);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, GetPropertySheets)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertySheets )( 
            IGPropertyPageClient * This,
            void *pSheets);
        
        DECLSPEC_XFGVIRT(IGPropertyPageClient, TakePropertySheetDialogs)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TakePropertySheetDialogs )( 
            IGPropertyPageClient * This,
            SAFEARRAY *pDialogHandles);
        
        END_INTERFACE
    } IGPropertyPageClientVtbl;

    interface IGPropertyPageClient
    {
        CONST_VTBL struct IGPropertyPageClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGPropertyPageClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGPropertyPageClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGPropertyPageClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGPropertyPageClient_BeforeAllPropertyPages(This)	\
    ( (This)->lpVtbl -> BeforeAllPropertyPages(This) ) 

#define IGPropertyPageClient_GetPropertyPagesInfo(This,countPages,stringPageNames,stringHelpDirs,pSize)	\
    ( (This)->lpVtbl -> GetPropertyPagesInfo(This,countPages,stringPageNames,stringHelpDirs,pSize) ) 

#define IGPropertyPageClient_CreatePropertyPage(This,pageNumber,hwndPropertyPageParent,pRect,isModal,pHwndPropertyPage)	\
    ( (This)->lpVtbl -> CreatePropertyPage(This,pageNumber,hwndPropertyPageParent,pRect,isModal,pHwndPropertyPage) ) 

#define IGPropertyPageClient_IsPageDirty(This,pageNumber,__MIDL__IGPropertyPageClient0000)	\
    ( (This)->lpVtbl -> IsPageDirty(This,pageNumber,__MIDL__IGPropertyPageClient0000) ) 

#define IGPropertyPageClient_Help(This,bstrHelpFile)	\
    ( (This)->lpVtbl -> Help(This,bstrHelpFile) ) 

#define IGPropertyPageClient_TranslateAccelerator(This,pMsg,returnValue)	\
    ( (This)->lpVtbl -> TranslateAccelerator(This,pMsg,returnValue) ) 

#define IGPropertyPageClient_Apply(This)	\
    ( (This)->lpVtbl -> Apply(This) ) 

#define IGPropertyPageClient_AfterAllPropertyPages(This,userCancelled)	\
    ( (This)->lpVtbl -> AfterAllPropertyPages(This,userCancelled) ) 

#define IGPropertyPageClient_DestroyPropertyPage(This,pageNumberNumber)	\
    ( (This)->lpVtbl -> DestroyPropertyPage(This,pageNumberNumber) ) 

#define IGPropertyPageClient_GetPropertySheetHeader(This,pHeader)	\
    ( (This)->lpVtbl -> GetPropertySheetHeader(This,pHeader) ) 

#define IGPropertyPageClient_get_PropertyPageCount(This,pCountPages)	\
    ( (This)->lpVtbl -> get_PropertyPageCount(This,pCountPages) ) 

#define IGPropertyPageClient_GetPropertySheets(This,pSheets)	\
    ( (This)->lpVtbl -> GetPropertySheets(This,pSheets) ) 

#define IGPropertyPageClient_TakePropertySheetDialogs(This,pDialogHandles)	\
    ( (This)->lpVtbl -> TakePropertySheetDialogs(This,pDialogHandles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGPropertyPageClient_INTERFACE_DEFINED__ */


#ifndef __IGProperty_INTERFACE_DEFINED__
#define __IGProperty_INTERFACE_DEFINED__

/* interface IGProperty */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IGProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CAEFD8D-55E6-11d3-8365-006008BD5BC3")
    IGProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_value( 
            /* [in] */ VARIANT newValue) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_value( 
            /* [retval][out] */ VARIANT *theValue) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_type( 
            /* [in] */ enum PropertyType type) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_type( 
            /* [retval][out] */ enum PropertyType *pType) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_size( 
            /* [in] */ long size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_size( 
            /* [retval][out] */ long *size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_isDirty( 
            /* [in] */ short setDirtyState) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_isDirty( 
            /* [retval][out] */ short *getDirtyState) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_everAssigned( 
            /* [retval][out] */ short *getEverAssigned) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ignoreSetAction( 
            /* [in] */ VARIANT_BOOL ignoreSetAction) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ignoreSetAction( 
            /* [retval][out] */ VARIANT_BOOL *getIgnoreSetAction) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_debuggingEnabled( 
            /* [in] */ VARIANT_BOOL __MIDL__IGProperty0000) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_debuggingEnabled( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGProperty0001) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_binaryData( 
            BYTE **getAddress) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_compressedName( 
            BSTR *getCompressedName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_encodedText( 
            /* [in] */ BSTR putEncodedText) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_encodedText( 
            /* [retval][out] */ BSTR *getEncodedText) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_variantType( 
            /* [retval][out] */ VARTYPE *__MIDL__IGProperty0002) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_longValue( 
            /* [in] */ long __MIDL__IGProperty0003) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_longValue( 
            /* [retval][out] */ long *__MIDL__IGProperty0004) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_doubleValue( 
            /* [in] */ double __MIDL__IGProperty0005) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_doubleValue( 
            /* [retval][out] */ double *__MIDL__IGProperty0006) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_binaryValue( 
            /* [in] */ long cbSize,
            /* [in] */ BYTE *__MIDL__IGProperty0007) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_binaryValue( 
            /* [in] */ long cbSize,
            /* [retval][out] */ BYTE **__MIDL__IGProperty0008) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_szValue( 
            /* [in] */ char *pNewString) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_szValue( 
            /* [retval][out] */ char *pOutput) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_stringValue( 
            /* [in] */ BSTR __MIDL__IGProperty0009) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_stringValue( 
            /* [retval][out] */ BSTR *__MIDL__IGProperty0010) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_arrayValue( 
            /* [in] */ SAFEARRAY * variants) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_arrayValue( 
            /* [retval][out] */ SAFEARRAY * *variants) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_boolValue( 
            /* [in] */ short __MIDL__IGProperty0011) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_boolValue( 
            /* [retval][out] */ short *__MIDL__IGProperty0012) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_variantValue( 
            /* [in] */ VARIANT __MIDL__IGProperty0013) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_variantValue( 
            /* [retval][out] */ VARIANT *__MIDL__IGProperty0014) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_arrayIndex( 
            /* [in] */ long index) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_arrayIndex( 
            /* [retval][out] */ long *__MIDL__IGProperty0015) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_arrayElement( 
            /* [in] */ long index,
            /* [in] */ VARIANT elementValue) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_arrayElement( 
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *elementValue) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_arrayElementCount( 
            /* [retval][out] */ long *countElements) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE clearArray( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE directAccess( 
            /* [in] */ enum PropertyType propertyType,
            /* [in] */ void *directAccess,
            /* [in] */ long directAccessSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE copyTo( 
            /* [in] */ IGProperty *pTheDestination) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addStorageObject( 
            /* [in] */ IUnknown *pObjectSupportingIPersistStorage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeStorageObject( 
            /* [in] */ IUnknown *pObjectSupportingIPersistStorage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE clearStorageObjects( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_storedObjectCount( 
            /* [retval][out] */ long *cntObjects) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE writeStorageObjects( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE readStorageObjects( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowValue( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemValue( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowText( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemText( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowText( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemText( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowComboBoxSelection( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemComboBoxSelection( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowComboBoxSelection( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemComboBoxSelection( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowComboBoxList( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemComboBoxList( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowComboBoxList( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemComboBoxList( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowListBoxSelection( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemListBoxSelection( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowListBoxSelection( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemListBoxSelection( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowListBoxList( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemListBoxList( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowListBoxList( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemListBoxList( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowArrayValues( 
            /* [in] */ SAFEARRAY * *hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemArrayValues( 
            /* [in] */ SAFEARRAY * *hwndDialog,
            /* [in] */ SAFEARRAY * *idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowArrayValues( 
            /* [in] */ SAFEARRAY * *hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemArrayValues( 
            /* [in] */ SAFEARRAY * *hwndDialog,
            /* [in] */ SAFEARRAY * *idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowChecked( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemChecked( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowChecked( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getWindowItemChecked( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowEnabled( 
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setWindowItemEnabled( 
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [hidden][id] */ HRESULT STDMETHODCALLTYPE assign( 
            void *anyData,
            long length) = 0;
        
        virtual /* [id] */ void *STDMETHODCALLTYPE pointer( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPropertyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGProperty * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGProperty * This,
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
        
        DECLSPEC_XFGVIRT(IGProperty, put_value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_value )( 
            IGProperty * This,
            /* [in] */ VARIANT newValue);
        
        DECLSPEC_XFGVIRT(IGProperty, get_value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_value )( 
            IGProperty * This,
            /* [retval][out] */ VARIANT *theValue);
        
        DECLSPEC_XFGVIRT(IGProperty, put_name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_name )( 
            IGProperty * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IGProperty, get_name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_name )( 
            IGProperty * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(IGProperty, put_type)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_type )( 
            IGProperty * This,
            /* [in] */ enum PropertyType type);
        
        DECLSPEC_XFGVIRT(IGProperty, get_type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_type )( 
            IGProperty * This,
            /* [retval][out] */ enum PropertyType *pType);
        
        DECLSPEC_XFGVIRT(IGProperty, put_size)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_size )( 
            IGProperty * This,
            /* [in] */ long size);
        
        DECLSPEC_XFGVIRT(IGProperty, get_size)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_size )( 
            IGProperty * This,
            /* [retval][out] */ long *size);
        
        DECLSPEC_XFGVIRT(IGProperty, put_isDirty)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_isDirty )( 
            IGProperty * This,
            /* [in] */ short setDirtyState);
        
        DECLSPEC_XFGVIRT(IGProperty, get_isDirty)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_isDirty )( 
            IGProperty * This,
            /* [retval][out] */ short *getDirtyState);
        
        DECLSPEC_XFGVIRT(IGProperty, get_everAssigned)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_everAssigned )( 
            IGProperty * This,
            /* [retval][out] */ short *getEverAssigned);
        
        DECLSPEC_XFGVIRT(IGProperty, put_ignoreSetAction)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ignoreSetAction )( 
            IGProperty * This,
            /* [in] */ VARIANT_BOOL ignoreSetAction);
        
        DECLSPEC_XFGVIRT(IGProperty, get_ignoreSetAction)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ignoreSetAction )( 
            IGProperty * This,
            /* [retval][out] */ VARIANT_BOOL *getIgnoreSetAction);
        
        DECLSPEC_XFGVIRT(IGProperty, put_debuggingEnabled)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_debuggingEnabled )( 
            IGProperty * This,
            /* [in] */ VARIANT_BOOL __MIDL__IGProperty0000);
        
        DECLSPEC_XFGVIRT(IGProperty, get_debuggingEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_debuggingEnabled )( 
            IGProperty * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGProperty0001);
        
        DECLSPEC_XFGVIRT(IGProperty, get_binaryData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_binaryData )( 
            IGProperty * This,
            BYTE **getAddress);
        
        DECLSPEC_XFGVIRT(IGProperty, get_compressedName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_compressedName )( 
            IGProperty * This,
            BSTR *getCompressedName);
        
        DECLSPEC_XFGVIRT(IGProperty, put_encodedText)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_encodedText )( 
            IGProperty * This,
            /* [in] */ BSTR putEncodedText);
        
        DECLSPEC_XFGVIRT(IGProperty, get_encodedText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_encodedText )( 
            IGProperty * This,
            /* [retval][out] */ BSTR *getEncodedText);
        
        DECLSPEC_XFGVIRT(IGProperty, get_variantType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_variantType )( 
            IGProperty * This,
            /* [retval][out] */ VARTYPE *__MIDL__IGProperty0002);
        
        DECLSPEC_XFGVIRT(IGProperty, put_longValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_longValue )( 
            IGProperty * This,
            /* [in] */ long __MIDL__IGProperty0003);
        
        DECLSPEC_XFGVIRT(IGProperty, get_longValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_longValue )( 
            IGProperty * This,
            /* [retval][out] */ long *__MIDL__IGProperty0004);
        
        DECLSPEC_XFGVIRT(IGProperty, put_doubleValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_doubleValue )( 
            IGProperty * This,
            /* [in] */ double __MIDL__IGProperty0005);
        
        DECLSPEC_XFGVIRT(IGProperty, get_doubleValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_doubleValue )( 
            IGProperty * This,
            /* [retval][out] */ double *__MIDL__IGProperty0006);
        
        DECLSPEC_XFGVIRT(IGProperty, put_binaryValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_binaryValue )( 
            IGProperty * This,
            /* [in] */ long cbSize,
            /* [in] */ BYTE *__MIDL__IGProperty0007);
        
        DECLSPEC_XFGVIRT(IGProperty, get_binaryValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_binaryValue )( 
            IGProperty * This,
            /* [in] */ long cbSize,
            /* [retval][out] */ BYTE **__MIDL__IGProperty0008);
        
        DECLSPEC_XFGVIRT(IGProperty, put_szValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_szValue )( 
            IGProperty * This,
            /* [in] */ char *pNewString);
        
        DECLSPEC_XFGVIRT(IGProperty, get_szValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_szValue )( 
            IGProperty * This,
            /* [retval][out] */ char *pOutput);
        
        DECLSPEC_XFGVIRT(IGProperty, put_stringValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_stringValue )( 
            IGProperty * This,
            /* [in] */ BSTR __MIDL__IGProperty0009);
        
        DECLSPEC_XFGVIRT(IGProperty, get_stringValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_stringValue )( 
            IGProperty * This,
            /* [retval][out] */ BSTR *__MIDL__IGProperty0010);
        
        DECLSPEC_XFGVIRT(IGProperty, put_arrayValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_arrayValue )( 
            IGProperty * This,
            /* [in] */ SAFEARRAY * variants);
        
        DECLSPEC_XFGVIRT(IGProperty, get_arrayValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_arrayValue )( 
            IGProperty * This,
            /* [retval][out] */ SAFEARRAY * *variants);
        
        DECLSPEC_XFGVIRT(IGProperty, put_boolValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_boolValue )( 
            IGProperty * This,
            /* [in] */ short __MIDL__IGProperty0011);
        
        DECLSPEC_XFGVIRT(IGProperty, get_boolValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_boolValue )( 
            IGProperty * This,
            /* [retval][out] */ short *__MIDL__IGProperty0012);
        
        DECLSPEC_XFGVIRT(IGProperty, put_variantValue)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_variantValue )( 
            IGProperty * This,
            /* [in] */ VARIANT __MIDL__IGProperty0013);
        
        DECLSPEC_XFGVIRT(IGProperty, get_variantValue)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_variantValue )( 
            IGProperty * This,
            /* [retval][out] */ VARIANT *__MIDL__IGProperty0014);
        
        DECLSPEC_XFGVIRT(IGProperty, put_arrayIndex)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_arrayIndex )( 
            IGProperty * This,
            /* [in] */ long index);
        
        DECLSPEC_XFGVIRT(IGProperty, get_arrayIndex)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_arrayIndex )( 
            IGProperty * This,
            /* [retval][out] */ long *__MIDL__IGProperty0015);
        
        DECLSPEC_XFGVIRT(IGProperty, put_arrayElement)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_arrayElement )( 
            IGProperty * This,
            /* [in] */ long index,
            /* [in] */ VARIANT elementValue);
        
        DECLSPEC_XFGVIRT(IGProperty, get_arrayElement)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_arrayElement )( 
            IGProperty * This,
            /* [in] */ long index,
            /* [retval][out] */ VARIANT *elementValue);
        
        DECLSPEC_XFGVIRT(IGProperty, get_arrayElementCount)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_arrayElementCount )( 
            IGProperty * This,
            /* [retval][out] */ long *countElements);
        
        DECLSPEC_XFGVIRT(IGProperty, clearArray)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *clearArray )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IGProperty, directAccess)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *directAccess )( 
            IGProperty * This,
            /* [in] */ enum PropertyType propertyType,
            /* [in] */ void *directAccess,
            /* [in] */ long directAccessSize);
        
        DECLSPEC_XFGVIRT(IGProperty, copyTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *copyTo )( 
            IGProperty * This,
            /* [in] */ IGProperty *pTheDestination);
        
        DECLSPEC_XFGVIRT(IGProperty, addStorageObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addStorageObject )( 
            IGProperty * This,
            /* [in] */ IUnknown *pObjectSupportingIPersistStorage);
        
        DECLSPEC_XFGVIRT(IGProperty, removeStorageObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeStorageObject )( 
            IGProperty * This,
            /* [in] */ IUnknown *pObjectSupportingIPersistStorage);
        
        DECLSPEC_XFGVIRT(IGProperty, clearStorageObjects)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *clearStorageObjects )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IGProperty, get_storedObjectCount)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_storedObjectCount )( 
            IGProperty * This,
            /* [retval][out] */ long *cntObjects);
        
        DECLSPEC_XFGVIRT(IGProperty, writeStorageObjects)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *writeStorageObjects )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IGProperty, readStorageObjects)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *readStorageObjects )( 
            IGProperty * This);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowValue )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemValue )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowText )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemText )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowText )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemText )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowComboBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemComboBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowComboBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemComboBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowComboBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemComboBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowComboBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemComboBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowListBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemListBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowListBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemListBoxSelection )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowListBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemListBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowListBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemListBoxList )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowArrayValues )( 
            IGProperty * This,
            /* [in] */ SAFEARRAY * *hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemArrayValues )( 
            IGProperty * This,
            /* [in] */ SAFEARRAY * *hwndDialog,
            /* [in] */ SAFEARRAY * *idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowArrayValues )( 
            IGProperty * This,
            /* [in] */ SAFEARRAY * *hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemArrayValues )( 
            IGProperty * This,
            /* [in] */ SAFEARRAY * *hwndDialog,
            /* [in] */ SAFEARRAY * *idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowChecked )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemChecked )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowChecked )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, getWindowItemChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getWindowItemChecked )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowEnabled)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowEnabled )( 
            IGProperty * This,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperty, setWindowItemEnabled)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setWindowItemEnabled )( 
            IGProperty * This,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperty, assign)
        /* [hidden][id] */ HRESULT ( STDMETHODCALLTYPE *assign )( 
            IGProperty * This,
            void *anyData,
            long length);
        
        DECLSPEC_XFGVIRT(IGProperty, pointer)
        /* [id] */ void *( STDMETHODCALLTYPE *pointer )( 
            IGProperty * This);
        
        END_INTERFACE
    } IGPropertyVtbl;

    interface IGProperty
    {
        CONST_VTBL struct IGPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGProperty_put_value(This,newValue)	\
    ( (This)->lpVtbl -> put_value(This,newValue) ) 

#define IGProperty_get_value(This,theValue)	\
    ( (This)->lpVtbl -> get_value(This,theValue) ) 

#define IGProperty_put_name(This,bstrName)	\
    ( (This)->lpVtbl -> put_name(This,bstrName) ) 

#define IGProperty_get_name(This,bstrName)	\
    ( (This)->lpVtbl -> get_name(This,bstrName) ) 

#define IGProperty_put_type(This,type)	\
    ( (This)->lpVtbl -> put_type(This,type) ) 

#define IGProperty_get_type(This,pType)	\
    ( (This)->lpVtbl -> get_type(This,pType) ) 

#define IGProperty_put_size(This,size)	\
    ( (This)->lpVtbl -> put_size(This,size) ) 

#define IGProperty_get_size(This,size)	\
    ( (This)->lpVtbl -> get_size(This,size) ) 

#define IGProperty_put_isDirty(This,setDirtyState)	\
    ( (This)->lpVtbl -> put_isDirty(This,setDirtyState) ) 

#define IGProperty_get_isDirty(This,getDirtyState)	\
    ( (This)->lpVtbl -> get_isDirty(This,getDirtyState) ) 

#define IGProperty_get_everAssigned(This,getEverAssigned)	\
    ( (This)->lpVtbl -> get_everAssigned(This,getEverAssigned) ) 

#define IGProperty_put_ignoreSetAction(This,ignoreSetAction)	\
    ( (This)->lpVtbl -> put_ignoreSetAction(This,ignoreSetAction) ) 

#define IGProperty_get_ignoreSetAction(This,getIgnoreSetAction)	\
    ( (This)->lpVtbl -> get_ignoreSetAction(This,getIgnoreSetAction) ) 

#define IGProperty_put_debuggingEnabled(This,__MIDL__IGProperty0000)	\
    ( (This)->lpVtbl -> put_debuggingEnabled(This,__MIDL__IGProperty0000) ) 

#define IGProperty_get_debuggingEnabled(This,__MIDL__IGProperty0001)	\
    ( (This)->lpVtbl -> get_debuggingEnabled(This,__MIDL__IGProperty0001) ) 

#define IGProperty_get_binaryData(This,getAddress)	\
    ( (This)->lpVtbl -> get_binaryData(This,getAddress) ) 

#define IGProperty_get_compressedName(This,getCompressedName)	\
    ( (This)->lpVtbl -> get_compressedName(This,getCompressedName) ) 

#define IGProperty_put_encodedText(This,putEncodedText)	\
    ( (This)->lpVtbl -> put_encodedText(This,putEncodedText) ) 

#define IGProperty_get_encodedText(This,getEncodedText)	\
    ( (This)->lpVtbl -> get_encodedText(This,getEncodedText) ) 

#define IGProperty_get_variantType(This,__MIDL__IGProperty0002)	\
    ( (This)->lpVtbl -> get_variantType(This,__MIDL__IGProperty0002) ) 

#define IGProperty_put_longValue(This,__MIDL__IGProperty0003)	\
    ( (This)->lpVtbl -> put_longValue(This,__MIDL__IGProperty0003) ) 

#define IGProperty_get_longValue(This,__MIDL__IGProperty0004)	\
    ( (This)->lpVtbl -> get_longValue(This,__MIDL__IGProperty0004) ) 

#define IGProperty_put_doubleValue(This,__MIDL__IGProperty0005)	\
    ( (This)->lpVtbl -> put_doubleValue(This,__MIDL__IGProperty0005) ) 

#define IGProperty_get_doubleValue(This,__MIDL__IGProperty0006)	\
    ( (This)->lpVtbl -> get_doubleValue(This,__MIDL__IGProperty0006) ) 

#define IGProperty_put_binaryValue(This,cbSize,__MIDL__IGProperty0007)	\
    ( (This)->lpVtbl -> put_binaryValue(This,cbSize,__MIDL__IGProperty0007) ) 

#define IGProperty_get_binaryValue(This,cbSize,__MIDL__IGProperty0008)	\
    ( (This)->lpVtbl -> get_binaryValue(This,cbSize,__MIDL__IGProperty0008) ) 

#define IGProperty_put_szValue(This,pNewString)	\
    ( (This)->lpVtbl -> put_szValue(This,pNewString) ) 

#define IGProperty_get_szValue(This,pOutput)	\
    ( (This)->lpVtbl -> get_szValue(This,pOutput) ) 

#define IGProperty_put_stringValue(This,__MIDL__IGProperty0009)	\
    ( (This)->lpVtbl -> put_stringValue(This,__MIDL__IGProperty0009) ) 

#define IGProperty_get_stringValue(This,__MIDL__IGProperty0010)	\
    ( (This)->lpVtbl -> get_stringValue(This,__MIDL__IGProperty0010) ) 

#define IGProperty_put_arrayValue(This,variants)	\
    ( (This)->lpVtbl -> put_arrayValue(This,variants) ) 

#define IGProperty_get_arrayValue(This,variants)	\
    ( (This)->lpVtbl -> get_arrayValue(This,variants) ) 

#define IGProperty_put_boolValue(This,__MIDL__IGProperty0011)	\
    ( (This)->lpVtbl -> put_boolValue(This,__MIDL__IGProperty0011) ) 

#define IGProperty_get_boolValue(This,__MIDL__IGProperty0012)	\
    ( (This)->lpVtbl -> get_boolValue(This,__MIDL__IGProperty0012) ) 

#define IGProperty_put_variantValue(This,__MIDL__IGProperty0013)	\
    ( (This)->lpVtbl -> put_variantValue(This,__MIDL__IGProperty0013) ) 

#define IGProperty_get_variantValue(This,__MIDL__IGProperty0014)	\
    ( (This)->lpVtbl -> get_variantValue(This,__MIDL__IGProperty0014) ) 

#define IGProperty_put_arrayIndex(This,index)	\
    ( (This)->lpVtbl -> put_arrayIndex(This,index) ) 

#define IGProperty_get_arrayIndex(This,__MIDL__IGProperty0015)	\
    ( (This)->lpVtbl -> get_arrayIndex(This,__MIDL__IGProperty0015) ) 

#define IGProperty_put_arrayElement(This,index,elementValue)	\
    ( (This)->lpVtbl -> put_arrayElement(This,index,elementValue) ) 

#define IGProperty_get_arrayElement(This,index,elementValue)	\
    ( (This)->lpVtbl -> get_arrayElement(This,index,elementValue) ) 

#define IGProperty_get_arrayElementCount(This,countElements)	\
    ( (This)->lpVtbl -> get_arrayElementCount(This,countElements) ) 

#define IGProperty_clearArray(This)	\
    ( (This)->lpVtbl -> clearArray(This) ) 

#define IGProperty_directAccess(This,propertyType,directAccess,directAccessSize)	\
    ( (This)->lpVtbl -> directAccess(This,propertyType,directAccess,directAccessSize) ) 

#define IGProperty_copyTo(This,pTheDestination)	\
    ( (This)->lpVtbl -> copyTo(This,pTheDestination) ) 

#define IGProperty_addStorageObject(This,pObjectSupportingIPersistStorage)	\
    ( (This)->lpVtbl -> addStorageObject(This,pObjectSupportingIPersistStorage) ) 

#define IGProperty_removeStorageObject(This,pObjectSupportingIPersistStorage)	\
    ( (This)->lpVtbl -> removeStorageObject(This,pObjectSupportingIPersistStorage) ) 

#define IGProperty_clearStorageObjects(This)	\
    ( (This)->lpVtbl -> clearStorageObjects(This) ) 

#define IGProperty_get_storedObjectCount(This,cntObjects)	\
    ( (This)->lpVtbl -> get_storedObjectCount(This,cntObjects) ) 

#define IGProperty_writeStorageObjects(This)	\
    ( (This)->lpVtbl -> writeStorageObjects(This) ) 

#define IGProperty_readStorageObjects(This)	\
    ( (This)->lpVtbl -> readStorageObjects(This) ) 

#define IGProperty_getWindowValue(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowValue(This,hwndControl) ) 

#define IGProperty_getWindowItemValue(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemValue(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowText(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowText(This,hwndControl) ) 

#define IGProperty_getWindowItemText(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemText(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowText(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowText(This,hwndControl) ) 

#define IGProperty_setWindowItemText(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemText(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowComboBoxSelection(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowComboBoxSelection(This,hwndControl) ) 

#define IGProperty_setWindowItemComboBoxSelection(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemComboBoxSelection(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowComboBoxSelection(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowComboBoxSelection(This,hwndControl) ) 

#define IGProperty_getWindowItemComboBoxSelection(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemComboBoxSelection(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowComboBoxList(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowComboBoxList(This,hwndControl) ) 

#define IGProperty_setWindowItemComboBoxList(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemComboBoxList(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowComboBoxList(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowComboBoxList(This,hwndControl) ) 

#define IGProperty_getWindowItemComboBoxList(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemComboBoxList(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowListBoxSelection(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowListBoxSelection(This,hwndControl) ) 

#define IGProperty_setWindowItemListBoxSelection(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemListBoxSelection(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowListBoxSelection(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowListBoxSelection(This,hwndControl) ) 

#define IGProperty_getWindowItemListBoxSelection(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemListBoxSelection(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowListBoxList(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowListBoxList(This,hwndControl) ) 

#define IGProperty_setWindowItemListBoxList(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemListBoxList(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowListBoxList(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowListBoxList(This,hwndControl) ) 

#define IGProperty_getWindowItemListBoxList(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemListBoxList(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowArrayValues(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowArrayValues(This,hwndControl) ) 

#define IGProperty_getWindowItemArrayValues(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemArrayValues(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowArrayValues(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowArrayValues(This,hwndControl) ) 

#define IGProperty_setWindowItemArrayValues(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemArrayValues(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowChecked(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowChecked(This,hwndControl) ) 

#define IGProperty_setWindowItemChecked(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemChecked(This,hwndDialog,idControl) ) 

#define IGProperty_getWindowChecked(This,hwndControl)	\
    ( (This)->lpVtbl -> getWindowChecked(This,hwndControl) ) 

#define IGProperty_getWindowItemChecked(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> getWindowItemChecked(This,hwndDialog,idControl) ) 

#define IGProperty_setWindowEnabled(This,hwndControl)	\
    ( (This)->lpVtbl -> setWindowEnabled(This,hwndControl) ) 

#define IGProperty_setWindowItemEnabled(This,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> setWindowItemEnabled(This,hwndDialog,idControl) ) 

#define IGProperty_assign(This,anyData,length)	\
    ( (This)->lpVtbl -> assign(This,anyData,length) ) 

#define IGProperty_pointer(This)	\
    ( (This)->lpVtbl -> pointer(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGProperty_INTERFACE_DEFINED__ */


#ifndef __IGProperties_INTERFACE_DEFINED__
#define __IGProperties_INTERFACE_DEFINED__

/* interface IGProperties */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IGProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CAEFD8A-55E6-11d3-8365-006008BD5BC3")
    IGProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DebuggingEnabled( 
            /* [in] */ VARIANT_BOOL setEnabled) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DebuggingEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pGetEnabled) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileName( 
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *pfileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileAllowedExtensions( 
            /* [in] */ BSTR fileExtensions) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileAllowedExtensions( 
            /* [retval][out] */ BSTR *pfileExtensions) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileType( 
            /* [in] */ BSTR fileType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileType( 
            /* [retval][out] */ BSTR *pfileType) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileSaveOpenText( 
            /* [in] */ BSTR fileSaveOpenText) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileSaveOpenText( 
            /* [retval][out] */ BSTR *pfileSaveOpenText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE New( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [retval][out] */ BSTR *pTheFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadFile( 
            /* [retval][out] */ VARIANT_BOOL *wasSuccessful) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenFile( 
            /* [in] */ BSTR fileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveTo( 
            BSTR bstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [retval][out] */ BSTR *pTheFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR name,
            /* [defaultvalue][retval][out] */ IGProperty **ppIGProperty = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Include( 
            /* [in] */ IGProperty *pIGProperty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ BSTR propertyName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [in] */ BSTR propertyName,
            /* [retval][out] */ IGProperty **pIGProperty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *theCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *getSize) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IStorage( 
            /* [retval][out] */ IStorage **__MIDL__IGProperties0000) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IStream( 
            /* [retval][out] */ IStream **__MIDL__IGProperties0001) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Advise( 
            IGPropertiesClient *pIGPropertiesClient) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DirectAccess( 
            /* [in] */ BSTR propertyName,
            /* [in] */ enum PropertyType propertyType,
            /* [in] */ void *directAccess,
            /* [in] */ long directAccessSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetClassID( 
            /* [in] */ BYTE *ptrTo128BYTES) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyTo( 
            /* [in] */ IGProperties *pTheDestination) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropertyInterfaces( 
            /* [in] */ long *pCntInterfaces,
            /* [in] */ IGProperty ***pTheArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddObject( 
            /* [in] */ IUnknown *pObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveObject( 
            /* [in] */ IUnknown *pObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutHWNDPersistence( 
            /* [in] */ HWND hwndPersistence,
            /* [in] */ HWND hwndInit,
            /* [in] */ HWND hwndLoad,
            /* [in] */ HWND hwndSavePrep) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveHWNDPersistence( 
            /* [in] */ HWND hwndPersistence) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsDirty( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveObjectToFile( 
            IUnknown *pObject,
            BSTR fileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadObjectFromFile( 
            IUnknown *pObject,
            BSTR fileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdvisePropertyPageClient( 
            IGPropertyPageClient *pIGPropertyPageClient,
            /* [defaultvalue] */ boolean usePropertySheets = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPropertyPage( 
            IUnknown *pIUnknown_anotherObject,
            /* [defaultvalue] */ boolean usePropertySheets = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePropertyPage( 
            IUnknown *pIUnknown_anotherObject,
            /* [defaultvalue] */ boolean usePropertySheets = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PutHWNDPropertyPage( 
            /* [in] */ BSTR displayName,
            /* [in] */ HWND hwndPropertyPage,
            /* [in] */ HWND hwndStart,
            /* [in] */ HWND hwndOk,
            /* [in] */ HWND hwndApply,
            /* [in] */ HWND hwndCancel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveHWNDPropertyPage( 
            /* [in] */ HWND hwndPropertyPage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowProperties( 
            HWND windowHandleOwner,
            IUnknown *ObjectWithProperties) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EditProperties( 
            HWND windowHandleOwner,
            BSTR Text,
            /* [defaultvalue][in] */ IUnknown *ObjectWithProperties = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Push( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pop( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Discard( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Compare( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGProperties0002) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectPropertyNotifySink( 
            IPropertyNotifySink *pContainerPropertyNotifySink,
            DWORD *pdwCookie) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindConnectionPoint( 
            REFIID riid,
            IConnectionPoint **__MIDL__IGProperties0003) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_AllowSysMenu( 
            /* [in] */ boolean doAllow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowValue( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemValue( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowText( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemText( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowText( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemText( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowComboBoxSelection( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemComboBoxSelection( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowComboBoxSelection( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemComboBoxSelection( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowComboBoxList( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemComboBoxList( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowComboBoxList( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemComboBoxList( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowListBoxSelection( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemListBoxSelection( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowListBoxSelection( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemListBoxSelection( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowListBoxList( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemListBoxList( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowListBoxList( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemListBoxList( 
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowArrayValues( 
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemArrayValues( 
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl,
            /* [in] */ SAFEARRAY * *idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowArrayValues( 
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemArrayValues( 
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl,
            /* [in] */ SAFEARRAY * *idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowChecked( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemChecked( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowChecked( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowItemChecked( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowEnabled( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowItemEnabled( 
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWindowID( 
            /* [in] */ HWND hwnd,
            /* [retval][out] */ long *commandID) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FrameSize( 
            /* [in] */ SIZEL sizelFrame) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PageSize( 
            /* [in] */ SIZEL sizelFrame) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ResourcesModule( 
            /* [in] */ HMODULE hModuleResources) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGProperties * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGProperties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGProperties * This,
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
        
        DECLSPEC_XFGVIRT(IGProperties, put_DebuggingEnabled)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DebuggingEnabled )( 
            IGProperties * This,
            /* [in] */ VARIANT_BOOL setEnabled);
        
        DECLSPEC_XFGVIRT(IGProperties, get_DebuggingEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DebuggingEnabled )( 
            IGProperties * This,
            /* [retval][out] */ VARIANT_BOOL *pGetEnabled);
        
        DECLSPEC_XFGVIRT(IGProperties, put_FileName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileName )( 
            IGProperties * This,
            /* [in] */ BSTR fileName);
        
        DECLSPEC_XFGVIRT(IGProperties, get_FileName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pfileName);
        
        DECLSPEC_XFGVIRT(IGProperties, put_FileAllowedExtensions)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileAllowedExtensions )( 
            IGProperties * This,
            /* [in] */ BSTR fileExtensions);
        
        DECLSPEC_XFGVIRT(IGProperties, get_FileAllowedExtensions)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileAllowedExtensions )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pfileExtensions);
        
        DECLSPEC_XFGVIRT(IGProperties, put_FileType)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileType )( 
            IGProperties * This,
            /* [in] */ BSTR fileType);
        
        DECLSPEC_XFGVIRT(IGProperties, get_FileType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileType )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pfileType);
        
        DECLSPEC_XFGVIRT(IGProperties, put_FileSaveOpenText)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileSaveOpenText )( 
            IGProperties * This,
            /* [in] */ BSTR fileSaveOpenText);
        
        DECLSPEC_XFGVIRT(IGProperties, get_FileSaveOpenText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileSaveOpenText )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pfileSaveOpenText);
        
        DECLSPEC_XFGVIRT(IGProperties, New)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *New )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pTheFileName);
        
        DECLSPEC_XFGVIRT(IGProperties, LoadFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadFile )( 
            IGProperties * This,
            /* [retval][out] */ VARIANT_BOOL *wasSuccessful);
        
        DECLSPEC_XFGVIRT(IGProperties, OpenFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFile )( 
            IGProperties * This,
            /* [in] */ BSTR fileName);
        
        DECLSPEC_XFGVIRT(IGProperties, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, SaveTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveTo )( 
            IGProperties * This,
            BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IGProperties, SaveAs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IGProperties * This,
            /* [retval][out] */ BSTR *pTheFileName);
        
        DECLSPEC_XFGVIRT(IGProperties, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IGProperties * This,
            /* [in] */ BSTR name,
            /* [defaultvalue][retval][out] */ IGProperty **ppIGProperty);
        
        DECLSPEC_XFGVIRT(IGProperties, Include)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Include )( 
            IGProperties * This,
            /* [in] */ IGProperty *pIGProperty);
        
        DECLSPEC_XFGVIRT(IGProperties, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName);
        
        DECLSPEC_XFGVIRT(IGProperties, get_Property)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [retval][out] */ IGProperty **pIGProperty);
        
        DECLSPEC_XFGVIRT(IGProperties, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IGProperties * This,
            /* [retval][out] */ long *theCount);
        
        DECLSPEC_XFGVIRT(IGProperties, get_Size)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IGProperties * This,
            /* [retval][out] */ long *getSize);
        
        DECLSPEC_XFGVIRT(IGProperties, get_IStorage)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IStorage )( 
            IGProperties * This,
            /* [retval][out] */ IStorage **__MIDL__IGProperties0000);
        
        DECLSPEC_XFGVIRT(IGProperties, get_IStream)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IStream )( 
            IGProperties * This,
            /* [retval][out] */ IStream **__MIDL__IGProperties0001);
        
        DECLSPEC_XFGVIRT(IGProperties, Advise)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IGProperties * This,
            IGPropertiesClient *pIGPropertiesClient);
        
        DECLSPEC_XFGVIRT(IGProperties, DirectAccess)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DirectAccess )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ enum PropertyType propertyType,
            /* [in] */ void *directAccess,
            /* [in] */ long directAccessSize);
        
        DECLSPEC_XFGVIRT(IGProperties, SetClassID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetClassID )( 
            IGProperties * This,
            /* [in] */ BYTE *ptrTo128BYTES);
        
        DECLSPEC_XFGVIRT(IGProperties, CopyTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyTo )( 
            IGProperties * This,
            /* [in] */ IGProperties *pTheDestination);
        
        DECLSPEC_XFGVIRT(IGProperties, GetPropertyInterfaces)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyInterfaces )( 
            IGProperties * This,
            /* [in] */ long *pCntInterfaces,
            /* [in] */ IGProperty ***pTheArray);
        
        DECLSPEC_XFGVIRT(IGProperties, AddObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddObject )( 
            IGProperties * This,
            /* [in] */ IUnknown *pObject);
        
        DECLSPEC_XFGVIRT(IGProperties, RemoveObject)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveObject )( 
            IGProperties * This,
            /* [in] */ IUnknown *pObject);
        
        DECLSPEC_XFGVIRT(IGProperties, PutHWNDPersistence)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutHWNDPersistence )( 
            IGProperties * This,
            /* [in] */ HWND hwndPersistence,
            /* [in] */ HWND hwndInit,
            /* [in] */ HWND hwndLoad,
            /* [in] */ HWND hwndSavePrep);
        
        DECLSPEC_XFGVIRT(IGProperties, RemoveHWNDPersistence)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveHWNDPersistence )( 
            IGProperties * This,
            /* [in] */ HWND hwndPersistence);
        
        DECLSPEC_XFGVIRT(IGProperties, IsDirty)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsDirty )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, SaveObjectToFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveObjectToFile )( 
            IGProperties * This,
            IUnknown *pObject,
            BSTR fileName);
        
        DECLSPEC_XFGVIRT(IGProperties, LoadObjectFromFile)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LoadObjectFromFile )( 
            IGProperties * This,
            IUnknown *pObject,
            BSTR fileName);
        
        DECLSPEC_XFGVIRT(IGProperties, AdvisePropertyPageClient)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AdvisePropertyPageClient )( 
            IGProperties * This,
            IGPropertyPageClient *pIGPropertyPageClient,
            /* [defaultvalue] */ boolean usePropertySheets);
        
        DECLSPEC_XFGVIRT(IGProperties, AddPropertyPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPropertyPage )( 
            IGProperties * This,
            IUnknown *pIUnknown_anotherObject,
            /* [defaultvalue] */ boolean usePropertySheets);
        
        DECLSPEC_XFGVIRT(IGProperties, RemovePropertyPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemovePropertyPage )( 
            IGProperties * This,
            IUnknown *pIUnknown_anotherObject,
            /* [defaultvalue] */ boolean usePropertySheets);
        
        DECLSPEC_XFGVIRT(IGProperties, PutHWNDPropertyPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PutHWNDPropertyPage )( 
            IGProperties * This,
            /* [in] */ BSTR displayName,
            /* [in] */ HWND hwndPropertyPage,
            /* [in] */ HWND hwndStart,
            /* [in] */ HWND hwndOk,
            /* [in] */ HWND hwndApply,
            /* [in] */ HWND hwndCancel);
        
        DECLSPEC_XFGVIRT(IGProperties, RemoveHWNDPropertyPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveHWNDPropertyPage )( 
            IGProperties * This,
            /* [in] */ HWND hwndPropertyPage);
        
        DECLSPEC_XFGVIRT(IGProperties, ShowProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IGProperties * This,
            HWND windowHandleOwner,
            IUnknown *ObjectWithProperties);
        
        DECLSPEC_XFGVIRT(IGProperties, EditProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IGProperties * This,
            HWND windowHandleOwner,
            BSTR Text,
            /* [defaultvalue][in] */ IUnknown *ObjectWithProperties);
        
        DECLSPEC_XFGVIRT(IGProperties, Push)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Push )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, Pop)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pop )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, Discard)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Discard )( 
            IGProperties * This);
        
        DECLSPEC_XFGVIRT(IGProperties, Compare)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Compare )( 
            IGProperties * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGProperties0002);
        
        DECLSPEC_XFGVIRT(IGProperties, ConnectPropertyNotifySink)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectPropertyNotifySink )( 
            IGProperties * This,
            IPropertyNotifySink *pContainerPropertyNotifySink,
            DWORD *pdwCookie);
        
        DECLSPEC_XFGVIRT(IGProperties, FindConnectionPoint)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindConnectionPoint )( 
            IGProperties * This,
            REFIID riid,
            IConnectionPoint **__MIDL__IGProperties0003);
        
        DECLSPEC_XFGVIRT(IGProperties, put_AllowSysMenu)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSysMenu )( 
            IGProperties * This,
            /* [in] */ boolean doAllow);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowValue )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemValue )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowText )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemText )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowText )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemText)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemText )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowComboBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemComboBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowComboBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemComboBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemComboBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowComboBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemComboBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowComboBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemComboBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemComboBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowListBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemListBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowListBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemListBoxSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemListBoxSelection )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowListBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemListBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowListBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemListBoxList)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemListBoxList )( 
            IGProperties * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowArrayValues )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemArrayValues )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl,
            /* [in] */ SAFEARRAY * *idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowArrayValues )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemArrayValues)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemArrayValues )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ SAFEARRAY * *hwndControl,
            /* [in] */ SAFEARRAY * *idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowChecked )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemChecked )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowChecked )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowItemChecked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowItemChecked )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowEnabled)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowEnabled )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndControl);
        
        DECLSPEC_XFGVIRT(IGProperties, SetWindowItemEnabled)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowItemEnabled )( 
            IGProperties * This,
            /* [in] */ BSTR propertyName,
            /* [in] */ HWND hwndDialog,
            /* [in] */ long idControl);
        
        DECLSPEC_XFGVIRT(IGProperties, GetWindowID)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWindowID )( 
            IGProperties * This,
            /* [in] */ HWND hwnd,
            /* [retval][out] */ long *commandID);
        
        DECLSPEC_XFGVIRT(IGProperties, put_FrameSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FrameSize )( 
            IGProperties * This,
            /* [in] */ SIZEL sizelFrame);
        
        DECLSPEC_XFGVIRT(IGProperties, put_PageSize)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PageSize )( 
            IGProperties * This,
            /* [in] */ SIZEL sizelFrame);
        
        DECLSPEC_XFGVIRT(IGProperties, put_ResourcesModule)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ResourcesModule )( 
            IGProperties * This,
            /* [in] */ HMODULE hModuleResources);
        
        END_INTERFACE
    } IGPropertiesVtbl;

    interface IGProperties
    {
        CONST_VTBL struct IGPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGProperties_put_DebuggingEnabled(This,setEnabled)	\
    ( (This)->lpVtbl -> put_DebuggingEnabled(This,setEnabled) ) 

#define IGProperties_get_DebuggingEnabled(This,pGetEnabled)	\
    ( (This)->lpVtbl -> get_DebuggingEnabled(This,pGetEnabled) ) 

#define IGProperties_put_FileName(This,fileName)	\
    ( (This)->lpVtbl -> put_FileName(This,fileName) ) 

#define IGProperties_get_FileName(This,pfileName)	\
    ( (This)->lpVtbl -> get_FileName(This,pfileName) ) 

#define IGProperties_put_FileAllowedExtensions(This,fileExtensions)	\
    ( (This)->lpVtbl -> put_FileAllowedExtensions(This,fileExtensions) ) 

#define IGProperties_get_FileAllowedExtensions(This,pfileExtensions)	\
    ( (This)->lpVtbl -> get_FileAllowedExtensions(This,pfileExtensions) ) 

#define IGProperties_put_FileType(This,fileType)	\
    ( (This)->lpVtbl -> put_FileType(This,fileType) ) 

#define IGProperties_get_FileType(This,pfileType)	\
    ( (This)->lpVtbl -> get_FileType(This,pfileType) ) 

#define IGProperties_put_FileSaveOpenText(This,fileSaveOpenText)	\
    ( (This)->lpVtbl -> put_FileSaveOpenText(This,fileSaveOpenText) ) 

#define IGProperties_get_FileSaveOpenText(This,pfileSaveOpenText)	\
    ( (This)->lpVtbl -> get_FileSaveOpenText(This,pfileSaveOpenText) ) 

#define IGProperties_New(This)	\
    ( (This)->lpVtbl -> New(This) ) 

#define IGProperties_Open(This,pTheFileName)	\
    ( (This)->lpVtbl -> Open(This,pTheFileName) ) 

#define IGProperties_LoadFile(This,wasSuccessful)	\
    ( (This)->lpVtbl -> LoadFile(This,wasSuccessful) ) 

#define IGProperties_OpenFile(This,fileName)	\
    ( (This)->lpVtbl -> OpenFile(This,fileName) ) 

#define IGProperties_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IGProperties_SaveTo(This,bstrFileName)	\
    ( (This)->lpVtbl -> SaveTo(This,bstrFileName) ) 

#define IGProperties_SaveAs(This,pTheFileName)	\
    ( (This)->lpVtbl -> SaveAs(This,pTheFileName) ) 

#define IGProperties_Add(This,name,ppIGProperty)	\
    ( (This)->lpVtbl -> Add(This,name,ppIGProperty) ) 

#define IGProperties_Include(This,pIGProperty)	\
    ( (This)->lpVtbl -> Include(This,pIGProperty) ) 

#define IGProperties_Remove(This,propertyName)	\
    ( (This)->lpVtbl -> Remove(This,propertyName) ) 

#define IGProperties_get_Property(This,propertyName,pIGProperty)	\
    ( (This)->lpVtbl -> get_Property(This,propertyName,pIGProperty) ) 

#define IGProperties_get_Count(This,theCount)	\
    ( (This)->lpVtbl -> get_Count(This,theCount) ) 

#define IGProperties_get_Size(This,getSize)	\
    ( (This)->lpVtbl -> get_Size(This,getSize) ) 

#define IGProperties_get_IStorage(This,__MIDL__IGProperties0000)	\
    ( (This)->lpVtbl -> get_IStorage(This,__MIDL__IGProperties0000) ) 

#define IGProperties_get_IStream(This,__MIDL__IGProperties0001)	\
    ( (This)->lpVtbl -> get_IStream(This,__MIDL__IGProperties0001) ) 

#define IGProperties_Advise(This,pIGPropertiesClient)	\
    ( (This)->lpVtbl -> Advise(This,pIGPropertiesClient) ) 

#define IGProperties_DirectAccess(This,propertyName,propertyType,directAccess,directAccessSize)	\
    ( (This)->lpVtbl -> DirectAccess(This,propertyName,propertyType,directAccess,directAccessSize) ) 

#define IGProperties_SetClassID(This,ptrTo128BYTES)	\
    ( (This)->lpVtbl -> SetClassID(This,ptrTo128BYTES) ) 

#define IGProperties_CopyTo(This,pTheDestination)	\
    ( (This)->lpVtbl -> CopyTo(This,pTheDestination) ) 

#define IGProperties_GetPropertyInterfaces(This,pCntInterfaces,pTheArray)	\
    ( (This)->lpVtbl -> GetPropertyInterfaces(This,pCntInterfaces,pTheArray) ) 

#define IGProperties_AddObject(This,pObject)	\
    ( (This)->lpVtbl -> AddObject(This,pObject) ) 

#define IGProperties_RemoveObject(This,pObject)	\
    ( (This)->lpVtbl -> RemoveObject(This,pObject) ) 

#define IGProperties_PutHWNDPersistence(This,hwndPersistence,hwndInit,hwndLoad,hwndSavePrep)	\
    ( (This)->lpVtbl -> PutHWNDPersistence(This,hwndPersistence,hwndInit,hwndLoad,hwndSavePrep) ) 

#define IGProperties_RemoveHWNDPersistence(This,hwndPersistence)	\
    ( (This)->lpVtbl -> RemoveHWNDPersistence(This,hwndPersistence) ) 

#define IGProperties_IsDirty(This)	\
    ( (This)->lpVtbl -> IsDirty(This) ) 

#define IGProperties_SaveObjectToFile(This,pObject,fileName)	\
    ( (This)->lpVtbl -> SaveObjectToFile(This,pObject,fileName) ) 

#define IGProperties_LoadObjectFromFile(This,pObject,fileName)	\
    ( (This)->lpVtbl -> LoadObjectFromFile(This,pObject,fileName) ) 

#define IGProperties_AdvisePropertyPageClient(This,pIGPropertyPageClient,usePropertySheets)	\
    ( (This)->lpVtbl -> AdvisePropertyPageClient(This,pIGPropertyPageClient,usePropertySheets) ) 

#define IGProperties_AddPropertyPage(This,pIUnknown_anotherObject,usePropertySheets)	\
    ( (This)->lpVtbl -> AddPropertyPage(This,pIUnknown_anotherObject,usePropertySheets) ) 

#define IGProperties_RemovePropertyPage(This,pIUnknown_anotherObject,usePropertySheets)	\
    ( (This)->lpVtbl -> RemovePropertyPage(This,pIUnknown_anotherObject,usePropertySheets) ) 

#define IGProperties_PutHWNDPropertyPage(This,displayName,hwndPropertyPage,hwndStart,hwndOk,hwndApply,hwndCancel)	\
    ( (This)->lpVtbl -> PutHWNDPropertyPage(This,displayName,hwndPropertyPage,hwndStart,hwndOk,hwndApply,hwndCancel) ) 

#define IGProperties_RemoveHWNDPropertyPage(This,hwndPropertyPage)	\
    ( (This)->lpVtbl -> RemoveHWNDPropertyPage(This,hwndPropertyPage) ) 

#define IGProperties_ShowProperties(This,windowHandleOwner,ObjectWithProperties)	\
    ( (This)->lpVtbl -> ShowProperties(This,windowHandleOwner,ObjectWithProperties) ) 

#define IGProperties_EditProperties(This,windowHandleOwner,Text,ObjectWithProperties)	\
    ( (This)->lpVtbl -> EditProperties(This,windowHandleOwner,Text,ObjectWithProperties) ) 

#define IGProperties_Push(This)	\
    ( (This)->lpVtbl -> Push(This) ) 

#define IGProperties_Pop(This)	\
    ( (This)->lpVtbl -> Pop(This) ) 

#define IGProperties_Discard(This)	\
    ( (This)->lpVtbl -> Discard(This) ) 

#define IGProperties_Compare(This,__MIDL__IGProperties0002)	\
    ( (This)->lpVtbl -> Compare(This,__MIDL__IGProperties0002) ) 

#define IGProperties_ConnectPropertyNotifySink(This,pContainerPropertyNotifySink,pdwCookie)	\
    ( (This)->lpVtbl -> ConnectPropertyNotifySink(This,pContainerPropertyNotifySink,pdwCookie) ) 

#define IGProperties_FindConnectionPoint(This,riid,__MIDL__IGProperties0003)	\
    ( (This)->lpVtbl -> FindConnectionPoint(This,riid,__MIDL__IGProperties0003) ) 

#define IGProperties_put_AllowSysMenu(This,doAllow)	\
    ( (This)->lpVtbl -> put_AllowSysMenu(This,doAllow) ) 

#define IGProperties_GetWindowValue(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowValue(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemValue(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemValue(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_GetWindowText(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowText(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemText(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemText(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_SetWindowText(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowText(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemText(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemText(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_SetWindowComboBoxSelection(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowComboBoxSelection(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemComboBoxSelection(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemComboBoxSelection(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_GetWindowComboBoxSelection(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowComboBoxSelection(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemComboBoxSelection(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemComboBoxSelection(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_SetWindowComboBoxList(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowComboBoxList(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemComboBoxList(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemComboBoxList(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_GetWindowComboBoxList(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowComboBoxList(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemComboBoxList(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemComboBoxList(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_SetWindowListBoxSelection(This,propertyname,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowListBoxSelection(This,propertyname,hwndControl) ) 

#define IGProperties_SetWindowItemListBoxSelection(This,propertyname,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemListBoxSelection(This,propertyname,hwndDialog,idControl) ) 

#define IGProperties_GetWindowListBoxSelection(This,propertyname,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowListBoxSelection(This,propertyname,hwndControl) ) 

#define IGProperties_GetWindowItemListBoxSelection(This,propertyname,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemListBoxSelection(This,propertyname,hwndDialog,idControl) ) 

#define IGProperties_SetWindowListBoxList(This,propertyname,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowListBoxList(This,propertyname,hwndControl) ) 

#define IGProperties_SetWindowItemListBoxList(This,propertyname,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemListBoxList(This,propertyname,hwndDialog,idControl) ) 

#define IGProperties_GetWindowListBoxList(This,propertyname,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowListBoxList(This,propertyname,hwndControl) ) 

#define IGProperties_GetWindowItemListBoxList(This,propertyname,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemListBoxList(This,propertyname,hwndDialog,idControl) ) 

#define IGProperties_GetWindowArrayValues(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowArrayValues(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemArrayValues(This,propertyName,hwndControl,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemArrayValues(This,propertyName,hwndControl,idControl) ) 

#define IGProperties_SetWindowArrayValues(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowArrayValues(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemArrayValues(This,propertyName,hwndControl,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemArrayValues(This,propertyName,hwndControl,idControl) ) 

#define IGProperties_SetWindowChecked(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowChecked(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemChecked(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemChecked(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_GetWindowChecked(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> GetWindowChecked(This,propertyName,hwndControl) ) 

#define IGProperties_GetWindowItemChecked(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> GetWindowItemChecked(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_SetWindowEnabled(This,propertyName,hwndControl)	\
    ( (This)->lpVtbl -> SetWindowEnabled(This,propertyName,hwndControl) ) 

#define IGProperties_SetWindowItemEnabled(This,propertyName,hwndDialog,idControl)	\
    ( (This)->lpVtbl -> SetWindowItemEnabled(This,propertyName,hwndDialog,idControl) ) 

#define IGProperties_GetWindowID(This,hwnd,commandID)	\
    ( (This)->lpVtbl -> GetWindowID(This,hwnd,commandID) ) 

#define IGProperties_put_FrameSize(This,sizelFrame)	\
    ( (This)->lpVtbl -> put_FrameSize(This,sizelFrame) ) 

#define IGProperties_put_PageSize(This,sizelFrame)	\
    ( (This)->lpVtbl -> put_PageSize(This,sizelFrame) ) 

#define IGProperties_put_ResourcesModule(This,hModuleResources)	\
    ( (This)->lpVtbl -> put_ResourcesModule(This,hModuleResources) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGProperties_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_InnoVisioNateProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("9CAEFD8C-55E7-11d3-8365-006008BD5BC3")
InnoVisioNateProperty;
#endif

EXTERN_C const CLSID CLSID_InnoVisioNateProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("9CAEFD89-55E7-11d3-8365-006008BD5BC3")
InnoVisioNateProperties;
#endif
#endif /* __InnoVisioNateProperties_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


