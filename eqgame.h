/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Jan  5 2022"
#define __ExpectedVersionTime                                     "12:11:01"
#define __ActualVersionDate_x                                      0xB516A4
#define __ActualVersionTime_x                                      0xB51698
#define __ActualVersionBuild_x                                     0xB4187C

// Memory Protection
#define __MemChecker0_x                                            0x6632C0
#define __MemChecker1_x                                            0x94FCC0
#define __MemChecker2_x                                            0x6DDC70
#define __MemChecker3_x                                            0x6DDBE0
#define __MemChecker4_x                                            0x636380
#define __EncryptPad0_x                                            0xE51BF0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDACDC8
#define __ScreenY_x                                                0xDACDD0
#define __ScreenX_x                                                0xDACDD4
#define __ScreenXMax_x                                             0xDACDD8
#define __ScreenYMax_x                                             0xDACDDC
#define __InChatMode_x                                             0xDACE1C
#define __RunWalkState_x                                           0xDACE20
#define DI8__Mouse_Copy_x                                          0xDACE34
#define __MouseLook_x                                              0xDACEB2
#define __NetStatusToggle_x                                        0xDACEB5
#define __pulAutoRun_x                                             0xDACED0
#define __Clicks_x                                                 0xDACEEC
#define __RMouseHeldTime_x                                         0xDACF54
#define __LMouseHeldTime_x                                         0xDACF58
#define __ZoneType_x                                               0xDAD2B0
#define __ShiftKeyDown_x                                           0xDAD4B0
#define __AutoSkillArray_x                                         0xDAD950
#define __RangeAttackReady_x                                       0xDADC34
#define __AttackOnAssist_x                                         0xDADDAC
#define __ShowNames_x                                              0xDADDF0
#define __PCNames_x                                                0xDADF40
#define __UseTellWindows_x                                         0xDAE0D8
#define __pulForward_x                                             0xDAE110
#define __pulBackward_x                                            0xDAE114
#define __pulTurnRight_x                                           0xDAE118
#define __pulTurnLeft_x                                            0xDAE11C
#define __pulStrafeLeft_x                                          0xDAE120
#define __pulStrafeRight_x                                         0xDAE124
#define __LastTell_x                                               0xDAE990
#define __ServerName_x                                             0xDE3254
#define __DoAbilityList_x                                          0xDE3294
#define __SocialChangedList_x                                      0xDE32DC
#define __Socials_x                                                0xDE3354
#define __Inviter_x                                                0xE4B6F0
#define __Attack_x                                                 0xE4B773
#define __Autofire_x                                               0xE4B774

