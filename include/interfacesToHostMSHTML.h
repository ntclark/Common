/*
                       Copyright (c) 2014 Nathan T. Clark
*/

#include "pkAPI.h"

#include <msHTML.h>

   // IOleClientSite

   class _IOleClientSite : public IOleClientSite {
   public:

      STDMETHOD (QueryInterface)(REFIID riid,void **ppv);

   private:

      STDMETHOD_ (ULONG, AddRef)() { return 1; };
      STDMETHOD_ (ULONG, Release)() { return 1; };

      long _stdcall SaveObject() { return S_OK; };
      long _stdcall GetMoniker(DWORD,DWORD,IMoniker **) { return S_OK; };
      long _stdcall GetContainer(IOleContainer**) { return E_NOTIMPL; };
      long _stdcall ShowObject() { return S_OK; };
      long _stdcall OnShowWindow(BOOL) { return S_OK; };
      long _stdcall RequestNewObjectLayout() { return S_OK; };

   } *pIOleClientSite = NULL;

   // IOleInPlaceSiteEx

   class _IOleInPlaceSite : public IOleInPlaceSiteEx {
   public:

      STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

   private:

      STDMETHOD_ (ULONG, AddRef)() { return 1; };
      STDMETHOD_ (ULONG, Release)() { return 1; };

      STDMETHOD(GetWindow)(HWND*);
      STDMETHOD(ContextSensitiveHelp)(BOOL) { return S_OK; };
      STDMETHOD(CanInPlaceActivate)() { return S_OK; };
      STDMETHOD(OnInPlaceActivate)() { return S_OK; };
      STDMETHOD(OnUIActivate)() { return S_OK; };
      STDMETHOD(GetWindowContext)(IOleInPlaceFrame**,IOleInPlaceUIWindow**,RECT* position,RECT* clip,OLEINPLACEFRAMEINFO*);
      STDMETHOD(Scroll)(SIZE) { return S_OK; };
      STDMETHOD(OnUIDeactivate)(BOOL) { return S_OK; };
      STDMETHOD(OnInPlaceDeactivate)() { return S_OK; };
      STDMETHOD(DiscardUndoState)() { return S_OK; };
      STDMETHOD(DeactivateAndUndo)() { return S_OK; };
      STDMETHOD(OnPosRectChange)(const RECT*) { return S_OK; };
      STDMETHOD(OnInPlaceActivateEx)(BOOL *,DWORD) { return S_OK; };
      STDMETHOD(OnInPlaceDeactivateEx)(BOOL) { return S_OK; };
      STDMETHOD(RequestUIActivate)() { return S_OK; };

   } *pIOleInPlaceSite = NULL;
