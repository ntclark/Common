

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for DocumentNewRow.odl:
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


#ifndef __DocumentNewRow_i_h__
#define __DocumentNewRow_i_h__

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

#ifndef __VisioLoggerDocumentNewRow_FWD_DEFINED__
#define __VisioLoggerDocumentNewRow_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerDocumentNewRow VisioLoggerDocumentNewRow;
#else
typedef struct VisioLoggerDocumentNewRow VisioLoggerDocumentNewRow;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerDocumentNewRow_FWD_DEFINED__ */


#ifndef __VisioLoggerDocumentRowChanged_FWD_DEFINED__
#define __VisioLoggerDocumentRowChanged_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerDocumentRowChanged VisioLoggerDocumentRowChanged;
#else
typedef struct VisioLoggerDocumentRowChanged VisioLoggerDocumentRowChanged;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerDocumentRowChanged_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VisioLoggerDocumentBackEnd_LIBRARY_DEFINED__
#define __VisioLoggerDocumentBackEnd_LIBRARY_DEFINED__

/* library VisioLoggerDocumentBackEnd */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_VisioLoggerDocumentBackEnd;

EXTERN_C const CLSID CLSID_VisioLoggerDocumentNewRow;

#ifdef __cplusplus

class DECLSPEC_UUID("530CE887-9AB6-4308-9202-DC4CCB607C62")
VisioLoggerDocumentNewRow;
#endif

EXTERN_C const CLSID CLSID_VisioLoggerDocumentRowChanged;

#ifdef __cplusplus

class DECLSPEC_UUID("530CE887-9AB6-4308-9202-DC4CCB607C63")
VisioLoggerDocumentRowChanged;
#endif
#endif /* __VisioLoggerDocumentBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


