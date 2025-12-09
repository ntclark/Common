#pragma once

#define IDMENU_MAIN                     100

#define IDMENU_FILE                     8191
#define IDMENU_WRITING                  8192
#define IDMENU_TOOLS                    8193
#define IDMENU_MORE_TOOLS               8194
#define IDMENU_HELP                     8195

// Commands in the menu

#define IDC_GETFILE                     10101
#define IDC_REOPEN_SOURCE               10102
#define IDC_SAVE_AS                     10103
#define IDC_PRINT                       10104
#define IDC_CLOSE_FILE                  10105
#define IDC_EXIT                        10106

#define IDC_DOODLE                      10201
#define IDC_DOODLE_CANCEL               10202

#define IDC_SETUP                       10301
#define IDC_BACKEND_EXECUTE_1           10302
#define IDC_BACKEND_EXECUTE_MAX         (IDC_BACKEND_EXECUTE_1 + MAX_BACK_END_PROCESSORS)

#define IDC_CURSIVISION_ONLINE_HOME     10401
#define ID_CURSIVISION_ONLINE_VIDEOS    10402
#define IDC_LANG_ENGLISH                10403
#define IDC_LANG_SPANISH                10404
#define IDC_LANG_BUILTIN                10405
#define IDC_ABOUT                       10406

// Commands added dynamically

#define IDC_DOODLE_OPTIONS              20001
#define IDC_DOODLE_FORGET               20002
#define IDC_DOODLE_OPTIONS_RESET        20003

#define IDC_BACKEND_PROPERTIES_1        20010
#define IDC_BACKEND_PROPERTIES_MAX      (IDC_BACKEND_PROPERTIES_1 + MAX_BACK_END_PROCESSORS)

#define IDC_CLOSE_FILE_AND_WAIT         20101
#define IDC_WRITE_UNCOMPRESSED          20102
#define IDC_REMOVE_PAGE                 20103
#define IDC_REMOVE_OTHER_PAGES          20104
#define IDC_REMOVE_PAGES_BEFORE         20105
#define IDC_REMOVE_PAGES_AFTER          20106
#define IDC_FIND_AND_APPLY_PROFILE      20107

#define IDC_CANCEL_PROFILE_SEEK         20108
#define IDC_SELECT_PROFILE              20109
#define IDC_SELECTED_PROFILE_START      20110
#define IDC_UTILIZE_PROFILES            20111


// Dialogs

#define IDD_GLOBAL_REPOSITORY                                100
#define IDDI_GLOBAL_REPOSITORY_LOCATION                      101
#define IDDI_GLOBAL_REPOSITORY_INFO1                         102
#define IDDI_GLOBAL_REPOSITORY_INFO2                         103
#define IDDI_GLOBAL_REPOSITORY                               104
#define IDDI_GLOBAL_REPOSITORY_GET                           105
#define IDDI_GLOBAL_REPOSITORY_INFO3                         106
#define IDDI_GLOBAL_REPOSITORY_INFO4                         107
#define IDDI_GLOBAL_REPOSITORY_INFO5                         108
#define IDDI_GLOBAL_REPOSITORY_NEED_ADMIN                    109


#define IDD_DISPOSITION_PROPERTIES                           200
#define IDDI_DISPOSITION_SAVE                                201
#define IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES_LABEL       202
#define IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES             203
#define IDDI_DISPOSITION_USE_LARGEST_VERTICAL_RES            204
#define IDDI_DISPOSITION_APPEND                              205
#define IDDI_DISPOSITION_APPEND_DATE                         206
#define IDDI_DISPOSITION_APPEND_TIME                         207
#define IDDI_DISPOSITION_SUFFIX                              209
#define IDDI_DISPOSITION_SUFFIX_LABEL                        210
#define IDDI_DISPOSITION_REPLACE                             211
#define IDDI_DISPOSITION_SEQUENCE                            212
#define IDDI_DISPOSITION_SAVE_IN_LABEL                       213
#define IDDI_DISPOSITION_SAVE_MY_DOCUMENTS                   214
#define IDDI_DISPOSITION_SAVE_BY_ORIGINAL                    215
#define IDDI_DISPOSITION_SAVE_IN                             216
#define IDDI_DISPOSITION_SAVE_LOCATION                       217
#define IDDI_DISPOSITION_CHOOSE_SAVE_LOCATION                218
#define IDDI_DISPOSITION_PRINT                               219
#define IDDI_DISPOSITION_PRINTER                             220
#define IDDI_DISPOSITION_SHOW_PROPERTIES                     228
#define IDDI_DISPOSITION_ACCEPT                              230
#define IDDI_DISPOSITION_POST_PROCESSING_LABEL               231
#define IDDI_DISPOSITION_RETAIN_SIGNED                       232
#define IDDI_DISPOSITION_REOPEN_ORIGINAL                     233
#define IDDI_DISPOSITION_CLOSE_DOCUMENT                      234
#define IDDI_DISPOSITION_KEEP_RUNNING_AND_AWAIT_JOB          235
#define IDDI_DISPOSITION_AWAIT_JOB_CLOSE                     236
#define IDDI_DISPOSITION_AWAIT_JOB_MINIMIZE                  237
#define IDDI_DISPOSITION_EXIT                                238
#define IDDI_DISPOSITION_RESET                               239
#define IDDI_DISPOSITION_RESET_LABEL                         240
#define IDDI_DISPOSITION_RESET_LABEL_SPECIFIC_DOC            241
#define IDDI_DISPOSITION_OPEN_LAST_DOCUMENT                  242
#define IDDI_DISPOSITION_WHILE_SIGNING_PROPERTIES_LABEL      243
#define IDDI_DISPOSITION_WHILE_SIGNING_SHOW_PAD              244
#define IDDI_DISPOSITION_CONTINUOUS_DOODLE_LABEL             245
#define IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF               246
#define IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON                247
#define IDDI_DISPOSITION_REMEMBER                            248
#define IDDI_HEADER_TEXT                                     249
#define IDDI_HEADER_TEXT_A                                   250
#define IDDI_HEADER_TEXT_B                                   251
#define IDDI_DO_REMEMBER_LABEL                               252
#define IDDI_NEED_ADMIN_PRIVILEGES                           253
#define IDDI_NO_TEMPLATE_LABEL                               254
#define IDDI_NO_TEMPLATE_LABEL2                              255
#define IDDI_SIGNATURE_REPLICATION_LABEL                     256
#define IDDI_SIGNATURE_REPLICATION_ALLOW                     257
#define IDDI_SIGNATURE_REPLICATION_DISALLOW                  258
#define IDDI_SIGNATURE_REPLICATION_DEFAULT_YES               259
#define IDDI_DISPOSITION_MORE                                261
#define IDDI_DISPOSITION_STAGE_DEFAULTS                      262

