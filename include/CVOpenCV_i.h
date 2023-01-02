

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for CVOpenCV.odl:
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


#ifndef __CVOpenCV_i_h__
#define __CVOpenCV_i_h__

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

#ifndef __ICVOpenCV_FWD_DEFINED__
#define __ICVOpenCV_FWD_DEFINED__
typedef interface ICVOpenCV ICVOpenCV;

#endif 	/* __ICVOpenCV_FWD_DEFINED__ */


#ifndef __CVOpenCV_FWD_DEFINED__
#define __CVOpenCV_FWD_DEFINED__

#ifdef __cplusplus
typedef class CVOpenCV CVOpenCV;
#else
typedef struct CVOpenCV CVOpenCV;
#endif /* __cplusplus */

#endif 	/* __CVOpenCV_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CVOpenCV_LIBRARY_DEFINED__
#define __CVOpenCV_LIBRARY_DEFINED__

/* library CVOpenCV */
/* [version][control][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CVOpenCV;

#ifndef __ICVOpenCV_INTERFACE_DEFINED__
#define __ICVOpenCV_INTERFACE_DEFINED__

/* interface ICVOpenCV */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ICVOpenCV;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95FDBDF1-67D5-4DF6-AC84-8D5B080DF211")
    ICVOpenCV : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MatchTemplate( 
            double matchExpected,
            HBITMAP needle,
            HBITMAP haystack,
            RECT *pFoundLocation,
            HBITMAP *phBitmapResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICVOpenCVVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICVOpenCV * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICVOpenCV * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICVOpenCV * This);
        
        DECLSPEC_XFGVIRT(ICVOpenCV, MatchTemplate)
        HRESULT ( STDMETHODCALLTYPE *MatchTemplate )( 
            ICVOpenCV * This,
            double matchExpected,
            HBITMAP needle,
            HBITMAP haystack,
            RECT *pFoundLocation,
            HBITMAP *phBitmapResult);
        
        END_INTERFACE
    } ICVOpenCVVtbl;

    interface ICVOpenCV
    {
        CONST_VTBL struct ICVOpenCVVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICVOpenCV_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICVOpenCV_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICVOpenCV_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICVOpenCV_MatchTemplate(This,matchExpected,needle,haystack,pFoundLocation,phBitmapResult)	\
    ( (This)->lpVtbl -> MatchTemplate(This,matchExpected,needle,haystack,pFoundLocation,phBitmapResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICVOpenCV_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CVOpenCV;

#ifdef __cplusplus

class DECLSPEC_UUID("95FDBDF1-67D5-4DF6-AC84-8D5B080DF21A")
CVOpenCV;
#endif
#endif /* __CVOpenCV_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