// Misc Globals
#define __do_loot_x                                                0x5E05D0
#define __gfMaxZoomCameraDistance_x                                0xB4951C
#define __gfMaxCameraDistance_x                                    0xB71EE0
#define __CurrentSocial_x                                          0xC5D460
#define __BindList_x                                               0xDA24E8
#define g_eqCommandStates_x                                        0xDA3250
#define __CommandList_x                                            0xDA3DD8
#define __ScreenMode_x                                             0xEDF184
#define __GroupCount_x                                             0xF92E7A
#define __gWorld_x                                                 0xF9308C
#define __gpbCommandEvent_x                                        0xF93198
#define __ServerHost_x                                             0xF93363
#define __Guilds_x                                                 0xF972E0
#define __MouseEventTime_x                                         0xF98D0C
#define DI8__Mouse_Check_x                                         0xF9D844
#define __heqmain_x                                                0xF9FCD8
#define DI8__Mouse_x                                               0xF9FCE4
#define __HWnd_x                                                   0xF9FCE8
#define __Mouse_x                                                  0xF9FD70
#define DI8__Main_x                                                0xF9FD84
#define DI8__Keyboard_x                                            0xF9FD88
#define __LoginName_x                                              0xFA0454
#define __CurrentMapLabel_x                                        0xFB08E4
#define __TargetAggroHolder_x                                      0xFB3298
#define __GroupAggro_x                                             0xFB32D8
#define __SubscriptionType_x                                       0xFE7538

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF93678
#define instEQZoneInfo_x                                           0xDAD0A8
#define pinstActiveBanker_x                                        0xF90D78
#define pinstActiveCorpse_x                                        0xF90D70
#define pinstActiveGMaster_x                                       0xF90D74
#define pinstActiveMerchant_x                                      0xF90D6C
#define pinstAltAdvManager_x                                       0xEDFF88
#define pinstBandageTarget_x                                       0xF90D88
#define pinstCEverQuest_x                                          0xF9FCEC
#define pinstCamActor_x                                            0xEDF178
#define pinstCDBStr_x                                              0xEDECF8
#define pinstCDisplay_x                                            0xF90DF4
#define pinstControlledMissile_x                                   0xF90DCC
#define pinstControlledPlayer_x                                    0xF90DC0
#define pinstCResolutionHandler_x                                  0x1622408
#define pinstCSidlManager_x                                        0x16213A4
#define pinstCXWndManager_x                                        0x162139C
#define instDynamicZone_x                                          0xF971B8
#define pinstDZMember_x                                            0xF972C8
#define pinstDZTimerInfo_x                                         0xF972CC
#define pinstEqLogin_x                                             0xF9FDA0
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE0898
#define pinstEQSpellStrings_x                                      0xECF998
#define instExpeditionLeader_x                                     0xF97202
#define instExpeditionName_x                                       0xF97242
#define pinstSGraphicsEngine_x                                     0x16221D4
#define pinstGroup_x                                               0xF92E76
#define pinstImeManager_x                                          0x16213A0
#define pinstLocalPC_x                                             0xF90DE4
#define pinstLocalPlayer_x                                         0xF90D68
#define pinstMercenaryData_x                                       0xF9A7FC
#define pinstMercenaryStats_x                                      0xFB3364
#define pinstModelPlayer_x                                         0xF90D80
#define pinstRenderInterface_x                                     0x16221E0
#define pinstSkillMgr_x                                            0xF9C8F0
#define pinstSpawnManager_x                                        0xF9B3C8
#define pinstSpellManager_x                                        0xF9CB30
#define pinstSpellSets_x                                           0xE4439C
#define pinstStringTable_x                                         0xF90DF0
#define pinstSwitchManager_x                                       0xF90C18
#define pinstTarget_x                                              0xF90DBC
#define pinstTargetObject_x                                        0xF90DDC
#define pinstTargetSwitch_x                                        0xF90DE0
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90DC4
#define pinstTradeTarget_x                                         0xF90D7C
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF174
#define pinstWorldData_x                                           0xF90DEC
#define pinstZoneAddr_x                                            0xDAD348
#define pinstPlayerPath_x                                          0xF9B460
#define pinstTargetIndicator_x                                     0xF9CD98
#define EQObject_Top_x                                             0xF90DD8

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDEDAC
#define pinstCAchievementsWnd_x                                    0xEDEE54
#define pinstCActionsWnd_x                                         0xEDF16C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF194
#define pinstCAdvancedLootWnd_x                                    0xEDF170
#define pinstCAdventureLeaderboardWnd_x                            0xFAA108
#define pinstCAdventureRequestWnd_x                                0xFAA1B8
#define pinstCAdventureStatsWnd_x                                  0xFAA268
#define pinstCAggroMeterWnd_x                                      0xEDEEE4
#define pinstCAlarmWnd_x                                           0xEDEDA4
#define pinstCAlertHistoryWnd_x                                    0xEDF150
#define pinstCAlertStackWnd_x                                      0xEDF130
#define pinstCAlertWnd_x                                           0xEDF138
#define pinstCAltStorageWnd_x                                      0xFAA5C8
#define pinstCAudioTriggersWindow_x                                0xEC1CC8
#define pinstCAuraWnd_x                                            0xEDF1B4
#define pinstCAvaZoneWnd_x                                         0xEDEE3C
#define pinstCBandolierWnd_x                                       0xEDF1C4
#define pinstCBankWnd_x                                            0xEDF154
#define pinstCBarterMerchantWnd_x                                  0xFAB808
#define pinstCBarterSearchWnd_x                                    0xFAB8B8
#define pinstCBarterWnd_x                                          0xFAB968
#define pinstCBazaarConfirmationWnd_x                              0xEDEDB8
#define pinstCBazaarSearchWnd_x                                    0xEDEE80
#define pinstCBazaarWnd_x                                          0xEDEE28
#define pinstCBlockedBuffWnd_x                                     0xEDEEAC
#define pinstCBlockedPetBuffWnd_x                                  0xEDEEB4
#define pinstCBodyTintWnd_x                                        0xEDEDD8
#define pinstCBookWnd_x                                            0xEDF15C
#define pinstCBreathWnd_x                                          0xEDEDB0
#define pinstCBuffWindowNORMAL_x                                   0xEDEEA4
#define pinstCBuffWindowSHORT_x                                    0xEDEEA8
#define pinstCBugReportWnd_x                                       0xEDEE60
#define pinstCButtonWnd_x                                          0x1621608
#define pinstCCastingWnd_x                                         0xEDEEE0
#define pinstCCastSpellWnd_x                                       0xEDEEF0
#define pinstCCharacterListWnd_x                                   0xEDEE84
#define pinstCChatWindowManager_x                                  0xFAC410
#define pinstCClaimWnd_x                                           0xFAC568
#define pinstCColorPickerWnd_x                                     0xEDEE98
#define pinstCCombatAbilityWnd_x                                   0xEDF1A8
#define pinstCCombatSkillsSelectWnd_x                              0xEDF1A4
#define pinstCCompassWnd_x                                         0xEDF1B8
#define pinstCConfirmationDialog_x                                 0xFB1430
#define pinstCContainerMgr_x                                       0xEDEDA8
#define pinstCContextMenuManager_x                                 0x1621358
#define pinstCCursorAttachment_x                                   0xEDEED8
#define pinstCDynamicZoneWnd_x                                     0xFACB30
#define pinstCEditLabelWnd_x                                       0xEDEE44
#define pinstCEQMainWnd_x                                          0xFACD78
#define pinstCEventCalendarWnd_x                                   0xEDED9C
#define pinstCExtendedTargetWnd_x                                  0xEDEEDC
#define pinstCPlayerCustomizationWnd_x                             0xEDEE8C
#define pinstCFactionWnd_x                                         0xEDEEEC
#define pinstCFellowshipWnd_x                                      0xFACF78
#define pinstCFileSelectionWnd_x                                   0xEDF1B0
#define pinstCFindItemWnd_x                                        0xEDEDE0
#define pinstCFindLocationWnd_x                                    0xFAD0D0
#define pinstCFriendsWnd_x                                         0xEDF1AC
#define pinstCGemsGameWnd_x                                        0xEDED98
#define pinstCGiveWnd_x                                            0xEDEE34
#define pinstCGroupSearchFiltersWnd_x                              0xEDEEC4
#define pinstCGroupSearchWnd_x                                     0xFAD4C8
#define pinstCGroupWnd_x                                           0xFAD578
#define pinstCGuildBankWnd_x                                       0xFAD628
#define pinstCGuildCreationWnd_x                                   0xFAD6D8
#define pinstCGuildMgmtWnd_x                                       0xFAD788
#define pinstCharacterCreation_x                                   0xEDEED4
#define pinstCHelpWnd_x                                            0xEDF13C
#define pinstCHeritageSelectionWnd_x                               0xEDEE90
#define pinstCHotButtonWnd_x                                       0xFAF8E0
#define pinstCHotButtonWnd1_x                                      0xFAF8E0
#define pinstCHotButtonWnd2_x                                      0xFAF8E4
#define pinstCHotButtonWnd3_x                                      0xFAF8E8
#define pinstCHotButtonWnd4_x                                      0xFAF8EC
#define pinstCIconSelectionWnd_x                                   0xEDEE5C
#define pinstCInspectWnd_x                                         0xEDEE50
#define pinstCInventoryWnd_x                                       0xEDF140
#define pinstCInvSlotMgr_x                                         0xEDF1C8
#define pinstCItemDisplayManager_x                                 0xFAFE38
#define pinstCItemExpTransferWnd_x                                 0xFAFF68
#define pinstCItemOverflowWnd_x                                    0xEDEE14
#define pinstCJournalCatWnd_x                                      0xEDEDC8
#define pinstCJournalNPCWnd_x                                      0xEDEDBC
#define pinstCJournalTextWnd_x                                     0xEDEDBC
#define pinstCKeyRingWnd_x                                         0xEDF148
#define pinstCLargeDialogWnd_x                                     0xFB20B0
#define pinstCLayoutCopyWnd_x                                      0xFB02B8
#define pinstCLFGuildWnd_x                                         0xFB0368
#define pinstCLoadskinWnd_x                                        0xEDEDA0
#define pinstCLootFiltersCopyWnd_x                                 0xEDE208
#define pinstCLootFiltersWnd_x                                     0xEDEDC0
#define pinstCLootSettingsWnd_x                                    0xEDEDC4
#define pinstCLootWnd_x                                            0xEDF160
#define pinstCMailAddressBookWnd_x                                 0xEDEE74
#define pinstCMailCompositionWnd_x                                 0xEDEE6C
#define pinstCMailIgnoreListWnd_x                                  0xEDEE78
#define pinstCMailWnd_x                                            0xEDEE64
#define pinstCManageLootWnd_x                                      0xEE0408
#define pinstCMapToolbarWnd_x                                      0xEDEE38
#define pinstCMapViewWnd_x                                         0xEDEE2C
#define pinstCMarketplaceWnd_x                                     0xEDEE08
#define pinstCMerchantWnd_x                                        0xEDEE0C
#define pinstCMIZoneSelectWnd_x                                    0xFB0BA0
#define pinstCMusicPlayerWnd_x                                     0xEDF1CC
#define pinstCNameChangeMercWnd_x                                  0xEDEF10
#define pinstCNameChangePetWnd_x                                   0xEDEF00
#define pinstCNameChangeWnd_x                                      0xEDEE68
#define pinstCNoteWnd_x                                            0xEDF134
#define pinstCObjectPreviewWnd_x                                   0xEDEE7C
#define pinstCOptionsWnd_x                                         0xEDEE9C
#define pinstCOverseerWnd_x                                        0xEDEE04
#define pinstCPetInfoWnd_x                                         0xEDF164
#define pinstCPetitionQWnd_x                                       0xEDEEB8
#define pinstCPlayerNotesWnd_x                                     0xEDF1BC
#define pinstCPlayerWnd_x                                          0xEDEDDC
#define pinstCPopupWndManager_x                                    0xFB1430
#define pinstCProgressionSelectionWnd_x                            0xFB14E0
#define pinstCPurchaseGroupWnd_x                                   0xEDEE18
#define pinstCPurchaseWnd_x                                        0xEDEE10
#define pinstCPvPLeaderboardWnd_x                                  0xFB1590
#define pinstCPvPStatsWnd_x                                        0xFB1640
#define pinstCQuantityWnd_x                                        0xEDF158
#define pinstCRaceChangeWnd_x                                      0xEDEE70
#define pinstCRaidOptionsWnd_x                                     0xEDEEE8
#define pinstCRaidWnd_x                                            0xEDEEF4
#define pinstCRealEstateItemsWnd_x                                 0xEDEE94
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEED0
#define pinstCRealEstateManageWnd_x                                0xEDEEBC
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEEC0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEEC8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEECC
#define pinstCRespawnWnd_x                                         0xEDF1C0
#define pinstCRewardSelectionWnd_x                                 0xFB1D88
#define pinstCSelectorWnd_x                                        0xEDEE20
#define pinstCSendMoneyWnd_x                                       0xEDEE40
#define pinstCServerListWnd_x                                      0xEDF1A0
#define pinstCSkillsSelectWnd_x                                    0xEDF19C
#define pinstCSkillsWnd_x                                          0xEDF190
#define pinstCSocialEditWnd_x                                      0xEDEE58
#define pinstCSocialWnd_x                                          0xEDEDB4
#define pinstCSpellBookWnd_x                                       0xEDEF18
#define pinstCSpellDisplayMgr_x                                    0xFB2560
#define pinstCStoryWnd_x                                           0xEDEDD0
#define pinstCTargetOfTargetWnd_x                                  0xFB33E8
#define pinstCTargetWnd_x                                          0xEDEE4C
#define pinstCTaskOverlayWnd_x                                     0xEDEDCC
#define pinstCTaskSelectWnd_x                                      0xFB3540
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB35F0
#define pinstCTaskWnd_x                                            0xFB36A0
#define pinstCTextEntryWnd_x                                       0xEDF198
#define pinstCTimeLeftWnd_x                                        0xEDEEB0
#define pinstCTipWndCONTEXT_x                                      0xFB38A4
#define pinstCTipWndOFDAY_x                                        0xFB38A0
#define pinstCTitleWnd_x                                           0xFB3950
#define pinstCTrackingWnd_x                                        0xEDEE48
#define pinstCTradeskillWnd_x                                      0xFB3AB8
#define pinstCTradeWnd_x                                           0xEDEE1C
#define pinstCTrainWnd_x                                           0xEDF168
#define pinstCTributeBenefitWnd_x                                  0xFB3CB8
#define pinstCTributeMasterWnd_x                                   0xFB3D68
#define pinstCTributeTrophyWnd_x                                   0xFB3E18
#define pinstCVideoModesWnd_x                                      0xEDEE24
#define pinstCVoiceMacroWnd_x                                      0xF9D1B0
#define pinstCVoteResultsWnd_x                                     0xEDEEFC
#define pinstCVoteWnd_x                                            0xEDEEF8
#define pinstCZoneGuideWnd_x                                       0xEDF144
#define pinstCZonePathWnd_x                                        0xEDF14C
#define pinstEQSuiteTextureLoader_x                                0xEAC9D8
#define pinstItemIconCache_x                                       0xFACD30
#define pinstLootFiltersManager_x                                  0xEDE2B8
#define pinstRewardSelectionWnd_x                                  0xFB1D88

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DB8B0
#define __CastRay2_x                                               0x5DBB40
#define __ConvertItemTags_x                                        0x5F8D60
#define __CleanItemTags_x                                          0x47DA70
#define __CreateCascadeMenuItems_x                                 0x56FBB0
#define __DoesFileExist_x                                          0x952C50
#define __EQGetTime_x                                              0x94F930
#define __ExecuteCmd_x                                             0x5D3CD0
#define __FixHeading_x                                             0x9ED760
#define __FlushDxKeyboard_x                                        0x6D8F60
#define __GameLoop_x                                               0x6DC870
#define __get_bearing_x                                            0x5DB450
#define __get_melee_range_x                                        0x5DBD80
#define __GetAnimationCache_x                                      0x74B360
#define __GetGaugeValueFromEQ_x                                    0x85B800
#define __GetLabelFromEQ_x                                         0x85D210
#define __GetXTargetType_x                                         0x9EFAD0
#define __HandleMouseWheel_x                                       0x6DDD00
#define __HeadingDiff_x                                            0x9ED7C0
#define __HelpPath_x                                               0xF989CC
#define __ExecuteFrontEnd_x                                        0x6D9740
#define __NewUIINI_x                                               0x85B4E0
#define __ProcessGameEvents_x                                      0x642420
#define __ProcessKeyboardEvents_x                                  0x6DAEB0
#define __ProcessMouseEvents_x                                     0x641B20
#define __SaveColors_x                                             0x56FA50
#define __STMLToText_x                                             0x98B340
#define __WndProc_x                                                0x6DB970
#define CMemoryMappedFile__SetFile_x                               0xADD1A0
#define CrashDetected_x                                            0x6DB470
#define DrawNetStatus_x                                            0x671950
#define Expansion_HoT_x                                            0xDADD98
#define Teleport_Table_Size_x                                      0xF93220
#define Teleport_Table_x                                           0xF90DF8
#define Util__FastTime_x                                           0x94F4F0
#define __eq_delete_x                                              0x9F6623
#define __eq_new_x                                                 0x9F6B94
#define __CopyLayout_x                                             0x65E520
#define __ThrottleFrameRate_x                                      0x62B233
#define __ThrottleFrameRateEnd_x                                   0x62B28F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EA410
#define CAAWnd__Update_x                                           0x6E9730
#define CAAWnd__UpdateSelected_x                                   0x6E6AA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x578AE0
#define AltAdvManager__IsAbilityReady_x                            0x5776C0
#define AltAdvManager__GetAAById_x                                 0x577A60
#define AltAdvManager__CanTrainAbility_x                           0x577AD0
#define AltAdvManager__CanSeeAbility_x                             0x577E80

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDF30
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC820
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CCA00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1410
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D18A0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF00
#define CharacterZoneClient__GetCurrentMod_x                       0x4EBF20
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFEE0
#define CharacterZoneClient__GetEffect_x                           0x4C1350
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC5C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6EA0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFDA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFCA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC660
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5380
#define CharacterZoneClient__GetModCap_x                           0x4EBE20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC510
#define CharacterZoneClient__HasSkill_x                            0x4DD030
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C30
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE7A0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E7EC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA610

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x706CA0
#define CBankWnd__WndNotification_x                                0x706A40

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7117A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C3D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A3A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715EE0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x9888E0
#define CButtonWnd__CButtonWnd_x                                   0x987260
#define CButtonWnd__dCButtonWnd_x                                  0x987500
#define CButtonWnd__vftable_x                                      0xB8CB38

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x738890
#define CChatWindowManager__InitContextMenu_x                      0x7317B0
#define CChatWindowManager__FreeChatWindow_x                       0x737450
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x738570
#define CChatWindowManager__CreateChatWindow_x                     0x737A80

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFDC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x739210
#define CChatWindow__Clear_x                                       0x73A690
#define CChatWindow__WndNotification_x                             0x73AE20
#define CChatWindow__AddHistory_x                                  0x739ED0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99E700
#define CContextMenu__dCContextMenu_x                              0x99E930
#define CContextMenu__AddMenuItem_x                                0x99E940
#define CContextMenu__RemoveMenuItem_x                             0x99EC40
#define CContextMenu__RemoveAllMenuItems_x                         0x99EC60
#define CContextMenu__CheckMenuItem_x                              0x99ECC0
#define CContextMenu__SetMenuItem_x                                0x99EB70
#define CContextMenu__AddSeparator_x                               0x99EAD0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99F240
#define CContextMenuManager__RemoveMenu_x                          0x99F2B0
#define CContextMenuManager__PopupMenu_x                           0x99F370
#define CContextMenuManager__Flush_x                               0x99F1E0
#define CContextMenuManager__GetMenu_x                             0x49DA10
#define CContextMenuManager__CreateDefaultMenu_x                   0x7451C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A370
#define CChatService__GetFriendName_x                              0x92A380

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99B7E0
#define CComboWnd__Draw_x                                          0x99AC90
#define CComboWnd__GetCurChoice_x                                  0x99B5B0
#define CComboWnd__GetListRect_x                                   0x99B130
#define CComboWnd__GetTextRect_x                                   0x99B840
#define CComboWnd__InsertChoice_x                                  0x99B2C0
#define CComboWnd__SetColors_x                                     0x99B290
#define CComboWnd__SetChoice_x                                     0x99B590
#define CComboWnd__GetItemCount_x                                  0x99B5C0
#define CComboWnd__GetCurChoiceText_x                              0x99B5F0
#define CComboWnd__GetChoiceText_x                                 0x99B5D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99B350

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x742800
#define CContainerWnd__vftable_x                                   0xB5A944
#define CContainerWnd__SetContainer_x                              0x744060

