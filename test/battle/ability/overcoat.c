#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Overcoat blocks powder and spore moves")
{
    GIVEN {
        ASSUME(IsPowderMove(MOVE_STUN_SPORE));
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LUDOMON) { Ability(ABILITY_OVERCOAT); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUN_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_OVERCOAT);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_STUN_SPORE, player);
<<<<<<< HEAD
        MESSAGE("It doesn't affect Foe Ludomon…");
=======
        MESSAGE("It doesn't affect the opposing Ludomon…");
>>>>>>> upstream/master
    }
}

DOUBLE_BATTLE_TEST("Overcoat blocks damage from sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON)    { Speed(50); } 
        PLAYER(SPECIES_HELIOLISK) { Speed(40); Ability(ABILITY_SAND_VEIL); }
        OPPONENT(SPECIES_LUDOMON)  { Speed(30); Ability(ABILITY_OVERCOAT); }
        OPPONENT(SPECIES_STARLY)     { Speed(20); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SANDSTORM); }
    } SCENE {
        MESSAGE("Exveemon used Sandstorm!");
        MESSAGE("The sandstorm is raging.");
        HP_BAR(playerLeft);
        NONE_OF {
            HP_BAR(playerRight);
            HP_BAR(opponentLeft);
        }
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Overcoat blocks damage from hail")
{
    GIVEN {
        PLAYER(SPECIES_EXVEEMON)    { Speed(50); Ability(ABILITY_SNOW_CLOAK); } 
        PLAYER(SPECIES_SOLOSIS)   { Speed(40); Ability(ABILITY_RUN_AWAY); }
        OPPONENT(SPECIES_LUDOMON)  { Speed(30); Ability(ABILITY_OVERCOAT); }
        OPPONENT(SPECIES_EXVEEMON_VIRUS) { Speed(20); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); MOVE(playerRight, MOVE_SKILL_SWAP, target: playerLeft); }
    } SCENE {
        MESSAGE("Exveemon used Hail!");
        MESSAGE("Solosis used Skill Swap!");
        HP_BAR(playerLeft);
        NONE_OF {
            HP_BAR(playerRight);
            HP_BAR(opponentLeft);
            HP_BAR(opponentRight); // ice type
        }
    }
}

SINGLE_BATTLE_TEST("Overcoat blocks Effect Spore's effect")
{
    GIVEN {
        PLAYER(SPECIES_LUDOMON) {Ability(ABILITY_OVERCOAT);}
        OPPONENT(SPECIES_ARESDRAMON) {Ability(ABILITY_EFFECT_SPORE);}
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, WITH_RNG(RNG_EFFECT_SPORE, 1)); }
    } SCENE {
        MESSAGE("Ludomon used Tackle!");
        NOT ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
    } THEN {
        EXPECT_EQ(player->status1, 0);
    }
}

