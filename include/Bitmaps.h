#pragma once

    void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszFileName);
    HBITMAP getBitmapHandle(HDC hdc,char *pszFileName,SIZE *pSize = NULL);
