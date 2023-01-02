
   long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleDocumentSite::QueryInterface(REFIID riid,void **ppv) {

   if ( ! ppv )
      return E_POINTER;

   *ppv = NULL;

   if ( IID_IUnknown == riid ) 
      *ppv = static_cast<IUnknown *>(this);
   else

   if ( IID_IOleDocumentSite == riid ) 
      *ppv = static_cast<IOleDocumentSite *>(this);
   else

      return pParent -> QueryInterface(riid,ppv);

   AddRef();

   return S_OK;
   }

   unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleDocumentSite::AddRef() {
   return pParent -> AddRef();
   }

   unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleDocumentSite::Release() {
   return pParent -> Release();
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleDocumentSite::ActivateMe(IOleDocumentView *pv) {

   if ( pv ) {
      pIOleDocumentView = pv;
      pIOleDocumentView -> AddRef();
      return S_OK;
   }

   IOleDocument *pIOleDocument = NULL;

   if ( E_NOINTERFACE == pParent -> pIOleObject_HTML -> QueryInterface(IID_IOleDocument,reinterpret_cast<void **>(&pIOleDocument) ) )
      return E_UNEXPECTED;

   IOleInPlaceSite *pIOleInPlaceSite = NULL;

   pIOleClientSite -> QueryInterface(IID_IOleInPlaceSite,reinterpret_cast<void **>(&pIOleInPlaceSite));

   pIOleDocument -> CreateView(pIOleInPlaceSite,NULL,0L,&pIOleDocumentView);

   pIOleInPlaceSite -> Release();

   pIOleDocument -> Release();

   RECT rcHost;

   GetClientRect(pIOleClientSite -> pIOleInPlaceSite -> GetIOleInPlaceFrame() -> HWNDHost(),&rcHost);

   pIOleDocumentView -> SetRect(&rcHost);

   pIOleDocumentView -> Show(TRUE);

   return S_OK;
   }
