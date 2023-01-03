

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for pkAPI_VisioLogger.odl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
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

MIDL_DEFINE_GUID(IID, LIBID_InnoVisioNatePhabletSignaturePad,0xB5A6A777,0xEA35,0x4dd7,0x9A,0x54,0xF4,0x72,0x39,0x12,0x55,0x33);


MIDL_DEFINE_GUID(IID, IID_IVisioLoggerSignaturePad,0x6E6621BD,0xF297,0x4E50,0xA5,0xCC,0x41,0xD4,0xA6,0xAF,0xC5,0xE2);


MIDL_DEFINE_GUID(IID, IID_IVisioLoggerSignaturePadEvents,0x6E6621BD,0xF297,0x4E50,0xA5,0xCC,0x41,0xD4,0xA6,0xAF,0xC5,0xE3);


MIDL_DEFINE_GUID(IID, IID_IVisioLoggerKioskPad,0x6E6621BD,0xF297,0x4E50,0xA5,0xCC,0x41,0xD4,0xA6,0xAF,0xC5,0xE4);


MIDL_DEFINE_GUID(IID, IID_IVisioLoggerKioskPadEvents,0x6E6621BD,0xF297,0x4E50,0xA5,0xCC,0x41,0xD4,0xA6,0xAF,0xC5,0xE5);


MIDL_DEFINE_GUID(CLSID, CLSID_SignaturePad,0xB5A6A777,0xEA35,0x4dd7,0x9A,0x54,0xF4,0x72,0x39,0x12,0x55,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_KioskPad,0xB5A6A777,0xEA35,0x4dd7,0x9A,0x54,0xF4,0x72,0x39,0x12,0x55,0x35);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



