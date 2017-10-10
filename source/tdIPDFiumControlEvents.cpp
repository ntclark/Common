
#include "templateDocument.h"

   // IUnknown

   long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::QueryInterface(REFIID riid,void **ppv) {

   if ( riid == IID_IPDFiumControlEvents )
      *ppv = static_cast<IPDFiumControlEvents *>(this);
   else
      return pParent -> QueryInterface(riid,ppv);

   AddRef();

   return S_OK;
   }
   unsigned long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::AddRef() {
   return pParent -> AddRef();
   }
   unsigned long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::Release() { 
   return pParent -> Release();
   }


   HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::MouseMessage(UINT msg,WPARAM wParam,LPARAM lParam) {
   POINTL ptlTranslated{GET_X_LPARAM(lParam) + pParent -> rcPageParentCoordinates.left,GET_Y_LPARAM(lParam) + pParent -> rcPageParentCoordinates.top};
   SendMessage(pParent -> hwndParent,msg,wParam,MAKELPARAM(ptlTranslated.x,ptlTranslated.y));
   return S_OK;
   }


   HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::Size(SIZE *pSize) {
   return S_OK;
   }

   
   HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::Paint(HDC hdc,RECT *prcUpdate) {

   memcpy(&pParent -> rcVellumPixels,prcUpdate,sizeof(RECT));

   SetWindowPos(pParent -> hwndVellum,HWND_BOTTOM,prcUpdate -> left,prcUpdate -> top,prcUpdate -> right - prcUpdate -> left,prcUpdate -> bottom - prcUpdate -> top,0L);

   if ( pParent -> pClientPaint )
      pParent -> pClientPaint(hdc,pParent);

   return S_OK;
   }