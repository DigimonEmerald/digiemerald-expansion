#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gSpeciesInfo[SPECIES_LABRAMON].types[0] == TYPE_DARK);
    ASSUME(gMovesInfo[MOVE_CONFUSE_RAY].category == DAMAGE_CATEGORY_STATUS);
}

SINGLE_BATTLE_TEST("Prankster-affected moves don't affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_LABRAMON);
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Labramon…");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves don't affect Dark-type Pokémon after they switch-in")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        PLAYER(SPECIES_LABRAMON);
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Labramon…");
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves affect Ally Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_LABRAMON);
        OPPONENT(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CONFUSE_RAY, target: playerRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
        NOT MESSAGE("It doesn't affect Labramon…");
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves called via Assist don't affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_LABRAMON);
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
        OPPONENT(SPECIES_LOPMONX) { Moves(MOVE_CONFUSE_RAY); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_ASSIST); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("It doesn't affect Labramon…");
    }
}

// Tested on Showdown, even though Bulbapedia says otherwise.
DOUBLE_BATTLE_TEST("Prankster-affected moves called via Instruct do not affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_BUCCHIEMON_GREEN) { Speed(20); Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_LOPMONX) { Speed(10);}
        OPPONENT(SPECIES_LABRAMON) { Speed(1); }
        OPPONENT(SPECIES_LOPMONX) { Speed(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CONFUSE_RAY, target: opponentLeft);
               MOVE(playerRight, MOVE_INSTRUCT, target: playerLeft);
        }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
<<<<<<< HEAD
        MESSAGE("It doesn't affect Foe Labramon…");
        MESSAGE("Lopmonx used Instruct!");
        MESSAGE("Bucchiemon_green used Confuse Ray!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
        MESSAGE("It doesn't affect Foe Labramon…");
=======
        MESSAGE("It doesn't affect the opposing Umbreon…");
        MESSAGE("Wobbuffet used Instruct!");
        MESSAGE("Volbeat used Confuse Ray!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerLeft);
        MESSAGE("It doesn't affect the opposing Umbreon…");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Prankster increases the priority of moves by 1")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Speed(10); }
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Speed(5); Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CONFUSE_RAY); MOVE(player, MOVE_CELEBRATE, WITH_RNG(RNG_CONFUSION, FALSE)); } // RNG_CONFUSION so that Wobb doesn't hit itself.
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    }
}

DOUBLE_BATTLE_TEST("Moves called via Prankster-affected After you affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_BUCCHIEMON_GREEN) { Speed(1); Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_LOPMONX) { Speed(1);}
        OPPONENT(SPECIES_LABRAMON) { Speed(10); }
        OPPONENT(SPECIES_LOPMONX) { Speed(10); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_AFTER_YOU, target: playerRight);
               MOVE(playerRight, MOVE_CONFUSE_RAY, target: opponentLeft);
        }
    } SCENE {
        MESSAGE("Bucchiemon_green used After You!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_AFTER_YOU, playerLeft);
        MESSAGE("Lopmonx used Confuse Ray!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, playerRight);
<<<<<<< HEAD
        MESSAGE("Foe Labramon became confused!");
=======
        MESSAGE("The opposing Umbreon became confused!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Prankster is blocked by Quick Guard in Gen5+")
{
    GIVEN {
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_QUICK_GUARD); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_GUARD, player);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, opponent);
        MESSAGE("Lopmonx protected itself!");
    }
}

DOUBLE_BATTLE_TEST("Prankster-affected moves that target all Pokémon are successful regardless of the presence of Dark-type Pokémon")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_CAPTIVATE].target == MOVE_TARGET_BOTH);
        PLAYER(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_LABRAMON);
        OPPONENT(SPECIES_LOPMONX);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CAPTIVATE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CAPTIVATE, playerLeft);
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves can still be bounced back by Dark-types using Magic Coat")
{
    GIVEN {
        PLAYER(SPECIES_LABRAMON);
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
<<<<<<< HEAD
        MESSAGE("Foe Bucchiemon_green used Confuse Ray!");
        MESSAGE("Foe Bucchiemon_green's Confuse Ray was bounced back by MAGIC COAT!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("Foe Bucchiemon_green became confused!");
=======
        MESSAGE("The opposing Volbeat used Confuse Ray!");
        MESSAGE("Umbreon bounced the Confuse Ray back!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("The opposing Volbeat became confused!");
>>>>>>> upstream/master
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves which are reflected by Magic Coat can affect Dark-type Pokémon, unless the Pokémon that bounced the move also has Prankster")
{
    u16 blgargomonAbility;

    PARAMETRIZE { blgargomonAbility = ABILITY_PRANKSTER; }
    PARAMETRIZE { blgargomonAbility = ABILITY_KEEN_EYE; }

    GIVEN {
        PLAYER(SPECIES_BLGARGOMON) { Ability(blgargomonAbility); }
        OPPONENT(SPECIES_LALAMON) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
        MESSAGE("Blgargomon used Magic Coat!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
<<<<<<< HEAD
        MESSAGE("Foe Lalamon used Confuse Ray!");
        MESSAGE("Foe Lalamon's Confuse Ray was bounced back by MAGIC COAT!");
        if (blgargomonAbility == ABILITY_PRANKSTER) {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
            MESSAGE("It doesn't affect Foe Lalamon…");
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
            MESSAGE("Foe Lalamon became confused!");
=======
        MESSAGE("The opposing Murkrow used Confuse Ray!");
        MESSAGE("Sableye bounced the Confuse Ray back!");
        if (sableyeAbility == ABILITY_PRANKSTER) {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
            MESSAGE("It doesn't affect the opposing Murkrow…");
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
            MESSAGE("The opposing Murkrow became confused!");
>>>>>>> upstream/master
        }
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves can still be bounced back by a Dark-type with Magic Bounce")
{
    GIVEN {
        PLAYER(SPECIES_EXERMON) { Item(ITEM_EXERMONITE); }
        OPPONENT(SPECIES_BUCCHIEMON_GREEN) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Bucchiemon_green's Confuse Ray was bounced back by Exermon's Magic Bounce!");
=======
        MESSAGE("The opposing Volbeat's Confuse Ray was bounced back by Absol's Magic Bounce!");
>>>>>>> upstream/master
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
    }
}

SINGLE_BATTLE_TEST("Prankster-affected moves that are bounced back by Magic Bounce can affect Dark-type Pokémon")
{
    GIVEN {
        PLAYER(SPECIES_EXERMON) { Item(ITEM_EXERMONITE); }
        OPPONENT(SPECIES_LALAMON) { Ability(ABILITY_PRANKSTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(opponent, MOVE_CONFUSE_RAY); }
    } SCENE {
<<<<<<< HEAD
        MESSAGE("Foe Lalamon's Confuse Ray was bounced back by Exermon's Magic Bounce!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("Foe Lalamon became confused!");
=======
        MESSAGE("The opposing Murkrow's Confuse Ray was bounced back by Absol's Magic Bounce!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CONFUSE_RAY, player);
        MESSAGE("The opposing Murkrow became confused!");
>>>>>>> upstream/master
    }
}

TO_DO_BATTLE_TEST("Prankster-affected moves called via Nature Power don't affect Dark-type Pokémon");
TO_DO_BATTLE_TEST("Prankster increases the priority of status Z-Moves by 1");
TO_DO_BATTLE_TEST("Prankster increases the priority of Extreme Evoboost by 1");
