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
	addobject 5
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1

FileIsland_Entrance_EventScript_StarterTalkRight_5:
# 89 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 4
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
	case 0, FileIsland_Entrance_EventScript_StopJumpDown1_7
# 150 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown1_8
FileIsland_Entrance_EventScript_StopJumpDown1_5:
# 152 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StopJumpDown1_3:
# 144 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge1
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_4:
# 145 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge2
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_7:
# 149 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement2
	goto FileIsland_Entrance_EventScript_StopJumpDown1_5

FileIsland_Entrance_EventScript_StopJumpDown1_8:
# 150 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement1
	goto FileIsland_Entrance_EventScript_StopJumpDown1_5


FileIsland_Entrance_EventScript_StopJumpDown2::
# 156 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 157 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 2
# 158 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 159 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_3
# 160 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_4
FileIsland_Entrance_EventScript_StopJumpDown2_1:
# 162 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 163 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 164 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_6
# 165 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_7
	return

FileIsland_Entrance_EventScript_StopJumpDown2_3:
# 159 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge3
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_4:
# 160 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge4
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_6:
# 164 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement4
	return

FileIsland_Entrance_EventScript_StopJumpDown2_7:
# 165 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement3
	return


FileIsland_Entrance_EventScript_StarterLedgeMovement1::
# 170 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement1_3
# 172 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement1_4
# 173 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement1_5
FileIsland_Entrance_EventScript_StarterLedgeMovement1_1:
# 175 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 176 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement1_3:
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_4:
# 172 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_5:
# 173 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_Movement_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1


FileIsland_Entrance_EventScript_StarterLedgeMovement2::
# 180 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement2_3
# 182 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement2_4
# 183 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement2_5
FileIsland_Entrance_EventScript_StarterLedgeMovement2_1:
# 185 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 186 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement2_3:
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_4:
# 182 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_5:
# 183 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_Movement_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1


FileIsland_Entrance_EventScript_StarterLedgeMovement3::
# 190 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement3_3
# 192 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement3_4
# 193 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement3_5
FileIsland_Entrance_EventScript_StarterLedgeMovement3_1:
# 195 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 196 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement3_3:
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_4:
# 192 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_5:
# 193 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_Movement_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1


FileIsland_Entrance_EventScript_StarterLedgeMovement4::
# 200 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement4_3
# 202 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement4_4
# 203 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement4_5
FileIsland_Entrance_EventScript_StarterLedgeMovement4_1:
# 205 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 206 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement4_3:
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_4:
# 202 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_5:
# 203 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_Movement_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1


FileIsland_Entrance_EventScript_StarterLedgeTalk::
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeTalk_3
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeTalk_4
# 213 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeTalk_5
FileIsland_Entrance_EventScript_StarterLedgeTalk_1:
# 215 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3
# 216 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4
# 217 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return

FileIsland_Entrance_EventScript_StarterLedgeTalk_3:
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_0
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_4:
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_5:
# 213 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1


