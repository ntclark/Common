

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\Renderer.odl:
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

MIDL_DEFINE_GUID(IID, LIBID_Renderer,0xCC9F95CD,0x24F1,0x450A,0x88,0x83,0x02,0xB5,0x31,0x4B,0x1C,0x80);


MIDL_DEFINE_GUID(IID, IID_IRenderer,0xCC9F95CD,0x24F1,0x450A,0x88,0x83,0x02,0xB5,0x31,0x4B,0x1C,0x81);


MIDL_DEFINE_GUID(IID, IID_IGraphicElements,0x7731A10E,0x25F9,0x4234,0xBB,0x4C,0x18,0x85,0x12,0x96,0x51,0x93);


MIDL_DEFINE_GUID(IID, IID_IGraphicParameters,0x7731A10E,0x25F9,0x4234,0xBB,0x4C,0x18,0x85,0x12,0x96,0x51,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_Renderer,0xCC9F95CD,0x24F1,0x450A,0x88,0x83,0x02,0xB5,0x31,0x4B,0x1C,0x82);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



