

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Function.odl:
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


#ifndef __Function_i_h__
#define __Function_i_h__

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
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSFunctioNaterEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSFunctioNaterEvents * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSFunctioNaterEvents * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSFunctioNaterEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
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
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IDataSet( 
            /* [in] */ void *pIDataSet) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IDataSet( 
            /* [retval][out] */ void **ppIDataSet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pIOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyXFloor,
            /* external definition not present */ IGProperty *parentPropertyXCeiling,
            /* external definition not present */ IGProperty *parentPropertyYFloor,
            /* external definition not present */ IGProperty *parentPropertyYCeiling,
            /* external definition not present */ IGProperty *parentPropertyZFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0000,
                ULONG_PTR __MIDL__IGSFunctioNater0001),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie) = 0;
        
        virtual /* [id][propput][helpstring] */ HRESULT STDMETHODCALLTYPE put_OnChangeCallback( 
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0003,
                ULONG_PTR __MIDL__IGSFunctioNater0004),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie) = 0;
        
        virtual /* [id][propget][helpstring] */ HRESULT STDMETHODCALLTYPE get_AnyControlVisible( 
            /* [retval][out] */ VARIANT_BOOL *pAnyVisible) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IGSFunctioNater0006) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseGSGraphicServices( 
            void *__MIDL__IGSFunctioNater0007) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGSFunctioNaterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSFunctioNater * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSFunctioNater * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSFunctioNater * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSFunctioNater * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
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
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_Expression)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expression )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strExpression);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_Expression)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expression )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrExpression);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ExpressionLabel)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExpressionLabel )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strExpressionLabel);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ExpressionLabel)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpressionLabel )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrExpressionLabel);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ResultsLabel)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResultsLabel )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR strResultsLabel);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ResultsLabel)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResultsLabel )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *pstrResultsLabel);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_AllowPropertySettings)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPropertySettings )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL allowPropertySettings);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_AllowPropertySettings)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPropertySettings )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAllowPropertySettings);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_AllowControlVisibilitySettings)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowControlVisibilitySettings )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL allowControlVisibilitySettings);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_AllowControlVisibilitySettings)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowControlVisibilitySettings )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAllowControlVisibilitySettings);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowVariables)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowVariables )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showVariables);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowVariables)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowVariables )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowVariables);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowControls)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowControls )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showControls);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowControls)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowControls )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowControls);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowStart)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowStart )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showStart);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowStart)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowStart )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowStart);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowPause)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowPause )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showPause);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowPause)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowPause )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowPause);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowResume)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowResume )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showResume);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowResume)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowResume )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowResume);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowStop)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowStop )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showStop);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowStop)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowStop )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowStop);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowResults)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowResults )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showResults);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowResults)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowResults )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowResults);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_ShowExpression)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowExpression )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL showExpression);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_ShowExpression)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowExpression )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pShowExpression);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_DefaultMinValue)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultMinValue )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR defaultMin);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_DefaultMinValue)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultMinValue )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *defaultMin);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_DefaultMaxValue)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultMaxValue )( 
            IGSFunctioNater * This,
            /* [in] */ BSTR defaultMax);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_DefaultMaxValue)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultMaxValue )( 
            IGSFunctioNater * This,
            /* [retval][out] */ BSTR *defaultMax);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_DefaultStepCount)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultStepCount )( 
            IGSFunctioNater * This,
            /* [in] */ long defaultStepCount);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_DefaultStepCount)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultStepCount )( 
            IGSFunctioNater * This,
            /* [retval][out] */ long *defaultStepCount);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, DefineIndependentVariable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineIndependentVariable )( 
            IGSFunctioNater * This,
            BSTR variableName,
            BSTR minValue,
            BSTR maxValue,
            long stepCount);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, DefineSimpleVariable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineSimpleVariable )( 
            IGSFunctioNater * This,
            BSTR variableName,
            VARIANT strValue);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, UndefineVariable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UndefineVariable )( 
            IGSFunctioNater * This,
            BSTR variableName);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, Start)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, Pause)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Pause )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, Resume)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Resume )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, Stop)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_Enabled)
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Enabled )( 
            IGSFunctioNater * This,
            /* [in] */ VARIANT_BOOL vbool);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_Enabled)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pbool);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, PersistTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistTo )( 
            IGSFunctioNater * This,
            BSTR strSaveTo);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, PersistFrom)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PersistFrom )( 
            IGSFunctioNater * This,
            BSTR strRestoreFrom);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, parseExpression)
        /* [helpstring][hidden][id] */ HRESULT ( STDMETHODCALLTYPE *parseExpression )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, EditProperties)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EditProperties )( 
            IGSFunctioNater * This);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_IPlot)
        /* [id][propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_IPlot )( 
            IGSFunctioNater * This,
            /* [in] */ void *pIPlot);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_IPlot)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IPlot )( 
            IGSFunctioNater * This,
            /* [retval][out] */ void **ppIPlot);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_IDataSet)
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IDataSet )( 
            IGSFunctioNater * This,
            /* [in] */ void *pIDataSet);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_IDataSet)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IDataSet )( 
            IGSFunctioNater * This,
            /* [retval][out] */ void **ppIDataSet);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, Initialize)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGSFunctioNater * This,
            /* external definition not present */ IDataSet *pIDataSet_Domain,
            void *pIOpenGLImplementation,
            /* external definition not present */ IGProperty *pIPropertyLineColor,
            /* external definition not present */ IGProperty *pIPropertyLineWeight,
            /* external definition not present */ IGProperty *parentPropertyPlotView,
            /* external definition not present */ IGProperty *parentPropertyDefault2DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyDefault3DPlotSubType,
            /* external definition not present */ IGProperty *parentPropertyBackgroundColor,
            /* external definition not present */ IGProperty *parentPropertyXFloor,
            /* external definition not present */ IGProperty *parentPropertyXCeiling,
            /* external definition not present */ IGProperty *parentPropertyYFloor,
            /* external definition not present */ IGProperty *parentPropertyYCeiling,
            /* external definition not present */ IGProperty *parentPropertyZFloor,
            /* external definition not present */ IGProperty *parentPropertyZCeiling,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0000,
                ULONG_PTR __MIDL__IGSFunctioNater0001),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, put_OnChangeCallback)
        /* [id][propput][helpstring] */ HRESULT ( STDMETHODCALLTYPE *put_OnChangeCallback )( 
            IGSFunctioNater * This,
            /* [in] */ void ( STDMETHODCALLTYPE *pCallback )( 
                void *__MIDL__IGSFunctioNater0003,
                ULONG_PTR __MIDL__IGSFunctioNater0004),
            /* [in] */ void *pArg,
            /* [in] */ ULONG_PTR callbackCookie);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, get_AnyControlVisible)
        /* [id][propget][helpstring] */ HRESULT ( STDMETHODCALLTYPE *get_AnyControlVisible )( 
            IGSFunctioNater * This,
            /* [retval][out] */ VARIANT_BOOL *pAnyVisible);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, AdviseGSystemStatusBar)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IGSFunctioNater * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IGSFunctioNater0006);
        
        DECLSPEC_XFGVIRT(IGSFunctioNater, AdviseGSGraphicServices)
        HRESULT ( STDMETHODCALLTYPE *AdviseGSGraphicServices )( 
            IGSFunctioNater * This,
            void *__MIDL__IGSFunctioNater0007);
        
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

