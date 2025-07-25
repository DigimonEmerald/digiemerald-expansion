#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Cud Chew will activate Kee Berry effect again on the next turn")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_KEE_BERRY].holdEffect == HOLD_EFFECT_KEE_BERRY);
        ASSUME(GetMoveCategory(MOVE_SCRATCH) == DAMAGE_CATEGORY_PHYSICAL);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHUUMON_PALDEAN_COMBAT_BREED) { Ability(ABILITY_CUD_CHEW); Item(ITEM_KEE_BERRY); }
=======
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHUUMON_PALDEA_COMBAT) { Ability(ABILITY_CUD_CHEW); Item(ITEM_KEE_BERRY); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); }
        TURN { MOVE(player, MOVE_CELEBRATE);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ABILITY_POPUP(opponent, ABILITY_CUD_CHEW);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Cud Chew will activate Oran Berry effect again on the next turn")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ORAN_BERRY].holdEffect == HOLD_EFFECT_RESTORE_HP);
        ASSUME(gItemsInfo[ITEM_ORAN_BERRY].holdEffectParam == 10);
        ASSUME(GetMoveEffect(MOVE_DRAGON_RAGE) == EFFECT_FIXED_DAMAGE_ARG);
        ASSUME(GetMoveFixedDamage(MOVE_DRAGON_RAGE) == 40);
<<<<<<< HEAD
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHUUMON_PALDEAN_COMBAT_BREED) { MaxHP(60); HP(60); Ability(ABILITY_CUD_CHEW); Item(ITEM_ORAN_BERRY); }
=======
        PLAYER(SPECIES_LOPMONX);
        OPPONENT(SPECIES_CHUUMON_PALDEA_COMBAT) { MaxHP(60); HP(60); Ability(ABILITY_CUD_CHEW); Item(ITEM_ORAN_BERRY); }
>>>>>>> upstream/master
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_RAGE); }
        TURN { MOVE(player, MOVE_CELEBRATE);}
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ABILITY_POPUP(opponent, ABILITY_CUD_CHEW);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
    } THEN {
        EXPECT_EQ(opponent->hp, 40);
    }
}
