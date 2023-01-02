// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

   {

   char szAppendage[MAX_PATH];
   memset(szAppendage,0,sizeof(szAppendage));

   if ( pDisposition -> doAppend ) {

      char *p = szAppendage;

      if ( pDisposition -> szFileSuffix[0] )
         p += sprintf(p + strlen(p),pDisposition -> szFileSuffix);

      if ( pDisposition -> doAppendDate ) {
         char date[128];
         _strdate(date);
         while ( strchr(date,'/') )
            *(strchr(date,'/')) = '_';
         while ( strchr(date,'\\') )
            *(strchr(date,'\\')) = '_';
         p += sprintf(p + strlen(p),"-%s",date);
      }

      if ( pDisposition -> doAppendTime ) {
         char time[128];
         _strtime(time);
         while ( strchr(time,':') )
            *(strchr(time,':')) = '_';
         p += sprintf(p + strlen(p),"-%s",time);
      }

   }

#if defined CURSIVISION_BUILD  || defined CURSIVISION_CONTROL_BUILD
   sprintf(szResultFile,"%s",szActiveDocument);
   char *px = strrchr(szResultFile,'.');
   if ( px )
      *px = '\0';
   sprintf(szResultFile + strlen(szResultFile),szAppendage);
#else
   sprintf(szResultFile + strlen(szResultFile),szAppendage);
#endif

   char szBaseName[MAX_PATH];

   char *p = strrchr(szResultFile,'/');
   if ( ! p )
      p = strrchr(szResultFile,'\\');
   if ( ! p )
      p = szResultFile - 1;

   strcpy(szBaseName,p + 1);

   char szUltimateDirectory[MAX_PATH];

#ifndef RECEPTOR_BUILD

   if ( pDisposition -> saveMyDocuments ) {

      memset(pDisposition -> szMyDocumentsDirectory,0,sizeof(pDisposition -> szMyDocumentsDirectory));

      GetDocumentsLocation(NULL,pDisposition -> szMyDocumentsDirectory);

      sprintf(pDisposition -> szMyDocumentsDirectory + strlen(pDisposition -> szMyDocumentsDirectory),"\\My Signed Documents");

      CreateDirectory(pDisposition -> szMyDocumentsDirectory,0L);

      strcpy(szUltimateDirectory,pDisposition -> szMyDocumentsDirectory);
   
      if ( pDisposition -> saveInMonthYear ) {
         time_t t;
         time(&t);
         char *p = asctime(localtime(&t));
         p[7] = '\0';
         p[24] = '\0';
         sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p + 4,p + 20);
         long rc = CreateDirectory(szUltimateDirectory,0L);
      }

      if ( pDisposition -> saveInDayMonth ) {
         time_t t;
         time(&t);
         char *p = asctime(localtime(&t));
         p[3] = '\0';
         p[10] = '\0';
         sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p,p + 8);
         long rc = CreateDirectory(szUltimateDirectory,0L);
      }

      sprintf(szResultFile,"%s\\%s.pdf",szUltimateDirectory,szBaseName);

   } else {

#endif

      if ( pDisposition -> saveIn ) {

         strcpy(szUltimateDirectory,pDisposition -> szFileStorageDirectory);

         if ( pDisposition -> saveInMonthYear ) {
            time_t t;
            time(&t);
            char *p = asctime(localtime(&t));
            p[7] = '\0';
            p[24] = '\0';
            if ( 0 < strlen(szUltimateDirectory) && ( '\\' == szUltimateDirectory[strlen(szUltimateDirectory) - 1] || '/' == szUltimateDirectory[strlen(szUltimateDirectory) - 1] ) )
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"%s-%s",p + 4,p + 20);
            else
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p + 4,p + 20);
            long rc = CreateDirectoryA(szUltimateDirectory,0L);
         }

         if ( pDisposition -> saveInDayMonth ) {
            time_t t;
            time(&t);
            char *p = asctime(localtime(&t));
            p[3] = '\0';
            p[10] = '\0';
            if ( 0 < strlen(szUltimateDirectory) && ( '\\' == szUltimateDirectory[strlen(szUltimateDirectory) - 1] || '/' == szUltimateDirectory[strlen(szUltimateDirectory) - 1] ) )
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"%s-%s",p,p + 8);
            else
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p,p + 8);
            long rc = CreateDirectoryA(szUltimateDirectory,0L);
         }

         sprintf(szResultFile,"%s\\%s.pdf",szUltimateDirectory,szBaseName);

      } else {

         if ( pDisposition -> saveInMonthYear || pDisposition -> saveInDayMonth ) {

            strcpy(szUltimateDirectory,szResultFile);
            char *p = strrchr(szUltimateDirectory,'\\');
            if ( ! p )
               p = strrchr(szUltimateDirectory,'/');
            if ( p )
               *p = '\0';

            if ( pDisposition -> saveInMonthYear ) {
               time_t t;
               time(&t);
               char *p = asctime(localtime(&t));
               p[7] = '\0';
               p[24] = '\0';
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p + 4,p + 20);
               long rc = CreateDirectoryA(szUltimateDirectory,0L);
            }

            if ( pDisposition -> saveInDayMonth ) {
               time_t t;
               time(&t);
               char *p = asctime(localtime(&t));
               p[3] = '\0';
               p[10] = '\0';
               sprintf(szUltimateDirectory + strlen(szUltimateDirectory),"\\%s-%s",p,p + 8);
               long rc = CreateDirectoryA(szUltimateDirectory,0L);
            }

            sprintf(szResultFile,"%s\\%s.pdf",szUltimateDirectory,szBaseName);

         } else

            sprintf(szResultFile + strlen(szResultFile),".pdf");

      }

