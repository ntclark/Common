
#include "imageUtilities.h"

#include <gdiplus.h>

   void SaveJPEG(BYTE *pImageData,char *pszFileName) {
   SaveWithEncoder(pImageData,pszFileName,L"image/jpeg");
   return;
   }

   void SavePNG(BYTE *pImageData,char *pszFileName) {
   SaveWithEncoder(pImageData,pszFileName,L"image/png");
   return;
   }

   void SaveGIF(BYTE *pImageData,char *pszFileName) {
   SaveWithEncoder(pImageData,pszFileName,L"image/gif");
   return;
   }

   void SaveTIFF(BYTE *pImageData,char *pszFileName) {
   SaveWithEncoder(pImageData,pszFileName,L"image/tiff");
   return;
   }

   void SaveWithEncoder(BYTE *pImageData,char *pszFileName,WCHAR *pszwEncoderName) {

   SaveBitmapFile(pImageData,pszFileName);

   char szHold[MAX_PATH];

   strcpy(szHold,_tempnam(NULL,NULL));

   CopyFile(pszFileName,szHold,FALSE);

   DeleteFile(pszFileName);

   ULONG_PTR gdiplusToken;
   Gdiplus::GdiplusStartupInput gdiplusStartupInput = 0L;

   Gdiplus::GdiplusStartup(&gdiplusToken,&gdiplusStartupInput,NULL);
   
   BSTR bstrFileName = SysAllocStringLen(NULL,MAX_PATH);
   MultiByteToWideChar(CP_ACP,0,szHold,-1,bstrFileName,MAX_PATH);

   Gdiplus::Image *pImage = new Gdiplus::Bitmap(bstrFileName);

   UINT countEncoders;
   UINT arraySize;
   Gdiplus::ImageCodecInfo *pEncoders;
   Gdiplus::ImageCodecInfo *pTheEncoder = NULL;

   Gdiplus::GetImageEncodersSize(&countEncoders,&arraySize);

   pEncoders = (Gdiplus::ImageCodecInfo *)new BYTE[arraySize];

   Gdiplus::GetImageEncoders(countEncoders,arraySize,pEncoders);

   for ( UINT k = 0; k < countEncoders; k++ ) {
      if ( _wcsicmp(pEncoders[k].MimeType,pszwEncoderName) )
         continue;
      pTheEncoder = &pEncoders[k];
      break;
   }

   SysFreeString(bstrFileName);

   bstrFileName = SysAllocStringLen(NULL,MAX_PATH);

   MultiByteToWideChar(CP_ACP,0,pszFileName,-1,bstrFileName,MAX_PATH);

   Gdiplus::Status fms = pImage -> Save(bstrFileName,&pTheEncoder -> Clsid,NULL);

   SysFreeString(bstrFileName);

   delete [] pEncoders;

   delete pImage;

   Gdiplus::GdiplusShutdown(gdiplusToken);

   DeleteFile(szHold);

   return;
   }


   void SaveBitmapFile(BYTE *pImageData,char *pszBitmapFileName) {
   BITMAPFILEHEADER bitmapFileHeader = {0};
   BITMAPINFOHEADER *pBitmapInfoHeader = (BITMAPINFOHEADER *)pImageData;
   bitmapFileHeader.bfType = 0x4d42;
   bitmapFileHeader.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
   bitmapFileHeader.bfSize = bitmapFileHeader.bfOffBits + pBitmapInfoHeader -> biSizeImage;
   FILE *fImage = fopen(pszBitmapFileName,"wb");
   fwrite(&bitmapFileHeader,sizeof(BITMAPFILEHEADER),1,fImage);
   fwrite(pImageData,sizeof(BITMAPINFOHEADER) + pBitmapInfoHeader -> biSizeImage,1,fImage);
   fclose(fImage);
   return;
   }


   void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszBitmapFileName) {

   BITMAP bitMap;

   GetObject(hBitmap,sizeof(BITMAP),&bitMap);

   _int32 colorTableSize = (_int32)sizeof(RGBQUAD) * ( 1 << (bitMap.bmPlanes * bitMap.bmBitsPixel) );

   long entireSize = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + colorTableSize;

   BYTE *pBuffer = new BYTE[entireSize];

   memset(pBuffer,0,entireSize * sizeof(BYTE));

   BITMAPFILEHEADER *pBitmapFileHeader = (BITMAPFILEHEADER *)pBuffer;

   BITMAPINFO *pBitmapInfo = (BITMAPINFO *)(pBuffer + sizeof(BITMAPFILEHEADER));

   BITMAPINFOHEADER *pBitmapInfoHeader = &(pBitmapInfo -> bmiHeader);
   
   pBitmapInfoHeader -> biSize = sizeof(BITMAPINFOHEADER); 
   pBitmapInfoHeader -> biWidth = bitMap.bmWidth;
   pBitmapInfoHeader -> biHeight = bitMap.bmHeight;
   pBitmapInfoHeader -> biPlanes = bitMap.bmPlanes; 
   pBitmapInfoHeader -> biBitCount = bitMap.bmBitsPixel;
   pBitmapInfoHeader -> biCompression = BI_RGB;
   if ( 1 == bitMap.bmBitsPixel ) {
      pBitmapInfoHeader -> biClrUsed = 2;
      pBitmapInfoHeader -> biClrImportant = 2;
   } else {
      pBitmapInfoHeader -> biClrUsed = 0;
      pBitmapInfoHeader -> biClrImportant = 0;
   }

   pBitmapInfoHeader -> biSizeImage = bitMap.bmHeight * ((bitMap.bmWidth * bitMap.bmPlanes * bitMap.bmBitsPixel + 31) & ~31) / 8 ;

   BYTE *pBits = new BYTE[pBitmapInfoHeader -> biSizeImage];

   memset(pBits,0,pBitmapInfoHeader -> biSizeImage);

   long rc = GetDIBits(hdcSource,hBitmap,0,bitMap.bmHeight,pBits,pBitmapInfo,DIB_RGB_COLORS);

   pBitmapFileHeader -> bfType = 0x4d42;

   pBitmapFileHeader -> bfSize = entireSize + pBitmapInfoHeader -> biSizeImage;

   pBitmapFileHeader -> bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + colorTableSize;

   FILE *fBitmap = fopen(pszBitmapFileName,"wb");

   fwrite(pBitmapFileHeader,sizeof(BITMAPFILEHEADER),1,fBitmap);

   fwrite(pBitmapInfoHeader,sizeof(BITMAPINFOHEADER),1,fBitmap);

   fwrite(pBitmapInfo -> bmiColors,colorTableSize,1,fBitmap);

   fwrite(pBits,pBitmapInfoHeader -> biSizeImage,1,fBitmap);

   fclose(fBitmap);

   delete [] pBuffer;
   delete [] pBits;

   return;
   }   
   