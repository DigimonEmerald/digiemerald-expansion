InsideTree_MapScripts::
	.byte 0


InsideTree_EventScript_PokeBall::
# 6 "data/maps/InsideTree/scripts.pory"
	lock
# 7 "data/maps/InsideTree/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 8 "data/maps/InsideTree/scripts.pory"
	removeobject 2
# 9 "data/maps/InsideTree/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_POKEBALLS
# 10 "data/maps/InsideTree/scripts.pory"
	releaseall
	return


InsideTree_EventScript_DarkDigitron::
# 14 "data/maps/InsideTree/scripts.pory"
	lock
# 15 "data/maps/InsideTree/scripts.pory"
	giveitem ITEM_DARK_DIGITRON, 1
# 16 "data/maps/InsideTree/scripts.pory"
	removeobject 3
# 17 "data/maps/InsideTree/scripts.pory"
	setflag FLAG_ITEM_FILEISLAND_DARK_DIGITRON
# 18 "data/maps/InsideTree/scripts.pory"
	releaseall
	return


InsideTree_EventScript_IzzyTree::
# 22 "data/maps/InsideTree/scripts.pory"
	lock
# 23 "data/maps/InsideTree/scripts.pory"
	faceplayer
# 24 "data/maps/InsideTree/scripts.pory"
	compare VAR_FILEISLAND_ENTRANCE_STATE, 5
	goto_if_eq InsideTree_EventScript_IzzyTree_2
InsideTree_EventScript_IzzyTree_1:
# 28 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_1
# 29 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_2
# 30 "data/maps/InsideTree/scripts.pory"
	delay 15
# 31 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 32 "data/maps/InsideTree/scripts.pory"
	delay 30
# 33 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 34 "data/maps/InsideTree/scripts.pory"
	delay 45
# 35 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 36 "data/maps/InsideTree/scripts.pory"
	delay 90
# 37 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 38 "data/maps/InsideTree/scripts.pory"
	delay 120
# 39 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_3
# 40 "data/maps/InsideTree/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 5
# 41 "data/maps/InsideTree/scripts.pory"
	setflag FLAG_HIDE_IZZY_TREE
# 42 "data/maps/InsideTree/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_TREE
# 43 "data/maps/InsideTree/scripts.pory"
	release
	return

InsideTree_EventScript_IzzyTree_2:
# 25 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_0
# 26 "data/maps/InsideTree/scripts.pory"
	releaseall
	goto InsideTree_EventScript_IzzyTree_1


InsideTree_EventScript_IzzyTree_Text_0:
# 25 "data/maps/InsideTree/scripts.pory"
	.string "We should go outside now.$"

InsideTree_EventScript_IzzyTree_Text_1:
# 28 "data/maps/InsideTree/scripts.pory"
	.string "Izzy: This place...$"

InsideTree_EventScript_IzzyTree_Text_2:
# 29 "data/maps/InsideTree/scripts.pory"
	.string "Izzy: ... only looks like a tree!$"

InsideTree_EventScript_IzzyTree_Text_3:
# 39 "data/maps/InsideTree/scripts.pory"
	.string "???: It's safe now!$"
