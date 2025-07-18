#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Own Tempo prevents Intimidate but no other stat down changes")
{
    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); };
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
    } WHEN {
        TURN { MOVE(player, MOVE_SCARY_FACE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
<<<<<<< HEAD
        MESSAGE("Foe Pagumon's Own Tempo prevents stat loss!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCARY_FACE, player);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
            MESSAGE("Foe Pagumon's Own Tempo prevents stat loss!");
=======
        MESSAGE("The opposing Pagumon's Own Tempo prevents stat loss!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCARY_FACE, player);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
            MESSAGE("The opposing Pagumon's Own Tempo prevents stat loss!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Own Tempo prevents confusion from moves by the opponent")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSE_RAY); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
<<<<<<< HEAD
        MESSAGE("Foe Pagumon's Own Tempo prevents confusion!");
=======
        MESSAGE("The opposing Pagumon's Own Tempo prevents confusion!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Own Tempo prevents confusion from moves by the user")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffectSelf(MOVE_PETAL_DANCE, MOVE_EFFECT_THRASH));
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_PETAL_DANCE); }
        TURN { MOVE(opponent, MOVE_PETAL_DANCE); }
        TURN { MOVE(opponent, MOVE_PETAL_DANCE); }
        TURN { MOVE(opponent, MOVE_PETAL_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PETAL_DANCE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PETAL_DANCE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PETAL_DANCE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PETAL_DANCE, opponent);
        NONE_OF { MESSAGE("The opposing Pagumon became confused due to fatigue!"); }
    }
}

SINGLE_BATTLE_TEST("Mold Breaker ignores Own Tempo")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        NOT MESSAGE("The opposing Pagumon's Own Tempo prevents confusion!");
    }
}

SINGLE_BATTLE_TEST("Mold Breaker does not prevent Own Tempo from curing confusion right after")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); };
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
<<<<<<< HEAD
        MESSAGE("Foe Pagumon became confused!");
=======
        MESSAGE("The opposing Pagumon became confused!");
>>>>>>> upstream/master
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, opponent);
        }
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
<<<<<<< HEAD
        MESSAGE("Foe Pagumon's Own Tempo cured its confusion problem!");
=======
        MESSAGE("The opposing Pagumon's Own Tempo cured its confusion problem!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Own Tempo cures confusion if it's obtained via Skill Swap")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        ASSUME(GetMoveEffect(MOVE_SKILL_SWAP) == EFFECT_SKILL_SWAP);
        PLAYER(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); };
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_CONFUSE_RAY); }
        TURN { MOVE(player, MOVE_SKILL_SWAP);
               MOVE(opponent, MOVE_SCRATCH);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
<<<<<<< HEAD
        MESSAGE("Foe Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, player);
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
        MESSAGE("Foe Lopmonx's Own Tempo cured its confusion problem!");
=======
        MESSAGE("The opposing Lopmonx became confused!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, player);
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
        MESSAGE("The opposing Lopmonx's Own Tempo cured its confusion problem!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Own Tempo prevents confusion from items")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_BERSERK_GENE].holdEffect == HOLD_EFFECT_BERSERK_GENE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_PAGUMON) { Ability(ABILITY_OWN_TEMPO); Item(ITEM_BERSERK_GENE); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        ABILITY_POPUP(opponent, ABILITY_OWN_TEMPO);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}
