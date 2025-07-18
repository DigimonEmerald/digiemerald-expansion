#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
    ASSUME(GetMoveCategory(MOVE_TRI_ATTACK) == DAMAGE_CATEGORY_SPECIAL);
}

SINGLE_BATTLE_TEST("Download raises Attack if player has lower Def than Sp. Def", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_TRACE; }
    PARAMETRIZE { ability = ABILITY_DOWNLOAD; }
    GIVEN {
        PLAYER(SPECIES_LOPMONX) { Defense(100); SpDefense(200); }
        OPPONENT(SPECIES_DOKUNEMON) { Ability(ability); Attack(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        if (ability == ABILITY_DOWNLOAD)
        {
            ABILITY_POPUP(opponent, ABILITY_DOWNLOAD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Dokunemon's Download raised its Attack!");
=======
            MESSAGE("The opposing Dokunemon's Download raised its Attack!");
>>>>>>> upstream/master
        }
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Download raises Sp.Attack if enemy has lower Sp. Def than Def", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_TRACE; }
    PARAMETRIZE { ability = ABILITY_DOWNLOAD; }
    GIVEN {
        PLAYER(SPECIES_DOKUNEMON) { Ability(ability); SpAttack(100); }
        OPPONENT(SPECIES_LOPMONX) { Defense(200); SpDefense(100); }
    } WHEN {
        TURN { MOVE(player, MOVE_TRI_ATTACK); }
    } SCENE {
        if (ability == ABILITY_DOWNLOAD)
        {
            ABILITY_POPUP(player, ABILITY_DOWNLOAD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Dokunemon's Download raised its Sp. Atk!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Download doesn't activate if target hasn't been sent out yet", s16 damagePhysical, s16 damageSpecial)
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_TRACE; }
    PARAMETRIZE { ability = ABILITY_DOWNLOAD; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_EXPLOSION) == EFFECT_EXPLOSION);
        PLAYER(SPECIES_LOPMONX) { Speed(100); }
        PLAYER(SPECIES_DOKUNEMON) { Ability(ability); Defense(400); SpDefense(300); Speed(300); Attack(100); }
        OPPONENT(SPECIES_LOPMONX) { HP(1); Speed(100); }
        OPPONENT(SPECIES_RENAMON_X) { Ability(ability); Defense(100); SpDefense(200); Speed(200); }
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_TRI_ATTACK); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        // Everyone faints.

        SEND_IN_MESSAGE("Dokunemon");
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_DOWNLOAD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Dokunemon's Download raised its Attack!");
        }
        MESSAGE("2 sent out Renamon_x!");

        if (ability == ABILITY_DOWNLOAD)
        {
            ABILITY_POPUP(opponent, ABILITY_DOWNLOAD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
<<<<<<< HEAD
            MESSAGE("Foe Renamon_x's Download raised its Sp. Atk!");
=======
            MESSAGE("The opposing Renamon_x's Download raised its Sp. Atk!");
>>>>>>> upstream/master
        }

        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRI_ATTACK, opponent);
        HP_BAR(player, captureDamage: &results[i].damageSpecial);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damageSpecial, Q_4_12(1.5), results[1].damageSpecial);
    }
}

DOUBLE_BATTLE_TEST("Download raises Sp.Attack if enemies have lower total Sp. Def than Def", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_TRACE; }
    PARAMETRIZE { ability = ABILITY_DOWNLOAD; }
    GIVEN {
        PLAYER(SPECIES_DOKUNEMON) { Ability(ability); SpAttack(100); }
        PLAYER(SPECIES_EXVEEMON);
        OPPONENT(SPECIES_LOPMONX) { Defense(200); SpDefense(100); }
        OPPONENT(SPECIES_LOPMONX) { Defense(100); SpDefense(150); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TRI_ATTACK, target: opponentLeft ); }
    } SCENE {
        if (ability == ABILITY_DOWNLOAD)
        {
            ABILITY_POPUP(playerLeft, ABILITY_DOWNLOAD);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Dokunemon's Download raised its Sp. Atk!");
        }
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