#define IDDI_DISPOSITION_ENABLER_MIN    IDDI_DISPOSITION_RETAIN_SIGNED
#define IDDI_DISPOSITION_ENABLER_MAX    IDDI_DISPOSITION_RESET_LABEL

#define IDD_DISPOSITION_MORE                                 280
#define IDDI_DISPOSITION_SAVE_MONTHYEAR                      281
#define IDDI_DISPOSITION_SAVE_DAYMONTH                       282


#define IDD_DISPOSITION_STAGE_DEFAULTS                       300
#define IDDI_DISPOSITION_STAGE_DEFAULTS_PWD                  301
#define IDDI_DISPOSITION_STAGE_DEFAULTS_SUBMIT               302

#define IDD_OPTIONS                                          900
#define IDDI_OPTIONS_TEXT                                    901
#define IDDI_OPTIONS_OPTION_1                                902
#define IDDI_OPTIONS_OPTION_2                                903
#define IDDI_OPTIONS_OPTION_3                                904
#define IDDI_OPTIONS_STATUS                                  905

#define IDD_DOODLE_OPTIONS                                   950
#define IDDI_DOODLE_OPTIONS_LABEL1                           951
#define IDDI_DOODLE_OPTIONS_LABEL2                           952
#define IDDI_DOODLE_OPTIONS_LABEL3                           953
#define IDDI_DOODLE_OPTIONS_LABEL4                           954
#define IDDI_DOODLE_OPTIONS_LABEL5                           955
#define IDDI_DOODLE_OPTIONS_REMEMBER                         956
#define IDDI_DOODLE_OPTIONS_FORGET                           957
#define IDDI_DOODLE_OPTIONS_OWN_DISPOSITION                  958
#define IDDI_DOODLE_OPTIONS_DISPOSITION                      959
#define IDDI_DOODLE_OPTIONS_RESETBUTTON                      960
#define IDDI_DOODLE_OPTIONS_LEFTBUTTON                       961
#define IDDI_DOODLE_OPTIONS_MIDDLEBUTTON                     962
#define IDDI_DOODLE_OPTIONS_RIGHTBUTTON                      963
#define IDDI_DOODLE_OPTIONS_ERASEBUTTON                      964
#define IDDI_DOODLE_OPTIONS_DESC                             965
#define IDDI_DOODLE_OPTIONS_REPLICATION_LABEL                966
#define IDDI_DOODLE_OPTIONS_REPLICATE                        967
#define IDDI_DOODLE_OPTIONS_REPLICATE_SET_YES                968
#define IDDI_DOODLE_OPTIONS_REPLICATE_SET_NO                 969


#define IDD_REGISTRATION                                    1000
#define IDDI_REGISTRATION_CV_IMAGE                          1001
#define IDDI_REGISTRATION_LABEL1                            1002
#define IDDI_REGISTRATION_LABEL2                            1003
#define IDDI_REGISTRATION_LABEL3                            1004
#define IDDI_REGISTRATION_LABEL4                            1005
#define IDDI_REGISTRATION_LABEL5                            1006
#define IDDI_REGISTRATION_LABEL6                            1007
#define IDDI_REGISTRATION_LABEL7                            1008
#define IDDI_REGISTRATION_CONTACT                           1009
#define IDDI_REGISTRATION_ORGANIZATION                      1010
#define IDDI_REGISTRATION_PHONE                             1011
#define IDDI_REGISTRATION_EMAIL                             1012
#define IDDI_REGISTRATION_RESET                             1013
#define IDDI_REGISTRATION_INFO                              1014
#define IDDI_REGISTRATION_INFO_OTHER_MACHINE                1015


#define IDD_BACKENDS                                        1100
#define IDDI_BACKENDS_ALLOW_NON_ADMIN                       1101
#define IDDI_BACKENDS_LIST_LABEL                            1102
#define IDDI_BACKENDS_LIST                                  1103

#define IDDI_BACKENDS_USE_BACKEND                           1110
#define IDDI_BACKENDS_USE_BACKEND_MAX                       (IDDI_BACKENDS_USE_BACKEND + MAX_BACK_END_PROCESSORS)

#define IDDI_BACKENDS_PROPERTIES                            1143
#define IDDI_BACKENDS_PROPERTIES_MAX                        (IDDI_BACKENDS_PROPERTIES + MAX_BACK_END_PROCESSORS)

#define IDDI_BACKENDS_ORDER                                 1180
#define IDDI_BACKENDS_ORDER_MAX                             (IDDI_BACKENDS_ORDER + MAX_BACK_END_PROCESSORS)

