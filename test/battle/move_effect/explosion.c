#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user & the target to faint")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        HP_BAR(opponent, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx fainted!");
        MESSAGE("Lopmonx fainted!");
=======
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("Wobbuffet fainted!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it misses")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION, hit: FALSE); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        MESSAGE("Lopmonx fainted!");
    }
}

SINGLE_BATTLE_TEST("Explosion causes the user to faint even if it has no effect")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].type == TYPE_NORMAL);
        ASSUME(gSpeciesInfo[SPECIES_TOKOMON_X].types[0] == TYPE_GHOST);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_TOKOMON_X);
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(player, hp: 0);
<<<<<<< HEAD
        MESSAGE("It doesn't affect Foe Tokomon_x…");
=======
        MESSAGE("It doesn't affect the opposing Gastly…");
>>>>>>> upstream/master
        NOT HP_BAR(opponent);
        MESSAGE("Lopmonx fainted!");
    }
}

DOUBLE_BATTLE_TEST("Explosion causes everyone to faint in a double battle")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_HOPMON) { HP(1); }
        OPPONENT(SPECIES_KAKKINMON) { HP(1); }
        OPPONENT(SPECIES_KAKKINMON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        HP_BAR(opponentLeft, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Hopmon fainted!");
=======
        MESSAGE("The opposing Abra fainted!");
>>>>>>> upstream/master
        HP_BAR(playerRight, hp: 0);
        MESSAGE("Exveemon fainted!");
        HP_BAR(opponentRight, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Kakkinmon fainted!");
        MESSAGE("Lopmonx fainted!");
=======
        MESSAGE("The opposing Kadabra fainted!");
        MESSAGE("Wobbuffet fainted!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Explosion is blocked by Ability Damp")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GOLDUCK) { Ability(ABILITY_DAMP); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
            HP_BAR(player, hp: 0);
        }
        ABILITY_POPUP(opponent, ABILITY_DAMP);
<<<<<<< HEAD
        MESSAGE("Foe Golduck's Damp prevents Lopmonx from using Explosion!");
=======
        MESSAGE("The opposing Golduck's Damp prevents Wobbuffet from using Explosion!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Explosion does not trigger Destiny Bond")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_DESTINY_BOND); MOVE(opponent, MOVE_EXPLOSION);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DESTINY_BOND, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, opponent);
        HP_BAR(player);
        NOT HP_BAR(opponent);
    }
}

DOUBLE_BATTLE_TEST("Explosion boosted by Galvanize is correctly blocked by Volt Absorb")
{
    GIVEN {
<<<<<<< HEAD
        PLAYER(SPECIES_GEODUDE_ALOLAN) { Ability(ABILITY_GALVANIZE); }
        PLAYER(SPECIES_EXVEEMON) { HP(1); }
        OPPONENT(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); }
=======
        PLAYER(SPECIES_GEODUDE_ALOLA) { Ability(ABILITY_GALVANIZE); }
        PLAYER(SPECIES_WYNAUT) { HP(1); }
        OPPONENT(SPECIES_LANTURN) { Ability(ABILITY_VOLT_ABSORB); }
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); }
    } SCENE {
        MESSAGE("Geodude used Explosion!");
        HP_BAR(playerLeft, hp: 0);
        ABILITY_POPUP(opponentLeft, ABILITY_VOLT_ABSORB);
        NOT HP_BAR(opponentLeft, hp: 0);
        HP_BAR(playerRight, hp: 0);
        MESSAGE("Exveemon fainted!");
        HP_BAR(opponentRight, hp: 0);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx fainted!");
=======
        MESSAGE("The opposing Wobbuffet fainted!");
>>>>>>> upstream/master
        MESSAGE("Geodude fainted!");
    }
}
