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
	msgbox InsideTree_EventScript_IzzyTree_Text_0
# 25 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_1
# 26 "data/maps/InsideTree/scripts.pory"
	delay 15
# 27 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 28 "data/maps/InsideTree/scripts.pory"
	delay 30
# 29 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 30 "data/maps/InsideTree/scripts.pory"
	delay 45
# 31 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 32 "data/maps/InsideTree/scripts.pory"
	delay 90
# 33 "data/maps/InsideTree/scripts.pory"
	playse SE_M_WING_ATTACK
# 34 "data/maps/InsideTree/scripts.pory"
	delay 120
# 35 "data/maps/InsideTree/scripts.pory"
	msgbox InsideTree_EventScript_IzzyTree_Text_2
# 36 "data/maps/InsideTree/scripts.pory"
	setvar VAR_FILEISLAND_ENTRANCE_STATE, 5
# 37 "data/maps/InsideTree/scripts.pory"
	setflag FLAG_HIDE_IZZY_TREE
# 38 "data/maps/InsideTree/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_TREE
# 39 "data/maps/InsideTree/scripts.pory"
	release
	return


InsideTree_EventScript_IzzyTree_Text_0:
# 24 "data/maps/InsideTree/scripts.pory"
	.string "Izzy: This place...$"

InsideTree_EventScript_IzzyTree_Text_1:
# 25 "data/maps/InsideTree/scripts.pory"
	.string "Izzy: ... only looks like a tree!$"

InsideTree_EventScript_IzzyTree_Text_2:
# 35 "data/maps/InsideTree/scripts.pory"
	.string "???: It's safe now!$"
