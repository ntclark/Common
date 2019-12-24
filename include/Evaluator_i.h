

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Evaluator.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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


#ifndef __Evaluator_i_h__
#define __Evaluator_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEvaluator_FWD_DEFINED__
#define __IEvaluator_FWD_DEFINED__
typedef interface IEvaluator IEvaluator;

#endif 	/* __IEvaluator_FWD_DEFINED__ */


#ifndef __IEvaluatorEvents_FWD_DEFINED__
#define __IEvaluatorEvents_FWD_DEFINED__
typedef interface IEvaluatorEvents IEvaluatorEvents;

#endif 	/* __IEvaluatorEvents_FWD_DEFINED__ */


#ifndef __Evaluator_FWD_DEFINED__
#define __Evaluator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Evaluator Evaluator;
#else
typedef struct Evaluator Evaluator;
#endif /* __cplusplus */

#endif 	/* __Evaluator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Evaluator_LIBRARY_DEFINED__
#define __Evaluator_LIBRARY_DEFINED__

/* library Evaluator */
/* [version][lcid][helpstring][helpfile][uuid] */ 


enum evaluatorErrorMessage
    {
        evaluatorError	= ( 0x400 + 4000 ) 
    } ;

enum evaluatorEvents
    {
        evaluatorEventStarted	= 1,
        evaluatorEventTakeResultString	= 2,
        evaluatorEventUnknownVariable	= 3,
        evaluatorEventUnknownFunction	= 4,
        evaluatorEventMathError	= 5,
        evaluatorEventFinished	= 6,
        evaluatorEventClear	= 7,
        evaluatorEventDivideByZero	= 8,
        evaluatorEventInvalidArgument	= 9
    } ;

enum evaluatorErrors
    {
        evaluatorErrorVariableUndefined	= 1,
        evaluatorErrorFunctionUndefined	= 2,
        evaluatorErrorBadFunction	= 3,
        evaluatorErrorBadDelimiter	= 4
    } ;

EXTERN_C const IID LIBID_Evaluator;

#ifndef __IEvaluator_INTERFACE_DEFINED__
#define __IEvaluator_INTERFACE_DEFINED__

