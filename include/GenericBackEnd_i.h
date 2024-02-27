

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for GenericBackEnd.odl:
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


#ifndef __GenericBackEnd_i_h__
#define __GenericBackEnd_i_h__

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

#ifndef __CursiVisionGenericBackEnd_FWD_DEFINED__
#define __CursiVisionGenericBackEnd_FWD_DEFINED__

#ifdef __cplusplus
typedef class CursiVisionGenericBackEnd CursiVisionGenericBackEnd;
#else
typedef struct CursiVisionGenericBackEnd CursiVisionGenericBackEnd;
#endif /* __cplusplus */

#endif 	/* __CursiVisionGenericBackEnd_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CursiVisionGenericBackEnd_LIBRARY_DEFINED__
#define __CursiVisionGenericBackEnd_LIBRARY_DEFINED__

/* library CursiVisionGenericBackEnd */
/* [version][lcid][helpstring][uuid] */ 


DEFINE_GUID(LIBID_CursiVisionGenericBackEnd,0x52A9EE3A,0x5C46,0x48b4,0xA1,0xA4,0x56,0x92,0x9E,0xD0,0x5E,0x55);

DEFINE_GUID(CLSID_CursiVisionGenericBackEnd,0x52A9EE3A,0x5C46,0x48b4,0xA1,0xA4,0x56,0x92,0x9E,0xD0,0x5E,0x56);

#ifdef __cplusplus

class DECLSPEC_UUID("52A9EE3A-5C46-48b4-A1A4-56929ED05E56")
CursiVisionGenericBackEnd;
#endif
#endif /* __CursiVisionGenericBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


