

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Dec 22 12:54:35 2017
 */
/* Compiler settings for Function.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_FunctioNater,0x8CAEFD83,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, DIID_IGSFunctioNaterEvents,0x77B23910,0x57D1,0x405b,0x97,0x2D,0x33,0x33,0x25,0xB6,0x29,0xBB);


MIDL_DEFINE_GUID(IID, IID_IGSFunctioNater,0x8CAEFD85,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_GSystemFunctioNater,0x8CAEFD86,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


