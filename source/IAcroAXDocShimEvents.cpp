
#include "insertPDF.h"

//
//NTC: This events interface doesn't to a goddamn fucking thing !
//
// FUCK ADOBE !
//
   // IUnknown

   long __stdcall InsertPDF::__IAcroAXDocShimEvents::QueryInterface(REFIID riid,void **ppv) {

   if ( riid == IID_IUnknown )
      *ppv = static_cast<IUnknown *>(this);
   else

   if ( riid == IID_IDispatch )
      *ppv = static_cast<IDispatch *>(this);
   else

   if ( riid == DIID__IAcroAXDocShimEvents )
      *ppv = static_cast<_IAcroAXDocShimEvents *>(this);
   else

      return pParent -> QueryInterface(riid,ppv);

   AddRef();
   return S_OK;
   }

   unsigned long __stdcall InsertPDF::__IAcroAXDocShimEvents::AddRef() {
   refCount++;
   return refCount;
   }
   unsigned long __stdcall InsertPDF::__IAcroAXDocShimEvents::Release() {
   refCount--;
   if ( ! refCount ) {
      delete this;
      return 0;
   }
   return refCount;
   }

   // IDispatch

   STDMETHODIMP InsertPDF::__IAcroAXDocShimEvents::GetTypeInfoCount(UINT * pctinfo) {
   *pctinfo = 0;
   return S_OK;
   }


   long __stdcall InsertPDF::__IAcroAXDocShimEvents::GetTypeInfo(UINT itinfo,LCID lcid,ITypeInfo **pptinfo) {
   *pptinfo = NULL;
   if ( itinfo != 0 )
      return DISP_E_BADINDEX;
   return E_NOTIMPL;
   }


   STDMETHODIMP InsertPDF::__IAcroAXDocShimEvents::GetIDsOfNames(REFIID riid,OLECHAR** rgszNames,UINT cNames,LCID lcid, DISPID* rgdispid) {
//   return DispGetIDsOfNames(pITypeInfo_IServiceObject,rgszNames,cNames,rgdispid);
   return E_NOTIMPL;
   }


   STDMETHODIMP InsertPDF::__IAcroAXDocShimEvents::Invoke(DISPID dispidMember, REFIID riid, LCID lcid,
                                           WORD wFlags,DISPPARAMS FAR* pdispparams, VARIANT FAR* pvarResult,
                                           EXCEPINFO FAR* pexcepinfo, UINT FAR* puArgErr) {
   return E_NOTIMPL;
   }


   STDMETHODIMP InsertPDF::__IAcroAXDocShimEvents::OnError( ) {
   return S_OK;
   }


   STDMETHODIMP InsertPDF::__IAcroAXDocShimEvents::OnMessage( ) {
   return S_OK;
   }

