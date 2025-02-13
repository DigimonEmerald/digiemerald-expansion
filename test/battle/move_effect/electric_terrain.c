#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Electric Terrain protects grounded battlers from falling asleep")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_DIATRYMON) { Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); MOVE(opponent, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
<<<<<<< HEAD:test/battle/terrain/electric.c
        MESSAGE("Lopmonx used ElctrcTrrain!");
        MESSAGE("Foe Diatrymon used Spore!");
        MESSAGE("Lopmonx surrounds itself with electrified terrain!");
        MESSAGE("Lopmonx used Spore!");
        MESSAGE("Foe Diatrymon fell asleep!");
=======
        MESSAGE("Wobbuffet used Electric Terrain!");
        MESSAGE("The opposing Claydol used Spore!");
        MESSAGE("Wobbuffet surrounds itself with electrified terrain!");
        MESSAGE("Wobbuffet used Spore!");
        MESSAGE("The opposing Claydol fell asleep!");
>>>>>>> upstream/master:test/battle/move_effect/electric_terrain.c
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

<<<<<<< HEAD:test/battle/terrain/electric.c
SINGLE_BATTLE_TEST("Electric Terrain activates Electric Seed and Mimicry")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ELECTRIC_SEED].holdEffect == HOLD_EFFECT_SEEDS);
        ASSUME(gItemsInfo[ITEM_ELECTRIC_SEED].holdEffectParam == HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN);
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_ELECTRIC_SEED); }
        OPPONENT(SPECIES_STUNFISK_GALARIAN) { Ability(ABILITY_MIMICRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Using Electric Seed, the Defense of Lopmonx rose!");
        ABILITY_POPUP(opponent);
        MESSAGE("Foe Stunfisk's type changed to Electr!");
    } THEN {
        EXPECT_EQ(gBattleMons[B_POSITION_OPPONENT_LEFT].type1, TYPE_ELECTRIC);
    }
}

=======
>>>>>>> upstream/master:test/battle/move_effect/electric_terrain.c
SINGLE_BATTLE_TEST("Electric Terrain increases power of Electric-type moves by 30/50 percent", s16 damage)
{
    bool32 terrain;
    PARAMETRIZE { terrain = FALSE; }
    PARAMETRIZE { terrain = TRUE; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        if (terrain)
            TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); }
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
<<<<<<< HEAD:test/battle/terrain/electric.c
        MESSAGE("Lopmonx used ThunderShock!");
=======
        MESSAGE("Wobbuffet used Thunder Shock!");
>>>>>>> upstream/master:test/battle/move_effect/electric_terrain.c
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_TERRAIN_TYPE_BOOST >= GEN_8)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Electric Terrain lasts for 5 turns")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_ELECTRIC_TERRAIN); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
<<<<<<< HEAD:test/battle/terrain/electric.c
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("The opposing Wobbuffet used Celebrate!");
>>>>>>> upstream/master:test/battle/move_effect/electric_terrain.c
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, player);
        MESSAGE("An electric current ran across the battlefield!");

<<<<<<< HEAD:test/battle/terrain/electric.c
        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");

        MESSAGE("Lopmonx used Celebrate!");
        MESSAGE("Foe Lopmonx used Celebrate!");
=======
        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");

        MESSAGE("Wobbuffet used Celebrate!");
        MESSAGE("The opposing Wobbuffet used Celebrate!");
>>>>>>> upstream/master:test/battle/move_effect/electric_terrain.c

        MESSAGE("The electricity disappeared from the battlefield.");
    }
}
