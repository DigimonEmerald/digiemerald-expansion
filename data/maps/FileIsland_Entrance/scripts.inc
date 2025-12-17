FileIsland_Entrance_MapScripts::
	.byte 0


FileIsland_Entrance_Starter1::
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
	msgbox FileIsland_Entrance_Starter1_Text_0
# 12 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 13 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
	return


FileIsland_Entrance_Starter2::
# 17 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 18 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 19 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 20 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 21 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 22 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_Starter1_Text_0
# 23 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 24 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
	return


FileIsland_Entrance_Starter3::
# 28 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 29 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 30 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 31 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 32 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 33 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_Starter1_Text_0
# 34 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 35 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
	return


FileIsland_Entrance_Starter4::
# 39 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 40 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 41 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 42 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 43 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 44 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_Starter1_Text_0
# 45 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 46 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
	return


FileIsland_Entrance_Starter5::
# 50 "data/maps/FileIsland_Entrance/scripts.pory"
	lock
# 51 "data/maps/FileIsland_Entrance/scripts.pory"
	playse SE_PIN
# 52 "data/maps/FileIsland_Entrance/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 53 "data/maps/FileIsland_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/FileIsland_Entrance/scripts.pory"
	delay 15
# 55 "data/maps/FileIsland_Entrance/scripts.pory"
	msgbox FileIsland_Entrance_Starter1_Text_0
# 56 "data/maps/FileIsland_Entrance/scripts.pory"
	special ChooseStarter
# 57 "data/maps/FileIsland_Entrance/scripts.pory"
	waitstate
	return


FileIsland_Entrance_Starter1_Text_0:
# 11 "data/maps/FileIsland_Entrance/scripts.pory"
	.string "From behind a tree, you see something\n"
	.string "moving.$"
