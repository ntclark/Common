

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for EmailNewRow.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_VisioLoggerEmailProcessor,0xD07CC650,0x9FD3,0x4270,0x9C,0x10,0x6A,0xE7,0x93,0x8C,0x62,0xE0);


MIDL_DEFINE_GUID(IID, IID_IVisioLoggerEmailUtilities,0x75FD19CF,0xBB6A,0x4a9e,0xAE,0xC0,0xE3,0x6B,0x6B,0x10,0x6B,0xFB);


MIDL_DEFINE_GUID(CLSID, CLSID_VisioLoggerEmailProcessor,0xD07CC650,0x9FD3,0x4270,0x9C,0x10,0x6A,0xE7,0x93,0x8C,0x62,0xE1);


MIDL_DEFINE_GUID(CLSID, CLSID_VisioLoggerEmailActionProcessor,0xD07CC650,0x9FD3,0x4270,0x9C,0x10,0x6A,0xE7,0x93,0x8C,0x62,0xE2);


MIDL_DEFINE_GUID(CLSID, CLSID_VisioLoggerEmailUtilities,0x75FD19CF,0xBB6A,0x4a9e,0xAE,0xC0,0xE3,0x6B,0x6B,0x10,0x6B,0xFA);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