// CDisplay
#define CDisplay__cameraType_x                                     0xEDEF1C
#define CDisplay__ZoneMainUI_x                                     0x56A290
#define CDisplay__PreZoneMainUI_x                                  0x56A2A0
#define CDisplay__CleanGameUI_x                                    0x56F830
#define CDisplay__GetClickedActor_x                                0x562060
#define CDisplay__GetUserDefinedColor_x                            0x559DE0
#define CDisplay__GetWorldFilePath_x                               0x563B70
#define CDisplay__ReloadUI_x                                       0x5695B0
#define CDisplay__WriteTextHD2_x                                   0x55E6E0
#define CDisplay__TrueDistance_x                                   0x565B50
#define CDisplay__SetViewActor_x                                   0x561980
#define CDisplay__GetFloorHeight_x                                 0x55E9B0
#define CDisplay__SetRenderWindow_x                                0x55D360
#define CDisplay__ToggleScreenshotMode_x                           0x561450
#define CDisplay__RealRender_World_x                               0x55C670

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C0F30

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A21F0
#define CEditWnd__EnsureCaretVisible_x                             0x9A4540
#define CEditWnd__GetCaretPt_x                                     0x9A33B0
#define CEditWnd__GetCharIndexPt_x                                 0x9A3170
#define CEditWnd__GetDisplayString_x                               0x9A3010
#define CEditWnd__GetHorzOffset_x                                  0x9A1750
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4450
#define CEditWnd__GetSelStartPt_x                                  0x9A3410
#define CEditWnd__GetSTMLSafeText_x                                0x9A2E20
#define CEditWnd__PointFromPrintableChar_x                         0x9A40A0
#define CEditWnd__ReplaceSelection_x                               0x9A3C60
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4200
#define CEditWnd__SetEditable_x                                    0x9A34E0
#define CEditWnd__SetWindowText_x                                  0x9A2B70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62DA20
#define CEverQuest__ClickedPlayer_x                                0x61EF40
#define CEverQuest__CreateTargetIndicator_x                        0x63F390
#define CEverQuest__DeleteTargetIndicator_x                        0x63F420
#define CEverQuest__DoTellWindow_x                                 0x4EFEC0
#define CEverQuest__OutputTextToLog_x                              0x4F0190
#define CEverQuest__DropHeldItemOnGround_x                         0x614010
#define CEverQuest__dsp_chat_x                                     0x4F0560
#define CEverQuest__trimName_x                                     0x63A980
#define CEverQuest__Emote_x                                        0x62E0E0
#define CEverQuest__EnterZone_x                                    0x627D80
#define CEverQuest__GetBodyTypeDesc_x                              0x633640
#define CEverQuest__GetClassDesc_x                                 0x633C80
#define CEverQuest__GetClassThreeLetterCode_x                      0x634280
#define CEverQuest__GetDeityDesc_x                                 0x63DB40
#define CEverQuest__GetLangDesc_x                                  0x634440
#define CEverQuest__GetRaceDesc_x                                  0x633C60
#define CEverQuest__InterpretCmd_x                                 0x63E1B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x618500
#define CEverQuest__LMouseUp_x                                     0x6165C0
#define CEverQuest__RightClickedOnPlayer_x                         0x6190F0
#define CEverQuest__RMouseUp_x                                     0x617880
#define CEverQuest__SetGameState_x                                 0x613D90
#define CEverQuest__UPCNotificationFlush_x                         0x63A8A0
#define CEverQuest__IssuePetCommand_x                              0x635A40
#define CEverQuest__ReportSuccessfulHeal_x                         0x62EEE0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F9C0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756310
#define CGaugeWnd__CalcLinesFillRect_x                             0x756370
#define CGaugeWnd__Draw_x                                          0x755920

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B49F0
#define CGuild__GetGuildName_x                                     0x4B3210
#define CGuild__GetGuildIndex_x                                    0x4B3930

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7737D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x652DB0
#define CHotButton__SetCheck_x                                     0x6529F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x780AC0
#define CInvSlotMgr__MoveItem_x                                    0x77F6D0
#define CInvSlotMgr__SelectSlot_x                                  0x780B80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77DEE0
#define CInvSlot__SliderComplete_x                                 0x77B120
#define CInvSlot__GetItemBase_x                                    0x77A9C0
#define CInvSlot__UpdateItem_x                                     0x77ABB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7819B0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7823C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x79A8B0
#define CItemDisplayWnd__UpdateStrings_x                           0x79A1B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78F170
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78F6C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79B6D0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x855C80
#define CSpellDisplayWnd__UpdateStrings_x                          0x855BF0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x88B140

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A1770

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x528F00

