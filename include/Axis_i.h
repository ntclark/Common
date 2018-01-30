

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Jan 30 11:19:22 2018
 */
/* Compiler settings for Axis.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
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


#ifndef __Axis_i_h__
#define __Axis_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAxis_FWD_DEFINED__
#define __IAxis_FWD_DEFINED__
typedef interface IAxis IAxis;

#endif 	/* __IAxis_FWD_DEFINED__ */


#ifndef __GSystemAxis_FWD_DEFINED__
#define __GSystemAxis_FWD_DEFINED__

#ifdef __cplusplus
typedef class GSystemAxis GSystemAxis;
#else
typedef struct GSystemAxis GSystemAxis;
#endif /* __cplusplus */

#endif 	/* __GSystemAxis_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Axis_LIBRARY_DEFINED__
#define __Axis_LIBRARY_DEFINED__

/* library Axis */
/* [control][version][lcid][helpstring][helpfile][uuid] */ 


enum AxisPropertiesID
    {
        axisPropertyType	= 0,
        axisPropertyDrawText	= 1,
        axisPropertySegmentID	= 2,
        axisPropertyActionTable	= 3,
        axisPropertyParentWindow	= 4,
        axisPropertyLabelText	= 5,
        axisPropertyRepresentativeText	= 6,
        axisPropertyStartPoint	= 7,
        axisPropertyStartPointX	= 8,
        axisPropertyStartPointY	= 9,
        axisPropertyStartPointZ	= 10,
        axisPropertyEndPoint	= 11,
        axisPropertyEndPointX	= 12,
        axisPropertyEndPointY	= 13,
        axisPropertyEndPointZ	= 14,
        axisPropertyTickCount	= 15,
        axisPropertyTickSize	= 16,
        axisPropertyTickPercentAbove	= 17,
        axisPropertyTickPrecision	= 18,
        axisPropertyGridLinesPerTick	= 19,
        axispropertyLineWeight	= 20,
        axisPropertyLineColor	= 21,
        axisPropertyDefinesDomain	= 22
    } ;

enum AxisMethodsID
    {
        axisMethodInitialize	= 101,
        axisMethodGetTextList	= ( axisMethodInitialize + 1 ) ,
        axisMethodGetDataSet	= ( axisMethodGetTextList + 1 ) ,
        axisMethodPrepData	= ( axisMethodGetDataSet + 1 ) ,
        axisMethodDraw	= ( axisMethodPrepData + 1 ) ,
        axisMethodDrawOpenGLLabels	= ( axisMethodDraw + 1 ) ,
        axisMethodDrawGDILabels	= ( axisMethodDrawOpenGLLabels + 1 ) ,
        axisMethodRedraw	= ( axisMethodDrawGDILabels + 1 ) ,
        axisMethodErase	= ( axisMethodRedraw + 1 ) ,
        axisMethodAdviseGSystemStatusBar	= ( axisMethodErase + 1 ) ,
        axisMethodPrepText	= ( axisMethodAdviseGSystemStatusBar + 1 ) ,
        axisMethodEditProperties	= ( axisMethodPrepText + 1 ) 
    } ;

EXTERN_C const IID LIBID_Axis;

#ifndef __IAxis_INTERFACE_DEFINED__
#define __IAxis_INTERFACE_DEFINED__