/* interface IEvaluator */
/* [object][unique][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEvaluator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDCA-55E6-11d3-8365-006008BD5BC3")
    IEvaluator : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Eval( 
            /* [in] */ BSTR theExpression,
            /* [retval][out] */ double *theValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Evaluate_szExpression( 
            /* [in] */ char *expression,
            /* [retval][out] */ double *__MIDL__IEvaluator0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Evaluate_szFunction( 
            /* [in] */ char *theFunction) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Consume_szExpression( 
            /* [in] */ char *expression,
            /* [retval][out] */ double *__MIDL__IEvaluator0001) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UndefineVariable( 
            /* [in] */ /* external definition not present */ IVariable *v) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefineVariable( 
            /* [in] */ /* external definition not present */ IVariable *v) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UndefineAllVariables( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsVariable( 
            /* [in] */ BSTR bstrVariableName,
            BOOL *isKnown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsBusy( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Evaluate_bstrExpression( 
            /* [in] */ BSTR bstrExpression,
            /* [retval][out] */ double *theValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEvaluatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEvaluator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEvaluator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEvaluator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEvaluator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEvaluator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEvaluator * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Eval )( 
            IEvaluator * This,
            /* [in] */ BSTR theExpression,
            /* [retval][out] */ double *theValue);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Evaluate_szExpression )( 
            IEvaluator * This,
            /* [in] */ char *expression,
            /* [retval][out] */ double *__MIDL__IEvaluator0000);
        
        HRESULT ( STDMETHODCALLTYPE *Evaluate_szFunction )( 
            IEvaluator * This,
            /* [in] */ char *theFunction);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Consume_szExpression )( 
            IEvaluator * This,
            /* [in] */ char *expression,
            /* [retval][out] */ double *__MIDL__IEvaluator0001);
        
        HRESULT ( STDMETHODCALLTYPE *UndefineVariable )( 
            IEvaluator * This,
            /* [in] */ /* external definition not present */ IVariable *v);
        
        HRESULT ( STDMETHODCALLTYPE *DefineVariable )( 
            IEvaluator * This,
            /* [in] */ /* external definition not present */ IVariable *v);
        
        HRESULT ( STDMETHODCALLTYPE *UndefineAllVariables )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsVariable )( 
            IEvaluator * This,
            /* [in] */ BSTR bstrVariableName,
            BOOL *isKnown);
        
        HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsBusy )( 
            IEvaluator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Evaluate_bstrExpression )( 
            IEvaluator * This,
            /* [in] */ BSTR bstrExpression,
            /* [retval][out] */ double *theValue);
        
        END_INTERFACE
    } IEvaluatorVtbl;

    interface IEvaluator
    {
        CONST_VTBL struct IEvaluatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEvaluator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEvaluator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEvaluator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEvaluator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEvaluator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEvaluator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEvaluator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEvaluator_get_Eval(This,theExpression,theValue)	\
    ( (This)->lpVtbl -> get_Eval(This,theExpression,theValue) ) 

#define IEvaluator_Evaluate_szExpression(This,expression,__MIDL__IEvaluator0000)	\
    ( (This)->lpVtbl -> Evaluate_szExpression(This,expression,__MIDL__IEvaluator0000) ) 

#define IEvaluator_Evaluate_szFunction(This,theFunction)	\
    ( (This)->lpVtbl -> Evaluate_szFunction(This,theFunction) ) 

#define IEvaluator_Consume_szExpression(This,expression,__MIDL__IEvaluator0001)	\
    ( (This)->lpVtbl -> Consume_szExpression(This,expression,__MIDL__IEvaluator0001) ) 

#define IEvaluator_UndefineVariable(This,v)	\
    ( (This)->lpVtbl -> UndefineVariable(This,v) ) 

#define IEvaluator_DefineVariable(This,v)	\
    ( (This)->lpVtbl -> DefineVariable(This,v) ) 

#define IEvaluator_UndefineAllVariables(This)	\
    ( (This)->lpVtbl -> UndefineAllVariables(This) ) 

#define IEvaluator_IsVariable(This,bstrVariableName,isKnown)	\
    ( (This)->lpVtbl -> IsVariable(This,bstrVariableName,isKnown) ) 

#define IEvaluator_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IEvaluator_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IEvaluator_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IEvaluator_IsBusy(This)	\
    ( (This)->lpVtbl -> IsBusy(This) ) 

#define IEvaluator_Evaluate_bstrExpression(This,bstrExpression,theValue)	\
    ( (This)->lpVtbl -> Evaluate_bstrExpression(This,bstrExpression,theValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEvaluator_INTERFACE_DEFINED__ */


#ifndef __IEvaluatorEvents_INTERFACE_DEFINED__
#define __IEvaluatorEvents_INTERFACE_DEFINED__

/* interface IEvaluatorEvents */
/* [object][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEvaluatorEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFDCB-55E6-11d3-8365-006008BD5BC3")
    IEvaluatorEvents : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Started( 
            long expectedIterations) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TakeResultString( 
            /* [in] */ long iterationCount,
            /* [in] */ char *pszVarNames,
            /* [in] */ char *pszResults) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnknownVariable( 
            /* [in] */ BSTR variableName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnknownFunction( 
            /* [in] */ BSTR functionName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MathError( 
            /* [in] */ BSTR functionName,
            /* [in] */ double argument) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Finished( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DivideByZero( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InvalidArgument( 
            /* [in] */ BSTR functionName,
            /* [in] */ double invalidValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEvaluatorEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEvaluatorEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEvaluatorEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEvaluatorEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEvaluatorEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEvaluatorEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEvaluatorEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEvaluatorEvents * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Started )( 
            IEvaluatorEvents * This,
            long expectedIterations);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TakeResultString )( 
            IEvaluatorEvents * This,
            /* [in] */ long iterationCount,
            /* [in] */ char *pszVarNames,
            /* [in] */ char *pszResults);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnknownVariable )( 
            IEvaluatorEvents * This,
            /* [in] */ BSTR variableName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnknownFunction )( 
            IEvaluatorEvents * This,
            /* [in] */ BSTR functionName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MathError )( 
            IEvaluatorEvents * This,
            /* [in] */ BSTR functionName,
            /* [in] */ double argument);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Finished )( 
            IEvaluatorEvents * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DivideByZero )( 
            IEvaluatorEvents * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InvalidArgument )( 
            IEvaluatorEvents * This,
            /* [in] */ BSTR functionName,
            /* [in] */ double invalidValue);
        
        END_INTERFACE
    } IEvaluatorEventsVtbl;

    interface IEvaluatorEvents
    {
        CONST_VTBL struct IEvaluatorEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEvaluatorEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEvaluatorEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEvaluatorEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEvaluatorEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEvaluatorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEvaluatorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEvaluatorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEvaluatorEvents_Started(This,expectedIterations)	\
    ( (This)->lpVtbl -> Started(This,expectedIterations) ) 

#define IEvaluatorEvents_TakeResultString(This,iterationCount,pszVarNames,pszResults)	\
    ( (This)->lpVtbl -> TakeResultString(This,iterationCount,pszVarNames,pszResults) ) 

#define IEvaluatorEvents_UnknownVariable(This,variableName)	\
    ( (This)->lpVtbl -> UnknownVariable(This,variableName) ) 

#define IEvaluatorEvents_UnknownFunction(This,functionName)	\
    ( (This)->lpVtbl -> UnknownFunction(This,functionName) ) 

#define IEvaluatorEvents_MathError(This,functionName,argument)	\
    ( (This)->lpVtbl -> MathError(This,functionName,argument) ) 

#define IEvaluatorEvents_Finished(This)	\
    ( (This)->lpVtbl -> Finished(This) ) 

#define IEvaluatorEvents_DivideByZero(This)	\
    ( (This)->lpVtbl -> DivideByZero(This) ) 

#define IEvaluatorEvents_InvalidArgument(This,functionName,invalidValue)	\
    ( (This)->lpVtbl -> InvalidArgument(This,functionName,invalidValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEvaluatorEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Evaluator;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFDCC-55E6-11d3-8365-006008BD5BC3")
Evaluator;
#endif
#endif /* __Evaluator_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


