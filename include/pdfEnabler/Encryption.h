
#pragma once

#include <windows.h>

#include "Document.h"
#include "Object.h"
#include "Encryption_AES_Implementation.h"

#define MD5_HASHBYTES 16

   struct MD5Context {
      unsigned int buf[4];
      unsigned int bits[2];
      unsigned char input[64];
   };


   class DLLEXPORT PdfEncryption {
   public:

      PdfEncryption(PdfDocument *pp,PdfObject *pEncryptionObject);

      long Authenticate(char *pszUserPassword,char *pszOwnerPassword);

      long Encrypt(PdfObject *pEnryptedObject,BYTE *pInputData,long dataSize);
      long Decrypt(PdfObject *pEnryptedObject,BYTE *pInputData,long dataSize);

   private:

      void  MD5Init(MD5Context *context);
      void  MD5Update(MD5Context *context, unsigned char *buf, unsigned len);
      void  MD5Final(unsigned char digest[MD5_HASHBYTES], MD5Context *context);
      void  MD5Transform(unsigned int buf[4], unsigned int const in[16]);
      char * MD5End(MD5Context *, char *);

      long decipher(PdfObject *pEnryptedObject,BYTE *pInputData,long dataSize);

      // RC4 encryption

      void RC4(unsigned char *pKey, long keyLength,unsigned char *pInput, long inputLength,unsigned char *pOutput);

      void AES(unsigned char *PKey,long,unsigned char *pInput,long inputLength,unsigned char *pOutput);

      void computeEncryptionKey(char *pszPassword);
      void computeOwnerPasswordValue();
      void computeUserPasswordValue();

      PdfDocument *pDocument;
      PdfObject *pEncryptionObject;

      unsigned char encryptionKey[32];
      unsigned char userPasswordEncryptionKey[32];

      unsigned char rawOValue[64];
      unsigned char rawUValue[64];
      
      long oValueLength,uValueLength,documentIdLength;

      unsigned char calculatedOValue[64];
      unsigned char calculatedUValue[64];

      char szDocumentId[MAX_PATH];
      unsigned char *pDocumentId;

      long version,revision,keyLength,keyByteLength;
      long permissionFlags;
      long aesKeyLength;

      char userPassword[32];
      char ownerPassword[32];

      char szCFMValue[8];

      bool encryptMetaData;

      PdfDictionary *pCryptFilterDictionary;

      static AESImplementation aesImplementation;

      static BYTE passwordPaddingString[32];

   };

   