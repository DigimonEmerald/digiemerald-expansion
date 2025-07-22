#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SHELL_TRAP].effect == EFFECT_SHELL_TRAP);
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
    ASSUME(gMovesInfo[MOVE_WATER_GUN].category == DAMAGE_CATEGORY_SPECIAL);
    ASSUME(gMovesInfo[MOVE_LEER].category == DAMAGE_CATEGORY_STATUS);
}

SINGLE_BATTLE_TEST("Shell Trap activates only if hit by a physical move")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = TRUE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; activate = FALSE; }
    PARAMETRIZE { move = MOVE_LEER; activate = FALSE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_TRAP); MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, player);
        MESSAGE("Lopmonx set a shell trap!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);

        if (activate) {
            MESSAGE("Lopmonx used Shell Trap!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("Lopmonx's shell trap didn't work!");
            NONE_OF {
                MESSAGE("Lopmonx used Shell Trap!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, player);
                HP_BAR(opponent);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Shell Trap does not activate if attacker's Sheer Force applied")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = TRUE; }
    PARAMETRIZE { move = MOVE_STOMP; activate = FALSE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHUUMON) { Ability(ABILITY_SHEER_FORCE); }
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_TRAP); MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, player);
        MESSAGE("Lopmonx set a shell trap!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (activate) {
            MESSAGE("Lopmonx used Shell Trap!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("Lopmonx's shell trap didn't work!");
            NONE_OF {
                MESSAGE("Lopmonx used Shell Trap!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, player);
                HP_BAR(opponent);
            }
        }
    }
}

SINGLE_BATTLE_TEST("Shell Trap does not activate if battler faints before being able to activate it")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SHELL_TRAP); MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, player);
        MESSAGE("Lopmonx set a shell trap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("Lopmonx fainted!");
        SEND_IN_MESSAGE("Lopmonx");
        NONE_OF {
            MESSAGE("Lopmonx used Shell Trap!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, player);
            HP_BAR(opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Shell Trap activates immediately after being hit on turn 1 and attacks both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SHELL_TRAP].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SHELL_TRAP); MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(playerRight, MOVE_CELEBRATE); MOVE(opponentRight, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, playerLeft);
        MESSAGE("Lopmonx set a shell trap!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Lopmonx used Shell Trap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("The opposing Exveemon used Celebrate!");
    }
}

DOUBLE_BATTLE_TEST("Shell Trap activates immediately after being hit on turn 2 and attacks both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SHELL_TRAP].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(6); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SHELL_TRAP); MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(playerRight, MOVE_CELEBRATE); MOVE(opponentRight, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, playerLeft);
        MESSAGE("Lopmonx set a shell trap!");
        MESSAGE("The opposing Exveemon used Celebrate!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Lopmonx used Shell Trap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
        MESSAGE("Lopmonx used Celebrate!");
    }
}

DOUBLE_BATTLE_TEST("Shell Trap activates immediately after being hit on turn 3 and attacks both opponents")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SHELL_TRAP].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_LOPMONX) { Speed(1); }
        PLAYER(SPECIES_LOPMONX) { Speed(7); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(6); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SHELL_TRAP); MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(playerRight, MOVE_CELEBRATE); MOVE(opponentRight, MOVE_CELEBRATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, playerLeft);
        MESSAGE("Lopmonx set a shell trap!");
        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("The opposing Exveemon used Celebrate!");
        MESSAGE("The opposing Lopmonx used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Lopmonx used Shell Trap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, playerLeft);
        HP_BAR(opponentLeft);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Shell Trap targets correctly if one of the opponents has fainted")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SHELL_TRAP].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_BIOSUPINOMON) { Speed(60); }
        PLAYER(SPECIES_TURTONATOR) { Speed(10); }
        OPPONENT(SPECIES_CURIMON) { Speed(120); }
        OPPONENT(SPECIES_MONODRAMON) { Speed(100); }
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerRight);
            MOVE(playerRight, MOVE_SHELL_TRAP);
        }
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerRight);
            MOVE(playerRight, MOVE_SHELL_TRAP);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, playerRight);
        MESSAGE("The opposing Monodramon fainted!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SHELL_TRAP_SETUP, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHELL_TRAP, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
    }
}
