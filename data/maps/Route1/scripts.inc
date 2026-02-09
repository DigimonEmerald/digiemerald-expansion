Route1_MapScripts::
	.byte 0


Route1_EventScript_MimiStop1::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi1
# 8 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 9 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_MimiCheck
	return


Route1_EventScript_MimiStop2::
# 13 "data/maps/Route1/scripts.pory"
	lock
# 14 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi2
# 15 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_MimiCheck
	return


Route1_EventScript_MimiStop3::
# 20 "data/maps/Route1/scripts.pory"
	lock
# 21 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi3
# 22 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_MimiCheck
	return


Route1_EventScript_MimiStop4::
# 27 "data/maps/Route1/scripts.pory"
	lock
# 28 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi4
# 29 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_MimiCheck
	return


Route1_EventScript_MimiStop5::
# 34 "data/maps/Route1/scripts.pory"
	lock
# 35 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi5
# 36 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_MimiCheck
	return


Route1_EventScript_MimiCheck::
# 41 "data/maps/Route1/scripts.pory"
	setflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 42 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_0
# 43 "data/maps/Route1/scripts.pory"
	applymovement 1, Route1_Movement_MimiRun
# 44 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route1/scripts.pory"
	addobject 2
# 46 "data/maps/Route1/scripts.pory"
	applymovement 2, Route1_Movement_KuwagamonChase
# 47 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route1/scripts.pory"
	removeobject 2
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_1
# 50 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_2
# 51 "data/maps/Route1/scripts.pory"
	checkplayergender
# 52 "data/maps/Route1/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_MimiCheck_3
# 54 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_MimiCheck_4
Route1_EventScript_MimiCheck_1:
# 56 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 57 "data/maps/Route1/scripts.pory"
	delay 45
# 58 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 59 "data/maps/Route1/scripts.pory"
	delay 30
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_5
# 61 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 62 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route1/scripts.pory"
	removeobject 1
# 64 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 1
# 65 "data/maps/Route1/scripts.pory"
	clearflag FLAG_FORCE_LOAD_OFFSCREEN_OBJEV
# 66 "data/maps/Route1/scripts.pory"
	releaseall
	return

Route1_EventScript_MimiCheck_3:
# 53 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_3
	goto Route1_EventScript_MimiCheck_1

Route1_EventScript_MimiCheck_4:
# 54 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_4
	goto Route1_EventScript_MimiCheck_1


Route1_EventScript_KuwagamonSecondAttack::
# 70 "data/maps/Route1/scripts.pory"
	lock
# 71 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 72 "data/maps/Route1/scripts.pory"
	delay 30
# 73 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_0
# 74 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi3
# 75 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route1/scripts.pory"
	addobject 3
# 77 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_KuwagamonChase
# 78 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route1/scripts.pory"
	removeobject 3
# 80 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_1
# 81 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_2
# 82 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_3
# 83 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_4
# 84 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 2
# 85 "data/maps/Route1/scripts.pory"
	releaseall
	return


# 88 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi1:
# 89 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 89 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 90 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 91 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 94 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi2:
# 95 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 95 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 96 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 97 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 100 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi3:
# 101 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route1/scripts.pory"
	walk_fast_down
	step_end

# 104 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi4:
# 105 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 105 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 106 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 110 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi5:
# 111 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 113 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 116 "data/maps/Route1/scripts.pory"
Route1_Movement_MimiRun:
# 117 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route1/scripts.pory"
	walk_fast_up
	step_end

# 120 "data/maps/Route1/scripts.pory"
Route1_Movement_KuwagamonChase:
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 121 "data/maps/Route1/scripts.pory"
	walk_fast_left
	step_end

Route1_EventScript_MimiCheck_Text_0:
# 42 "data/maps/Route1/scripts.pory"
	.string "Mimi: AHHHHHHHHHHHHHHHHHHHHHHHH$"

Route1_EventScript_MimiCheck_Text_1:
# 49 "data/maps/Route1/scripts.pory"
	.string "???: Mimi, are you okay?$"

Route1_EventScript_MimiCheck_Text_2:
# 50 "data/maps/Route1/scripts.pory"
	.string "Mimi: Tanemon...$"

Route1_EventScript_MimiCheck_Text_3:
# 53 "data/maps/Route1/scripts.pory"
	.string "Sora: Hang in there!$"

Route1_EventScript_MimiCheck_Text_4:
# 54 "data/maps/Route1/scripts.pory"
	.string "Tai: Hang in there!$"

Route1_EventScript_MimiCheck_Text_5:
# 60 "data/maps/Route1/scripts.pory"
	.string "{PLAYER}: Here he comes again!$"

Route1_EventScript_KuwagamonSecondAttack_Text_0:
# 73 "data/maps/Route1/scripts.pory"
	.string "Matt: Get down!$"

Route1_EventScript_KuwagamonSecondAttack_Text_1:
# 80 "data/maps/Route1/scripts.pory"
	.string "Joe: Wh-What the heck is going?!$"

Route1_EventScript_KuwagamonSecondAttack_Text_2:
# 81 "data/maps/Route1/scripts.pory"
	.string "Joe: What kind of place is this?!$"

Route1_EventScript_KuwagamonSecondAttack_Text_3:
# 82 "data/maps/Route1/scripts.pory"
	.string "Yokomon: He's circling back!$"

Route1_EventScript_KuwagamonSecondAttack_Text_4:
# 83 "data/maps/Route1/scripts.pory"
	.string "Izzy: We have to keep running!$"
