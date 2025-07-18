#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gSpeciesInfo[SPECIES_PUWAMON].genderRatio == MON_MALE);
    ASSUME(gSpeciesInfo[SPECIES_PURURUMON].genderRatio == MON_FEMALE);
    ASSUME(gSpeciesInfo[SPECIES_DOKUNEMON].genderRatio == MON_GENDERLESS);
}

SINGLE_BATTLE_TEST("Rivalry increases power by x1.25 towards Pokémon of the same gender", s16 damage)
{
    u16 species, ability;
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_RIVALRY; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_RIVALRY; }

    GIVEN {
        PLAYER(species) { Ability(ability); }
        OPPONENT(species);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.25), results[1].damage);
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(1.25), results[3].damage);
    }
}

SINGLE_BATTLE_TEST("Rivalry decreases power by x0.75 towards Pokémon of different gender", s16 damage)
{
    u16 species1, species2, ability;
    PARAMETRIZE { species1 = SPECIES_PUWAMON; species2 = SPECIES_PURURUMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species1 = SPECIES_PUWAMON; species2 = SPECIES_PURURUMON; ability = ABILITY_RIVALRY; }
    PARAMETRIZE { species1 = SPECIES_PURURUMON; species2 = SPECIES_PUWAMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species1 = SPECIES_PURURUMON; species2 = SPECIES_PUWAMON; ability = ABILITY_RIVALRY; }

    GIVEN {
        PLAYER(species1) { Ability(ability); }
        OPPONENT(species2);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.75), results[1].damage);
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(0.75), results[3].damage);
    }
}

SINGLE_BATTLE_TEST("Rivalry doesn't modify power if the attacker is genderless", s16 damage)
{
    u16 species, ability;
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_RIVALRY; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_RIVALRY; }

    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_DOKUNEMON].abilities[0] == ABILITY_TRACE);
        PLAYER(SPECIES_DOKUNEMON) { Ability(ABILITY_TRACE); } // No genderless mon naturally gets Rivalry
        OPPONENT(species) { Ability(ability); };
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT(results[0].damage == results[1].damage);
        EXPECT(results[2].damage == results[3].damage);
    }
}


SINGLE_BATTLE_TEST("Rivalry doesn't modify power if the target is genderless", s16 damage)
{
    u16 species, ability;
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PUWAMON; ability = ABILITY_RIVALRY; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_POISON_POINT; }
    PARAMETRIZE { species = SPECIES_PURURUMON; ability = ABILITY_RIVALRY; }

    GIVEN {
        PLAYER(species) { Ability(ability); };
        OPPONENT(SPECIES_DOKUNEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT(results[0].damage == results[1].damage);
        EXPECT(results[2].damage == results[3].damage);
    }
}
