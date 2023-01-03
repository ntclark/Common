

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\cvScanner.odl:
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


#ifndef __cvScanner_i_h__
#define __cvScanner_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICVScanner_FWD_DEFINED__
#define __ICVScanner_FWD_DEFINED__
typedef interface ICVScanner ICVScanner;

#endif 	/* __ICVScanner_FWD_DEFINED__ */


#ifndef __CursiVisionScannerSupport_FWD_DEFINED__
#define __CursiVisionScannerSupport_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionScannerSupport CursiVisionScannerSupport;
#else
typedef struct CursiVisionScannerSupport CursiVisionScannerSupport;
#endif /* __cplusplus */

#endif 	/* __CursiVisionScannerSupport_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionScannerSupport_LIBRARY_DEFINED__
#define __CursiVisionScannerSupport_LIBRARY_DEFINED__

/* library CursiVisionScannerSupport */
/* [uuid] */ 


EXTERN_C const IID LIBID_CursiVisionScannerSupport;

#ifndef __ICVScanner_INTERFACE_DEFINED__
#define __ICVScanner_INTERFACE_DEFINED__

/* interface ICVScanner */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICVScanner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("89A81B9A-515F-49FD-9277-A532899551C1")
    ICVScanner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterComputer( 
            char *szContactInfoString,
            char *szRegisteredVersion,
            char *szRegistrationDate,
            char *pszID,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessorFromRegistration( 
            char *szContactInfoString,
            char *pszProcessorID,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessorID( 
            char *pszProcessorID,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterComputer( 
            char *pszContactInfoString,
            char *pszRegisteredVersion,
            char *pszRegistrationDate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BumpAmounts( 
            char *pszGuid,
            long documentsSigned,
            long signaturesApplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHeader( 
            char *pszContactInfoString,
            char *pszReturnValue,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDetails( 
            char *pszDocumentName,
            char *pszReturnValue,
            long cbBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ListFiles( 
            char *pszBucket,
            char *pszKey,
            SAFEARRAY **ppResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFile( 
            char *pszBucket,
            char *pszKey,
            char *pszFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutFile( 
            char *pszBucket,
            char *pszKey,
            char *pszFileName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICVScannerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICVScanner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICVScanner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICVScanner * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterComputer )( 
            ICVScanner * This,
            char *szContactInfoString,
            char *szRegisteredVersion,
            char *szRegistrationDate,
            char *pszID,
            long cbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessorFromRegistration )( 
            ICVScanner * This,
            char *szContactInfoString,
            char *pszProcessorID,
            long cbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessorID )( 
            ICVScanner * This,
            char *pszProcessorID,
            long cbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterComputer )( 
            ICVScanner * This,
            char *pszContactInfoString,
            char *pszRegisteredVersion,
            char *pszRegistrationDate);
        
        HRESULT ( STDMETHODCALLTYPE *BumpAmounts )( 
            ICVScanner * This,
            char *pszGuid,
            long documentsSigned,
            long signaturesApplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetHeader )( 
            ICVScanner * This,
            char *pszContactInfoString,
            char *pszReturnValue,
            long cbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetDetails )( 
            ICVScanner * This,
            char *pszDocumentName,
            char *pszReturnValue,
            long cbBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *ListFiles )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            SAFEARRAY **ppResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetFile )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            char *pszFileName);
        
        HRESULT ( STDMETHODCALLTYPE *PutFile )( 
            ICVScanner * This,
            char *pszBucket,
            char *pszKey,
            char *pszFileName);
        
        END_INTERFACE
    } ICVScannerVtbl;

    interface ICVScanner
    {
        CONST_VTBL struct ICVScannerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICVScanner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICVScanner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICVScanner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICVScanner_RegisterComputer(This,szContactInfoString,szRegisteredVersion,szRegistrationDate,pszID,cbBuffer)	\
    ( (This)->lpVtbl -> RegisterComputer(This,szContactInfoString,szRegisteredVersion,szRegistrationDate,pszID,cbBuffer) ) 

#define ICVScanner_ProcessorFromRegistration(This,szContactInfoString,pszProcessorID,cbBuffer)	\
    ( (This)->lpVtbl -> ProcessorFromRegistration(This,szContactInfoString,pszProcessorID,cbBuffer) ) 

#define ICVScanner_ProcessorID(This,pszProcessorID,cbBuffer)	\
    ( (This)->lpVtbl -> ProcessorID(This,pszProcessorID,cbBuffer) ) 

#define ICVScanner_UnregisterComputer(This,pszContactInfoString,pszRegisteredVersion,pszRegistrationDate)	\
    ( (This)->lpVtbl -> UnregisterComputer(This,pszContactInfoString,pszRegisteredVersion,pszRegistrationDate) ) 

#define ICVScanner_BumpAmounts(This,pszGuid,documentsSigned,signaturesApplied)	\
    ( (This)->lpVtbl -> BumpAmounts(This,pszGuid,documentsSigned,signaturesApplied) ) 

#define ICVScanner_GetHeader(This,pszContactInfoString,pszReturnValue,cbBuffer)	\
    ( (This)->lpVtbl -> GetHeader(This,pszContactInfoString,pszReturnValue,cbBuffer) ) 

#define ICVScanner_GetDetails(This,pszDocumentName,pszReturnValue,cbBuffer)	\
    ( (This)->lpVtbl -> GetDetails(This,pszDocumentName,pszReturnValue,cbBuffer) ) 

#define ICVScanner_ListFiles(This,pszBucket,pszKey,ppResult)	\
    ( (This)->lpVtbl -> ListFiles(This,pszBucket,pszKey,ppResult) ) 

#define ICVScanner_GetFile(This,pszBucket,pszKey,pszFileName)	\
    ( (This)->lpVtbl -> GetFile(This,pszBucket,pszKey,pszFileName) ) 

#define ICVScanner_PutFile(This,pszBucket,pszKey,pszFileName)	\
    ( (This)->lpVtbl -> PutFile(This,pszBucket,pszKey,pszFileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICVScanner_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CursiVisionScannerSupport;

#ifdef __cplusplus

class DECLSPEC_UUID("89A81B9A-515F-49FD-9277-A532899551CF")
CursiVisionScannerSupport;
#endif
#endif /* __CursiVisionScannerSupport_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


