#pragma once
#include "../../src/defines.h"
#include "../text.h"
#include "../save.h"
#include "../string_util.h"

#define BC_Menu 0x8014040 | 1

u32 __attribute__((long_call)) GetAttr(pokemon_t* poke_address, u8 request, void* dst);
void __attribute__((long_call)) SetAttr(pokemon_t* poke_address, u8 request, void* new_value);

// used for form change //
void __attribute__((long_call)) run_after_graphics();
void __attribute__((long_call)) script_env_2_enable(void);
void __attribute__((long_call)) script_run(void *scriptLoc);
bool8 __attribute__((long_call)) ScriptEnv2IsEnabled(void);
void __attribute__((long_call)) ScriptEnvDisable(void);
void __attribute__((long_call)) task_delete(u8 taskID);
void* __attribute__((long_call)) memcpy_(void *dst, void *src, u8 size);
void* __attribute__((long_call)) memset_(void *dst, u8 pattern, u8 size);

void* __attribute__((long_call)) Memcpy(void *dst, void *src, u32 size);
void* __attribute__((long_call)) Memset(void *dst, u8 pattern, u32 size);

void __attribute__((long_call)) PokemonSlotPurge(pokemon_t* mon);
void __attribute__((long_call)) Special_DD_delete_move();
u8 __attribute__((long_call)) party_move_up_no_free_slots_in_between();

//PokeFireRed Function Names

