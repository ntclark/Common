

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jan 13 14:49:51 2014
 */
/* Compiler settings for .\Variable.odl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

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


#ifndef __Variable_i_h__
#define __Variable_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVariable_FWD_DEFINED__
#define __IVariable_FWD_DEFINED__
typedef interface IVariable IVariable;
#endif 	/* __IVariable_FWD_DEFINED__ */


#ifndef __Variable_FWD_DEFINED__
#define __Variable_FWD_DEFINED__

#ifdef __cplusplus
typedef class Variable Variable;
#else
typedef struct Variable Variable;
#endif /* __cplusplus */

#endif 	/* __Variable_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Variable_LIBRARY_DEFINED__
#define __Variable_LIBRARY_DEFINED__

/* library Variable */
/* [version][lcid][helpstring][helpfile][uuid] */ 


EXTERN_C const IID LIBID_Variable;

#ifndef __IVariable_INTERFACE_DEFINED__
#define __IVariable_INTERFACE_DEFINED__

/* interface IVariable */
/* [object][unique][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVariable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDC1-55E6-11d3-8365-006008BD5BC3")
    IVariable : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ double theValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ double *theValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ValueExpression( 
            /* [in] */ BSTR strValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ValueExpression( 
            /* [retval][out] */ BSTR *strValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *bstrName) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsIndependent( 
            /* [in] */ BOOL isIndependent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsIndependent( 
            /* [retval][out] */ BOOL *isIndependent) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DomainExpression( 
            /* [in] */ BSTR bstrExpression) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DomainExpression( 
            /* [retval][out] */ BSTR *bstrExpression) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MinValueExpression( 
            /* [in] */ BSTR bstrExpression) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MinValueExpression( 
            /* [retval][out] */ BSTR *pbstrExpression) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxValueExpression( 
            /* [in] */ BSTR bstrExpression) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValueExpression( 
            /* [retval][out] */ BSTR *pbstrExpression) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StepCount( 
            /* [in] */ long countValues) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StepCount( 
            /* [retval][out] */ long *pCountValues) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IEvaluator( 
            /* [in] */ IDispatch *iEvaluator) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IEvaluator( 
            /* [retval][out] */ IDispatch **iEvaluator) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TabIndex( 
            /* [in] */ long tabIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TabIndex( 
            /* [retval][out] */ long *tabIndex) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MinValue( 
            /* [retval][out] */ double *__MIDL__IVariable0000) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxValue( 
            /* [retval][out] */ double *__MIDL__IVariable0001) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HWND( 
            /* [retval][out] */ HWND *hwndDialog) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsLess( 
            /* [in] */ double firstValue,
            /* [in] */ double secondValue,
            /* [retval][out] */ short *theAnswer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Step( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyFrom( 
            IVariable *theSource) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHwnds( 
            HWND hwndOwner,
            HWND hwndTabControl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDomain( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IVariableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVariable * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVariable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVariable * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVariable * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVariable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVariable * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVariable * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IVariable * This,
            /* [in] */ double theValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IVariable * This,
            /* [retval][out] */ double *theValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR strValue);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *strValue);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IVariable * This,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IVariable * This,
            /* [retval][out] */ BSTR *bstrName);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsIndependent )( 
            IVariable * This,
            /* [in] */ BOOL isIndependent);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIndependent )( 
            IVariable * This,
            /* [retval][out] */ BOOL *isIndependent);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DomainExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DomainExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *bstrExpression);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *pbstrExpression);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *pbstrExpression);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StepCount )( 
            IVariable * This,
            /* [in] */ long countValues);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StepCount )( 
            IVariable * This,
            /* [retval][out] */ long *pCountValues);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IEvaluator )( 
            IVariable * This,
            /* [in] */ IDispatch *iEvaluator);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IEvaluator )( 
            IVariable * This,
            /* [retval][out] */ IDispatch **iEvaluator);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TabIndex )( 
            IVariable * This,
            /* [in] */ long tabIndex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TabIndex )( 
            IVariable * This,
            /* [retval][out] */ long *tabIndex);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinValue )( 
            IVariable * This,
            /* [retval][out] */ double *__MIDL__IVariable0000);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxValue )( 
            IVariable * This,
            /* [retval][out] */ double *__MIDL__IVariable0001);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IVariable * This,
            /* [retval][out] */ HWND *hwndDialog);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLess )( 
            IVariable * This,
            /* [in] */ double firstValue,
            /* [in] */ double secondValue,
            /* [retval][out] */ short *theAnswer);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVariable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Step )( 
            IVariable * This);
        
        HRESULT ( STDMETHODCALLTYPE *CopyFrom )( 
            IVariable * This,
            IVariable *theSource);
        
        HRESULT ( STDMETHODCALLTYPE *SetHwnds )( 
            IVariable * This,
            HWND hwndOwner,
            HWND hwndTabControl);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDomain )( 
            IVariable * This);
        
        END_INTERFACE
    } IVariableVtbl;

    interface IVariable
    {
        CONST_VTBL struct IVariableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVariable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVariable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVariable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVariable_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVariable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVariable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVariable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVariable_put_Value(This,theValue)	\
    ( (This)->lpVtbl -> put_Value(This,theValue) ) 

#define IVariable_get_Value(This,theValue)	\
    ( (This)->lpVtbl -> get_Value(This,theValue) ) 

#define IVariable_put_ValueExpression(This,strValue)	\
    ( (This)->lpVtbl -> put_ValueExpression(This,strValue) ) 

#define IVariable_get_ValueExpression(This,strValue)	\
    ( (This)->lpVtbl -> get_ValueExpression(This,strValue) ) 

#define IVariable_put_Name(This,bstrName)	\
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define IVariable_get_Name(This,bstrName)	\
    ( (This)->lpVtbl -> get_Name(This,bstrName) ) 

#define IVariable_put_IsIndependent(This,isIndependent)	\
    ( (This)->lpVtbl -> put_IsIndependent(This,isIndependent) ) 

#define IVariable_get_IsIndependent(This,isIndependent)	\
    ( (This)->lpVtbl -> get_IsIndependent(This,isIndependent) ) 

#define IVariable_put_DomainExpression(This,bstrExpression)	\
    ( (This)->lpVtbl -> put_DomainExpression(This,bstrExpression) ) 

#define IVariable_get_DomainExpression(This,bstrExpression)	\
    ( (This)->lpVtbl -> get_DomainExpression(This,bstrExpression) ) 

#define IVariable_put_MinValueExpression(This,bstrExpression)	\
    ( (This)->lpVtbl -> put_MinValueExpression(This,bstrExpression) ) 

#define IVariable_get_MinValueExpression(This,pbstrExpression)	\
    ( (This)->lpVtbl -> get_MinValueExpression(This,pbstrExpression) ) 

#define IVariable_put_MaxValueExpression(This,bstrExpression)	\
    ( (This)->lpVtbl -> put_MaxValueExpression(This,bstrExpression) ) 

#define IVariable_get_MaxValueExpression(This,pbstrExpression)	\
    ( (This)->lpVtbl -> get_MaxValueExpression(This,pbstrExpression) ) 

#define IVariable_put_StepCount(This,countValues)	\
    ( (This)->lpVtbl -> put_StepCount(This,countValues) ) 

#define IVariable_get_StepCount(This,pCountValues)	\
    ( (This)->lpVtbl -> get_StepCount(This,pCountValues) ) 

#define IVariable_put_IEvaluator(This,iEvaluator)	\
    ( (This)->lpVtbl -> put_IEvaluator(This,iEvaluator) ) 

#define IVariable_get_IEvaluator(This,iEvaluator)	\
    ( (This)->lpVtbl -> get_IEvaluator(This,iEvaluator) ) 

#define IVariable_put_TabIndex(This,tabIndex)	\
    ( (This)->lpVtbl -> put_TabIndex(This,tabIndex) ) 

#define IVariable_get_TabIndex(This,tabIndex)	\
    ( (This)->lpVtbl -> get_TabIndex(This,tabIndex) ) 

#define IVariable_get_MinValue(This,__MIDL__IVariable0000)	\
    ( (This)->lpVtbl -> get_MinValue(This,__MIDL__IVariable0000) ) 

#define IVariable_get_MaxValue(This,__MIDL__IVariable0001)	\
    ( (This)->lpVtbl -> get_MaxValue(This,__MIDL__IVariable0001) ) 

#define IVariable_get_HWND(This,hwndDialog)	\
    ( (This)->lpVtbl -> get_HWND(This,hwndDialog) ) 

#define IVariable_get_IsLess(This,firstValue,secondValue,theAnswer)	\
    ( (This)->lpVtbl -> get_IsLess(This,firstValue,secondValue,theAnswer) ) 

#define IVariable_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IVariable_Step(This)	\
    ( (This)->lpVtbl -> Step(This) ) 

#define IVariable_CopyFrom(This,theSource)	\
    ( (This)->lpVtbl -> CopyFrom(This,theSource) ) 

#define IVariable_SetHwnds(This,hwndOwner,hwndTabControl)	\
    ( (This)->lpVtbl -> SetHwnds(This,hwndOwner,hwndTabControl) ) 

#define IVariable_InitializeDomain(This)	\
    ( (This)->lpVtbl -> InitializeDomain(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVariable_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Variable;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFDC2-55E6-11d3-8365-006008BD5BC3")
Variable;
#endif
#endif /* __Variable_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

