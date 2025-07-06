#include "global.h"
#include "test/battle.h"

ASSUMPTIONS {
    int i;
    for (i = 0; i < NUM_ABILITY_SLOTS; i++) {
        ASSUME(gSpeciesInfo[SPECIES_KAKKINMON].abilities[i] != ABILITY_QUARK_DRIVE);
        ASSUME(gSpeciesInfo[SPECIES_KAPURIMON].abilities[i] != ABILITY_ELECTRIC_SURGE);
    }
}

SINGLE_BATTLE_TEST("Forced abilities activate on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_KAPURIMON);
        PLAYER(SPECIES_KAKKINMON) { Ability(ABILITY_QUARK_DRIVE); SpAttack(400);}
        OPPONENT(SPECIES_BLKGATOMON);
        OPPONENT(SPECIES_KAPURIMON) { Ability(ABILITY_ELECTRIC_SURGE); };
    } WHEN {
        TURN { SWITCH(player, 1); SWITCH(opponent, 1);}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_ELECTRIC_SURGE);
        ABILITY_POPUP(player, ABILITY_QUARK_DRIVE);
        MESSAGE("The Electric Terrain activated Kakkinmon's Quark Drive!");
        MESSAGE("Kakkinmon's Sp. Atk was heightened!");
    }
}
