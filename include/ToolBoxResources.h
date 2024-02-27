
#pragma once

#define IDD_PRINTER_DEVICE_PAGE     400
#define IDD_DISPOSITION_MULTI_SIGN_PROPERTIES   1100

#define IDC_PROCESS_NAME         800
#define IDC_NEXT                 801
#define IDC_PROCESS_FINISHED     802
#define IDC_PREVIOUS             803
#define IDC_OK                   804
#define IDC_CANCEL               805
#define IDC_DELETE               806
#define IDC_PLAY                 807
#define IDC_PROCESS_CANCELED     808
#define IDC_USE_TEXT             809
#define IDC_USE_IMAGE            810
#define IDC_USE_BOTH             811
#define IDC_FORCE_FIT            812
#define IDC_BRANCH_COUNT         813
#define IDC_CHOICE_1             814
#define IDC_CHOICE_2             815
#define IDC_TARGET_1             816
#define IDC_TARGET_2             817

#define ID_PROCESS_OPEN          110
#define ID_PROCESS_NEW           120
#define ID_PROCESS_PLAY          130
#ifdef DO_PROCESSES
#define ID_PROCESS_PLAY_CANCEL   140
#endif
#define ID_QUICK_DRAW            1307
#define ID_QUICK_DRAW_WRITE      1308

#define ID_DOODLE_UNDO           183
#define ID_SEAL                  184
#define ID_REPEAT                185
#define ID_TOPAZ_VALIDATE_SIGNATURE 192

#define IDDI_PDF_PANE            300

#define IDDI_PRINTING_DEVICE_PROFILES              401
#define IDDI_PRINTING_DEVICE_SKETCH_VIEW           402
#define IDDI_PRINTING_DEVICE_BY_NAME_INSTRUCTIONS  403
#define IDDI_PRINTING_DEVICE_PROFILE_EDIT          404
#define IDDI_PRINTING_DEVICE_DISPOSITION           405
#define IDDI_PRINTING_DEVICE_PROFILE_DELETE        406
#define IDDI_PRINTING_DEVICE_PROFILE_USE_FILENAME  407
#define IDDI_PRINTING_DEVICE_PROFILE_NAME          408
#define IDDI_PRINTING_DEVICE_PROFILE_SET_GLOBAL    414
#define IDDI_PRINTING_DEVICE_MANUAL_SELECTION      420

#define IDDI_ASSOCIATION_MESSAGE               1009

#define IDDI_BACKENDS_EMAIL_FROM                301
#define IDDI_BACKENDS_EMAIL_TO                  302
#define IDDI_BACKENDS_EMAIL_CC                  303
#define IDDI_BACKENDS_EMAIL_BCC                 304
#define IDDI_BACKENDS_EMAIL_SUBJECT             305
#define IDDI_BACKENDS_EMAIL_BODY                306
#define IDDI_BACKENDS_EMAIL_BODY_EDIT           307   
#define IDDI_BACKENDS_EMAIL_SERVER              308
#define IDDI_BACKENDS_EMAIL_PORT                309
#define IDDI_BACKENDS_EMAIL_USERNAME            310
#define IDDI_BACKENDS_EMAIL_PASSWORD            311
#define IDDI_BACKENDS_EMAIL_USE_TLS             312
#define IDDI_BACKENDS_EMAIL_SHOWDIALOG          313
#define IDDI_BACKENDS_EMAIL_OK                  314
#define IDDI_BACKENDS_EMAIL_CANCEL              315

#define IDDI_TOOLBOX_NEED_ADMIN_PRIVILEGES      1024


#define IDDI_EVALUATION_MESSAGE                 974

#define IDDI_ABOUT_OK                          1001
#define IDDI_ABOUT_TEXT_0                      1002
#define IDDI_ABOUT_TEXT_1                      1003
#define IDDI_ABOUT_TEXT_2                      1004
#define IDDI_ABOUT_TEXT_3                      1005

#define IDDI_VALIDATION_SIGNED_FILE            1401
#define IDDI_VALIDATION_SIGNED_FILE_GET        1402
#define IDDI_VALIDATION_SIG_FILE               1403
#define IDDI_VALIDATION_SIG_FILE_GET           1404
#define IDDI_VALIDATION_SIGNATURE_PAD_HOST     1405
#define IDDI_VALIDATION_VALIDATE               1406

#define IDDI_VALIDATION_OK                     1410


#define IDDI_PROFILE_INSTRUCTIONS      2001

