#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ION_DELUGE].effect == EFFECT_ION_DELUGE);
}

// For some reason SINGLE_BATTLE_TEST didn't catch these two issues.
WILD_BATTLE_TEST("Ion Deluge works the same way as always when used by a mon with Volt Absorb")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_GUILMON) { Ability(ABILITY_VOLT_ABSORB); HP(1); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_ION_DELUGE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Wild Guilmon used Ion Deluge!");
=======
        MESSAGE("The wild Guilmon used Ion Deluge!");
>>>>>>> upstream/master
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_VOLT_ABSORB);
            HP_BAR(opponent);
            MESSAGE("Wild Guilmon restored HP using its Volt Absorb!");
        }
        MESSAGE("A deluge of ions showers the battlefield!");
    }
}

WILD_BATTLE_TEST("Ion Deluge works the same way as always when used by a mon with Lightning Rod / Motor Drive")
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_LIGHTNING_ROD; }
    PARAMETRIZE { ability = ABILITY_MOTOR_DRIVE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ZEBSTRIKA) { Ability(ability); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_ION_DELUGE); }
    } SCENE {
        MESSAGE("The wild Zebstrika used Ion Deluge!");
        NONE_OF {
            ABILITY_POPUP(opponent, ability);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Wild Zebstrika's Sp. Atk rose!");
            MESSAGE("Wild Zebstrika's Speed rose!");
        }
        MESSAGE("A deluge of ions showers the battlefield!");
    }
}

SINGLE_BATTLE_TEST("Ion Deluge makes Normal type moves Electric type")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_YURAMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ION_DELUGE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Yuramon used Ion Deluge!");
=======
        MESSAGE("The opposing Yuramon used Ion Deluge!");
>>>>>>> upstream/master
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Lopmonx used Tackle!");
        MESSAGE("It's super effective!"); // Because Tackle is now electric type.
    }
}
