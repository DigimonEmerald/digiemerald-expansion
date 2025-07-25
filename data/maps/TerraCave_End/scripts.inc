TerraCave_End_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TerraCave_End_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, TerraCave_End_OnTransition
	.byte 0

TerraCave_End_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, TerraCave_End_EventScript_TryRemoveGekomon
	end

TerraCave_End_EventScript_TryRemoveGekomon::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_TERRA_CAVE_GEKOMON
	return

TerraCave_End_OnTransition:
	call_if_unset FLAG_DEFEATED_GEKOMON, TerraCave_End_EventScript_ShowGekomon
	end

TerraCave_End_EventScript_ShowGekomon::
	clearflag FLAG_HIDE_TERRA_CAVE_GEKOMON
	setvar VAR_TEMP_1, 1
	return

TerraCave_End_EventScript_Gekomon::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_TERRA_CAVE_GEKOMON, TerraCave_End_Movement_GekomonApproach
	waitmovement 0
	waitse
	playmoncry SPECIES_GEKOMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_TERRA_CAVE_GEKOMON
	setwildbattle SPECIES_GEKOMON, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	setvar VAR_TEMP_1, 0
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TerraCave_End_EventScript_DefeatedGekomon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, TerraCave_End_EventScript_RanFromGekomon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, TerraCave_End_EventScript_RanFromGekomon
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_GEKOMON
	releaseall
	end

TerraCave_End_EventScript_DefeatedGekomon::
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	setflag FLAG_DEFEATED_GEKOMON
	goto Common_EventScript_RemoveStaticPokemon
	end

TerraCave_End_EventScript_RanFromGekomon::
	setvar VAR_0x8004, SPECIES_GEKOMON
	goto Common_EventScript_LegendaryFlewAway
	end

TerraCave_End_Movement_GekomonApproach:
	init_affine_anim
	walk_down_start_affine
	delay_16
	delay_16
	walk_down_affine
	delay_16
	delay_16
	walk_down_affine
	step_end

