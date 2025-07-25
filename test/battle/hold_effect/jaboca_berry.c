#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_JABOCA_BERRY].holdEffect == HOLD_EFFECT_JABOCA_BERRY);
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Jaboca Berry causes the attacker to lose 1/8 of its max HP if a physical move was used")
{
    s16 damage;
    u16 move;

    PARAMETRIZE { move = MOVE_SWIFT; }
    PARAMETRIZE { move = MOVE_TACKLE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_JABOCA_BERRY); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_TACKLE) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            HP_BAR(player, captureDamage: &damage);
<<<<<<< HEAD
            MESSAGE("Lopmonx was hurt by Foe Lopmonx's Jaboca Berry!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Lopmonx was hurt by Foe Lopmonx's Jaboca Berry!");
=======
            MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Jaboca Berry!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
                MESSAGE("Lopmonx was hurt by the opposing Lopmonx's Jaboca Berry!");
>>>>>>> upstream/master
            }
        }
    } THEN {
        if (move == MOVE_TACKLE)
            EXPECT_EQ(player->maxHP / 8, damage);
    }
}

SINGLE_BATTLE_TEST("Jaboca Berry tirggers before Bug Bite can steal it")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUG_BITE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_JABOCA_BERRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_BUG_BITE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BUG_BITE, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        HP_BAR(player);
<<<<<<< HEAD
        MESSAGE("Wyanut was hurt by Foe Lopmonx's Jaboca Berry!");
        NOT MESSAGE("Exveemon stole and ate Foe Lopmonx's Jaboca Berry!");
=======
        MESSAGE("Wyanut was hurt by the opposing Lopmonx's Jaboca Berry!");
        NOT MESSAGE("Exveemon stole and ate the opposing its target's Jaboca Berry!");
>>>>>>> upstream/master
    }
}