// CLabel
#define CLabel__UpdateText_x                                       0x7A82B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96DD70
#define CListWnd__dCListWnd_x                                      0x96E060
#define CListWnd__vftable_x                                        0xB8C410
#define CListWnd__AddColumn_x                                      0x972C30
#define CListWnd__AddColumn1_x                                     0x972D50
#define CListWnd__AddLine_x                                        0x9730C0
#define CListWnd__AddString_x                                      0x972EC0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9729E0
#define CListWnd__CalculateVSBRange_x                              0x9727C0
#define CListWnd__ClearSel_x                                       0x9739B0
#define CListWnd__ClearAllSel_x                                    0x973A00
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974490
#define CListWnd__Compare_x                                        0x971F50
#define CListWnd__Draw_x                                           0x96E220
#define CListWnd__DrawColumnSeparators_x                           0x970D40
#define CListWnd__DrawHeader_x                                     0x9711A0
#define CListWnd__DrawItem_x                                       0x9717F0
#define CListWnd__DrawLine_x                                       0x970EB0
#define CListWnd__DrawSeparator_x                                  0x970DE0
#define CListWnd__EnableLine_x                                     0x970600
#define CListWnd__EnsureVisible_x                                  0x9743C0
#define CListWnd__ExtendSel_x                                      0x9738F0
#define CListWnd__GetColumnTooltip_x                               0x970180
#define CListWnd__GetColumnMinWidth_x                              0x9701F0
#define CListWnd__GetColumnWidth_x                                 0x970100
#define CListWnd__GetCurSel_x                                      0x96FAA0
#define CListWnd__GetItemAtPoint_x                                 0x970870
#define CListWnd__GetItemAtPoint1_x                                0x9708E0
#define CListWnd__GetItemData_x                                    0x96FB20
#define CListWnd__GetItemHeight_x                                  0x96FED0
#define CListWnd__GetItemIcon_x                                    0x96FCA0
#define CListWnd__GetItemRect_x                                    0x9706F0
#define CListWnd__GetItemText_x                                    0x96FB60
#define CListWnd__GetSelList_x                                     0x973A50
#define CListWnd__GetSeparatorRect_x                               0x970B50
#define CListWnd__InsertLine_x                                     0x973520
#define CListWnd__RemoveLine_x                                     0x973740
#define CListWnd__SetColors_x                                      0x9727A0
#define CListWnd__SetColumnJustification_x                         0x9724D0
#define CListWnd__SetColumnLabel_x                                 0x972E60
#define CListWnd__SetColumnWidth_x                                 0x9723E0
#define CListWnd__SetCurSel_x                                      0x973840
#define CListWnd__SetItemColor_x                                   0x974090
#define CListWnd__SetItemData_x                                    0x974050
#define CListWnd__SetItemText_x                                    0x973C70
#define CListWnd__ShiftColumnSeparator_x                           0x972590
#define CListWnd__Sort_x                                           0x972240
#define CListWnd__ToggleSel_x                                      0x973870
#define CListWnd__SetColumnsSizable_x                              0x972630
#define CListWnd__SetItemWnd_x                                     0x973F10
#define CListWnd__GetItemWnd_x                                     0x96FCF0
#define CListWnd__SetItemIcon_x                                    0x973CF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x972AE0
#define CListWnd__SetVScrollPos_x                                  0x9723C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BF720

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BA9A0
#define MapViewMap__dMapViewMap_x                                  0x7BAAE0
#define MapViewMap__vftable_x                                      0xB61D50
#define MapViewMap__Clear_x                                        0x7BB3F0
#define MapViewMap__SetZoom_x                                      0x7C4610
#define MapViewMap__HandleLButtonDown_x                            0x7BABF0
#define MapViewMap__GetWorldCoordinates_x                          0x7BDD60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E2D20
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3680
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3D10
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E6FF0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E17A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ED1F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E2970

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F6E60
#define CPacketScrambler__hton_x                                   0x8F6E50

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x996A90
#define CSidlManagerBase__CreatePageWnd_x                          0x996270
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991740
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9916D0
#define CSidlManagerBase__FindAnimation1_x                         0x9919C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x991D90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x991BC0
#define CSidlManagerBase__CreateLabel_x                            0x84B980
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x995240
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x9954D0
#define CSidlManagerBase__CreateXWnd_x                             0x995510

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84BDC0
#define CSidlManager__CreateXWnd_x                                 0x84B3F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D6F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98D5F0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BB180
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98CF70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98CC60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98CD30
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98CE00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98DFB0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98E490
#define CSidlScreenWnd__GetChildItem_x                             0x98E410
#define CSidlScreenWnd__GetSidlPiece_x                             0x98E1A0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C900
#define CSidlScreenWnd__Init1_x                                    0x98C710
#define CSidlScreenWnd__LoadIniInfo_x                              0x98E4E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98F0B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98BB10
#define CSidlScreenWnd__m_layoutCopy_x                             0x1621228
#define CSidlScreenWnd__StoreIniInfo_x                             0x98EC30
#define CSidlScreenWnd__StoreIniVis_x                              0x98EFA0
#define CSidlScreenWnd__vftable_x                                  0xB8CDE4
#define CSidlScreenWnd__WndNotification_x                          0x98DE80

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0D10
#define CSkillMgr__GetSkillCap_x                                   0x6C0EE0
#define CSkillMgr__GetNameToken_x                                  0x6C0520
#define CSkillMgr__IsActivatedSkill_x                              0x6C0610
#define CSkillMgr__IsCombatSkill_x                                 0x6C0580

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A0330
#define CSliderWnd__SetValue_x                                     0x9A0160
#define CSliderWnd__SetNumTicks_x                                  0x9A01C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x852650

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A9830
#define CStmlWnd__CalculateHSBRange_x                              0x9AA7B0
#define CStmlWnd__CalculateVSBRange_x                              0x9AA720
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AF5F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0290
#define CStmlWnd__ForceParseNow_x                                  0x9A9DA0
#define CStmlWnd__GetNextTagPiece_x                                0x9AF550
#define CStmlWnd__GetVisibleText_x                                 0x9A9DC0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B00E0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8ED0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A8F40
#define CStmlWnd__SetSTMLText_x                                    0x9A7CB0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B14B0
#define CStmlWnd__UpdateHistoryString_x                            0x9B0490

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A6B60
#define CTabWnd__DrawCurrentPage_x                                 0x9A74F0
#define CTabWnd__DrawTab_x                                         0x9A70E0
#define CTabWnd__GetCurrentPage_x                                  0x9A62C0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A62B0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A7020
#define CTabWnd__GetPageInnerRect_x                                0x9A64F0
#define CTabWnd__GetTabInnerRect_x                                 0x9A6430
#define CTabWnd__GetTabRect_x                                      0x9A62F0
#define CTabWnd__InsertPage_x                                      0x9A66E0
#define CTabWnd__RemovePage_x                                      0x9A6830
#define CTabWnd__SetPage_x                                         0x9A6570
#define CTabWnd__SetPageRect_x                                     0x9A6A60
#define CTabWnd__UpdatePage_x                                      0x9A6ED0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A5CB0
#define CPageWnd__SetTabText_x                                     0x9A5C50


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4ACA20

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978E30
#define CTextureFont__DrawWrappedText1_x                           0x978D60
#define CTextureFont__DrawWrappedText2_x                           0x978F20
#define CTextureFont__GetTextExtent_x                              0x979130

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B7C30

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x963820

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x541CC0
#define CXStr__CXStr1_x                                            0x482740
#define CXStr__CXStr3_x                                            0x94B880
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94BAC0
#define CXStr__operator_equal1_x                                   0x94BB00
#define CXStr__operator_plus_equal1_x                              0x94C560
#define CXStr__SetString_x                                         0x94E400
#define CXStr__operator_char_p_x                                   0x94BFB0
#define CXStr__GetChar_x                                           0x94DD60
#define CXStr__Delete_x                                            0x94D630
#define CXStr__GetUnicode_x                                        0x94DDD0
#define CXStr__Insert_x                                            0x94DE30
#define CXStr__FindNext_x                                          0x94DA80
#define CXStr__gFreeLists_x                                        0xEAC3B0
#define CXStr__gCXStrAccess_x                                      0x1620AB0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99E360

