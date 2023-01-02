
#include "CursiVision.h"

   long __stdcall CursiVision::_IHTMLPainter::QueryInterface(REFIID riid,void **ppv) {
 
   if ( IID_IHTMLPainter == riid )
      *ppv = static_cast<IHTMLPainter *>(this);  
   else

      return pParent -> QueryInterface(riid,ppv);

   AddRef();
  
   return S_OK; 
   }
   unsigned long __stdcall CursiVision::_IHTMLPainter::AddRef() {
   return pParent -> AddRef();
   }
   unsigned long __stdcall CursiVision::_IHTMLPainter::Release() {
   return pParent -> Release();
   }

   STDMETHODIMP CursiVision::_IHTMLPainter::Draw(RECT rcBounds,RECT rcUpdate,LONG lDrawFlags,HDC hdc,LPVOID pvDrawObject) {
   return S_OK;
   }


   STDMETHODIMP CursiVision::_IHTMLPainter::OnResize(SIZE size) {
   return S_OK;
   }


   STDMETHODIMP CursiVision::_IHTMLPainter::GetPainterInfo(HTML_PAINTER_INFO *pInfo) {

   pInfo -> lFlags = HTMLPAINTER_OPAQUE | HTMLPAINTER_SUPPORTS_XFORM;
   pInfo -> lZOrder = HTMLPAINT_ZORDER_WINDOW_TOP;
   memset(&pInfo -> rcExpand,0,sizeof(RECT));
   memset(&pInfo -> iidDrawObject,0,sizeof(IID));
   
   return S_OK;
   }


   STDMETHODIMP CursiVision::_IHTMLPainter::HitTestPoint(POINT pt,BOOL *pbHit,LONG *plPartID) {
   return S_OK;
   }

