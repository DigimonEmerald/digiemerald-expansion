SummerCamp_House_MapScripts::
# 2 "data/maps/SummerCamp_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SummerCamp_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SummerCamp_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SummerCamp_House/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SummerCamp_House_EventScript_FoodReservers::
# 8 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 9 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_FoodReservers_Text_0
# 10 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_MattandTK::
# 14 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 15 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_MattandTK_Text_0
# 16 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_MattandTK_Text_1
# 17 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_Mimi::
# 21 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 22 "data/maps/SummerCamp_House/scripts.pory"
	faceplayer
# 23 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_Mimi_Text_0
# 24 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_Joe::
# 28 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 29 "data/maps/SummerCamp_House/scripts.pory"
	faceplayer
# 30 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_Joe_Text_0
# 31 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_Izzy::
# 35 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 36 "data/maps/SummerCamp_House/scripts.pory"
	faceplayer
# 37 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_Izzy_Text_0
# 38 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_OtherGender::
# 42 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 43 "data/maps/SummerCamp_House/scripts.pory"
	checkplayergender
# 44 "data/maps/SummerCamp_House/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/SummerCamp_House/scripts.pory"
	case 0, SummerCamp_House_EventScript_OtherGender_3
# 46 "data/maps/SummerCamp_House/scripts.pory"
	case 1, SummerCamp_House_EventScript_OtherGender_4
SummerCamp_House_EventScript_OtherGender_1:
# 48 "data/maps/SummerCamp_House/scripts.pory"
	release
	return

SummerCamp_House_EventScript_OtherGender_3:
# 45 "data/maps/SummerCamp_House/scripts.pory"
	call SummerCamp_House_EventScript_Sora
	goto SummerCamp_House_EventScript_OtherGender_1

SummerCamp_House_EventScript_OtherGender_4:
# 46 "data/maps/SummerCamp_House/scripts.pory"
	call SummerCamp_House_EventScript_Tai
	goto SummerCamp_House_EventScript_OtherGender_1


SummerCamp_House_EventScript_Sora::
# 52 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 53 "data/maps/SummerCamp_House/scripts.pory"
	faceplayer
# 54 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_Sora_Text_0
# 55 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_Tai::
# 59 "data/maps/SummerCamp_House/scripts.pory"
	lock
# 60 "data/maps/SummerCamp_House/scripts.pory"
	faceplayer
# 61 "data/maps/SummerCamp_House/scripts.pory"
	msgbox SummerCamp_House_EventScript_Tai_Text_0
# 62 "data/maps/SummerCamp_House/scripts.pory"
	release
	return


SummerCamp_House_EventScript_LeaveShelter::
# 66 "data/maps/SummerCamp_House/scripts.pory"
	setflag FLAG_SUMMER_CAMP_HOUSE_HIDE_KIDS_IZZY
# 67 "data/maps/SummerCamp_House/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
	return


SummerCamp_House_EventScript_EnteredShelter::
# 71 "data/maps/SummerCamp_House/scripts.pory"
	setvar VAR_SUMMER_CAMP, 1
# 72 "data/maps/SummerCamp_House/scripts.pory"
	clearflag FLAG_SUMMER_CAMP_ENABLE_KIDS
	return


SummerCamp_House_EventScript_FoodReservers_Text_0:
# 9 "data/maps/SummerCamp_House/scripts.pory"
	.string "It contains drinking water.$"

SummerCamp_House_EventScript_MattandTK_Text_0:
# 15 "data/maps/SummerCamp_House/scripts.pory"
	.string "Matt: We can play in the snow after the\n"
	.string "storm has calmed down.$"

SummerCamp_House_EventScript_MattandTK_Text_1:
# 16 "data/maps/SummerCamp_House/scripts.pory"
	.string "T.K: Thank you Big Bro.$"

SummerCamp_House_EventScript_Mimi_Text_0:
# 23 "data/maps/SummerCamp_House/scripts.pory"
	.string "Mimi: I want to go play in the snow soon!\n"
	.string "I've never played with snow in the\l"
	.string "summer$"

SummerCamp_House_EventScript_Joe_Text_0:
# 30 "data/maps/SummerCamp_House/scripts.pory"
	.string "Joe: We should go and find an adult\n"
	.string "after the storm dies down!$"

SummerCamp_House_EventScript_Izzy_Text_0:
# 37 "data/maps/SummerCamp_House/scripts.pory"
	.string "Izzy: I'm trying to get a signal on my\n"
	.string "laptop but no luck yet.$"

SummerCamp_House_EventScript_Sora_Text_0:
# 54 "data/maps/SummerCamp_House/scripts.pory"
	.string "Sora: What happened to summer\n"
	.string "weather?$"

SummerCamp_House_EventScript_Tai_Text_0:
# 61 "data/maps/SummerCamp_House/scripts.pory"
	.string "Tai: I hope the storm stops soon.$"