#define IDDI_BACKENDS_TOP_LIST_LABEL                        1215
#define IDDI_BACKENDS_TOP_LIST                              1216
#define IDDI_BACKENDS_BOTTOM_LIST_LABEL                     1217
#define IDDI_BACKENDS_BOTTOM_LIST                           1218
#define IDDI_BACKENDS_MOVE_TO_TOP_LIST                      1219
#define IDDI_BACKENDS_REMOVE_FROM_TOP_LIST                  1220
#define IDDI_BACKENDS_INFO1                                 1221
#define IDDI_BACKENDS_INFO2                                 1222
#define IDDI_BACKENDS_INFO3                                 1223
#define IDDI_BACKENDS_INFO4                                 1224
#define IDDI_BACKENDS_INFO5                                 1225


#define IDD_DISPLAY_WAITING                                 1300
#define IDDI_DISPLAY_WAITING_LABEL1                         1301
#define IDDI_DISPLAY_WAITING_LABEL2                         1302
#define IDDI_DISPLAY_WAITING_SHOW_LABEL                     1303
#define IDDI_DISPLAY_WAITING_SHOW                           1304


#define IDD_INHERITED_DOCUMENT                              1400
#define IDDI_INHERITED_DOCUMENT_INFO1                       1401
#define IDDI_INHERITED_DOCUMENT_INFO2                       1402
#define IDDI_INHERITED_DOCUMENT_INFO3                       1403
#define IDDI_INHERITED_DOCUMENT_INFO4                       1404
#define IDDI_INHERITED_DOCUMENT_INFO5                       1405
#define IDDI_INHERITED_DOCUMENT_INFO6                       1406
#define IDDI_INHERITED_DOCUMENT_TEXT                        1407
#define IDDI_INHERITED_DOCUMENT_PROPERTIES                  1408


#define IDD_DOCUMENT_RECOGNITION                            1700
#define IDDI_DOCUMENT_RECOGNITION_BYNAME                    1701
#define IDDI_DOCUMENT_RECOGNITION_INSTRUCTIONS              1702
#define IDDI_DOCUMENT_RECOGNITION_LOCATIONS_RESET           1703
#define IDDI_DOCUMENT_RECOGNITION_LIMIT_REACHED             1704


#define IDD_SIGNING_LOCATIONS                               1800
#define IDDI_SIGNING_LOCATIONS_INSTRUCTIONS                 1801
#define IDDI_SIGNING_LOCATIONS_ADDITIONAL_INFO              1802
#define IDDI_SIGNING_LOCATIONS_MORE_INFORMATION             1803
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_OFF        1804
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_ON         1805
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_REMEMBER   1806
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN      1807
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN_2    1808
#define IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN_3    1809
#define IDDI_SIGNING_LOCATIONS_NEW                          1810
#define IDDI_SIGNING_LOCATIONS_DELETE                       1811
#define IDDI_SIGNING_LOCATIONS_CUT                          1812
#define IDDI_SIGNING_LOCATIONS_COPY                         1813
#define IDDI_SIGNING_LOCATIONS_PASTE                        1814
#define IDDI_SIGNING_LOCATIONS_SET_ORDER                    1815
#define IDDI_SIGNING_LOCATIONS_SKIP_SIGNING                 1816
#define IDDI_SIGNING_LOCATIONS_SKIP_SIGNING_2               1817


#define IDD_SIGNING_LOCATIONS_ORDER                         1850
#define IDDI_SIGNING_LOCATIONS_ORDER                        1851
#define IDDI_SIGNING_LOCATIONS_ORDER_SPIN                   1852
#define IDDI_SIGNING_LOCATIONS_ORDER_LABEL                  1853
#define IDDI_SIGNING_LOCATIONS_ORDER_OK                     1854
#define IDDI_SIGNING_LOCATIONS_ORDER_CANCEL                 1855


#define IDD_DATA_FIELDS                                     1900
#define IDDI_DATA_FIELDS_RESET                              1901
#define IDDI_DATA_FIELDS_INSTRUCTIONS                       1902
#define IDDI_DATA_FIELDS_DELETE                             1903
#define IDDI_DATA_FIELDS_LABEL                              1904
#define IDDI_DATA_FIELDS_GENERATE                           1905
#define IDDI_DATA_FIELDS_GENERATE_LABEL                     1906

#define IDD_DATA_FIELDS_LABEL                               1950
#define IDDI_DATA_FIELDS_LABEL_LABEL_VAL                    1951
#define IDDI_DATA_FIELDS_VALUE_REQUIRED                     1952
#define IDDI_DATA_FIELDS_LABEL_OK                           1953
#define IDDI_DATA_FIELDS_LABEL_CANCEL                       1954
#define IDDI_DATA_FIELDS_SHOW_ALTERNATES                    1955
#define IDDI_DATA_FIELDS_REGENERATE                         1956
#define IDDI_DATA_FIELDS_INSPECT                            1957
#define IDDI_DATA_FIELDS_LIMIT_REACHED                      1958
#define IDDI_DATA_FIELDS_LABEL_LABEL                        1959


#define IDD_ABOUT                                           2000
#define IDDI_ABOUT_SYSTEM_DESCRIPTION                       2001
#define IDDI_ABOUT_VERSION_NO_DATE                          2002
#define IDDI_ABOUT_SIGNATURE_PAD                            2003
#define IDDI_ABOUT_THANK_YOU                                2004
#define IDDI_ABOUT_REGISTRATION_INFO                        2005
#define IDDI_ABOUT_REGISTRATION_INFO_COPY                   2006
#define IDDI_ABOUT_REGISTRATION_INFO_REGISTER               2007
#define IDDI_ABOUT_CHECK_FOR_PRF_UPDATES                    2008
#define IDDI_ABOUT_CHECK_FOR_UPDATES_NO                     2009
#define IDDI_ABOUT_CHECK_FOR_UPDATES_YES                    2010
#define IDDI_ABOUT_CHECK_FOR_UPDATES_DONE                   2011
#define IDDI_ABOUT_CHECK_FOR_VERSION_UPDATE                 2012
#define IDDI_ABOUT_CHECK_FOR_VERSION_UPD_YES                2013
#define IDDI_ABOUT_CHECK_FOR_VERSION_UPD_NO                 2014
#define IDDI_ABOUT_OK                                       2015
#define IDDI_ABOUT_ICON                                     2016

