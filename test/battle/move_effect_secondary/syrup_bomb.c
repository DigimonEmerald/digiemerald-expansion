#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_SYRUP_BOMB, MOVE_EFFECT_SYRUP_BOMB) == TRUE);
}

SINGLE_BATTLE_TEST("Syrup Bomb covers the foe in sticky syrup for 3 turns")
{
    u8 j;

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
        for (j = 0; j < 4; j++)
            TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Lopmonx's Speed fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Sticky Syrup isn't applied again if the target is already covered")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        NOT MESSAGE("Foe Lopmonx got covered in sticky syrup!");
    }
}

SINGLE_BATTLE_TEST("Syrup Bomb is prevented by Bulletproof")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHESPIN) { Ability(ABILITY_BULLETPROOF); }
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_BULLETPROOF);
        MESSAGE("Foe Chespin's Bulletproof blocks Syrup Bomb!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Sticky Syrup speed reduction is prevented by Clear Body, White Smoke or Full Metal Body")
{
    u32 species;
    u32 ability;

    PARAMETRIZE { species = SPECIES_FUGAMON; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE { species = SPECIES_CLOCKMON; ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
        TURN {}
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        if (species == SPECIES_FUGAMON)
        {
            MESSAGE("Foe Fugamon got covered in sticky syrup!");
            ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Fugamon's Clear Body prevents stat loss!");
            NONE_OF {
                MESSAGE("Foe Fugamon's Speed fell!");
            }
        }
        else if (species == SPECIES_CLOCKMON)
        {
            MESSAGE("Foe Clockmon got covered in sticky syrup!");
            ABILITY_POPUP(opponent, ABILITY_WHITE_SMOKE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Clockmon's White Smoke prevents stat loss!");
            NONE_OF {
                MESSAGE("Foe Clockmon's Speed fell!");
            }
        }
        else if (species == SPECIES_SOLGALEO)
        {
            MESSAGE("Foe Solgaleo got covered in sticky syrup!");
            ABILITY_POPUP(opponent, ABILITY_FULL_METAL_BODY);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Solgaleo's Full Metal Body prevents stat loss!");
            NONE_OF {
                MESSAGE("Foe Solgaleo's Speed fell!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Sticky Syrup speed reduction is prevented by Clear Amulet")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_CLEAR_AMULET); }
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        MESSAGE("Foe Lopmonx's Clear Amulet prevents its stats from being lowered!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Lopmonx's Speed fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Sticky syrup will not decrease speed further then minus six")
{
    u8 j;

    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        for (j = 0; j < 3; j++)
            TURN { MOVE(player, MOVE_SCARY_FACE); }
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
        TURN {}
    } SCENE {
        for (j = 0; j < 3; j++) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SCARY_FACE, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed won't go lower!");
        NONE_OF {
            MESSAGE("Foe Lopmonx's Speed fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Sticky Syrup is removed when the user switches out")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
        MESSAGE("Foe Lopmonx's Speed fell!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Lopmonx's Speed fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Sticky Syrup is removed when the user faints")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(player, MOVE_SYRUP_BOMB);
               MOVE(opponent, MOVE_TACKLE);
               SEND_OUT(player, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SYRUP_BOMB, player);
        HP_BAR(opponent);
        MESSAGE("Foe Lopmonx got covered in sticky syrup!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player);
        MESSAGE("Lopmonx fainted!");
        MESSAGE("Go! Exveemon!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SYRUP_BOMB_SPEED_DROP, opponent);
            MESSAGE("Foe Lopmonx's Speed fell!");
        }
    }
}