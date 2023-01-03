

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Plot.odl:
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

MIDL_DEFINE_GUID(IID, LIBID_Plot,0x8CAEFD76,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IGraphicSegmentAction,0x8CAEFD7E,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IGraphicSegment,0x8CAEFD7B,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IBasePlot,0x8CAEFD77,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IPlot,0x8CAEFD78,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IPlotNotify,0x8CAEFD7A,0x65E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(IID, IID_IPlotServices,0x8CAEFD7D,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_GraphicSegment,0x8CAEFD7C,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_Plot,0x8CAEFD79,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_BasePlot,0x8CAEFD7A,0x55E6,0x11d3,0x83,0x65,0x00,0x60,0x08,0xBD,0x5B,0xC3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