// Global Template Dialogs

#define IDD_GLOBAL_TEMPLATE_MANAGER                         2500
#define IDDI_GLOBAL_TEMPLATE_MANAGER_BUNDLE_LIST_LABEL      2501
#define IDDI_GLOBAL_TEMPLATE_MANAGER_BUNDLE_LIST            2502
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PACKAGE_LIST_LABEL     2503
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PACKAGE_LIST           2504
#define IDDI_GLOBAL_TEMPLATE_MANAGER_ALL_PACKAGES           2505
#define IDDI_GLOBAL_TEMPLATE_MANAGER_NO_PACKAGES            2506
#define IDDI_GLOBAL_TEMPLATE_MANAGER_STAGE_PACKAGES         2507
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PROFILE_RESET_LABEL    2508
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PROFILE_SETTINGS       2509
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PROFILE_RESET          2510
#define IDDI_GLOBAL_TEMPLATE_MANAGER_PROFILE_RESET_WARN     2511
#define IDDI_GLOBAL_TEMPLATE_MANAGER_ALLOW_NON_ADMIN        2512
#define IDDI_GLOBAL_TEMPLATE_MANAGER_OFFLINE                2513


#define IDD_GLOBAL_TEMPLATE_PROFILE_UTILIZATION             2550
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_INST              2551
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_INST2             2552
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_PROFILE_LIST      2553
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_LABEL1            2554
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_LABEL2            2555
#define IDDI_GLOBAL_TEMPLATE_PROFILE_UTIL_PROF_OTHER        2556


#define IDD_GLOBAL_TEMPLATE_IMAGE_MANAGER                   2600
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_INST_SIGAREA         2601
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_LABELW       2602
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_WIDTH        2603
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_SPINLR       2604
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_LABELH       2605
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_HEIGHT       2606
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGAREA_SPINUP       2607
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_INST_SIGAREA_APPLY   2608
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_INST_TYPES           2609
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGNER_TYPES         2610
#define IDDI_GLOBAL_TEMPLATE_IMAGE_MGR_SIGNER_ADD           2611


#define IDD_GLOBAL_TEMPLATE                                 2650
#define IDDI_GLOBAL_TEMPLATE_DOCUMENT_GET_WARN              2651
#define IDDI_GLOBAL_TEMPLATE_OCV_THRESHOLD                  2652
#define IDDI_GLOBAL_TEMPLATE_PROFILES_LABEL                 2653
#define IDDI_GLOBAL_TEMPLATE_PROFILES                       2654
#define IDDI_GLOBAL_TEMPLATE_PROFILE_ADD                    2655
#define IDDI_GLOBAL_TEMPLATE_PROFILE_REMOVE                 2656
#define IDDI_GLOBAL_TEMPLATE_SETTINGS                       2657
#define IDDI_GLOBAL_TEMPLATE_STAGE_FOR_UPDATE               2658
#define IDDI_GLOBAL_TEMPLATE_OCV_THRESHOLD_LBL1             2659
#define IDDI_GLOBAL_TEMPLATE_OCV_BEST_STRATEGY              2660
#define IDDI_GLOBAL_TEMPLATE_TEST_PROFILE                   2661
#define IDDI_GLOBAL_TEMPLATE_MORE_DOCUMENTS                 2662
#define IDDI_GLOBAL_TEMPLATE_MORE_ADD                       2663
#define IDDI_GLOBAL_TEMPLATE_MORE_REMOVE                    2664
#define IDDI_GLOBAL_TEMPLATE_FIELDS_SHOW                    2665
#define IDDI_GLOBAL_TEMPLATE_MORE_INFO                      2666
#define IDDI_GLOBAL_TEMPLATE_EVEN_MORE_INFO                 2667
#define IDDI_GLOBAL_TEMPLATE_PACKAGE_DISABLED               2668
#define IDDI_GLOBAL_TEMPLATE_FIELD_PROPERTIES               2669
#define IDDI_GLOBAL_TEMPLATE_FIELD_DELETE                   2670


