
#pragma once

#ifdef DEFINE_DATA

   char szProgramDirectory[MAX_PATH];
#ifndef CURSIVISION_CONTROL_BUILD
   char szApplicationDataDirectory[MAX_PATH];
   char szUserDirectory[MAX_PATH];
   char szBitmapDirectory[MAX_PATH];
   char szGlobalDataStore[MAX_PATH];
#else
   char savedSignatureGraphicFile[MAX_PATH];
#endif
   char szApplicationName[MAX_PATH];
   char szDefaultPrinter[MAX_PATH];
#else

   extern char szProgramDirectory[];
#ifndef CURSIVISION_CONTROL_BUILD
   extern char szApplicationDataDirectory[];
   extern char szUserDirectory[];
   extern char szBitmapDirectory[];
   extern char szGlobalDataStore[];
#else
   extern char savedSignatureGraphicFile[];
#endif
   extern char szApplicationName[];
   extern char szDefaultPrinter[];
#endif
