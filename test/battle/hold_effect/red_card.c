#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
}

SINGLE_BATTLE_TEST("Red Card switches the attacker with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOTAMON);
        OPPONENT(SPECIES_CONOMON) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        MESSAGE("Foe Argomon_f was dragged out!");
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card switches the target with a random non-battler, non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_ARGOMON_F);
        OPPONENT(SPECIES_BOTAMON);
        OPPONENT(SPECIES_CONOMON) { HP(0); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        MESSAGE("Foe Argomon_f was dragged out!");
    } THEN {
        EXPECT(playerLeft->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if holder faints")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card activates after the last hit of a multi-hit move")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DOUBLE_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_KICK, opponent);
        HP_BAR(player);
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if knocked off")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by a move")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }
    ASSUME(MoveHasAdditionalEffect(MOVE_THIEF, MOVE_EFFECT_STEAL_ITEM) == TRUE);

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX) { Item(item); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THIEF, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
            }
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by Magician")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_FENNEKIN) { Ability(ABILITY_MAGICIAN); Item(item); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Fennekin!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Lopmonx held up its Red Card against Foe Fennekin!");
            }
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card activates for only the fastest target")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(3); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_EXVEEMON) { Speed(2); Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX) { Speed(5); }
        OPPONENT(SPECIES_EXVEEMON) { Speed(4); }
        OPPONENT(SPECIES_LOPMON) { Speed(1); }
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_ROCK_SLIDE);
            MOVE(opponentRight, MOVE_TACKLE, target: playerRight);
        }
    } SCENE {
        // Fastest target's Red Card activates.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        MESSAGE("Foe Lopmon was dragged out!");

        // Slower target's Red Card still able to activate on other battler.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
        MESSAGE("Exveemon held up its Red Card against Foe Exveemon!");
        MESSAGE("Foe Lopmonx was dragged out!");
    } THEN {
        EXPECT(playerLeft->item == ITEM_NONE);
        EXPECT(playerRight->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker is rooted")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMON);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_INGRAIN); }
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        MESSAGE("Foe Lopmonx anchored itself with its roots!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Exveemon held up its Red Card against Foe Exveemon!");
        }
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker has Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_PAWNMON_WHITE) { Ability(ABILITY_SUCTION_CUPS); }
        OPPONENT(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMON);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Lopmonx held up its Red Card against Foe Pawnmon_white!");
        MESSAGE("Foe Pawnmon_white anchors itself with Suction Cups!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Exveemon held up its Red Card against Foe Exveemon!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if switched by Dragon Tail")
{
    bool32 hasExveemon, activate;
    PARAMETRIZE { hasExveemon = TRUE; activate = FALSE; }
    PARAMETRIZE { hasExveemon = FALSE; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        if (hasExveemon) PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates and overrides U-turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_U_TURN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if attacker's Sheer Force applied")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = TRUE; }
    PARAMETRIZE { move = MOVE_STOMP; activate = FALSE; }

    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_CHUUMON) { Ability(ABILITY_SHEER_FORCE); }
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Chuumon!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Lopmonx held up its Red Card against Foe Chuumon!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates before Emergency Exit")
{
    GIVEN {
        PLAYER(SPECIES_GOLISOPOD) { MaxHP(100); HP(51); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_WIMPOD);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Golisopod held up its Red Card against Foe Lopmonx!");
        ABILITY_POPUP(player, ABILITY_EMERGENCY_EXIT);
        MESSAGE("Go! Wimpod!");
    }
}

SINGLE_BATTLE_TEST("Red Card is consumed after dragged out replacement has its Speed lowered by Sticky Web")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_STICKY_WEB); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        // 1st turn Sticky Web
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        // 2nd turn Red Card activation
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe Lopmonx held up its Red Card against Lopmonx!");
        MESSAGE("Exveemon was dragged out!");
        MESSAGE("Exveemon was caught in a Sticky Web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        // 3rd turn, Red Card was consumed, it can't trigger again
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Lopmonx held up its Red Card against Exveemon!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not cause the dragged out mon to lose hp due to it's held Life Orb")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_EXVEEMON) { Item(ITEM_LIFE_ORB); }
        OPPONENT(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe Lopmonx held up its Red Card against Lopmonx!");
        MESSAGE("Exveemon was dragged out!");
        NOT MESSAGE("Exveemon was hurt by its Life Orb!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if holder is switched in mid-turn")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { HP(1); Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_LOPMONX) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_EXVEEMON);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Lopmonx is switched out with the Eject Button!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Lopmonx held up its Red Card against Foe Lopmonx!");
        }
    }
}

// SINGLE_BATTLE_TEST("Red Card activates but fails if the attacker has Dynamaxed")
