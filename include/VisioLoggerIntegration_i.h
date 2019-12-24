

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for VisioLoggerIntegration.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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


#ifndef __VisioLoggerIntegration_i_h__
#define __VisioLoggerIntegration_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVisioLoggerServices_FWD_DEFINED__
#define __IVisioLoggerServices_FWD_DEFINED__
typedef interface IVisioLoggerServices IVisioLoggerServices;

#endif 	/* __IVisioLoggerServices_FWD_DEFINED__ */


#ifndef __IVisioLoggerStartupObject_FWD_DEFINED__
#define __IVisioLoggerStartupObject_FWD_DEFINED__
typedef interface IVisioLoggerStartupObject IVisioLoggerStartupObject;

#endif 	/* __IVisioLoggerStartupObject_FWD_DEFINED__ */


#ifndef __IVisioLoggerNewRow_FWD_DEFINED__
#define __IVisioLoggerNewRow_FWD_DEFINED__
typedef interface IVisioLoggerNewRow IVisioLoggerNewRow;

#endif 	/* __IVisioLoggerNewRow_FWD_DEFINED__ */


#ifndef __IVisioLoggerFieldSubmitted_FWD_DEFINED__
#define __IVisioLoggerFieldSubmitted_FWD_DEFINED__
typedef interface IVisioLoggerFieldSubmitted IVisioLoggerFieldSubmitted;

#endif 	/* __IVisioLoggerFieldSubmitted_FWD_DEFINED__ */


#ifndef __IVisioLoggerPageSubmitted_FWD_DEFINED__
#define __IVisioLoggerPageSubmitted_FWD_DEFINED__
typedef interface IVisioLoggerPageSubmitted IVisioLoggerPageSubmitted;

#endif 	/* __IVisioLoggerPageSubmitted_FWD_DEFINED__ */


#ifndef __IVisioLoggerRowChanged_FWD_DEFINED__
#define __IVisioLoggerRowChanged_FWD_DEFINED__
typedef interface IVisioLoggerRowChanged IVisioLoggerRowChanged;

#endif 	/* __IVisioLoggerRowChanged_FWD_DEFINED__ */


#ifndef __IVisioLoggerPreSignature_FWD_DEFINED__
#define __IVisioLoggerPreSignature_FWD_DEFINED__
typedef interface IVisioLoggerPreSignature IVisioLoggerPreSignature;

#endif 	/* __IVisioLoggerPreSignature_FWD_DEFINED__ */


#ifndef __IVisioLoggerAction_FWD_DEFINED__
#define __IVisioLoggerAction_FWD_DEFINED__
typedef interface IVisioLoggerAction IVisioLoggerAction;

#endif 	/* __IVisioLoggerAction_FWD_DEFINED__ */


#ifndef __IVisioLoggerExternalObject_FWD_DEFINED__
#define __IVisioLoggerExternalObject_FWD_DEFINED__
typedef interface IVisioLoggerExternalObject IVisioLoggerExternalObject;

#endif 	/* __IVisioLoggerExternalObject_FWD_DEFINED__ */


#ifndef __IVisioLoggerIntegration_FWD_DEFINED__
#define __IVisioLoggerIntegration_FWD_DEFINED__
typedef interface IVisioLoggerIntegration IVisioLoggerIntegration;

#endif 	/* __IVisioLoggerIntegration_FWD_DEFINED__ */


#ifndef __VisioLoggerIntegration_FWD_DEFINED__
#define __VisioLoggerIntegration_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerIntegration VisioLoggerIntegration;
#else
typedef struct VisioLoggerIntegration VisioLoggerIntegration;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerIntegration_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"
#include "dispex.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VisioLoggerIntegration_LIBRARY_DEFINED__
#define __VisioLoggerIntegration_LIBRARY_DEFINED__

/* library VisioLoggerIntegration */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_VisioLoggerIntegration;

#ifndef __IVisioLoggerServices_INTERFACE_DEFINED__
#define __IVisioLoggerServices_INTERFACE_DEFINED__

