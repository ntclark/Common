
extern "C" int GetDocumentsLocation(HWND hwnd,char *);

#define LOAD_CONTROLS                                               \
{                                                                   \
   PUT_BOOL(p -> showStartupProperties,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES) \
   PUT_BOOL(p -> openLastDocument,IDDI_DISPOSITION_OPEN_LAST_DOCUMENT)           \
   PUT_BOOL(p -> enforceLargestHeight,IDDI_DISPOSITION_USE_LARGEST_VERTICAL_RES) \
   PUT_BOOL(p -> doAppend,IDDI_DISPOSITION_APPEND)                  \
   PUT_BOOL(p -> doAppendDate,IDDI_DISPOSITION_APPEND_DATE)         \
   PUT_BOOL(p -> doAppendTime,IDDI_DISPOSITION_APPEND_TIME)         \
   PUT_BOOL(p -> doSave,IDDI_DISPOSITION_SAVE)                      \
   PUT_BOOL(p -> doReplace,IDDI_DISPOSITION_REPLACE)                \
   PUT_BOOL(p -> doSequence,IDDI_DISPOSITION_SEQUENCE)              \
   PUT_BOOL(p -> saveMyDocuments && ! p -> saveByOriginal && ! p -> saveIn,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS)          \
   PUT_BOOL(p -> saveByOriginal && ! p-> saveMyDocuments && ! p -> saveIn,IDDI_DISPOSITION_SAVE_BY_ORIGINAL)            \
   PUT_BOOL(p -> saveIn && ! p -> saveMyDocuments && ! p -> saveByOriginal,IDDI_DISPOSITION_SAVE_IN)                    \
   PUT_BOOL(p -> doPrint,IDDI_DISPOSITION_PRINT)                    \
   PUT_BOOL(p -> doProperties,IDDI_DISPOSITION_SHOW_PROPERTIES)     \
   PUT_BOOL(p -> doRetain,IDDI_DISPOSITION_RETAIN_SIGNED)           \
   PUT_BOOL(p -> doCloseDocument,IDDI_DISPOSITION_CLOSE_DOCUMENT)   \
   PUT_BOOL(p -> doReopenOriginal,IDDI_DISPOSITION_REOPEN_ORIGINAL) \
   PUT_BOOL(p -> doExit,IDDI_DISPOSITION_EXIT)                      \
   PUT_BOOL(p -> doShowPadImage,IDDI_DISPOSITION_WHILE_SIGNING_SHOW_PAD)  \
                                                                    \
   PUT_BOOL(p -> doRemember,IDDI_DISPOSITION_REMEMBER)              \
   PUT_BOOL(! p -> doContinuousDoodle,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF)   \
   PUT_BOOL(p -> doContinuousDoodle,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON)      \
                                                                          \
   PUT_STRING(p -> szFileSuffix,IDDI_DISPOSITION_SUFFIX)                  \
   PUT_STRING(p -> szFileStorageDirectory,IDDI_DISPOSITION_SAVE_LOCATION) \
   PUT_STRING(p -> szDestinationPrintName,IDDI_DISPOSITION_PRINTER)       \
                                                                                                  \
   DEFAULT_LONG(p -> maximumSignatures,1L)                                                        \
                                                                                                  \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND),p -> doSave ? TRUE : FALSE);             \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SUFFIX),p -> doAppend && p -> doSave ? TRUE : FALSE);           \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SUFFIX_LABEL),p -> doAppend && p -> doSave ? TRUE : FALSE);     \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND_DATE),p -> doAppend && p -> doSave ? TRUE : FALSE);      \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND_TIME),p -> doAppend && p -> doSave ? TRUE : FALSE);      \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REPLACE),p -> doSave ? TRUE : FALSE);            \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SEQUENCE),p -> doSave ? TRUE : FALSE);           \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_IN_LABEL),p -> doSave ? TRUE : FALSE);      \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS),p -> doSave ? TRUE : FALSE);  \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_BY_ORIGINAL),p -> doSave ? TRUE : FALSE);   \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_IN),p -> doSave ? TRUE : FALSE);            \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_MORE),p -> doSave ? TRUE : FALSE);               \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_LOCATION),p -> doSave && BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_SAVE_IN,BM_GETCHECK,0L,0L) ? TRUE : FALSE); \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_RETAIN_SIGNED),TRUE);                            \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CLOSE_DOCUMENT),TRUE);                           \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_PRINTER),p -> doPrint ? TRUE : FALSE);           \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON),p -> doRemember ? TRUE : FALSE);     \
   EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF),p -> doRemember ? TRUE : FALSE);    \
   ShowWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER),SW_SHOW);                                          \
   ShowWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SHOW_PROPERTIES),p -> userCanChangeDoProperties ? SW_SHOW : SW_SHOW /*SW_HIDE*/);    \
}

