#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Frisk does not trigger when pokemon hold no items")
{
    GIVEN {
        PLAYER(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
        PLAYER(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_GAZIMON) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_GAZIMON) { Ability(ABILITY_FRISK); };
    } WHEN {
        TURN { ; }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_FRISK);
            ABILITY_POPUP(playerRight, ABILITY_FRISK);
            ABILITY_POPUP(opponentLeft, ABILITY_FRISK);
            ABILITY_POPUP(opponentRight, ABILITY_FRISK);
        }
    }
}

SINGLE_BATTLE_TEST("Frisk triggers in a Single Battle")
{
    GIVEN {
        PLAYER(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); Item(ITEM_POTION); };
        OPPONENT(SPECIES_GAZIMON) { Ability(ABILITY_FRISK); Item(ITEM_POTION); };
    } WHEN {
        TURN { ; }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FRISK);
<<<<<<< HEAD
        MESSAGE("Gazimon_x frisked Foe Gazimon and found its Potion!");
        ABILITY_POPUP(opponent, ABILITY_FRISK);
        MESSAGE("Foe Gazimon frisked Gazimon_x and found its Potion!");
=======
        MESSAGE("Gazimon_x frisked the opposing Gazimon and found its Potion!");
        ABILITY_POPUP(opponent, ABILITY_FRISK);
        MESSAGE("The opposing Gazimon frisked Gazimon_x and found its Potion!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Frisk triggers for player in a Double Battle after switching-in after fainting")
{
    struct BattlePokemon *target = NULL;
    PARAMETRIZE { target = playerLeft; }
    PARAMETRIZE { target = playerRight; }

    GIVEN {
<<<<<<< HEAD
        ASSUME(gMovesInfo[MOVE_POUND].power != 0);
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_POTION); }
        OPPONENT(SPECIES_EXVEEMON);
=======
        ASSUME(!IS_MOVE_STATUS(MOVE_POUND));
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_POTION); }
        OPPONENT(SPECIES_EXVEEMON);
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_POUND, target: target); SEND_OUT(target, 2); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Exveemon used Pound!");
        MESSAGE("Lopmonx fainted!");
        ABILITY_POPUP(targetLeft ? playerLeft : playerRight, ABILITY_FRISK);
        MESSAGE("Gazimon_x frisked Foe Exveemon and found its Potion!");
=======
        MESSAGE("The opposing Exveemon used Pound!");
        MESSAGE("Lopmonx fainted!");
        ABILITY_POPUP(target, ABILITY_FRISK);
        MESSAGE("Gazimon_x frisked the opposing Exveemon and found its Potion!");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Frisk triggers for opponent in a Double Battle after switching-in after fainting")
{
    struct BattlePokemon *target = NULL;
    PARAMETRIZE { target = opponentLeft; }
    PARAMETRIZE { target = opponentRight; }

    GIVEN {
<<<<<<< HEAD
        ASSUME(gMovesInfo[MOVE_POUND].power != 0);
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_POTION); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
=======
        ASSUME(!IS_MOVE_STATUS(MOVE_POUND));
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_POTION); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_GAZIMON_X) { Ability(ABILITY_FRISK); };
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_POUND, target: target); SEND_OUT(target, 2); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Exveemon used Pound!");
        MESSAGE("Foe Lopmonx fainted!");
        ABILITY_POPUP(targetLeft ? opponentLeft : opponentRight, ABILITY_FRISK);
        MESSAGE("Foe Gazimon_x frisked Exveemon and found its Potion!");
=======
        MESSAGE("Exveemon used Pound!");
        MESSAGE("The opposing Lopmonx fainted!");
        ABILITY_POPUP(target, ABILITY_FRISK);
        MESSAGE("The opposing Gazimon_x frisked Exveemon and found its Potion!");
>>>>>>> upstream/master
    }
}
