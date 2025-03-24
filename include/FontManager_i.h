

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __FontManager_i_h__
#define __FontManager_i_h__

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

#ifndef __IFont_EVNSW_FWD_DEFINED__
#define __IFont_EVNSW_FWD_DEFINED__
typedef interface IFont_EVNSW IFont_EVNSW;

#endif 	/* __IFont_EVNSW_FWD_DEFINED__ */


#ifndef __IFontManager_FWD_DEFINED__
#define __IFontManager_FWD_DEFINED__
typedef interface IFontManager IFontManager;

#endif 	/* __IFontManager_FWD_DEFINED__ */


#ifndef __IFontManagerNotifications_FWD_DEFINED__
#define __IFontManagerNotifications_FWD_DEFINED__
typedef interface IFontManagerNotifications IFontManagerNotifications;

#endif 	/* __IFontManagerNotifications_FWD_DEFINED__ */


#ifndef __FontManager_FWD_DEFINED__
#define __FontManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class FontManager FontManager;
#else
typedef struct FontManager FontManager;
#endif /* __cplusplus */

#endif 	/* __FontManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __FontManager_LIBRARY_DEFINED__
#define __FontManager_LIBRARY_DEFINED__

/* library FontManager */
/* [version][lcid][helpstring][uuid] */ 


EXTERN_C const IID LIBID_FontManager;

#ifndef __IFont_EVNSW_INTERFACE_DEFINED__
#define __IFont_EVNSW_INTERFACE_DEFINED__

