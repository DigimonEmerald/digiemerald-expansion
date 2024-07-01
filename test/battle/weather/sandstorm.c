#include "global.h"
#include "test/battle.h"

// Please add Sandstorm interactions with move, item and ability effects on their respective files.
SINGLE_BATTLE_TEST("Sandstorm deals 1/16 damage per turn")
{
    s16 sandstormDamage;

    GIVEN {
        PLAYER(SPECIES_POYOMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {MOVE(player, MOVE_SANDSTORM);}
    } SCENE {
        MESSAGE("Foe Lopmonx is buffeted by the sandstorm!");
        HP_BAR(opponent, captureDamage: &sandstormDamage);
   } THEN { EXPECT_EQ(sandstormDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Sandstorm multiplies the special defense of Rock-types by 1.5x", s16 damage)
{
    u16 move;
    PARAMETRIZE { move = MOVE_SANDSTORM; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX) ;
        OPPONENT(SPECIES_BIOTHUNMON);
    } WHEN {
        TURN { MOVE(opponent, move); }
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sandstorm damage does not hurt Ground, Rock, and Steel-type Pokémon")
{
    u32 mon;
    PARAMETRIZE { mon = SPECIES_POYOMON; }
    PARAMETRIZE { mon = SPECIES_BIOTHUNMON; }
    PARAMETRIZE { mon = SPECIES_GARURUMON; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_POYOMON].types[0] == TYPE_GROUND);
        ASSUME(gSpeciesInfo[SPECIES_BIOTHUNMON].types[0] == TYPE_ROCK);
        ASSUME(gSpeciesInfo[SPECIES_GARURUMON].types[0] == TYPE_STEEL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_SANDSTORM); }
    } SCENE {
        switch (mon)
        {
        case SPECIES_POYOMON:
            NOT MESSAGE("Foe Poyomon is buffeted by the sandstorm!");
            break;
        case SPECIES_BIOTHUNMON:
            NOT MESSAGE("Foe Biothunmon is buffeted by the sandstorm!");
            break;
        case SPECIES_GARURUMON:
            NOT MESSAGE("Foe Garurumon is buffeted by the sandstorm!");
            break;
        }
    }
}
