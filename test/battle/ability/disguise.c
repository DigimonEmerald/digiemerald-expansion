#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveCategory(MOVE_AERIAL_ACE) == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Disguised Mimikyu will lose 1/8 of its max HP upon changing to its busted form")
{
    s16 disguiseDamage;

    GIVEN {
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_AERIAL_ACE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AERIAL_ACE, opponent);
        ABILITY_POPUP(player, ABILITY_DISGUISE);
        HP_BAR(player, captureDamage: &disguiseDamage);
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_BUSTED);
        EXPECT_EQ(disguiseDamage, player->maxHP / 8);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu takes no damage from a confusion hit and changes to its busted form")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_CONFUSE_RAY) == EFFECT_CONFUSE);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); }
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CONFUSION, player);
        MESSAGE("Mimikyu became confused!");
        MESSAGE("Mimikyu is confused!");
        MESSAGE("It hurt itself in its confusion!");
        NOT HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_DISGUISE);
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_BUSTED);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu's Air Balloon will pop upon changing to its busted form")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_AIR_BALLOON].holdEffect == HOLD_EFFECT_AIR_BALLOON);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); Item(ITEM_AIR_BALLOON); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_AERIAL_ACE); }
    } SCENE {
        MESSAGE("Mimikyu floats in the air with its Air Balloon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AERIAL_ACE, opponent);
        NOT HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_DISGUISE);
        MESSAGE("Mimikyu's Air Balloon popped!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_BUSTED);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu takes damage from secondary damage without breaking the disguise")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_STEALTH_ROCK) == EFFECT_STEALTH_ROCK);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_STEALTH_ROCK); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, opponent);
        HP_BAR(player);
        MESSAGE("Pointed stones dug into Mimikyu!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_DISGUISED);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu takes damage from Rocky Helmet without breaking the disguise")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ROCKY_HELMET].holdEffect == HOLD_EFFECT_ROCKY_HELMET);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_ROCKY_HELMET); }
    } WHEN {
        TURN { MOVE(player, MOVE_AERIAL_ACE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AERIAL_ACE, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        HP_BAR(player);
<<<<<<< HEAD
        MESSAGE("Mimikyu was hurt by Foe Lopmonx's Rocky Helmet!");
=======
        MESSAGE("Mimikyu was hurt by the opposing Lopmonx's Rocky Helmet!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_DISGUISED);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu takes damage from Rough Skin without breaking the disguise")
{
    GIVEN {
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_CHOUMON) { Ability(ABILITY_ROUGH_SKIN); }
    } WHEN {
        TURN { MOVE(player, MOVE_AERIAL_ACE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AERIAL_ACE, player);
        HP_BAR(opponent);
        ABILITY_POPUP(opponent, ABILITY_ROUGH_SKIN);
        HP_BAR(player);
<<<<<<< HEAD
        MESSAGE("Mimikyu was hurt by Foe Choumon's Rough Skin!");
=======
        MESSAGE("Mimikyu was hurt by the opposing Choumon's Rough Skin!");
>>>>>>> upstream/master
    } THEN {
        EXPECT_EQ(player->species, SPECIES_MIMIKYU_DISGUISED);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu is ignored by Mold Breaker")
{
    GIVEN {
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_TYUTYUMON) { Ability(ABILITY_MOLD_BREAKER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_AERIAL_ACE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AERIAL_ACE, opponent);
        NOT ABILITY_POPUP(player, ABILITY_DISGUISE);
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu's types revert back to Ghost/Fairy when Disguise is broken")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_SHADOW_CLAW) == TYPE_GHOST);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SOAK); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
        TURN { MOVE(opponent, MOVE_SHADOW_CLAW); }
    } SCENE {
        MESSAGE("The opposing Lopmonx used Soak!");
        MESSAGE("Mimikyu transformed into the Water type!");
        MESSAGE("The opposing Lopmonx used Scratch!");
        ABILITY_POPUP(player, ABILITY_DISGUISE);
        MESSAGE("The opposing Lopmonx used Shadow Claw!");
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Disguised Mimikyu blocks a move after getting Gastro Acid Batton Passed")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_BATON_PASS) == EFFECT_BATON_PASS);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GASTRO_ACID); MOVE(player, MOVE_BATON_PASS); SEND_OUT(player, 1); }
        TURN { MOVE(opponent, MOVE_SHADOW_CLAW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GASTRO_ACID, opponent);
        MESSAGE("Lopmonx's Ability was suppressed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BATON_PASS, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHADOW_CLAW, opponent);
        ABILITY_POPUP(player, ABILITY_DISGUISE);
    }
}

SINGLE_BATTLE_TEST("Disguise does not break from a teammate's Wish")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_WISH) == EFFECT_WISH);
        PLAYER(SPECIES_GEREMON);
        PLAYER(SPECIES_MIMIKYU_DISGUISED) { Ability(ABILITY_DISGUISE); HP(219); MaxHP(220); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_WISH); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WISH, player);
        NOT ABILITY_POPUP(player, ABILITY_DISGUISE);
    }
}