// CXWnd
#define CXWnd__BringToTop_x                                        0x980340
#define CXWnd__ClrFocus_x                                          0x97FCE0
#define CXWnd__Destroy_x                                           0x97FD70
#define CXWnd__DoAllDrawing_x                                      0x97BF50
#define CXWnd__DrawChildren_x                                      0x97BF20
#define CXWnd__DrawColoredRect_x                                   0x97C4E0
#define CXWnd__DrawTooltip_x                                       0x97A520
#define CXWnd__DrawTooltipAtPoint_x                                0x97A5E0
#define CXWnd__GetBorderFrame_x                                    0x97C180
#define CXWnd__GetChildItem_x                                      0x980560
#define CXWnd__GetChildWndAt_x                                     0x9803E0
#define CXWnd__GetClientClipRect_x                                 0x97E4F0
#define CXWnd__GetRelativeRect_x                                   0x97E860
#define CXWnd__GetScreenClipRect_x                                 0x97E5C0
#define CXWnd__GetScreenRect_x                                     0x97E790
#define CXWnd__GetTooltipRect_x                                    0x97C530
#define CXWnd__GetWindowTextA_x                                    0x4EFD60
#define CXWnd__IsActive_x                                          0x97CC80
#define CXWnd__IsDescendantOf_x                                    0x97F1F0
#define CXWnd__IsReallyVisible_x                                   0x97F220
#define CXWnd__IsType_x                                            0x980B50
#define CXWnd__Minimize_x                                          0x97F970
#define CXWnd__Move_x                                              0x97F290
#define CXWnd__Move1_x                                             0x97F390
#define CXWnd__ProcessTransition_x                                 0x97FE50
#define CXWnd__Refade_x                                            0x97F660
#define CXWnd__Resize_x                                            0x97F900
#define CXWnd__Right_x                                             0x980130
#define CXWnd__SetFocus_x                                          0x97FCA0
#define CXWnd__SetFont_x                                           0x97FD10
#define CXWnd__SetKeyTooltip_x                                     0x980930
#define CXWnd__SetMouseOver_x                                      0x97D610
#define CXWnd__SetParent_x                                         0x97EF30
#define CXWnd__StartFade_x                                         0x97F0E0
#define CXWnd__vftable_x                                           0xB8C858
#define CXWnd__CXWnd_x                                             0x979400
#define CXWnd__dCXWnd_x                                            0x979AF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BC1D0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x9833B0
#define CXWndManager__DrawWindows_x                                0x983500
#define CXWndManager__GetKeyboardFlags_x                           0x985EA0
#define CXWndManager__HandleKeyboardMsg_x                          0x985A80
#define CXWndManager__RemoveWnd_x                                  0x986160
#define CXWndManager__RemovePendingDeletionWnd_x                   0x986600