#define IDD_GLOBAL_TEMPLATE_FIELD_PROPERTIES                2700
#define IDDI_IMAGE_FIELD_TABS                               2701
#define IDDI_IMAGE_FIELD_FIELD_GB                           2702
#define IDDI_IMAGE_FIELD_DESCRIPTION                        2703
#define IDDI_IMAGE_FIELD_LABEL                              2704
#define IDDI_IMAGE_FIELD_LABEL_LEFT                         2705
#define IDDI_IMAGE_FIELD_LEFT                               2706
#define IDDI_IMAGE_FIELD_LEFT_SPIN                          2707
#define IDDI_IMAGE_FIELD_LABEL_BOTTOM                       2708
#define IDDI_IMAGE_FIELD_BOTTOM                             2709
#define IDDI_IMAGE_FIELD_BOTTOM_SPIN                        2710
#define IDDI_IMAGE_FIELD_LABEL_WIDTH                        2711
#define IDDI_IMAGE_FIELD_WIDTH                              2712
#define IDDI_IMAGE_FIELD_WIDTH_SPIN                         2713
#define IDDI_IMAGE_FIELD_LABEL_HEIGHT                       2714
#define IDDI_IMAGE_FIELD_HEIGHT                             2715
#define IDDI_IMAGE_FIELD_HEIGHT_SPIN                        2716
#define IDDI_IMAGE_FIELD_COMP_SIG_FIELD_GB                  2717
#define IDDI_IMAGE_FIELD_SIG_DESCRIPTION                    2718
#define IDDI_IMAGE_FIELD_SIG_LABEL                          2719
#define IDDI_IMAGE_FIELD_SIG_LABEL_RIGHT                    2720
#define IDDI_IMAGE_FIELD_SIG_RIGHT                          2721
#define IDDI_IMAGE_FIELD_SIG_RIGHT_SPIN                     2722
#define IDDI_IMAGE_FIELD_SIG_LABEL_UP                       2723
#define IDDI_IMAGE_FIELD_SIG_UP                             2724
#define IDDI_IMAGE_FIELD_SIG_UP_SPIN                        2725
#define IDDI_IMAGE_FIELD_SIG_LABEL_WIDTH                    2726
#define IDDI_IMAGE_FIELD_SIG_WIDTH                          2727
#define IDDI_IMAGE_FIELD_SIG_WIDTH_SPIN                     2728
#define IDDI_IMAGE_FIELD_SIG_LABEL_HEIGHT                   2729
#define IDDI_IMAGE_FIELD_SIG_HEIGHT                         2730
#define IDDI_IMAGE_FIELD_SIG_HEIGHT_SPIN                    2731
#define IDDI_IMAGE_FIELD_SIG_NOTIFY_LABEL                   2732
#define IDDI_IMAGE_FIELD_SIG_NOTIFICATION                   2733
#define IDDI_IMAGE_FIELD_SIG_SIGNER_LABEL                   2734
#define IDDI_IMAGE_FIELD_SIG_SIGNER_TYPE                    2735
#define IDDI_IMAGE_FIELD_SIG_SIGNER_NOTE                    2736
#define IDDI_IMAGE_FIELD_SIG_USE_DEFAULT_SIZE               2737
#define IDDI_IMAGE_FIELD_SIG_DEFAULT_SIZE_APPLY             2738
#define IDDI_IMAGE_FIELD_COMP_DATE_FIELD_GB                 2739
#define IDDI_IMAGE_FIELD_DATE_DESCRIPTION                   2740
#define IDDI_IMAGE_FIELD_DATE_LABEL                         2741
#define IDDI_IMAGE_FIELD_DATE_LABEL_RIGHT                   2742
#define IDDI_IMAGE_FIELD_DATE_RIGHT                         2743
#define IDDI_IMAGE_FIELD_DATE_RIGHT_SPIN                    2744
#define IDDI_IMAGE_FIELD_DATE_LABEL_UP                      2745
#define IDDI_IMAGE_FIELD_DATE_UP                            2746
#define IDDI_IMAGE_FIELD_DATE_UP_SPIN                       2747
#define IDDI_IMAGE_FIELD_DATE_LABEL_WIDTH                   2748
#define IDDI_IMAGE_FIELD_DATE_WIDTH                         2749
#define IDDI_IMAGE_FIELD_DATE_WIDTH_SPIN                    2750
#define IDDI_IMAGE_FIELD_DATE_LABEL_HEIGHT                  2751
#define IDDI_IMAGE_FIELD_DATE_HEIGHT                        2752
#define IDDI_IMAGE_FIELD_DATE_HEIGHT_SPIN                   2753
#define IDDI_IMAGE_FIELD_PAGE_FINDER_FIELD_GB               2754
#define IDDI_IMAGE_FIELD_PAGE_FINDER_DESC                   2755
#define IDDI_IMAGE_FIELD_PAGE_FINDER_SELECT_ALL             2756
#define IDDI_IMAGE_FIELD_PAGE_FINDER_SELECT_NONE            2757
#define IDDI_IMAGE_FIELD_PAGE_FINDER_LIST                   2758
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_GB                   2759
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_DESC                 2760
#define IDDI_IMAGE_FIELD_COMP_QUADRANT                      2761
#define IDDI_IMAGE_FIELD_COMP_ISPOSITIONAL                  2762
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WIDEN                2763
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN                 2764
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN2                2765
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN3                2766
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN4                2767
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN5                2768
#define IDDI_IMAGE_FIELD_COMP_QUADRANT_WARN6                2769
#define IDDI_IMAGE_FIELD_PROFILE_FILTER_GB                  2770
#define IDDI_IMAGE_FIELD_PROFILE_FILTER_DESC                2771
#define IDDI_IMAGE_FIELD_PROF_FILTER_SELECT_ALL             2772
#define IDDI_IMAGE_FIELD_PROF_FILTER_SELECT_NONE            2773
#define IDDI_IMAGE_FIELD_PROFILE_FILTER_WARN                2774
#define IDDI_IMAGE_FIELD_PROFILE_FILTER_LIST                2775
#define IDDI_IMAGE_FIELD_TEXT_FINDER_GB                     2776
#define IDDI_IMAGE_FIELD_TEXT_FINDER_DESC                   2777
#define IDDI_IMAGE_FIELD_TEXT_FINDER_RECT                   2778
#define IDDI_IMAGE_FIELD_TEXT_FINDER_TEXT                   2779
#define IDDI_IMAGE_FIELD_TEXT_FINDER_CLEAR                  2780
#define IDDI_IMAGE_FIELD_TEXT_FORCE_IMAGE_MATCH             2781
#define IDDI_IMAGE_FIELD_CANCEL                             2782
#define IDDI_IMAGE_FIELDS_TYPE                              2783