/* interface IVisioLoggerServices */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A64AB7AF-8A26-4f07-8877-56FE99570336")
    IVisioLoggerServices : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundBitmapHandle( 
            /* [retval][out] */ HBITMAP *hBitmap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerServices * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerServices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerServices * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundBitmapHandle )( 
            IVisioLoggerServices * This,
            /* [retval][out] */ HBITMAP *hBitmap);
        
        END_INTERFACE
    } IVisioLoggerServicesVtbl;

    interface IVisioLoggerServices
    {
        CONST_VTBL struct IVisioLoggerServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerServices_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerServices_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerServices_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerServices_get_BackgroundBitmapHandle(This,hBitmap)	\
    ( (This)->lpVtbl -> get_BackgroundBitmapHandle(This,hBitmap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerServices_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerStartupObject_INTERFACE_DEFINED__
#define __IVisioLoggerStartupObject_INTERFACE_DEFINED__

/* interface IVisioLoggerStartupObject */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerStartupObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83F2")
    IVisioLoggerStartupObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR databaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerStartupObject0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerStartupObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerStartupObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerStartupObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerStartupObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerStartupObject * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerStartupObject * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR databaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerStartupObject * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerStartupObject0000);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerStartupObject * This,
            OLE_HANDLE hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVisioLoggerStartupObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IVisioLoggerStartupObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IVisioLoggerStartupObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IVisioLoggerStartupObject * This);
        
        END_INTERFACE
    } IVisioLoggerStartupObjectVtbl;

    interface IVisioLoggerStartupObject
    {
        CONST_VTBL struct IVisioLoggerStartupObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerStartupObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerStartupObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerStartupObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerStartupObject_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerStartupObject_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,databaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,databaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerStartupObject_get_StatusNotification(This,__MIDL__IVisioLoggerStartupObject0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerStartupObject0000) ) 

#define IVisioLoggerStartupObject_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#define IVisioLoggerStartupObject_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IVisioLoggerStartupObject_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define IVisioLoggerStartupObject_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IVisioLoggerStartupObject_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerStartupObject_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerNewRow_INTERFACE_DEFINED__
#define __IVisioLoggerNewRow_INTERFACE_DEFINED__

/* interface IVisioLoggerNewRow */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerNewRow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83E9")
    IVisioLoggerNewRow : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR databaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Handle( 
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrSwitchProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerNewRow0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerNewRowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerNewRow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerNewRow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerNewRow * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerNewRow * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerNewRow * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR databaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *Handle )( 
            IVisioLoggerNewRow * This,
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrSwitchProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerNewRow * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerNewRow0000);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerNewRow * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerNewRowVtbl;

    interface IVisioLoggerNewRow
    {
        CONST_VTBL struct IVisioLoggerNewRowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerNewRow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerNewRow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerNewRow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerNewRow_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerNewRow_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,databaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,databaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerNewRow_Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrSwitchProcessName,retainValues)	\
    ( (This)->lpVtbl -> Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrSwitchProcessName,retainValues) ) 

#define IVisioLoggerNewRow_get_StatusNotification(This,__MIDL__IVisioLoggerNewRow0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerNewRow0000) ) 

#define IVisioLoggerNewRow_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerNewRow_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerFieldSubmitted_INTERFACE_DEFINED__
#define __IVisioLoggerFieldSubmitted_INTERFACE_DEFINED__

