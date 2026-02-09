FileIsland_Entrance_MapScripts::
# 2 "data/maps/FileIsland_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FileIsland_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FileIsland_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FileIsland_Entrance/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


FileIsland_Entrance_EventScript_Starter1::
# 8 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 9 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 10 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 11 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 12 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 13 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 14 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 15 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 16 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter1
# 17 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 18 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 9
# 19 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter2::
# 23 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 24 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 25 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 26 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 28 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 29 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 30 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 31 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 0
# 32 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter3::
# 36 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 37 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 38 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 39 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 40 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 41 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 42 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 43 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 44 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 45 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter4::
# 49 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 50 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 51 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 52 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 53 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 54 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 55 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 56 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 57 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter4
# 58 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 59 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 60 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter5::
# 64 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 65 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 66 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 67 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 68 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 69 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 70 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 71 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 72 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter5
# 73 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 74 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 75 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_StarterTalk::
# 79 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 80 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalk_2
# 81 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalk_3
	return

FileIsland_Entrance_EventScript_StarterTalk_2:
# 80 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalkRight
	return

FileIsland_Entrance_EventScript_StarterTalk_3:
# 81 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalkDown
	return


FileIsland_Entrance_EventScript_StarterTalkRight::
# 86 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 87 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalkRight_3
# 88 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalkRight_4
# 89 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterTalkRight_5
FileIsland_Entrance_EventScript_StarterTalkRight_1:
# 91 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterSpeak
	return

FileIsland_Entrance_EventScript_StarterTalkRight_3:
# 87 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 6
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1

FileIsland_Entrance_EventScript_StarterTalkRight_4:
# 88 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 4
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1

FileIsland_Entrance_EventScript_StarterTalkRight_5:
# 89 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 5
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1


FileIsland_Entrance_EventScript_StarterTalkDown::
# 95 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 96 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalkDown_3
# 97 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalkDown_4
# 98 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterTalkDown_5
FileIsland_Entrance_EventScript_StarterTalkDown_1:
# 100 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterSpeak
	return

FileIsland_Entrance_EventScript_StarterTalkDown_3:
# 96 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 1
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1

FileIsland_Entrance_EventScript_StarterTalkDown_4:
# 97 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 2
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1

FileIsland_Entrance_EventScript_StarterTalkDown_5:
# 98 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 3
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1


FileIsland_Entrance_EventScript_StarterSpeak::
# 105 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_0
# 106 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_1
# 107 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_2
# 108 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_3
# 109 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_3
# 111 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_4
# 112 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterSpeak_5
FileIsland_Entrance_EventScript_StarterSpeak_1:
# 114 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_8
# 116 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_9
# 117 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterSpeak_10
FileIsland_Entrance_EventScript_StarterSpeak_6:
# 119 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_10
# 120 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_11
# 121 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 122 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_13
# 123 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_14
FileIsland_Entrance_EventScript_StarterSpeak_11:
# 125 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 126 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_12
# 127 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_13
# 128 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_14
# 129 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_15
# 130 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_16
# 131 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_17
# 132 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_18
# 133 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_19
# 134 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_LookAround
# 135 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 1
# 136 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_FILEISLAND_ENTRACE_IZZY
# 137 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return

FileIsland_Entrance_EventScript_StarterSpeak_3:
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_4
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_4:
# 111 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_5
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_5:
# 112 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_6
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_8:
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_7
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_9:
# 116 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_8
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_10:
# 117 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_9
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_13:
# 122 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyTree1
	goto FileIsland_Entrance_EventScript_StarterSpeak_11

FileIsland_Entrance_EventScript_StarterSpeak_14:
# 123 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyTree2
	goto FileIsland_Entrance_EventScript_StarterSpeak_11


FileIsland_Entrance_EventScript_StopJumpDown1::
# 141 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 142 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 2
# 143 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 144 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown1_3
# 145 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown1_4
FileIsland_Entrance_EventScript_StopJumpDown1_1:
# 147 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 148 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 149 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown1_6
# 150 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown1_7
	return

FileIsland_Entrance_EventScript_StopJumpDown1_3:
# 144 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge1
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_4:
# 145 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge2
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_6:
# 149 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement2
	return

FileIsland_Entrance_EventScript_StopJumpDown1_7:
# 150 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement1
	return


FileIsland_Entrance_EventScript_StopJumpDown2::
# 155 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 156 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 2
# 157 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 158 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_3
# 159 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_4
FileIsland_Entrance_EventScript_StopJumpDown2_1:
# 161 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 162 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 163 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_6
# 164 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_7
	return

