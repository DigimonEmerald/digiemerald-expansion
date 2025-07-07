#include "global.h"
#include "test/battle.h"

// Please add Hail interactions with move, item and ability effects on their respective files.
ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_HAIL) == EFFECT_HAIL);
    ASSUME(gSpeciesInfo[SPECIES_LOPMON_X].types[0] != TYPE_ICE && gSpeciesInfo[SPECIES_LOPMON_X].types[1] != TYPE_ICE);
    ASSUME(gSpeciesInfo[SPECIES_EXVEEMON].types[0] != TYPE_ICE && gSpeciesInfo[SPECIES_EXVEEMON].types[1] != TYPE_ICE);
    ASSUME(gSpeciesInfo[SPECIES_EYESMON].types[0] == TYPE_ICE || gSpeciesInfo[SPECIES_EYESMON].types[1] == TYPE_ICE);
}

SINGLE_BATTLE_TEST("Hail deals 1/16 damage per turn")
{
    s16 hailDamage;

    GIVEN {
        PLAYER(SPECIES_EYESMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        MESSAGE("The opposing Lopmonx is buffeted by the hail!");
        HP_BAR(opponent, captureDamage: &hailDamage);
   } THEN { EXPECT_EQ(hailDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Hail damage does not affect Ice-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_EYESMON].types[0] == TYPE_ICE);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EYESMON);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        NOT MESSAGE("The opposing Eyesmon is buffeted by the hail!");
    }
}

SINGLE_BATTLE_TEST("Hail fails if Desolate Land or Primordial Sea are active")
{
    u32 species;
    u32 item;

    PARAMETRIZE { species = SPECIES_LOPMONX; item = ITEM_NONE; }
    PARAMETRIZE { species = SPECIES_GEKOMON; item = ITEM_RED_ORB; }
    PARAMETRIZE { species = SPECIES_GATOMON_X; item = ITEM_BLUE_ORB; }

    GIVEN {
        PLAYER(species) { Item(item); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        if (item == ITEM_RED_ORB || item == ITEM_BLUE_ORB) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_PRIMAL_REVERSION, player);
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        }
    }
}

DOUBLE_BATTLE_TEST("Hail deals damage based on turn order")
{
    GIVEN {
        PLAYER(SPECIES_EYESMON) { Speed(4); }
        PLAYER(SPECIES_EXVEEMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(2); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); }
    } SCENE {
        NOT HP_BAR(playerLeft);
        HP_BAR(opponentRight);
        HP_BAR(opponentLeft);
        HP_BAR(playerRight);
   }
}

SINGLE_BATTLE_TEST("Hail damage rounds properly when maxHP < 16")
{
    GIVEN {
        PLAYER(SPECIES_HAZYAGUMON) { Level(1); MaxHP(11); HP(11); }
        OPPONENT(SPECIES_EYESMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        HP_BAR(player, damage: 1);
    }
}

SINGLE_BATTLE_TEST("Hail doesn't do damage when weather is negated")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_LOPMON_X].types[0] != TYPE_ICE);
        ASSUME(gSpeciesInfo[SPECIES_LOPMON_X].types[1] != TYPE_ICE);
        PLAYER(SPECIES_LOPMON_X);
        OPPONENT(SPECIES_DEMMERAMON) { Ability(ABILITY_CLOUD_NINE); }
    } WHEN {
        TURN { MOVE(player, MOVE_HAIL); }
    } SCENE {
        NOT HP_BAR(player);
    }
}
