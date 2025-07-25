#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_JUMP_KICK].effect == EFFECT_RECOIL_IF_MISS);
}

SINGLE_BATTLE_TEST("Jump Kick has 50% recoil on miss")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        MESSAGE("Lopmonx used Jump Kick!");
        MESSAGE("Lopmonx's attack missed!");
        MESSAGE("Lopmonx kept going and crashed!");
        HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick has 50% recoil on protect")
{
    GIVEN {
        ASSUME(!gMovesInfo[MOVE_JUMP_KICK].ignoresProtect);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_JUMP_KICK, player);
        HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick has no recoil if no target")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); SEND_OUT(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, opponent);
        NOT HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick's recoil happens after Spiky Shield damage and Pokemon can faint from either of these")
{
    s16 hp, maxHp = 256;
    bool32 faintOnSpiky = FALSE, faintOnJumpKick = FALSE;

    PARAMETRIZE { hp = maxHp; }
    PARAMETRIZE { hp = maxHp / 2; faintOnJumpKick = TRUE; } // Faints after Jump Kick's recoil
    PARAMETRIZE { hp = maxHp / 8; faintOnSpiky = TRUE; } // Faints after Spiky Shield's recoil

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPIKY_SHIELD].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_LOPMONX) { HP(hp); MaxHP(maxHp); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (!faintOnJumpKick && !faintOnSpiky) {
            TURN { MOVE(opponent, MOVE_SPIKY_SHIELD); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
        } else {
            TURN { MOVE(opponent, MOVE_SPIKY_SHIELD); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); SEND_OUT(player, 1); }
        }
        TURN { ; }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKY_SHIELD, opponent);
        MESSAGE("Lopmonx used Jump Kick!");
        MESSAGE("The opposing Lopmonx protected itself!");
        HP_BAR(player, damage: maxHp / 8);
        MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Spiky Shield!");
        if (faintOnSpiky){
            MESSAGE("Lopmonx fainted!");
            SEND_IN_MESSAGE("Exveemon");
            NONE_OF {
                MESSAGE("Lopmonx kept going and crashed!");
                HP_BAR(player);
            }
        } else {
            MESSAGE("Lopmonx kept going and crashed!");
            HP_BAR(player);
            if (faintOnJumpKick) {
                MESSAGE("Lopmonx fainted!");
                SEND_IN_MESSAGE("Exveemon");
            }
        }
    }
}