FileIsland_Entrance_EventScript_StopJumpDown2_3:
# 158 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge3
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_4:
# 159 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge4
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_6:
# 163 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement4
	return

FileIsland_Entrance_EventScript_StopJumpDown2_7:
# 164 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement3
	return


FileIsland_Entrance_EventScript_StarterLedgeMovement1::
# 169 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 170 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement1_3
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement1_4
# 172 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement1_5
FileIsland_Entrance_EventScript_StarterLedgeMovement1_1:
# 174 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 175 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement1_3:
# 170 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_4:
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_5:
# 172 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1


FileIsland_Entrance_EventScript_StarterLedgeMovement2::
# 179 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 180 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement2_3
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement2_4
# 182 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement2_5
FileIsland_Entrance_EventScript_StarterLedgeMovement2_1:
# 184 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 185 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement2_3:
# 180 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_4:
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_5:
# 182 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1


FileIsland_Entrance_EventScript_StarterLedgeMovement3::
# 189 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 190 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement3_3
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement3_4
# 192 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement3_5
FileIsland_Entrance_EventScript_StarterLedgeMovement3_1:
# 194 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 195 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement3_3:
# 190 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_4:
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_5:
# 192 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1


FileIsland_Entrance_EventScript_StarterLedgeMovement4::
# 199 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 200 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement4_3
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement4_4
# 202 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement4_5
FileIsland_Entrance_EventScript_StarterLedgeMovement4_1:
# 204 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 205 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement4_3:
# 200 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_4:
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_5:
# 202 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1


FileIsland_Entrance_EventScript_StarterLedgeTalk::
# 209 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeTalk_3
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeTalk_4
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeTalk_5
FileIsland_Entrance_EventScript_StarterLedgeTalk_1:
# 214 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3
# 215 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4
# 216 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return

FileIsland_Entrance_EventScript_StarterLedgeTalk_3:
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_0
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_4:
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_5:
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1


FileIsland_Entrance_EventScript_KuwagamonLedge::
# 220 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 221 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 8
# 222 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Kuwagamon_Player_React
# 223 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 224 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_M_WING_ATTACK
# 225 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 226 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_0
# 227 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 8, FileIsland_Entrance_Movement_Kuwagamon_Fly
# 228 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 229 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 230 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 231 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_1
# 232 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_2
# 233 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_3
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_4
# 235 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 30
# 236 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_5
# 237 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_6
# 238 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 3
# 239 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 8
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 7
# 241 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 6
# 242 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 5
# 243 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 4
# 244 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 3
# 245 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 2
# 246 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 1
# 247 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockUp::
# 251 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 252 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 253 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Down
# 254 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 255 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockDown::
# 259 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 260 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockDown_Text_0
# 261 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Up
# 262 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 263 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockLeft::
# 267 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 268 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 269 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Right
# 270 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 271 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockRight::
# 275 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 276 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Left
# 278 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 279 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd1::
# 283 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 284 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 9
# 285 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 9, FileIsland_Entrance_Movement_Izzy_Party
# 286 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 288 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 9, FileIsland_Entrance_Movement_Izzy_Tree1
# 289 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 290 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 9
# 291 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 292 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 293 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 294 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd2::
# 298 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 299 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 10
# 300 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 10, FileIsland_Entrance_Movement_Izzy_Party
# 301 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 302 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 303 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 10, FileIsland_Entrance_Movement_Izzy_Tree2
# 304 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 305 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 10
# 306 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 307 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 308 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 309 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd3::
# 313 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 314 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 11
# 315 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 11, FileIsland_Entrance_Movement_Izzy_Party
# 316 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 317 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 318 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 11, FileIsland_Entrance_Movement_Izzy_Tree3
# 319 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 320 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 11
# 321 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 322 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 323 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 324 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd4::
# 328 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 329 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 12
# 330 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 12, FileIsland_Entrance_Movement_Izzy_Party
# 331 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 332 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 333 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 12, FileIsland_Entrance_Movement_Izzy_Tree4
# 334 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 335 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 12
# 336 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 337 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 338 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 339 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd5::
# 343 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 344 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 13
# 345 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 13, FileIsland_Entrance_Movement_Izzy_Party
# 346 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 347 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 348 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 13, FileIsland_Entrance_Movement_Izzy_Tree5
# 349 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 350 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 13
# 351 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 352 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 353 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 354 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd6::
# 358 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 359 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 14
# 360 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 14, FileIsland_Entrance_Movement_Izzy_Party
# 361 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 362 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 363 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 14, FileIsland_Entrance_Movement_Izzy_Tree5
# 364 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 365 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 14
# 366 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 367 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 368 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 369 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd7::
# 373 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 374 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 15
# 375 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 15, FileIsland_Entrance_Movement_Izzy_Party
# 376 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 377 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 378 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 15, FileIsland_Entrance_Movement_Izzy_Tree5
# 379 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 380 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 15
# 381 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 382 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 383 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 384 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_Tree_Entrance::
# 388 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 389 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tree_Entrance_Text_0
# 390 "data/maps/FileIsland_Entrance/scripts.pory"
	warp MAP_INSIDE_TREE, 5, 8