#define UNLOAD_CONTROLS                                                             \
{                                                                                   \
   GET_BOOL(p -> showStartupProperties,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES)    \
   GET_BOOL(p -> openLastDocument,IDDI_DISPOSITION_OPEN_LAST_DOCUMENT)              \
   GET_BOOL(p -> enforceLargestHeight,IDDI_DISPOSITION_USE_LARGEST_VERTICAL_RES)    \
   GET_BOOL(p -> doAppend,IDDI_DISPOSITION_APPEND)                                  \
   GET_BOOL(p -> doAppendDate,IDDI_DISPOSITION_APPEND_DATE)                         \
   GET_BOOL(p -> doAppendTime,IDDI_DISPOSITION_APPEND_TIME)                         \
   GET_BOOL(p -> doSave,IDDI_DISPOSITION_SAVE)                                      \
   GET_BOOL(p -> doReplace,IDDI_DISPOSITION_REPLACE)                                \
   GET_BOOL(p -> doSequence,IDDI_DISPOSITION_SEQUENCE)                              \
   GET_BOOL(p -> saveMyDocuments,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS)                \
   GET_BOOL(p -> saveByOriginal,IDDI_DISPOSITION_SAVE_BY_ORIGINAL)                  \
   GET_BOOL(p -> saveIn,IDDI_DISPOSITION_SAVE_IN)                                   \
   GET_BOOL(p -> doPrint,IDDI_DISPOSITION_PRINT)                                    \
   GET_BOOL(p -> doProperties,IDDI_DISPOSITION_SHOW_PROPERTIES)                     \
   GET_BOOL(p -> doRetain,IDDI_DISPOSITION_RETAIN_SIGNED)                           \
   GET_BOOL(p -> doCloseDocument,IDDI_DISPOSITION_CLOSE_DOCUMENT)                   \
   GET_BOOL(p -> doReopenOriginal,IDDI_DISPOSITION_REOPEN_ORIGINAL)                 \
   GET_BOOL(p -> doExit,IDDI_DISPOSITION_EXIT)                                      \
   GET_BOOL(p -> doShowPadImage,IDDI_DISPOSITION_WHILE_SIGNING_SHOW_PAD)            \
   if ( p -> isGlobalDisposition ) {                                                \
      GET_BOOL(p -> doRemember,IDDI_DISPOSITION_REMEMBER)                           \
      GET_BOOL(p -> doContinuousDoodle,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON)       \
   }                                                                                \
   GET_STRING(p -> szFileSuffix,IDDI_DISPOSITION_SUFFIX)                            \
   GET_STRING(p -> szFileStorageDirectory,IDDI_DISPOSITION_SAVE_LOCATION)           \
   GET_STRING(p -> szDestinationPrintName,IDDI_DISPOSITION_PRINTER)                 \
                                                                                    \
}

#define REGISTER_TOOLTIPS(hInst)                                    \
{                                                                   \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES) \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_OPEN_LAST_DOCUMENT)      \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_APPEND)                  \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_APPEND_DATE)             \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_APPEND_TIME)             \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SAVE)                    \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_REPLACE)                 \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SEQUENCE)                \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS)       \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SAVE_BY_ORIGINAL)        \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SAVE_IN)                 \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_PRINT)                   \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SHOW_PROPERTIES)         \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_RETAIN_SIGNED)           \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_REOPEN_ORIGINAL)         \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_CLOSE_DOCUMENT)          \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_EXIT)                    \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_WHILE_SIGNING_SHOW_PAD)  \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SUFFIX)                  \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_SAVE_LOCATION)           \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_PRINTER)                 \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_MORE)                    \
   REGISTER_TOOLTIP(hInst,IDDI_DISPOSITION_REMEMBER)                \
}
