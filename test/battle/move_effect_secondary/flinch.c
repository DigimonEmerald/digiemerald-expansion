#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_HEADBUTT, MOVE_EFFECT_FLINCH) == TRUE);
}

SINGLE_BATTLE_TEST("Headbutt flinches the target if attacker is faster")
{
    bool8 isFaster;
    u16 spdPlayer, spdOpponent;

    PARAMETRIZE { isFaster = TRUE; spdPlayer = 10; spdOpponent = 5; }
    PARAMETRIZE { isFaster = FALSE; spdPlayer = 5; spdOpponent = 10; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(spdPlayer); }
        OPPONENT(SPECIES_LOPMONX) { Speed(spdOpponent); }
    } WHEN {
        TURN { MOVE(player, MOVE_HEADBUTT); }
        TURN { MOVE(player, MOVE_HEADBUTT); }
    } SCENE {
        // 1st turn
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        HP_BAR(opponent);
        if (isFaster) {
            MESSAGE("The opposing Lopmonx flinched and couldn't move!");
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        } else {
            NOT MESSAGE("The opposing Lopmonx flinched and couldn't move!");
        }

        // 2nd turn
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, player);
        HP_BAR(opponent);
        if (isFaster) {
            MESSAGE("The opposing Lopmonx flinched and couldn't move!");
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        } else {
            NOT MESSAGE("The opposing Lopmonx flinched and couldn't move!");
        }
    }
}

SINGLE_BATTLE_TEST("Protect always works when used after flinching")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_LOPMONX) { Speed(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_HEADBUTT); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_HEADBUTT); }
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_HEADBUTT); }
    } SCENE {
        // 1st turn
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, player);
        MESSAGE("Lopmonx protected itself!");

        // 2nd turn
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, opponent);
        HP_BAR(player);
        MESSAGE("Lopmonx flinched and couldn't move!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);

        // 3rd turn
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, player);
        MESSAGE("Lopmonx protected itself!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HEADBUTT, opponent);
    }
}