FileIsland_Entrance_EventScript_KuwagamonLedge::
# 221 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 222 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 8
# 223 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Kuwagamon_Player_React
# 224 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 225 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_M_WING_ATTACK
# 226 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 227 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_0
# 228 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 8, FileIsland_Entrance_Movement_Kuwagamon_Fly
# 229 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 230 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 231 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 232 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_1
# 233 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_2
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_3
# 235 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_4
# 236 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 30
# 237 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_5
# 238 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonLedge_Text_6
# 239 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 3
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 8
# 241 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 7
# 242 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 6
# 243 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 5
# 244 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 4
# 245 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 3
# 246 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 2
# 247 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 1
# 248 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockUp::
# 252 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 253 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 254 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Down
# 255 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 256 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockDown::
# 260 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 261 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockDown_Text_0
# 262 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Up
# 263 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 264 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockLeft::
# 268 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 269 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 270 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Right
# 271 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 272 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunBlockRight::
# 276 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0
# 278 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Walk_Left
# 279 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 280 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd1::
# 284 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 285 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 9
# 286 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 9, FileIsland_Entrance_Movement_Izzy_Party
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 288 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 289 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 9, FileIsland_Entrance_Movement_Izzy_Tree1
# 290 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 291 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 9
# 292 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 293 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 294 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 295 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd2::
# 299 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 300 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 10
# 301 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 10, FileIsland_Entrance_Movement_Izzy_Party
# 302 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 303 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 304 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 10, FileIsland_Entrance_Movement_Izzy_Tree2
# 305 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 306 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 10
# 307 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 308 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 309 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 310 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd3::
# 314 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 315 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 11
# 316 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 11, FileIsland_Entrance_Movement_Izzy_Party
# 317 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 318 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 319 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 11, FileIsland_Entrance_Movement_Izzy_Tree3
# 320 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 321 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 11
# 322 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 323 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 324 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 325 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd4::
# 329 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 330 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 12
# 331 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 12, FileIsland_Entrance_Movement_Izzy_Party
# 332 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 333 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 334 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 12, FileIsland_Entrance_Movement_Izzy_Tree4
# 335 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 336 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 12
# 337 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 338 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 339 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 340 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd5::
# 344 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 345 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 13
# 346 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 13, FileIsland_Entrance_Movement_Izzy_Party
# 347 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 348 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 349 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 13, FileIsland_Entrance_Movement_Izzy_Tree5
# 350 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 351 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 13
# 352 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 353 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 354 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 355 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd6::
# 359 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 360 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 14
# 361 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 14, FileIsland_Entrance_Movement_Izzy_Party
# 362 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 363 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 364 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 14, FileIsland_Entrance_Movement_Izzy_Tree5
# 365 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 366 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 14
# 367 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 368 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 369 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 370 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_KuwagamonRunEnd7::
# 374 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 375 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 15
# 376 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 15, FileIsland_Entrance_Movement_Izzy_Party
# 377 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 378 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0
# 379 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 15, FileIsland_Entrance_Movement_Izzy_Tree5
# 380 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 381 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 15
# 382 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_DOOR
# 383 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 384 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 4
# 385 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_Tree_Entrance::
# 389 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 390 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tree_Entrance_Text_0
# 391 "data/maps/FileIsland_Entrance/scripts.pory"
	warp MAP_INSIDE_TREE, 5, 8
# 392 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_EventScript_RivalDecide::
# 396 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 397 "data/maps/FileIsland_Entrance/scripts.pory"
	checkplayergender
# 398 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_FILEISLAND_ENTRANCE_STATE
# 399 "data/maps/FileIsland_Entrance/scripts.pory"
	case 5, FileIsland_EventScript_RivalDecide_3
# 400 "data/maps/FileIsland_Entrance/scripts.pory"
	case 6, FileIsland_EventScript_RivalDecide_4
FileIsland_EventScript_RivalDecide_1:
# 402 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_EventScript_RivalDecide_3:
# 399 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_EventScript_OtherGender
	goto FileIsland_EventScript_RivalDecide_1

FileIsland_EventScript_RivalDecide_4:
# 400 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Rival
	goto FileIsland_EventScript_RivalDecide_1


FileIsland_EventScript_OtherGender::
# 406 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 407 "data/maps/FileIsland_Entrance/scripts.pory"
	checkplayergender
# 408 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_RESULT
# 409 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_EventScript_OtherGender_3
# 410 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_EventScript_OtherGender_4
FileIsland_EventScript_OtherGender_1:
# 412 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_EventScript_OtherGender_3:
# 409 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Sora
	goto FileIsland_EventScript_OtherGender_1

FileIsland_EventScript_OtherGender_4:
# 410 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_Tai
	goto FileIsland_EventScript_OtherGender_1


