FileIsland_Entrance_MapScripts::
	.byte 0


FileIsland_Entrance_EventScript_Starter1::
# 6 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 7 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 8 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 9 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 10 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 11 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 12 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 13 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 14 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter1
# 15 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 16 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 9
# 17 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter2::
# 21 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 22 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 23 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 24 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 25 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 26 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 27 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 28 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 29 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 0
# 30 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter3::
# 34 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 35 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 36 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 37 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 38 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 39 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 40 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 41 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 42 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 43 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter4::
# 47 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 48 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 49 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 50 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 51 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 52 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 53 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 54 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 55 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter4
# 56 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 57 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 58 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_Starter5::
# 62 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 63 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 64 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 65 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 66 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 67 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_Starter1_Text_0
# 68 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 69 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
# 70 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_Starter5
# 71 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 72 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_STARTER_TILE, 1
# 73 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalk
	return


FileIsland_Entrance_EventScript_StarterTalk::
# 77 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 78 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalk_2
# 79 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalk_3
	return

FileIsland_Entrance_EventScript_StarterTalk_2:
# 78 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalkRight
	return

FileIsland_Entrance_EventScript_StarterTalk_3:
# 79 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterTalkDown
	return


FileIsland_Entrance_EventScript_StarterTalkRight::
# 84 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 85 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalkRight_3
# 86 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalkRight_4
# 87 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterTalkRight_5
FileIsland_Entrance_EventScript_StarterTalkRight_1:
# 89 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterSpeak
	return

FileIsland_Entrance_EventScript_StarterTalkRight_3:
# 85 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 6
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1

FileIsland_Entrance_EventScript_StarterTalkRight_4:
# 86 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 5
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1

FileIsland_Entrance_EventScript_StarterTalkRight_5:
# 87 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 4
	goto FileIsland_Entrance_EventScript_StarterTalkRight_1


FileIsland_Entrance_EventScript_StarterTalkDown::
# 93 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 94 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterTalkDown_3
# 95 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterTalkDown_4
# 96 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterTalkDown_5
FileIsland_Entrance_EventScript_StarterTalkDown_1:
# 98 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterSpeak
	return

FileIsland_Entrance_EventScript_StarterTalkDown_3:
# 94 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 1
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1

FileIsland_Entrance_EventScript_StarterTalkDown_4:
# 95 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 2
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1

FileIsland_Entrance_EventScript_StarterTalkDown_5:
# 96 "data/maps/FileIsland_Entrance/scripts.pory"
	addobject 3
	goto FileIsland_Entrance_EventScript_StarterTalkDown_1


FileIsland_Entrance_EventScript_StarterSpeak::
# 103 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_0
# 104 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_1
# 105 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_2
# 106 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_3
# 107 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 108 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_3
# 109 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_4
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterSpeak_5
FileIsland_Entrance_EventScript_StarterSpeak_1:
# 112 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 113 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_8
# 114 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_9
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterSpeak_10
FileIsland_Entrance_EventScript_StarterSpeak_6:
# 117 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_10
# 118 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_11
# 119 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 120 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterSpeak_13
# 121 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterSpeak_14
FileIsland_Entrance_EventScript_StarterSpeak_11:
# 123 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 124 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_12
# 125 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_13
# 126 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_14
# 127 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_15
# 128 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_16
# 129 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_17
# 130 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_18
# 131 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_19
# 132 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, FileIsland_Entrance_Movement_LookAround
# 133 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 1
# 134 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_FILEISLAND_ENTRACE_IZZY
# 135 "data/maps/FileIsland_Entrance/scripts.pory"
	releaseall
	return

FileIsland_Entrance_EventScript_StarterSpeak_3:
# 108 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_4
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_4:
# 109 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_5
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_5:
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_6
	goto FileIsland_Entrance_EventScript_StarterSpeak_1

FileIsland_Entrance_EventScript_StarterSpeak_8:
# 113 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_7
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_9:
# 114 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_8
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_10:
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterSpeak_Text_9
	goto FileIsland_Entrance_EventScript_StarterSpeak_6

FileIsland_Entrance_EventScript_StarterSpeak_13:
# 120 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyTree1
	goto FileIsland_Entrance_EventScript_StarterSpeak_11