// CDBStr
#define CDBStr__GetString_x                                        0x5588D0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E11F0
#define CharacterZoneClient__CastSpell_x                           0x4C5D00
#define CharacterZoneClient__Cur_HP_x                              0x4D9C80
#define CharacterZoneClient__Cur_Mana_x                            0x4E0EC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCDF0
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDD90
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9320
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E6F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B87D0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8920
#define CharacterZoneClient__GetHPRegen_x                          0x4E6990
#define CharacterZoneClient__GetManaRegen_x                        0x4E7390
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA150
#define CharacterZoneClient__Max_Endurance_x                       0x681440
#define CharacterZoneClient__Max_HP_x                              0x4D9AB0
#define CharacterZoneClient__Max_Mana_x                            0x681220
#define CharacterZoneClient__SpellDuration_x                       0x4C9B90
#define CharacterZoneClient__TotalEffect_x                         0x4CD820
#define CharacterZoneClient__UseSkill_x                            0x4E8560

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917A20

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699810

// PcClient
#define PcClient__PcClient_x                                       0x676810
#define PcClient__GetConLevel_x                                    0x679590

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02E0
#define CCharacterListWnd__EnterWorld_x                            0x4BFCB0
#define CCharacterListWnd__Quit_x                                  0x4BF9D0
#define CCharacterListWnd__UpdateList_x                            0x4BFEA0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658BD0
#define EQ_Item__CreateItemTagString_x                             0x8EFB30
#define EQ_Item__IsStackable_x                                     0x8F4DE0
#define EQ_Item__GetImageNum_x                                     0x8F1880
#define EQ_Item__CreateItemClient_x                                0x657B70
#define EQ_Item__GetItemValue_x                                    0x8F2AC0
#define EQ_Item__ValueSellMerchant_x                               0x8F6B70
#define EQ_Item__IsKeyRingItem_x                                   0x8F4560
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF310
#define EQ_Item__CanGoInBag_x                                      0x658CF0
#define EQ_Item__IsEmpty_x                                         0x8F3F30
#define EQ_Item__GetMaxItemCount_x                                 0x8F2EE0
#define EQ_Item__GetHeldItem_x                                     0x8F1730
#define ItemClient__dItemClient_x                                  0x657AC0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5798F0
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x900D00
#define EQ_PC__GetCombatAbility_x                                  0x901280
#define EQ_PC__GetCombatAbilityTimer_x                             0x9012F0
#define EQ_PC__GetItemRecastTimer_x                                0x6845C0
#define EQ_PC__HasLoreItem_x                                       0x679EF0
#define EQ_PC__AlertInventoryChanged_x                             0x678E50
#define EQ_PC__GetPcZoneClient_x                                   0x6A9F30
#define EQ_PC__RemoveMyAffect_x                                    0x687E20
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901940
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9020B0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D88B0
#define EQItemList__add_object_x                                   0x608ED0
#define EQItemList__add_item_x                                     0x5D8E90
#define EQItemList__delete_item_x                                  0x5D8EE0
#define EQItemList__FreeItemList_x                                 0x5D8DF0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554C40

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B240
#define EQPlayer__dEQPlayer_x                                      0x68D970
#define EQPlayer__DoAttack_x                                       0x6A3C60
#define EQPlayer__EQPlayer_x                                       0x68E1C0
#define EQPlayer__SetNameSpriteState_x                             0x692780
#define EQPlayer__SetNameSpriteTint_x                              0x693650
#define PlayerBase__HasProperty_j_x                                0x9EBB10
#define EQPlayer__IsTargetable_x                                   0x9EC070
#define EQPlayer__CanSee_x                                         0x9EBE60
#define EQPlayer__CanSee1_x                                        0x9EBF30
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EBBD0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7A20
#define PlayerZoneClient__GetLevel_x                               0x6A9F70
#define PlayerZoneClient__IsValidTeleport_x                        0x60A380
#define PlayerZoneClient__LegalPlayerRace_x                        0x571890

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E3F0
#define EQPlayerManager__GetSpawnByName_x                          0x69E4A0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E530

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C4E0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C5B0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C5F0
#define KeypressHandler__ClearCommandStateArray_x                  0x65DAB0
#define KeypressHandler__HandleKeyDown_x                           0x65DAD0
#define KeypressHandler__HandleKeyUp_x                             0x65DB70
#define KeypressHandler__SaveKeymapping_x                          0x65E120

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9158B0

