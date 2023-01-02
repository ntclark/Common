

#include "CursiVision.h"

   long __stdcall CursiVision::_IElementBehavior::QueryInterface(REFIID riid,void **ppv) {
 
   if ( IID_IElementBehavior == riid )
      *ppv = static_cast<IElementBehavior *>(this); 
   else

      return pParent -> QueryInterface(riid,ppv);

   AddRef();
  
   return S_OK; 
   }
   unsigned long __stdcall CursiVision::_IElementBehavior::AddRef() {
   return pParent -> AddRef();
   }
   unsigned long __stdcall CursiVision::_IElementBehavior::Release() {
   return pParent -> Release();
   }


   STDMETHODIMP CursiVision::_IElementBehavior::Init(IElementBehaviorSite *pBehaviorSite) {
   if ( pIHTMLPaintSite )
      pIHTMLPaintSite -> Release();
   pBehaviorSite -> QueryInterface(IID_IHTMLPaintSite,reinterpret_cast<void **>(&pIHTMLPaintSite));
   return S_OK;
   }


   STDMETHODIMP CursiVision::_IElementBehavior::Notify(long theEvent,VARIANT *pVar) {
   return S_OK;
   }


   STDMETHODIMP CursiVision::_IElementBehavior::Detach() {
   return S_OK;
   }