//Battle Functions
u8*  __attribute__((long_call)) StringGetEnd10(u8 *str);
u8*  __attribute__((long_call)) GetExpandedPlaceholder(u32 id);
u8   __attribute__((long_call)) GetMultiplayerId(void);
u8 __attribute__((long_call)) LoadBattleBG_SpecialTerrainID(u8 mapType);
void __attribute__((long_call)) sub_8012098(struct Sprite *sprite);
void __attribute__((long_call)) DoBounceEffect(u8 battlerId, u8 b, s8 c, s8 d);
void __attribute__((long_call)) EndBounceEffect(u8 battlerId, bool8 b);
void __attribute__((long_call)) sub_8012044(struct Sprite *sprite);
void __attribute__((long_call)) SwitchInClearSetData(void);
void __attribute__((long_call)) UndoEffectsAfterFainting(void);
void __attribute__((long_call))  BattleIntroRecordMonsToDex(void);
void __attribute__((long_call)) sub_8013F6C(u8 bank);
void __attribute__((long_call)) SwapTurnOrder(u8 a, u8 b);
void __attribute__((long_call)) TurnValuesCleanUp(u8);
void __attribute__((long_call)) SpecialStatusesClear(void);
void __attribute__((long_call)) CheckFocusPunch_ClearVarsBeforeTurnStarts(void);
void __attribute__((long_call)) HandleEndTurn_FinishBattle(void);
bank_t __attribute__((long_call)) GetBattleBank(u8 caseID);
void __attribute__((long_call)) PressurePPLose(u8 defender, u8 attacker, u16 move);
void __attribute__((long_call)) PressurePPLoseOnUsingImprision(u8 bankAtk);
void __attribute__((long_call)) MarkBufferBankForExecution(u8 bank);
void __attribute__((long_call)) CancelMultiTurnMoves(u8 bank);
bool8 __attribute__((long_call)) WasUnableToUseMove(u8 bank);
void __attribute__((long_call)) ResetSentPokesToOpponentValue(void);
void __attribute__((long_call)) sub_8017434(u8 bank);
void __attribute__((long_call)) sub_80174B8(bank_t);
void __attribute__((long_call)) BattleScriptPush(const u8* BS_ptr);
void __attribute__((long_call)) BattleScriptPushCursor(void);
void __attribute__((long_call)) BattleScriptPop(void);
u8 __attribute__((long_call)) IsImprisoned(u8 bank, u16 move);
u8 __attribute__((long_call)) GetBattlerTurnOrderNum(u8 battlerId);
//bool8 __attribute__((long_call)) HasNoMonsToSwitch(u8 battler, u8 partyIdBattlerOn1, u8 partyIdBattlerOn2);
//u8 __attribute__((long_call)) AbilityBattleEffects(u8 caseID, u8 bank, u8 ability, u8 special, u16 move);
void __attribute__((long_call)) BattleScriptExecute(const u8* BS_ptr);
void __attribute__((long_call)) BattleScriptPushCursorAndCallback(const u8* BS_ptr);
//u8 __attribute__((long_call)) ItemBattleEffects(u8 caseID, u8 bank, bool8 moveTurn);
void __attribute__((long_call)) JumpIfMoveFailed(u8 advance_bytes, move_t move);
void __attribute__((long_call)) CheckWonderGuardAndLevitate(void);
void __attribute__((long_call)) SetMoveEffect(bool8 primary, u8 certain);
void __attribute__((long_call)) MoveValuesCleanUp(void);
bool8 __attribute__((long_call)) IsTwoTurnsMove(u16 move);
u8  __attribute__((long_call)) AttacksThisTurn(u8 bank, u16 move);
void __attribute__((long_call)) AdjustFriendshipOnBattleFaint(u8 bank);
void __attribute__((long_call)) SetControllerToPlayer(void);
void __attribute__((long_call)) PlayerBufferExecCompleted(void);
void __attribute__((long_call)) CompleteOnBankSpritePosX_0(void);
//void __attribute__((long_call)) HandleInputChooseTarget(void);
void __attribute__((long_call)) HandleMoveSwitching(void);
void __attribute__((long_call)) sub_802F730(void);
void __attribute__((long_call)) sub_802F768(void);
void __attribute__((long_call)) CompleteOnInactiveTextPrinter(void);
void __attribute__((long_call)) Task_LaunchLvlUpAnim(u8);
void __attribute__((long_call)) DestroyExpTaskAndCompleteOnInactiveTextPrinter(u8);
void __attribute__((long_call)) MoveSelectionDisplayMoveNames(void);
void __attribute__((long_call)) MoveSelectionDisplayPpString(void);
void __attribute__((long_call)) MoveSelectionDisplayPpNumber(void);
/*void __attribute__((long_call)) MoveSelectionDisplayMoveType(void);*/
void __attribute__((long_call)) MoveSelectionCreateCursorAt(u8 cursorPos, u8 arg1);
void __attribute__((long_call)) MoveSelectionDestroyCursorAt(u8 cursorPos);
void __attribute__((long_call)) ActionSelectionCreateCursorAt(u8 cursorPos, u8 arg1);
void __attribute__((long_call)) ActionSelectionDestroyCursorAt(u8 cursorPosition);
void __attribute__((long_call)) HandleChooseActionAfterDma3(void);
void __attribute__((long_call)) sub_8033AC8(void);
void __attribute__((long_call)) sub_8033EEC(struct Sprite *sprite);
void __attribute__((long_call)) BattleLoadOpponentMonSpriteGfx(struct Pokemon* mon, u8 bank);
void __attribute__((long_call)) BattleLoadPlayerMonSpriteGfx(struct Pokemon* mon, u8 bank);
void __attribute__((long_call)) DecompressTrainerFrontPic(u16 frontPicId, u8 battlerId);
void __attribute__((long_call)) DecompressTrainerBackPic(u16 backPicId, u8 battlerId);
void __attribute__((long_call)) load_gfxc_health_bar(u8);
void __attribute__((long_call)) LoadBattleMonGfxAndAnimate(u8 battlerId, bool8 loadMonSprite, u8 spriteId);
void __attribute__((long_call)) HandleLowHpMusicChange(struct Pokemon *mon, u8 battlerId);
void __attribute__((long_call)) BattleStopLowHpSound(void);
void __attribute__((long_call)) SetControllerToOpponent(void);
void __attribute__((long_call)) CompleteOnBattlerSpriteCallbackDummy(void);
void __attribute__((long_call)) CompleteOnBankSpriteCallbackDummy2(void);
void __attribute__((long_call)) sub_8035BE8(void);
void __attribute__((long_call)) OpponentBufferExecCompleted(void);
bool8 __attribute__((long_call)) ShouldSwitchIfPerishSong(void);
bool8 __attribute__((long_call)) AreStatsRaised(void);
//void __attribute__((long_call)) AI_TrySwitchOrUseItem(void);
void __attribute__((long_call)) ModulateByTypeEffectiveness(u8 atkType, u8 defType1, u8 defType2, u8 *var);
void __attribute__((long_call)) LinkOpponentBufferExecCompleted(void);
bool8 __attribute__((long_call)) ShouldUseItem(void);
u8 __attribute__((long_call)) CountAliveMons(u8 caseId);
u8 __attribute__((long_call)) GetDefaultMoveTarget(u8 battlerId);
void __attribute__((long_call)) SetMultiuseSpriteTemplateToTrainerBack(u16 trainerSpriteId, u8 battlerPosition);
u8 __attribute__((long_call)) GetSecretBaseTrainerPicIndex(void);
u8 __attribute__((long_call)) GetSecretBaseTrainerNameIndex(void);
void __attribute__((long_call)) AdjustFriendship(struct Pokemon *mon, u8 event);
u8 __attribute__((long_call)) sub_80447F0(void); //Something Trainer Related
u8 __attribute__((long_call)) GetLinkTrainerFlankId(u8 a);
u8 __attribute__((long_call)) GetBattlerMultiplayerId(u8 bank);
//void __attribute__((long_call)) SetBattleBarStruct(u8, u8, u32, u32, u32);
void __attribute__((long_call)) SwapHpBarsWithHpText(void);
void __attribute__((long_call)) SetHealthboxSpriteVisible(u8 healthboxSpriteId);
void __attribute__((long_call)) UpdateHealthboxAttribute(u8 healthboxSpriteId, struct Pokemon* mon, u8 elementId);
s32 __attribute__((long_call)) MoveBattleBar(u8 battler, u8 healthboxSpriteId, u8 whichBar, u8 arg3);
void __attribute__((long_call)) SpriteCB_ReleaseMonFromBall(struct Sprite* sprite);
bool8 __attribute__((long_call)) IsCryPlayingOrClearCrySongs(void);
void __attribute__((long_call)) DestroyAnimSprite(struct Sprite *sprite);
void __attribute__((long_call)) DestroyAnimVisualTask(u8 taskId);
void __attribute__((long_call)) AddSpriteIndex(u16 index);
void __attribute__((long_call)) WaitAnimFrameCount(void);
void __attribute__((long_call)) sub_807331C(u8 taskId);
void __attribute__((long_call)) CreateBattleStartTask(u8 transition, u16 song);
void __attribute__((long_call)) StoreSpriteCallbackInData6(struct Sprite *sprite, void (*callback)(struct Sprite*));
void __attribute__((long_call)) sub_8074E14(struct Sprite *sprite);
u8 __attribute__((long_call)) GetBattlerSide(u8 bank);
u8 __attribute__((long_call)) GetBattlerPosition(u8 slot);
u8 __attribute__((long_call)) GetBattlerAtPosition(u8);
bool8 __attribute__((long_call)) IsDoubleBattle(void);
void __attribute__((long_call)) InitSpriteDataForLinearTranslation(struct Sprite *sprite);
u8 __attribute__((long_call)) GetBattlerSpriteSubpriority(u8 bank);
void __attribute__((long_call)) BattleSetup_StartRoamerBattle(void);
void __attribute__((long_call)) BattleSetup_StartWildBattle(void);
void __attribute__((long_call)) StartTheBattle(void);
void __attribute__((long_call)) CB2_EndWildBattle(void);
u8 __attribute__((long_call)) GetWildBattleTransition(void);
u8* __attribute__((long_call)) GetTrainerALoseText(void);
u8* __attribute__((long_call)) GetTrainerAWinText(void);
u32 __attribute__((long_call)) UnpackSelectedBattleAnimPalettes(s16);
void __attribute__((long_call)) StartBlendAnimSpriteColor(u8, u32);
void __attribute__((long_call)) BattleIntroSlide2(u8 taskId);
void __attribute__((long_call)) BattleIntroSlide3(u8 taskId);
void __attribute__((long_call)) BattleIntroSlideLink(u8 taskId);
//void __attribute__((long_call)) BattleAI_SetupAIData(u8 defaultScoreMoves);
u8 __attribute__((long_call)) BattleAI_ChooseMoveOrAction(void);
void __attribute__((long_call)) RecordAbilityBattle(u8 bank, u8 ability);
void __attribute__((long_call)) RecordItemBattle(u8 bank, u8 item_effect);
//void __attribute__((long_call)) BattleStringExpandPlaceholdersToDisplayedString(const u8* textPtr);
u8* __attribute__((long_call)) TryGetStatusString(u8 *src);
void __attribute__((long_call)) ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst);
void __attribute__((long_call)) ChooseMoveUsedParticle(u8* textPtr);
void  __attribute__((long_call)) ChooseTypeOfMoveUsedString(u8* dst);
void __attribute__((long_call)) BattlePutTextOnWindow(const u8* text, u8 arg1);
void __attribute__((long_call)) SetPpNumbersPaletteInMoveSelection(void);
//u8 __attribute__((long_call)) GetBattleTowerTrainerPicIndex(void); //Ruby Leftover
//u8 __attribute__((long_call)) GetBattleTowerTrainerClassId(void); //Ruby Leftover
//void __attribute__((long_call)) GetBattleTowerTrainerName(u8* dst); //Ruby Leftover
u8 __attribute__((long_call)) GetEreaderTrainerFrontSpriteId(void);
u8 __attribute__((long_call)) GetEreaderTrainerClassId(void);
void __attribute__((long_call)) GetEreaderTrainerName(u8* dst);
bool8 __attribute__((long_call)) sub_80EB2E0(u32 a);
//bool8 __attribute__((long_call)) IsLinkDoubleBattle(void);
void __attribute__((long_call)) sub_8127EC4(u8 bank, u8 partyID, u8 r2);
void __attribute__((long_call)) sub_8127FF4(u8 slot, u8 slot2);
u8 __attribute__((long_call)) GetTrainerTowerTrainerClassId(void);
void __attribute__((long_call)) GetTrainerTowerTrainerName(u8* dst);
u8 __attribute__((long_call)) GetTrainerTowerTrainerPicIndex(void);
void __attribute__((long_call)) CopyTrainerTowerPlayerLostText(u8* dst, u8 varset);
void __attribute__((long_call)) CopyTrainerTowerPlayerWonText(u8* dst, u8 varset);

