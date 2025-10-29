Route120_EventScript_Donshoutmon1::
	lock
	faceplayer
	setvar VAR_0x8009, 1
	goto EventScript_Donshoutmon
	end

Route120_EventScript_Donshoutmon2::
	lock
	faceplayer
	setvar VAR_0x8009, 2
	goto EventScript_Donshoutmon
	end

Route120_EventScript_Donshoutmon3::
	lock
	faceplayer
	setvar VAR_0x8009, 3
	goto EventScript_Donshoutmon
	end

Route120_EventScript_Donshoutmon4::
	lock
	faceplayer
	setvar VAR_0x8009, 4
	goto EventScript_Donshoutmon
	end

Route120_EventScript_Donshoutmon5::
	lock
	faceplayer
	setvar VAR_0x8009, 5
	goto EventScript_Donshoutmon
	end

Route119_EventScript_Donshoutmon1::
	lock
	faceplayer
	setvar VAR_0x8009, 6
	goto EventScript_Donshoutmon
	end

Route119_EventScript_Donshoutmon2::
	lock
	faceplayer
	setvar VAR_0x8009, 7
	goto EventScript_Donshoutmon
	end

EventScript_Donshoutmon::
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, EventScript_AskUseDevonScope
	msgbox Donshoutmon_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

EventScript_AskUseDevonScope::
	msgbox Donshoutmon_Text_WantToUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_BattleDonshoutmon
	release
	end

EventScript_BattleDonshoutmon::
	msgbox Donshoutmon_Text_UseDevonScopeMonAttacked, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	applymovement VAR_LAST_TALKED, Movement_DonshoutmonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_DONSHOUTMON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DONSHOUTMON, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EventScript_RemoveDonshoutmon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EventScript_RemoveDonshoutmon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EventScript_RemoveDonshoutmon
	release
	end

EventScript_RemoveDonshoutmon::
	goto Common_EventScript_RemoveStaticPokemon
	end

Movement_DonshoutmonAppears:
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_4
	set_invisible
	delay_4
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_8
	set_invisible
	delay_8
	set_visible
	delay_16
	set_invisible
	delay_16
	set_visible
	step_end