# 391 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_EventScript_RivalDecide::
# 395 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 396 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_FILEISLAND_ENTRANCE_STATE
# 397 "data/maps/FileIsland_Entrance/scripts.pory"
	case 5, FileIsland_EventScript_RivalDecide_3
# 398 "data/maps/FileIsland_Entrance/scripts.pory"
	case 6, FileIsland_EventScript_RivalDecide_4
FileIsland_EventScript_RivalDecide_1:
# 400 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_EventScript_RivalDecide_3:
# 397 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_EventScript_OtherGender
	goto FileIsland_EventScript_RivalDecide_1

FileIsland_EventScript_RivalDecide_4:
# 398 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Rival
	goto FileIsland_EventScript_RivalDecide_1


FileIsland_EventScript_OtherGender::
# 404 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 405 "data/maps/FileIsland_Entrance/scripts.pory"
	checkplayergender
# 406 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_RESULT
# 407 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_EventScript_OtherGender_3
# 408 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_EventScript_OtherGender_4
FileIsland_EventScript_OtherGender_1:
# 410 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_EventScript_OtherGender_3:
# 407 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Sora
	goto FileIsland_EventScript_OtherGender_1

FileIsland_EventScript_OtherGender_4:
# 408 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Tai
	goto FileIsland_EventScript_OtherGender_1


FileIsland_Entrance_EventScript_Sora::
# 414 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 415 "data/maps/FileIsland_Entrance/scripts.pory"
	faceplayer
# 416 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_0
# 417 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_1
# 418 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_2
# 419 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_3
# 420 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_4
# 421 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_5
# 422 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_6
# 423 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 25
# 424 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 25, FileIsland_Entrance_Movement_TokomonApproach
# 425 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 426 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 427 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 428 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 429 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_IzzyLedge2
# 430 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, FileIsland_Entrance_Movement_IzzyLedge2
# 431 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 432 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_7
# 433 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_8
# 434 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_9
# 435 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_10
# 436 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 26
# 437 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 27
# 438 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 26, FileIsland_Entrance_Movement_TKApproach
# 439 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 440 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 27, FileIsland_Entrance_Movement_MattApproach
# 441 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 442 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_11
# 443 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_12
# 444 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_13
# 445 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_14
# 446 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_15
# 447 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 448 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 28
# 449 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, FileIsland_Entrance_Movement_JoeApproach
# 450 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 451 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_17
# 452 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_18
# 453 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_19
# 454 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_20
# 455 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_21
# 456 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 457 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 458 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 459 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 460 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 461 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 462 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 463 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 464 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 465 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 466 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 467 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 468 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 469 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 470 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 471 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 40
# 472 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 473 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 474 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 5
# 475 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_22
# 476 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_23
# 477 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_24
# 478 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_25
# 479 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 480 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_26
# 481 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 482 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_27
# 483 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_28
# 484 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_29
# 485 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_30
# 486 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_31
# 487 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_32
# 488 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_33
# 489 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 6
# 490 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Tai::
# 494 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 495 "data/maps/FileIsland_Entrance/scripts.pory"
	faceplayer