//Poke Ball Functions
void __attribute__((long_call)) SpriteCB_TestBallThrow(struct Sprite *sprite);
void __attribute__((long_call)) PokeBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) GreatBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) SafariBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) UltraBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) MasterBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) DiveBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) RepeatBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) TimerBallOpenParticleAnimation(u8 taskId);
void __attribute__((long_call)) PremierBallOpenParticleAnimation(u8 taskId);

//Pokemon Functions
void __attribute__((long_call)) EmitSetMonData(u8 a, u8 request, u8 c, u8 bytes, void *data);
void __attribute__((long_call)) ZeroPlayerPartyMons(void);
void __attribute__((long_call)) ZeroEnemyPartyMons(void);
void __attribute__((long_call)) CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void __attribute__((long_call)) CreateBoxMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void __attribute__((long_call)) CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature);
void __attribute__((long_call)) CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter);
void __attribute__((long_call)) CalculateMonStats(pokemon_t *mon);
u8 __attribute__((long_call)) GetMonGender(pokemon_t* mon);
u8 __attribute__((long_call)) GetBoxMonGender(struct BoxPokemon* boxMon);
u8 __attribute__((long_call)) GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
u32 __attribute__((long_call)) GetMonData(struct Pokemon *, s32, const void *data);
void __attribute__((long_call)) SetMonData(struct Pokemon *mon, s32 field, const void *data);
void __attribute__((long_call)) SetMonData2(struct Pokemon *mon, s32 PokemonDataRequest, const void *data);
void __attribute__((long_call)) CopyMon(void *dest, void *src, size_t size);
u8 __attribute__((long_call)) SendMonToPC(struct Pokemon* mon);
u8 __attribute__((long_call)) GetPartyAbility(pokemon_t*);
u8 __attribute__((long_call)) CalculatePlayerPartyCount(void);
u8 __attribute__((long_call)) CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
u16 __attribute__((long_call)) SpeciesToNationalPokedexNum(u16 species);
void __attribute__((long_call)) MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies);
s8 __attribute__((long_call)) GetPokeFlavourRelation(u32 pid, u8 flavor);
bool8 __attribute__((long_call)) IsTradedMon(struct Pokemon *mon);
bool8 __attribute__((long_call)) IsOtherTrainer(u32 otId, u8* otName);
void __attribute__((long_call)) MonRestorePP(struct Pokemon *mon);
bool8 __attribute__((long_call)) GetSetPokedexFlag(u16 nationalNum, u8 caseID);
u16 __attribute__((long_call)) GetPokedexHeightWeight(u16 dexNum, u8 data);
void __attribute__((long_call)) ReducePartyToThree(void);
u8 __attribute__((long_call)) pokemon_order_func(u8 a);
bool8 __attribute__((long_call)) GetIndexFromDexFlag(u16 index, u8 dexFlag);
u8 __attribute__((long_call)) GetEggMoves(pokemon_t* poke, void* storageAddr);

