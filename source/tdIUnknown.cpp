
#include "templateDocument.h"

   // IUnknown

   long __stdcall templateDocument::tdUI::QueryInterface(REFIID riid,void **ppv) {

   if ( ! ppv )
      return E_POINTER;

   *ppv = NULL;

   if ( IID_IUnknown == riid )
      *ppv = static_cast<IUnknown *>(this);
   else

   if ( IID_IOleInPlaceFrame == riid ) 
      *ppv = static_cast<IOleInPlaceFrame *>(pIOleInPlaceFrame_HTML_Host);
   else

   if ( IID_IOleInPlaceSite == riid ) 
      *ppv = static_cast<IOleInPlaceSite *>(pIOleInPlaceSite_HTML_Host);
   else

   if ( IID_IOleInPlaceSiteEx == riid ) 
      *ppv = static_cast<IOleInPlaceSiteEx *>(pIOleInPlaceSite_HTML_Host);
   else

   if ( IID_IOleDocumentSite == riid ) 
      *ppv = static_cast<IOleDocumentSite *>(pIOleDocumentSite_HTML_Host);
   else

   if ( IID_IConnectionPointContainer == riid ) 
      *ppv = static_cast<IConnectionPointContainer *>(pIConnectionPointContainer_HTML);
   else

#if 0
   if ( IID_IConnectionPoint == riid ) 
      *ppv = static_cast<IConnectionPoint *>(&connectionPoint);
   else
#endif

   if ( riid == DIID_DWebBrowserEvents2 )
      return pDWebBrowserEvents_HTML -> QueryInterface(riid,ppv);
   else

   if ( riid == IID_IPDFiumControlEvents )
      return pIPDFiumControlEvents -> QueryInterface(riid,ppv);
   else

      return E_NOINTERFACE;

   AddRef();
   return S_OK;
   }
   unsigned long __stdcall templateDocument::tdUI::AddRef() {
   return ++refCount;
   }
   unsigned long __stdcall templateDocument::tdUI::Release() { 
   return --refCount;
   }