/* interface IAxis */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IAxis;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CAEFD91-55E6-11d3-8365-006008BD5BC3")
    IAxis : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ char *pType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DrawText( 
            /* [in] */ VARIANT_BOOL __MIDL__IAxis0000) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DrawText( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IAxis0001) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelText( 
            /* [in] */ BSTR bstrLabel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelText( 
            /* [retval][out] */ BSTR *pbstrLabel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RepresentativeText( 
            /* [retval][out] */ IDispatch **pText) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TickLabelPrecision( 
            /* [in] */ double pctDomain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TickLabelPrecision( 
            /* [retval][out] */ double *pPctDomain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentID( 
            /* [retval][out] */ long *pID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActionTable( 
            /* [retval][out] */ /* external definition not present */ IGraphicSegmentAction **pIGraphicSegmentAction) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_SegmentCount( 
            /* [retval][out] */ long *__MIDL__IAxis0002) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE GetSegments( 
            /* [in] */ long *__MIDL__IAxis0003) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPoint( 
            /* [in] */ SAFEARRAY * pStartPoint) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPoint( 
            /* [retval][out] */ SAFEARRAY * *ppStartPoint) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPointX( 
            double startPointX) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPointX( 
            /* [retval][out] */ double *pStartPointX) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPointY( 
            double startPointY) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPointY( 
            /* [retval][out] */ double *pStartPointY) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartPointZ( 
            double startPointZ) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartPointZ( 
            /* [retval][out] */ double *pStartPointZ) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPoint( 
            /* [in] */ SAFEARRAY * pEndPoint) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPoint( 
            /* [retval][out] */ SAFEARRAY * *ppEndPoint) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPointX( 
            double EndPointX) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPointX( 
            /* [retval][out] */ double *pEndPointX) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPointY( 
            double EndPointY) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPointY( 
            /* [retval][out] */ double *pEndPointY) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EndPointZ( 
            double EndPointZ) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EndPointZ( 
            /* [retval][out] */ double *pEndPointZ) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DefinesDomain( 
            /* [in] */ VARIANT_BOOL __MIDL__IAxis0004) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DefinesDomain( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IAxis0005) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineWeight( 
            /* [in] */ long lineWeight) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineWeight( 
            /* [retval][out] */ long *lineWeight) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LineColor( 
            /* [in] */ SAFEARRAY * rgbColor) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LineColor( 
            /* [retval][out] */ SAFEARRAY * *pRgbColor) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TickCount( 
            /* [in] */ long tickCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TickCount( 
            /* [retval][out] */ long *pTickCount) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TickSize( 
            /* [in] */ double size) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TickSize( 
            /* [retval][out] */ double *pSize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TickPercentAbove( 
            /* [in] */ double percentAbove) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TickPercentAbove( 
            /* [retval][out] */ double *pPercentAbove) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GridLinesPerTick( 
            /* [in] */ long gridLines) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GridLinesPerTick( 
            /* [retval][out] */ long *pGridLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ char type,
            /* [in] */ IAxis *pXAxis,
            /* [in] */ IAxis *pYAxis,
            /* [in] */ IAxis *pZAxis,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyPlotView,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyXFloor,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyXCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pProeprtyYFloor,
            /* [in] */ /* external definition not present */ IGProperty *pProeprtyYCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyZFloor,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyZCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyOpenGLText,
            /* [in] */ /* external definition not present */ IDataSet *pIDomainDataSet,
            /* [in] */ void *__MIDL__IAxis0006,
            /* [in] */ /* external definition not present */ IEvaluator *__MIDL__IAxis0007,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenChangedCallback )( 
                void *pvArg,
                ULONG_PTR cookie),
            void *pWhenChangedArg,
            ULONG_PTR whenChangedCookie) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DataSet( 
            /* [retval][out] */ /* external definition not present */ IDataSet **__MIDL__IAxis0009) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PrepText( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetTextList( 
            /* [retval][out] */ void **getList) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PrepData( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Draw( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DrawOpenGLLabels( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DrawGDILabels( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Redraw( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Erase( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdviseGSystemStatusBar( 
            /* external definition not present */ IGSystemStatusBar *__MIDL__IAxis0010) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowProperties( 
            HWND hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxisVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxis * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxis * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxis * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAxis * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAxis * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAxis * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAxis * This,
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
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAxis * This,
            /* [retval][out] */ char *pType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DrawText )( 
            IAxis * This,
            /* [in] */ VARIANT_BOOL __MIDL__IAxis0000);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DrawText )( 
            IAxis * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IAxis0001);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LabelText )( 
            IAxis * This,
            /* [in] */ BSTR bstrLabel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelText )( 
            IAxis * This,
            /* [retval][out] */ BSTR *pbstrLabel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RepresentativeText )( 
            IAxis * This,
            /* [retval][out] */ IDispatch **pText);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TickLabelPrecision )( 
            IAxis * This,
            /* [in] */ double pctDomain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TickLabelPrecision )( 
            IAxis * This,
            /* [retval][out] */ double *pPctDomain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentID )( 
            IAxis * This,
            /* [retval][out] */ long *pID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActionTable )( 
            IAxis * This,
            /* [retval][out] */ /* external definition not present */ IGraphicSegmentAction **pIGraphicSegmentAction);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SegmentCount )( 
            IAxis * This,
            /* [retval][out] */ long *__MIDL__IAxis0002);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *GetSegments )( 
            IAxis * This,
            /* [in] */ long *__MIDL__IAxis0003);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPoint )( 
            IAxis * This,
            /* [in] */ SAFEARRAY * pStartPoint);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPoint )( 
            IAxis * This,
            /* [retval][out] */ SAFEARRAY * *ppStartPoint);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPointX )( 
            IAxis * This,
            double startPointX);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPointX )( 
            IAxis * This,
            /* [retval][out] */ double *pStartPointX);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPointY )( 
            IAxis * This,
            double startPointY);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPointY )( 
            IAxis * This,
            /* [retval][out] */ double *pStartPointY);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartPointZ )( 
            IAxis * This,
            double startPointZ);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartPointZ )( 
            IAxis * This,
            /* [retval][out] */ double *pStartPointZ);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPoint )( 
            IAxis * This,
            /* [in] */ SAFEARRAY * pEndPoint);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPoint )( 
            IAxis * This,
            /* [retval][out] */ SAFEARRAY * *ppEndPoint);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPointX )( 
            IAxis * This,
            double EndPointX);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPointX )( 
            IAxis * This,
            /* [retval][out] */ double *pEndPointX);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPointY )( 
            IAxis * This,
            double EndPointY);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPointY )( 
            IAxis * This,
            /* [retval][out] */ double *pEndPointY);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndPointZ )( 
            IAxis * This,
            double EndPointZ);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndPointZ )( 
            IAxis * This,
            /* [retval][out] */ double *pEndPointZ);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefinesDomain )( 
            IAxis * This,
            /* [in] */ VARIANT_BOOL __MIDL__IAxis0004);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinesDomain )( 
            IAxis * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL__IAxis0005);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineWeight )( 
            IAxis * This,
            /* [in] */ long lineWeight);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineWeight )( 
            IAxis * This,
            /* [retval][out] */ long *lineWeight);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LineColor )( 
            IAxis * This,
            /* [in] */ SAFEARRAY * rgbColor);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LineColor )( 
            IAxis * This,
            /* [retval][out] */ SAFEARRAY * *pRgbColor);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TickCount )( 
            IAxis * This,
            /* [in] */ long tickCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TickCount )( 
            IAxis * This,
            /* [retval][out] */ long *pTickCount);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TickSize )( 
            IAxis * This,
            /* [in] */ double size);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TickSize )( 
            IAxis * This,
            /* [retval][out] */ double *pSize);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TickPercentAbove )( 
            IAxis * This,
            /* [in] */ double percentAbove);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TickPercentAbove )( 
            IAxis * This,
            /* [retval][out] */ double *pPercentAbove);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GridLinesPerTick )( 
            IAxis * This,
            /* [in] */ long gridLines);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GridLinesPerTick )( 
            IAxis * This,
            /* [retval][out] */ long *pGridLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IAxis * This,
            /* [in] */ char type,
            /* [in] */ IAxis *pXAxis,
            /* [in] */ IAxis *pYAxis,
            /* [in] */ IAxis *pZAxis,
            /* [in] */ /* external definition not present */ IGProperty *pIPropertyPlotView,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyXFloor,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyXCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pProeprtyYFloor,
            /* [in] */ /* external definition not present */ IGProperty *pProeprtyYCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyZFloor,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyZCeiling,
            /* [in] */ /* external definition not present */ IGProperty *pPropertyOpenGLText,
            /* [in] */ /* external definition not present */ IDataSet *pIDomainDataSet,
            /* [in] */ void *__MIDL__IAxis0006,
            /* [in] */ /* external definition not present */ IEvaluator *__MIDL__IAxis0007,
            /* [in] */ void ( STDMETHODCALLTYPE *pWhenChangedCallback )( 
                void *pvArg,
                ULONG_PTR cookie),
            void *pWhenChangedArg,
            ULONG_PTR whenChangedCookie);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DataSet )( 
            IAxis * This,
            /* [retval][out] */ /* external definition not present */ IDataSet **__MIDL__IAxis0009);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PrepText )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetTextList )( 
            IAxis * This,
            /* [retval][out] */ void **getList);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PrepData )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DrawOpenGLLabels )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DrawGDILabels )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Redraw )( 
            IAxis * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Erase )( 
            IAxis * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AdviseGSystemStatusBar )( 
            IAxis * This,
            /* external definition not present */ IGSystemStatusBar *__MIDL__IAxis0010);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowProperties )( 
            IAxis * This,
            HWND hwndParent);
        
        END_INTERFACE
    } IAxisVtbl;

    interface IAxis
    {
        CONST_VTBL struct IAxisVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxis_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxis_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxis_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxis_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAxis_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAxis_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAxis_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAxis_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IAxis_put_DrawText(This,__MIDL__IAxis0000)	\
    ( (This)->lpVtbl -> put_DrawText(This,__MIDL__IAxis0000) ) 

#define IAxis_get_DrawText(This,__MIDL__IAxis0001)	\
    ( (This)->lpVtbl -> get_DrawText(This,__MIDL__IAxis0001) ) 

#define IAxis_put_LabelText(This,bstrLabel)	\
    ( (This)->lpVtbl -> put_LabelText(This,bstrLabel) ) 

#define IAxis_get_LabelText(This,pbstrLabel)	\
    ( (This)->lpVtbl -> get_LabelText(This,pbstrLabel) ) 

#define IAxis_get_RepresentativeText(This,pText)	\
    ( (This)->lpVtbl -> get_RepresentativeText(This,pText) ) 

#define IAxis_put_TickLabelPrecision(This,pctDomain)	\
    ( (This)->lpVtbl -> put_TickLabelPrecision(This,pctDomain) ) 

#define IAxis_get_TickLabelPrecision(This,pPctDomain)	\
    ( (This)->lpVtbl -> get_TickLabelPrecision(This,pPctDomain) ) 

#define IAxis_get_SegmentID(This,pID)	\
    ( (This)->lpVtbl -> get_SegmentID(This,pID) ) 

#define IAxis_get_ActionTable(This,pIGraphicSegmentAction)	\
    ( (This)->lpVtbl -> get_ActionTable(This,pIGraphicSegmentAction) ) 

#define IAxis_get_SegmentCount(This,__MIDL__IAxis0002)	\
    ( (This)->lpVtbl -> get_SegmentCount(This,__MIDL__IAxis0002) ) 

#define IAxis_GetSegments(This,__MIDL__IAxis0003)	\
    ( (This)->lpVtbl -> GetSegments(This,__MIDL__IAxis0003) ) 

#define IAxis_put_StartPoint(This,pStartPoint)	\
    ( (This)->lpVtbl -> put_StartPoint(This,pStartPoint) ) 

#define IAxis_get_StartPoint(This,ppStartPoint)	\
    ( (This)->lpVtbl -> get_StartPoint(This,ppStartPoint) ) 

#define IAxis_put_StartPointX(This,startPointX)	\
    ( (This)->lpVtbl -> put_StartPointX(This,startPointX) ) 

#define IAxis_get_StartPointX(This,pStartPointX)	\
    ( (This)->lpVtbl -> get_StartPointX(This,pStartPointX) ) 

#define IAxis_put_StartPointY(This,startPointY)	\
    ( (This)->lpVtbl -> put_StartPointY(This,startPointY) ) 

#define IAxis_get_StartPointY(This,pStartPointY)	\
    ( (This)->lpVtbl -> get_StartPointY(This,pStartPointY) ) 

#define IAxis_put_StartPointZ(This,startPointZ)	\
    ( (This)->lpVtbl -> put_StartPointZ(This,startPointZ) ) 

#define IAxis_get_StartPointZ(This,pStartPointZ)	\
    ( (This)->lpVtbl -> get_StartPointZ(This,pStartPointZ) ) 

#define IAxis_put_EndPoint(This,pEndPoint)	\
    ( (This)->lpVtbl -> put_EndPoint(This,pEndPoint) ) 

#define IAxis_get_EndPoint(This,ppEndPoint)	\
    ( (This)->lpVtbl -> get_EndPoint(This,ppEndPoint) ) 

#define IAxis_put_EndPointX(This,EndPointX)	\
    ( (This)->lpVtbl -> put_EndPointX(This,EndPointX) ) 

#define IAxis_get_EndPointX(This,pEndPointX)	\
    ( (This)->lpVtbl -> get_EndPointX(This,pEndPointX) ) 

#define IAxis_put_EndPointY(This,EndPointY)	\
    ( (This)->lpVtbl -> put_EndPointY(This,EndPointY) ) 

#define IAxis_get_EndPointY(This,pEndPointY)	\
    ( (This)->lpVtbl -> get_EndPointY(This,pEndPointY) ) 

#define IAxis_put_EndPointZ(This,EndPointZ)	\
    ( (This)->lpVtbl -> put_EndPointZ(This,EndPointZ) ) 

#define IAxis_get_EndPointZ(This,pEndPointZ)	\
    ( (This)->lpVtbl -> get_EndPointZ(This,pEndPointZ) ) 

#define IAxis_put_DefinesDomain(This,__MIDL__IAxis0004)	\
    ( (This)->lpVtbl -> put_DefinesDomain(This,__MIDL__IAxis0004) ) 

#define IAxis_get_DefinesDomain(This,__MIDL__IAxis0005)	\
    ( (This)->lpVtbl -> get_DefinesDomain(This,__MIDL__IAxis0005) ) 

#define IAxis_put_LineWeight(This,lineWeight)	\
    ( (This)->lpVtbl -> put_LineWeight(This,lineWeight) ) 

#define IAxis_get_LineWeight(This,lineWeight)	\
    ( (This)->lpVtbl -> get_LineWeight(This,lineWeight) ) 

#define IAxis_put_LineColor(This,rgbColor)	\
    ( (This)->lpVtbl -> put_LineColor(This,rgbColor) ) 

#define IAxis_get_LineColor(This,pRgbColor)	\
    ( (This)->lpVtbl -> get_LineColor(This,pRgbColor) ) 

#define IAxis_put_TickCount(This,tickCount)	\
    ( (This)->lpVtbl -> put_TickCount(This,tickCount) ) 

#define IAxis_get_TickCount(This,pTickCount)	\
    ( (This)->lpVtbl -> get_TickCount(This,pTickCount) ) 

#define IAxis_put_TickSize(This,size)	\
    ( (This)->lpVtbl -> put_TickSize(This,size) ) 

#define IAxis_get_TickSize(This,pSize)	\
    ( (This)->lpVtbl -> get_TickSize(This,pSize) ) 

#define IAxis_put_TickPercentAbove(This,percentAbove)	\
    ( (This)->lpVtbl -> put_TickPercentAbove(This,percentAbove) ) 

#define IAxis_get_TickPercentAbove(This,pPercentAbove)	\
    ( (This)->lpVtbl -> get_TickPercentAbove(This,pPercentAbove) ) 

#define IAxis_put_GridLinesPerTick(This,gridLines)	\
    ( (This)->lpVtbl -> put_GridLinesPerTick(This,gridLines) ) 

#define IAxis_get_GridLinesPerTick(This,pGridLines)	\
    ( (This)->lpVtbl -> get_GridLinesPerTick(This,pGridLines) ) 

#define IAxis_Initialize(This,type,pXAxis,pYAxis,pZAxis,pIPropertyPlotView,pPropertyXFloor,pPropertyXCeiling,pProeprtyYFloor,pProeprtyYCeiling,pPropertyZFloor,pPropertyZCeiling,pPropertyOpenGLText,pIDomainDataSet,__MIDL__IAxis0006,__MIDL__IAxis0007,pWhenChangedCallback,pWhenChangedArg,whenChangedCookie)	\
    ( (This)->lpVtbl -> Initialize(This,type,pXAxis,pYAxis,pZAxis,pIPropertyPlotView,pPropertyXFloor,pPropertyXCeiling,pProeprtyYFloor,pProeprtyYCeiling,pPropertyZFloor,pPropertyZCeiling,pPropertyOpenGLText,pIDomainDataSet,__MIDL__IAxis0006,__MIDL__IAxis0007,pWhenChangedCallback,pWhenChangedArg,whenChangedCookie) ) 

#define IAxis_get_DataSet(This,__MIDL__IAxis0009)	\
    ( (This)->lpVtbl -> get_DataSet(This,__MIDL__IAxis0009) ) 

#define IAxis_PrepText(This)	\
    ( (This)->lpVtbl -> PrepText(This) ) 

#define IAxis_GetTextList(This,getList)	\
    ( (This)->lpVtbl -> GetTextList(This,getList) ) 

#define IAxis_PrepData(This)	\
    ( (This)->lpVtbl -> PrepData(This) ) 

#define IAxis_Draw(This)	\
    ( (This)->lpVtbl -> Draw(This) ) 

#define IAxis_DrawOpenGLLabels(This)	\
    ( (This)->lpVtbl -> DrawOpenGLLabels(This) ) 

#define IAxis_DrawGDILabels(This)	\
    ( (This)->lpVtbl -> DrawGDILabels(This) ) 

#define IAxis_Redraw(This)	\
    ( (This)->lpVtbl -> Redraw(This) ) 

#define IAxis_Erase(This)	\
    ( (This)->lpVtbl -> Erase(This) ) 

#define IAxis_AdviseGSystemStatusBar(This,__MIDL__IAxis0010)	\
    ( (This)->lpVtbl -> AdviseGSystemStatusBar(This,__MIDL__IAxis0010) ) 

#define IAxis_ShowProperties(This,hwndParent)	\
    ( (This)->lpVtbl -> ShowProperties(This,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxis_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GSystemAxis;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAEFD92-55E6-11d3-8365-006008BD5BC3")
GSystemAxis;
#endif
#endif /* __Axis_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