u8 __attribute__((long_call)) GetWildDataIndexForMap(void);

//Pokemon Icon Functions
u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality, bool32 extra);
const u8* __attribute__((long_call)) GetMonIconTiles(u16 species, bool32 extra);
void __attribute__((long_call)) LoadMonIconPalettes(void);
void __attribute__((long_call)) SafeLoadMonIconPalette(u16 species);
void __attribute__((long_call)) LoadMonIconPalette(u16 species);
void __attribute__((long_call)) FreeMonIconPalettes(void);
void __attribute__((long_call)) SafeFreeMonIconPalette(u16 species);
void __attribute__((long_call)) FreeMonIconPalette(u16 species);
void __attribute__((long_call)) SpriteCB_PokeIcon(struct Sprite *sprite);
const u16* __attribute__((long_call)) GetValidMonIconPalettePtr(u16 species);
u8 __attribute__((long_call)) GetValidMonIconPalIndex(u16 species);
u8 __attribute__((long_call)) GetSpeciesIconPaletteIndex(u16 species);
const u16* __attribute__((long_call)) GetValidMonIconPalettePtr(u16 species);

//Wild Encounter Functions
u8 __attribute__((long_call)) ChooseWildMonIndex_Land(void);
u8 __attribute__((long_call)) ChooseWildMonIndex_WaterRock(void);
u8 __attribute__((long_call)) ChooseWildMonIndex_Fishing(u8 rod);
bool8 __attribute__((long_call)) CanEncounterUnownInTanobyRuins(void);
u32 __attribute__((long_call)) GenerateUnownPersonality(u8 letter);
//bool8 __attribute__((long_call)) DoWildEncounterRateDiceRoll(u16 encounterRate);
bool8 __attribute__((long_call)) DoGlobalWildEncounterDiceRoll(void);
bool8 __attribute__((long_call)) IsWildLevelAllowedByRepel(u8 level);
void __attribute__((long_call)) ApplyFluteEncounterRateMod(u32 *encRate);
void __attribute__((long_call)) ApplyCleanseTagEncounterRateMod(u32 *encRate);
void __attribute__((long_call)) IncrementEncounterProbabilityBonus(u8 encounterRate);
bool8 __attribute__((long_call)) TryStartRoamerEncounter(void);

//Item Functions
bool8 __attribute__((long_call)) IsMail(u16 item_id);
void __attribute__((long_call)) CopyItemName(u16 itemId, u8* dst);
bool8 __attribute__((long_call)) CheckBagHasItem(u16 itemId, u16 count);
bool8 __attribute__((long_call)) AddBagItem(u16 itemId, u16 count);
u16 __attribute__((long_call)) SanitizeItemId(u16 item_id);
u8 __attribute__((long_call)) ItemId_GetHoldEffect(u16 item_id);
u8 __attribute__((long_call)) ItemId_GetHoldEffectParam(u16 item_id);
u8 __attribute__((long_call)) ItemId_GetMystery2(u16 item_id);
u8 __attribute__((long_call)) GetPocketByItemId(u16 item_id);
u8 __attribute__((long_call)) ItemId_GetType(u16 item_id);
u8 __attribute__((long_call)) FlagSet(u16 id);
u8 __attribute__((long_call)) FlagClear(u16 id);
bool8 __attribute__((long_call)) FlagGet(u16 id);
void __attribute__((long_call)) AddMoney(u32* moneySaveblock, u32 to_give);

