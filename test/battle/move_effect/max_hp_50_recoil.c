#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_STEEL_BEAM) == EFFECT_MAX_HP_50_RECOIL);
}

SINGLE_BATTLE_TEST("Steel Beam makes the user lose 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(player, damage: 200);
        NOT MESSAGE("Lopmonx fainted!"); // Wobb had more than 1/2 of its HP, so it can't faint.
    }
}

DOUBLE_BATTLE_TEST("Steel Beam makes the user lose 1/2 of its Max HP in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STEEL_BEAM, target:opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, playerLeft);
        HP_BAR(playerLeft, damage: 200);
        NOT MESSAGE("Lopmonx fainted!"); // Wobb had more than 1/2 of its HP, so it can't faint.
    }
}

SINGLE_BATTLE_TEST("Steel Beam causes the user to faint when below 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200); MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(player, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

DOUBLE_BATTLE_TEST("Steel Beam causes the user to faint when below 1/2 of its Max HP in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200); MaxHP(400); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STEEL_BEAM, target:opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, playerLeft);
        HP_BAR(playerLeft, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Steel Beam causes the user & the target to faint when below 1/2 of its Max HP")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(200) ; MaxHP(400); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(opponent, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Lopmonx fainted!");
>>>>>>> upstream/master
        HP_BAR(player, hp: 0);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Steel Beam hp loss is prevented by Magic Guard")
{
    GIVEN {
        PLAYER(SPECIES_PUYOMON) { Ability(ABILITY_MAGIC_GUARD); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(opponent);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Steel Beam makes the user lose HP even if the opposing mon protected")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Steel Beam does not cause the user to lose HP if there is no target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MEMENTO); MOVE(player, MOVE_STEEL_BEAM); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEMENTO, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
            HP_BAR(player);
        }
        MESSAGE("Lopmonx used Steel Beam!");
        MESSAGE("But it failed!");
        MESSAGE("2 sent out Lopmonx!");
    }
}

SINGLE_BATTLE_TEST("Steel Beam is not blocked by Damp")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(400); MaxHP(400); }
        OPPONENT(SPECIES_DEMMERAMON) { Ability(ABILITY_DAMP); }
    } WHEN {
        TURN { MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        HP_BAR(player, damage: 200);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_DAMP);
<<<<<<< HEAD
            MESSAGE("Foe Demmeramon's Damp prevents Lopmonx from using Steel Beam!");
=======
            MESSAGE("The opposing Demmeramon's Damp prevents Lopmonx from using Steel Beam!");
>>>>>>> upstream/master
        }
    }
}