FileIsland_Entrance_EventScript_Sora::
# 416 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 417 "data/maps/FileIsland_Entrance/scripts.pory"
	faceplayer
# 418 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_0
# 419 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_1
# 420 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_2
# 421 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_3
# 422 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_4
# 423 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_5
# 424 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_6
# 425 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 25
# 426 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 25, FileIsland_Entrance_Movement_TokomonApproach
# 427 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 428 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 429 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 430 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 431 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_IzzyLedge2
# 432 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, FileIsland_Entrance_Movement_IzzyLedge2
# 433 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 434 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_7
# 435 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_8
# 436 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_9
# 437 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_10
# 438 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 26
# 439 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 27
# 440 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 26, FileIsland_Entrance_Movement_TKApproach
# 441 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 442 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 27, FileIsland_Entrance_Movement_MattApproach
# 443 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 444 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_11
# 445 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_12
# 446 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_13
# 447 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_14
# 448 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_15
# 449 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 450 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 28
# 451 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, FileIsland_Entrance_Movement_JoeApproach
# 452 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 453 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_17
# 454 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_18
# 455 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_19
# 456 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_20
# 457 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_21
# 458 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 459 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 460 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 461 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 462 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 463 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 464 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 465 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 466 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 467 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 468 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 469 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 470 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 471 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 472 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 473 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 40
# 474 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 475 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 476 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 5
# 477 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_22
# 478 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_23
# 479 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_24
# 480 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_25
# 481 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 482 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_26
# 483 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 484 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_27
# 485 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_28
# 486 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_29
# 487 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_30
# 488 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_31
# 489 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_32
# 490 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_33
# 491 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 6
# 492 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Tai::
# 496 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 497 "data/maps/FileIsland_Entrance/scripts.pory"
	faceplayer
# 498 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_0
# 499 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_1
# 500 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_2
# 501 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_2
# 502 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_3
# 503 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_4
# 504 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_5
# 505 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 25
# 506 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 25, FileIsland_Entrance_Movement_TokomonApproach
# 507 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 508 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 509 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 510 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 511 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_IzzyLedge2
# 512 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 24, FileIsland_Entrance_Movement_IzzyLedge2
# 513 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 514 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_7
# 515 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_8
# 516 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_9
# 517 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_10
# 518 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 26
# 519 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 27
# 520 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 26, FileIsland_Entrance_Movement_TKApproach
# 521 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 522 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 27, FileIsland_Entrance_Movement_MattApproach
# 523 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 524 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_11
# 525 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_12
# 526 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_13
# 527 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_14
# 528 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_15
# 529 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 530 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 28
# 531 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, FileIsland_Entrance_Movement_JoeApproach
# 532 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 533 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_17
# 534 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_18
# 535 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_19
# 536 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_20
# 537 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_21
# 538 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_16
# 539 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 540 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 541 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 542 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 543 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 544 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 545 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 546 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 547 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 548 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 549 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 550 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 10
# 551 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 552 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 553 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 40
# 554 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 28, Common_Movement_FaceRight
# 555 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 556 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 5
# 557 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_22
# 558 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_23
# 559 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_24
# 560 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_25
# 561 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 562 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_26
# 563 "data/maps/FileIsland_Entrance/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 564 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_27
# 565 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tai_Text_6
# 566 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_29
# 567 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_30
# 568 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_31
# 569 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_32
# 570 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Sora_Text_33
# 571 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 6
# 572 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_FirstIzzy::
# 576 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 577 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_FirstIzzy_Text_0
# 578 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Partner::
# 582 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_Partner_3
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_Partner_4
# 585 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_Partner_5
FileIsland_Entrance_EventScript_Partner_1:
# 587 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_Entrance_EventScript_Partner_3:
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_0
	goto FileIsland_Entrance_EventScript_Partner_1

FileIsland_Entrance_EventScript_Partner_4:
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_1
	goto FileIsland_Entrance_EventScript_Partner_1

