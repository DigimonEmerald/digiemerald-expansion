#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_RAPID_SPIN].effect == EFFECT_RAPID_SPIN);
    ASSUME(gMovesInfo[MOVE_MORTAL_SPIN].effect == EFFECT_RAPID_SPIN);
#if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
    ASSUME(MoveHasAdditionalEffectSelf(MOVE_RAPID_SPIN, MOVE_EFFECT_SPD_PLUS_1) == TRUE);
#endif
    ASSUME(MoveHasAdditionalEffect(MOVE_MORTAL_SPIN, MOVE_EFFECT_POISON) == TRUE);
}

SINGLE_BATTLE_TEST("Rapid Spin activates after Toxic Debris")
{
    GIVEN {
        PLAYER(SPECIES_GLIMMORA) { Ability(ABILITY_TOXIC_DEBRIS); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAPID_SPIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAPID_SPIN, opponent);
        ABILITY_POPUP(player, ABILITY_TOXIC_DEBRIS);
        MESSAGE("Poison spikes were scattered on the ground all around the opposing team!");
        MESSAGE("The opposing Lopmonx blew away Toxic Spikes!");
    }
}

SINGLE_BATTLE_TEST("Rapid Spin blows away Wrap, hazards and raises Speed (Gen 8+)")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WRAP); }
        TURN { MOVE(opponent, MOVE_STEALTH_ROCK); MOVE(player, MOVE_RAPID_SPIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAPID_SPIN, player);
<<<<<<< HEAD:test/battle/move_effect_secondary/rapid_spin.c
        MESSAGE("Lopmonx got free of Foe Lopmonx's Wrap!");
        MESSAGE("Lopmonx blew away Stealth Rock!");
=======
>>>>>>> upstream/master:test/battle/move_effect/rapid_spin.c
    #if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Lopmonx's Speed rose!");
    #endif
        MESSAGE("Lopmonx got free of the opposing Lopmonx's Wrap!");
        MESSAGE("Lopmonx blew away Stealth Rock!");
    }
}

SINGLE_BATTLE_TEST("Rapid Spin: Mortal Spin blows away Wrap, hazards and poisons foe")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WRAP); }
        TURN { MOVE(opponent, MOVE_STEALTH_ROCK); MOVE(player, MOVE_MORTAL_SPIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MORTAL_SPIN, player);
<<<<<<< HEAD:test/battle/move_effect_secondary/rapid_spin.c
        MESSAGE("Lopmonx got free of Foe Lopmonx's Wrap!");
        MESSAGE("Lopmonx blew away Stealth Rock!");
        MESSAGE("Foe Lopmonx was poisoned!");
=======
        MESSAGE("The opposing Lopmonx was poisoned!");
>>>>>>> upstream/master:test/battle/move_effect/rapid_spin.c
        STATUS_ICON(opponent, poison: TRUE);
        MESSAGE("Lopmonx got free of the opposing Lopmonx's Wrap!");
        MESSAGE("Lopmonx blew away Stealth Rock!");
    }
}
