#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_PLASMA_FISTS, MOVE_EFFECT_ION_DELUGE) == TRUE);
}

SINGLE_BATTLE_TEST("Ion Duldge turns normal moves into electric for the remainder of the current turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ION_DELUGE].effect == EFFECT_ION_DELUGE);
        PLAYER(SPECIES_VIXIMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_ION_DELUGE); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Viximon used Ion Deluge!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ION_DELUGE, player);
        MESSAGE("A deluge of ions showers the battlefield!");
<<<<<<< HEAD:test/battle/move_effect/plasma_fists.c
        MESSAGE("Foe Lopmonx used Tackle!");
=======
        MESSAGE("The opposing Wobbuffet used Tackle!");
>>>>>>> upstream/master:test/battle/move_effect_secondary/ion_deluge.c
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists turns normal moves into electric for the remainder of the current turn")
{
    GIVEN {
        PLAYER(SPECIES_VIXIMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Viximon used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
<<<<<<< HEAD:test/battle/move_effect/plasma_fists.c
        MESSAGE("Foe Lopmonx used Tackle!");
=======
        MESSAGE("The opposing Wobbuffet used Tackle!");
>>>>>>> upstream/master:test/battle/move_effect_secondary/ion_deluge.c
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists does not set up Ion Deluge if it does not connect")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_PHANPY].types[0] == TYPE_GROUND || gSpeciesInfo[SPECIES_PHANPY].types[1] == TYPE_GROUND);
        PLAYER(SPECIES_VIXIMON);
        OPPONENT(SPECIES_PHANPY);
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Viximon used Plasma Fists!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
            MESSAGE("A deluge of ions showers the battlefield!");
        }
        MESSAGE("The opposing Phanpy used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists type-changing effect does not override Pixilate")
{
    GIVEN {
        PLAYER(SPECIES_VIXIMON) { Speed(300); };
        OPPONENT(SPECIES_DARMAILMON) { Speed(1); Item(ITEM_DARMAILMONNITE); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Viximon used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("The opposing Sylveon used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists type-changing effect is applied after Normalize")
{
    GIVEN {
        PLAYER(SPECIES_VIXIMON);
        OPPONENT(SPECIES_BIRDRAMON) { Ability(ABILITY_NORMALIZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Viximon used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
<<<<<<< HEAD:test/battle/move_effect/plasma_fists.c
        MESSAGE("Foe Birdramon used Ember!");
=======
        MESSAGE("The opposing Skitty used Ember!");
>>>>>>> upstream/master:test/battle/move_effect_secondary/ion_deluge.c
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists turns normal type dynamax-moves into electric type moves")
{
    GIVEN {
        PLAYER(SPECIES_VIXIMON) { Speed(100); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Viximon used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
<<<<<<< HEAD:test/battle/move_effect/plasma_fists.c
        MESSAGE("Foe Lopmonx used Max Lightning!");
=======
        MESSAGE("The opposing Wobbuffet used Max Lightning!");
>>>>>>> upstream/master:test/battle/move_effect_secondary/ion_deluge.c
        MESSAGE("It's super effective!");
    }
}