/* interface IVisioLoggerFieldSubmitted */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerFieldSubmitted;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83F3")
    IVisioLoggerFieldSubmitted : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FieldSubmitted( 
            OLE_HANDLE hwndParent,
            BSTR theFieldName,
            SAFEARRAY * currentFieldNames,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *processName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerFieldSubmitted0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ValidationSuccess( 
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerFieldSubmitted0001) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerFieldSubmittedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerFieldSubmitted * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerFieldSubmitted * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerFieldSubmitted * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerFieldSubmitted * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerFieldSubmitted * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *FieldSubmitted )( 
            IVisioLoggerFieldSubmitted * This,
            OLE_HANDLE hwndParent,
            BSTR theFieldName,
            SAFEARRAY * currentFieldNames,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *processName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerFieldSubmitted * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerFieldSubmitted0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidationSuccess )( 
            IVisioLoggerFieldSubmitted * This,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerFieldSubmitted0001);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerFieldSubmitted * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerFieldSubmittedVtbl;

    interface IVisioLoggerFieldSubmitted
    {
        CONST_VTBL struct IVisioLoggerFieldSubmittedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerFieldSubmitted_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerFieldSubmitted_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerFieldSubmitted_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerFieldSubmitted_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerFieldSubmitted_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerFieldSubmitted_FieldSubmitted(This,hwndParent,theFieldName,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,processName,retainValues)	\
    ( (This)->lpVtbl -> FieldSubmitted(This,hwndParent,theFieldName,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,processName,retainValues) ) 

#define IVisioLoggerFieldSubmitted_get_StatusNotification(This,__MIDL__IVisioLoggerFieldSubmitted0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerFieldSubmitted0000) ) 

#define IVisioLoggerFieldSubmitted_get_ValidationSuccess(This,__MIDL__IVisioLoggerFieldSubmitted0001)	\
    ( (This)->lpVtbl -> get_ValidationSuccess(This,__MIDL__IVisioLoggerFieldSubmitted0001) ) 

#define IVisioLoggerFieldSubmitted_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerFieldSubmitted_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerPageSubmitted_INTERFACE_DEFINED__
#define __IVisioLoggerPageSubmitted_INTERFACE_DEFINED__

/* interface IVisioLoggerPageSubmitted */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerPageSubmitted;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83EF")
    IVisioLoggerPageSubmitted : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageSubmitted( 
            OLE_HANDLE hwndParent,
            SAFEARRAY * currentFieldNames,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *processName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerPageSubmitted0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ValidationSuccess( 
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerPageSubmitted0001) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerPageSubmittedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerPageSubmitted * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerPageSubmitted * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerPageSubmitted * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerPageSubmitted * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerPageSubmitted * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *PageSubmitted )( 
            IVisioLoggerPageSubmitted * This,
            OLE_HANDLE hwndParent,
            SAFEARRAY * currentFieldNames,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *processName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerPageSubmitted * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerPageSubmitted0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValidationSuccess )( 
            IVisioLoggerPageSubmitted * This,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerPageSubmitted0001);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerPageSubmitted * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerPageSubmittedVtbl;

    interface IVisioLoggerPageSubmitted
    {
        CONST_VTBL struct IVisioLoggerPageSubmittedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerPageSubmitted_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerPageSubmitted_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerPageSubmitted_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerPageSubmitted_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerPageSubmitted_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerPageSubmitted_PageSubmitted(This,hwndParent,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,processName,retainValues)	\
    ( (This)->lpVtbl -> PageSubmitted(This,hwndParent,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,processName,retainValues) ) 

#define IVisioLoggerPageSubmitted_get_StatusNotification(This,__MIDL__IVisioLoggerPageSubmitted0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerPageSubmitted0000) ) 

#define IVisioLoggerPageSubmitted_get_ValidationSuccess(This,__MIDL__IVisioLoggerPageSubmitted0001)	\
    ( (This)->lpVtbl -> get_ValidationSuccess(This,__MIDL__IVisioLoggerPageSubmitted0001) ) 

#define IVisioLoggerPageSubmitted_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerPageSubmitted_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerRowChanged_INTERFACE_DEFINED__
#define __IVisioLoggerRowChanged_INTERFACE_DEFINED__

/* interface IVisioLoggerRowChanged */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerRowChanged;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83ED")
    IVisioLoggerRowChanged : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Handle( 
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerRowChanged0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerRowChangedVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerRowChanged * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerRowChanged * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerRowChanged * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerRowChanged * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerRowChanged * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *Handle )( 
            IVisioLoggerRowChanged * This,
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerRowChanged * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerRowChanged0000);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerRowChanged * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerRowChangedVtbl;

    interface IVisioLoggerRowChanged
    {
        CONST_VTBL struct IVisioLoggerRowChangedVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerRowChanged_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerRowChanged_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerRowChanged_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerRowChanged_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerRowChanged_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerRowChanged_Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerRowChanged_get_StatusNotification(This,__MIDL__IVisioLoggerRowChanged0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerRowChanged0000) ) 

#define IVisioLoggerRowChanged_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerRowChanged_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerPreSignature_INTERFACE_DEFINED__
#define __IVisioLoggerPreSignature_INTERFACE_DEFINED__

/* interface IVisioLoggerPreSignature */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerPreSignature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83EC")
    IVisioLoggerPreSignature : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Handle( 
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerPreSignature0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerPreSignatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerPreSignature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerPreSignature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerPreSignature * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerPreSignature * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerPreSignature * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *Handle )( 
            IVisioLoggerPreSignature * This,
            OLE_HANDLE hwndParent,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerPreSignature * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerPreSignature0000);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerPreSignature * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerPreSignatureVtbl;

    interface IVisioLoggerPreSignature
    {
        CONST_VTBL struct IVisioLoggerPreSignatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerPreSignature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerPreSignature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerPreSignature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerPreSignature_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerPreSignature_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerPreSignature_Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> Handle(This,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerPreSignature_get_StatusNotification(This,__MIDL__IVisioLoggerPreSignature0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerPreSignature0000) ) 

#define IVisioLoggerPreSignature_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerPreSignature_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerAction_INTERFACE_DEFINED__
#define __IVisioLoggerAction_INTERFACE_DEFINED__

/* interface IVisioLoggerAction */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerAction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83EE")
    IVisioLoggerAction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActionPerformed( 
            OLE_HANDLE hwndParent,
            BSTR actionFieldName,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerAction0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActionFieldName( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerAction0001) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerActionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerAction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerAction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerAction * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerAction * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerAction * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *ActionPerformed )( 
            IVisioLoggerAction * This,
            OLE_HANDLE hwndParent,
            BSTR actionFieldName,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerAction * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerAction0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionFieldName )( 
            IVisioLoggerAction * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerAction0001);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerAction * This,
            OLE_HANDLE hwndParent);
        
        END_INTERFACE
    } IVisioLoggerActionVtbl;

    interface IVisioLoggerAction
    {
        CONST_VTBL struct IVisioLoggerActionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerAction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerAction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerAction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerAction_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerAction_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerAction_ActionPerformed(This,hwndParent,actionFieldName,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> ActionPerformed(This,hwndParent,actionFieldName,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerAction_get_StatusNotification(This,__MIDL__IVisioLoggerAction0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerAction0000) ) 

#define IVisioLoggerAction_get_ActionFieldName(This,__MIDL__IVisioLoggerAction0001)	\
    ( (This)->lpVtbl -> get_ActionFieldName(This,__MIDL__IVisioLoggerAction0001) ) 

#define IVisioLoggerAction_Properties(This,hwndParent)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerAction_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerExternalObject_INTERFACE_DEFINED__
#define __IVisioLoggerExternalObject_INTERFACE_DEFINED__

/* interface IVisioLoggerExternalObject */
/* [object][helpstring][unique][nonextensible][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerExternalObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83F1")
    IVisioLoggerExternalObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TakeFields( 
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeDatabaseInfo( 
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StatusNotification( 
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerExternalObject0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseVisioLoggerServices( 
            IVisioLoggerServices *pServices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Properties( 
            OLE_HANDLE hwndParent,
            BSTR instanceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Hide( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( 
            OLE_HANDLE hwndHost,
            BSTR instanceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( 
            BSTR instanceIdentifier) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerExternalObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerExternalObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerExternalObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerExternalObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFields )( 
            IVisioLoggerExternalObject * This,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeDatabaseInfo )( 
            IVisioLoggerExternalObject * This,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StatusNotification )( 
            IVisioLoggerExternalObject * This,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerExternalObject0000);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseVisioLoggerServices )( 
            IVisioLoggerExternalObject * This,
            IVisioLoggerServices *pServices);
        
        HRESULT ( STDMETHODCALLTYPE *Properties )( 
            IVisioLoggerExternalObject * This,
            OLE_HANDLE hwndParent,
            BSTR instanceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IVisioLoggerExternalObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Hide )( 
            IVisioLoggerExternalObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVisioLoggerExternalObject * This,
            OLE_HANDLE hwndHost,
            BSTR instanceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVisioLoggerExternalObject * This,
            BSTR instanceIdentifier);
        
        END_INTERFACE
    } IVisioLoggerExternalObjectVtbl;

    interface IVisioLoggerExternalObject
    {
        CONST_VTBL struct IVisioLoggerExternalObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerExternalObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerExternalObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerExternalObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerExternalObject_TakeFields(This,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFields(This,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerExternalObject_TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeDatabaseInfo(This,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerExternalObject_get_StatusNotification(This,__MIDL__IVisioLoggerExternalObject0000)	\
    ( (This)->lpVtbl -> get_StatusNotification(This,__MIDL__IVisioLoggerExternalObject0000) ) 

#define IVisioLoggerExternalObject_AdviseVisioLoggerServices(This,pServices)	\
    ( (This)->lpVtbl -> AdviseVisioLoggerServices(This,pServices) ) 

#define IVisioLoggerExternalObject_Properties(This,hwndParent,instanceIdentifier)	\
    ( (This)->lpVtbl -> Properties(This,hwndParent,instanceIdentifier) ) 

#define IVisioLoggerExternalObject_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define IVisioLoggerExternalObject_Hide(This)	\
    ( (This)->lpVtbl -> Hide(This) ) 

#define IVisioLoggerExternalObject_Start(This,hwndHost,instanceIdentifier)	\
    ( (This)->lpVtbl -> Start(This,hwndHost,instanceIdentifier) ) 

#define IVisioLoggerExternalObject_Stop(This,instanceIdentifier)	\
    ( (This)->lpVtbl -> Stop(This,instanceIdentifier) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerExternalObject_INTERFACE_DEFINED__ */


#ifndef __IVisioLoggerIntegration_INTERFACE_DEFINED__
#define __IVisioLoggerIntegration_INTERFACE_DEFINED__

/* interface IVisioLoggerIntegration */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVisioLoggerIntegration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C8648D0-B406-4555-95ED-4F78568D83EA")
    IVisioLoggerIntegration : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InstantiateObject( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseObject( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeStartupObjectFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeNewRowFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeFieldSubmittedFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakePageSubmittedFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeRowChangedFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakePreSignatureFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeActionFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeExternalObjectFields( 
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeStartupObjectDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeNewRowDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeFieldSubmittedDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakePageSubmittedDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeRowChangedDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakePreSignatureDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeActionDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TakeExternalObjectDatabaseInfo( 
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleNewRow( 
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrSwitchProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleFieldSubmitted( 
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ BSTR theField,
            /* [in] */ SAFEARRAY * currentFieldNames,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandlePageSubmitted( 
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * currentFieldNames,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleRowChanged( 
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandlePreSignature( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleAction( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            BSTR actionFieldName,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredStartupProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0000) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredStartupProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0001) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredNewRowProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0002) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredNewRowProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0003) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredFieldSubmittedProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0004) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredFieldSubmittedProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0005) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredPageSubmittedProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0006) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredPageSubmittedProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0007) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredRowChangedProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0008) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredRowChangedProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0009) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredPreSignatureProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0010) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredPreSignatureProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0011) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredActionProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0012) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredActionProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0013) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredExternalObjectProviders( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0014) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredExternalObjectProviderGUIDs( 
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0015) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartupObjectStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0016) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NewRowStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0017) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FieldSubmittedStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0018) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FieldSubmittedValidationSuccess( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerIntegration0019) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PageSubmittedStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0020) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PageSubmittedValidationSuccess( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerIntegration0021) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RowChangedStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0022) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreSignatureStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0023) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActionStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0024) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExternalObjectStatusNotification( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0025) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartupObjectProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NewRowProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FieldSubmittedProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PageSubmittedProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RowChangedProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreSignatureProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActionProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectProperties( 
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ BSTR instanceIdentifier) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActionFieldName( 
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0026) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectShow( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectHide( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectAdviseVisioLoggerServices( 
            BSTR objectGUID,
            IVisioLoggerServices *pIVisioLoggerServices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectStart( 
            BSTR objectGUID,
            ULONG hwndHost,
            BSTR instanceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExternalObjectStop( 
            BSTR objectGUID,
            BSTR instanceIdentifier) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartupObjectStart( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartupObjectPause( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartupObjectResume( 
            BSTR objectGUID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartupObjectShutdown( 
            BSTR objectGUID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisioLoggerIntegrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVisioLoggerIntegration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVisioLoggerIntegration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVisioLoggerIntegration * This);
        
        HRESULT ( STDMETHODCALLTYPE *InstantiateObject )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseObject )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *TakeStartupObjectFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeNewRowFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFieldSubmittedFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakePageSubmittedFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeRowChangedFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakePreSignatureFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeActionFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeExternalObjectFields )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            SAFEARRAY * fieldNames,
            SAFEARRAY * imageFieldNames,
            SAFEARRAY * documentFieldNames);
        
        HRESULT ( STDMETHODCALLTYPE *TakeStartupObjectDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakeNewRowDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakeFieldSubmittedDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakePageSubmittedDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakeRowChangedDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakePreSignatureDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakeActionDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *TakeExternalObjectDatabaseInfo )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            long pIDbConnectionUnknown,
            BSTR serverName,
            BSTR dabaseName,
            VARIANT_BOOL useWindowsLogon,
            BSTR userName,
            BSTR password,
            BSTR dbProviderName,
            BSTR otherConnectionParameters,
            BSTR processName,
            long processId);
        
        HRESULT ( STDMETHODCALLTYPE *HandleNewRow )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrSwitchProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        HRESULT ( STDMETHODCALLTYPE *HandleFieldSubmitted )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ BSTR theField,
            /* [in] */ SAFEARRAY * currentFieldNames,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        HRESULT ( STDMETHODCALLTYPE *HandlePageSubmitted )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * currentFieldNames,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged,
            /* [out][in] */ BSTR *pBstrProcessName,
            /* [out][in] */ VARIANT_BOOL *retainValues);
        
        HRESULT ( STDMETHODCALLTYPE *HandleRowChanged )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        HRESULT ( STDMETHODCALLTYPE *HandlePreSignature )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        HRESULT ( STDMETHODCALLTYPE *HandleAction )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            BSTR actionFieldName,
            /* [in] */ SAFEARRAY * fieldNames,
            /* [in] */ SAFEARRAY * imageFieldNames,
            /* [in] */ SAFEARRAY * documentFieldNames,
            /* [out][in] */ SAFEARRAY * fieldValues,
            /* [out][in] */ SAFEARRAY * imageHandles,
            /* [out][in] */ SAFEARRAY * documentValues,
            /* [out][in] */ SAFEARRAY * valuesChanged,
            /* [out][in] */ SAFEARRAY * imagesChanged,
            /* [out][in] */ SAFEARRAY * documentsChanged);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredStartupProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0000);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredStartupProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0001);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredNewRowProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0002);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredNewRowProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0003);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredFieldSubmittedProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0004);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredFieldSubmittedProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0005);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredPageSubmittedProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0006);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredPageSubmittedProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0007);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredRowChangedProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0008);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredRowChangedProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0009);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredPreSignatureProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0010);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredPreSignatureProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0011);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredActionProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0012);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredActionProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0013);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredExternalObjectProviders )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0014);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredExternalObjectProviderGUIDs )( 
            IVisioLoggerIntegration * This,
            /* [retval][out] */ SAFEARRAY * *__MIDL__IVisioLoggerIntegration0015);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartupObjectStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0016);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NewRowStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0017);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldSubmittedStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0018);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FieldSubmittedValidationSuccess )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerIntegration0019);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageSubmittedStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0020);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageSubmittedValidationSuccess )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BOOL *__MIDL__IVisioLoggerIntegration0021);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RowChangedStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0022);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreSignatureStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0023);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0024);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalObjectStatusNotification )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0025);
        
        HRESULT ( STDMETHODCALLTYPE *StartupObjectProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *NewRowProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *FieldSubmittedProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *PageSubmittedProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *RowChangedProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *PreSignatureProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *ActionProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectProperties )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            /* [in] */ ULONG hwndParent,
            /* [in] */ BSTR instanceIdentifier);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionFieldName )( 
            IVisioLoggerIntegration * This,
            /* [in] */ BSTR objectGUID,
            /* [retval][out] */ BSTR *__MIDL__IVisioLoggerIntegration0026);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectShow )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectHide )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectAdviseVisioLoggerServices )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            IVisioLoggerServices *pIVisioLoggerServices);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectStart )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            ULONG hwndHost,
            BSTR instanceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *ExternalObjectStop )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID,
            BSTR instanceIdentifier);
        
        HRESULT ( STDMETHODCALLTYPE *StartupObjectStart )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *StartupObjectPause )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *StartupObjectResume )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        HRESULT ( STDMETHODCALLTYPE *StartupObjectShutdown )( 
            IVisioLoggerIntegration * This,
            BSTR objectGUID);
        
        END_INTERFACE
    } IVisioLoggerIntegrationVtbl;

    interface IVisioLoggerIntegration
    {
        CONST_VTBL struct IVisioLoggerIntegrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisioLoggerIntegration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisioLoggerIntegration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisioLoggerIntegration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisioLoggerIntegration_InstantiateObject(This,objectGUID)	\
    ( (This)->lpVtbl -> InstantiateObject(This,objectGUID) ) 

#define IVisioLoggerIntegration_ReleaseObject(This,objectGUID)	\
    ( (This)->lpVtbl -> ReleaseObject(This,objectGUID) ) 

#define IVisioLoggerIntegration_TakeStartupObjectFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeStartupObjectFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeNewRowFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeNewRowFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeFieldSubmittedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeFieldSubmittedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakePageSubmittedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakePageSubmittedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeRowChangedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeRowChangedFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakePreSignatureFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakePreSignatureFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeActionFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeActionFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeExternalObjectFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames)	\
    ( (This)->lpVtbl -> TakeExternalObjectFields(This,objectGUID,fieldNames,imageFieldNames,documentFieldNames) ) 

#define IVisioLoggerIntegration_TakeStartupObjectDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeStartupObjectDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakeNewRowDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeNewRowDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakeFieldSubmittedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeFieldSubmittedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakePageSubmittedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakePageSubmittedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakeRowChangedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeRowChangedDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakePreSignatureDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakePreSignatureDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakeActionDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeActionDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_TakeExternalObjectDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId)	\
    ( (This)->lpVtbl -> TakeExternalObjectDatabaseInfo(This,objectGUID,pIDbConnectionUnknown,serverName,dabaseName,useWindowsLogon,userName,password,dbProviderName,otherConnectionParameters,processName,processId) ) 

#define IVisioLoggerIntegration_HandleNewRow(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrSwitchProcessName,retainValues)	\
    ( (This)->lpVtbl -> HandleNewRow(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrSwitchProcessName,retainValues) ) 

#define IVisioLoggerIntegration_HandleFieldSubmitted(This,objectGUID,hwndParent,theField,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrProcessName,retainValues)	\
    ( (This)->lpVtbl -> HandleFieldSubmitted(This,objectGUID,hwndParent,theField,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrProcessName,retainValues) ) 

#define IVisioLoggerIntegration_HandlePageSubmitted(This,objectGUID,hwndParent,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrProcessName,retainValues)	\
    ( (This)->lpVtbl -> HandlePageSubmitted(This,objectGUID,hwndParent,currentFieldNames,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged,pBstrProcessName,retainValues) ) 

#define IVisioLoggerIntegration_HandleRowChanged(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> HandleRowChanged(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerIntegration_HandlePreSignature(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> HandlePreSignature(This,objectGUID,hwndParent,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerIntegration_HandleAction(This,objectGUID,hwndParent,actionFieldName,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged)	\
    ( (This)->lpVtbl -> HandleAction(This,objectGUID,hwndParent,actionFieldName,fieldNames,imageFieldNames,documentFieldNames,fieldValues,imageHandles,documentValues,valuesChanged,imagesChanged,documentsChanged) ) 

#define IVisioLoggerIntegration_get_RegisteredStartupProviders(This,__MIDL__IVisioLoggerIntegration0000)	\
    ( (This)->lpVtbl -> get_RegisteredStartupProviders(This,__MIDL__IVisioLoggerIntegration0000) ) 

#define IVisioLoggerIntegration_get_RegisteredStartupProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0001)	\
    ( (This)->lpVtbl -> get_RegisteredStartupProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0001) ) 