FileIsland_Entrance_EventScript_StarterSpeak_14:
# 121 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyTree2
	goto FileIsland_Entrance_EventScript_StarterSpeak_11


FileIsland_Entrance_EventScript_StopJumpDown1::
# 139 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 140 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 2
# 141 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 142 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown1_3
# 143 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown1_4
FileIsland_Entrance_EventScript_StopJumpDown1_1:
# 145 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 146 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 147 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown1_7
# 148 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown1_8
FileIsland_Entrance_EventScript_StopJumpDown1_5:
# 150 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StopJumpDown1_3:
# 142 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge1
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_4:
# 143 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge2
	goto FileIsland_Entrance_EventScript_StopJumpDown1_1

FileIsland_Entrance_EventScript_StopJumpDown1_7:
# 147 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement2
	goto FileIsland_Entrance_EventScript_StopJumpDown1_5

FileIsland_Entrance_EventScript_StopJumpDown1_8:
# 148 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement1
	goto FileIsland_Entrance_EventScript_StopJumpDown1_5


FileIsland_Entrance_EventScript_StopJumpDown2::
# 154 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 155 "data/maps/FileIsland_Entrance/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 2
# 156 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 157 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_3
# 158 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_4
FileIsland_Entrance_EventScript_StopJumpDown2_1:
# 160 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 161 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_TILE
# 162 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StopJumpDown2_6
# 163 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StopJumpDown2_7
	return

FileIsland_Entrance_EventScript_StopJumpDown2_3:
# 157 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge3
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_4:
# 158 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 7, FileIsland_Entrance_Movement_IzzyLedge4
	goto FileIsland_Entrance_EventScript_StopJumpDown2_1

FileIsland_Entrance_EventScript_StopJumpDown2_6:
# 162 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement4
	return

FileIsland_Entrance_EventScript_StopJumpDown2_7:
# 163 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeMovement3
	return


FileIsland_Entrance_EventScript_StarterLedgeMovement1::
# 168 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 169 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement1_3
# 170 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement1_4
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement1_5
FileIsland_Entrance_EventScript_StarterLedgeMovement1_1:
# 173 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 174 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement1_3:
# 169 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_EventScript_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_4:
# 170 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_EventScript_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1

FileIsland_Entrance_EventScript_StarterLedgeMovement1_5:
# 171 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_EventScript_StarterApproachTrigger1
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement1_1


FileIsland_Entrance_EventScript_StarterLedgeMovement2::
# 178 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 179 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement2_3
# 180 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement2_4
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement2_5
FileIsland_Entrance_EventScript_StarterLedgeMovement2_1:
# 183 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 184 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement2_3:
# 179 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_EventScript_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_4:
# 180 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_EventScript_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1

FileIsland_Entrance_EventScript_StarterLedgeMovement2_5:
# 181 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_EventScript_StarterApproachTrigger2
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement2_1


FileIsland_Entrance_EventScript_StarterLedgeMovement3::
# 188 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 189 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement3_3
# 190 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement3_4
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement3_5
FileIsland_Entrance_EventScript_StarterLedgeMovement3_1:
# 193 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 194 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement3_3:
# 189 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 1, FileIsland_Entrance_EventScript_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_4:
# 190 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 2, FileIsland_Entrance_EventScript_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1

FileIsland_Entrance_EventScript_StarterLedgeMovement3_5:
# 191 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 3, FileIsland_Entrance_EventScript_StarterApproachTrigger3
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement3_1


FileIsland_Entrance_EventScript_StarterLedgeMovement4::
# 198 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 199 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeMovement4_3
# 200 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeMovement4_4
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeMovement4_5
FileIsland_Entrance_EventScript_StarterLedgeMovement4_1:
# 203 "data/maps/FileIsland_Entrance/scripts.pory"
	waitmovement 0
# 204 "data/maps/FileIsland_Entrance/scripts.pory"
	call FileIsland_Entrance_EventScript_StarterLedgeTalk
	return

FileIsland_Entrance_EventScript_StarterLedgeMovement4_3:
# 199 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 6, FileIsland_Entrance_EventScript_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_4:
# 200 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 5, FileIsland_Entrance_EventScript_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1

FileIsland_Entrance_EventScript_StarterLedgeMovement4_5:
# 201 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement 4, FileIsland_Entrance_EventScript_StarterApproachTrigger4
	goto FileIsland_Entrance_EventScript_StarterLedgeMovement4_1