# 496 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_0
# 497 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_1
# 498 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_2
# 499 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_2
# 500 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_3
# 501 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_4
# 502 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_5
# 503 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 25
# 504 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 25, FileIsland_Entrance_Movement_TokomonApproach
# 505 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 506 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 507 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 508 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 509 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_IzzyLedge2
# 510 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, FileIsland_Entrance_Movement_IzzyLedge2
# 511 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 512 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_7
# 513 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_8
# 514 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_9
# 515 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_10
# 516 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 26
# 517 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 27
# 518 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 26, FileIsland_Entrance_Movement_TKApproach
# 519 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 520 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 27, FileIsland_Entrance_Movement_MattApproach
# 521 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 522 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_11
# 523 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_12
# 524 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_13
# 525 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_14
# 526 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_15
# 527 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 528 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 28
# 529 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, FileIsland_Entrance_Movement_JoeApproach
# 530 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 531 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_17
# 532 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_18
# 533 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_19
# 534 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_20
# 535 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_21
# 536 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 537 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 538 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 539 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 540 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 541 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 542 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 543 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 544 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 545 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 546 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 547 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 548 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 549 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 550 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 551 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 40
# 552 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 553 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 554 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 5
# 555 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_22
# 556 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_23
# 557 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_24
# 558 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_25
# 559 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 560 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_26
# 561 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 562 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_27
# 563 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_6
# 564 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_29
# 565 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_30
# 566 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_31
# 567 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_32
# 568 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_33
# 569 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 6
# 570 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_HIDE_RIVAL_TREE
# 571 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_FirstIzzy::
# 575 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 576 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_FirstIzzy_Text_0
# 577 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Partner::
# 581 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 582 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_Partner_3
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_Partner_4
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_Partner_5
FileIsland_Entrance_EventScript_Partner_1:
# 586 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_Entrance_EventScript_Partner_3:
# 582 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_0
	goto FileIsland_Entrance_EventScript_Partner_1

FileIsland_Entrance_EventScript_Partner_4:
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_1
	goto FileIsland_Entrance_EventScript_Partner_1

FileIsland_Entrance_EventScript_Partner_5:
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_2
	goto FileIsland_Entrance_EventScript_Partner_1


FileIsland_Entrance_EventScript_Joe::
# 590 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 591 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Joe_Text_0
# 592 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Rival::
# 596 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 597 "data/maps/FileIsland_Entrance/scripts.pory"
	checkplayergender
# 598 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_FILEISLAND_ENTRANCE_STATE
# 599 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_Rival_3
# 600 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_Rival_4
FileIsland_Entrance_EventScript_Rival_1:
# 602 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_Entrance_EventScript_Rival_3:
# 599 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_SoraTalk
	goto FileIsland_Entrance_EventScript_Rival_1

FileIsland_Entrance_EventScript_Rival_4:
# 600 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_TaiTalk
	goto FileIsland_Entrance_EventScript_Rival_1


FileIsland_Entrance_EventScript_TaiTalk::
# 606 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 607 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_TaiTalk_Text_0
# 608 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_SoraTalk::
# 612 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 613 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_SoraTalk_Text_0
# 614 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Matt::
# 618 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 619 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Matt_Text_0
# 620 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_TK::
# 624 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 625 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_TK_Text_0
# 626 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Tokomon::
# 630 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 631 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tokomon_Text_0
# 632 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Nose_Ring::
# 636 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 637 "data/maps/FileIsland_Entrance/scripts.pory"
	giveitem ITEM_NOSE_RING, 1
# 638 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 29
# 639 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_ENTRANCE_NOSE_RING
# 640 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_Power_Fruit::
# 644 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 645 "data/maps/FileIsland_Entrance/scripts.pory"
	giveitem ITEM_POWER_FRUIT, 10
# 646 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 30
# 647 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_ENTRANCE_POWER_FRUIT
# 648 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


# 651 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter5:
# 652 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 652 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 653 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 656 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter4:
# 657 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 658 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 661 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter1:
# 662 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 663 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 666 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree1:
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 667 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 669 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
	step_end

# 672 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree2:
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 673 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
	step_end

# 677 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_LookAround:
# 678 "data/maps/FileIsland_Entrance/scripts.pory"
	face_up
# 679 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
# 680 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
# 681 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 684 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge1:
# 685 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 685 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 688 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge2:
# 689 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 692 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge3:
# 693 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 693 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 694 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 695 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 698 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge4:
# 699 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 700 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 703 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger1:
# 704 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 705 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 705 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 706 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 709 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger2:
# 710 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 710 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 710 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 713 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger3:
# 714 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 715 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 715 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 715 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 716 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 719 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger4:
# 720 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 720 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 720 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 721 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 722 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 725 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Kuwagamon_Player_React:
# 726 "data/maps/FileIsland_Entrance/scripts.pory"
	face_up
	step_end

# 729 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Kuwagamon_Fly:
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 730 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
	step_end

