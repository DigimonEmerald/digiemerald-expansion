#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Oblivious prevents Infatuation")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ATTRACT) == EFFECT_ATTRACT);
        PLAYER(SPECIES_PAGUMON) { Ability(ABILITY_OBLIVIOUS); Gender(MON_MALE); }
        OPPONENT(SPECIES_LOPMONX) { Gender(MON_FEMALE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_ATTRACT); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_OBLIVIOUS);
        NONE_OF { ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_INFATUATION, player); }
        MESSAGE("It doesn't affect Pagumon…");
    }
}

SINGLE_BATTLE_TEST("Oblivious prevents Captivate")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CAPTIVATE) == EFFECT_CAPTIVATE);
        PLAYER(SPECIES_PAGUMON) { Ability(ABILITY_OBLIVIOUS); Gender(MON_MALE); }
        OPPONENT(SPECIES_LOPMONX) { Gender(MON_FEMALE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CAPTIVATE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_OBLIVIOUS);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        MESSAGE("It doesn't affect Pagumon…");
    }
}

SINGLE_BATTLE_TEST("Oblivious prevents Taunt")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_TAUNT) == EFFECT_TAUNT);
        ASSUME(B_OBLIVIOUS_TAUNT >= GEN_6);
        PLAYER(SPECIES_PAGUMON) { Ability(ABILITY_OBLIVIOUS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TAUNT); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_OBLIVIOUS);
        NONE_OF { ANIMATION(ANIM_TYPE_MOVE, MOVE_TAUNT, opponent); }
        MESSAGE("It doesn't affect Pagumon…");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
    }
}

SINGLE_BATTLE_TEST("Oblivious prevents Intimidate")
{
    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        PLAYER(SPECIES_PAGUMON) { Ability(ABILITY_OBLIVIOUS); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ABILITY_POPUP(player, ABILITY_OBLIVIOUS);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        MESSAGE("Pagumon's Oblivious prevents stat loss!");
    }
}
