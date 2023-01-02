
#define IDDI_PAD_MODEL_MIN             810

#define IDDI_PAD_MODEL_PHABLET         810
#define IDDI_PAD_MODEL_SIGNOTEC        811
#define IDDI_PAD_MODEL_WACOM_LCD       812
#define IDDI_PAD_MODEL_SCRIPTEL        813
#define IDDI_PAD_MODEL_TABLETPC        814
#define IDDI_PAD_MODEL_PHABLET_NOTE1   815
#define IDDI_PAD_MODEL_PHABLET_NOTE2   816

#define IDDI_PAD_MODEL_CHOICE_LABEL1   830
#define IDDI_PAD_MODEL_CHOICE_LABEL2   831
#define IDDI_PAD_MODEL_CHOICE_NONADMIN 832

#define IDDI_PAD_MODEL_MAX             816

#define STR_PHABLET_MODEL "InnoVisioNate Phablet Signature Pad"
#define STR_SIGNOTEC_MODEL "signotec"
#define STR_WACOM_MODEL "Wacom"
#define STR_SCRIPTEL_MODEL "Scriptel"
#define STR_TABLETPC_MODEL "Windows Tablet PC OS"

#ifdef _WIN64
#define PAD_IMPLEMENTATION_FILES    \
   wchar_t wszFiles[][64] = {       \
               L"pkAPI64.ocx",      \
               L"signotecCV.dll",   \
               L"WacomCV.dll",      \
               L"ScriptelCV.dll",   \
               L"WinTabletCV.dll"};
#else
#define PAD_IMPLEMENTATION_FILES    \
   wchar_t wszFiles[][64] = {       \
               L"pkAPI32.ocx",      \
               L"signotecCV.dll",   \
               L"WacomCV.dll",      \
               L"ScriptelCV.dll",   \
               L"WinTabletCV.dll"};
#endif