#define IDS_MAIN_PAGE_0          1
#define IDS_MAIN_PAGE            2
#define IDS_MAIN_PAGE_MORE       3
#define IDS_IMAGE_PAGE           4
#define IDS_IMAGE_PAGE_MORE      5
#define IDS_PROPERTIES           6
#define IDS_PROPERTYPAGES        7
#define IDS_PDF_ENABLER          8
#define IDS_PRINTING_SUPPORT     10
#define IDS_FILE_ASSOCIATION_1   16
#define IDS_FILE_ASSOCIATION_2   17
#define IDS_IS_ASSOCIATED        18
#define IDS_PROCESS_INSTRUCTIONS 20
#define IDS_PROCESS_IMAGE_INSTRUCTIONS 21
#define IDS_PROCESS_TEXT_INSTRUCTIONS  22
#define IDS_PROCESS_BOTH_INSTRUCTIONS  23
#define IDS_PROCESS_NONLCD_INSTRUCTIONS 24
#define IDS_WELCOME              25
#define IDS_BAD_READER           26
#define IDS_CURSIVISION_CONTROL  27
#define IDS_PAD_NOT_CONNECTED    28

#define WM_USER_MIN                 (WM_USER + 101)
#define WM_FINISH_SIGNATURE_PLAY    (WM_USER + 101)
#define WM_FIND_READER              (WM_USER + 102)
#define WM_BRING_TO_TOP             (WM_USER + 105)
#define WM_FIND_READER_STAGE_2      (WM_USER + 106)
#define WM_IMMEDIATE_DOODLE         (WM_USER + 107)
#define WM_OPEN_PDF_FILE            (WM_USER + 108)
#define WM_PDF_FILE_OPENED          (WM_USER + 109)
#define WM_CLEANUP_SIGNATURE_PLAY   (WM_USER + 110)
#define WM_START_PRINT_PROCESSING   (WM_USER + 111)
#define WM_START_ADHOC              (WM_USER + 112)
#define WM_SET_ACTIVE               (WM_USER + 113)
#define WM_POTENTIAL_QUIT           (WM_USER + 114)
#define WM_FINISH_SIGNATURE_PAGE    (WM_USER + 115)
#define WM_FINISH_SIGNATURE_PAGE_2  (WM_USER + 116)
#define WM_PRINT_ONLY               (WM_USER + 117)
#define WM_CONTINUE_PLAY            (WM_USER + 118)
#define WM_PREPARE_SIGNATURE_REPLAY (WM_USER + 119)
#define WM_PLAY_NEXT_PAGE           (WM_USER + 120)
#define WM_CAN_PAD_GET_SIG_DATA     (WM_USER + 121)
#define WM_POST_PAINT               (WM_USER + 122)
#define WM_REGISTER_PAD             (WM_USER + 123)
#define WM_DISPLAY_SIGNATURE_BOX    (WM_USER + 124)
#define WM_APPLY_SIGNATURE          (WM_USER + 125)
#define WM_FIRE_DOCUMENT_OPENED     (WM_USER + 126)
#define WM_FIRE_DOCUMENT_CLOSED     (WM_USER + 127)
#define WM_FORCE_SHUTDOWN           (WM_USER + 128)

#define WM_USER_MAX                 (WM_USER + 128)

#define TIMER_EVENT_MIN_ID             1

#define TIMER_EVENT_FIND_READER        1

#define TIMER_EVENT_BRING_TO_TOP       3
#define TIMER_EVENT_START_DOODLE       4
#define TIMER_EVENT_END_SIGNATURE      5
#define TIMER_EVENT_REDOODLE           7
#define TIMER_EVENT_CONTINUE_PLAY      8
#define TIMER_EVENT_TRACK_PAGE_NUMBER  9
#define TIMER_EVENT_PRINT_ONLY         10
#define TIMER_EVENT_REESTABLISH_PENHOST         12
#define TIMER_EVENT_START_DOODLE_PART2          13
#define TIMER_EVENT_DISPLAY_WAITING             14
#define TIMER_EVENT_REESTABLISH_PENHOST_READERX 15
#define TIMER_EVENT_PDF_FILE_OPENED    17

#define TIMER_EVENT_MAX_ID             17

#define FIND_PAGE_TIMER_DURATION       500
#define ESTABLISH_PENHOST_DURATION     100
#ifdef CURSIVISION_CONTROL_BUILD
#define DOODLE_START_DELAY             500
#else
#define DOODLE_START_DELAY             2500
#endif
#define RE_DOODLE_DELAY                500
#define START_DOODLE_PART_2_DELAY      100
#define PDF_OPENED_DELAY               400

#ifdef CURSIVISION_CONTROL_BUILD
#define FIND_READER_DELAY              500
#define FIND_READER_DELAY_REFIRE       750
//#define FIND_READER_DELAY              500
//#define FIND_READER_DELAY_REFIRE       75
#else
#define FIND_READER_DELAY              2000
#define FIND_READER_DELAY_REFIRE       1000
#endif