#define IVisioLoggerIntegration_get_RegisteredNewRowProviders(This,__MIDL__IVisioLoggerIntegration0002)	\
    ( (This)->lpVtbl -> get_RegisteredNewRowProviders(This,__MIDL__IVisioLoggerIntegration0002) ) 

#define IVisioLoggerIntegration_get_RegisteredNewRowProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0003)	\
    ( (This)->lpVtbl -> get_RegisteredNewRowProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0003) ) 

#define IVisioLoggerIntegration_get_RegisteredFieldSubmittedProviders(This,__MIDL__IVisioLoggerIntegration0004)	\
    ( (This)->lpVtbl -> get_RegisteredFieldSubmittedProviders(This,__MIDL__IVisioLoggerIntegration0004) ) 

#define IVisioLoggerIntegration_get_RegisteredFieldSubmittedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0005)	\
    ( (This)->lpVtbl -> get_RegisteredFieldSubmittedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0005) ) 

#define IVisioLoggerIntegration_get_RegisteredPageSubmittedProviders(This,__MIDL__IVisioLoggerIntegration0006)	\
    ( (This)->lpVtbl -> get_RegisteredPageSubmittedProviders(This,__MIDL__IVisioLoggerIntegration0006) ) 

#define IVisioLoggerIntegration_get_RegisteredPageSubmittedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0007)	\
    ( (This)->lpVtbl -> get_RegisteredPageSubmittedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0007) ) 

