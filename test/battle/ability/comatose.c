#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Comatose prevents status-inducing moves")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TOXIC; }
    PARAMETRIZE { move = MOVE_POISONPOWDER; }
    PARAMETRIZE { move = MOVE_SLEEP_POWDER; }
    PARAMETRIZE { move = MOVE_THUNDER_WAVE; }

    GIVEN {
        PLAYER(SPECIES_KOMALA) { Ability(ABILITY_COMATOSE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        MESSAGE("Komala is drowsing!");

        NOT ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ABILITY_POPUP(player, ABILITY_COMATOSE);
        MESSAGE("It doesn't affect Komala…");
    }
}

SINGLE_BATTLE_TEST("Comatose may be suppressed if pokemon transformed into a pokemon with Comatose ability and was under the effects of Gastro Acid")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TOXIC; }
    PARAMETRIZE { move = MOVE_POISONPOWDER; }
    PARAMETRIZE { move = MOVE_SLEEP_POWDER; }
    PARAMETRIZE { move = MOVE_THUNDER_WAVE; }

    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_KOMALA) { Ability(ABILITY_COMATOSE); Speed(30); }
        OPPONENT(SPECIES_CRABMON) { Speed(20); }
=======
        // FIXME: Explicit moves currently required here because Crabmon
        // expects to find Celebrate in slot 1 during the second turn
        // (after transforming).
        PLAYER(SPECIES_KOMALA) { Ability(ABILITY_COMATOSE); Speed(30); Moves(MOVE_CELEBRATE, MOVE_GASTRO_ACID, move); }
        OPPONENT(SPECIES_CRABMON) { Speed(20); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_GASTRO_ACID); MOVE(opponent, MOVE_TRANSFORM); }
        TURN { MOVE(player, move); }
    } SCENE {
        MESSAGE("Komala is drowsing!");
        MESSAGE("Komala used Gastro Acid!");
<<<<<<< HEAD
        MESSAGE("Foe Crabmon used Transform!");
        MESSAGE("Foe Crabmon transformed into Komala!");
=======
        MESSAGE("The opposing Crabmon used Transform!");
        MESSAGE("The opposing Crabmon transformed into Komala!");
>>>>>>> upstream/master

        ANIMATION(ANIM_TYPE_MOVE, move, player);
        if (move == MOVE_POISONPOWDER)      { STATUS_ICON(opponent, poison: TRUE); }
        else if (move == MOVE_TOXIC)        { STATUS_ICON(opponent, badPoison: TRUE); }
        else if (move == MOVE_THUNDER_WAVE) { STATUS_ICON(opponent, paralysis: TRUE); }
        else if (move == MOVE_SLEEP_POWDER) { STATUS_ICON(opponent, sleep: TRUE); }
    }
}
