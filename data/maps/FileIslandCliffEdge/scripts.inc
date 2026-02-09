FileIslandCliffEdge_MapScripts::
# 2 "data/maps/FileIslandCliffEdge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FileIslandCliffEdge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FileIslandCliffEdge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FileIslandCliffEdge/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FileIslandCliffEdge_EventScript_ApproachCliff1::
# 8 "data/maps/FileIslandCliffEdge/scripts.pory"
	lock
# 9 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, FileIslandCliffEdge_Movement_ApproachCliff1
# 10 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 11 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_KidLineUp
	return


FileIslandCliffEdge_EventScript_ApproachCliff2::
# 15 "data/maps/FileIslandCliffEdge/scripts.pory"
	lock
# 16 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, FileIslandCliffEdge_Movement_ApproachCliff2
# 17 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 18 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_KidLineUp
	return


FileIslandCliffEdge_EventScript_ApproachCliff3::
# 22 "data/maps/FileIslandCliffEdge/scripts.pory"
	lock
# 23 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, FileIslandCliffEdge_Movement_ApproachCliff3
# 24 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 25 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_KidLineUp
	return


FileIslandCliffEdge_EventScript_ApproachCliff4::
# 29 "data/maps/FileIslandCliffEdge/scripts.pory"
	lock
# 30 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, FileIslandCliffEdge_Movement_ApproachCliff4
# 31 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 32 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_KidLineUp
	return


FileIslandCliffEdge_EventScript_ApproachCliff5::
# 36 "data/maps/FileIslandCliffEdge/scripts.pory"
	lock
# 37 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, FileIslandCliffEdge_Movement_ApproachCliff5
# 38 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 39 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_KidLineUp
	return


FileIslandCliffEdge_EventScript_KidLineUp::
# 43 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 1
# 44 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 2
# 45 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 3
# 46 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 4
# 47 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 5
# 48 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 6
# 49 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 1, FileIslandCliffEdge_Movement_MimiLineUp
# 50 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 2, FileIslandCliffEdge_Movement_JoeLineUp
# 51 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 3, FileIslandCliffEdge_Movement_MattLineUp
# 52 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 4, FileIslandCliffEdge_Movement_TKLineUp
# 53 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 5, FileIslandCliffEdge_Movement_IzzyLineUp
# 54 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 6, FileIslandCliffEdge_Movement_RivalLineUp
# 55 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 56 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 57 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 58 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 59 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 60 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 30
# 61 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 62 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 63 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 30
# 64 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 65 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 66 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_0
# 67 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_1
# 68 "data/maps/FileIslandCliffEdge/scripts.pory"
	checkplayergender
# 69 "data/maps/FileIslandCliffEdge/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 0, FileIslandCliffEdge_EventScript_KidLineUp_3
# 71 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 1, FileIslandCliffEdge_EventScript_KidLineUp_4
FileIslandCliffEdge_EventScript_KidLineUp_1:
# 73 "data/maps/FileIslandCliffEdge/scripts.pory"
	playse SE_M_WING_ATTACK
# 74 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 30
# 75 "data/maps/FileIslandCliffEdge/scripts.pory"
	addobject 7
# 76 "data/maps/FileIslandCliffEdge/scripts.pory"
	applymovement 7, FileIslandCliffEdge_Movement_KuwagamonApproach
# 77 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitmovement 0
# 78 "data/maps/FileIslandCliffEdge/scripts.pory"
	switch VAR_STARTER_MON
# 79 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 0, FileIslandCliffEdge_EventScript_KidLineUp_7
# 80 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 1, FileIslandCliffEdge_EventScript_KidLineUp_8
# 81 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 2, FileIslandCliffEdge_EventScript_KidLineUp_9
FileIslandCliffEdge_EventScript_KidLineUp_5:
# 83 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_7
# 84 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_8
# 85 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_9
# 86 "data/maps/FileIslandCliffEdge/scripts.pory"
	checkplayergender
# 87 "data/maps/FileIslandCliffEdge/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 0, FileIslandCliffEdge_EventScript_KidLineUp_12
# 89 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 1, FileIslandCliffEdge_EventScript_KidLineUp_13
FileIslandCliffEdge_EventScript_KidLineUp_10:
# 91 "data/maps/FileIslandCliffEdge/scripts.pory"
	checkplayergender
# 92 "data/maps/FileIslandCliffEdge/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 0, FileIslandCliffEdge_EventScript_KidLineUp_16
# 94 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 1, FileIslandCliffEdge_EventScript_KidLineUp_17
FileIslandCliffEdge_EventScript_KidLineUp_14:
# 96 "data/maps/FileIslandCliffEdge/scripts.pory"
	checkplayergender
# 97 "data/maps/FileIslandCliffEdge/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 0, FileIslandCliffEdge_EventScript_KidLineUp_20
# 99 "data/maps/FileIslandCliffEdge/scripts.pory"
	case 1, FileIslandCliffEdge_EventScript_KidLineUp_21