FileIsland_Entrance_EventScript_Partner_5:
# 585 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Partner_Text_2
	goto FileIsland_Entrance_EventScript_Partner_1


FileIsland_Entrance_EventScript_Joe::
# 591 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 592 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Joe_Text_0
# 593 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Rival::
# 597 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 598 "data/maps/FileIsland_Entrance/scripts.pory"
	checkplayergender
# 599 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_FILEISLAND_ENTRANCE_STATE
# 600 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_Rival_3
# 601 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_Rival_4
FileIsland_Entrance_EventScript_Rival_1:
# 603 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_Entrance_EventScript_Rival_3:
# 600 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_SoraTalk
	goto FileIsland_Entrance_EventScript_Rival_1

FileIsland_Entrance_EventScript_Rival_4:
# 601 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_TaiTalk
	goto FileIsland_Entrance_EventScript_Rival_1


FileIsland_Entrance_EventScript_TaiTalk::
# 607 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 608 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_TaiTalk_Text_0
# 609 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_SoraTalk::
# 613 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 614 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_SoraTalk_Text_0
# 615 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Matt::
# 619 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 620 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Matt_Text_0
# 621 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_TK::
# 625 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 626 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_TK_Text_0
# 627 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Tokomon::
# 631 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 632 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Tokomon_Text_0
# 633 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return


FileIsland_Entrance_EventScript_Nose_Ring::
# 637 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 638 "data/maps/FileIsland_Entrance/scripts.pory"
	giveitem ITEM_NOSE_RING, 1
# 639 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 29
# 640 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_ENTRANCE_NOSE_RING
# 641 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


FileIsland_Entrance_EventScript_Power_Fruit::
# 645 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 646 "data/maps/FileIsland_Entrance/scripts.pory"
	giveitem ITEM_POWER_FRUIT, 10
# 647 "data/maps/FileIsland_Entrance/scripts.pory"
	removeobject 30
# 648 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_ENTRANCE_NOSE_RING
# 649 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return


# 652 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter5:
# 653 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 653 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 654 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 657 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter4:
# 658 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 659 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 662 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter1:
# 663 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 664 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 667 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree1:
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 668 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 669 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 669 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 670 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
	step_end

# 673 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree2:
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 674 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
	step_end

# 678 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_LookAround:
# 679 "data/maps/FileIsland_Entrance/scripts.pory"
	face_up
# 680 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
# 681 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
# 682 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 685 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge1:
# 686 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 686 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 689 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge2:
# 690 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 693 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge3:
# 694 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 694 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 695 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 696 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 699 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge4:
# 700 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 701 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 704 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger1:
# 705 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 706 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 706 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 707 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 710 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger2:
# 711 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 711 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 711 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 711 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 714 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger3:
# 715 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 716 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 716 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 716 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 717 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 720 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_StarterApproachTrigger4:
# 721 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 721 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 721 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 721 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 722 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 723 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 726 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Kuwagamon_Player_React:
# 727 "data/maps/FileIsland_Entrance/scripts.pory"
	face_up
	step_end

# 730 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Kuwagamon_Fly:
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
# 731 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_left
	step_end

# 734 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Party:
# 735 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 736 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 739 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree1:
# 740 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_down
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 741 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 744 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree2:
# 745 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 745 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 745 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 745 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 745 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 748 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree3:
# 749 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 749 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 749 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 749 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 752 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree4:
# 753 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 753 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 753 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 756 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree5:
# 757 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
# 757 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 760 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree6:
# 761 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 764 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Izzy_Tree7:
# 765 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_down
# 766 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_right
	step_end

# 769 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Down:
# 770 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 773 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Up:
# 774 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 777 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Right:
# 778 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
	step_end

# 781 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Walk_Left:
# 782 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
	step_end