// StringTable
#define StringTable__getString_x                                   0x910600

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x683FC0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x682180
#define PcZoneClient__GetPcSkillLimit_x                            0x687A70
#define PcZoneClient__RemovePetEffect_x                            0x6880D0
#define PcZoneClient__HasAlternateAbility_x                        0x681080
#define PcZoneClient__CanEquipItem_x                               0x681750
#define PcZoneClient__GetItemByID_x                                0x684AF0
#define PcZoneClient__RemoveBuffEffect_x                           0x688180
#define PcZoneClient__BandolierSwap_x                              0x682730
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684560

// Doors
#define EQSwitch__UseSwitch_x                                      0x60EFA0

// IconCache
#define IconCache__GetIcon_x                                       0x74AD00

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7416D0
#define CContainerMgr__CloseContainer_x                            0x7419F0
#define CContainerMgr__OpenExperimentContainer_x                   0x742550

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81ACE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651180

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B0600
#define CLootWnd__RequestLootSlot_x                                0x7AF820

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3B10
#define EQ_Spell__SpellAffects_x                                   0x5A4020
#define EQ_Spell__SpellAffectBase_x                                0x5A3D40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1230
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D11E0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4FA0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4230
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4FD0
#define __IsResEffectSpell_x                                       0x4D09E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1780

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x867950
#define CTargetWnd__WndNotification_x                              0x8670F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x867450
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865EF0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86C4D0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86F5A0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552800
#define CTaskManager__HandleMessage_x                              0x5506D0
#define CTaskManager__GetTaskStatus_x                              0x5528B0
#define CTaskManager__GetElementDescription_x                      0x552930

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E720
#define EqSoundManager__PlayScriptMp3_x                            0x59E920
#define EqSoundManager__SoundAssistPlay_x                          0x6C51B0
#define EqSoundManager__WaveInstancePlay_x                         0x6C46A0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541970

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A5310
#define CTextureAnimation__SetCurCell_x                            0x9A50D0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581F00
#define CAltAbilityData__GetMercMaxRank_x                          0x581E90

