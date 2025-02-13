#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TECHNO_BLAST].effect == EFFECT_CHANGE_TYPE_ON_ITEM);
    ASSUME(gMovesInfo[MOVE_TECHNO_BLAST].argument == HOLD_EFFECT_DRIVE);
}

SINGLE_BATTLE_TEST("Techno Blast changes type depending on the drive the user holds")
{
    u16 species;
    u16 item;

    PARAMETRIZE { species = SPECIES_CHIBOMON; item = ITEM_DOUSE_DRIVE; }
    PARAMETRIZE { species = SPECIES_CURIMON; item = ITEM_SHOCK_DRIVE; }
    PARAMETRIZE { species = SPECIES_BOMMON; item = ITEM_BURN_DRIVE; }
    PARAMETRIZE { species = SPECIES_ELECMON; item = ITEM_CHILL_DRIVE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_TECHNO_BLAST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TECHNO_BLAST, player);
        HP_BAR(opponent);
        MESSAGE("It's super effective!");
    }
}

TO_DO_BATTLE_TEST("Judgement changes type depending on the plate the user holds");
TO_DO_BATTLE_TEST("Multi Attack changes type depending on the memory the user holds");
