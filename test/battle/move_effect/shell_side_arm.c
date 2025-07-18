#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Shell Side Arm can be countered if it is physical")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_SHELL_SIDE_ARM); }
        OPPONENT(SPECIES_GARGOYLMON) { Defense(100); SpDefense(200); }
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_SIDE_ARM); MOVE(opponent, MOVE_COUNTER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COUNTER, opponent);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Shell Side Arm can be mirror coated if it is special")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_SHELL_SIDE_ARM); }
        OPPONENT(SPECIES_GARGOMON) { Defense(200); SpDefense(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_SIDE_ARM); MOVE(opponent, MOVE_MIRROR_COAT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIRROR_COAT, opponent);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Shell Side Arm does not change category mid-turn")
{
    s16 damage[3];

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Moves(MOVE_SHELL_SIDE_ARM); }
        OPPONENT(SPECIES_LOPMONX) { Defense(100); SpDefense(120); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SHELL_SIDE_ARM); }
        TURN { MOVE(opponent, MOVE_LIGHT_SCREEN); MOVE(player, MOVE_SHELL_SIDE_ARM); }
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_SHELL_SIDE_ARM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LIGHT_SCREEN, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, player);
        HP_BAR(opponent, captureDamage: &damage[2]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_EQ(damage[1], damage[2]);
    }
}

DOUBLE_BATTLE_TEST("Shell Side Arm chooses its category for each battler on the field")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(10); Moves(MOVE_SHELL_SIDE_ARM); }
        PLAYER(SPECIES_LOPMONX) { Speed(20); }
        OPPONENT(SPECIES_GARGOMON) { Speed(30); Defense(200); SpDefense(100); }
        OPPONENT(SPECIES_GARGOYLMON) { Speed(30); Defense(100); SpDefense(200); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SHELL_SIDE_ARM, target: opponentRight); MOVE(opponentRight, MOVE_COUNTER); }
        TURN { MOVE(playerLeft, MOVE_SHELL_SIDE_ARM, target: opponentLeft); MOVE(opponentLeft, MOVE_MIRROR_COAT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, playerLeft);
        HP_BAR(opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COUNTER, opponentRight);
        HP_BAR(playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, playerLeft);
        HP_BAR(opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIRROR_COAT, opponentLeft);
        HP_BAR(playerLeft);
    }
}

DOUBLE_BATTLE_TEST("Shell Side Arm does not change category mid-turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(10); Moves(MOVE_SHELL_SIDE_ARM); }
        PLAYER(SPECIES_LOPMONX) { Speed(20); }
        OPPONENT(SPECIES_LOPMONX) { Speed(30); Defense(200); SpDefense(190); }
        OPPONENT(SPECIES_LOPMONX) { Speed(40); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SHELL_SIDE_ARM, target: opponentLeft);
               MOVE(opponentRight, MOVE_LIGHT_SCREEN);
               MOVE(opponentLeft, MOVE_MIRROR_COAT);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_LIGHT_SCREEN, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_SIDE_ARM, playerLeft);
        HP_BAR(opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MIRROR_COAT, opponentLeft);
        HP_BAR(playerLeft);
    }
}