FileIsland_Entrance_EventScript_StarterLedgeTalk::
# 208 "data/maps/FileIsland_Entrance/scripts.pory"
	switch VAR_STARTER_MON
# 209 "data/maps/FileIsland_Entrance/scripts.pory"
	case 0, FileIsland_Entrance_EventScript_StarterLedgeTalk_3
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	case 1, FileIsland_Entrance_EventScript_StarterLedgeTalk_4
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	case 2, FileIsland_Entrance_EventScript_StarterLedgeTalk_5
FileIsland_Entrance_EventScript_StarterLedgeTalk_1:
# 213 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3
# 214 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4
# 215 "data/maps/FileIsland_Entrance/scripts.pory"
	release
	return

FileIsland_Entrance_EventScript_StarterLedgeTalk_3:
# 209 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_0
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_4:
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1

FileIsland_Entrance_EventScript_StarterLedgeTalk_5:
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2
	goto FileIsland_Entrance_EventScript_StarterLedgeTalk_1


# 218 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter5:
# 219 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 219 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 220 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 223 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter4:
# 224 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 225 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 228 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_Starter1:
# 229 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 230 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 233 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree1:
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 234 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 235 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 235 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_up
# 236 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
	step_end

# 239 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyTree2:
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
# 240 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_right
	step_end

# 244 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_LookAround:
# 245 "data/maps/FileIsland_Entrance/scripts.pory"
	face_up
# 246 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
# 247 "data/maps/FileIsland_Entrance/scripts.pory"
	face_right
# 248 "data/maps/FileIsland_Entrance/scripts.pory"
	face_left
	step_end

# 251 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge1:
# 252 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 252 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 255 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge2:
# 256 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 259 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge3:
# 260 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 260 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 261 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 262 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 265 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_Movement_IzzyLedge4:
# 266 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 267 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 270 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_EventScript_StarterApproachTrigger1:
# 271 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 272 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 272 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 273 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 276 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_EventScript_StarterApproachTrigger2:
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 277 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
	step_end

# 280 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_EventScript_StarterApproachTrigger3:
# 281 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 282 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 282 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 282 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 283 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

# 286 "data/maps/FileIsland_Entrance/scripts.pory"
FileIsland_Entrance_EventScript_StarterApproachTrigger4:
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 287 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_down
# 288 "data/maps/FileIsland_Entrance/scripts.pory"
	walk_left
# 289 "data/maps/FileIsland_Entrance/scripts.pory"
	face_down
	step_end

FileIsland_Entrance_EventScript_Starter1_Text_0:
# 11 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "From behind a tree, you see something\n"
	.string "moving.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_0:
# 103 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}! You're finally here!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_1:
# 104 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: It's talking...$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_2:
# 105 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Weird Blob: This is so great {PLAYER}!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_3:
# 106 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Who are you?!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_4:
# 108 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Koromon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_5:
# 109 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Tanemon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_6:
# 110 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "I'm Nyaromon! I've been waiting for you!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_7:
# 113 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Koromon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_8:
# 114 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Tanemon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_9:
# 115 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Nyaromon? And you've been\n"
	.string "waiting for me?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_10:
# 117 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: What does that even mean?$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_11:
# 118 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: {PLAYER}!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_12:
# 124 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Oh, Izzy.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_13:
# 125 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: Thank god, I thought I was alone.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_14:
# 126 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Another Weird Blob: Whaddya talkin'\n"
	.string "about? I'm right here!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_15:
# 127 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Izzy, what is that?!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_16:
# 128 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Another Weird Blob: The name's Motimon.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_17:
# 129 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Motimon: Nice ta meet ya!$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_18:
# 130 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: He's been with me ever since I got\n"
	.string "here.$"

FileIsland_Entrance_EventScript_StarterSpeak_Text_19:
# 131 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: Where is 'here' anyway?$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_0:
# 209 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Koromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_1:
# 210 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Tanemon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_2:
# 211 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Nyaromon: This is File Island!$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_3:
# 213 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "Izzy: So you guys say...$"

FileIsland_Entrance_EventScript_StarterLedgeTalk_Text_4:
# 214 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "{PLAYER}: We'll just have to check it\n"
	.string "out!$"
