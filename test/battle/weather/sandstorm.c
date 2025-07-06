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
        MESSAGE("The opposing Lopmonx is buffeted by the sandstorm!");
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
            NOT MESSAGE("The opposing Poyomon is buffeted by the sandstorm!");
            break;
        case SPECIES_BIOTHUNMON:
            NOT MESSAGE("The opposing Biothunmon is buffeted by the sandstorm!");
            break;
        case SPECIES_GARURUMON:
            NOT MESSAGE("The opposing Garurumon is buffeted by the sandstorm!");
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("Sandstorm deals damage based on turn order")
{
    GIVEN {
        PLAYER(SPECIES_PULSEMON) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SANDSTORM); }
    } SCENE {
        NOT HP_BAR(playerLeft);
        HP_BAR(opponentRight);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
   }
}

SINGLE_BATTLE_TEST("Sandstorm damage rounds properly when maxHP < 16")
{
    GIVEN {
        PLAYER(SPECIES_HAZYAGUMON) { Level(1); MaxHP(11); HP(11); }
        OPPONENT(SPECIES_POYOMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); }
    } SCENE {
        HP_BAR(player, damage: 1);
    }
}
