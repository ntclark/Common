

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for VisioLogger\VisioLoggerVideo.odl:
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


#ifndef __VisioLoggerVideo_i_h__
#define __VisioLoggerVideo_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __VisioLoggerVideoNewRow_FWD_DEFINED__
#define __VisioLoggerVideoNewRow_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerVideoNewRow VisioLoggerVideoNewRow;
#else
typedef struct VisioLoggerVideoNewRow VisioLoggerVideoNewRow;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerVideoNewRow_FWD_DEFINED__ */


#ifndef __VisioLoggerVideoAction_FWD_DEFINED__
#define __VisioLoggerVideoAction_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerVideoAction VisioLoggerVideoAction;
#else
typedef struct VisioLoggerVideoAction VisioLoggerVideoAction;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerVideoAction_FWD_DEFINED__ */


#ifndef __VisioLoggerVideoPreSignature_FWD_DEFINED__
#define __VisioLoggerVideoPreSignature_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerVideoPreSignature VisioLoggerVideoPreSignature;
#else
typedef struct VisioLoggerVideoPreSignature VisioLoggerVideoPreSignature;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerVideoPreSignature_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VisioLoggerVideo_LIBRARY_DEFINED__
#define __VisioLoggerVideo_LIBRARY_DEFINED__

/* library VisioLoggerVideo */
/* [version][lcid][helpstring][uuid] */ 


DEFINE_GUID(LIBID_VisioLoggerVideo,0xD75D77EE,0x3370,0x4A39,0xAF,0xB9,0x42,0x02,0xD9,0x85,0x2F,0x64);

DEFINE_GUID(CLSID_VisioLoggerVideoNewRow,0xD75D77EE,0x3370,0x4A39,0xAF,0xB9,0x42,0x02,0xD9,0x85,0x2F,0x65);

#ifdef __cplusplus

class DECLSPEC_UUID("D75D77EE-3370-4A39-AFB9-4202D9852F65")
VisioLoggerVideoNewRow;
#endif

DEFINE_GUID(CLSID_VisioLoggerVideoAction,0xD75D77EE,0x3370,0x4A39,0xAF,0xB9,0x42,0x02,0xD9,0x85,0x2F,0x66);

#ifdef __cplusplus

class DECLSPEC_UUID("D75D77EE-3370-4A39-AFB9-4202D9852F66")
VisioLoggerVideoAction;
#endif

DEFINE_GUID(CLSID_VisioLoggerVideoPreSignature,0xD75D77EE,0x3370,0x4A39,0xAF,0xB9,0x42,0x02,0xD9,0x85,0x2F,0x67);

#ifdef __cplusplus

class DECLSPEC_UUID("D75D77EE-3370-4A39-AFB9-4202D9852F67")
VisioLoggerVideoPreSignature;
#endif
#endif /* __VisioLoggerVideo_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


