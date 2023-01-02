
#include <Windows.h>
#include <stdio.h>

    void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszFileName) {

    BITMAP bitMap;

    GetObject(hBitmap,sizeof(BITMAP),&bitMap);

    long colorTableSize = (long)sizeof(RGBQUAD) * ( 1 << (bitMap.bmPlanes * bitMap.bmBitsPixel) );

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

    FILE *fBitmap = fopen(pszFileName,"wb");

    // Write BITMAPFILEHEADER
    fwrite(pBitmapFileHeader,sizeof(BITMAPFILEHEADER),1,fBitmap);

    // Write BITMAPINFOHEADER
    fwrite(pBitmapInfoHeader,sizeof(BITMAPINFOHEADER),1,fBitmap);

    // Write bmiColors;
    fwrite(pBitmapInfo -> bmiColors,colorTableSize,1,fBitmap);

    // Write colorBits;
    fwrite(pBits,pBitmapInfoHeader -> biSizeImage,1,fBitmap);

    fclose(fBitmap);

    delete [] pBuffer;
    delete [] pBits;

    return;
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
