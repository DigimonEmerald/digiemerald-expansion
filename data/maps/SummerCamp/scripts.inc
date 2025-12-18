SummerCamp_MapScripts::
# 2 "data/maps/SummerCamp/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SummerCamp/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/SummerCamp/scripts.pory"
	switch VAR_SUMMER_CAMP
# 5 "data/maps/SummerCamp/scripts.pory"
	case 0, SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 6 "data/maps/SummerCamp/scripts.pory"
	case 1, SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SummerCamp/scripts.pory"
	setweather WEATHER_SNOW
	return

SummerCamp_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 6 "data/maps/SummerCamp/scripts.pory"
	setweather WEATHER_NONE
	return


SummerCamp_EventScript_Sign::
# 12 "data/maps/SummerCamp/scripts.pory"
	lock
# 13 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Sign_Text_0
# 14 "data/maps/SummerCamp/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 15 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Exit::
# 19 "data/maps/SummerCamp/scripts.pory"
	lock
# 20 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Exit_Text_0
# 21 "data/maps/SummerCamp/scripts.pory"
	applymovement LOCALID_PLAYER, SummerCamp_Movement_StopPlayerLeaving
# 22 "data/maps/SummerCamp/scripts.pory"
	waitmovement 0
# 23 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Mimi::
# 27 "data/maps/SummerCamp/scripts.pory"
	lock
# 28 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 29 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Mimi_Text_0
# 30 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Joe::
# 34 "data/maps/SummerCamp/scripts.pory"
	lock
# 35 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 36 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Joe_Text_0
# 37 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_TK::
# 41 "data/maps/SummerCamp/scripts.pory"
	lock
# 42 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 43 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_TK_Text_0
# 44 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Matt::
# 48 "data/maps/SummerCamp/scripts.pory"
	lock
# 49 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 50 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Matt_Text_0
# 51 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_OtherGender::
# 55 "data/maps/SummerCamp/scripts.pory"
	lock
# 56 "data/maps/SummerCamp/scripts.pory"
	checkplayergender
# 57 "data/maps/SummerCamp/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/SummerCamp/scripts.pory"
	case 0, SummerCamp_EventScript_OtherGender_3
# 59 "data/maps/SummerCamp/scripts.pory"
	case 1, SummerCamp_EventScript_OtherGender_4
SummerCamp_EventScript_OtherGender_1:
# 61 "data/maps/SummerCamp/scripts.pory"
	release
	return

SummerCamp_EventScript_OtherGender_3:
# 58 "data/maps/SummerCamp/scripts.pory"
	call SummerCamp_EventScript_Sora
	goto SummerCamp_EventScript_OtherGender_1

SummerCamp_EventScript_OtherGender_4:
# 59 "data/maps/SummerCamp/scripts.pory"
	call SummerCamp_EventScript_Tai
	goto SummerCamp_EventScript_OtherGender_1


SummerCamp_EventScript_Sora::
# 65 "data/maps/SummerCamp/scripts.pory"
	lock
# 66 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 67 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Sora_Text_0
# 68 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Tai::
# 72 "data/maps/SummerCamp/scripts.pory"
	lock
# 73 "data/maps/SummerCamp/scripts.pory"
	faceplayer
# 74 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Tai_Text_0
# 75 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Portal::
# 79 "data/maps/SummerCamp/scripts.pory"
	lock
# 80 "data/maps/SummerCamp/scripts.pory"
	setflag FLAG_FILEISLAND_ENTRANCE_STARTER
# 81 "data/maps/SummerCamp/scripts.pory"
	addobject 12
# 82 "data/maps/SummerCamp/scripts.pory"
	addobject 13
# 83 "data/maps/SummerCamp/scripts.pory"
	addobject 14
# 84 "data/maps/SummerCamp/scripts.pory"
	addobject 15
# 85 "data/maps/SummerCamp/scripts.pory"
	addobject 17
# 86 "data/maps/SummerCamp/scripts.pory"
	applymovement 12, SummerCamp_Movement_Joe_Portal
# 87 "data/maps/SummerCamp/scripts.pory"
	delay 15
# 88 "data/maps/SummerCamp/scripts.pory"
	applymovement 14, SummerCamp_Movement_TK_Portal
