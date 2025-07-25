#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_KEE_BERRY].holdEffect == HOLD_EFFECT_KEE_BERRY);
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Kee Berry raises the holder's Defense by one stage when hit by a physical move")
{
    u16 move;

    PARAMETRIZE { move = MOVE_SWIFT; }
    PARAMETRIZE { move = MOVE_TACKLE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_KEE_BERRY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_TACKLE) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Using Kee Berry, the Defense of Foe Lopmonx rose!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Using Kee Berry, the Defense of Foe Lopmonx rose!");
=======
            MESSAGE("Using Kee Berry, the Defense of the opposing Lopmonx rose!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Using Kee Berry, the Defense of the opposing Lopmonx rose!");
>>>>>>> upstream/master
            }
        }
    } THEN {
        if (move == MOVE_TACKLE)
            EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Kee Berry raises the holder's Defense by two stages with Ripen when hit by a physical move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_APPLIN) { Item(ITEM_KEE_BERRY); Ability(ABILITY_RIPEN); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Using Kee Berry, the Defense of the opposing Applin sharply rose!");
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Kee Berry doesn't trigger if the item hold user used a physical move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_KEE_BERRY); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Using Kee Berry, the Defense of Lopmonx rose!");
        }
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Kee Berry doesn't trigger if partner was hit")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { Item(ITEM_KEE_BERRY); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentRight);
    } THEN {
        EXPECT(opponentRight->item == ITEM_KEE_BERRY);
    }
}