#define IGSFunctioNater_put_IDataSet(This,pIDataSet)	\
    ( (This)->lpVtbl -> put_IDataSet(This,pIDataSet) ) 

#define IGSFunctioNater_get_IDataSet(This,ppIDataSet)	\
    ( (This)->lpVtbl -> get_IDataSet(This,ppIDataSet) ) 

#define IGSFunctioNater_Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyZFloor,parentPropertyZCeiling,pCallback,pArg,callbackCookie)	\
    ( (This)->lpVtbl -> Initialize(This,pIDataSet_Domain,pIOpenGLImplementation,pIPropertyLineColor,pIPropertyLineWeight,parentPropertyPlotView,parentPropertyDefault2DPlotSubType,parentPropertyDefault3DPlotSubType,parentPropertyBackgroundColor,parentPropertyXFloor,parentPropertyXCeiling,parentPropertyYFloor,parentPropertyYCeiling,parentPropertyZFloor,parentPropertyZCeiling,pCallback,pArg,callbackCookie) ) 

#define IGSFunctioNater_put_OnChangeCallback(This,pCallback,pArg,callbackCookie)	\
    ( (This)->lpVtbl -> put_OnChangeCallback(This,pCallback,pArg,callbackCookie) ) 

#define IGSFunctioNater_get_AnyControlVisible(This,pAnyVisible)	\
    ( (This)->lpVtbl -> get_AnyControlVisible(This,pAnyVisible) ) 

#define IGSFunctioNater_AdviseGSystemStatusBar(This,__MIDL__IGSFunctioNater0006)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IGSFunctioNater0006) ) 

#define IGSFunctioNater_AdviseGSGraphicServices(This,__MIDL__IGSFunctioNater0007)	\
    ( (This)->lpVtbl -> AdviseGSGraphicServices(This,__MIDL__IGSFunctioNater0007) ) 

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


