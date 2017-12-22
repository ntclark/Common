

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Dec 20 10:16:52 2017
 */
/* Compiler settings for GraphicControl.odl:
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


#ifndef __GraphicControl_i_h__
#define __GraphicControl_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGSGraphicEvents_FWD_DEFINED__
#define __IGSGraphicEvents_FWD_DEFINED__
typedef interface IGSGraphicEvents IGSGraphicEvents;

#endif 	/* __IGSGraphicEvents_FWD_DEFINED__ */


#ifndef __IGSGraphic_FWD_DEFINED__
#define __IGSGraphic_FWD_DEFINED__
typedef interface IGSGraphic IGSGraphic;

#endif 	/* __IGSGraphic_FWD_DEFINED__ */


#ifndef __GSystemGraphic_FWD_DEFINED__
#define __GSystemGraphic_FWD_DEFINED__

#ifdef __cplusplus
typedef class GSystemGraphic GSystemGraphic;
#else
typedef struct GSystemGraphic GSystemGraphic;
#endif /* __cplusplus */

#endif 	/* __GSystemGraphic_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Graphic_LIBRARY_DEFINED__
#define __Graphic_LIBRARY_DEFINED__

/* library Graphic */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


enum GraphicPropertiesID
    {
        gcPropName	= 0,
        gcPropSize	= 1,
        gcPropPosition	= 2,
        gcPropPlotView	= 3,
        gcPropPlotType	= 4,
        gcPropViewPhi	= 5,
        gcPropViewTheta	= 6,
        gcPropViewSpin	= 7,
        gcPropLightOn	= 11,
        gcPropLightPosition	= 12,
        gcPropBackgroundColor	= 21,
        gcPropLeftMargin	= 23,
        gcPropTopMargin	= 24,
        gcPropRightMargin	= 25,
        gcPropBottomMargin	= 26,
        gcPropMargins	= 27,
        gcPropFloor	= 31,
        gcPropCeiling	= 32,
        gcPropAxis	= 50,
        gcPropPlot	= 51,
        gcPropFunction	= 52,
        gcPropText	= 53,
        gcPropShowFunctions	= 60,
        gcPropAutoPlotViewDetection	= 71,
        gcPropPickBoxSize	= 72,
        gcPropUseStatusBar	= 73,
        gcPropUseGraphicsCursor	= 74,
        gcPropDenyUserPropertySettings	= 75,
        gcPropAllowUserShowFunctions	= 76
    } ;

enum GraphicMethodsID
    {
        gcMethodClearAllData	= 100,
        gcMethodPrepareForData	= 101,
        gcMethodTakeDataString	= 102,
        gcMethodTakeDataArray	= 103,
        gcMethodTakeFile	= 104,
        gcMethodTakeDataSet	= 105,
        gcMethodFinishedWithData	= 106,
        gcMethodPrepareForDataSets	= 107,
        gcMethodDraw	= 108,
        gcMethodSetProperties	= 120,
        gcMethodAddAxis	= 121,
        gcMethodAddText	= 122,
        gcMethodAddTextInteractive	= 123,
        gcMethodRemoveText	= 124,
        gcMethodRemoveAllText	= 125,
        gcMethodAddFunction	= 126,
        gcMethodAddFunctionInteractive	= 127,
        gcMethodRemoveFunction	= 128,
        gcMethodRemoveAllFunctions	= 129,
        gcMethodAddPlot	= 130,
        gcMethodRemovePlot	= 131,
        gcMethodRemoveAllPlots	= 132,
        gcMethodSynchronise	= 133
    } ;

EXTERN_C const IID LIBID_Graphic;

#ifndef __IGSGraphicEvents_DISPINTERFACE_DEFINED__
#define __IGSGraphicEvents_DISPINTERFACE_DEFINED__