#define IVisioLoggerIntegration_get_RegisteredRowChangedProviders(This,__MIDL__IVisioLoggerIntegration0008)	\
    ( (This)->lpVtbl -> get_RegisteredRowChangedProviders(This,__MIDL__IVisioLoggerIntegration0008) ) 

#define IVisioLoggerIntegration_get_RegisteredRowChangedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0009)	\
    ( (This)->lpVtbl -> get_RegisteredRowChangedProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0009) ) 

#define IVisioLoggerIntegration_get_RegisteredPreSignatureProviders(This,__MIDL__IVisioLoggerIntegration0010)	\
    ( (This)->lpVtbl -> get_RegisteredPreSignatureProviders(This,__MIDL__IVisioLoggerIntegration0010) ) 

#define IVisioLoggerIntegration_get_RegisteredPreSignatureProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0011)	\
    ( (This)->lpVtbl -> get_RegisteredPreSignatureProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0011) ) 

#define IVisioLoggerIntegration_get_RegisteredActionProviders(This,__MIDL__IVisioLoggerIntegration0012)	\
    ( (This)->lpVtbl -> get_RegisteredActionProviders(This,__MIDL__IVisioLoggerIntegration0012) ) 

#define IVisioLoggerIntegration_get_RegisteredActionProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0013)	\
    ( (This)->lpVtbl -> get_RegisteredActionProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0013) ) 