# 733 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Party:
# 734 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 735 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 738 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree1:
# 739 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_down
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 743 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree2:
# 744 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 744 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 744 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 744 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 744 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 747 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree3:
# 748 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 748 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 748 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 748 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 751 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree4:
# 752 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 752 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 752 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 755 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree5:
# 756 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 756 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 759 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree6:
# 760 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 763 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree7:
# 764 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_down
# 765 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 768 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Down:
# 769 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 772 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Up:
# 773 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 776 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Right:
# 777 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
	step_end

# 780 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Left:
# 781 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
	step_end

# 784 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_TokomonApproach:
# 785 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 785 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 785 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 785 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 785 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 787 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 790 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_TKApproach:
# 791 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 791 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 791 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 791 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 792 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 793 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 796 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_MattApproach:
# 797 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 797 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 797 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 797 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 797 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
	step_end

# 800 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_JoeApproach:
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 801 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_right
	step_end

FileIsland_Entrance_EventScript_Starter1_Text_0:
# 13 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "From behind a tree, you see something\n"
	.string "moving.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_0:
# 105 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: You're finally here!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_1:
# 106 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: It's talking...$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_2:
# 107 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: This is so great {PLAYER}!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_3:
# 108 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Who are you?!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_4:
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Koromon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_5:
# 111 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Tanemon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_6:
# 112 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Nyaromon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_7:
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Koromon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_8:
# 116 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Tanemon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_9:
# 117 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Nyaromon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_10:
# 119 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: What does that even mean?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_11:
# 120 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: {PLAYER}!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_12:
# 126 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Oh, Izzy.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_13:
# 127 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Thank god, I thought I was alone.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_14:
# 128 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Whaddya talkin' about? I'm right\n"
	.string "here!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_15:
# 129 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Izzy, what is that?!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_16:
# 130 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: The name's Motimon.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_17:
# 131 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Nice ta meet ya!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_18:
# 132 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: He's been with me ever since I got\n"
	.string "here.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_19:
# 133 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Where is 'here' anyway?$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_0:
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Koromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1:
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tanemon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2:
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Nyaromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3:
# 214 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: So you guys say...$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4:
# 215 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: We'll just have to check it\n"
	.string "out!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_0:
# 226 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "SCREEEEEEEEEEEEE$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_1:
# 231 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: A red... stag beetle?$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_2:
# 232 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Oh no! Thats Kuwagamon!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_3:
# 233 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: He's a real savage Digimon!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_4:
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Watch out!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_5:
# 236 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Kuwagamon is coming back!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_6:
# 237 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Run!$"

FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0:
# 252 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "This doesn't look like a good way to\n"
	.string "escape Kuwagamon!$"

FileIsland_Entrance_EventScript_KuwagamonRunBlockDown_Text_0:
# 260 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy and Motimon ran into the tree, I\n"
	.string "should check it out.$"

FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0:
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: In here!$"

FileIsland_Entrance_EventScript_Tree_Entrance_Text_0:
# 389 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "You try touching the tree.$"

FileIsland_Entrance_EventScript_Sora_Text_0:
# 416 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER} and Izzy: Sora!$"

FileIsland_Entrance_EventScript_Sora_Text_1:
# 417 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: That was a close one, huh?$"

FileIsland_Entrance_EventScript_Sora_Text_2:
# 418 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: What? That was no sweat!$"

FileIsland_Entrance_EventScript_Sora_Text_3:
# 419 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Kuwagamon's sounds are far away\n"
	.string "now, Sora!$"

FileIsland_Entrance_EventScript_Sora_Text_4:
# 420 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: Great! Thanks Yokomon$"

FileIsland_Entrance_EventScript_Sora_Text_5:
# 421 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: This looks like a plant, but is it...$"

FileIsland_Entrance_EventScript_Sora_Text_6:
# 422 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "...like one of them?$"

FileIsland_Entrance_EventScript_Sora_Text_7:
# 432 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: There's another one!$"

FileIsland_Entrance_EventScript_Sora_Text_8:
# 433 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Over here, T.K!$"

FileIsland_Entrance_EventScript_Sora_Text_9:
# 434 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "T.K: Tokomon!$"

FileIsland_Entrance_EventScript_Sora_Text_10:
# 435 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: T.K!$"

FileIsland_Entrance_EventScript_Sora_Text_11:
# 442 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Matt! You, too?$"

FileIsland_Entrance_EventScript_Sora_Text_12:
# 443 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: {PLAYER}! You're all here, too!$"