/* dispinterface IGSGraphicEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IGSGraphicEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8CAEFD71-55E6-11d3-8365-006008BD5BC3")
    IGSGraphicEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IGSGraphicEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSGraphicEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSGraphicEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSGraphicEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSGraphicEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSGraphicEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSGraphicEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGSGraphicEvents * This,
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
    } IGSGraphicEventsVtbl;

    interface IGSGraphicEvents
    {
        CONST_VTBL struct IGSGraphicEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSGraphicEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSGraphicEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSGraphicEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSGraphicEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGSGraphicEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGSGraphicEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGSGraphicEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IGSGraphicEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IGSGraphic_INTERFACE_DEFINED__
#define __IGSGraphic_INTERFACE_DEFINED__

/* interface IGSGraphic */
/* [object][unique][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IGSGraphic;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD72-55E6-11d3-8365-006008BD5BC3")
    IGSGraphic : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ long cx,
            /* [in] */ long cy) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ long x,
            /* [in] */ long y) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlotView( 
            /* [in] */ enum PlotViews plotView) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlotView( 
            /* [retval][out] */ enum PlotViews *plotView) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlotType( 
            /* [in] */ enum PlotTypes plotType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlotType( 
            /* [retval][out] */ enum PlotTypes *plotType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Floor( 
            /* [in] */ double floorZValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Floor( 
            /* [retval][out] */ double *pFloorZValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Ceiling( 
            /* [in] */ double ceilingZValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ceiling( 
            /* [retval][out] */ double *pCeilingZValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ViewPhi( 
            /* [in] */ float phiAngle) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ViewPhi( 
            /* [retval][out] */ float *pPhiAngle) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ViewTheta( 
            /* [in] */ float thetaAngle) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ViewTheta( 
            /* [retval][out] */ float *pThetaAngle) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ViewSpin( 
            /* [in] */ float spinAngle) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ViewSpin( 
            /* [retval][out] */ float *pSpinAngle) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightOn( 
            /* [in] */ long lightNumber,
            /* [in] */ VARIANT_BOOL setIsEnabled) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightOn( 
            /* [in] */ long lightNumber,
            /* [retval][out] */ VARIANT_BOOL *isEnabled) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LightPosition( 
            /* [in] */ long lightNumber,
            /* [in] */ VARIANT *__MIDL__IGSGraphic0000) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LightPosition( 
            /* [in] */ long lightNumber,
            /* [retval][out] */ VARIANT *__MIDL__IGSGraphic0001) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
            /* [in] */ long colorValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
            /* [retval][out] */ long *pColorValue) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LeftMargin( 
            /* [in] */ long leftMargin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeftMargin( 
            /* [retval][out] */ long *pLeftMargin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TopMargin( 
            /* [in] */ long topMargin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TopMargin( 
            /* [retval][out] */ long *pTopMargin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RightMargin( 
            /* [in] */ long rightMargin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RightMargin( 
            /* [retval][out] */ long *pRightMargin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BottomMargin( 
            /* [in] */ long bottomMargin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BottomMargin( 
            /* [retval][out] */ long *pBottomMargin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Margins( 
            /* [in] */ long leftMargin,
            /* [in] */ long topMargin,
            /* [in] */ long rightMargin,
            /* [in] */ long bottomMargin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Axis( 
            /* [in] */ BSTR axisType,
            /* [retval][out] */ IDispatch **axisObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Plot( 
            /* [in] */ long plotNumber,
            /* [retval][out] */ IDispatch **plotObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Function( 
            /* [in] */ BSTR functionExpression,
            /* [retval][out] */ IDispatch **functionObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [in] */ BSTR text,
            /* [retval][out] */ IDispatch **textObject) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowFunctions( 
            /* [in] */ VARIANT_BOOL setShowing) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowFunctions( 
            /* [retval][out] */ VARIANT_BOOL *pShowing) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowUserSetFunctionVisibility( 
            /* [in] */ VARIANT_BOOL doAllow) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AutoPlotViewDetection( 
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0002) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoPlotViewDetection( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0003) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PickBoxSize( 
            /* [in] */ long newSize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PickBoxSize( 
            /* [retval][out] */ long *pGetSize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseStatusBar( 
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0004) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseStatusBar( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0005) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGraphicsCursor( 
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0006) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGraphicsCursor( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0007) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DenyUserPropertySettings( 
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0008) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DenyUserPropertySettings( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0009) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAllData( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrepareForData( 
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TakeDataString( 
            /* [in] */ BSTR stringOfNumbers,
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TakeDataArray( 
            /* [in] */ SAFEARRAY * *pArray,
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TakeFile( 
            /* [in] */ BSTR fileName,
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TakeDataSet( 
            /* [in] */ long ds,
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FinishedWithData( 
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrepareForDataSets( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ long plotNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAxis( 
            /* [in] */ char type,
            /* [in] */ IDispatch *axisObject) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddText( 
            /* [in] */ BSTR bstrText,
            /* [retval][out] */ IDispatch **pText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddTextInteractive( 
            /* [defaultvalue][optional][retval][out] */ IDispatch **pText = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveText( 
            /* [in] */ IDispatch *pText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllText( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFunction( 
            /* [in] */ BSTR expression,
            /* [defaultvalue][optional][retval][out] */ IDispatch **pFunction = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFunctionInteractive( 
            /* [defaultvalue][optional][retval][out] */ IDispatch **pFunction = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFunction( 
            /* [in] */ IDispatch *pFunction) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllFunctions( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPlot( 
            /* [in] */ long id,
            /* [retval][out] */ IDispatch **pPlot) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePlot( 
            /* [in] */ long idNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllPlots( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Synchronise( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGSGraphicVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGSGraphic * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGSGraphic * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGSGraphic * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGSGraphic * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGSGraphic * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGSGraphic * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGSGraphic * This,
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
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IGSGraphic * This,
            /* [in] */ long cx,
            /* [in] */ long cy);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            IGSGraphic * This,
            /* [in] */ long x,
            /* [in] */ long y);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotView )( 
            IGSGraphic * This,
            /* [in] */ enum PlotViews plotView);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotView )( 
            IGSGraphic * This,
            /* [retval][out] */ enum PlotViews *plotView);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlotType )( 
            IGSGraphic * This,
            /* [in] */ enum PlotTypes plotType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlotType )( 
            IGSGraphic * This,
            /* [retval][out] */ enum PlotTypes *plotType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Floor )( 
            IGSGraphic * This,
            /* [in] */ double floorZValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Floor )( 
            IGSGraphic * This,
            /* [retval][out] */ double *pFloorZValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ceiling )( 
            IGSGraphic * This,
            /* [in] */ double ceilingZValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ceiling )( 
            IGSGraphic * This,
            /* [retval][out] */ double *pCeilingZValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewPhi )( 
            IGSGraphic * This,
            /* [in] */ float phiAngle);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewPhi )( 
            IGSGraphic * This,
            /* [retval][out] */ float *pPhiAngle);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewTheta )( 
            IGSGraphic * This,
            /* [in] */ float thetaAngle);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewTheta )( 
            IGSGraphic * This,
            /* [retval][out] */ float *pThetaAngle);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewSpin )( 
            IGSGraphic * This,
            /* [in] */ float spinAngle);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewSpin )( 
            IGSGraphic * This,
            /* [retval][out] */ float *pSpinAngle);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightOn )( 
            IGSGraphic * This,
            /* [in] */ long lightNumber,
            /* [in] */ VARIANT_BOOL setIsEnabled);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightOn )( 
            IGSGraphic * This,
            /* [in] */ long lightNumber,
            /* [retval][out] */ VARIANT_BOOL *isEnabled);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LightPosition )( 
            IGSGraphic * This,
            /* [in] */ long lightNumber,
            /* [in] */ VARIANT *__MIDL__IGSGraphic0000);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LightPosition )( 
            IGSGraphic * This,
            /* [in] */ long lightNumber,
            /* [retval][out] */ VARIANT *__MIDL__IGSGraphic0001);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            IGSGraphic * This,
            /* [in] */ long colorValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pColorValue);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LeftMargin )( 
            IGSGraphic * This,
            /* [in] */ long leftMargin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LeftMargin )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pLeftMargin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TopMargin )( 
            IGSGraphic * This,
            /* [in] */ long topMargin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TopMargin )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pTopMargin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RightMargin )( 
            IGSGraphic * This,
            /* [in] */ long rightMargin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RightMargin )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pRightMargin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BottomMargin )( 
            IGSGraphic * This,
            /* [in] */ long bottomMargin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BottomMargin )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pBottomMargin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Margins )( 
            IGSGraphic * This,
            /* [in] */ long leftMargin,
            /* [in] */ long topMargin,
            /* [in] */ long rightMargin,
            /* [in] */ long bottomMargin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Axis )( 
            IGSGraphic * This,
            /* [in] */ BSTR axisType,
            /* [retval][out] */ IDispatch **axisObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Plot )( 
            IGSGraphic * This,
            /* [in] */ long plotNumber,
            /* [retval][out] */ IDispatch **plotObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Function )( 
            IGSGraphic * This,
            /* [in] */ BSTR functionExpression,
            /* [retval][out] */ IDispatch **functionObject);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IGSGraphic * This,
            /* [in] */ BSTR text,
            /* [retval][out] */ IDispatch **textObject);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowFunctions )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL setShowing);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowFunctions )( 
            IGSGraphic * This,
            /* [retval][out] */ VARIANT_BOOL *pShowing);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowUserSetFunctionVisibility )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL doAllow);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoPlotViewDetection )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0002);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoPlotViewDetection )( 
            IGSGraphic * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0003);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PickBoxSize )( 
            IGSGraphic * This,
            /* [in] */ long newSize);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PickBoxSize )( 
            IGSGraphic * This,
            /* [retval][out] */ long *pGetSize);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseStatusBar )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0004);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseStatusBar )( 
            IGSGraphic * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0005);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGraphicsCursor )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0006);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGraphicsCursor )( 
            IGSGraphic * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0007);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DenyUserPropertySettings )( 
            IGSGraphic * This,
            /* [in] */ VARIANT_BOOL __MIDL__IGSGraphic0008);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DenyUserPropertySettings )( 
            IGSGraphic * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IGSGraphic0009);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClearAllData )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrepareForData )( 
            IGSGraphic * This,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TakeDataString )( 
            IGSGraphic * This,
            /* [in] */ BSTR stringOfNumbers,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TakeDataArray )( 
            IGSGraphic * This,
            /* [in] */ SAFEARRAY * *pArray,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TakeFile )( 
            IGSGraphic * This,
            /* [in] */ BSTR fileName,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TakeDataSet )( 
            IGSGraphic * This,
            /* [in] */ long ds,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FinishedWithData )( 
            IGSGraphic * This,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrepareForDataSets )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IGSGraphic * This,
            /* [in] */ long plotNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAxis )( 
            IGSGraphic * This,
            /* [in] */ char type,
            /* [in] */ IDispatch *axisObject);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddText )( 
            IGSGraphic * This,
            /* [in] */ BSTR bstrText,
            /* [retval][out] */ IDispatch **pText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddTextInteractive )( 
            IGSGraphic * This,
            /* [defaultvalue][optional][retval][out] */ IDispatch **pText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveText )( 
            IGSGraphic * This,
            /* [in] */ IDispatch *pText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllText )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddFunction )( 
            IGSGraphic * This,
            /* [in] */ BSTR expression,
            /* [defaultvalue][optional][retval][out] */ IDispatch **pFunction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddFunctionInteractive )( 
            IGSGraphic * This,
            /* [defaultvalue][optional][retval][out] */ IDispatch **pFunction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFunction )( 
            IGSGraphic * This,
            /* [in] */ IDispatch *pFunction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllFunctions )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPlot )( 
            IGSGraphic * This,
            /* [in] */ long id,
            /* [retval][out] */ IDispatch **pPlot);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemovePlot )( 
            IGSGraphic * This,
            /* [in] */ long idNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllPlots )( 
            IGSGraphic * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Synchronise )( 
            IGSGraphic * This);
        
        END_INTERFACE
    } IGSGraphicVtbl;

    interface IGSGraphic
    {
        CONST_VTBL struct IGSGraphicVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGSGraphic_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGSGraphic_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGSGraphic_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGSGraphic_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGSGraphic_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGSGraphic_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGSGraphic_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGSGraphic_put_Size(This,cx,cy)	\
    ( (This)->lpVtbl -> put_Size(This,cx,cy) ) 

#define IGSGraphic_put_Position(This,x,y)	\
    ( (This)->lpVtbl -> put_Position(This,x,y) ) 

#define IGSGraphic_put_PlotView(This,plotView)	\
    ( (This)->lpVtbl -> put_PlotView(This,plotView) ) 

#define IGSGraphic_get_PlotView(This,plotView)	\
    ( (This)->lpVtbl -> get_PlotView(This,plotView) ) 

#define IGSGraphic_put_PlotType(This,plotType)	\
    ( (This)->lpVtbl -> put_PlotType(This,plotType) ) 

#define IGSGraphic_get_PlotType(This,plotType)	\
    ( (This)->lpVtbl -> get_PlotType(This,plotType) ) 

#define IGSGraphic_put_Floor(This,floorZValue)	\
    ( (This)->lpVtbl -> put_Floor(This,floorZValue) ) 

#define IGSGraphic_get_Floor(This,pFloorZValue)	\
    ( (This)->lpVtbl -> get_Floor(This,pFloorZValue) ) 

#define IGSGraphic_put_Ceiling(This,ceilingZValue)	\
    ( (This)->lpVtbl -> put_Ceiling(This,ceilingZValue) ) 

#define IGSGraphic_get_Ceiling(This,pCeilingZValue)	\
    ( (This)->lpVtbl -> get_Ceiling(This,pCeilingZValue) ) 

#define IGSGraphic_put_ViewPhi(This,phiAngle)	\
    ( (This)->lpVtbl -> put_ViewPhi(This,phiAngle) ) 

#define IGSGraphic_get_ViewPhi(This,pPhiAngle)	\
    ( (This)->lpVtbl -> get_ViewPhi(This,pPhiAngle) ) 

#define IGSGraphic_put_ViewTheta(This,thetaAngle)	\
    ( (This)->lpVtbl -> put_ViewTheta(This,thetaAngle) ) 

#define IGSGraphic_get_ViewTheta(This,pThetaAngle)	\
    ( (This)->lpVtbl -> get_ViewTheta(This,pThetaAngle) ) 

#define IGSGraphic_put_ViewSpin(This,spinAngle)	\
    ( (This)->lpVtbl -> put_ViewSpin(This,spinAngle) ) 

#define IGSGraphic_get_ViewSpin(This,pSpinAngle)	\
    ( (This)->lpVtbl -> get_ViewSpin(This,pSpinAngle) ) 

#define IGSGraphic_put_LightOn(This,lightNumber,setIsEnabled)	\
    ( (This)->lpVtbl -> put_LightOn(This,lightNumber,setIsEnabled) ) 

#define IGSGraphic_get_LightOn(This,lightNumber,isEnabled)	\
    ( (This)->lpVtbl -> get_LightOn(This,lightNumber,isEnabled) ) 

#define IGSGraphic_put_LightPosition(This,lightNumber,__MIDL__IGSGraphic0000)	\
    ( (This)->lpVtbl -> put_LightPosition(This,lightNumber,__MIDL__IGSGraphic0000) ) 

#define IGSGraphic_get_LightPosition(This,lightNumber,__MIDL__IGSGraphic0001)	\
    ( (This)->lpVtbl -> get_LightPosition(This,lightNumber,__MIDL__IGSGraphic0001) ) 

#define IGSGraphic_put_BackgroundColor(This,colorValue)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,colorValue) ) 

#define IGSGraphic_get_BackgroundColor(This,pColorValue)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,pColorValue) ) 

#define IGSGraphic_put_LeftMargin(This,leftMargin)	\
    ( (This)->lpVtbl -> put_LeftMargin(This,leftMargin) ) 

#define IGSGraphic_get_LeftMargin(This,pLeftMargin)	\
    ( (This)->lpVtbl -> get_LeftMargin(This,pLeftMargin) ) 

#define IGSGraphic_put_TopMargin(This,topMargin)	\
    ( (This)->lpVtbl -> put_TopMargin(This,topMargin) ) 

#define IGSGraphic_get_TopMargin(This,pTopMargin)	\
    ( (This)->lpVtbl -> get_TopMargin(This,pTopMargin) ) 

#define IGSGraphic_put_RightMargin(This,rightMargin)	\
    ( (This)->lpVtbl -> put_RightMargin(This,rightMargin) ) 

#define IGSGraphic_get_RightMargin(This,pRightMargin)	\
    ( (This)->lpVtbl -> get_RightMargin(This,pRightMargin) ) 

#define IGSGraphic_put_BottomMargin(This,bottomMargin)	\
    ( (This)->lpVtbl -> put_BottomMargin(This,bottomMargin) ) 

#define IGSGraphic_get_BottomMargin(This,pBottomMargin)	\
    ( (This)->lpVtbl -> get_BottomMargin(This,pBottomMargin) ) 

#define IGSGraphic_put_Margins(This,leftMargin,topMargin,rightMargin,bottomMargin)	\
    ( (This)->lpVtbl -> put_Margins(This,leftMargin,topMargin,rightMargin,bottomMargin) ) 

#define IGSGraphic_get_Axis(This,axisType,axisObject)	\
    ( (This)->lpVtbl -> get_Axis(This,axisType,axisObject) ) 

#define IGSGraphic_get_Plot(This,plotNumber,plotObject)	\
    ( (This)->lpVtbl -> get_Plot(This,plotNumber,plotObject) ) 

#define IGSGraphic_get_Function(This,functionExpression,functionObject)	\
    ( (This)->lpVtbl -> get_Function(This,functionExpression,functionObject) ) 

#define IGSGraphic_get_Text(This,text,textObject)	\
    ( (This)->lpVtbl -> get_Text(This,text,textObject) ) 

#define IGSGraphic_put_ShowFunctions(This,setShowing)	\
    ( (This)->lpVtbl -> put_ShowFunctions(This,setShowing) ) 

#define IGSGraphic_get_ShowFunctions(This,pShowing)	\
    ( (This)->lpVtbl -> get_ShowFunctions(This,pShowing) ) 

#define IGSGraphic_put_AllowUserSetFunctionVisibility(This,doAllow)	\
    ( (This)->lpVtbl -> put_AllowUserSetFunctionVisibility(This,doAllow) ) 

#define IGSGraphic_put_AutoPlotViewDetection(This,__MIDL__IGSGraphic0002)	\
    ( (This)->lpVtbl -> put_AutoPlotViewDetection(This,__MIDL__IGSGraphic0002) ) 

#define IGSGraphic_get_AutoPlotViewDetection(This,__MIDL__IGSGraphic0003)	\
    ( (This)->lpVtbl -> get_AutoPlotViewDetection(This,__MIDL__IGSGraphic0003) ) 

#define IGSGraphic_put_PickBoxSize(This,newSize)	\
    ( (This)->lpVtbl -> put_PickBoxSize(This,newSize) ) 

#define IGSGraphic_get_PickBoxSize(This,pGetSize)	\
    ( (This)->lpVtbl -> get_PickBoxSize(This,pGetSize) ) 

#define IGSGraphic_put_UseStatusBar(This,__MIDL__IGSGraphic0004)	\
    ( (This)->lpVtbl -> put_UseStatusBar(This,__MIDL__IGSGraphic0004) ) 

#define IGSGraphic_get_UseStatusBar(This,__MIDL__IGSGraphic0005)	\
    ( (This)->lpVtbl -> get_UseStatusBar(This,__MIDL__IGSGraphic0005) ) 

#define IGSGraphic_put_UseGraphicsCursor(This,__MIDL__IGSGraphic0006)	\
    ( (This)->lpVtbl -> put_UseGraphicsCursor(This,__MIDL__IGSGraphic0006) ) 

#define IGSGraphic_get_UseGraphicsCursor(This,__MIDL__IGSGraphic0007)	\
    ( (This)->lpVtbl -> get_UseGraphicsCursor(This,__MIDL__IGSGraphic0007) ) 

#define IGSGraphic_put_DenyUserPropertySettings(This,__MIDL__IGSGraphic0008)	\
    ( (This)->lpVtbl -> put_DenyUserPropertySettings(This,__MIDL__IGSGraphic0008) ) 

#define IGSGraphic_get_DenyUserPropertySettings(This,__MIDL__IGSGraphic0009)	\
    ( (This)->lpVtbl -> get_DenyUserPropertySettings(This,__MIDL__IGSGraphic0009) ) 

#define IGSGraphic_ClearAllData(This)	\
    ( (This)->lpVtbl -> ClearAllData(This) ) 

#define IGSGraphic_PrepareForData(This,plotNumber)	\
    ( (This)->lpVtbl -> PrepareForData(This,plotNumber) ) 

#define IGSGraphic_TakeDataString(This,stringOfNumbers,plotNumber)	\
    ( (This)->lpVtbl -> TakeDataString(This,stringOfNumbers,plotNumber) ) 

#define IGSGraphic_TakeDataArray(This,pArray,plotNumber)	\
    ( (This)->lpVtbl -> TakeDataArray(This,pArray,plotNumber) ) 

#define IGSGraphic_TakeFile(This,fileName,plotNumber)	\
    ( (This)->lpVtbl -> TakeFile(This,fileName,plotNumber) ) 

#define IGSGraphic_TakeDataSet(This,ds,plotNumber)	\
    ( (This)->lpVtbl -> TakeDataSet(This,ds,plotNumber) ) 

#define IGSGraphic_FinishedWithData(This,plotNumber)	\
    ( (This)->lpVtbl -> FinishedWithData(This,plotNumber) ) 

#define IGSGraphic_PrepareForDataSets(This)	\
    ( (This)->lpVtbl -> PrepareForDataSets(This) ) 

#define IGSGraphic_Draw(This,plotNumber)	\
    ( (This)->lpVtbl -> Draw(This,plotNumber) ) 

#define IGSGraphic_SetProperties(This)	\
    ( (This)->lpVtbl -> SetProperties(This) ) 

#define IGSGraphic_AddAxis(This,type,axisObject)	\
    ( (This)->lpVtbl -> AddAxis(This,type,axisObject) ) 

#define IGSGraphic_AddText(This,bstrText,pText)	\
    ( (This)->lpVtbl -> AddText(This,bstrText,pText) ) 

#define IGSGraphic_AddTextInteractive(This,pText)	\
    ( (This)->lpVtbl -> AddTextInteractive(This,pText) ) 

#define IGSGraphic_RemoveText(This,pText)	\
    ( (This)->lpVtbl -> RemoveText(This,pText) ) 

#define IGSGraphic_RemoveAllText(This)	\
    ( (This)->lpVtbl -> RemoveAllText(This) ) 

#define IGSGraphic_AddFunction(This,expression,pFunction)	\
    ( (This)->lpVtbl -> AddFunction(This,expression,pFunction) ) 

#define IGSGraphic_AddFunctionInteractive(This,pFunction)	\
    ( (This)->lpVtbl -> AddFunctionInteractive(This,pFunction) ) 

#define IGSGraphic_RemoveFunction(This,pFunction)	\
    ( (This)->lpVtbl -> RemoveFunction(This,pFunction) ) 

#define IGSGraphic_RemoveAllFunctions(This)	\
    ( (This)->lpVtbl -> RemoveAllFunctions(This) ) 

#define IGSGraphic_AddPlot(This,id,pPlot)	\
    ( (This)->lpVtbl -> AddPlot(This,id,pPlot) ) 

#define IGSGraphic_RemovePlot(This,idNumber)	\
    ( (This)->lpVtbl -> RemovePlot(This,idNumber) ) 

#define IGSGraphic_RemoveAllPlots(This)	\
    ( (This)->lpVtbl -> RemoveAllPlots(This) ) 

#define IGSGraphic_Synchronise(This)	\
    ( (This)->lpVtbl -> Synchronise(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGSGraphic_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GSystemGraphic;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD73-55E6-11d3-8365-006008BD5BC3")
GSystemGraphic;
#endif
#endif /* __Graphic_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