#define IVisioLoggerIntegration_get_RegisteredExternalObjectProviders(This,__MIDL__IVisioLoggerIntegration0014)	\
    ( (This)->lpVtbl -> get_RegisteredExternalObjectProviders(This,__MIDL__IVisioLoggerIntegration0014) ) 

#define IVisioLoggerIntegration_get_RegisteredExternalObjectProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0015)	\
    ( (This)->lpVtbl -> get_RegisteredExternalObjectProviderGUIDs(This,__MIDL__IVisioLoggerIntegration0015) ) 

#define IVisioLoggerIntegration_get_StartupObjectStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0016)	\
    ( (This)->lpVtbl -> get_StartupObjectStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0016) ) 

#define IVisioLoggerIntegration_get_NewRowStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0017)	\
    ( (This)->lpVtbl -> get_NewRowStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0017) ) 

#define IVisioLoggerIntegration_get_FieldSubmittedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0018)	\
    ( (This)->lpVtbl -> get_FieldSubmittedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0018) ) 

#define IVisioLoggerIntegration_get_FieldSubmittedValidationSuccess(This,objectGUID,__MIDL__IVisioLoggerIntegration0019)	\
    ( (This)->lpVtbl -> get_FieldSubmittedValidationSuccess(This,objectGUID,__MIDL__IVisioLoggerIntegration0019) ) 

