
#include <windows.h>
#include <stdint.h>

    HBITMAP getHBITMAPFromPixels(long cx,long cy,long bitsPerComponent,uint8_t *pBits) {

    BITMAPINFO bitMapInfo;

    memset(&bitMapInfo,0,sizeof(bitMapInfo));

    bitMapInfo.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bitMapInfo.bmiHeader.biWidth = cx;
    bitMapInfo.bmiHeader.biHeight = -cy;
    bitMapInfo.bmiHeader.biPlanes = 1;
    bitMapInfo.bmiHeader.biBitCount = 3 * (unsigned short)bitsPerComponent;
    bitMapInfo.bmiHeader.biCompression = BI_RGB;

    HBITMAP hBitmap = CreateDIBSection(NULL,&bitMapInfo,DIB_RGB_COLORS,NULL,NULL,0L);

    long widthBytes = 3 * cx;
    long stride = ((((cx * 24) + 31) & ~31) >> 3);
    long padding = stride - widthBytes;

    if ( 0 == padding ) {
        int rv = SetDIBits(NULL,hBitmap,0,abs(cy),pBits,&bitMapInfo,DIB_RGB_COLORS);
        return hBitmap;
    }

    long cbBits = stride * abs(cy);

    uint8_t *pRGBBits = new uint8_t[cbBits];

    memset(pRGBBits,0xFF,cbBits);

    uint8_t *pTarget = pRGBBits;
    uint8_t *pSource = pBits;

    for ( long k = 0; k < cy; k++ ) {
        memcpy(pTarget,pSource,stride);
        pTarget += stride;
        pSource += widthBytes;
    }

    SetDIBits(NULL,hBitmap,0,cy,pRGBBits,&bitMapInfo,DIB_RGB_COLORS);

    delete [] pRGBBits;

    return hBitmap;
    }