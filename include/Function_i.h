

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 22 12:54:35 2017
 */
/* Compiler settings for Function.odl:
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


#ifndef __Function_i_h__
#define __Function_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGSFunctioNaterEvents_FWD_DEFINED__
#define __IGSFunctioNaterEvents_FWD_DEFINED__
typedef interface IGSFunctioNaterEvents IGSFunctioNaterEvents;

#endif 	/* __IGSFunctioNaterEvents_FWD_DEFINED__ */


#ifndef __IGSFunctioNater_FWD_DEFINED__
#define __IGSFunctioNater_FWD_DEFINED__
typedef interface IGSFunctioNater IGSFunctioNater;

#endif 	/* __IGSFunctioNater_FWD_DEFINED__ */


#ifndef __GSystemFunctioNater_FWD_DEFINED__
#define __GSystemFunctioNater_FWD_DEFINED__

#ifdef __cplusplus
typedef class GSystemFunctioNater GSystemFunctioNater;
#else
typedef struct GSystemFunctioNater GSystemFunctioNater;
#endif /* __cplusplus */

#endif 	/* __GSystemFunctioNater_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __FunctioNater_LIBRARY_DEFINED__
#define __FunctioNater_LIBRARY_DEFINED__

/* library FunctioNater */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


enum functionEventID
    {
        functionEventID_UndefinedVariable	= 1,
        functionEventID_UndefinedFunction	= 2,
        functionEventID_Clear	= 3,
        functionEventID_Started	= 10,
        functionEventID_Paused	= 11,
        functionEventID_Resumed	= 12,
        functionEventID_Stopped	= 13,
        functionEventID_TakeValues	= 20,
        functionEventID_TakeResults	= 21,
        functionEventID_Finished	= 22,
        functionEventID_DivideByZero	= 23,
        functionEventID_InvalidArgument	= 24,
        functionEventID_Parsed	= 25
    } ;

EXTERN_C const IID LIBID_FunctioNater;


#ifndef __FunctionModule_MODULE_DEFINED__
#define __FunctionModule_MODULE_DEFINED__


/* module FunctionModule */


#endif /* __FunctionModule_MODULE_DEFINED__ */

#ifndef __IGSFunctioNaterEvents_DISPINTERFACE_DEFINED__
#define __IGSFunctioNaterEvents_DISPINTERFACE_DEFINED__

/* dispinterface IGSFunctioNaterEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IGSFunctioNaterEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("77B23910-57D1-405b-972D-333325B629BB")
    IGSFunctioNaterEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IGSFunctioNaterEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSFunctioNaterEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSFunctioNaterEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSFunctioNaterEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGSFunctioNaterEvents * This,
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
        
        END_INTERFACE
    } IGSFunctioNaterEventsVtbl;

    interface IGSFunctioNaterEvents
    {
        CONST_VTBL struct IGSFunctioNaterEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSFunctioNaterEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSFunctioNaterEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSFunctioNaterEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSFunctioNaterEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGSFunctioNaterEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGSFunctioNaterEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGSFunctioNaterEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IGSFunctioNaterEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IGSFunctioNater_INTERFACE_DEFINED__
#define __IGSFunctioNater_INTERFACE_DEFINED__

/* interface IGSFunctioNater */
/* [helpstring][unique][dual][object][uuid] */ 


