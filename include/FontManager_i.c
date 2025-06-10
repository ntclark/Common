

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\FontManager.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
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

MIDL_DEFINE_GUID(IID, LIBID_FontManager,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x90);


MIDL_DEFINE_GUID(IID, IID_IFMClient_ProvideFontData,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x91);


MIDL_DEFINE_GUID(IID, IID_IFont_EVNSW,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x92);


MIDL_DEFINE_GUID(IID, IID_IFontManager,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x93);


MIDL_DEFINE_GUID(IID, IID_IFontManagerNotifications,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_FontManager,0x1FC20340,0x4355,0x4347,0x8A,0x32,0xA8,0x2E,0x2F,0xB8,0x98,0x99);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



