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
	msgbox Route1_EventScript_MimiCheck_Text_0
# 42 "data/maps/Route1/scripts.pory"
	applymovement 1, Route1_Movement_MimiRun
# 43 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route1/scripts.pory"
	addobject 2
# 45 "data/maps/Route1/scripts.pory"
	applymovement 2, Route1_Movement_KuwagamonChase
# 46 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route1/scripts.pory"
	removeobject 2
# 48 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_1
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_2
# 50 "data/maps/Route1/scripts.pory"
	checkplayergender
# 51 "data/maps/Route1/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_MimiCheck_3
# 53 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_MimiCheck_4
Route1_EventScript_MimiCheck_1:
# 55 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 56 "data/maps/Route1/scripts.pory"
	delay 45
# 57 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 58 "data/maps/Route1/scripts.pory"
	delay 30
# 59 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_5
# 60 "data/maps/Route1/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 61 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route1/scripts.pory"
	removeobject 1
# 63 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 1
# 64 "data/maps/Route1/scripts.pory"
	releaseall
	return

Route1_EventScript_MimiCheck_3:
# 52 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_3
	goto Route1_EventScript_MimiCheck_1

Route1_EventScript_MimiCheck_4:
# 53 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MimiCheck_Text_4
	goto Route1_EventScript_MimiCheck_1


Route1_EventScript_KuwagamonSecondAttack::
# 68 "data/maps/Route1/scripts.pory"
	lock
# 69 "data/maps/Route1/scripts.pory"
	playse SE_M_WING_ATTACK
# 70 "data/maps/Route1/scripts.pory"
	delay 30
# 71 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_0
# 72 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_LineUpMimi3
# 73 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route1/scripts.pory"
	addobject 3
# 75 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_KuwagamonChase
# 76 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route1/scripts.pory"
	removeobject 3
# 78 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_1
# 79 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_2
# 80 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_3
# 81 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_KuwagamonSecondAttack_Text_4
# 82 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 2
# 83 "data/maps/Route1/scripts.pory"
	releaseall
	return


# 86 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi1:
# 87 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 87 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 88 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 88 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 89 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 92 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi2:
# 93 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 94 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 98 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi3:
# 99 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 99 "data/maps/Route1/scripts.pory"
	walk_fast_down
	step_end

# 102 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi4:
# 103 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 108 "data/maps/Route1/scripts.pory"
Route1_Movement_LineUpMimi5:
# 109 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 114 "data/maps/Route1/scripts.pory"
Route1_Movement_MimiRun:
# 115 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 115 "data/maps/Route1/scripts.pory"
	walk_fast_up
	step_end

# 118 "data/maps/Route1/scripts.pory"
Route1_Movement_KuwagamonChase:
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
# 119 "data/maps/Route1/scripts.pory"
	walk_fast_left
	step_end

Route1_EventScript_MimiCheck_Text_0:
# 41 "data/maps/Route1/scripts.pory"
	.string "Mimi: AHHHHHHHHHHHHHHHHHHHHHHHH$"

Route1_EventScript_MimiCheck_Text_1:
# 48 "data/maps/Route1/scripts.pory"
	.string "???: Mimi, are you okay?$"

Route1_EventScript_MimiCheck_Text_2:
# 49 "data/maps/Route1/scripts.pory"
	.string "Mimi: Tanemon...$"

Route1_EventScript_MimiCheck_Text_3:
# 52 "data/maps/Route1/scripts.pory"
	.string "Sora: Hang in there!$"

Route1_EventScript_MimiCheck_Text_4:
# 53 "data/maps/Route1/scripts.pory"
	.string "Tai: Hang in there!$"

Route1_EventScript_MimiCheck_Text_5:
# 59 "data/maps/Route1/scripts.pory"
	.string "{PLAYER}: Here he comes again!$"

Route1_EventScript_KuwagamonSecondAttack_Text_0:
# 71 "data/maps/Route1/scripts.pory"
	.string "Matt: Get down!$"

Route1_EventScript_KuwagamonSecondAttack_Text_1:
# 78 "data/maps/Route1/scripts.pory"
	.string "Joe: Wh-What the heck is going?!$"

Route1_EventScript_KuwagamonSecondAttack_Text_2:
# 79 "data/maps/Route1/scripts.pory"
	.string "Joe: What kind of place is this?!$"

Route1_EventScript_KuwagamonSecondAttack_Text_3:
# 80 "data/maps/Route1/scripts.pory"
	.string "Yokomon: He's circling back!$"

Route1_EventScript_KuwagamonSecondAttack_Text_4:
# 81 "data/maps/Route1/scripts.pory"
	.string "Izzy: We have to keep running!$"