/*Overworld Functions*/
u8 __attribute__((long_call)) GetTrainerEncounterMusicId(u16 trainerOpponentId);
u8 __attribute__((long_call)) Overworld_GetMapTypeOfSaveblockLocation(void);
u8 __attribute__((long_call)) GetCurrentMapBattleScene(void);
u32 __attribute__((long_call)) MetatileBehavior_GetLowerBytes(u32 a, u8 b);
u32 __attribute__((long_call)) MapGridGetMetatileIdAt(int x, int y);
u16 __attribute__((long_call)) MapGridGetMetatileField(u16 x, u16 y, u8 a);
u32 __attribute__((long_call)) MapGridGetMetatileBehaviorAt(int, int);
bool8 __attribute__((long_call)) MetatileBehavior_IsSandOrDeepSand(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSurfableWaterOrUnderwater(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsTallGrass(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsLongGrass(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsIndoorEncounter(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsMountain(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsDeepOrOceanWater(u8 metatileBehavior);
void __attribute__((long_call)) PlayerGetDestCoords(s16* x, s16* y);
u8 __attribute__((long_call)) TestPlayerAvatarFlags(u8 a);
void __attribute__((long_call)) sub_805C780(void);
u8* __attribute__((long_call)) GetEventObjectScriptPointerByEventObjectId(u8);
u8 __attribute__((long_call)) GetRunningDirectionAnimNum(u8 direction);
void __attribute__((long_call)) npc_apply_anim_looping(struct MapObject *eventObject, struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) npc_apply_direction(struct MapObject *eventObject, struct Sprite *sprite, u8 direction, u8 speed);
bool8 __attribute__((long_call)) npc_obj_ministep_stop_on_arrival(struct MapObject *eventObject, struct Sprite *sprite);
void __attribute__((long_call)) ScriptContext1_SetupScript(u8 *ptr);
void __attribute__((long_call)) FreezeEventObjects(void);
void __attribute__((long_call)) ScriptContext2_Enable(void);
void __attribute__((long_call)) ScriptContext1_Stop(void);
void __attribute__((long_call)) PlayNewMapMusic(u16 musicId);

//Field Weather Functions
void __attribute__((long_call)) Task_WeatherMain(u8 taskId);
u8 __attribute__((long_call)) GetCurrentWeather(void);

//Start Trainer Battle Functions
//void __attribute__((long_call)) InitTrainerBattleVariables(void);
void __attribute__((long_call)) TrainerBattleLoadArgs(const struct TrainerBattleParameter* specs, const u8 *data);
u16 __attribute__((long_call)) TrainerBattleLoadArg16(const u8 *ptr);
u8 __attribute__((long_call)) TrainerBattleLoadArg8(const u8 *ptr);
void __attribute__((long_call)) SetMapVarsToTrainer(void);
//u8* __attribute__((long_call)) BattleSetup_ConfigureTrainerBattle(u8 *data);
void __attribute__((long_call)) TrainerWantsBattle(u8 trainerEventObjId, const u8 *trainerScript);
//u32 __attribute__((long_call)) GetTrainerFlagFromScriptPointer(const u8 *data);
void __attribute__((long_call)) CB2_EndTrainerBattle(void);
bool8 __attribute__((long_call)) TrainerCanApproachPlayer(struct MapObject* trainerObj);
void __attribute__((long_call)) TrainerApproachPlayer(struct MapObject* trainerObj, u8 range);
u16 __attribute__((long_call)) GetRematchTrainerId(u16 opponentId);

//Quest Log
void __attribute__((long_call)) QuestLogRemtachBattleStore(void);
bool8 __attribute__((long_call)) IsQuestLogActive(void);

//Safari Zone Functions
bool8 __attribute__((long_call)) GetSafariZoneFlag(void);
void __attribute__((long_call)) SetSafariZoneFlag(void);
void __attribute__((long_call)) ResetSafariZoneFlag(void);

//Party Menu Functions
void __attribute__((long_call)) sub_811FA78(u8 taskId);
s8 __attribute__((long_call)) sub_812029C(s8 a, s8 b);
void __attribute__((long_call)) sub_8122D78(void);

//Window Functions
u16 __attribute__((long_call)) InitWindows(const struct WindowTemplate *templates);
u16 __attribute__((long_call)) AddWindow(const struct WindowTemplate *template);
void __attribute__((long_call)) RemoveWindow(u8 windowId);
void __attribute__((long_call)) FreeAllWindowBuffers(void);
void __attribute__((long_call)) CopyWindowToVram(u8 windowId, u8 mode);
void __attribute__((long_call)) PutWindowTilemap(u8 windowId);
void __attribute__((long_call)) PutWindowRectTilemapOverridePalette(u8 windowId, u8 x, u8 y, u8 width, u8 height, u8 palette);
void __attribute__((long_call)) ClearWindowTilemap(u8 windowId);
void __attribute__((long_call)) PutWindowRectTilemap(u8 windowId, u8 x, u8 y, u8 width, u8 height);
void __attribute__((long_call)) BlitBitmapToWindow(u8 windowId, const u8 *pixels, u16 x, u16 y, u16 width, u16 height);
void __attribute__((long_call)) BlitBitmapRectToWindow(u8 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight);
void __attribute__((long_call)) BlitBitmapRectToWindowWithColorKey(u8 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight, u8 colorKey);
void __attribute__((long_call)) FillWindowPixelRect(u8 windowId, u8 fillValue, u16 x, u16 y, u16 width, u16 height);
void __attribute__((long_call)) CopyToWindowPixelBuffer(u8 windowId, const void *src, u16 size, u16 tileOffset);
void __attribute__((long_call)) FillWindowPixelBuffer(u8 windowId, u8 fillValue);
void __attribute__((long_call)) ScrollWindow(u8 windowId, u8 direction, u8 distance, u8 fillValue);
void __attribute__((long_call)) CallWindowFunction(u8 windowId, void ( *func)(u8, u8, u8, u8, u8, u8));
bool8 __attribute__((long_call)) SetWindowAttribute(u8 windowId, u8 attributeId, u32 value);
u32 __attribute__((long_call)) GetWindowAttribute(u8 windowId, u8 attributeId);
u8 __attribute__((long_call)) GetNumActiveWindowsOnBg(u8 bgId);
u32 __attribute__((long_call)) WindowOutline(u8 rid, bool8 triggerA, u16 tilemap_set_something_idk, u8 pal_slot);
u8 __attribute__((long_call)) WindowPrint(u8 id, u8 font, u8 x, u8 y, struct TextColor* color, u8 speed, const u8* s);
void __attribute__((long_call)) ChoiceSetupSimple(u8 rid, u8 fboxid, u8 x, u8 y, u8 y_stride, u8 num_choices, u8 preselected_choice);
s8 __attribute__((long_call)) RboxChoiceUpdate(void);
u8 __attribute__((long_call)) RboxIdClean(u8 id, bool8 update);

//Palette Functions
void BlendPalette(u16 palOffset, u16 numEntries, u8 coeff, u16 blendColor);
void __attribute__((long_call)) LoadCompressedPalette(const void* src, u16 offset, u16 size);
void __attribute__((long_call)) LoadPalette(const void *src, u16 offset, u16 size);
void __attribute__((long_call)) FillPalette(u16 value, u16 offset, u16 size);
//void __attribute__((long_call)) TransferPlttBuffer(void);
u8 __attribute__((long_call)) UpdatePaletteFade(void);
void __attribute__((long_call)) ResetPaletteFade(void);
void __attribute__((long_call)) ReadPlttIntoBuffers(void);
bool8 __attribute__((long_call)) BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u16 blendColor);
void __attribute__((long_call)) FadeBgPalAndFillBlack(void);
void __attribute__((long_call)) ResetPaletteStructByUid(u16 a1);
void __attribute__((long_call)) ResetPaletteStruct(u8 paletteNum);
void __attribute__((long_call)) ResetPaletteFadeControl(void);
u8 __attribute__((long_call)) GetPaletteNumByUid(u16 uid);
u8 __attribute__((long_call)) UpdateNormalPaletteFade(void);
void __attribute__((long_call)) InvertPlttBuffer(u32 selectedPalettes);
void __attribute__((long_call)) TintPlttBuffer(u32 selectedPalettes, s8 r, s8 g, s8 b);
void __attribute__((long_call)) UnfadePlttBuffer(u32 selectedPalettes);
void __attribute__((long_call)) BeginFastPaletteFade(u8 submode);
void __attribute__((long_call)) BeginFastPaletteFadeInternal(u8 submode);
u8 __attribute__((long_call)) UpdateFastPaletteFade(void);
void __attribute__((long_call)) BeginHardwarePaletteFade(u8 blendCnt, u8 delay, u8 y, u8 targetY, u8 shouldResetBlendRegisters);
u8 __attribute__((long_call)) UpdateHardwarePaletteFade(void);
void __attribute__((long_call)) UpdateBlendRegisters(void);
bool8 __attribute__((long_call)) IsSoftwarePaletteFadeFinishing(void);
void __attribute__((long_call)) BlendPalettes(u32 selectedPalettes, u8 coeff, u16 color);
void __attribute__((long_call)) BlendPalettesUnfaded(u32 selectedPalettes, u8 coeff, u16 color);
void __attribute__((long_call)) TintPalette_GrayScale(u16 *palette, u16 count);
void __attribute__((long_call)) TintPalette_GrayScale2(u16 *palette, u16 count);
void __attribute__((long_call)) TintPalette_SepiaTone(u16 *palette, u16 count);
void __attribute__((long_call)) TintPalette_CustomTone(u16 *palette, u16 count, u16 rTone, u16 gTone, u16 bTone);
void __attribute__((long_call)) SyncTilemaps(void);
void __attribute__((long_call)) SetVBlankCallback(void (*callback));
void __attribute__((long_call)) SetHBlankCallback(void (*callback));
void __attribute__((long_call)) SetCallback1(void* func);
void __attribute__((long_call)) SetCallback2(void* func);
void __attribute__((long_call)) OverworldCallback2(void);

void __attribute__((long_call)) LZ77UnCompWram(const void *src, void *dest);
void __attribute__((long_call)) LZ77UnCompVram(const void *src, void *dest);

void __attribute__((long_call)) BuildOAMBuffer(void);
void __attribute__((long_call)) AnimateSprites(void);
void __attribute__((long_call)) BgIdSetTilemap(u8 layer, u8* space);
void __attribute__((long_call)) BgIdMarkForSync(u8 bgid);
void __attribute__((long_call)) GpuSyncBGShow(u8 layer);

//Save Functions
void __attribute__((long_call)) SaveSerializedGame(void);
void __attribute__((long_call)) UpdateSaveAddresses(void);
u16 __attribute__((long_call)) CalculateChecksum(void* data, u16 size);
u8 __attribute__((long_call)) TryWriteSector(u8 sector, u8 *data);
u8 __attribute__((long_call)) save_write_to_flash(u16 chunkId, const struct SaveBlockChunk *chunks);
u8 __attribute__((long_call)) DoReadFlashWholeSection(u8 sector, struct SaveSection *section);

//Other Functions
void* __attribute__((long_call)) Malloc(u32 size);
void* __attribute__((long_call)) Calloc(u32 size);
void __attribute__((long_call)) Free(void *pointer);
u8 __attribute__((long_call)) CreateSprite(const struct SpriteTemplate* template, s16 x, s16 y, u8 subpriority);
void __attribute__((long_call)) DestroySprite(struct Sprite *sprite);
void __attribute__((long_call)) SpriteCallbackDummy(struct Sprite *sprite);

void __attribute__((long_call)) StartSpriteAnim(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) StartSpriteAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) SeekSpriteAnim(struct Sprite *sprite, u8 animCmdIndex);
void __attribute__((long_call)) StartSpriteAffineAnim(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) StartSpriteAffineAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) ChangeSpriteAffineAnim(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) ChangeSpriteAffineAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void __attribute__((long_call)) SetSpriteSheetFrameTileNum(struct Sprite *sprite);
void __attribute__((long_call)) ResetAffineAnimData(void);
u8 __attribute__((long_call)) AllocOamMatrix(void);
void __attribute__((long_call)) FreeOamMatrix(u8 matrixNum);
void __attribute__((long_call)) InitSpriteAffineAnim(struct Sprite *sprite);
void __attribute__((long_call)) SetOamMatrixRotationScaling(u8 matrixNum, s16 xScale, s16 yScale, u16 rotation);
u16 __attribute__((long_call)) LoadSpriteSheet(const struct SpriteSheet *sheet);
void __attribute__((long_call)) LoadSpriteSheets(const struct SpriteSheet *sheets);
void __attribute__((long_call)) FreeSpriteTilesByTag(u16 tag);
void __attribute__((long_call)) FreeSpriteTileRanges(void);
u16 __attribute__((long_call)) GetSpriteTileStartByTag(u16 tag);
u8 __attribute__((long_call)) IndexOfSpriteTileTag(u16 tag);
u16 __attribute__((long_call)) GetSpriteTileTagByTileStart(u16 start);
void __attribute__((long_call)) AllocSpriteTileRange(u16 tag, u16 start, u16 count);
void __attribute__((long_call)) FreeAllSpritePalettes(void);
u8 __attribute__((long_call)) LoadSpritePalette(const struct SpritePalette *palette);
void __attribute__((long_call)) LoadSpritePalettes(const struct SpritePalette *palettes);
void __attribute__((long_call)) DoLoadSpritePalette(const u16 *src, u16 paletteOffset);
u8 __attribute__((long_call)) AllocSpritePalette(u16 tag);
u8 __attribute__((long_call)) IndexOfSpritePaletteTag(u16 tag);
u16 __attribute__((long_call)) GetSpritePaletteTagByPaletteNum(u8 paletteNum);
void __attribute__((long_call)) FreeSpritePaletteByTag(u16 tag);
void __attribute__((long_call)) SetSubspriteTables(struct Sprite *sprite, const struct SubspriteTable *subspriteTables);
bool8 __attribute__((long_call)) AddSpriteToOamBuffer(struct Sprite *sprite, u8 *oamIndex);
bool8 __attribute__((long_call)) AddSubspritesToOamBuffer(struct Sprite *sprite, struct OamData *destOam, u8 *oamIndex);
void __attribute__((long_call)) ResetSpriteData(void);

void __attribute__((long_call)) CleanupOverworldWindowsAndTilemaps(void);
void __attribute__((long_call)) ResetBgsAndClearDma3BusyFlags(u8 bg);	// in bg.h
void __attribute__((long_call))BgIdModOffsetX(u8 bgid, s32 delta, u8 dir);
void __attribute__((long_call))BgIdModOffsetY(u8 bgid, s32 delta, u8 dir);

u8* __attribute__((long_call)) StringCopy(u8* dest, u8* src);
u16 __attribute__((long_call)) StringLength(const u8 *str);
u8* __attribute__((long_call)) ConvertIntToDecimalStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
void __attribute__((long_call)) LZDecompressVram(const void *src, void *dest);
bool8 __attribute__((long_call)) LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet* src);
bool8 __attribute__((long_call)) LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src);
int __attribute__((long_call)) CountTrailingZeroBits(u32 value);
void __attribute__((long_call)) IncrementGameStat(u8 gameStat);
void __attribute__((long_call)) nullsub_8(void);
s16 __attribute__((long_call)) Sine(s16 index, s16 amplitude);
u16 __attribute__((long_call)) Random();
u8 __attribute__((long_call)) GetEventObjectIdByLocalIdAndMapInternal(u8 localId, u8 mapNum, u8 mapGroupId);
u8 __attribute__((long_call)) GetEventObjectIdByLocalId(u8 localId);
u16 __attribute__((long_call)) VarGet(u16 var);
u32 __attribute__((long_call)) VarGetAddress(u16 var);
bool8 __attribute__((long_call)) VarSet(u16 var, u16 value);
void __attribute__((long_call)) PlayCry3(u16 species, s8 pan, u8 mode);
void __attribute__((long_call)) PlayBGM(u16 songNum);
void __attribute__((long_call)) PlaySE(u16 songNum);
void __attribute__((long_call)) ResetTasks(void);
u8 __attribute__((long_call)) CreateTask(TaskFunc func, u8 priority);
void __attribute__((long_call)) InsertTask(u8 newTaskId);
void __attribute__((long_call)) DestroyTask(u8 taskId);
void __attribute__((long_call)) RunTasks(void);
u8 __attribute__((long_call)) FindFirstActiveTask(void);
void __attribute__((long_call)) TaskDummy(u8 taskId);
void __attribute__((long_call)) SetTaskFuncWithFollowupFunc(u8 taskId, TaskFunc func, TaskFunc followupFunc);
void __attribute__((long_call)) SwitchTaskToFollowupFunc(u8 taskId);
bool8 __attribute__((long_call)) FuncIsActiveTask(TaskFunc func);
u8 __attribute__((long_call)) FindTaskIdByFunc(TaskFunc func);
u8 __attribute__((long_call)) GetTaskCount(void);
u8* __attribute__((long_call)) ReturnEmptyStringIfNull(const u8* string);
void __attribute__((long_call)) DisplayItemMessage(u8 taskId, u8 a, const u8* str, void(*callback)(u8 taskId));
void __attribute__((long_call)) bag_menu_inits_lists_menu(u8 taskId);
void __attribute__((long_call)) AddTextPrinterParameterized4(u8 windowId, u8 fontId, u8 left, u8 top, u8 letterSpacing, u8 lineSpacing, const u8 *color, s8 speed, const u8 *str);
void __attribute__((long_call)) m4aSongNumStop(u16 n);
void __attribute__((long_call)) m4aMPlayContinue(struct MusicPlayerInfo *mplayInfo);
void __attribute__((long_call)) m4aMPlayVolumeControl(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u16 volume);
void __attribute__((long_call)) CpuSet(const void* src, void* dest, u32 mode);
void __attribute__((long_call)) CpuFastSet(const void* src, void* dest, u32 mode);
u16 __attribute__((long_call)) Sqrt(u32);
u32 __attribute__((long_call)) udivsi(u32, u32);
u32 __attribute__((long_call)) umodsi(u32, u32);

void __attribute__((long_call)) BufferPokeNameSize(u16 species, void* varAddress);
u8 __attribute__((long_call)) CalculateHeight(u16 species, void* varAddress);
void __attribute__((long_call)) CreateMaleMon(pokemon_t* poke_address, u16 species, u8 level);
void __attribute__((long_call)) ReturnToFieldContinueScriptPlayMapMusic(void);
u32 __attribute__((long_call)) GetAttrFromAnyBox(u8 boxId, u8 boxSlot, u8 dataRequest);
void __attribute__((long_call)) SetAttrFromAnyBox(u8 boxId, u8 boxSlot, u8 dataRequest, void* dataAddr);
u16 __attribute__((long_call)) VarGetEventObjectGraphicsId(u8 Id);
u16 __attribute__((long_call)) GetBaseSpecies(u16 species);

void __attribute__((long_call)) PatchObjectPalette(u16 PalTag, u8 PalSlot);

void __attribute__((long_call)) GpuTileObjAllocTagAndUpload(struct SpriteSheet* tile);
u8 __attribute__((long_call)) GpuPalObjAllocTagAndApply(struct SpritePalette* pal);
void __attribute__((long_call)) GpuPalApply(void* src, int dstIndex, int numCols);
void __attribute__((long_call)) LogCoordsCameraRelative(s32* x, s32* y, u8 size_x, u8 size_y);
void __attribute__((long_call)) LoadOAM(void);
void __attribute__((long_call)) ProcessSpriteCopyRequests(void);

u8 __attribute__((long_call)) TemplateInstanciateReverseSearch(struct SpriteTemplate* tmp, s16 x, s16 y, u8 height);

// Textbox Stuff
void __attribute__((long_call)) TextboxClose(void);
void __attribute__((long_call)) TextboxFdecodeAutoAndCreateTask(const u8* text);
void __attribute__((long_call)) RemoBoxesUploadTilesets(void);
void __attribute__((long_call)) DeactivateAllTextPrinters(void);

// Start Menu
void __attribute__((long_call)) CloseSafariStepsBox(void);
void __attribute__((long_call)) CloseStartMenuDescriptionBox(void);
void __attribute__((long_call)) HideStartMenu(void);
void __attribute__((long_call)) StartMenuPokedexFunc(void);

void __attribute__((long_call)) MallocInit(void* memStart, u32 memSize);
void __attribute__((long_call)) EnableInterrupts(u8 disable);
void __attribute__((long_call)) DisableInterrupts(u8 disable);

void __attribute__((long_call)) GpuSyncBGHide(u8 layer);
void* __attribute__((long_call)) LoadPartyIconTiles(u16 species, u32 pid, bool8 isDeoxys);


u8* __attribute__((long_call)) ExecOE(u8 anim);
void __attribute__((long_call)) CallbackOWandContinueScriptsMusic(void);
bool8 __attribute__((long_call)) CheckOpenSky(u8 mapLight);
void __attribute__((long_call)) StopOE(struct Sprite* s, u8 animation);
void __attribute__((long_call)) FreeOBJ(struct Sprite *s);
void __attribute__((long_call)) DeleteOBJ(struct Sprite *s);

void __attribute__((long_call)) OverworldCallback1(void);
void __attribute__((long_call)) OverworldCallbackSwitchStartMenu(void);
u8 __attribute__((long_call)) CurrMapHeightMismatch(u8 height, s16 x, s16 y);

void __attribute__((long_call)) MakeExclamationMark(struct MapObject* npc, struct Sprite* s);

//The Deal Breaker
void __attribute__((long_call)) break_func(u32);
u32 break_helper(u32 a);