#ifndef RECEPTOR_BUILD
   }
#endif

   FILE *fTemp = fopen(szResultFile,"rb");

   if ( fTemp && ! pDisposition -> doReplace && ! pDisposition -> doSequence ) {

      fclose(fTemp);

#ifdef RECEPTOR_BUILD

      isFileSaved = false;

#else
      do {

         OPENFILENAMEA openFileName;

         char szFilter[MAX_PATH];
         char szTemp[2 * MAX_PATH];

         memset(szFilter,0,sizeof(szFilter));
         memset(&openFileName,0,sizeof(OPENFILENAME));

         sprintf(szTemp,"The file exists, please choose a different file.");

         sprintf(szFilter,"Signed Documents");
         long k = (long)strlen(szFilter) + (long)sprintf(szFilter + (long)strlen(szFilter) + 1,"*.pdf");
         k = k + (long)sprintf(szFilter + k + 2,"All Files");
         sprintf(szFilter + k + 3,"*.*");

         openFileName.lStructSize = sizeof(OPENFILENAME);
         openFileName.hwndOwner = hwndMainFrame;
         openFileName.Flags = OFN_OVERWRITEPROMPT | OFN_PATHMUSTEXIST;
         openFileName.lpstrFilter = szFilter;
         openFileName.lpstrFile = szBaseName;
         openFileName.lpstrDefExt = "pdf";
         openFileName.nFilterIndex = 1;
         openFileName.nMaxFile = MAX_PATH;
         openFileName.lpstrTitle = szTemp;
         openFileName.lpstrInitialDir = szUltimateDirectory;

         if ( GetSaveFileNameA(&openFileName) ) {

            bstrResultsFile = SysAllocStringLen(NULL,MAX_PATH);
            strcpy(szResultFile,openFileName.lpstrFile);
            MultiByteToWideChar(CP_ACP,0,openFileName.lpstrFile,-1,bstrResultsFile,MAX_PATH);

            SAVE_FILE

            isFileSaved = true;

            break;

         } else {

            if ( IDYES == MessageBox(hwndMainFrame,"Are you sure you want to cancel the save ?","Note",MB_ICONEXCLAMATION | MB_YESNO | MB_DEFBUTTON2) ) {
               memset(szResultFile,0,sizeof(szResultFile));
               isFileSaved = false;
               break;
            }
         }

      } while ( 1 );

#endif

   } else {

      if ( fTemp ) {

         fclose(fTemp);

         if ( pDisposition -> doSequence ) {

            long maxId = -1;

            char *p = strrchr(szResultFile,'.');

            if ( p ) {
               *p = '\0';
               char *pPeriod = p;
               p--;
               while ( p > szResultFile && isdigit(*p) ) p--;
               p++;
               if ( pPeriod != p && *(p - 1) != '_' )
                  maxId = max(maxId,atol(p));
            }

            char szSequencedFile[MAX_PATH];
            sprintf(szSequencedFile,"%s*",szResultFile);

            WIN32_FIND_DATAA findFile;

            memset(&findFile,0,sizeof(WIN32_FIND_DATA));

            strcpy(findFile.cFileName,szSequencedFile);

            HANDLE hFile = FindFirstFileA(szSequencedFile,&findFile);

            long countExisting = 1;

            do {

               p = strchr(findFile.cFileName,'.');

               if ( p ) {

                  char *pPeriod = p;
                  p--;
                  while ( p > findFile.cFileName && isdigit(*p) ) p--;
                  p++;
                  if ( pPeriod != p && *(p - 1) != '_' )
                     maxId = max(maxId,atol(p));

               } 

               countExisting++;

            } while ( FindNextFileA(hFile,&findFile) );

            FindClose(hFile);

            if ( -1L == maxId )
               maxId = 0;

            sprintf(szSequencedFile,"%s-%ld.pdf",szResultFile,maxId + 1);

            strcpy(szResultFile,szSequencedFile);
         }

      }

      char szDirectory[MAX_PATH];
      strcpy(szDirectory,szResultFile);

      char *p = strrchr(szDirectory,'/');
      if ( ! p )
         p = strrchr(szDirectory,'\\');
      if ( p )
         *p = '\0';

      GetLastError();

      CreateDirectory(szDirectory,NULL);

      long errorCode = GetLastError();

      std::list<char *> interimDirectories;

      while ( p && ERROR_PATH_NOT_FOUND == errorCode ) {

         p = strrchr(szDirectory,'/');
         if ( ! p )
            p = strrchr(szDirectory,'\\');

         if ( ! p )
            break;

         *p = '\0';

         interimDirectories.insert(interimDirectories.end(),p + 1);

         if ( CreateDirectory(szDirectory,NULL) )
            break;

         errorCode = GetLastError();

      }

      if ( 0 < interimDirectories.size() ) {

         for ( std::list<char *>::reverse_iterator it = interimDirectories.rbegin(); it != interimDirectories.rend(); it++ ) {
            sprintf(szDirectory + strlen(szDirectory),"\\%s",(*it));
            CreateDirectory(szDirectory,NULL);
         }

         interimDirectories.clear();

      }

      fTemp = fopen(szResultFile,"ab");

      if ( ! fTemp ) {
#ifndef RECEPTOR_BUILD
         char szCommand[2 * MAX_PATH];
         sprintf(szCommand,"CursiVision is unable to create the file: %s",szResultFile);
         memset(szResultFile,0,sizeof(szResultFile));
         MessageBox(hwndMainFrame,szCommand,"Error!",MB_OK | MB_ICONEXCLAMATION);
#endif
         isFileSaved = false;
      } else {
         fclose(fTemp);
         //DeleteFile(szResultFile);
         fTemp = NULL;
         bstrResultsFile = SysAllocStringLen(NULL,MAX_PATH);
         MultiByteToWideChar(CP_ACP,0,szResultFile,-1,bstrResultsFile,MAX_PATH);

         SAVE_FILE

         isFileSaved = true;
      }

      if ( fTemp )
         fclose(fTemp);

   }

   }