#define IVisioLoggerIntegration_get_PageSubmittedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0020)	\
    ( (This)->lpVtbl -> get_PageSubmittedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0020) ) 

#define IVisioLoggerIntegration_get_PageSubmittedValidationSuccess(This,objectGUID,__MIDL__IVisioLoggerIntegration0021)	\
    ( (This)->lpVtbl -> get_PageSubmittedValidationSuccess(This,objectGUID,__MIDL__IVisioLoggerIntegration0021) ) 

#define IVisioLoggerIntegration_get_RowChangedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0022)	\
    ( (This)->lpVtbl -> get_RowChangedStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0022) ) 

#define IVisioLoggerIntegration_get_PreSignatureStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0023)	\
    ( (This)->lpVtbl -> get_PreSignatureStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0023) ) 

#define IVisioLoggerIntegration_get_ActionStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0024)	\
    ( (This)->lpVtbl -> get_ActionStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0024) ) 

#define IVisioLoggerIntegration_get_ExternalObjectStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0025)	\
    ( (This)->lpVtbl -> get_ExternalObjectStatusNotification(This,objectGUID,__MIDL__IVisioLoggerIntegration0025) ) 

#define IVisioLoggerIntegration_StartupObjectProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> StartupObjectProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_NewRowProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> NewRowProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_FieldSubmittedProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> FieldSubmittedProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_PageSubmittedProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> PageSubmittedProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_RowChangedProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> RowChangedProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_PreSignatureProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> PreSignatureProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_ActionProperties(This,objectGUID,hwndParent)	\
    ( (This)->lpVtbl -> ActionProperties(This,objectGUID,hwndParent) ) 

