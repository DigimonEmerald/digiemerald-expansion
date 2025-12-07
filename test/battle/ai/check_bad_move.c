#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("AI will not try to lower opposing stats if target is protected by it's ability")
{
    enum Ability ability;
    u32 species, move;

    PARAMETRIZE { ability = ABILITY_SPEED_BOOST;  species = SPECIES_SYAKOMON_X; move = MOVE_SCARY_FACE; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER; species = SPECIES_VIXIMON;  move = MOVE_GROWL; }
    PARAMETRIZE { ability = ABILITY_BIG_PECKS;    species = SPECIES_KETOMON;  move = MOVE_SCREECH; }
    PARAMETRIZE { ability = ABILITY_ILLUMINATE;   species = SPECIES_BLKGUILMON;  move = MOVE_SAND_ATTACK; }
    PARAMETRIZE { ability = ABILITY_KEEN_EYE;     species = SPECIES_KETOMON;  move = MOVE_SAND_ATTACK; }
    PARAMETRIZE { ability = ABILITY_CONTRARY;     species = SPECIES_D_DEVIMON;   move = MOVE_NOBLE_ROAR; }
    PARAMETRIZE { ability = ABILITY_CLEAR_BODY;   species = SPECIES_FUGAMON;  move = MOVE_NOBLE_ROAR; }

    GIVEN {
        WITH_CONFIG(CONFIG_ILLUMINATE_EFFECT, GEN_9);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(species) { Ability(ability); }
        OPPONENT(SPECIES_LOPMON_X) { Moves(MOVE_TACKLE, move); }
    } WHEN {
        TURN { SCORE_LT_VAL(opponent, move, AI_SCORE_DEFAULT); }
    }
}


AI_DOUBLE_BATTLE_TEST("AI will not try to lower opposing stats if target is protected by Flower Veil")
{
    u16 move;

    PARAMETRIZE { move = MOVE_SCARY_FACE; }
    PARAMETRIZE { move = MOVE_GROWL; }
    PARAMETRIZE { move = MOVE_SCREECH; }
    PARAMETRIZE { move = MOVE_SAND_ATTACK; }
    PARAMETRIZE { move = MOVE_SAND_ATTACK; }
    PARAMETRIZE { move = MOVE_NOBLE_ROAR; }
    PARAMETRIZE { move = MOVE_NOBLE_ROAR; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_OMNISCIENT);
        PLAYER(SPECIES_COMFEY) { Ability(ABILITY_FLOWER_VEIL); }
        PLAYER(SPECIES_ARGOMON);
        OPPONENT(SPECIES_LOPMON_X) { Moves(MOVE_TACKLE, move); }
        OPPONENT(SPECIES_LOPMON_X);
    } WHEN {
        TURN { SCORE_LT_VAL(opponentLeft, move, AI_SCORE_DEFAULT, target: playerRight); }
    }
}
