

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Variable.odl:
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


#ifndef __Variable_i_h__
#define __Variable_i_h__

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
        
        virtual HRESULT STDMETHODCALLTYPE Edit( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVariableVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVariable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVariable * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVariable * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVariable * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVariable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVariable * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVariable * This,
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
        
        DECLSPEC_XFGVIRT(IVariable, put_Value)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IVariable * This,
            /* [in] */ double theValue);
        
        DECLSPEC_XFGVIRT(IVariable, get_Value)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IVariable * This,
            /* [retval][out] */ double *theValue);
        
        DECLSPEC_XFGVIRT(IVariable, put_ValueExpression)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR strValue);
        
        DECLSPEC_XFGVIRT(IVariable, get_ValueExpression)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *strValue);
        
        DECLSPEC_XFGVIRT(IVariable, put_Name)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IVariable * This,
            /* [in] */ BSTR bstrName);
        
        DECLSPEC_XFGVIRT(IVariable, get_Name)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IVariable * This,
            /* [retval][out] */ BSTR *bstrName);
        
        DECLSPEC_XFGVIRT(IVariable, put_IsIndependent)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsIndependent )( 
            IVariable * This,
            /* [in] */ BOOL isIndependent);
        
        DECLSPEC_XFGVIRT(IVariable, get_IsIndependent)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIndependent )( 
            IVariable * This,
            /* [retval][out] */ BOOL *isIndependent);
        
        DECLSPEC_XFGVIRT(IVariable, put_DomainExpression)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DomainExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, get_DomainExpression)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DomainExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *bstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, put_MinValueExpression)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, get_MinValueExpression)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *pbstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, put_MaxValueExpression)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxValueExpression )( 
            IVariable * This,
            /* [in] */ BSTR bstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, get_MaxValueExpression)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxValueExpression )( 
            IVariable * This,
            /* [retval][out] */ BSTR *pbstrExpression);
        
        DECLSPEC_XFGVIRT(IVariable, put_StepCount)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StepCount )( 
            IVariable * This,
            /* [in] */ long countValues);
        
        DECLSPEC_XFGVIRT(IVariable, get_StepCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StepCount )( 
            IVariable * This,
            /* [retval][out] */ long *pCountValues);
        
        DECLSPEC_XFGVIRT(IVariable, put_IEvaluator)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IEvaluator )( 
            IVariable * This,
            /* [in] */ IDispatch *iEvaluator);
        
        DECLSPEC_XFGVIRT(IVariable, get_IEvaluator)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IEvaluator )( 
            IVariable * This,
            /* [retval][out] */ IDispatch **iEvaluator);
        
        DECLSPEC_XFGVIRT(IVariable, put_TabIndex)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TabIndex )( 
            IVariable * This,
            /* [in] */ long tabIndex);
        
        DECLSPEC_XFGVIRT(IVariable, get_TabIndex)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TabIndex )( 
            IVariable * This,
            /* [retval][out] */ long *tabIndex);
        
        DECLSPEC_XFGVIRT(IVariable, get_MinValue)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinValue )( 
            IVariable * This,
            /* [retval][out] */ double *__MIDL__IVariable0000);
        
        DECLSPEC_XFGVIRT(IVariable, get_MaxValue)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxValue )( 
            IVariable * This,
            /* [retval][out] */ double *__MIDL__IVariable0001);
        
        DECLSPEC_XFGVIRT(IVariable, get_HWND)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HWND )( 
            IVariable * This,
            /* [retval][out] */ HWND *hwndDialog);
        
        DECLSPEC_XFGVIRT(IVariable, get_IsLess)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLess )( 
            IVariable * This,
            /* [in] */ double firstValue,
            /* [in] */ double secondValue,
            /* [retval][out] */ short *theAnswer);
        
        DECLSPEC_XFGVIRT(IVariable, Start)
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVariable * This);
        
        DECLSPEC_XFGVIRT(IVariable, Step)
        HRESULT ( STDMETHODCALLTYPE *Step )( 
            IVariable * This);
        
        DECLSPEC_XFGVIRT(IVariable, CopyFrom)
        HRESULT ( STDMETHODCALLTYPE *CopyFrom )( 
            IVariable * This,
            IVariable *theSource);
        
        DECLSPEC_XFGVIRT(IVariable, SetHwnds)
        HRESULT ( STDMETHODCALLTYPE *SetHwnds )( 
            IVariable * This,
            HWND hwndOwner,
            HWND hwndTabControl);
        
        DECLSPEC_XFGVIRT(IVariable, InitializeDomain)
        HRESULT ( STDMETHODCALLTYPE *InitializeDomain )( 
            IVariable * This);
        
        DECLSPEC_XFGVIRT(IVariable, Edit)
        HRESULT ( STDMETHODCALLTYPE *Edit )( 
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

#define IVariable_Edit(This)	\
    ( (This)->lpVtbl -> Edit(This) ) 

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


