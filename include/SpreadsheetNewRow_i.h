

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for SpreadsheetNewRow.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
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


#ifndef __SpreadsheetNewRow_i_h__
#define __SpreadsheetNewRow_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __VisioLoggerSpreadsheetNewRow_FWD_DEFINED__
#define __VisioLoggerSpreadsheetNewRow_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerSpreadsheetNewRow VisioLoggerSpreadsheetNewRow;
#else
typedef struct VisioLoggerSpreadsheetNewRow VisioLoggerSpreadsheetNewRow;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerSpreadsheetNewRow_FWD_DEFINED__ */


#ifndef __VisioLoggerSpreadsheetRowChanged_FWD_DEFINED__
#define __VisioLoggerSpreadsheetRowChanged_FWD_DEFINED__

#ifdef __cplusplus
typedef class VisioLoggerSpreadsheetRowChanged VisioLoggerSpreadsheetRowChanged;
#else
typedef struct VisioLoggerSpreadsheetRowChanged VisioLoggerSpreadsheetRowChanged;
#endif /* __cplusplus */

#endif 	/* __VisioLoggerSpreadsheetRowChanged_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VisioLoggerSpreadsheetBackEnd_LIBRARY_DEFINED__
#define __VisioLoggerSpreadsheetBackEnd_LIBRARY_DEFINED__

/* library VisioLoggerSpreadsheetBackEnd */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_VisioLoggerSpreadsheetBackEnd;

EXTERN_C const CLSID CLSID_VisioLoggerSpreadsheetNewRow;

#ifdef __cplusplus

class DECLSPEC_UUID("BA9EE512-3C38-4eac-90F2-DD3BA85C2A8C")
VisioLoggerSpreadsheetNewRow;
#endif

EXTERN_C const CLSID CLSID_VisioLoggerSpreadsheetRowChanged;

#ifdef __cplusplus

class DECLSPEC_UUID("BA9EE512-3C38-4eac-90F2-DD3BA85C2A8D")
VisioLoggerSpreadsheetRowChanged;
#endif
#endif /* __VisioLoggerSpreadsheetBackEnd_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

