
   long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::QueryInterface(REFIID riid,void **ppv) {

   if ( ! ppv )
      return E_POINTER;

   *ppv = NULL;

   if ( IID_IUnknown == riid ) 
      *ppv = static_cast<IUnknown *>(this);
   else

   if ( IID_IOleClientSite == riid ) 
      *ppv = static_cast<IOleClientSite *>(this);
   else

      return pParent -> QueryInterface(riid,ppv);

   AddRef();

   return S_OK;
   }

   unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::AddRef() {
   return pParent -> AddRef();
   }

   unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::Release() {
   return pParent -> Release();
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::SaveObject() {
   return S_OK;
   }

   
   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::GetMoniker(DWORD,DWORD,IMoniker**) {
   return S_OK;
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::GetContainer(IOleContainer **) {
   return E_NOTIMPL;
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::ShowObject() {
   return S_OK;
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::OnShowWindow(BOOL) {
   return S_OK;
   }


   HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleClientSite::RequestNewObjectLayout() {
   return S_OK;
   }