EXTERN_C const IID IID_IGSFunctioNater;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD85-55E6-11d3-8365-006008BD5BC3")
    IGSFunctioNater : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Expression( 
            /* [in] */ BSTR strExpression) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Expression( 
            /* [retval][out] */ BSTR *pstrExpression) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExpressionLabel( 
            /* [in] */ BSTR strExpressionLabel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpressionLabel( 
            /* [retval][out] */ BSTR *pstrExpressionLabel) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResultsLabel( 
            /* [in] */ BSTR strResultsLabel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResultsLabel( 
            /* [retval][out] */ BSTR *pstrResultsLabel) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPropertySettings( 
            /* [in] */ VARIANT_BOOL allowPropertySettings) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPropertySettings( 
            /* [retval][out] */ VARIANT_BOOL *pAllowPropertySettings) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowControlVisibilitySettings( 
            /* [in] */ VARIANT_BOOL allowControlVisibilitySettings) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowControlVisibilitySettings( 
            /* [retval][out] */ VARIANT_BOOL *pAllowControlVisibilitySettings) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowVariables( 
            /* [in] */ VARIANT_BOOL showVariables) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowVariables( 
            /* [retval][out] */ VARIANT_BOOL *pShowVariables) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowControls( 
            /* [in] */ VARIANT_BOOL showControls) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowControls( 
            /* [retval][out] */ VARIANT_BOOL *pShowControls) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowStart( 
            /* [in] */ VARIANT_BOOL showStart) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowStart( 
            /* [retval][out] */ VARIANT_BOOL *pShowStart) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowPause( 
            /* [in] */ VARIANT_BOOL showPause) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowPause( 
            /* [retval][out] */ VARIANT_BOOL *pShowPause) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowResume( 
            /* [in] */ VARIANT_BOOL showResume) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowResume( 
            /* [retval][out] */ VARIANT_BOOL *pShowResume) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowStop( 
            /* [in] */ VARIANT_BOOL showStop) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowStop( 
            /* [retval][out] */ VARIANT_BOOL *pShowStop) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowResults( 
            /* [in] */ VARIANT_BOOL showResults) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowResults( 
            /* [retval][out] */ VARIANT_BOOL *pShowResults) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowExpression( 
            /* [in] */ VARIANT_BOOL showExpression) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowExpression( 
            /* [retval][out] */ VARIANT_BOOL *pShowExpression) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultMinValue( 
            /* [in] */ BSTR defaultMin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultMinValue( 
            /* [retval][out] */ BSTR *defaultMin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultMaxValue( 
            /* [in] */ BSTR defaultMax) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultMaxValue( 
            /* [retval][out] */ BSTR *defaultMax) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultStepCount( 
            /* [in] */ long defaultStepCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultStepCount( 
            /* [retval][out] */ long *defaultStepCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DefineIndependentVariable( 
            BSTR variableName,
            BSTR minValue,
            BSTR maxValue,
            long stepCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DefineSimpleVariable( 
            BSTR variableName,
            VARIANT strValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UndefineVariable( 
            BSTR variableName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Pause( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Enabled( 
            /* [in] */ VARIANT_BOOL vbool) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pbool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PersistTo( 
            BSTR strSaveTo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PersistFrom( 
            BSTR strRestoreFrom) = 0;
        
        virtual /* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE parseExpression( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EditProperties( void) = 0;
        
        virtual /* [id][propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_IPlot( 
            /* [in] */ void *pIPlot) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IPlot( 
            /* [retval][out] */ void **ppIPlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyFloor,
            /* external definition not present */ IGProperty *parentPropertyCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0000),
            /* [in] */ void *pArg) = 0;
        
        virtual /* [id][propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_OnChangeCallback( 
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0002),
            /* [in] */ void *pArg) = 0;
        
        virtual /* [id][propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_AnyControlVisible( 
            /* [retval][out] */ VARIANT_BOOL *pAnyVisible) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGSFunctioNaterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSFunctioNater * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSFunctioNater * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSFunctioNater * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSFunctioNater * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSFunctioNater * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSFunctioNater * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGSFunctioNater * This,
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
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expression )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strExpression);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expression )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrExpression);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpressionLabel )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strExpressionLabel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpressionLabel )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrExpressionLabel);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResultsLabel )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strResultsLabel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultsLabel )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrResultsLabel);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPropertySettings )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL allowPropertySettings);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPropertySettings )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAllowPropertySettings);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowControlVisibilitySettings )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL allowControlVisibilitySettings);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowControlVisibilitySettings )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAllowControlVisibilitySettings);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowVariables )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showVariables);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowVariables )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowVariables);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowControls )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showControls);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowControls )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowControls);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowStart )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showStart);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowStart )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowStart);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowPause )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showPause);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowPause )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowPause);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowResume )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showResume);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowResume )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowResume);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowStop )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showStop);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowStop )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowStop);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowResults )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showResults);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowResults )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowResults);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowExpression )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showExpression);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowExpression )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowExpression);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultMinValue )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR defaultMin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultMinValue )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *defaultMin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultMaxValue )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR defaultMax);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultMaxValue )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *defaultMax);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultStepCount )( 
            IGSFunctioNater * This,
            /* [in] */ long defaultStepCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultStepCount )( 
            IGSFunctioNater * This,
            /* [retval][out] */ long *defaultStepCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineIndependentVariable )( 
            IGSFunctioNater * This,
            BSTR variableName,
            BSTR minValue,
            BSTR maxValue,
            long stepCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineSimpleVariable )( 
            IGSFunctioNater * This,
            BSTR variableName,
            VARIANT strValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UndefineVariable )( 
            IGSFunctioNater * This,
            BSTR variableName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IGSFunctioNater * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IGSFunctioNater * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IGSFunctioNater * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IGSFunctioNater * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistTo )( 
            IGSFunctioNater * This,
            BSTR strSaveTo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistFrom )( 
            IGSFunctioNater * This,
            BSTR strRestoreFrom);
        
        /* [helpstring][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *parseExpression )( 
            IGSFunctioNater * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IGSFunctioNater * This);
        
        /* [id][propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_IPlot )( 
            IGSFunctioNater * This,
            /* [in] */ void *pIPlot);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IPlot )( 
            IGSFunctioNater * This,
            /* [retval][out] */ void **ppIPlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGSFunctioNater * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            /* external definition not present */ IOpenGLImplementation *pIOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyFloor,
            /* external definition not present */ IGProperty *parentPropertyCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0000),
            /* [in] */ void *pArg);
        
        /* [id][propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_OnChangeCallback )( 
            IGSFunctioNater * This,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0002),
            /* [in] */ void *pArg);
        
        /* [id][propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_AnyControlVisible )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAnyVisible);
        
        END_INTERFACE
    } IGSFunctioNaterVtbl;

    interface IGSFunctioNater
    {
        CONST_VTBL struct IGSFunctioNaterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSFunctioNater_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSFunctioNater_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSFunctioNater_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSFunctioNater_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGSFunctioNater_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGSFunctioNater_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGSFunctioNater_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGSFunctioNater_put_Expression(This,strExpression)	\
    ( (This)->lpVtbl -> put_Expression(This,strExpression) ) 

#define IGSFunctioNater_get_Expression(This,pstrExpression)	\
    ( (This)->lpVtbl -> get_Expression(This,pstrExpression) ) 

#define IGSFunctioNater_put_ExpressionLabel(This,strExpressionLabel)	\
    ( (This)->lpVtbl -> put_ExpressionLabel(This,strExpressionLabel) ) 

#define IGSFunctioNater_get_ExpressionLabel(This,pstrExpressionLabel)	\
    ( (This)->lpVtbl -> get_ExpressionLabel(This,pstrExpressionLabel) ) 

#define IGSFunctioNater_put_ResultsLabel(This,strResultsLabel)	\
    ( (This)->lpVtbl -> put_ResultsLabel(This,strResultsLabel) ) 

#define IGSFunctioNater_get_ResultsLabel(This,pstrResultsLabel)	\
    ( (This)->lpVtbl -> get_ResultsLabel(This,pstrResultsLabel) ) 

#define IGSFunctioNater_put_AllowPropertySettings(This,allowPropertySettings)	\
    ( (This)->lpVtbl -> put_AllowPropertySettings(This,allowPropertySettings) ) 

#define IGSFunctioNater_get_AllowPropertySettings(This,pAllowPropertySettings)	\
    ( (This)->lpVtbl -> get_AllowPropertySettings(This,pAllowPropertySettings) ) 

#define IGSFunctioNater_put_AllowControlVisibilitySettings(This,allowControlVisibilitySettings)	\
    ( (This)->lpVtbl -> put_AllowControlVisibilitySettings(This,allowControlVisibilitySettings) ) 

#define IGSFunctioNater_get_AllowControlVisibilitySettings(This,pAllowControlVisibilitySettings)	\
    ( (This)->lpVtbl -> get_AllowControlVisibilitySettings(This,pAllowControlVisibilitySettings) ) 

#define IGSFunctioNater_put_ShowVariables(This,showVariables)	\
    ( (This)->lpVtbl -> put_ShowVariables(This,showVariables) ) 

#define IGSFunctioNater_get_ShowVariables(This,pShowVariables)	\
    ( (This)->lpVtbl -> get_ShowVariables(This,pShowVariables) ) 

#define IGSFunctioNater_put_ShowControls(This,showControls)	\
    ( (This)->lpVtbl -> put_ShowControls(This,showControls) ) 

#define IGSFunctioNater_get_ShowControls(This,pShowControls)	\
    ( (This)->lpVtbl -> get_ShowControls(This,pShowControls) ) 

#define IGSFunctioNater_put_ShowStart(This,showStart)	\
    ( (This)->lpVtbl -> put_ShowStart(This,showStart) ) 

#define IGSFunctioNater_get_ShowStart(This,pShowStart)	\
    ( (This)->lpVtbl -> get_ShowStart(This,pShowStart) ) 

#define IGSFunctioNater_put_ShowPause(This,showPause)	\
    ( (This)->lpVtbl -> put_ShowPause(This,showPause) ) 

#define IGSFunctioNater_get_ShowPause(This,pShowPause)	\
    ( (This)->lpVtbl -> get_ShowPause(This,pShowPause) ) 

#define IGSFunctioNater_put_ShowResume(This,showResume)	\
    ( (This)->lpVtbl -> put_ShowResume(This,showResume) ) 

#define IGSFunctioNater_get_ShowResume(This,pShowResume)	\
    ( (This)->lpVtbl -> get_ShowResume(This,pShowResume) ) 

#define IGSFunctioNater_put_ShowStop(This,showStop)	\
    ( (This)->lpVtbl -> put_ShowStop(This,showStop) ) 

#define IGSFunctioNater_get_ShowStop(This,pShowStop)	\
    ( (This)->lpVtbl -> get_ShowStop(This,pShowStop) ) 

#define IGSFunctioNater_put_ShowResults(This,showResults)	\
    ( (This)->lpVtbl -> put_ShowResults(This,showResults) ) 

#define IGSFunctioNater_get_ShowResults(This,pShowResults)	\
    ( (This)->lpVtbl -> get_ShowResults(This,pShowResults) ) 

#define IGSFunctioNater_put_ShowExpression(This,showExpression)	\
    ( (This)->lpVtbl -> put_ShowExpression(This,showExpression) ) 

#define IGSFunctioNater_get_ShowExpression(This,pShowExpression)	\
    ( (This)->lpVtbl -> get_ShowExpression(This,pShowExpression) ) 

#define IGSFunctioNater_put_DefaultMinValue(This,defaultMin)	\
    ( (This)->lpVtbl -> put_DefaultMinValue(This,defaultMin) ) 

#define IGSFunctioNater_get_DefaultMinValue(This,defaultMin)	\
    ( (This)->lpVtbl -> get_DefaultMinValue(This,defaultMin) ) 

#define IGSFunctioNater_put_DefaultMaxValue(This,defaultMax)	\
    ( (This)->lpVtbl -> put_DefaultMaxValue(This,defaultMax) ) 

#define IGSFunctioNater_get_DefaultMaxValue(This,defaultMax)	\
    ( (This)->lpVtbl -> get_DefaultMaxValue(This,defaultMax) ) 

#define IGSFunctioNater_put_DefaultStepCount(This,defaultStepCount)	\
    ( (This)->lpVtbl -> put_DefaultStepCount(This,defaultStepCount) ) 

#define IGSFunctioNater_get_DefaultStepCount(This,defaultStepCount)	\
    ( (This)->lpVtbl -> get_DefaultStepCount(This,defaultStepCount) ) 

#define IGSFunctioNater_DefineIndependentVariable(This,variableName,minValue,maxValue,stepCount)	\
    ( (This)->lpVtbl -> DefineIndependentVariable(This,variableName,minValue,maxValue,stepCount) ) 

#define IGSFunctioNater_DefineSimpleVariable(This,variableName,strValue)	\
    ( (This)->lpVtbl -> DefineSimpleVariable(This,variableName,strValue) ) 

#define IGSFunctioNater_UndefineVariable(This,variableName)	\
    ( (This)->lpVtbl -> UndefineVariable(This,variableName) ) 

#define IGSFunctioNater_Start(This)	\
    ( (This)->lpVtbl -> Start(This) ) 

#define IGSFunctioNater_Pause(This)	\
    ( (This)->lpVtbl -> Pause(This) ) 

#define IGSFunctioNater_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IGSFunctioNater_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IGSFunctioNater_put_Enabled(This,vbool)	\
    ( (This)->lpVtbl -> put_Enabled(This,vbool) ) 

#define IGSFunctioNater_get_Enabled(This,pbool)	\
    ( (This)->lpVtbl -> get_Enabled(This,pbool) ) 

#define IGSFunctioNater_PersistTo(This,strSaveTo)	\
    ( (This)->lpVtbl -> PersistTo(This,strSaveTo) ) 

#define IGSFunctioNater_PersistFrom(This,strRestoreFrom)	\
    ( (This)->lpVtbl -> PersistFrom(This,strRestoreFrom) ) 

#define IGSFunctioNater_parseExpression(This)	\
    ( (This)->lpVtbl -> parseExpression(This) ) 

#define IGSFunctioNater_EditProperties(This)	\
    ( (This)->lpVtbl -> EditProperties(This) ) 

#define IGSFunctioNater_put_IPlot(This,pIPlot)	\
    ( (This)->lpVtbl -> put_IPlot(This,pIPlot) ) 

#define IGSFunctioNater_get_IPlot(This,ppIPlot)	\
    ( (This)->lpVtbl -> get_IPlot(This,ppIPlot) ) 

#define IGSFunctioNater_Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyFloor,parentPropertyCeiling,pCallback,pArg)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyFloor,parentPropertyCeiling,pCallback,pArg) ) 

#define IGSFunctioNater_put_OnChangeCallback(This,pCallback,pArg)	\
    ( (This)->lpVtbl -> put_OnChangeCallback(This,pCallback,pArg) ) 

#define IGSFunctioNater_get_AnyControlVisible(This,pAnyVisible)	\
    ( (This)->lpVtbl -> get_AnyControlVisible(This,pAnyVisible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGSFunctioNater_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GSystemFunctioNater;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD86-55E6-11d3-8365-006008BD5BC3")
GSystemFunctioNater;
#endif
#endif /* __FunctioNater_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

