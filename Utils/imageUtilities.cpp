
#include "imageUtilities.h"

#include <gdiplus.h>

#define BLACK RGB(0,0,0)
#define WHITE RGB(255,255,255)

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


    BOOL IsSolidColor(HDC hdc,HBITMAP hBitmap,COLORREF theColor) {

    BITMAP bitMap;
    GetObject(hBitmap,sizeof(BITMAP),&bitMap);

    for ( long k = 0; k < bitMap.bmWidth; k++ ) {
        for ( long j = 0; j < bitMap.bmHeight; j++ ) {
            if ( ! (theColor == GetPixel(hdc,k,j) ) ) {
                return FALSE;
            }
        }

    }

    return TRUE;
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

    boolean wasSupplied = true;
    HGDIOBJ oldObj;
    if ( NULL == hdcSource ) {
        wasSupplied = false;
        hdcSource = CreateCompatibleDC(GetDC(HWND_DESKTOP));
        oldObj = SelectObject(hdcSource,hBitmap);
    }

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

    if ( ! wasSupplied ) {
        SelectObject(hdcSource,oldObj);
        DeleteDC(hdcSource);
    }

    return;
    }
   

    void SaveMonoColor(char *pszSource,char *pszDest,COLORREF monoColor,BYTE grayLevelIsWhite) {

    FILE *fBitmap = fopen(pszSource,"rb");

    if ( NULL == fBitmap )
        return;

    BITMAPFILEHEADER fh;
    BITMAPINFOHEADER bih;

    fread(&fh,sizeof(BITMAPFILEHEADER),1,fBitmap);

    fread(&bih,sizeof(BITMAPINFOHEADER),1,fBitmap);

    if ( 24 > bih.biBitCount ) {
        fclose(fBitmap);
        return;
    }

    _int32 colorTableSize = (_int32)sizeof(RGBQUAD) * ( 1 << (bih.biPlanes * bih.biBitCount) );

    BYTE *pColorTable = new BYTE[colorTableSize];

    fread(pColorTable,colorTableSize,1,fBitmap);

    BYTE *pBits = new BYTE[bih.biSizeImage];

    fread(pBits,bih.biSizeImage,1,fBitmap);

    fclose(fBitmap);

    if ( ! ( WHITE == monoColor ) ) {

        BYTE *pColors = pBits;
        BYTE *pEnd = pBits + bih.biSizeImage;
        long bytesPixel = bih.biBitCount / 8;
        BYTE bWhite[] = {GetRValue(WHITE),GetGValue(WHITE),GetBValue(WHITE)};
        BYTE bMono[] = {GetRValue(monoColor),GetGValue(monoColor),GetBValue(monoColor)};
        while ( pColors < pEnd ) {
            if ( 0 == memcmp(pColors,bWhite,3) ) {
                pColors += bytesPixel;
                continue;
            }
            if ( pColors[0] > grayLevelIsWhite )
                memcpy(pColors,bWhite,3);
            else
                memcpy(pColors,bMono,3);
            pColors += bytesPixel;
        }

    }

    fBitmap = fopen(pszDest,"wb");

    if ( NULL == fBitmap ) {
        delete [] pColorTable;
        delete [] pBits;
        return;
    }

    fwrite(&fh,sizeof(BITMAPFILEHEADER),1,fBitmap);

    fwrite(&bih,sizeof(BITMAPINFOHEADER),1,fBitmap);

    fwrite(pColorTable,colorTableSize,1,fBitmap);

    fwrite(pBits,bih.biSizeImage,1,fBitmap);

    fclose(fBitmap);

    delete [] pColorTable;
    delete [] pBits;

    }


    HBITMAP getBitmapHandle(HDC hdc,char *pszFileName,SIZE *pSize) {

    FILE *fBitmap{NULL};

    fopen_s(&fBitmap,pszFileName,"rb");

    if ( NULL == fBitmap )
        return NULL;

    BITMAPFILEHEADER bitmapFileHeader{0};

    if ( ! fread(&bitmapFileHeader,sizeof(BITMAPFILEHEADER),1,fBitmap) ) {
        fclose(fBitmap);
        return NULL;
    }

    BITMAPINFOHEADER bitmapInfoHeader{0};

    if ( ! fread(&bitmapInfoHeader,sizeof(BITMAPINFOHEADER),1,fBitmap) ) {
        fclose(fBitmap);
        return NULL;
    }

    if ( ! ( 1 == bitmapInfoHeader.biPlanes ) || ( ! ( 24 == bitmapInfoHeader.biBitCount ) && ! ( 32 == bitmapInfoHeader.biBitCount ) ) ) {
        fclose(fBitmap);
        return NULL;
    }

    BITMAPINFO *pBitmapInfo = (BITMAPINFO *)&bitmapInfoHeader;

    if ( pSize ) {
        pSize -> cx = bitmapInfoHeader.biWidth;
        pSize -> cy = bitmapInfoHeader.biHeight;
    }

    long colorTableSize = (long)sizeof(RGBQUAD) * ( 1 << (bitmapInfoHeader.biPlanes * bitmapInfoHeader.biBitCount) );

    long bytesRead = (long)fread(pBitmapInfo -> bmiColors,1,colorTableSize,fBitmap);

    if ( ! ( bytesRead == colorTableSize ) ) {
        fclose(fBitmap);
        return NULL;
    }

    BYTE *pBits = new BYTE[bitmapInfoHeader.biSizeImage];

    fread(pBits,1,bitmapInfoHeader.biSizeImage,fBitmap);

    fclose(fBitmap);

    if ( 0 == bitmapInfoHeader.biSizeImage )
        return NULL;

    bool wasNullDC = false;

    if ( NULL == hdc ) {
        wasNullDC = true;
        hdc = GetDC(HWND_DESKTOP);
    }

    HBITMAP hBitmap = CreateCompatibleBitmap(hdc,bitmapInfoHeader.biWidth,bitmapInfoHeader.biHeight);

    SetDIBits(hdc,hBitmap,0,bitmapInfoHeader.biHeight,pBits,pBitmapInfo,DIB_RGB_COLORS);

    if ( wasNullDC ) 
        ReleaseDC(HWND_DESKTOP,hdc);

    delete [] pBits;

    return hBitmap;
    }
