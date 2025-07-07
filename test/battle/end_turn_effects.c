#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("End Turn Effects: First Event Block is executed correctly")
{
    s16 healed;
    s16 damage;

    GIVEN {
        PLAYER(SPECIES_EXVEEMON) { HP(100); Speed(1); }
        PLAYER(SPECIES_PAFUMON) { HP(100); Ability(ABILITY_SHED_SKIN); Status1(STATUS1_BURN); Speed(2); }
        OPPONENT(SPECIES_EXVEEMON) { HP(100); Item(ITEM_LEFTOVERS); Speed(3); }
        OPPONENT(SPECIES_LOPMON_X) { HP(100); Item(ITEM_BLACK_SLUDGE); Speed(4); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_GRASSY_TERRAIN); }
    } SCENE {
        MESSAGE("The opposing Lopmon_x is healed by the grassy terrain!");
        HP_BAR(opponentRight, captureDamage: &healed);
        HP_BAR(opponentRight, captureDamage: &damage);
        MESSAGE("The opposing Lopmon_x was hurt by the Black Sludge!");
        MESSAGE("The opposing Exveemon is healed by the grassy terrain!");
        MESSAGE("The opposing Exveemon restored a little HP using its Leftovers!");
        MESSAGE("Pafumon is healed by the grassy terrain!");
        MESSAGE("Pafumon's Shed Skin cured its burn problem!");
        MESSAGE("Exveemon is healed by the grassy terrain!");
    } THEN {
        EXPECT_GT(0, healed);
        EXPECT_GT(damage, 0);
    }
}

