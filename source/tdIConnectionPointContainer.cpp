
#include "templateDocument.h"


   templateDocument::tdUI::_IConnectionPointContainer::_IConnectionPointContainer(templateDocument::tdUI *pp) : 
     pParent(pp)
   { 
   return;
   }

   templateDocument::tdUI::_IConnectionPointContainer::~_IConnectionPointContainer() {
   return;
   }


   HRESULT templateDocument::tdUI::_IConnectionPointContainer::QueryInterface(REFIID riid,void **ppv) {
   return pParent -> QueryInterface(riid,ppv);
   }


   STDMETHODIMP_(ULONG) templateDocument::tdUI::_IConnectionPointContainer::AddRef() {
   return pParent -> AddRef();
   }

   STDMETHODIMP_(ULONG) templateDocument::tdUI::_IConnectionPointContainer::Release() {
   return pParent -> Release();
   }


   STDMETHODIMP templateDocument::tdUI::_IConnectionPointContainer::EnumConnectionPoints(IEnumConnectionPoints **ppEnum) {

   IConnectionPoint *connectionPoints[1];

   *ppEnum = NULL;
 
   if ( pParent -> pIEnumConnectionPoints_HTML ) 
      delete pParent -> pIEnumConnectionPoints_HTML;
 
   connectionPoints[0] = pParent -> pIConnectionPoint_HTML;

   pParent -> pIEnumConnectionPoints_HTML = new _IEnumConnectionPoints(pParent,connectionPoints,1);
 
   return pParent -> pIEnumConnectionPoints_HTML -> QueryInterface(IID_IEnumConnectionPoints,(void **)ppEnum);
   }
 
 
   STDMETHODIMP templateDocument::tdUI::_IConnectionPointContainer::FindConnectionPoint(REFIID riid,IConnectionPoint **ppCP) {
   *ppCP = NULL;
   if ( IID_IPropertyNotifySink == riid ) {
      return pParent -> pIConnectionPoint_HTML -> QueryInterface(IID_IConnectionPoint,(void **)ppCP);
   }
   return CONNECT_E_NOCONNECTION;
   }
