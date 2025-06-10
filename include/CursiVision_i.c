

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for CursiVision.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
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

MIDL_DEFINE_GUID(IID, LIBID_CursiVision,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x35);


MIDL_DEFINE_GUID(IID, IID_ICursiVisionFrontEnd,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x36);


MIDL_DEFINE_GUID(IID, IID_ICursiVisionEvents,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x44);


MIDL_DEFINE_GUID(IID, IID_ICursiVisionServices,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x00);


MIDL_DEFINE_GUID(IID, IID_ICursiVisionBackEnd,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x37);


MIDL_DEFINE_GUID(CLSID, CLSID_CursiVision,0xA64AB7AF,0x8A26,0x4f07,0x88,0x77,0x56,0xFE,0x99,0x57,0x03,0x39);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



