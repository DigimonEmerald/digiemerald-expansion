RoadSpawn_MapScripts::
	.byte 0


RoadSpawn_EventScript_StepOutTruck::
# 5 "data/maps/RoadSpawn/scripts.pory"
	lockall
# 6 "data/maps/RoadSpawn/scripts.pory"
	msgbox RoadSpawn_EventScript_StepOutTruck_Text_0
# 7 "data/maps/RoadSpawn/scripts.pory"
	releaseall
	end


RoadSpawn_EventScript_StepOnPavement::
# 12 "data/maps/RoadSpawn/scripts.pory"
	lockall
# 13 "data/maps/RoadSpawn/scripts.pory"
	setvar VAR_ROAD_SPAWN_STATE, 1
# 14 "data/maps/RoadSpawn/scripts.pory"
	msgbox RoadSpawn_EventScript_StepOnPavement_Text_0
# 15 "data/maps/RoadSpawn/scripts.pory"
	applymovement 1, RoadSpawn_Movement_TruckLeave
# 16 "data/maps/RoadSpawn/scripts.pory"
	waitmovement 0
# 17 "data/maps/RoadSpawn/scripts.pory"
	removeobject 1
# 18 "data/maps/RoadSpawn/scripts.pory"
	setflag FLAG_TRUCK_INTRO
# 19 "data/maps/RoadSpawn/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RoadSpawn_Movement_ExitRoad
# 20 "data/maps/RoadSpawn/scripts.pory"
	waitmovement 0
# 21 "data/maps/RoadSpawn/scripts.pory"
	releaseall
	end


RoadSpawn_EventScript_StepOnRoad::
# 26 "data/maps/RoadSpawn/scripts.pory"
	lockall
# 27 "data/maps/RoadSpawn/scripts.pory"
	msgbox RoadSpawn_EventScript_StepOnRoad_Text_0
# 28 "data/maps/RoadSpawn/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RoadSpawn_Movement_ExitRoad
# 29 "data/maps/RoadSpawn/scripts.pory"
	waitmovement 0
# 30 "data/maps/RoadSpawn/scripts.pory"
	releaseall
	end


# 34 "data/maps/RoadSpawn/scripts.pory"
RoadSpawn_Movement_TruckLeave:
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
# 35 "data/maps/RoadSpawn/scripts.pory"
	walk_faster_left
	step_end

# 38 "data/maps/RoadSpawn/scripts.pory"
RoadSpawn_Movement_ExitRoad:
# 39 "data/maps/RoadSpawn/scripts.pory"
	walk_down
	step_end

RoadSpawn_EventScript_StepOutTruck_Text_0:
# 6 "data/maps/RoadSpawn/scripts.pory"
	.string "Its dangerous to step out from behind\n"
	.string "a truck!$"

RoadSpawn_EventScript_StepOnPavement_Text_0:
# 14 "data/maps/RoadSpawn/scripts.pory"
	.string "Driver: Stay safe kid, avoid playing on\n"
	.string "the road!$"

RoadSpawn_EventScript_StepOnRoad_Text_0:
# 27 "data/maps/RoadSpawn/scripts.pory"
	.string "Its dangerous to play on the road!$"
