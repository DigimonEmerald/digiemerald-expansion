#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FURY_CUTTER].type == TYPE_BUG);
    ASSUME(!IS_MOVE_STATUS(MOVE_FURY_CUTTER));
    ASSUME(gMovesInfo[MOVE_FEINT_ATTACK].type == TYPE_DARK);
    ASSUME(!IS_MOVE_STATUS(MOVE_FEINT_ATTACK));
    ASSUME(gMovesInfo[MOVE_SHADOW_PUNCH].type == TYPE_GHOST);
    ASSUME(!IS_MOVE_STATUS(MOVE_SHADOW_PUNCH));
    ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
    ASSUME(!IS_MOVE_STATUS(MOVE_TACKLE));
}

SINGLE_BATTLE_TEST("Rattled boosts speed by 1 when hit by Bug, Dark or Ghost type move")
{
    u16 move;
    PARAMETRIZE { move = MOVE_FURY_CUTTER; }
    PARAMETRIZE { move = MOVE_FEINT_ATTACK; }
    PARAMETRIZE { move = MOVE_SHADOW_PUNCH; }
    PARAMETRIZE { move = MOVE_TACKLE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) {Speed(42) ;}
        OPPONENT(SPECIES_JUNKMON) {Speed(40); Ability(ABILITY_RATTLED);}
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move != MOVE_TACKLE) {
            ABILITY_POPUP(opponent, ABILITY_RATTLED);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Junkmon's Speed rose!");
        }
        MESSAGE("Foe Junkmon used Celebrate!");
        // Junkmon is now faster
        if (move != MOVE_TACKLE){
            MESSAGE("Foe Junkmon used Celebrate!");
=======
            MESSAGE("The opposing Junkmon's Speed rose!");
        }
        MESSAGE("The opposing Junkmon used Celebrate!");
        // Junkmon is now faster
        if (move != MOVE_TACKLE){
            MESSAGE("The opposing Junkmon used Celebrate!");
>>>>>>> upstream/master
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            HP_BAR(opponent);
            ABILITY_POPUP(opponent, ABILITY_RATTLED);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Junkmon's Speed rose!");
=======
            MESSAGE("The opposing Junkmon's Speed rose!");
>>>>>>> upstream/master
        }
        else {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
            HP_BAR(opponent);
<<<<<<< HEAD
            MESSAGE("Foe Junkmon used Celebrate!");
=======
            MESSAGE("The opposing Junkmon used Celebrate!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Rattled boosts speed by 1 when affected by Intimidate")
{
    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        PLAYER(SPECIES_COMMDRAMON) {Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_JUNKMON) {Ability(ABILITY_RATTLED); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
        MESSAGE("Commdramon's Intimidate cuts Foe Junkmon's attack!");
        ABILITY_POPUP(opponent, ABILITY_RATTLED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Junkmon's Speed rose!");
=======
        MESSAGE("Commdramon's Intimidate cuts the opposing Junkmon's Attack!");
        ABILITY_POPUP(opponent, ABILITY_RATTLED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Junkmon's Speed rose!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Rattled triggers correctly when hit by U-Turn") // Specific test here, because of #3124
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_U_TURN].effect == EFFECT_HIT_ESCAPE);
        ASSUME(gMovesInfo[MOVE_U_TURN].type == TYPE_BUG);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_JUNKMON) {Ability(ABILITY_RATTLED); }
        OPPONENT(SPECIES_JUNKMON);
    } WHEN {
        TURN { MOVE(player, MOVE_U_TURN); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Lopmonx used U-turn!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, player);
        HP_BAR(opponent);
        ABILITY_POPUP(opponent, ABILITY_RATTLED);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
        MESSAGE("Foe Junkmon's Speed rose!");
        MESSAGE("Go! Exveemon!");
=======
        MESSAGE("The opposing Junkmon's Speed rose!");
        SEND_IN_MESSAGE("Wynaut");
>>>>>>> upstream/master
    }
}
