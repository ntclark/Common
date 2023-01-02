
#pragma once

#ifdef DEFINE_DATA
#ifdef UNICODE
    WCHAR szwProgramDirectory[MAX_PATH];
    WCHAR szwApplicationDataDirectory[MAX_PATH];
    WCHAR szwUserDirectory[MAX_PATH];
    WCHAR szwBitmapDirectory[MAX_PATH];
    WCHAR szwGlobalDataStore[MAX_PATH];
    WCHAR szwDefaultPrinter[MAX_PATH];

    WCHAR szwModuleName[MAX_PATH];
#else
    char szProgramDirectory[MAX_PATH];
    char szApplicationDataDirectory[MAX_PATH];
    char szUserDirectory[MAX_PATH];
    char szBitmapDirectory[MAX_PATH];
    char szGlobalDataStore[MAX_PATH];
    char szDefaultPrinter[MAX_PATH];

    char szModuleName[MAX_PATH];
#endif
    OLECHAR wstrModuleName[MAX_PATH];

#else
#ifdef UNICODE
    extern WCHAR szwProgramDirectory[];
    extern WCHAR szwApplicationDataDirectory[];
    extern WCHAR szwUserDirectory[];
    extern WCHAR szwBitmapDirectory[];
    extern WCHAR szwGlobalDataStore[];
    extern WCHAR szwDefaultPrinter[];

    extern WCHAR szwModuleName[];
#else
    extern char szProgramDirectory[];
    extern char szApplicationDataDirectory[];
    extern char szUserDirectory[];
    extern char szBitmapDirectory[];
    extern char szGlobalDataStore[];
    extern char szDefaultPrinter[];

    extern char szModuleName[];
#endif
    extern OLECHAR wstrModuleName[];

#endif
