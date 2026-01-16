/*
Copyright 2025 EnVisioNate LLC

Permission is hereby granted, free of charge, to any person obtaining a 
copy of this software and associated documentation files (the “Software”), 
to deal in the Software without restriction, including without limitation 
the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the 
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR 
A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT 
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

This is the MIT License
*/

#define NTDDI_VERSION NTDDI_WIN8

#define WIN32_NO_STATUS
#include <windows.h>
#undef WIN32_NO_STATUS

#include <winternl.h>
#include <ntstatus.h>
#include <winerror.h>
#include <stdio.h>
#include <bcrypt.h>
#include <sal.h>

    BYTE *encryptKey(BOOL doEncrypt,BYTE *pbPassword,DWORD cbPassword,BYTE *pbData,DWORD cbData,DWORD *pcbResult) {

    NTSTATUS  rc;

    BCRYPT_ALG_HANDLE bcryptAlgorithmHandle = NULL;
    BCRYPT_KEY_HANDLE bcryptSymmetricKeyHandle = NULL;

    DWORD cb = sizeof(DWORD);
    DWORD dwBlockLength;

    rc = BCryptOpenAlgorithmProvider(&bcryptAlgorithmHandle,BCRYPT_AES_ALGORITHM,NULL,0);
    rc = BCryptGetProperty(bcryptAlgorithmHandle,BCRYPT_BLOCK_LENGTH,(BYTE *)&dwBlockLength,sizeof(DWORD),&cb,0);
    rc = BCryptGenerateSymmetricKey(bcryptAlgorithmHandle,&bcryptSymmetricKeyHandle,NULL,0,pbPassword,cbPassword,0);

    if ( doEncrypt ) {

        DWORD cbTotalSize = cbData + 16;
        DWORD dwPadding = cbTotalSize % dwBlockLength;
        DWORD dwExtraBytes = dwBlockLength - dwPadding;

        cbTotalSize += dwExtraBytes;

        BYTE *bTotalData = new BYTE[cbTotalSize];
        memset(bTotalData,' ',cbTotalSize);

        char szPadding[9];
        sprintf_s<9>(szPadding,"%08ld",dwExtraBytes);

        memcpy(bTotalData,szPadding,8);

        sprintf_s<9>(szPadding,"%08ld",cbData);

        memcpy(bTotalData + 8,szPadding,8);

        memcpy(bTotalData + 16,pbData,cbData);

        *pcbResult = 0;
        rc = BCryptEncrypt(bcryptSymmetricKeyHandle,bTotalData,cbTotalSize,NULL,NULL,0,NULL,0,pcbResult,BCRYPT_BLOCK_PADDING | BCRYPT_PAD_NONE);
        BYTE *bEncryptedData = new BYTE[*pcbResult];
        rc = BCryptEncrypt(bcryptSymmetricKeyHandle,bTotalData,cbTotalSize,NULL,NULL,0,bEncryptedData,*pcbResult,pcbResult,BCRYPT_BLOCK_PADDING | BCRYPT_PAD_NONE);
        BCryptCloseAlgorithmProvider(bcryptSymmetricKeyHandle,0L);
        delete [] bTotalData;
        return bEncryptedData;
    }

    rc = BCryptDecrypt(bcryptSymmetricKeyHandle,pbData,cbData,NULL,NULL,0,NULL,0,pcbResult,BCRYPT_BLOCK_PADDING | BCRYPT_PAD_NONE);
    BYTE *bDecryptionResult = new BYTE[*pcbResult];
    rc = BCryptDecrypt(bcryptSymmetricKeyHandle,pbData,cbData,NULL,NULL,0,bDecryptionResult,*pcbResult,pcbResult,BCRYPT_BLOCK_PADDING | BCRYPT_PAD_NONE);
    BCryptCloseAlgorithmProvider(bcryptSymmetricKeyHandle,0L);

    char szPadding[]{9*'\0'};
    memcpy(szPadding,bDecryptionResult,8);

    DWORD dwIgnoreBytes = atol(szPadding);

    memcpy(szPadding,bDecryptionResult + 8,8);

    DWORD dwInitialBytes = atol(szPadding);

    BYTE *bResult = new BYTE[dwInitialBytes + 1];

    memcpy(bResult,bDecryptionResult + 16,dwInitialBytes);

    *pcbResult = dwInitialBytes;

    delete [] bDecryptionResult;

    bResult[dwInitialBytes] = '\0';

    return bResult;
    }
    