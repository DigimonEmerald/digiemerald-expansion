#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Inner Focus prevents intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;

    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_SHED_SKIN); };
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); };
        OPPONENT(SPECIES_ICEBOTAMON) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SCRATCH); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_INNER_FOCUS);
<<<<<<< HEAD
        MESSAGE("Foe Icebotamon's Inner Focus prevents stat loss!");
=======
        MESSAGE("The opposing Icebotamon's Inner Focus prevents stat loss!");
>>>>>>> upstream/master
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Inner Focus prevents flinching")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ICEBOTAMON) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(player, MOVE_FAKE_OUT);
               MOVE(opponent, MOVE_SCRATCH);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, player);
<<<<<<< HEAD
        NONE_OF { MESSAGE("Foe Icebotamon flinched!"); }
=======
        NONE_OF { MESSAGE("The opposing Icebotamon flinched and couldn't move!"); }
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
    }
}

SINGLE_BATTLE_TEST("Mold Breaker ignores Inner Focus")
{
    GIVEN {
        PLAYER(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); };
        OPPONENT(SPECIES_ICEBOTAMON) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(player, MOVE_FAKE_OUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, player);
<<<<<<< HEAD
        MESSAGE("Foe Icebotamon flinched!");
=======
        MESSAGE("The opposing Icebotamon flinched and couldn't move!");
>>>>>>> upstream/master
    }
}