FileIslandCliffEdge_EventScript_KidLineUp_18:
# 101 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_16
# 102 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_17
# 103 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_18
# 104 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_19
# 105 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_20
# 106 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_21
# 107 "data/maps/FileIslandCliffEdge/scripts.pory"
	special HealPlayerParty
# 108 "data/maps/FileIslandCliffEdge/scripts.pory"
	seteventmon SPECIES_KUWAGAMON, 25
# 109 "data/maps/FileIslandCliffEdge/scripts.pory"
	setflag B_FLAG_NO_WHITEOUT
# 110 "data/maps/FileIslandCliffEdge/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 111 "data/maps/FileIslandCliffEdge/scripts.pory"
	waitstate
# 112 "data/maps/FileIslandCliffEdge/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 113 "data/maps/FileIslandCliffEdge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FileIslandCliffEdge_EventScript_KidLineUp_22
# 116 "data/maps/FileIslandCliffEdge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FileIslandCliffEdge_EventScript_KidLineUp_23
# 119 "data/maps/FileIslandCliffEdge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq FileIslandCliffEdge_EventScript_KidLineUp_24
# 122 "data/maps/FileIslandCliffEdge/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FileIslandCliffEdge_EventScript_KidLineUp_25
	return

FileIslandCliffEdge_EventScript_KidLineUp_3:
# 70 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_2
	goto FileIslandCliffEdge_EventScript_KidLineUp_1

FileIslandCliffEdge_EventScript_KidLineUp_4:
# 71 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_3
	goto FileIslandCliffEdge_EventScript_KidLineUp_1

FileIslandCliffEdge_EventScript_KidLineUp_7:
# 79 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_4
	goto FileIslandCliffEdge_EventScript_KidLineUp_5

FileIslandCliffEdge_EventScript_KidLineUp_8:
# 80 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_5
	goto FileIslandCliffEdge_EventScript_KidLineUp_5

FileIslandCliffEdge_EventScript_KidLineUp_9:
# 81 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_6
	goto FileIslandCliffEdge_EventScript_KidLineUp_5

FileIslandCliffEdge_EventScript_KidLineUp_12:
# 88 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_10
	goto FileIslandCliffEdge_EventScript_KidLineUp_10

FileIslandCliffEdge_EventScript_KidLineUp_13:
# 89 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_11
	goto FileIslandCliffEdge_EventScript_KidLineUp_10

FileIslandCliffEdge_EventScript_KidLineUp_16:
# 93 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_12
	goto FileIslandCliffEdge_EventScript_KidLineUp_14

FileIslandCliffEdge_EventScript_KidLineUp_17:
# 94 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_13
	goto FileIslandCliffEdge_EventScript_KidLineUp_14

FileIslandCliffEdge_EventScript_KidLineUp_20:
# 98 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_14
	goto FileIslandCliffEdge_EventScript_KidLineUp_18

FileIslandCliffEdge_EventScript_KidLineUp_21:
# 99 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_KidLineUp_Text_15
	goto FileIslandCliffEdge_EventScript_KidLineUp_18

FileIslandCliffEdge_EventScript_KidLineUp_22:
# 114 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_BattleWon
	return

FileIslandCliffEdge_EventScript_KidLineUp_23:
# 117 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_BattleEnded
	return

FileIslandCliffEdge_EventScript_KidLineUp_24:
# 120 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_BattleEnded
	return

FileIslandCliffEdge_EventScript_KidLineUp_25:
# 123 "data/maps/FileIslandCliffEdge/scripts.pory"
	call FileIslandCliffEdge_EventScript_BattleEnded
	return


FileIslandCliffEdge_EventScript_BattleWon::
# 128 "data/maps/FileIslandCliffEdge/scripts.pory"
	removeobject 7
# 129 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_0
# 130 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_1
# 131 "data/maps/FileIslandCliffEdge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/FileIslandCliffEdge/scripts.pory"
	playse SE_FALL
# 133 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 120
# 134 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_2
# 135 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_3
# 136 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_4
# 137 "data/maps/FileIslandCliffEdge/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


FileIslandCliffEdge_EventScript_BattleEnded::
# 141 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleEnded_Text_0
# 142 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleEnded_Text_1
# 143 "data/maps/FileIslandCliffEdge/scripts.pory"
	fadescreen FADE_TO_BLACK
# 144 "data/maps/FileIslandCliffEdge/scripts.pory"
	playse SE_FALL
# 145 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 120
# 146 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_2
# 147 "data/maps/FileIslandCliffEdge/scripts.pory"
	playse SE_PUDDLE
# 148 "data/maps/FileIslandCliffEdge/scripts.pory"
	delay 45
# 149 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleWon_Text_3
# 150 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleEnded_Text_2
# 151 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleEnded_Text_3
# 152 "data/maps/FileIslandCliffEdge/scripts.pory"
	msgbox FileIslandCliffEdge_EventScript_BattleEnded_Text_4
