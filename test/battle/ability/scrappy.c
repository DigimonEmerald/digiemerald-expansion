#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Scrappy prevents intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;

    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_SHED_SKIN); };
        PLAYER(SPECIES_PAFUMON) { Ability(ABILITY_INTIMIDATE); };
        OPPONENT(SPECIES_BETAMON_X) { Ability(ABILITY_SCRAPPY); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SCRATCH); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_SCRAPPY);
<<<<<<< HEAD
        MESSAGE("Foe Betamon_x's Scrappy prevents stat loss!");
=======
        MESSAGE("The opposing betamon_x's Scrappy prevents stat loss!");
>>>>>>> upstream/master
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Scrappy allows to hit Ghost-type Pokémon with Normal- and Fighting-type moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SCRATCH; }
    PARAMETRIZE { move = MOVE_KARATE_CHOP; }

    GIVEN {
        PLAYER(SPECIES_BETAMON_X) { Ability(ABILITY_SCRAPPY); };
        OPPONENT(SPECIES_TOKOMON_X);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Scrappy doesn't bypass a Ghost-type's Wonder Guard")
{
    u32 move;
    PARAMETRIZE { move = MOVE_SCRATCH; }
    PARAMETRIZE { move = MOVE_KARATE_CHOP; }

    GIVEN {
        PLAYER(SPECIES_BETAMON_X) { Ability(ABILITY_SCRAPPY); };
        OPPONENT(SPECIES_BALUCHIMON) { Ability(ABILITY_WONDER_GUARD); };
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            HP_BAR(opponent);
        }
        ABILITY_POPUP(opponent, ABILITY_WONDER_GUARD);
<<<<<<< HEAD
        MESSAGE("Foe Baluchimon avoided damage with Wonder Guard!");
=======
        MESSAGE("The opposing Baluchimon avoided damage with Wonder Guard!");
>>>>>>> upstream/master
    }
}