/* interface IFont_EVNSW */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IFont_EVNSW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FC20340-4355-4347-8A32-A82E2FB89891")
    IFont_EVNSW : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Matrix( 
            /* [retval][out] */ LPVOID pResult) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Matrix( 
            UINT_PTR pXForm) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PointSize( 
            /* [retval][out] */ FLOAT *pPointSize) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PointSize( 
            /* [in] */ FLOAT pointSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FontBoundingBox( 
            POINTF *pLowerLeft,
            POINTF *pUpperRight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scale( 
            FLOAT scaleX,
            FLOAT scaleY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Translate( 
            FLOAT translateX,
            FLOAT translateY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConcatMatrix( 
            UINT_PTR pXForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FontName( 
            long cbName,
            char *szName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontCookie( 
            /* [retval][out] */ UINT_PTR *pCookie) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontType( 
            /* [retval][out] */ int *pFontType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GlyphIndex( 
            unsigned short charCode,
            /* [retval][out] */ unsigned short *pGlyphId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEncoding( 
            UINT_PTR encoding) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCharStrings( 
            UINT_PTR charStrings) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCharacteristics( 
            long cbName,
            char *pszName,
            long cbStyle,
            char *pszStyle,
            long cbScript,
            char *pszScript,
            long *pFontWeight,
            FLOAT *pSize,
            UINT_PTR *pAvailableFonts,
            UINT_PTR *pAvailableNames,
            UINT_PTR *pAvailableStyles,
            UINT_PTR *pAvailableScripts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderGlyph( 
            HDC hdc,
            unsigned short bGlyph,
            UINT_PTR pPSXform,
            UINT_PTR pXformToDeviceSpace,
            POINTF *pStartPoint,
            POINTF *pNextPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreState( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFont_EVNSWVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFont_EVNSW * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFont_EVNSW * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFont_EVNSW * This);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, get_Matrix)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Matrix )( 
            IFont_EVNSW * This,
            /* [retval][out] */ LPVOID pResult);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, put_Matrix)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Matrix )( 
            IFont_EVNSW * This,
            UINT_PTR pXForm);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, get_PointSize)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointSize )( 
            IFont_EVNSW * This,
            /* [retval][out] */ FLOAT *pPointSize);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, put_PointSize)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointSize )( 
            IFont_EVNSW * This,
            /* [in] */ FLOAT pointSize);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, FontBoundingBox)
        HRESULT ( STDMETHODCALLTYPE *FontBoundingBox )( 
            IFont_EVNSW * This,
            POINTF *pLowerLeft,
            POINTF *pUpperRight);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, Scale)
        HRESULT ( STDMETHODCALLTYPE *Scale )( 
            IFont_EVNSW * This,
            FLOAT scaleX,
            FLOAT scaleY);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, Translate)
        HRESULT ( STDMETHODCALLTYPE *Translate )( 
            IFont_EVNSW * This,
            FLOAT translateX,
            FLOAT translateY);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, ConcatMatrix)
        HRESULT ( STDMETHODCALLTYPE *ConcatMatrix )( 
            IFont_EVNSW * This,
            UINT_PTR pXForm);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, FontName)
        HRESULT ( STDMETHODCALLTYPE *FontName )( 
            IFont_EVNSW * This,
            long cbName,
            char *szName);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, get_FontCookie)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontCookie )( 
            IFont_EVNSW * This,
            /* [retval][out] */ UINT_PTR *pCookie);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, get_FontType)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontType )( 
            IFont_EVNSW * This,
            /* [retval][out] */ int *pFontType);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, get_GlyphIndex)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GlyphIndex )( 
            IFont_EVNSW * This,
            unsigned short charCode,
            /* [retval][out] */ unsigned short *pGlyphId);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, SetEncoding)
        HRESULT ( STDMETHODCALLTYPE *SetEncoding )( 
            IFont_EVNSW * This,
            UINT_PTR encoding);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, SetCharStrings)
        HRESULT ( STDMETHODCALLTYPE *SetCharStrings )( 
            IFont_EVNSW * This,
            UINT_PTR charStrings);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, GetCharacteristics)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )( 
            IFont_EVNSW * This,
            long cbName,
            char *pszName,
            long cbStyle,
            char *pszStyle,
            long cbScript,
            char *pszScript,
            long *pFontWeight,
            FLOAT *pSize,
            UINT_PTR *pAvailableFonts,
            UINT_PTR *pAvailableNames,
            UINT_PTR *pAvailableStyles,
            UINT_PTR *pAvailableScripts);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, RenderGlyph)
        HRESULT ( STDMETHODCALLTYPE *RenderGlyph )( 
            IFont_EVNSW * This,
            HDC hdc,
            unsigned short bGlyph,
            UINT_PTR pPSXform,
            UINT_PTR pXformToDeviceSpace,
            POINTF *pStartPoint,
            POINTF *pNextPoint);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, SaveState)
        HRESULT ( STDMETHODCALLTYPE *SaveState )( 
            IFont_EVNSW * This);
        
        DECLSPEC_XFGVIRT(IFont_EVNSW, RestoreState)
        HRESULT ( STDMETHODCALLTYPE *RestoreState )( 
            IFont_EVNSW * This);
        
        END_INTERFACE
    } IFont_EVNSWVtbl;

    interface IFont_EVNSW
    {
        CONST_VTBL struct IFont_EVNSWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFont_EVNSW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFont_EVNSW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFont_EVNSW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFont_EVNSW_get_Matrix(This,pResult)	\
    ( (This)->lpVtbl -> get_Matrix(This,pResult) ) 

#define IFont_EVNSW_put_Matrix(This,pXForm)	\
    ( (This)->lpVtbl -> put_Matrix(This,pXForm) ) 

#define IFont_EVNSW_get_PointSize(This,pPointSize)	\
    ( (This)->lpVtbl -> get_PointSize(This,pPointSize) ) 

#define IFont_EVNSW_put_PointSize(This,pointSize)	\
    ( (This)->lpVtbl -> put_PointSize(This,pointSize) ) 

#define IFont_EVNSW_FontBoundingBox(This,pLowerLeft,pUpperRight)	\
    ( (This)->lpVtbl -> FontBoundingBox(This,pLowerLeft,pUpperRight) ) 

#define IFont_EVNSW_Scale(This,scaleX,scaleY)	\
    ( (This)->lpVtbl -> Scale(This,scaleX,scaleY) ) 

#define IFont_EVNSW_Translate(This,translateX,translateY)	\
    ( (This)->lpVtbl -> Translate(This,translateX,translateY) ) 

#define IFont_EVNSW_ConcatMatrix(This,pXForm)	\
    ( (This)->lpVtbl -> ConcatMatrix(This,pXForm) ) 

#define IFont_EVNSW_FontName(This,cbName,szName)	\
    ( (This)->lpVtbl -> FontName(This,cbName,szName) ) 

#define IFont_EVNSW_get_FontCookie(This,pCookie)	\
    ( (This)->lpVtbl -> get_FontCookie(This,pCookie) ) 

#define IFont_EVNSW_get_FontType(This,pFontType)	\
    ( (This)->lpVtbl -> get_FontType(This,pFontType) ) 

#define IFont_EVNSW_get_GlyphIndex(This,charCode,pGlyphId)	\
    ( (This)->lpVtbl -> get_GlyphIndex(This,charCode,pGlyphId) ) 

#define IFont_EVNSW_SetEncoding(This,encoding)	\
    ( (This)->lpVtbl -> SetEncoding(This,encoding) ) 

#define IFont_EVNSW_SetCharStrings(This,charStrings)	\
    ( (This)->lpVtbl -> SetCharStrings(This,charStrings) ) 

#define IFont_EVNSW_GetCharacteristics(This,cbName,pszName,cbStyle,pszStyle,cbScript,pszScript,pFontWeight,pSize,pAvailableFonts,pAvailableNames,pAvailableStyles,pAvailableScripts)	\
    ( (This)->lpVtbl -> GetCharacteristics(This,cbName,pszName,cbStyle,pszStyle,cbScript,pszScript,pFontWeight,pSize,pAvailableFonts,pAvailableNames,pAvailableStyles,pAvailableScripts) ) 

#define IFont_EVNSW_RenderGlyph(This,hdc,bGlyph,pPSXform,pXformToDeviceSpace,pStartPoint,pNextPoint)	\
    ( (This)->lpVtbl -> RenderGlyph(This,hdc,bGlyph,pPSXform,pXformToDeviceSpace,pStartPoint,pNextPoint) ) 

#define IFont_EVNSW_SaveState(This)	\
    ( (This)->lpVtbl -> SaveState(This) ) 

#define IFont_EVNSW_RestoreState(This)	\
    ( (This)->lpVtbl -> RestoreState(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFont_EVNSW_INTERFACE_DEFINED__ */


#ifndef __IFontManager_INTERFACE_DEFINED__
#define __IFontManager_INTERFACE_DEFINED__

/* interface IFontManager */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IFontManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FC20340-4355-4347-8A32-A82E2FB89892")
    IFontManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SeekFont( 
            char *pszFamilyName,
            long dupCount,
            IFont_EVNSW **ppIFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoadFont( 
            char *pszFamilyName,
            UINT_PTR cookie,
            /* [retval][out] */ IFont_EVNSW **ppIFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DuplicateFont( 
            IFont_EVNSW *pIFont,
            UINT_PTR cookie,
            IFont_EVNSW **ppIFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChooseFont( 
            HDC hdc,
            IFont_EVNSW **ppIFont) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenderGlyph( 
            HDC hdc,
            unsigned short bGlyph,
            UINT_PTR pPSXform,
            UINT_PTR pXformToDeviceSpace,
            POINTF *pStartPoint,
            POINTF *pNextPoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScaleFont( 
            FLOAT scaleFactor) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PointSize( 
            /* [in] */ FLOAT pointSize) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFont( 
            /* [retval][out] */ IFont_EVNSW **ppIFont_Current) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CurrentFont( 
            IFont_EVNSW *ppIFont_Current) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFontManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFontManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFontManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFontManager * This);
        
        DECLSPEC_XFGVIRT(IFontManager, SeekFont)
        HRESULT ( STDMETHODCALLTYPE *SeekFont )( 
            IFontManager * This,
            char *pszFamilyName,
            long dupCount,
            IFont_EVNSW **ppIFont);
        
        DECLSPEC_XFGVIRT(IFontManager, LoadFont)
        HRESULT ( STDMETHODCALLTYPE *LoadFont )( 
            IFontManager * This,
            char *pszFamilyName,
            UINT_PTR cookie,
            /* [retval][out] */ IFont_EVNSW **ppIFont);
        
        DECLSPEC_XFGVIRT(IFontManager, DuplicateFont)
        HRESULT ( STDMETHODCALLTYPE *DuplicateFont )( 
            IFontManager * This,
            IFont_EVNSW *pIFont,
            UINT_PTR cookie,
            IFont_EVNSW **ppIFont);
        
        DECLSPEC_XFGVIRT(IFontManager, ChooseFont)
        HRESULT ( STDMETHODCALLTYPE *ChooseFont )( 
            IFontManager * This,
            HDC hdc,
            IFont_EVNSW **ppIFont);
        
        DECLSPEC_XFGVIRT(IFontManager, RenderGlyph)
        HRESULT ( STDMETHODCALLTYPE *RenderGlyph )( 
            IFontManager * This,
            HDC hdc,
            unsigned short bGlyph,
            UINT_PTR pPSXform,
            UINT_PTR pXformToDeviceSpace,
            POINTF *pStartPoint,
            POINTF *pNextPoint);
        
        DECLSPEC_XFGVIRT(IFontManager, ScaleFont)
        HRESULT ( STDMETHODCALLTYPE *ScaleFont )( 
            IFontManager * This,
            FLOAT scaleFactor);
        
        DECLSPEC_XFGVIRT(IFontManager, put_PointSize)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PointSize )( 
            IFontManager * This,
            /* [in] */ FLOAT pointSize);
        
        DECLSPEC_XFGVIRT(IFontManager, get_CurrentFont)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFont )( 
            IFontManager * This,
            /* [retval][out] */ IFont_EVNSW **ppIFont_Current);
        
        DECLSPEC_XFGVIRT(IFontManager, put_CurrentFont)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentFont )( 
            IFontManager * This,
            IFont_EVNSW *ppIFont_Current);
        
        END_INTERFACE
    } IFontManagerVtbl;

    interface IFontManager
    {
        CONST_VTBL struct IFontManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFontManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFontManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFontManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFontManager_SeekFont(This,pszFamilyName,dupCount,ppIFont)	\
    ( (This)->lpVtbl -> SeekFont(This,pszFamilyName,dupCount,ppIFont) ) 

#define IFontManager_LoadFont(This,pszFamilyName,cookie,ppIFont)	\
    ( (This)->lpVtbl -> LoadFont(This,pszFamilyName,cookie,ppIFont) ) 

#define IFontManager_DuplicateFont(This,pIFont,cookie,ppIFont)	\
    ( (This)->lpVtbl -> DuplicateFont(This,pIFont,cookie,ppIFont) ) 

#define IFontManager_ChooseFont(This,hdc,ppIFont)	\
    ( (This)->lpVtbl -> ChooseFont(This,hdc,ppIFont) ) 

#define IFontManager_RenderGlyph(This,hdc,bGlyph,pPSXform,pXformToDeviceSpace,pStartPoint,pNextPoint)	\
    ( (This)->lpVtbl -> RenderGlyph(This,hdc,bGlyph,pPSXform,pXformToDeviceSpace,pStartPoint,pNextPoint) ) 

#define IFontManager_ScaleFont(This,scaleFactor)	\
    ( (This)->lpVtbl -> ScaleFont(This,scaleFactor) ) 

#define IFontManager_put_PointSize(This,pointSize)	\
    ( (This)->lpVtbl -> put_PointSize(This,pointSize) ) 

#define IFontManager_get_CurrentFont(This,ppIFont_Current)	\
    ( (This)->lpVtbl -> get_CurrentFont(This,ppIFont_Current) ) 

#define IFontManager_put_CurrentFont(This,ppIFont_Current)	\
    ( (This)->lpVtbl -> put_CurrentFont(This,ppIFont_Current) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFontManager_INTERFACE_DEFINED__ */


#ifndef __IFontManagerNotifications_INTERFACE_DEFINED__
#define __IFontManagerNotifications_INTERFACE_DEFINED__

/* interface IFontManagerNotifications */
/* [object][unique][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IFontManagerNotifications;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FC20340-4355-4347-8A32-A82E2FB89893")
    IFontManagerNotifications : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ErrorNotification( 
            UINT_PTR errorMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFontManagerNotificationsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFontManagerNotifications * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFontManagerNotifications * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFontManagerNotifications * This);
        
        DECLSPEC_XFGVIRT(IFontManagerNotifications, ErrorNotification)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ErrorNotification )( 
            IFontManagerNotifications * This,
            UINT_PTR errorMessage);
        
        END_INTERFACE
    } IFontManagerNotificationsVtbl;

    interface IFontManagerNotifications
    {
        CONST_VTBL struct IFontManagerNotificationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFontManagerNotifications_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFontManagerNotifications_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFontManagerNotifications_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFontManagerNotifications_ErrorNotification(This,errorMessage)	\
    ( (This)->lpVtbl -> ErrorNotification(This,errorMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFontManagerNotifications_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FontManager;

#ifdef __cplusplus

class DECLSPEC_UUID("1FC20340-4355-4347-8A32-A82E2FB89899")
FontManager;
#endif
#endif /* __FontManager_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