# 153 "data/maps/FileIslandCliffEdge/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 156 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_ApproachCliff1:
# 157 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_right
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 158 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 159 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 162 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_ApproachCliff2:
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 163 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 164 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 167 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_ApproachCliff3:
# 168 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 169 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 170 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 173 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_ApproachCliff4:
# 174 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 174 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 175 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 176 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 179 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_ApproachCliff5:
# 180 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 180 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 180 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_left
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 181 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_fast_down
# 182 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 185 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_MimiLineUp:
# 186 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 186 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 187 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 190 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_JoeLineUp:
# 191 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 191 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 191 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 192 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 195 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_MattLineUp:
# 196 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 197 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 200 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_TKLineUp:
# 201 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 201 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 202 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 205 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_IzzyLineUp:
# 206 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_right
# 207 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 210 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_RivalLineUp:
# 211 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 211 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 211 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_left
# 212 "data/maps/FileIslandCliffEdge/scripts.pory"
	face_up
	step_end

# 215 "data/maps/FileIslandCliffEdge/scripts.pory"
FileIslandCliffEdge_Movement_KuwagamonApproach:
# 216 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_slow_down
# 216 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_slow_down
# 216 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_slow_down
# 216 "data/maps/FileIslandCliffEdge/scripts.pory"
	walk_slow_down
	step_end

FileIslandCliffEdge_EventScript_KidLineUp_Text_0:
# 66 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "{PLAYER}: It's a dead end!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_1:
# 67 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "{PLAYER}: We have to find another\n"
	.string "path!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_2:
# 70 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Sora: A-Another path where?!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_3:
# 71 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tai: A-Another path where?!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_4:
# 79 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Koromon: We have to go and fight!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_5:
# 80 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tanemon: We have to go and fight!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_6:
# 81 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Nyaromon: We have to go and fight!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_7:
# 83 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "{PLAYER}: What are you saying?!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_8:
# 84 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Motimon: He's right. It's what we've\n"
	.string "been waitin' fer all along.$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_9:
# 85 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Izzy: But..$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_10:
# 88 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Yokomon: I'm going.$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_11:
# 89 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Koromon: I'm going.$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_12:
# 93 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Sora: Are you insane?$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_13:
# 94 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tai: Are you insane?$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_14:
# 98 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Sora: You guys can't beat him!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_15:
# 99 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tai: You guys can't beat him!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_16:
# 101 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tsunomon: Still, we have to go!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_17:
# 102 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Matt: Hey!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_18:
# 103 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Tokomon: Me, too!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_19:
# 104 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Bukamon: And me!$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_20:
# 105 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Mimi: Tanemon... you, too?$"

FileIslandCliffEdge_EventScript_KidLineUp_Text_21:
# 106 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Koromon: Let's go!$"

FileIslandCliffEdge_EventScript_BattleWon_Text_0:
# 129 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "After miraculously taming the\n"
	.string "Kuwagamon, you notice the cliff edge\l"
	.string "has suffered great damage.$"

FileIslandCliffEdge_EventScript_BattleWon_Text_1:
# 130 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Before anyone can react, the cliff edge\n"
	.string "starts to rip away from the mountain.$"

FileIslandCliffEdge_EventScript_BattleWon_Text_2:
# 134 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Bukamon: Marching Fishes!$"

FileIslandCliffEdge_EventScript_BattleWon_Text_3:
# 135 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "From seemingly nowhere, a school of\n"
	.string "fish form a makeshift raft for the kids\l"
	.string "and their Digimon.$"

FileIslandCliffEdge_EventScript_BattleWon_Text_4:
# 136 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "After avoiding almost certain death,\n"
	.string "the kids float safely down the river\l"
	.string "until they find a safe embankment to\l"
	.string "disembark on.$"

FileIslandCliffEdge_EventScript_BattleEnded_Text_0:
# 141 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Despite everyones efforts, the\n"
	.string "Kuwagamon barely takes a step back.$"

FileIslandCliffEdge_EventScript_BattleEnded_Text_1:
# 142 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Before anyone can react, the Kuwagamon\n"
	.string "shoves its pincers into the ground and\l"
	.string "tears away the cliff edge that the kids\l"
	.string "are standing on.$"

FileIslandCliffEdge_EventScript_BattleEnded_Text_2:
# 150 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "Matt: Hey, Look!$"

FileIslandCliffEdge_EventScript_BattleEnded_Text_3:
# 151 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "A weakened Kuwagamon falls with more\n"
	.string "rubble from the shattering cliff\l"
	.string "causing the river to rock with\l"
	.string "ferocious waves.$"

FileIslandCliffEdge_EventScript_BattleEnded_Text_4:
# 152 "data/maps/FileIslandCliffEdge/scripts.pory"
	.string "After riding out the ferocious waves,\n"
	.string "the kids eventually crash onto a safe\l"
	.string "embankment.$"