FileIsland_Entrance_EventScript_Sora_Text_13:
# 444 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: No, I mean that thing you're\n"
	.string "holding...$"

FileIsland_Entrance_EventScript_Sora_Text_14:
# 445 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: Huh? Oh, this is...$"

FileIsland_Entrance_EventScript_Sora_Text_15:
# 446 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: I'm Tsunomon.$"

FileIsland_Entrance_EventScript_Sora_Text_16:
# 447 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: AHHHHHHHHHHHHHHHHHHHH$"

FileIsland_Entrance_EventScript_Sora_Text_17:
# 451 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Guys!$"

FileIsland_Entrance_EventScript_Sora_Text_18:
# 452 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Help me!$"

FileIsland_Entrance_EventScript_Sora_Text_19:
# 453 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: S-Some weird thing is chasing me!$"

FileIsland_Entrance_EventScript_Sora_Text_20:
# 454 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: I'm not 'some weird thing'!$"

FileIsland_Entrance_EventScript_Sora_Text_21:
# 455 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Call me Bukamon.$"

FileIsland_Entrance_EventScript_Sora_Text_22:
# 475 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Wha...$"

FileIsland_Entrance_EventScript_Sora_Text_23:
# 476 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: What the heck are these things?!$"

FileIsland_Entrance_EventScript_Sora_Text_24:
# 477 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Digimon: We're Digital Monsters!$"

FileIsland_Entrance_EventScript_Sora_Text_25:
# 478 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Digital Monsters?$"

FileIsland_Entrance_EventScript_Sora_Text_26:
# 480 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Everyone quickly introduced\n"
	.string "themselves.$"

FileIsland_Entrance_EventScript_Sora_Text_27:
# 482 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Right. I think that's\n"
	.string "everyone.$"

FileIsland_Entrance_EventScript_Sora_Text_28:
# 483 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: Wait, wasn't there one more?$"

FileIsland_Entrance_EventScript_Sora_Text_29:
# 484 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Mimi! Mimi Tachikawa isn't here!$"

FileIsland_Entrance_EventScript_Sora_Text_30:
# 485 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: That's right! Mimi, the fourth\n"
	.string "grader!$"

FileIsland_Entrance_EventScript_Sora_Text_31:
# 486 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: I need to give her-$"

FileIsland_Entrance_EventScript_Sora_Text_32:
# 487 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Mimi: AHHHHHHHHHHHHHHHHHHHHHHHHHHHHH$"

FileIsland_Entrance_EventScript_Sora_Text_33:
# 488 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Quick, that sounded like it\n"
	.string "came from over here!$"

FileIsland_Entrance_EventScript_Tai_Text_0:
# 496 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER} and Izzy: Tai!$"

FileIsland_Entrance_EventScript_Tai_Text_1:
# 497 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: That was a close one, huh?$"

FileIsland_Entrance_EventScript_Tai_Text_2:
# 499 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Huh?$"

FileIsland_Entrance_EventScript_Tai_Text_3:
# 500 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Kuwagamon's sounds are far away\n"
	.string "now, Tai!$"

FileIsland_Entrance_EventScript_Tai_Text_4:
# 501 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: Great! Thanks Koromon$"

FileIsland_Entrance_EventScript_Tai_Text_5:
# 502 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: This looks like one of them...$"

FileIsland_Entrance_EventScript_Tai_Text_6:
# 563 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: Wait, wasn't there one more?$"

FileIsland_Entrance_EventScript_FirstIzzy_Text_0:
# 576 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: I wonder where we are.$"

FileIsland_Entrance_EventScript_Partner_Text_0:
# 582 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Koromon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Partner_Text_1:
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tanemon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Partner_Text_2:
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Nyaromon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Joe_Text_0:
# 591 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: What are 'Digital Monsters' and why\n"
	.string "is that one so stuck to me?$"

FileIsland_Entrance_EventScript_TaiTalk_Text_0:
# 607 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: I hope Mimi is okay.$"

FileIsland_Entrance_EventScript_SoraTalk_Text_0:
# 613 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: I hope Mimi is okay.$"

FileIsland_Entrance_EventScript_Matt_Text_0:
# 619 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: I hope these 'Digital Monsters'\n"
	.string "are safe for T.K.$"

FileIsland_Entrance_EventScript_TK_Text_0:
# 625 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "T.K: I can't wait to play with Tokomon!$"

FileIsland_Entrance_EventScript_Tokomon_Text_0:
# 631 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tokomon: I hope T.K will play with me\n"
	.string "after this!$"