#define IDD_GLOBAL_TEMPLATE_FIELDS                          2800
#define IDDI_GLOBAL_TEMPLATE_CONTROL_IMAGES_LABEL           2801
#define IDDI_GLOBAL_TEMPLATE_IMAGE_DESCRIPTION              2802
#define IDDI_GLOBAL_TEMPLATE_CONTROL_IMAGES                 2803
#define IDDI_GLOBAL_TEMPLATE_OPTIONS_GROUP                  2804
#define IDDI_GLOBAL_TEMPLATE_IMAGE_LOCATION                 2805
#define IDDI_GLOBAL_TEMPLATE_IMAGE_PROPERTIES               2806
#define IDDI_GLOBAL_TEMPLATE_IMAGE_REMOVE                   2807
#define IDDI_IMAGE_FIELD_OK                                 2808


#define IDD_GLOBAL_TEMPLATE_FIELD_ALTERNATES                2850
#define IDDI_IMAGE_FIELD_ALTERNATES_INST                    2851
#define IDDI_IMAGE_FIELD_ALTERNATES_OS_INST                 2852
#define IDDI_IMAGE_FIELD_ALTERNATES_TF_INST                 2853
#define IDDI_IMAGE_FIELD_ALTERNATES_DISP_PANE               2854
#define IDDI_IMAGE_FIELD_ALTERNATES_OS_DISP_PANE            2855
#define IDDI_IMAGE_FIELD_ALTERNATES_TF_DISP_PANE            2856
#define IDDI_IMAGE_FIELD_ALTERNATES_HSCROLL                 2857
#define IDDI_IMAGE_FIELD_ALTERNATES_VSCROLL                 2858
#define IDDI_IMAGE_FIELD_ALTERNATES_INFO                    2859


#define IDD_GLOBAL_TEMPLATE_FIELDS_INSPECT                  2900
#define IDDI_IMAGE_FIELD_INSPECTION_OUTPUT                  2901
#define IDDI_IMAGE_FIELD_INSPECTION_FILE1                   2902
#define IDDI_IMAGE_FIELD_INSPECTION_FILE2                   2903
#define IDDI_IMAGE_FIELD_INSPECTION_FILE3                   2904
#define IDDI_IMAGE_FIELD_INSPECTION_PAGENUMBER              2905
#define IDDI_IMAGE_FIELD_INSPECTION_ALTINDEX                2906

#define IDD_GLOBAL_TEMPLATE_PROFILE                         2950
#define IDDI_PROFILE_SELECTION_INSTRUCTIONS                 2951
#define IDDI_GLOBAL_TEMPLATE_SELECTOR_FIELD_IMAGES_LABEL    2952
#define IDDI_GLOBAL_TEMPLATE_SELECTOR_FIELD_IMAGES          2953
#define IDDI_GLOBAL_TEMPLATE_OPTIONAL_SELECTOR_FLD_IMGS_LBL 2954
#define IDDI_GLOBAL_TEMPLATE_OPTIONAL_SELECTOR_FLD_IMGS     2955
#define IDDI_GLOBAL_TEMPLATE_PAGE_FINDER_FIELD_IMAGES_LABEL 2956
#define IDDI_GLOBAL_TEMPLATE_PAGE_FINDER_FIELD_IMAGES       2957
#define IDDI_GLOBAL_TEMPLATE_SIGNATURE_ROOT_FIELD_IMGS_LBL  2958
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL0                   2959
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL1                   2960
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL2                   2961
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL3                   2962
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL4                   2963
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL5                   2964
#define IDDI_GLOBAL_TEMPLATE_PROFILE_COL6                   2965

// Dialogs in the PrintingSupport project

#define IDD_PROFILE_NAME                                    4000
#define IDDI_PROFILE_NAME                                   4001
#define IDDI_PROFILE_NO_TEMPLATE_LABEL2                     4002
#define IDDI_PROFILE_NO_TEMPLATE_LABEL4                     4003
#define IDDI_PROFILE_TEMPLATE                               4004
#define IDDI_PROFILE_TEMPLATE_GET                           4005
#define IDDI_PROFILE_TEMPLATE_CLEAR                         4006
#define IDDI_PROFILE_NAME_CONFLICTED                        4007
#define IDDI_PROFILE_NAME_LOADING_TEMPLATE                  4008
#define IDDI_PROFILE_NAME_LABEL                             4009
#define IDDI_PROFILE_NO_TEMPLATE_LABEL2B                    4010

#define IDD_PRINTER_PROFILES                                4500
#define IDDI_PRINTING_PROFILES                              4501
#define IDDI_PRINTING_PROFILE_SET_GLOBAL                    4502
#define IDDI_PRINTING_PROFILE_SETTINGS                      4503
#define IDDI_PRINTING_PROFILE_DELETE                        4504
#define IDDI_PRINTING_PROFILE_USE_FILENAME                  4505
#define IDDI_PRINTING_INSTRUCTIONS                          4506
#define IDDI_SELECTED_PROFILE_INFORMATION_GB                4507
#define IDDI_SELECTED_PROFILE_INFORMATION                   4508

#define IDDI_PRINTING_DEVICE_ASSOCIATE_PRC                  4510
#define IDDI_PRINTING_DEVICE_ASSOCIATION                    4511
#define IDDI_PRINTING_DEVICE_ASSOCIATION_FIND               4512
#define IDDI_PRINTING_DEVICE_DOODLE_INSTRUCTIONS_1          4513
#define IDDI_PRINTING_DEVICE_DOODLE_INSTRUCTIONS_2          4514
#define IDDI_PRINTING_DEVICE_JUST_SIGN_LABEL                4515
#define IDDI_PRINTING_DEVICE_JUST_SIGN                      4516
#define IDDI_PRINTING_DEVICE_MANUAL_CREATE_LABEL            4517
#define IDDI_PRINTING_DEVICE_MANUAL_CREATE                  4518
#define IDDI_PRINTING_ALLOW_NON_ADMIN_ACCESS                4519
#define IDDI_PRINTING_NO_RECOGNITION_STRATEGY               4520
#define IDDI_PRINTING_PROFILE_START                         4521
#define IDDI_PRINTING_NEED_ADMIN                            4522