// CTargetRing
#define CTargetRing__Cast_x                                        0x64E990

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x6450E0
#define CharacterBase__GetItemByGlobalIndex_x                      0x928060
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9280B0
#define CharacterBase__GetMemorizedSpell_x                         0x6579C0
#define CharacterBase__IsExpansionFlag_x                           0x5D24F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7264F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726DB0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726E60

// messages
#define msg_spell_worn_off_x                                       0x5C9CA0
#define msg_new_text_x                                             0x5BD650
#define __msgTokenTextParam_x                                      0x5CC100
#define msgTokenText_x                                             0x5CC510

// SpellManager
#define SpellManager__vftable_x                                    0xB38574
#define SpellManager__SpellManager_x                               0x6C8DD0
#define Spellmanager__LoadTextSpells_x                             0x6C96D0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8FA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F0380

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920EF0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921240

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A8720

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746460
#define CCursorAttachment__AttachToCursor1_x                       0x7464A0
#define CCursorAttachment__Deactivate_x                            0x747B80

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B60A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B6800
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6480

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522400
#define CFindItemWnd__WndNotification_x                            0x5232D0
#define CFindItemWnd__Update_x                                     0x523F20
#define CFindItemWnd__PickupSelectedItem_x                         0x521AD0

// IString
#define IString__Append_x                                          0x558350

// Camera
#define EverQuest__Cameras_x                                       0xDAE0E4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D440
#define LootFiltersManager__GetItemFilterData_x                    0x52CD70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CDA0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CFB0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8076B0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6040
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF620

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E050

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92BD40
#define CDistillerInfo__Instance_x                                 0x92BC80

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x760F20
#define CGroupWnd__UpdateDisplay_x                                 0x760170

// ItemBase
#define ItemBase__IsLore_x                                         0x8F4620
#define ItemBase__IsLoreEquipped_x                                 0x8F46A0

#define MultipleItemMoveManager__ProcessMove_x                     0x66D810

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608E30
#define EQPlacedItemManager__GetItemByGuid_x                       0x608F70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608FD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3D80

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517E20

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5028A0
#define FactionManagerClient__HandleFactionMessage_x               0x5030C0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5038E0
#define FactionManagerClient__GetMaxFaction_x                      0x5038FF
#define FactionManagerClient__GetMinFaction_x                      0x5038B0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F740

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x977AA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E430

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F9B0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5810D0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x581B00

// CTargetManager
#define CTargetManager__Get_x                                      0x6CCD50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3D80

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7E0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8D90

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B778

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DD560

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D230

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DE870

// AchievementManager
#define AchievementManager__Instance_x                             0x47E380

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