#define IVisioLoggerIntegration_ExternalObjectProperties(This,objectGUID,hwndParent,instanceIdentifier)	\
    ( (This)->lpVtbl -> ExternalObjectProperties(This,objectGUID,hwndParent,instanceIdentifier) ) 

#define IVisioLoggerIntegration_get_ActionFieldName(This,objectGUID,__MIDL__IVisioLoggerIntegration0026)	\
    ( (This)->lpVtbl -> get_ActionFieldName(This,objectGUID,__MIDL__IVisioLoggerIntegration0026) ) 

#define IVisioLoggerIntegration_ExternalObjectShow(This,objectGUID)	\
    ( (This)->lpVtbl -> ExternalObjectShow(This,objectGUID) ) 

#define IVisioLoggerIntegration_ExternalObjectHide(This,objectGUID)	\
    ( (This)->lpVtbl -> ExternalObjectHide(This,objectGUID) ) 

#define IVisioLoggerIntegration_ExternalObjectAdviseVisioLoggerServices(This,objectGUID,pIVisioLoggerServices)	\
    ( (This)->lpVtbl -> ExternalObjectAdviseVisioLoggerServices(This,objectGUID,pIVisioLoggerServices) ) 

#define IVisioLoggerIntegration_ExternalObjectStart(This,objectGUID,hwndHost,instanceIdentifier)	\
    ( (This)->lpVtbl -> ExternalObjectStart(This,objectGUID,hwndHost,instanceIdentifier) ) 

#define IVisioLoggerIntegration_ExternalObjectStop(This,objectGUID,instanceIdentifier)	\
    ( (This)->lpVtbl -> ExternalObjectStop(This,objectGUID,instanceIdentifier) ) 

#define IVisioLoggerIntegration_StartupObjectStart(This,objectGUID)	\
    ( (This)->lpVtbl -> StartupObjectStart(This,objectGUID) ) 

#define IVisioLoggerIntegration_StartupObjectPause(This,objectGUID)	\
    ( (This)->lpVtbl -> StartupObjectPause(This,objectGUID) ) 

#define IVisioLoggerIntegration_StartupObjectResume(This,objectGUID)	\
    ( (This)->lpVtbl -> StartupObjectResume(This,objectGUID) ) 

#define IVisioLoggerIntegration_StartupObjectShutdown(This,objectGUID)	\
    ( (This)->lpVtbl -> StartupObjectShutdown(This,objectGUID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisioLoggerIntegration_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VisioLoggerIntegration;

#ifdef __cplusplus

class DECLSPEC_UUID("6C8648D0-B406-4555-95ED-4F78568D83EB")
VisioLoggerIntegration;
#endif
#endif /* __VisioLoggerIntegration_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


