

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for COM Implementation\PostScript.odl:
    Oicf, W0, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
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

MIDL_DEFINE_GUID(IID, LIBID_PostScript,0xAC9B7C38,0x86E1,0x4c17,0x8B,0xE2,0x89,0x7A,0xA5,0x53,0x5A,0x5A);


MIDL_DEFINE_GUID(IID, IID_IPostScript,0xAC9B7C38,0x86E1,0x4c17,0x8B,0xE2,0x89,0x7A,0xA5,0x53,0x5A,0x5B);


MIDL_DEFINE_GUID(IID, IID_IPostScriptTakeText,0xAC9B7C38,0x86E1,0x4c17,0x8B,0xE2,0x89,0x7A,0xA5,0x53,0x5A,0x5C);


MIDL_DEFINE_GUID(CLSID, CLSID_PostScript,0xAC9B7C38,0x86E1,0x4c17,0x8B,0xE2,0x89,0x7A,0xA5,0x53,0x5A,0x5E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



