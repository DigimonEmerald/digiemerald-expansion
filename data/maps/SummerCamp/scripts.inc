SummerCamp_MapScripts::
	.byte 0


SummerCamp_EventScript_Sign::
# 5 "data/maps/SummerCamp/scripts.pory"
	lock
# 6 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Sign_Text_0
# 7 "data/maps/SummerCamp/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 8 "data/maps/SummerCamp/scripts.pory"
	release
	return


SummerCamp_EventScript_Exit::
# 12 "data/maps/SummerCamp/scripts.pory"
	lock
# 13 "data/maps/SummerCamp/scripts.pory"
	msgbox SummerCamp_EventScript_Exit_Text_0
# 14 "data/maps/SummerCamp/scripts.pory"
	applymovement LOCALID_PLAYER, SummerCamp_Movement_StopPlayerLeaving
# 15 "data/maps/SummerCamp/scripts.pory"
	waitmovement 0
# 16 "data/maps/SummerCamp/scripts.pory"
	release
	return


# 19 "data/maps/SummerCamp/scripts.pory"
SummerCamp_Movement_StopPlayerLeaving:
# 20 "data/maps/SummerCamp/scripts.pory"
	walk_left
	step_end

SummerCamp_EventScript_Sign_Text_0:
# 6 "data/maps/SummerCamp/scripts.pory"
	.string "Remember to return to your cabin in an\n"
	.string "emergency if no adults are found!$"

SummerCamp_EventScript_Exit_Text_0:
# 13 "data/maps/SummerCamp/scripts.pory"
	.string "You shouldn't leave the group during\n"
	.string "this snow storm!$"
