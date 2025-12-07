#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_MARANGA_BERRY].holdEffect == HOLD_EFFECT_MARANGA_BERRY);
}

SINGLE_BATTLE_TEST("Maranga Berry raises the holder's Sp. Def by one stage when hit by a special move")
{
    u16 move = MOVE_NONE;
    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_MARANGA_BERRY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_SWIFT) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Using Maranga Berry, the Sp. Def of Foe Lopmonx rose!");
=======
            MESSAGE("Using Maranga Berry, the Sp. Def of the opposing Lopmonx rose!");
>>>>>>> upstream/master
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
                MESSAGE("Using Maranga Berry, the Sp. Def of Foe Lopmonx rose!");
=======
                MESSAGE("Using Maranga Berry, the Sp. Def of the opposing Lopmonx rose!");
>>>>>>> upstream/master
            }
        }
    } THEN {
        if (move == MOVE_SWIFT)
            EXPECT_EQ(opponent->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Maranga Berry raises the holder's Sp. Def by two stages with Ripen when hit by a special move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_APPLIN) { Item(ITEM_MARANGA_BERRY); Ability(ABILITY_RIPEN); }
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Using Maranga Berry, the Sp. Def of the opposing Applin sharply rose!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Maranga Berry doesn't trigger if the item hold user used a special move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_MARANGA_BERRY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Using Maranga Berry, the Sp. Def of Applin sharply rose!");
        }
    } THEN {
        EXPECT_EQ(player->statStages[STAT_SPDEF], DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Maranga Berry doesn't trigger if partner was hit")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_MARANGA_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
    } THEN {
        EXPECT(opponentRight->item == ITEM_MARANGA_BERRY);
    }
}

SINGLE_BATTLE_TEST("Maranga Berry doesn't trigger if the move was boosted by Sheer Force")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_MARANGA_BERRY); }
        OPPONENT(SPECIES_NIDOKING) { Ability(ABILITY_SHEER_FORCE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_FIRE_PUNCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIRE_PUNCH, opponent);
        HP_BAR(player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}