# 785 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_TokomonApproach:
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 786 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 787 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 788 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 791 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_TKApproach:
# 792 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 792 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 792 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 792 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 793 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 794 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
	step_end

# 797 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_MattApproach:
# 798 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 798 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 798 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 798 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
# 798 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_fast_up
	step_end

# 801 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_JoeApproach:
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 802 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_faster_down
# 803 "data/maps/FileIsland_Entrance/scripts.pory"
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
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Koromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1:
# 212 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tanemon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2:
# 213 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Nyaromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3:
# 215 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: So you guys say...$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4:
# 216 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: We'll just have to check it\n"
	.string "out!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_0:
# 227 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "SCREEEEEEEEEEEEE$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_1:
# 232 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: A red... stag beetle?$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_2:
# 233 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Oh no! Thats Kuwagamon!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_3:
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: He's a real savage Digimon!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_4:
# 235 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Watch out!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_5:
# 237 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Kuwagamon is coming back!$"

FileIsland_Entrance_EventScript_KuwagamonLedge_Text_6:
# 238 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Run!$"

FileIsland_Entrance_EventScript_KuwagamonRunBlockUp_Text_0:
# 253 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "This doesn't look like a good way to\n"
	.string "escape Kuwagamon!$"

FileIsland_Entrance_EventScript_KuwagamonRunBlockDown_Text_0:
# 261 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy and Motimon ran into the tree, I\n"
	.string "should check it out.$"

FileIsland_Entrance_EventScript_KuwagamonRunEnd1_Text_0:
# 288 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: In here!$"

FileIsland_Entrance_EventScript_Tree_Entrance_Text_0:
# 390 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "You try touching the tree.$"

FileIsland_Entrance_EventScript_Sora_Text_0:
# 418 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER} and Izzy: Sora!$"

FileIsland_Entrance_EventScript_Sora_Text_1:
# 419 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: That was a close one, huh?$"

FileIsland_Entrance_EventScript_Sora_Text_2:
# 420 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: What? That was no sweat!$"

FileIsland_Entrance_EventScript_Sora_Text_3:
# 421 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Kuwagamon's sounds are far away\n"
	.string "now, Sora!$"

FileIsland_Entrance_EventScript_Sora_Text_4:
# 422 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: Great! Thanks Yokomon$"

FileIsland_Entrance_EventScript_Sora_Text_5:
# 423 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: This looks like a plant, but is it...$"

FileIsland_Entrance_EventScript_Sora_Text_6:
# 424 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "...like one of them?$"

FileIsland_Entrance_EventScript_Sora_Text_7:
# 434 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: There's another one!$"

FileIsland_Entrance_EventScript_Sora_Text_8:
# 435 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Over here, T.K!$"

FileIsland_Entrance_EventScript_Sora_Text_9:
# 436 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "T.K: Tokomon!$"

FileIsland_Entrance_EventScript_Sora_Text_10:
# 437 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: T.K!$"

FileIsland_Entrance_EventScript_Sora_Text_11:
# 444 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Matt! You, too?$"

FileIsland_Entrance_EventScript_Sora_Text_12:
# 445 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: {PLAYER}! You're all here, too!$"

FileIsland_Entrance_EventScript_Sora_Text_13:
# 446 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: No, I mean that thing you're\n"
	.string "holding...$"

FileIsland_Entrance_EventScript_Sora_Text_14:
# 447 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: Huh? Oh, this is...$"

FileIsland_Entrance_EventScript_Sora_Text_15:
# 448 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: I'm Tsunomon.$"

FileIsland_Entrance_EventScript_Sora_Text_16:
# 449 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: AHHHHHHHHHHHHHHHHHHHH$"

FileIsland_Entrance_EventScript_Sora_Text_17:
# 453 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Guys!$"

FileIsland_Entrance_EventScript_Sora_Text_18:
# 454 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Help me!$"

FileIsland_Entrance_EventScript_Sora_Text_19:
# 455 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: S-Some weird thing is chasing me!$"