#define IDDI_PRINTING_ALT_RECOGNIZE_SET_GLOBAL              4523  // This value is used in the recognition type enum 
#define IDDI_PRINTING_ALT_RECOGNIZE_SET_GLOBAL_INFO         45231 // This is 10*4523 + 1 
#define IDDI_PRINTING_ALT_RECOGNIZE_SET_GLOBAL_MORE         4524

#define IDDI_PRINTING_ALT_RECOGNIZE_LEGACY                  4525 // as above
#define IDDI_PRINTING_ALT_RECOGNIZE_LEGACY_INFO             45251
#define IDDI_PRINTING_ALT_RECOGNIZE_LEGACY_MORE             4526

#define IDDI_PRINTING_ALT_RECOGNIZE_GLOBAL_TEMPLATE         4527 // as above
#define IDDI_PRINTING_ALT_RECOGNIZE_GLOBAL_TEMPLATE_INFO    45271
#define IDDI_PRINTING_ALT_RECOGNIZE_GLOBAL_TEMPLATE_MORE    4528

#define IDDI_PRINTING_ALT_RECOGNIZE_MANUAL_SELECT           4529 // as above
#define IDDI_PRINTING_ALT_RECOGNIZE_MANUAL_SELECT_INFO      45291
#define IDDI_PRINTING_ALT_RECOGNIZE_MANUAL_SELECT_MORE      4530
#define IDDI_PRINTING_ALT_RECOGNIZE_MANUAL_SELECT_STR2      4531

#define IDDI_PRINTING_ALT_RECOGNIZE_NONE                    4532
#define IDDI_PRINTING_ALT_RECOGNIZE_NONE_MORE               4533
#define IDDI_PRINTING_ALT_RECOGNIZE_DESCRIPTION             4534

#define IDDI_PRIMARY_STRATEGY_GROUPBOX                      4536
#define IDDI_SECONDARY_STRATEGY_GROUPBOX                    4537
#define IDDI_SECONDARY_STRATEGY_DESCRIPTION                 4538

#define IDDI_PRINTING_SCND_RECOGNIZE_LEGACY                 4539
#define IDDI_PRINTING_SCND_RECOGNIZE_LEGACY_SPIN            4540

#define IDDI_PRINTING_SCND_RECOGNIZE_GLOBAL_TEMPLATE        (IDDI_PRINTING_ALT_RECOGNIZE_GLOBAL_TEMPLATE + 1024)
#define IDDI_PRINTING_SCND_RECOGNIZE_GLOBAL_TEMPLATE_SPIN   4541

#define IDDI_PRINTING_SCND_RECOGNIZE_MANUAL_SELECT          (IDDI_PRINTING_ALT_RECOGNIZE_MANUAL_SELECT + 1024)
#define IDDI_PRINTING_SCND_RECOGNIZE_MANUAL_SELECT_SPIN     4542

// Strings in the Printing Support Project

#define IDSTR_PRINTING_INSTRUCTIONS_BUILTIN                 4051
#define IDSTR_PRINTING_INSTRUCTIONS_BYNAME                  4052
#define IDSTR_PRINTING_INSTRUCTIONS_GLOBAL_TEMPLATE         4053
#define IDSTR_SEEKING_PAGE_LOCATOR_AREAS                    4054
#define IDSTR_FOUND_PAGE_LOCATOR_AREA                       4055
#define IDSTR_SEEKING_COMPANION_LOCATOR_AREAS               4056
#define IDSTR_FOUND_COMPANION_LOCATOR_AREA                  4057
#define IDSTR_SELECTED_PROFILE_IS_IMAGE_RECOGNITION         4058
#define IDSTR_SELECTED_PROFILE_IS_LEGACY                    4059

#define IDICON_ICON                     32768
#define IDICON_PROPERTIES               32769
#define IDICON_SAVE_AS                  32770
#define IDICON_LOGO                     32771
#define IDICON_CANCEL                   32772
#define IDICON_DOODLE                   32773
#define IDICON_START                    32774
#define IDICON_CREATE                   32775
#define IDICON_HELP                     32776
#define IDICON_ABOUT                    32778
#define IDICON_OPEN                     32779
#define IDICON_WEB                      32780
#define IDICON_WEB_HOMEPAGE             32781
#define IDICON_WEB_TRAINING             32782
#define IDICON_DOODLE_II                32783
#define IDICON_CANCEL_DISABLED          32784
#define IDICON_PROPERTIES_DISABLED      32785
#define IDICON_FORGET                   32786
#define IDICON_FORGET_DISABLED          32787
#define IDICON_UNDO                     32788
#define IDICON_UNDO_DISABLED            32789
#define IDICON_SEAL                     32790
#define IDICON_SEAL_DISABLED            32791
#define IDICON_REPEAT                   32792
#define IDICON_REPEAT_DISABLED          32793
#define IDICON_SAVE_AS_DISABLED         32794
#define IDICON_DOODLE_DISABLED          32795
#define IDICON_OPEN_DISABLED            32796