# 89 "data/maps/SummerCamp/scripts.pory"
	delay 15
# 90 "data/maps/SummerCamp/scripts.pory"
	applymovement 13, SummerCamp_Movement_Matt_Portal
# 91 "data/maps/SummerCamp/scripts.pory"
	delay 15
# 92 "data/maps/SummerCamp/scripts.pory"
	applymovement 17, SummerCamp_Movement_OtherGender_Portal
# 93 "data/maps/SummerCamp/scripts.pory"
	delay 15
# 94 "data/maps/SummerCamp/scripts.pory"
	applymovement 15, SummerCamp_Movement_Mimi_Portal
# 95 "data/maps/SummerCamp/scripts.pory"
	waitmovement 0
# 96 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_0
# 97 "data/maps/SummerCamp/scripts.pory"
	waitmessage
# 98 "data/maps/SummerCamp/scripts.pory"
	playse SE_DOOR
# 99 "data/maps/SummerCamp/scripts.pory"
	addobject 11
# 100 "data/maps/SummerCamp/scripts.pory"
	delay 5
# 101 "data/maps/SummerCamp/scripts.pory"
	applymovement 11, SummerCamp_Movement_Izzy_Portal
# 102 "data/maps/SummerCamp/scripts.pory"
	waitmovement 11
# 103 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_1
# 104 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_2
# 105 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_3
# 106 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_4
# 107 "data/maps/SummerCamp/scripts.pory"
	waitmessage
# 108 "data/maps/SummerCamp/scripts.pory"
	playse SE_PIN
# 109 "data/maps/SummerCamp/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 110 "data/maps/SummerCamp/scripts.pory"
	delay 15
# 111 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_5
# 112 "data/maps/SummerCamp/scripts.pory"
	fadescreen FADE_TO_WHITE
# 113 "data/maps/SummerCamp/scripts.pory"
	playse SE_BANG
# 114 "data/maps/SummerCamp/scripts.pory"
	delay 45
# 115 "data/maps/SummerCamp/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 116 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_6
# 117 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_7
# 118 "data/maps/SummerCamp/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 119 "data/maps/SummerCamp/scripts.pory"
	special SetUnlockedPokedexFlags
# 120 "data/maps/SummerCamp/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/SummerCamp/scripts.pory"
	waitfanfare
# 122 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_8
# 123 "data/maps/SummerCamp/scripts.pory"
	waitmessage
# 124 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_9
# 125 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_10
# 126 "data/maps/SummerCamp/scripts.pory"
	waitmessage
# 127 "data/maps/SummerCamp/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/SummerCamp/scripts.pory"
	playse SE_M_WATERFALL
# 129 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Portal_Text_11
# 130 "data/maps/SummerCamp/scripts.pory"
	warp MAP_FILE_ISLAND_ENTRANCE, 16, 7
# 131 "data/maps/SummerCamp/scripts.pory"
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 132 "data/maps/SummerCamp/scripts.pory"
	release
	return


# 135 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_StopPlayerLeaving:
# 136 "data/maps/SummerCamp/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_Izzy_Portal:
# 140 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 140 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 141 "data/maps/SummerCamp/scripts.pory"
	walk_faster_right
# 142 "data/maps/SummerCamp/scripts.pory"
	walk_down
# 143 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 143 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 144 "data/maps/SummerCamp/scripts.pory"
	walk_up
# 145 "data/maps/SummerCamp/scripts.pory"
	face_up
	step_end

# 148 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_Joe_Portal:
# 149 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 149 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 150 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 151 "data/maps/SummerCamp/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_Mimi_Portal:
# 155 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 155 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 156 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 157 "data/maps/SummerCamp/scripts.pory"
	walk_down
# 158 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 158 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 158 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 158 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 159 "data/maps/SummerCamp/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_Matt_Portal:
# 163 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 163 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 164 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 165 "data/maps/SummerCamp/scripts.pory"
	face_up
	step_end

# 168 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_TK_Portal:
# 169 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 169 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 170 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 171 "data/maps/SummerCamp/scripts.pory"
	walk_up
	step_end