FileIsland_Entrance_EventScript_Sora_Text_20:
# 456 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: I'm not 'some weird thing'!$"

FileIsland_Entrance_EventScript_Sora_Text_21:
# 457 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Call me Bukamon.$"

FileIsland_Entrance_EventScript_Sora_Text_22:
# 477 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: Wha...$"

FileIsland_Entrance_EventScript_Sora_Text_23:
# 478 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: What the heck are these things?!$"

FileIsland_Entrance_EventScript_Sora_Text_24:
# 479 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Digimon: We're Digital Monsters!$"

FileIsland_Entrance_EventScript_Sora_Text_25:
# 480 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Digital Monsters?$"

FileIsland_Entrance_EventScript_Sora_Text_26:
# 482 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Everyone quickly introduced\n"
	.string "themselves.$"

FileIsland_Entrance_EventScript_Sora_Text_27:
# 484 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Right. I think that's\n"
	.string "everyone.$"

FileIsland_Entrance_EventScript_Sora_Text_28:
# 485 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: Wait, wasn't there one more?$"

FileIsland_Entrance_EventScript_Sora_Text_29:
# 486 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Mimi! Mimi Tachikawa isn't here!$"

FileIsland_Entrance_EventScript_Sora_Text_30:
# 487 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: That's right! Mimi, the fourth\n"
	.string "grader!$"

FileIsland_Entrance_EventScript_Sora_Text_31:
# 488 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: I need to give her-$"

FileIsland_Entrance_EventScript_Sora_Text_32:
# 489 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Mimi: AHHHHHHHHHHHHHHHHHHHHHHHHHHHHH$"

FileIsland_Entrance_EventScript_Sora_Text_33:
# 490 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Quick, that sounded like it\n"
	.string "came from over here!$"

FileIsland_Entrance_EventScript_Tai_Text_0:
# 498 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER} and Izzy: Tai!$"

FileIsland_Entrance_EventScript_Tai_Text_1:
# 499 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: That was a close one, huh?$"

FileIsland_Entrance_EventScript_Tai_Text_2:
# 501 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Huh?$"

FileIsland_Entrance_EventScript_Tai_Text_3:
# 502 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "???: Kuwagamon's sounds are far away\n"
	.string "now, Tai!$"

FileIsland_Entrance_EventScript_Tai_Text_4:
# 503 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: Great! Thanks Koromon$"

FileIsland_Entrance_EventScript_Tai_Text_5:
# 504 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: This looks like one of them...$"

FileIsland_Entrance_EventScript_Tai_Text_6:
# 565 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: Wait, wasn't there one more?$"

FileIsland_Entrance_EventScript_FirstIzzy_Text_0:
# 577 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: I wonder where we are.$"

FileIsland_Entrance_EventScript_Partner_Text_0:
# 583 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Koromon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Partner_Text_1:
# 584 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tanemon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Partner_Text_2:
# 585 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Nyaromon: It's amazing to see you\n"
	.string "finally!$"

FileIsland_Entrance_EventScript_Joe_Text_0:
# 592 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Joe: What are 'Digital Monsters' and why\n"
	.string "is that one so stuck to me?$"

FileIsland_Entrance_EventScript_TaiTalk_Text_0:
# 608 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tai: I hope Mimi is okay.$"

FileIsland_Entrance_EventScript_SoraTalk_Text_0:
# 614 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Sora: I hope Mimi is okay.$"

FileIsland_Entrance_EventScript_Matt_Text_0:
# 620 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Matt: I hope these 'Digital Monsters'\n"
	.string "are safe for T.K.$"

FileIsland_Entrance_EventScript_TK_Text_0:
# 626 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "T.K: I can't wait to play with Tokomon!$"

FileIsland_Entrance_EventScript_Tokomon_Text_0:
# 632 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tokomon: I hope T.K will play with me\n"
	.string "after this!$"