#define IDS_PROPERTIES                                              16384
#define IDS_PDF_ENABLER                                             16385
#define IDS_PRINTING_SUPPORT                                        16386
#define IDS_CANT_CREATE_FILE                                        16387
#define IDS_CHANGE_PAD_ADMIN                                        16388
#define IDS_CHANGE_PAD_ADMIN_2                                      16389
#define IDS_NO_PAD                                                  16390
#define IDS_CURSIVISION_NAME                                        16391
#define IDS_CURSIVISION_PRINTING                                    16392
#define IDS_WELCOME_PAGE                                            16393
#define IDS_PRINTDRIVER_NAME                                        16394
#define IDS_REGISTRATION_PRODUCT                                    16395
#define IDS_HOME_PAGE                                               16396
#define IDS_BACKENDS_LIST_LABEL                                     16397
#define IDS_ADMIN_PRIV_REQUIRED                                     16398
#define IDS_ALLOW_ADMIN_CHANGES                                     16399
#define IDS_FOR_THIS_DOCUMENT                                       16400
#define IDS_GLOBAL_SETTINGS                                         16401
#define IDS_START                                                   16402
#define IDS_STOP                                                    16403
#define IDS_NEW                                                     16404
#define IDS_ABOUT_2                                                 16405
#define IDS_NOT_REGISTERED                                          16406
#define IDS_PAD_NOT_CONNECTED                                       16407
#define IDS_ALL_PROPERTIES                                          16408
#define IDS_EXECUTE                                                 16409
#define IDS_LEGACY                                                  16411
#define IDS_YES                                                     16412
#define IDS_NO                                                      16413
#define IDS_DOCUMENT_SETTINGS                                       16414
#define IDS_DOCUMENT_SETTINGS_RESET                                 16415
#define IDS_DOCUMENT_SETTINGS_FORGET                                16416
#define IDS_BUSY                                                    16417
#define IDS_NOTE                                                    16418
#define IDS_NO_PAD_CONNECTED                                        16419
#define IDS_SETUP_TITLE                                             16420
#define IDS_ERROR                                                   16421
#define IDS_READY_TO_SIGN                                           16422
#define IDS_CLEAR                                                   16423
#define IDS_SKIP                                                    16424
#define IDS_OK                                                      16425
#define IDS_SELECT_SIG_LOCATION                                     16426
#define IDS_REMEMBER_1                                              16427
#define IDS_REMEMBER_2                                              16428
#define IDS_REMEMBER_3                                              16429
#define IDS_REMEMBER_4                                              16430
#define IDS_PROFILE                                                 16431
#define IDS_LANG_ENGLISH                                            16432
#define IDS_LANG_SPANISH                                            16433
#define IDS_SAVE_EXIT                                               16434
#define IDS_DISCARD_EXIT                                            16435
#define IDS_SAVE                                                    16436
#define IDS_DISCARD                                                 16437
#define IDS_CONTINUE                                                16438
#define IDS_WAIT                                                    16439
#define IDS_CANCEL                                                  16440
#define IDS_MOVE                                                    16441
#define IDS_SIGNED_SUFFIX                                           16442
#define IDS_LANGUAGE_SWITCHED                                       16443
#define IDS_LANGUAGE_LOCAL_REG                                      16444
#define IDS_LANG_BUILTIN                                            16445
#define IDS_UNHANDLED_SAVE_OPTIONS                                  16446
#define IDS_WAIT_FOR_WRITING_LOCATIONS                              16447
#define IDS_WAIT_FOR_WRITING_LOCATIONS_STATUS                       16448
#define IDS_LOOKING_FOR_PROFILE                                     16449
#define IDS_CHOOSE_DIFFERENT_PROFILE                                16450
#define IDS_LOADING_PROFILES                                        16451
#define IDS_FOUND_PROFILE                                           16452
#define IDS_DOCUMENT_SIGNED_AND_SAVED                               16453
#define IDS_WRITE_ADVICE                                            16454
#define IDS_WRITE_ADVICE_TAIL                                       16455
#define IDS_NOMINAL_NO_DOCUMENT                                     16456
#define IDS_SIGNED_AND_SAVED_TO                                     16457
#define IDS_NO_PROFILES_FOUND                                       16458
#define IDS_ONE_PROFILE_FOUND                                       16459
#define IDS_MULTIPLE_PROFILES_FOUND                                 16460
#define IDS_MULTIPLE_PROFILES_FOUND_TAIL                            16461
#define IDS_CHOOSE_PROFILE_NONE_FOUND                               16462
#define IDS_CHOOSE_PROFILE_NONE_FOUND_TAIL                          16463
#define IDS_CHOOSE_PROFILE_NONE_FOUND_TAIL_TWO                      16464
#define IDS_CHOOSE_PROFILE_NONE_FOUND_TAIL_THREE                    16465
#define IDS_CHOOSE_PROFILE_NONE_FOUND_DEFINE_NEW                    16466
#define IDS_NO_PROFILE_FOUND_NOMINAL_OPTION                         16467
#define IDS_NOMINAL_WAITING_FOR_PRINT                               16468
#define IDS_REGISTRATION_ID_FORMAT                                  16469
#define IDS_REGISTRATION_NOT_REGISTERED                             16470
#define IDS_PROFILE_NAME_FORMAT_1                                   16471
#define IDS_PROFILE_NAME_FORMAT_2                                   16472
#define IDS_CLOSE_AND_MINIMIZE                                      16473
#define IDS_CLOSE_NOT_MINIMIZE                                      16474
#define IDS_NOT_CLOSE_MINIMIZE                                      16475
#define IDS_NOT_CLOSE_NOT_MINIMIZE                                  16476
#define IDS_DELETE_PROFILE                                          16477
#define IDS_PROFILE_SAVE_ERROR                                      16478
#define IDS_GLOBAL_TEMPLATE_IMAGE_DESCRIPTION_FINDER                16479
#define IDS_GLOBAL_TEMPLATE_IMAGE_DESCRIPTION_COMPANION_SELECTOR    16480
#define IDS_GLOBAL_TEMPLATE_IMAGE_DESCRIPTION_COMPANION_OPTIONAL    16481
#define IDS_GLOBAL_TEMPLATE_IMAGE_DESCRIPTION_PAGE_LOCATOR          16482
#define IDS_REGISTRATION_SERVER_OFFLINE                             16483
#define IDS_REGISTRATION_OTHER_MACHINE                              16484
#define IDS_REGISTRATION_TRIAL_USER                                 16485