# 174 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_OtherGender_Portal:
# 175 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 175 "data/maps/SummerCamp/scripts.pory"
	walk_faster_down
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 176 "data/maps/SummerCamp/scripts.pory"
	walk_fast_right
# 177 "data/maps/SummerCamp/scripts.pory"
	walk_down
# 178 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 178 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 178 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 178 "data/maps/SummerCamp/scripts.pory"
	walk_right
# 179 "data/maps/SummerCamp/scripts.pory"
	walk_up
# 179 "data/maps/SummerCamp/scripts.pory"
	walk_up
	step_end

SummerCamp_EventScript_Sign_Text_0:
# 13 "data/maps/SummerCamp/scripts.pory"
	.string "Remember to return to your cabin in an\n"
	.string "emergency if no adults are found!$"

SummerCamp_EventScript_Exit_Text_0:
# 20 "data/maps/SummerCamp/scripts.pory"
	.string "You shouldn't leave the group during\n"
	.string "this snow storm!$"

SummerCamp_EventScript_Mimi_Text_0:
# 29 "data/maps/SummerCamp/scripts.pory"
	.string "Mimi: The snow is so pretty!$"

SummerCamp_EventScript_Joe_Text_0:
# 36 "data/maps/SummerCamp/scripts.pory"
	.string "Joe: We really should go and find an\n"
	.string "adult.$"

SummerCamp_EventScript_TK_Text_0:
# 43 "data/maps/SummerCamp/scripts.pory"
	.string "T.K: Wow! Look at all the snow!$"

SummerCamp_EventScript_Matt_Text_0:
# 50 "data/maps/SummerCamp/scripts.pory"
	.string "Matt: Slow down T.K before you hurt\n"
	.string "yourself.$"

SummerCamp_EventScript_Sora_Text_0:
# 67 "data/maps/SummerCamp/scripts.pory"
	.string "Sora: I didn't think I'd have to bring a\n"
	.string "coat.$"

SummerCamp_EventScript_Tai_Text_0:
# 74 "data/maps/SummerCamp/scripts.pory"
	.string "Tai: It finally stopped.$"

SummerCamp_EventScript_Portal_Text_0:
# 96 "data/maps/SummerCamp/scripts.pory"
	.string "Tai: Izzy, come and see this!$"

SummerCamp_EventScript_Portal_Text_1:
# 103 "data/maps/SummerCamp/scripts.pory"
	.string "T.K: Its an aurora!$"

SummerCamp_EventScript_Portal_Text_2:
# 104 "data/maps/SummerCamp/scripts.pory"
	.string "Izzy: I don't think thats correct$"

SummerCamp_EventScript_Portal_Text_3:
# 105 "data/maps/SummerCamp/scripts.pory"
	.string "Mimi: I don't care what it is, its\n"
	.string "beautiful!$"

SummerCamp_EventScript_Portal_Text_4:
# 106 "data/maps/SummerCamp/scripts.pory"
	.string "Joe: Well whatever it is, don't touch it!\n"
	.string "We should let the adults handle it.$"

SummerCamp_EventScript_Portal_Text_5:
# 111 "data/maps/SummerCamp/scripts.pory"
	.string "Suddenly seven blinding lights land\n"
	.string "next to the children.$"

SummerCamp_EventScript_Portal_Text_6:
# 116 "data/maps/SummerCamp/scripts.pory"
	.string "Izzy: A meteorite?$"

SummerCamp_EventScript_Portal_Text_7:
# 117 "data/maps/SummerCamp/scripts.pory"
	.string "You pick up the weird glowing object$"

SummerCamp_EventScript_Portal_Text_8:
# 122 "data/maps/SummerCamp/scripts.pory"
	.string "{PLAYER} received a Digivice$"

SummerCamp_EventScript_Portal_Text_9:
# 124 "data/maps/SummerCamp/scripts.pory"
	.string "Sora: What is it?$"

SummerCamp_EventScript_Portal_Text_10:
# 125 "data/maps/SummerCamp/scripts.pory"
	.string "Izzy: It kind of looks like a pager.$"

SummerCamp_EventScript_Portal_Text_11:
# 129 "data/maps/SummerCamp/scripts.pory"
	.string "A sudden wave towers the children as\n"
	.string "they fall into an endless void.$"
