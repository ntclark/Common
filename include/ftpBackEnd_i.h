

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for ftpBackEnd.odl:
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


#ifndef __ftpBackEnd_i_h__
#define __ftpBackEnd_i_h__

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

#ifndef __CursiVisionFTPBackEnd_FWD_DEFINED__
#define __CursiVisionFTPBackEnd_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionFTPBackEnd CursiVisionFTPBackEnd;
#else
typedef struct CursiVisionFTPBackEnd CursiVisionFTPBackEnd;
#endif /* __cplusplus */

#endif 	/* __CursiVisionFTPBackEnd_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionFTPBackEnd_LIBRARY_DEFINED__
#define __CursiVisionFTPBackEnd_LIBRARY_DEFINED__

/* library CursiVisionFTPBackEnd */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_CursiVisionFTPBackEnd;

EXTERN_C const CLSID CLSID_CursiVisionFTPBackEnd;

#ifdef __cplusplus

class DECLSPEC_UUID("CDC6E109-9B34-4405-87B8-0D82D3B623D7")
CursiVisionFTPBackEnd;
#endif
#endif /* __CursiVisionFTPBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


