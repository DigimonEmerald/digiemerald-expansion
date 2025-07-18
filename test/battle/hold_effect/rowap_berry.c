#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_ROWAP_BERRY].holdEffect == HOLD_EFFECT_ROWAP_BERRY);
}

SINGLE_BATTLE_TEST("Rowap Berry causes the attacker to lose 1/8 of its max HP if a special move was used")
{
    s16 damage;
    u16 move;

    PARAMETRIZE { move = MOVE_SWIFT; }
    PARAMETRIZE { move = MOVE_TACKLE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_ROWAP_BERRY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_SWIFT) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            HP_BAR(player, captureDamage: &damage);
<<<<<<< HEAD
            MESSAGE("Lopmonx was hurt by Foe Lopmonx's Rowap Berry!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Lopmonx was hurt by Foe Lopmonx's Rowap Berry!");
=======
            MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Rowap Berry!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Rowap Berry!");
>>>>>>> upstream/master
            }
        }
    } THEN {
        if (move == MOVE_SWIFT)
            EXPECT_EQ(player->maxHP / 8, damage);
    }
}

SINGLE_BATTLE_TEST("Rowap Berry is not triggered by a physical move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_ROWAP_BERRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
<<<<<<< HEAD
            MESSAGE("Lopmonx was hurt by Foe Lopmonx's Rowap Berry!");
=======
            MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Rowap Berry!");
>>>>>>> upstream/master
        }
    }
}
