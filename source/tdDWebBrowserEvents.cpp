
#include "templateDocument.h"

#include <IDispIds.h>
#include <exDispId.h>

   // IUnknown

   long __stdcall templateDocument::tdUI::_DWebBrowserEvents2::QueryInterface(REFIID riid,void **ppv) {

   if ( riid == DIID_DWebBrowserEvents2 )
      *ppv = static_cast<_DWebBrowserEvents2 *>(this);
   else
      return pParent -> QueryInterface(riid,ppv);

   AddRef();

   return S_OK;
   }
   unsigned long __stdcall templateDocument::tdUI::_DWebBrowserEvents2::AddRef() {
   return pParent -> AddRef();
   }
   unsigned long __stdcall templateDocument::tdUI::_DWebBrowserEvents2::Release() { 
   return pParent -> Release();
   }
 
   // IDispatch

   STDMETHODIMP templateDocument::tdUI::_DWebBrowserEvents2::GetTypeInfoCount(UINT * pctinfo) { 
   *pctinfo = 0;
   return S_OK;
   } 

   long __stdcall templateDocument::tdUI::_DWebBrowserEvents2::GetTypeInfo(UINT itinfo,LCID lcid,ITypeInfo **pptinfo) { 
   return E_NOTIMPL;
   } 

   STDMETHODIMP templateDocument::tdUI::_DWebBrowserEvents2::GetIDsOfNames(REFIID riid,OLECHAR** rgszNames,UINT cNames,LCID lcid, DISPID* rgdispid) { 
   return E_NOTIMPL;
   }


   STDMETHODIMP templateDocument::tdUI::_DWebBrowserEvents2::Invoke(DISPID dispidMember, REFIID riid, LCID lcid, 
                                           WORD wFlags,DISPPARAMS * pDispParams, VARIANT FAR* pvarResult,
                                           EXCEPINFO FAR* pexcepinfo, UINT FAR* puArgErr) { 

   if ( DISPID_DOCUMENTCOMPLETE == dispidMember ) {
      pParent -> pIPDFiumControl -> GoToPage(1);
      pParent -> pIPDFiumControl -> put_EnableExplorerContextMenu(FALSE);
      pParent -> currentPageNumber = 1;
      long countEntries;
      RECT *pEntries = pParent -> pTextRects(&countEntries);
   }

   return S_OK;
   }