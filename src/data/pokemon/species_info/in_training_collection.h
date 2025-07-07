#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen2[] =
{
#endif

[SPECIES_ARCADIAMON_IT] =
    {
        .baseHP        = 25,
        .baseAttack    = 33,
        .baseDefense   = 30,
        .baseSpeed     = 35,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_IT,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_IT,
        .categoryName = _("Ultimate"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Arcadiamon is an artificial digimon \n"
            "that was created to make the ultimate\n"
            "digimon. Despite only being In-Training,\n"
            "it has incredible physical abilities."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arcadiamon_it,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 38),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Arcadiamon_it,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Arcadiamon_it,
        .shinyPalette = gMonShinyPalette_Arcadiamon_it,
        .iconSprite = gMonIcon_Arcadiamon_it,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Arcadiamon_itF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_Arcadiamon_itF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Arcadiamon_it)
        OVERWORLD(
            sPicTable_Arcadiamon_it,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arcadiamon_it,
            gShinyOverworldPalette_Arcadiamon_it
        )
        OVERWORLD_FEMALE(
            sPicTable_Arcadiamon_itF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sArcadiamon_itLevelUpLearnset,
        .teachableLearnset = sArcadiamon_itTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 12, SPECIES_ARCADIAMON_ROOKIE}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IMPMON_X] =
    {
        .baseHP        = 53,
        .baseAttack    = 56,
        .baseDefense   = 51,
        .baseSpeed     = 52,
        .baseSpAttack  = 67,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Impmon"),
        .cryId = CRY_IMPMON_X,
        .natDexNum = NATIONAL_DEX_IMPMON_X,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Although not much changes physically with\n"
            "Impmon X, it is still a stronger opponent\n"
            "due to have more confidence in itself. The\n"
            "eyepatch is because of its chuuni persona."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Impmon_x,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Impmon_x,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Impmon_x,
        .shinyPalette = gMonShinyPalette_Impmon_x,
        .iconSprite = gMonIcon_Impmon_x,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Impmon_x)
        OVERWORLD(
            sPicTable_Impmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Impmon_x,
            gShinyOverworldPalette_Impmon_x
        )
        .levelUpLearnset = sImpmon_xLevelUpLearnset,
        .teachableLearnset = sImpmon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ALLOMON_X}),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_FAMILY_ARGOMON_IT
    [SPECIES_ARGOMON_IT] =
    {
        .baseHP        = 19,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 35,
        .baseSpAttack  = 21,
        .baseSpDefense = 16,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_IT,
        .natDexNum = NATIONAL_DEX_ARGOMON_IT,
        .categoryName = _("Algorithm"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Argomon is often seen attached to places \n"
            "where large volumes of data flow. They \n"
            "use the mouth on it's underside to \n"
            "consume that data."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_it,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Argomon_it,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Argomon_it,
        .shinyPalette = gMonShinyPalette_Argomon_it,
        .iconSprite = gMonIcon_Argomon_it,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(7, -11, SHADOW_SIZE_M)
        FOOTPRINT(Argomon_it)
        OVERWORLD(
            sPicTable_Argomon_it,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Argomon_it,
            gShinyOverworldPalette_Argomon_it
        )
        .levelUpLearnset = sArgomon_itLevelUpLearnset,
        .teachableLearnset = sArgomon_itTeachableLearnset,
        .eggMoveLearnset = sArgomon_itEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_AGUMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_LABRAMON, CONDITIONS({IF_SPD, 11})},
                                {EVO_LEVEL, 0, SPECIES_GHOSTMON, CONDITIONS({IF_SPDEF, 10})},
                                {EVO_LEVEL, 0, SPECIES_WORMMON, CONDITIONS({IF_HP, 25})},
                                {EVO_LEVEL, 11, SPECIES_ARGOMON_ROOKIE}),
    },

    [SPECIES_BABYDMON] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 29,
        .baseSpAttack  = 33,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Babydmon"),
        .cryId = CRY_BABYDMON,
        .natDexNum = NATIONAL_DEX_BABYDMON,
        .categoryName = _("Baby Dragon"),
        .height = 7,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Only discovered recently, Babydmon is\n"
            "likely to contain's evolutionairy ties\n"
            "ancient and long lost Digimon. It is\n"
            "very ferocious despite it's size."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Babydmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Babydmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Babydmon,
        .shinyPalette = gMonShinyPalette_Babydmon,
        .iconSprite = gMonIcon_Babydmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 2, SHADOW_SIZE_L)
        FOOTPRINT(Babydmon)
        OVERWORLD(
            sPicTable_Babydmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Babydmon,
            gShinyOverworldPalette_Babydmon
        )
        .levelUpLearnset = sBabydmonLevelUpLearnset,
        .teachableLearnset = sBabydmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_AGUMON_EXPERT, CONDITIONS({IF_SPATK, 19})},
                                {EVO_LEVEL, 0, SPECIES_HACKMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_GUMDRAMON, CONDITIONS({IF_SPD, 16})},
                                {EVO_LEVEL, 0, SPECIES_AGUMON_06, CONDITIONS({IF_HP, 33})},
                                {EVO_LEVEL, 14, SPECIES_DRACOMON}),
    },
#endif //P_FAMILY_ARGOMON_IT

#if P_FAMILY_BIBIMON
    [SPECIES_BIBIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 28,
        .baseDefense   = 26,
        .baseSpeed     = 20,
        .baseSpAttack  = 24,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Bibimon"),
        .cryId = CRY_BIBIMON,
        .natDexNum = NATIONAL_DEX_BIBIMON,
        .categoryName = _("Heart Rate"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Bibimon lacks composure and is often \n"
            "seen stumbling around. This is because\n"
            "it is not yet used to having four \n"
            "limbs yet."),
        .pokemonScale = 370,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Bibimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 35),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Bibimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Bibimon,
        .shinyPalette = gMonShinyPalette_Bibimon,
        .iconSprite = gMonIcon_Bibimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Bibimon)
        OVERWORLD(
            sPicTable_Bibimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bibimon,
            gShinyOverworldPalette_Bibimon
        )
        .levelUpLearnset = sBibimonLevelUpLearnset,
        .teachableLearnset = sBibimonTeachableLearnset,
        .eggMoveLearnset = sBibimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KUDAMON, CONDITIONS({IF_SPDEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_SHOUTMON, CONDITIONS({IF_SPATK, 13})},
                                {EVO_LEVEL, 12, SPECIES_PULSEMON}),
    },

    [SPECIES_BOSAMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 29,
        .baseDefense   = 28,
        .baseSpeed     = 24,
        .baseSpAttack  = 23,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bosamon"),
        .cryId = CRY_BOSAMON,
        .natDexNum = NATIONAL_DEX_BOSAMON,
        .categoryName = _("Big Ear"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Unlike it's younger self, Bosamon has\n"
            "grown out it's bangs and it's shy \n"
            "personality has become calm instead.\n"
            "It's now has even greater hearing."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Bosamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 16,
        .backPic = gMonBackPic_Bosamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bosamon,
        .shinyPalette = gMonShinyPalette_Bosamon,
        .iconSprite = gMonIcon_Bosamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 18, SHADOW_SIZE_M)
        FOOTPRINT(Bosamon)
        OVERWORLD(
            sPicTable_Bosamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bosamon,
            gShinyOverworldPalette_Bosamon
        )
        .levelUpLearnset = sBosamonLevelUpLearnset,
        .teachableLearnset = sBosamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_DRACMON, CONDITIONS({IF_SPATK, 13})},
                                {EVO_LEVEL, 12, SPECIES_ANGORAMON}),
    },
#endif //P_FAMILY_BIBIMON

#if P_FAMILY_BUDMON

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define BUKAMON_EXP_YIELD 149
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define BUKAMON_EXP_YIELD 142
#else
    #define BUKAMON_EXP_YIELD 153
#endif

    [SPECIES_BUDMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 28,
        .baseDefense   = 24,
        .baseSpeed     = 21,
        .baseSpAttack  = 27,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Budmon"),
        .cryId = CRY_BUDMON,
        .natDexNum = NATIONAL_DEX_BUDMON,
        .categoryName = _("Poison Seed"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Budmon is made up of the data from \n"
            "various poisonous plants from the\n"
            "digital world. It usually drifts \n"
            "through the air by its leaf."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Budmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Budmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Budmon,
        .shinyPalette = gMonShinyPalette_Budmon,
        .iconSprite = gMonIcon_Budmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Budmon)
        OVERWORLD(
            sPicTable_Budmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Budmon,
            gShinyOverworldPalette_Budmon
        )
        .levelUpLearnset = sBudmonLevelUpLearnset,
        .teachableLearnset = sBudmonTeachableLearnset,
        .eggMoveLearnset = sBudmonEggMoveLearnset,
        .formSpeciesIdTable = sBudmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_TOYAGUMON, CONDITIONS({IF_SPD, 14})},
                                {EVO_LEVEL, 0, SPECIES_DOKUNEMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_PALMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_MUSHROOMON, CONDITIONS({IF_HP, 32})},
                                {EVO_LEVEL, 14, SPECIES_LALAMON}),
    },

    [SPECIES_BUKAMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 24,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 27,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bukamon"),
        .cryId = CRY_BUKAMON,
        .natDexNum = NATIONAL_DEX_BUKAMON,
        .categoryName = _("Seal"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although Bukamon looks like an aquatic\n"
            "dinosaur, it currently does not have\n"
            "any relation to Dinosaur Digimon. It\n"
            "is also a very shy Digimon."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bukamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        .backPic = gMonBackPic_Bukamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bukamon,
        .shinyPalette = gMonShinyPalette_Bukamon,
        .iconSprite = gMonIcon_Bukamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Bukamon)
        OVERWORLD(
            sPicTable_Bukamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bukamon,
            gShinyOverworldPalette_Bukamon
        )
        .levelUpLearnset = sBukamonLevelUpLearnset,
        .teachableLearnset = sBukamonTeachableLearnset,
        .formSpeciesIdTable = sBukamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_YUKIAGUMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_CRABMON, CONDITIONS({IF_DEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_OTAMAMON, CONDITIONS({IF_SPDEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_BETAMON, CONDITIONS({IF_SPD, 15})},
                                {EVO_LEVEL, 13, SPECIES_GOMAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_BUDMON_ALOLA] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 81,
        .evYield_Speed = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Budmon"),
        .cryId = CRY_BUDMON,
        .natDexNum = NATIONAL_DEX_BUDMON,
        .categoryName = _("Mole"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "The metal-rich geology of its habitat\n"
            "caused it to develop steel whiskers on its\n"
            "head that change shape depending on its\n"
            "mood and when communicating with others."),
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BudmonAlola,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BudmonAlola,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BudmonAlola,
        .shinyPalette = gMonShinyPalette_BudmonAlola,
        .iconSprite = gMonIcon_BudmonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Budmon)
        OVERWORLD(
            sPicTable_BudmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BudmonAlola,
            gShinyOverworldPalette_BudmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sBudmonAlolaLevelUpLearnset,
        .teachableLearnset = sBudmonAlolaTeachableLearnset,
        .eggMoveLearnset = sBudmonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sBudmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BUKAMON_ALOLA}),
    },

    [SPECIES_BUKAMON_ALOLA] =
    {
        .baseHP        = 35,
        .baseAttack    = 62,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_GROUND, TYPE_STEEL),
        .catchRate = 50,
        .expYield = BUKAMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Bukamon"),
        .cryId = CRY_BUKAMON,
        .natDexNum = NATIONAL_DEX_BUKAMON,
        .categoryName = _("Mole"),
        .height = 7,
        .weight = 666,
        .description = COMPOUND_STRING(
            "Their beautiful, metallic whiskers create\n"
            "a sort of protective helmet on\n"
            "heir heads, and they also function\n"
            "as highly precise sensors."),
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BukamonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BukamonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BukamonAlola,
        .shinyPalette = gMonShinyPalette_BukamonAlola,
        .iconSprite = gMonIcon_BukamonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Bukamon)
        OVERWORLD(
            sPicTable_BukamonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BukamonAlola,
            gShinyOverworldPalette_BukamonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sBukamonAlolaLevelUpLearnset,
        .teachableLearnset = sBukamonAlolaTeachableLearnset,
        .formSpeciesIdTable = sBukamonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_BUDMON

#if P_FAMILY_CALUMON
    [SPECIES_CALUMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 16,
        .baseSpeed     = 28,
        .baseSpAttack  = 33,
        .baseSpDefense = 32,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_UKNOWN,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE }, // DIGI-ENTELECHEIA
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Evolution"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Calumon is a digimon shrouded in \n"
            "mystery. Current research points to\n"
            "the possibility that it is \n"
            "digivolution given form."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Calumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Calumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Calumon,
        .shinyPalette = gMonShinyPalette_Calumon,
        .iconSprite = gMonIcon_Calumon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_Calumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Calumon,
            gShinyOverworldPalette_Calumon
        )
        .levelUpLearnset = sCalumonLevelUpLearnset,
        .teachableLearnset = sCalumonTeachableLearnset,
        .eggMoveLearnset = sCalumonEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .formChangeTable = sCalumonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SALAMON, CONDITIONS({IF_SPATK, 11})}),
    },

    [SPECIES_CHAPMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 26,
        .baseSpAttack  = 25,
        .baseSpDefense = 27,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chapmon"),
        .cryId = CRY_CHAPMON,
        .natDexNum = NATIONAL_DEX_CHAPMON,
        .categoryName = _("Kappa"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Chapmon refuses to live in water that\n"
            "isn't clear, this makes it a very rare\n"
            "digimon. When it sleeps, it will only \n"
            "poke it's face out of the water surface."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chapmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Chapmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Chapmon,
        .shinyPalette = gMonShinyPalette_Chapmon,
        .iconSprite = gMonIcon_Chapmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Chapmon)
        OVERWORLD(
            sPicTable_Chapmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chapmon,
            gShinyOverworldPalette_Chapmon
        )
        .levelUpLearnset = sChapmonLevelUpLearnset,
        .teachableLearnset = sChapmonTeachableLearnset,
        .formSpeciesIdTable = sChapmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KUDAMON_06, CONDITIONS({IF_SPDEF, 17})},
                                {EVO_LEVEL, 0, SPECIES_ELECMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_FALCOMON_06, CONDITIONS({IF_SPD, 16})},
                                {EVO_LEVEL, 0, SPECIES_BETAMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 15, SPECIES_KAMEMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_CALUMON_ALOLA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It's accustomed to luxury because it used\n"
            "to live with Alolan royalty. Highly smart\n"
            "and proud, it's famously difficult to\n"
            "handle, but that also makes it popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonAlola,
        .shinyPalette = gMonShinyPalette_CalumonAlola,
        .iconSprite = gMonIcon_CalumonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 5, SHADOW_SIZE_M)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_CalumonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CalumonAlola,
            gShinyOverworldPalette_CalumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sCalumonAlolaLevelUpLearnset,
        .teachableLearnset = sCalumonAlolaTeachableLearnset,
        .eggMoveLearnset = sCalumonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_CHAPMON_ALOLA, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD})}),
    },

    [SPECIES_CHAPMON_ALOLA] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 154 : 148,
        .evYield_Speed = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Chapmon"),
        .cryId = CRY_CHAPMON,
        .natDexNum = NATIONAL_DEX_CHAPMON,
        .categoryName = _("Classy Cat"),
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING(
            "It looks down on everyone other than\n"
            "itself. In contrast to its lovely face, it\n"
            "is so brutal that it tortures its weakened\n"
            "prey rather than finishing them off."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChapmonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChapmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ChapmonAlola,
        .shinyPalette = gMonShinyPalette_ChapmonAlola,
        .iconSprite = gMonIcon_ChapmonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Chapmon)
        OVERWORLD(
            sPicTable_ChapmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChapmonAlola,
            gShinyOverworldPalette_ChapmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sChapmonAlolaLevelUpLearnset,
        .teachableLearnset = sChapmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sChapmonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_CALUMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Living with a savage, seafaring people has\n"
            "hardened its body so much that parts of it\n"
            "turned to iron. Darker coins are harder\n"
            "and garner more respect among Calumon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonGalar,
        .shinyPalette = gMonShinyPalette_CalumonGalar,
        .iconSprite = gMonIcon_CalumonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Calumon)
        OVERWORLD(
            sPicTable_CalumonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CalumonGalar,
            gShinyOverworldPalette_CalumonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sCalumonGalarLevelUpLearnset,
        .teachableLearnset = sCalumonGalarTeachableLearnset,
        .eggMoveLearnset = sCalumonGalarEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL),
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Perrserker"),
        .cryId = CRY_PERRSERKER,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("Viking"),
        .height = 8,
        .weight = 280,
        .description = COMPOUND_STRING(
            "What appears to be an iron helmet is\n"
            "actually hardened hair. This Pokémon\n"
            "lives for the thrill of battle."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Perrserker,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Perrserker,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Perrserker,
        .shinyPalette = gMonShinyPalette_Perrserker,
        .iconSprite = gMonIcon_Perrserker,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Perrserker)
        OVERWORLD(
            sPicTable_Perrserker,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Perrserker,
            gShinyOverworldPalette_Perrserker
        )
        .levelUpLearnset = sPerrserkerLevelUpLearnset,
        .teachableLearnset = sPerrserkerTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CALUMON_GMAX] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 69,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Calumon"),
        .cryId = CRY_CALUMON,
        .natDexNum = NATIONAL_DEX_CALUMON,
        .categoryName = _("Scratch Cat"),
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The pattern that has appeared on\n"
            "its giant coin is thought to be the\n"
            "key to unlocking the secrets of the\n"
            "Dynamax phenomenon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CalumonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalumonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CalumonGmax,
        .shinyPalette = gMonShinyPalette_CalumonGmax,
        .iconSprite = gMonIcon_CalumonGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Calumon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCalumonLevelUpLearnset,
        .teachableLearnset = sCalumonTeachableLearnset,
        .eggMoveLearnset = sCalumonEggMoveLearnset,
        .formSpeciesIdTable = sCalumonFormSpeciesIdTable,
        .formChangeTable = sCalumonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CALUMON

#if P_FAMILY_CHICCHIMON
    [SPECIES_CHICCHIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 23,
        .baseDefense   = 22,
        .baseSpeed     = 29,
        .baseSpAttack  = 22,
        .baseSpDefense = 21,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chicchimon"),
        .cryId = CRY_CHICCHIMON,
        .natDexNum = NATIONAL_DEX_CHICCHIMON,
        .categoryName = _("Chick"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Due to Chicchimon's small wing size, it\n"
            "is not yet able to take flight. It can\n"
            "however jump extra high and float down\n"
            "to the ground."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chicchimon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Chicchimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Chicchimon,
        .shinyPalette = gMonShinyPalette_Chicchimon,
        .iconSprite = gMonIcon_Chicchimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Chicchimon)
        OVERWORLD(
            sPicTable_Chicchimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chicchimon,
            gShinyOverworldPalette_Chicchimon
        )
        .levelUpLearnset = sChicchimonLevelUpLearnset,
        .teachableLearnset = sChicchimonTeachableLearnset,
        .eggMoveLearnset = sChicchimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_DOTFALCMON, CONDITIONS({IF_HP, 30})},
                                {EVO_LEVEL, 0, SPECIES_MUCHOMON, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_PENGUINMON, CONDITIONS({IF_ATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_FALCOMON, CONDITIONS({IF_SPD, 16})},
                                {EVO_LEVEL, 13, SPECIES_HYOKOMON}),
    },


    [SPECIES_DEMMERAMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 23,
        .baseDefense   = 23,
        .baseSpeed     = 27,
        .baseSpAttack  = 31,
        .baseSpDefense = 29,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Demmeramon"),
        .cryId = CRY_DEMMERAMON,
        .natDexNum = NATIONAL_DEX_DEMMERAMON,
        .categoryName = _("Flaming"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Demimeramon's whole body is ablaze\n"
            "at all times. It has a wild temperament\n"
            "and will attack anything in sight\n"
            "despite it's small body size."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Demmeramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Demmeramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Demmeramon,
        .shinyPalette = gMonShinyPalette_Demmeramon,
        .iconSprite = gMonIcon_Demmeramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Demmeramon)
        OVERWORLD(
            sPicTable_Demmeramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Demmeramon,
            gShinyOverworldPalette_Demmeramon
        )
        .levelUpLearnset = sDemmeramonLevelUpLearnset,
        .teachableLearnset = sDemmeramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_GOTSUMON, CONDITIONS({IF_DEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_CORONAMON, CONDITIONS({IF_SPATK, 19})},
                                {EVO_LEVEL, 0, SPECIES_FLAMEMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_VORVOMON, CONDITIONS({IF_SPD, 18})},
                                {EVO_LEVEL, 16, SPECIES_CANDLEMON}),
    },
#endif //P_FAMILY_CHICCHIMON

#if P_FAMILY_DEMIVEEMON
    [SPECIES_DEMIVEEMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 25,
        .baseDefense   = 24,
        .baseSpeed     = 29,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Demiveemon"),
        .cryId = CRY_DEMIVEEMON,
        .natDexNum = NATIONAL_DEX_DEMIVEEMON,
        .categoryName = _("Hopping"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Unlike most other In-Training Digimon,\n"
            "DemiVeemon has great control of it's \n"
            "whole body letting it grip objects\n"
            "and hop about without worry."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Demiveemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Demiveemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Demiveemon,
        .shinyPalette = gMonShinyPalette_Demiveemon,
        .iconSprite = gMonIcon_Demiveemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Demiveemon)
        OVERWORLD(
            sPicTable_Demiveemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Demiveemon,
            gShinyOverworldPalette_Demiveemon
        )
        .levelUpLearnset = sDemiveemonLevelUpLearnset,
        .teachableLearnset = sDemiveemonTeachableLearnset,
        .eggMoveLearnset = sDemiveemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_VEEMON}),
    },

    [SPECIES_DORIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 28,
        .baseDefense   = 25,
        .baseSpeed     = 31,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dorimon"),
        .cryId = CRY_DORIMON,
        .natDexNum = NATIONAL_DEX_DORIMON,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despites it's small size, Dorimon can\n"
            "quickly build up lots of speed. If \n"
            "it hits something while charging, it\n"
            "can deal considerable damage."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dorimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Dorimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Dorimon,
        .shinyPalette = gMonShinyPalette_Dorimon,
        .iconSprite = gMonIcon_Dorimon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Dorimon)
        OVERWORLD(
            sPicTable_Dorimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dorimon,
            gShinyOverworldPalette_Dorimon
        )
        .levelUpLearnset = sDorimonLevelUpLearnset,
        .teachableLearnset = sDorimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BLKAGUMON, CONDITIONS({IF_HP, 30})},
                                {EVO_LEVEL, 0, SPECIES_SHAMANMON, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_MONODRAMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_ARMADILMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_DORUMON}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Annihilape"),
        .cryId = CRY_ANNIHILAPE,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Rage Monkey"),
        .height = 12,
        .weight = 570,
        .description = COMPOUND_STRING(
            "When its anger rose beyond a\n"
            "critical point, this Pokémon gained power\n"
            "that is unfettered by the limits of\n"
            "its physical body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Annihilape,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Annihilape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Annihilape,
        .shinyPalette = gMonShinyPalette_Annihilape,
        .iconSprite = gMonIcon_Annihilape,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Annihilape)
        OVERWORLD(
            sPicTable_Annihilape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Annihilape,
            gShinyOverworldPalette_Annihilape
        )
        .levelUpLearnset = sAnnihilapeLevelUpLearnset,
        .teachableLearnset = sAnnihilapeTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DEMIVEEMON

#if P_FAMILY_FRIMON
    [SPECIES_FRIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 28,
        .baseDefense   = 30,
        .baseSpeed     = 26,
        .baseSpAttack  = 23,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ROCK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SIMPLE, ABILITY_SWIFT_SWIM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Frimon"),
        .cryId = CRY_FRIMON,
        .natDexNum = NATIONAL_DEX_FRIMON,
        .categoryName = _("Frill"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Frimon possesses a frill on its neck\n"
            "that's hardness can be changed at will.\n"
            "It can be seen chasing it's own tail\n"
            "when it get's bored."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Frimon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BACK_AND_LUNGE : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Frimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Frimon,
        .shinyPalette = gMonShinyPalette_Frimon,
        .iconSprite = gMonIcon_Frimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Frimon)
        OVERWORLD(
            sPicTable_Frimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frimon,
            gShinyOverworldPalette_Frimon
        )
        .levelUpLearnset = sFrimonLevelUpLearnset,
        .teachableLearnset = sFrimonTeachableLearnset,
        .eggMoveLearnset = sFrimonEggMoveLearnset,
        .formSpeciesIdTable = sFrimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KOKABUIMON, CONDITIONS({IF_SPATK, 13})},
                                {EVO_LEVEL, 0, SPECIES_BEARMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_GAZIMON, CONDITIONS({IF_SPD, 14})},
                                {EVO_LEVEL, 0, SPECIES_ELECMON_VIOLET, CONDITIONS({IF_ATK, 14})},
                                {EVO_LEVEL, 12, SPECIES_LIOLLMON}),
    },

    [SPECIES_GIGIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 30,
        .baseDefense   = 21,
        .baseSpeed     = 26,
        .baseSpAttack  = 24,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Gigimon"),
        .cryId = CRY_GIGIMON,
        .natDexNum = NATIONAL_DEX_GIGIMON,
        .categoryName = _("Fire Dragon"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despite it's deceptively small appearance,\n"
            "Gigimon packs a ferocious bite that can\n"
            "leave burn scars. It is said to evolve\n"
            "into a noble and powerful dragon Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Gigimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 38),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 40 : 8,
        .backPic = gMonBackPic_Gigimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gigimon,
        .shinyPalette = gMonShinyPalette_Gigimon,
        .iconSprite = gMonIcon_Gigimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigimon)
        OVERWORLD(
            sPicTable_Gigimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gigimon,
            gShinyOverworldPalette_Gigimon
        )
        .levelUpLearnset = sGigimonLevelUpLearnset,
        .teachableLearnset = sGigimonTeachableLearnset,
        .formSpeciesIdTable = sGigimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SHOUTMON, CONDITIONS({IF_HP, 35})},
                                {EVO_LEVEL, 0, SPECIES_HAGURUMON, CONDITIONS({IF_DEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_GOBLIMON, CONDITIONS({IF_ATK, 18})},
                                {EVO_LEVEL, 0, SPECIES_SOLARMON, CONDITIONS({IF_SPATK, 17})},
                                {EVO_LEVEL, 16, SPECIES_GUILMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_FRIMON_HISUI] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 91,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Frimon"),
        .cryId = CRY_FRIMON,
        .natDexNum = NATIONAL_DEX_FRIMON,
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING(
            "They patrol their territory in pairs.\n"
            "It's believed the igneous rock components\n"
            "in the fur of this species are the result\n"
            "of volcanic activity in its habitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_FrimonHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FrimonHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FrimonHisui,
        .shinyPalette = gMonShinyPalette_FrimonHisui,
        .iconSprite = gMonIcon_FrimonHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_M)
        FOOTPRINT(Frimon)
        OVERWORLD(
            sPicTable_FrimonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_FrimonHisui,
            gShinyOverworldPalette_FrimonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sFrimonHisuiLevelUpLearnset,
        .teachableLearnset = sFrimonHisuiTeachableLearnset,
        .formSpeciesIdTable = sFrimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_GIGIMON_HISUI}),
    },

    [SPECIES_GIGIMON_HISUI] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 194 : 213,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gigimon"),
        .cryId = CRY_GIGIMON,
        .natDexNum = NATIONAL_DEX_GIGIMON,
        .categoryName = _("Legendary"),
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "Snaps at its foes with fangs cloaked in\n"
            "blazing flame. Despite its bulk, it deftly\n"
            "feints every which way, leading opponents\n"
            "on a deceptively merry chase."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_GigimonHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GigimonHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GigimonHisui,
        .shinyPalette = gMonShinyPalette_GigimonHisui,
        .iconSprite = gMonIcon_GigimonHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigimon)
        OVERWORLD(
            sPicTable_GigimonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GigimonHisui,
            gShinyOverworldPalette_GigimonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGigimonHisuiLevelUpLearnset,
        .teachableLearnset = sGigimonHisuiTeachableLearnset,
        .formSpeciesIdTable = sGigimonFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FRIMON

#if P_FAMILY_GUMMYMON
    [SPECIES_GUMMYMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 29,
        .baseDefense   = 20,
        .baseSpeed     = 30,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Gummymon"),
        .cryId = CRY_GUMMYMON,
        .natDexNum = NATIONAL_DEX_GUMMYMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Gummymon always has an energetic\n"
            "personality. It's body tissue is still\n"
            "unstable however it's horn is hardened.\n"
            "providing some option for offense."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gummymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gummymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gummymon,
        .shinyPalette = gMonShinyPalette_Gummymon,
        .iconSprite = gMonIcon_Gummymon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Gummymon)
        OVERWORLD(
            sPicTable_Gummymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gummymon,
            gShinyOverworldPalette_Gummymon
        )
        .levelUpLearnset = sGummymonLevelUpLearnset,
        .teachableLearnset = sGummymonTeachableLearnset,
        .eggMoveLearnset = sGummymonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_HAZYAGUMON, CONDITIONS({IF_DEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_TAPIRMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_GAOMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_JAZAMON, CONDITIONS({IF_SPD, 17})},
                                {EVO_LEVEL, 14, SPECIES_TERRIERMON}),
    },

    [SPECIES_GURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 29,
        .baseDefense   = 25,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_PICKUP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Gurimon"),
        .cryId = CRY_GURIMON,
        .natDexNum = NATIONAL_DEX_GURIMON,
        .categoryName = _("Horn"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Gurimon can be seen often bouncing around\n"
            "energetically. It loves large, hard rocks\n"
            "and will strike them with it's horns. It\n"
            "also has a hard frill to protect it's body."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Gurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gurimon,
        .shinyPalette = gMonShinyPalette_Gurimon,
        .iconSprite = gMonIcon_Gurimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gurimon)
        OVERWORLD(
            sPicTable_Gurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gurimon,
            gShinyOverworldPalette_Gurimon
        )
        .levelUpLearnset = sGurimonLevelUpLearnset,
        .teachableLearnset = sGurimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BOKOMON, CONDITIONS({IF_SPATK, 13})},
                                {EVO_LEVEL, 0, SPECIES_MONMON, CONDITIONS({IF_SPD, 13})},
                                {EVO_LEVEL, 12, SPECIES_GAMMAMON}),
    },

    [SPECIES_HIYARIMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 26,
        .baseSpAttack  = 26,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Hiyarimon"),
        .cryId = CRY_HIYARIMON,
        .natDexNum = NATIONAL_DEX_HIYARIMON,
        .categoryName = _("Ice Penguin"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Hiyarimon's body is constantly covered \n"
            "in snow. It is likely that the bigger \n"
            "icicle on the tip of its beak, the more\n"
            "energy it has."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hiyarimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Hiyarimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hiyarimon,
        .shinyPalette = gMonShinyPalette_Hiyarimon,
        .iconSprite = gMonIcon_Hiyarimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Hiyarimon)
        OVERWORLD(
            sPicTable_Hiyarimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hiyarimon,
            gShinyOverworldPalette_Hiyarimon
        )
        .levelUpLearnset = sHiyarimonLevelUpLearnset,
        .teachableLearnset = sHiyarimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BEARMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_BULUCOMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 14, SPECIES_ICEGOBIMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KAMEMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 63,
        .baseSpeed     = 49,
        .baseSpAttack  = 55,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_DAMP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Kamemon"),
        .cryId = CRY_KAMEMON,
        .natDexNum = NATIONAL_DEX_KAMEMON,
        .categoryName = _("Kappa"),
        .height = 11,
        .weight = 231,
        .description = COMPOUND_STRING(
            "Kamemon are a very reliable Digimon but\n"
            "aren't popular picks with Tamers as they\n"
            "don't like to talk much. The shell on\n"
            "its back resembles a computer mouse."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kamemon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Kamemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Kamemon,
        .shinyPalette = gMonShinyPalette_Kamemon,
        .iconSprite = gMonIcon_Kamemon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KamemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_KamemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Kamemon)
        OVERWORLD(
            sPicTable_Kamemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kamemon,
            gShinyOverworldPalette_Kamemon
        )
        OVERWORLD_FEMALE(
            sPicTable_KamemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sKamemonLevelUpLearnset,
        .teachableLearnset = sKamemonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_GUMMYMON

#if P_FAMILY_HOPMON
    [SPECIES_HOPMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 25,
        .baseSpAttack  = 24,
        .baseSpDefense = 27,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hopmon"),
        .cryId = CRY_HOPMON,
        .natDexNum = NATIONAL_DEX_HOPMON,
        .categoryName = _("Baby Dragon"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Hopmon's entire body is covered in\n"
            "tiny scales that are invisible to the\n"
            "naked eye. It also has a strong\n"
            "sense of justice."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hopmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 21),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 21),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Hopmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Hopmon,
        .shinyPalette = gMonShinyPalette_Hopmon,
        .iconSprite = gMonIcon_Hopmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Hopmon)
        OVERWORLD(
            sPicTable_Hopmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Hopmon,
            gShinyOverworldPalette_Hopmon
        )
        .levelUpLearnset = sHopmonLevelUpLearnset,
        .teachableLearnset = sHopmonTeachableLearnset,
        .eggMoveLearnset = sHopmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_VEEMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_GABUMON, CONDITIONS({IF_ATK, 18})},
                                {EVO_LEVEL, 0, SPECIES_JUNKMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 0, SPECIES_JAZAMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 16, SPECIES_MONODRAMON}),
    },

    [SPECIES_KAKKINMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 23,
        .baseDefense   = 35,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 34,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Kakkinmon"),
        .cryId = CRY_KAKKINMON,
        .natDexNum = NATIONAL_DEX_KAKKINMON,
        .categoryName = _("Armour"),
        .height = 3,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Kakkinmon's hat is actually a copper \n"
            "shield that provides moderate protection.\n"
            "However Kakkinmon has been known to\n"
            "trust its hats strength in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kakkinmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kakkinmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kakkinmon,
        .shinyPalette = gMonShinyPalette_Kakkinmon,
        .iconSprite = gMonIcon_Kakkinmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KakkinmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_KakkinmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Kakkinmon)
        OVERWORLD(
            sPicTable_Kakkinmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kakkinmon,
            gShinyOverworldPalette_Kakkinmon
        )
        OVERWORLD_FEMALE(
            sPicTable_KakkinmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sKakkinmonLevelUpLearnset,
        .teachableLearnset = sKakkinmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ESPIMON, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 13, SPECIES_LUDOMON}),
    },

    [SPECIES_KAPURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 35,
        .baseSpeed     = 22,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kapurimon"),
        .cryId = CRY_KAPURIMON,
        .natDexNum = NATIONAL_DEX_KAPURIMON,
        .categoryName = _("Metal Cap"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Kapurimon's has a metallic helmet and\n"
            "its two horns have antennae. Kapurimon\n"
            "has many bat-like features like weak\n"
            "eyesight or the use of ultrasonic waves."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kapurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 54),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kapurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Kapurimon,
        .shinyPalette = gMonShinyPalette_Kapurimon,
        .iconSprite = gMonIcon_Kapurimon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KapurimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_KapurimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Kapurimon)
        OVERWORLD(
            sPicTable_Kapurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kapurimon,
            gShinyOverworldPalette_Kapurimon
        )
        OVERWORLD_FEMALE(
            sPicTable_KapurimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sKapurimonLevelUpLearnset,
        .teachableLearnset = sKapurimonTeachableLearnset,
        .formSpeciesIdTable = sKapurimonFormSpeciesIdTable,
        .formChangeTable = sKapurimonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_PHASCOMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_PAWNMON_WHITE, CONDITIONS({IF_HP, 34})},
                                {EVO_LEVEL, 0, SPECIES_HAGURUMON, CONDITIONS({IF_DEF, 19})},
                                {EVO_LEVEL, 0, SPECIES_KOTEMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 15, SPECIES_KOKUWAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KAPURIMON_MEGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 50,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kapurimon"),
        .cryId = CRY_KAPURIMON_MEGA,
        .natDexNum = NATIONAL_DEX_KAPURIMON,
        .categoryName = _("Psi"),
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Having traded away its muscles, Kapurimon's\n"
            "true power has been unleashed. With its\n"
            "psychic powers, it can foresee all things."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KapurimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_KapurimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_KapurimonMega,
        .shinyPalette = gMonShinyPalette_KapurimonMega,
        .iconSprite = gMonIcon_KapurimonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(Kapurimon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_KapurimonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_KapurimonMega,
            gShinyOverworldPalette_KapurimonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKapurimonLevelUpLearnset,
        .teachableLearnset = sKapurimonTeachableLearnset,
        .formSpeciesIdTable = sKapurimonFormSpeciesIdTable,
        .formChangeTable = sKapurimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOPMON

#if P_FAMILY_KOKOMON
    [SPECIES_KOKOMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 29,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kokomon"),
        .cryId = CRY_KOKOMON,
        .natDexNum = NATIONAL_DEX_KOKOMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kokomon get's along very well with \n"
            "Gummymon. It gets along so well that\n"
            "it gets considerably weaker when\n"
            "seperated due to loneliness."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kokomon,
        .shinyPalette = gMonShinyPalette_Kokomon,
        .iconSprite = gMonIcon_Kokomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Kokomon)
        OVERWORLD(
            sPicTable_Kokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kokomon,
            gShinyOverworldPalette_Kokomon
        )
        .levelUpLearnset = sKokomonLevelUpLearnset,
        .teachableLearnset = sKokomonTeachableLearnset,
        .eggMoveLearnset = sKokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BLKTOYAMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_WORMMON, CONDITIONS({IF_SPDEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_RYUDAMON, CONDITIONS({IF_DEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_DEMIDEVMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 14, SPECIES_LOPMON}),
    },

    [SPECIES_KOROMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 23,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Koromon"),
        .cryId = CRY_KOROMON,
        .natDexNum = NATIONAL_DEX_KOROMON,
        .categoryName = _("Round"),
        .height = 3,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Koromon is a digimon that shed the \n"
            "fuzz that was covering it's skin. \n"
            "Although it is now larger, it is still\n"
            "very weak in battle."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Koromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Koromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Koromon,
        .shinyPalette = gMonShinyPalette_Koromon,
        .iconSprite = gMonIcon_Koromon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Koromon)
        OVERWORLD(
            sPicTable_Koromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Koromon,
            gShinyOverworldPalette_Koromon
        )
        .levelUpLearnset = sKoromonLevelUpLearnset,
        .teachableLearnset = sKoromonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SHOUTMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_SAMUAGUMON, CONDITIONS({IF_HP, 36})},
                                {EVO_LEVEL, 0, SPECIES_DOTAGUMON, CONDITIONS({IF_SPDEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_AGUMON_06, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 16, SPECIES_AGUMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define KOZENIMON_EXP_YIELD 253
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define KOZENIMON_EXP_YIELD 227
#else
    #define KOZENIMON_EXP_YIELD 193
#endif

    [SPECIES_KOZENIMON] =
    {
        .baseHP        = 29,
        .baseAttack    = 23,
        .baseDefense   = 26,
        .baseSpeed     = 24,
        .baseSpAttack  = 21,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kozenimon"),
        .cryId = CRY_KOZENIMON,
        .natDexNum = NATIONAL_DEX_KOZENIMON,
        .categoryName = _("One Yen"),
        .height = 1,
        .weight = 1,
        .description = COMPOUND_STRING(
            "Kozenimon is in the shape of the one yen\n"
            "coin. It is not known why it shares an\n"
            "appearence with japanese currency. It's\n"
            "only strength is it's willpower."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Kozenimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kozenimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kozenimon,
        .shinyPalette = gMonShinyPalette_Kozenimon,
        .iconSprite = gMonIcon_Kozenimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Kozenimon)
        OVERWORLD(
            sPicTable_Kozenimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kozenimon,
            gShinyOverworldPalette_Kozenimon
        )
        .levelUpLearnset = sKozenimonLevelUpLearnset,
        .teachableLearnset = sKozenimonTeachableLearnset,
        .formSpeciesIdTable = sKozenimonFormSpeciesIdTable,
        .formChangeTable = sKozenimonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_ZENIMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KOZENIMON_GMAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 85 : 65,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = KOZENIMON_EXP_YIELD,
        .evYield_Attack = 3,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_STEADFAST },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kozenimon"),
        .cryId = CRY_KOZENIMON,
        .natDexNum = NATIONAL_DEX_KOZENIMON,
        .categoryName = _("Superpower"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "One of these Pokémon once used\n"
            "its immeasurable strength to lift a\n"
            "large ship that was in trouble. It\n"
            "then carried the ship to port."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_KozenimonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KozenimonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_KozenimonGmax,
        .shinyPalette = gMonShinyPalette_KozenimonGmax,
        .iconSprite = gMonIcon_KozenimonGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Kozenimon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sKozenimonLevelUpLearnset,
        .teachableLearnset = sKozenimonTeachableLearnset,
        .formSpeciesIdTable = sKozenimonFormSpeciesIdTable,
        .formChangeTable = sKozenimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KOKOMON

#if P_FAMILY_KYAROMON
    [SPECIES_KYAROMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 33,
        .baseDefense   = 28,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kyaromon"),
        .cryId = CRY_KYAROMON,
        .natDexNum = NATIONAL_DEX_KYAROMON,
        .categoryName = _("Rubber Ball"),
        .height = 5,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Kyaromon are very active digimon that\n"
            "will often bounce between interests. It\n"
            "has been observed that they are mostly\n"
            "ampty inside and bounce like rubber balls."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyaromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kyaromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyaromon,
        .shinyPalette = gMonShinyPalette_Kyaromon,
        .iconSprite = gMonIcon_Kyaromon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Kyaromon)
        OVERWORLD(
            sPicTable_Kyaromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kyaromon,
            gShinyOverworldPalette_Kyaromon
        )
        .levelUpLearnset = sKyaromonLevelUpLearnset,
        .teachableLearnset = sKyaromonTeachableLearnset,
        .eggMoveLearnset = sKyaromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KUDAMON_06, CONDITIONS({IF_SPDEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_IMPMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_ELECMON_VIOLET, CONDITIONS({IF_ATK, 18})},
                                {EVO_LEVEL, 0, SPECIES_KAMEMON, CONDITIONS({IF_DEF, 17})},
                                {EVO_LEVEL, 15, SPECIES_KUDAMON}),
    },

    [SPECIES_KYOKYOMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 25,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 22,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kyokyomon"),
        .cryId = CRY_KYOKYOMON,
        .natDexNum = NATIONAL_DEX_KYOKYOMON,
        .categoryName = _("X Antibody"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kyokyomon has a long body that it can\n"
            "stretch at will. When angry, it can\n"
            "stretch upto nine times its body length.\n"
            "It is a popular digimon for shogi players."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kyokyomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        .backPic = gMonBackPic_Kyokyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyokyomon,
        .shinyPalette = gMonShinyPalette_Kyokyomon,
        .iconSprite = gMonIcon_Kyokyomon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 3, SHADOW_SIZE_M)
        FOOTPRINT(Kyokyomon)
        OVERWORLD(
            sPicTable_Kyokyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Kyokyomon,
            gShinyOverworldPalette_Kyokyomon
        )
        .levelUpLearnset = sKyokyomonLevelUpLearnset,
        .teachableLearnset = sKyokyomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_KYUPIMON}),
    },

    [SPECIES_KYUPIMON] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 70 : 60,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 245,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 221,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 216,
    #else
        .expYield = 191,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kyupimon"),
        .cryId = CRY_KYUPIMON,
        .natDexNum = NATIONAL_DEX_KYUPIMON,
        .categoryName = _("Charity"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Kyupimon love's good deeds, it loves them\n"
            "so much that is is called the 'angel of\n"
            "charity'. It is said that it's love can\n"
            "stop any digimon from fighting it."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Kyupimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Kyupimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyupimon,
        .shinyPalette = gMonShinyPalette_Kyupimon,
        .iconSprite = gMonIcon_Kyupimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Kyupimon)
        OVERWORLD(
            sPicTable_Kyupimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Kyupimon,
            gShinyOverworldPalette_Kyupimon
        )
        .levelUpLearnset = sKyupimonLevelUpLearnset,
        .teachableLearnset = sKyupimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_IMPMON, CONDITIONS({IF_SPATK, 24})},
                                {EVO_LEVEL, 0, SPECIES_TERRIERMON, CONDITIONS({IF_ATK, 19})},
                                {EVO_LEVEL, 0, SPECIES_SALAMON, CONDITIONS({IF_SPDEF, 25})},
                                {EVO_LEVEL, 0, SPECIES_PATAMON, CONDITIONS({IF_SPD, 25})},
                                {EVO_LEVEL, 22, SPECIES_LUCEMON}),
    },
#endif //P_FAMILY_KYAROMON

#if P_FAMILY_MINOMON
    [SPECIES_MINOMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 22,
        .baseDefense   = 29,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OVERGROW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Minomon"),
        .cryId = CRY_MINOMON,
        .natDexNum = NATIONAL_DEX_MINOMON,
        .categoryName = _("Larva"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "On good days, Minomon will stick its\n"
            "face out of its shell and vegetate. Due\n"
            "to it's personality, it does not show \n"
            "its emotions very well."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Minomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Minomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Minomon,
        .shinyPalette = gMonShinyPalette_Minomon,
        .iconSprite = gMonIcon_Minomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Minomon)
        OVERWORLD(
            sPicTable_Minomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Minomon,
            gShinyOverworldPalette_Minomon
        )
        .levelUpLearnset = sMinomonLevelUpLearnset,
        .teachableLearnset = sMinomonTeachableLearnset,
        .eggMoveLearnset = sMinomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KOKUWAMON, CONDITIONS({IF_DEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_KUNEMON, CONDITIONS({IF_HP, 32})},
                                {EVO_LEVEL, 0, SPECIES_TENTOMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 14, SPECIES_WORMMON}),
    },

    [SPECIES_MISSIMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 28,
        .baseDefense   = 23,
        .baseSpeed     = 38,
        .baseSpAttack  = 28,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Missimon"),
        .cryId = CRY_MISSIMON,
        .natDexNum = NATIONAL_DEX_MISSIMON,
        .categoryName = _("Missile"),
        .height = 5,
        .weight = 70,
        .description = COMPOUND_STRING(
            "From the moment it digivolves, Missimon\n"
            "will fly non-stop. When it attacks, it\n"
            "has extremely bad accuracy and often\n"
            "misses most attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Missimon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 19),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 19),
            ANIMCMD_FRAME(1, 19),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Missimon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Missimon,
        .shinyPalette = gMonShinyPalette_Missimon,
        .iconSprite = gMonIcon_Missimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Missimon)
        OVERWORLD(
            sPicTable_Missimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Missimon,
            gShinyOverworldPalette_Missimon
        )
        .levelUpLearnset = sMissimonLevelUpLearnset,
        .teachableLearnset = sMissimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_GIZAMON, CONDITIONS({IF_DEF, 17})},
                                {EVO_LEVEL, 0, SPECIES_CHIKURIMON, CONDITIONS({IF_HP, 36})},
                                {EVO_LEVEL, 0, SPECIES_DRACMON, CONDITIONS({IF_SPATK, 19})},
                                {EVO_LEVEL, 0, SPECIES_HAGURUMON, CONDITIONS({IF_DEF, 17})},
                                {EVO_LEVEL, 17, SPECIES_COMMDRAMON}),
    },
#endif //P_FAMILY_MINOMON

#if P_FAMILY_MONIMON

#if P_UPDATED_EXP_YIELDS >= GEN_5
    #define MONIMON_EXP_YIELD 70
#elif P_UPDATED_EXP_YIELDS >= GEN_4
    #define MONIMON_EXP_YIELD 73
#else
    #define MONIMON_EXP_YIELD 86
#endif

#define MOTIMON_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define MOTIMON_EXP_YIELD 248
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define MOTIMON_EXP_YIELD 223
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define MOTIMON_EXP_YIELD 218
#else
    #define MOTIMON_EXP_YIELD 177
#endif

    [SPECIES_MONIMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 28,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 21,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_SOUNDPROOF, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Monimon"),
        .cryId = CRY_MONIMON,
        .natDexNum = NATIONAL_DEX_MONIMON,
        .categoryName = _("Television"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Monimon is a low ranking ninja digimon \n"
            "that operates in a group. It's emotions\n"
            "generally project onto it's face in\n"
            "the shape of emoticons."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 19,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 10,
        .backPic = gMonBackPic_Monimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Monimon,
        .shinyPalette = gMonShinyPalette_Monimon,
        .iconSprite = gMonIcon_Monimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Monimon)
        OVERWORLD(
            sPicTable_Monimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Monimon,
            gShinyOverworldPalette_Monimon
        )
        .levelUpLearnset = sMonimonLevelUpLearnset,
        .teachableLearnset = sMonimonTeachableLearnset,
        .eggMoveLearnset = sMonimonEggMoveLearnset,
        .formSpeciesIdTable = sMonimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_MONITAMON}),
    },

    [SPECIES_MOONMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 23,
        .baseDefense   = 25,
        .baseSpeed     = 25,
        .baseSpAttack  = 27,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_AIR_LOCK, ABILITY_STURDY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Moonmon"),
        .cryId = CRY_MOONMON,
        .natDexNum = NATIONAL_DEX_MOONMON,
        .categoryName = _("Moon Drop"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Moonmon's is made up of a transparent\n"
            "body and has a pure heart. Moonmon \n"
            "who are raised by tamers often share the\n"
            "the same personality as their tamer."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Moonmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Moonmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Moonmon,
        .shinyPalette = gMonShinyPalette_Moonmon,
        .iconSprite = gMonIcon_Moonmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Moonmon)
        OVERWORLD(
            sPicTable_Moonmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Moonmon,
            gShinyOverworldPalette_Moonmon
        )
        .levelUpLearnset = sMoonmonLevelUpLearnset,
        .teachableLearnset = sMoonmonTeachableLearnset,
        .formSpeciesIdTable = sMoonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BLKAGUMON, CONDITIONS({IF_HP, 35})},
                                {EVO_LEVEL, 0, SPECIES_GAZIMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_LOPMON, CONDITIONS({IF_SPATK, 17})},
                                {EVO_LEVEL, 15, SPECIES_LUNAMON}),
    },

    [SPECIES_MOTIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 22,
        .baseDefense   = 28,
        .baseSpeed     = 22,
        .baseSpAttack  = 24,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Motimon"),
        .cryId = CRY_MOTIMON,
        .natDexNum = NATIONAL_DEX_MOTIMON,
        .categoryName = _("Mochi"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Motimon is a surprisingly intelligent\n"
            "digimon. It is theorised that Motimon\n"
            "was produced from the data of \n"
            "dictionary software."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Motimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 31),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Motimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Motimon,
        .shinyPalette = gMonShinyPalette_Motimon,
        .iconSprite = gMonIcon_Motimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Motimon)
        OVERWORLD(
            sPicTable_Motimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Motimon,
            gShinyOverworldPalette_Motimon
        )
        .levelUpLearnset = sMotimonLevelUpLearnset,
        .teachableLearnset = sMotimonTeachableLearnset,
        .formSpeciesIdTable = sMotimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BIYOMON, CONDITIONS({IF_SPD, 15})},
                                {EVO_LEVEL, 0, SPECIES_FANBEEMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_MORPHOMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 15, SPECIES_TENTOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MONIMON_ALOLA] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 255,
        .expYield = MONIMON_EXP_YIELD,
        .evYield_Defense = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Monimon"),
        .cryId = CRY_MONIMON,
        .natDexNum = NATIONAL_DEX_MONIMON,
        .categoryName = _("Rock"),
        .height = 4,
        .weight = 203,
        .description = COMPOUND_STRING(
            "Its body is a magnetic stone. Iron sand\n"
            "attach to parts of its body with stronger\n"
            "magnetism. If you carelessly step on one,\n"
            "it will headbutt and shock you in anger."),
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MonimonAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_MonimonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MonimonAlola,
        .shinyPalette = gMonShinyPalette_MonimonAlola,
        .iconSprite = gMonIcon_MonimonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Monimon)
        OVERWORLD(
            sPicTable_MonimonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MonimonAlola,
            gShinyOverworldPalette_MonimonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMonimonAlolaLevelUpLearnset,
        .teachableLearnset = sMonimonAlolaTeachableLearnset,
        .eggMoveLearnset = sMonimonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sMonimonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_MOONMON_ALOLA}),
    },

    [SPECIES_MOONMON_ALOLA] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_Defense = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Moonmon"),
        .cryId = CRY_MOONMON,
        .natDexNum = NATIONAL_DEX_MOONMON,
        .categoryName = _("Rock"),
        .height = 10,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "When two Moonmon smash each other over\n"
            "dravite, their favorite food, they cause\n"
            "flashes of light and booming noises.\n"
            "People call them “fireworks of the earth.”"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MoonmonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MoonmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MoonmonAlola,
        .shinyPalette = gMonShinyPalette_MoonmonAlola,
        .iconSprite = gMonIcon_MoonmonAlola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Moonmon)
        OVERWORLD(
            sPicTable_MoonmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MoonmonAlola,
            gShinyOverworldPalette_MoonmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMoonmonAlolaLevelUpLearnset,
        .teachableLearnset = sMoonmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMoonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MOTIMON_ALOLA},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MOTIMON_ALOLA}),
    },

    [SPECIES_MOTIMON_ALOLA] =
    {
        .baseHP        = 80,
        .baseAttack    = MOTIMON_ATTACK,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK, TYPE_ELECTRIC),
        .catchRate = 45,
        .expYield = MOTIMON_EXP_YIELD,
        .evYield_Defense = 3,
        .itemCommon = ITEM_CELL_BATTERY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Motimon"),
        .cryId = CRY_MOTIMON,
        .natDexNum = NATIONAL_DEX_MOTIMON,
        .categoryName = _("Megaton"),
        .height = 17,
        .weight = 3170,
        .description = COMPOUND_STRING(
            "It fires rocks charged with electricity.\n"
            "Even if the rock isn't fired that\n"
            "accurately, just grazing an opponent\n"
            "will cause numbness and fainting."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_MotimonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MotimonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MotimonAlola,
        .shinyPalette = gMonShinyPalette_MotimonAlola,
        .iconSprite = gMonIcon_MotimonAlola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Motimon)
        OVERWORLD(
            sPicTable_MotimonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MotimonAlola,
            gShinyOverworldPalette_MotimonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMotimonAlolaLevelUpLearnset,
        .teachableLearnset = sMotimonAlolaTeachableLearnset,
        .formSpeciesIdTable = sMotimonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_MONIMON

#if P_FAMILY_NEGAMON
    [SPECIES_NEGAMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 21,
        .baseSpeed     = 27,
        .baseSpAttack  = 30,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_SUCTION_CUPS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Negamon"),
        .cryId = CRY_NEGAMON,
        .natDexNum = NATIONAL_DEX_NEGAMON,
        .categoryName = _("Negative"),
        .height = 15,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Negamon grow up immersed in negative\n"
            "data from the Network. It will constantly\n"
            "wish for it's destruction and lives a\n"
            "quiet life in darkness."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Negamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_ORANGE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 10,
        .backPic = gMonBackPic_Negamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Negamon,
        .shinyPalette = gMonShinyPalette_Negamon,
        .iconSprite = gMonIcon_Negamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Negamon)
        OVERWORLD(
            sPicTable_Negamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Negamon,
            gShinyOverworldPalette_Negamon
        )
        .levelUpLearnset = sNegamonLevelUpLearnset,
        .teachableLearnset = sNegamonTeachableLearnset,
        .eggMoveLearnset = sNegamonEggMoveLearnset,
        .formSpeciesIdTable = sNegamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NYAROMON}),
    },

    [SPECIES_NYAROMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 29,
        .baseDefense   = 22,
        .baseSpeed     = 31,
        .baseSpAttack  = 20,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Nyaromon"),
        .cryId = CRY_NYAROMON,
        .natDexNum = NATIONAL_DEX_NYAROMON,
        .categoryName = _("Cat"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Nyaromon is a small digimon with a\n"
            "cat-like appearance. They are known for \n"
            "having a very curious personality but\n"
            "can also have a lonely side."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Nyaromon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_VIBRATE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Nyaromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Nyaromon,
        .shinyPalette = gMonShinyPalette_Nyaromon,
        .iconSprite = gMonIcon_Nyaromon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nyaromon)
        OVERWORLD(
            sPicTable_Nyaromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nyaromon,
            gShinyOverworldPalette_Nyaromon
        )
        .levelUpLearnset = sNyaromonLevelUpLearnset,
        .teachableLearnset = sNyaromonTeachableLearnset,
        .formSpeciesIdTable = sNyaromonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ARMADILMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_TINKERMON, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_RENAMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 0, SPECIES_HAWKMON, CONDITIONS({IF_SPD, 17})},
                                {EVO_LEVEL, 14, SPECIES_SALAMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_NEGAMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 82 : 152,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Negamon"),
        .cryId = CRY_NEGAMON,
        .natDexNum = NATIONAL_DEX_NEGAMON,
        .categoryName = _("Unique Horn"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Its small horn hides a healing power.\n"
            "This Pokémon will look into your eyes and\n"
            "read the contents of your heart. If it\n"
            "finds evil there, it promptly hides away."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NegamonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NegamonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NegamonGalar,
        .shinyPalette = gMonShinyPalette_NegamonGalar,
        .iconSprite = gMonIcon_NegamonGalar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Negamon)
        OVERWORLD(
            sPicTable_NegamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_NegamonGalar,
            gShinyOverworldPalette_NegamonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sNegamonGalarLevelUpLearnset,
        .teachableLearnset = sNegamonGalarTeachableLearnset,
        .eggMoveLearnset = sNegamonGalarEggMoveLearnset,
        .formSpeciesIdTable = sNegamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_NYAROMON_GALAR}),
    },

    [SPECIES_NYAROMON_GALAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 192,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Nyaromon"),
        .cryId = CRY_NYAROMON,
        .natDexNum = NATIONAL_DEX_NYAROMON,
        .categoryName = _("Unique Horn"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Little can stand up to its psycho cut.\n"
            "Unleashed from this Pokémon's horn,\n"
            "the move will punch a hole right\n"
            "through a thick metal sheet."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_NyaromonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NyaromonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NyaromonGalar,
        .shinyPalette = gMonShinyPalette_NyaromonGalar,
        .iconSprite = gMonIcon_NyaromonGalar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nyaromon)
        OVERWORLD(
            sPicTable_NyaromonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_NyaromonGalar,
            gShinyOverworldPalette_NyaromonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sNyaromonGalarLevelUpLearnset,
        .teachableLearnset = sNyaromonGalarTeachableLearnset,
        .formSpeciesIdTable = sNyaromonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_NEGAMON

#if P_FAMILY_PAGUMON
    [SPECIES_PAGUMON] =
    {
        .baseHP        = 25,
        .baseAttack    = 22,
        .baseDefense   = 28,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pagumon"),
        .cryId = CRY_PAGUMON,
        .natDexNum = NATIONAL_DEX_PAGUMON,
        .categoryName = _("Smug"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pagumon are known for having a malicious\n"
            "personality, often chasing after weaker\n"
            "digimon. It will use it's hand like ears\n"
            "to taunt other digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Pagumon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pagumon,
        .shinyPalette = gMonShinyPalette_Pagumon,
        .iconSprite = gMonIcon_Pagumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -5, SHADOW_SIZE_L)
        FOOTPRINT(Pagumon)
        OVERWORLD(
            sPicTable_Pagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pagumon,
            gShinyOverworldPalette_Pagumon
        )
        .levelUpLearnset = sPagumonLevelUpLearnset,
        .teachableLearnset = sPagumonTeachableLearnset,
        .eggMoveLearnset = sPagumonEggMoveLearnset,
        .formSpeciesIdTable = sPagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_CHUUMON, CONDITIONS({IF_HP, 31})},
                                {EVO_LEVEL, 0, SPECIES_TSUKAIMON, CONDITIONS({IF_SPD, 15})},
                                {EVO_LEVEL, 0, SPECIES_GIZAMON, CONDITIONS({IF_ATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_IMPMON, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 13, SPECIES_DEMIDEVMON}),
    },

    [SPECIES_PICKMON_SILVER] =
    {
        .baseHP        = 23,
        .baseAttack    = 26,
        .baseDefense   = 27,
        .baseSpeed     = 22,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_STEEL, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 60,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Silver Pick"),
        .height = 2,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. Silver\n"
            "pickmon are known to wear shades and\n"
            "one of the highest in the Starmon Corps\n"
            "heirarchy for a pickmon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silver,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pickmon_silver,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silver,
        .shinyPalette = gMonShinyPalette_Pickmon_silver,
        .iconSprite = gMonIcon_Pickmon_silver,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
        OVERWORLD(
            sPicTable_Pickmon_silver,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pickmon_silver,
            gShinyOverworldPalette_Pickmon_silver
        )
        .levelUpLearnset = sPickmon_silverLevelUpLearnset,
        .teachableLearnset = sPickmon_silverTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
        .formChangeTable = sPickmon_silverFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_STARMON_2010}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_LIOLLMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 62,
        .baseSpAttack  = 47,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Liollmon"),
        .cryId = CRY_LIOLLMON,
        .natDexNum = NATIONAL_DEX_LIOLLMON,
        .categoryName = _("Tiger"),
        .height = 10,
        .weight = 209,
        .description = COMPOUND_STRING(
            "Until recently, its existence had never\n"
            "been confirmed as it has a very small.\n"
            "population. It is a very territorial\n"
            "Digimon making it hard to study."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Liollmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Liollmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Liollmon,
        .shinyPalette = gMonShinyPalette_Liollmon,
        .iconSprite = gMonIcon_Liollmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Liollmon)
        OVERWORLD(
            sPicTable_Liollmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Liollmon,
            gShinyOverworldPalette_Liollmon
        )
        .levelUpLearnset = sLiollmonLevelUpLearnset,
        .teachableLearnset = sLiollmonTeachableLearnset,
        .formSpeciesIdTable = sLiollmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 56, SPECIES_EYESMON},
                                {EVO_LEVEL, 36, SPECIES_BOARMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_PICKMON_SILVER_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_WATER, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 207,
        .evYield_Defense = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Hermit Crab"),
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When bathed in the energy of Mega\n"
            "Evolution, Tanemon converts into\n"
            "impregnable armor. There is virtually no\n"
            "change in Pagumon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silverMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pickmon_silverMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silverMega,
        .shinyPalette = gMonShinyPalette_Pickmon_silverMega,
        .iconSprite = gMonIcon_Pickmon_silverMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Pickmon_silverMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pickmon_silverMega,
            gShinyOverworldPalette_Pickmon_silverMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPickmon_silverLevelUpLearnset,
        .teachableLearnset = sPickmon_silverTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
        .formChangeTable = sPickmon_silverFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_PAGUMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 99,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pagumon"),
        .natDexNum = NATIONAL_DEX_PAGUMON,
        .categoryName = _("Dopey"),
        .height = 12,
        .weight = 370,
        .description = COMPOUND_STRING(
            "Although it is normally zoned out, its\n"
            "expression abruptly sharpens on occasion.\n"
            "The cause seems to lie in Pagumon's diet,\n"
            "which also give their tails a spicy flavor."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PagumonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PagumonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PagumonGalar,
        .shinyPalette = gMonShinyPalette_PagumonGalar,
        .iconSprite = gMonIcon_PagumonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, -8, SHADOW_SIZE_L)
        FOOTPRINT(Pagumon)
        OVERWORLD(
            sPicTable_PagumonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PagumonGalar,
            gShinyOverworldPalette_PagumonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPagumonGalarLevelUpLearnset,
        .teachableLearnset = sPagumonGalarTeachableLearnset,
        .eggMoveLearnset = sPagumonGalarEggMoveLearnset,
        .formSpeciesIdTable = sPagumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_PICKMON_SILVER_GALAR},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_LIOLLMON_GALAR}),
    },

    [SPECIES_PICKMON_SILVER_GALAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_SILVER,
        .natDexNum = NATIONAL_DEX_PICKMON_SILVER,
        .categoryName = _("Hermit Crab"),
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING(
            "A Tanemon bite set off a chemical reaction\n"
            "with the spices inside Pickmon_silver's body,\n"
            "causing Pickmon_silver to become a\n"
            "Poison-type Pokémon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pickmon_silverGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pickmon_silverGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Pickmon_silverGalar,
        .shinyPalette = gMonShinyPalette_Pickmon_silverGalar,
        .iconSprite = gMonIcon_Pickmon_silverGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 9, SHADOW_SIZE_L)
        FOOTPRINT(Pickmon_silver)
        OVERWORLD(
            sPicTable_Pickmon_silverGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Pickmon_silverGalar,
            gShinyOverworldPalette_Pickmon_silverGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPickmon_silverGalarLevelUpLearnset,
        .teachableLearnset = sPickmon_silverGalarTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_LIOLLMON_GALAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_POISON, TYPE_PSYCHIC),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 164,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Liollmon"),
        .cryId = CRY_LIOLLMON,
        .natDexNum = NATIONAL_DEX_LIOLLMON,
        .categoryName = _("Hexpert"),
        .height = 18,
        .weight = 795,
        .description = COMPOUND_STRING(
            "A combination of toxins and the shock of\n"
            "evolving has increased Tanemon's\n"
            "intelligence to the point that Tanemon\n"
            "now controls Liollmon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_LiollmonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LiollmonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LiollmonGalar,
        .shinyPalette = gMonShinyPalette_LiollmonGalar,
        .iconSprite = gMonIcon_LiollmonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Liollmon)
        OVERWORLD(
            sPicTable_LiollmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LiollmonGalar,
            gShinyOverworldPalette_LiollmonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sLiollmonGalarLevelUpLearnset,
        .teachableLearnset = sLiollmonGalarTeachableLearnset,
        .formSpeciesIdTable = sLiollmonFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PAGUMON

#if P_FAMILY_PICKMON_WHITE
    [SPECIES_PICKMON_WHITE] =
    {
        .baseHP        = 23,
        .baseAttack    = 23,
        .baseDefense   = 22,
        .baseSpeed     = 27,
        .baseSpAttack  = 24,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 60,
        .evYield_Speed = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_WHITE,
        .natDexNum = NATIONAL_DEX_PICKMON_WHITE,
        .categoryName = _("White Pick"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. White\n"
            "pickmon are particularly weak and low\n"
            "in the Starmon Corps however they are\n"
            "incredibly loyal and have a strong will."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pickmon_white,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 20,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 17,
        .backPic = gMonBackPic_Pickmon_white,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_white,
        .shinyPalette = gMonShinyPalette_Pickmon_white,
        .iconSprite = gMonIcon_Pickmon_white,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Pickmon_white)
        OVERWORLD(
            sPicTable_Pickmon_white,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Pickmon_white,
            gShinyOverworldPalette_Pickmon_white
        )
        .levelUpLearnset = sPickmon_whiteLevelUpLearnset,
        .teachableLearnset = sPickmon_whiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_STARMON_2010}),
    },

    [SPECIES_PICKMON_RED] =
    {
        .baseHP        = 23,
        .baseAttack    = 26,
        .baseDefense   = 22,
        .baseSpeed     = 26,
        .baseSpAttack  = 22,
        .baseSpDefense = 21,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pickmon"),
        .cryId = CRY_PICKMON_RED,
        .natDexNum = NATIONAL_DEX_PICKMON_RED,
        .categoryName = _("Red Pick"),
        .height = 2,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pickmon can come in many colours. Red\n"
            "pickmon, while weak, are very aggressive\n"
            "and loud. Despite this, they are a\n"
            "favourite for 'obnoxious' tamers."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pickmon_red,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
        ),
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backPic = gMonBackPic_Pickmon_red,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_red,
        .shinyPalette = gMonShinyPalette_Pickmon_red,
        .iconSprite = gMonIcon_Pickmon_red,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Pickmon_red)
        OVERWORLD(
            sPicTable_Pickmon_red,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Pickmon_red,
            gShinyOverworldPalette_Pickmon_red
        )
        .levelUpLearnset = sPickmon_redLevelUpLearnset,
        .teachableLearnset = sPickmon_redTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_STARMON_2010}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 211,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magnezone"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "As it zooms through the sky, this\n"
            "Pokémon seems to be receiving signals\n"
            "of unknown origin, while transmitting its\n"
            "own signals of unknown purpose."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magnezone,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Magnezone,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Magnezone,
        .shinyPalette = gMonShinyPalette_Magnezone,
        .iconSprite = gMonIcon_Magnezone,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magnezone)
        OVERWORLD(
            sPicTable_Magnezone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Magnezone,
            gShinyOverworldPalette_Magnezone
        )
        .levelUpLearnset = sMagnezoneLevelUpLearnset,
        .teachableLearnset = sMagnezoneTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PICKMON_WHITE

#if P_FAMILY_PINAMON
#define PINAMON_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define PINAMON_EXP_YIELD 132
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PINAMON_EXP_YIELD 123
#else
    #define PINAMON_EXP_YIELD 94
#endif

    [SPECIES_PINAMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 26,
        .baseDefense   = 20,
        .baseSpeed     = 33,
        .baseSpAttack  = 23,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_SPEED_BOOST, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinamon"),
        .cryId = CRY_PINAMON,
        .natDexNum = NATIONAL_DEX_PINAMON,
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Pinamon are always seen running around\n"
            "restlessly. The only time's it is still\n"
            "is when it's bored or sleeping. Many\n"
            "tamers struggle to bond with this digimon."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Pinamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Pinamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pinamon,
        .shinyPalette = gMonShinyPalette_Pinamon,
        .iconSprite = gMonIcon_Pinamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pinamon)
        OVERWORLD(
            sPicTable_Pinamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Pinamon,
            gShinyOverworldPalette_Pinamon
        )
        .levelUpLearnset = sPinamonLevelUpLearnset,
        .teachableLearnset = sPinamonTeachableLearnset,
        .eggMoveLearnset = sPinamonEggMoveLearnset,
        .formSpeciesIdTable = sPinamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_GOBLIMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 0, SPECIES_KUDAMON_06, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_SWIMMON, CONDITIONS({IF_SPD, 18})},
                                {EVO_LEVEL, 0, SPECIES_YUKIAGUMON_06, CONDITIONS({IF_SPDEF, 16})},
                                {EVO_LEVEL, 15, SPECIES_FALCOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_PINAMON_GALAR] =
    {
        .baseHP        = 52,
        .baseAttack    = PINAMON_ATTACK + 5,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = PINAMON_EXP_YIELD,
        .evYield_Attack = 1,
        .itemCommon = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pinamon"),
        .cryId = CRY_PINAMON,
        .natDexNum = NATIONAL_DEX_PINAMON,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 420,
        .description = COMPOUND_STRING(
            "The stalks of leeks are thicker and longer\n"
            "in the Galar region. Brave Pinamon\n"
            "warriors that adapted to these stalks\n"
            "took on a unique form."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_PinamonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PinamonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PinamonGalar,
        .shinyPalette = gMonShinyPalette_PinamonGalar,
        .iconSprite = gMonIcon_PinamonGalar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Pinamon)
        OVERWORLD(
            sPicTable_PinamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PinamonGalar,
            gShinyOverworldPalette_PinamonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPinamonGalarLevelUpLearnset,
        .teachableLearnset = sPinamonGalarTeachableLearnset,
        .eggMoveLearnset = sPinamonGalarEggMoveLearnset,
        .formSpeciesIdTable = sPinamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_SIRFETCHD}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Sirfetch'd"),
        .cryId = CRY_SIRFETCHD,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("Wild Duck"),
        .height = 8,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Only Pinamon that have survived many\n"
            "battles can attain this evolution. When\n"
            "this Pokémon's leek withers, it will\n"
            "retire from combat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sirfetchd,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sirfetchd,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sirfetchd,
        .shinyPalette = gMonShinyPalette_Sirfetchd,
        .iconSprite = gMonIcon_Sirfetchd,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sirfetchd)
        OVERWORLD(
            sPicTable_Sirfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sirfetchd,
            gShinyOverworldPalette_Sirfetchd
        )
        .levelUpLearnset = sSirfetchdLevelUpLearnset,
        .teachableLearnset = sSirfetchdTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PINAMON

#if P_FAMILY_POROMON
    [SPECIES_POROMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 24,
        .baseDefense   = 23,
        .baseSpeed     = 27,
        .baseSpAttack  = 25,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Poromon"),
        .cryId = CRY_POROMON,
        .natDexNum = NATIONAL_DEX_POROMON,
        .categoryName = _("Small Bird"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Despire having functioning wings, Poromon\n"
            "can only fly at low altitudes. They are\n"
            "a very tide digimon, sometime's causing \n"
            "fights over their need for tidiness."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Poromon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Poromon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Poromon,
        .shinyPalette = gMonShinyPalette_Poromon,
        .iconSprite = gMonIcon_Poromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PoromonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_PoromonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 5, SHADOW_SIZE_M)
        FOOTPRINT(Poromon)
        OVERWORLD(
            sPicTable_Poromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Poromon,
            gShinyOverworldPalette_Poromon
        )
        OVERWORLD_FEMALE(
            sPicTable_PoromonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPoromonLevelUpLearnset,
        .teachableLearnset = sPoromonTeachableLearnset,
        .eggMoveLearnset = sPoromonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_POMUMON, CONDITIONS({IF_HP, 31})}, // Add Ukkomon
                                {EVO_LEVEL, 0, SPECIES_TINKERMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_FALCOMON_06, CONDITIONS({IF_SPD, 15})},
                                {EVO_LEVEL, 13, SPECIES_HAWKMON}),
    },

    [SPECIES_PUROROMON] =
    {
        .baseHP        = 19,
        .baseAttack    = 24,
        .baseDefense   = 20,
        .baseSpeed     = 30,
        .baseSpAttack  = 23,
        .baseSpDefense = 18,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Puroromon"),
        .cryId = CRY_PUROROMON,
        .natDexNum = NATIONAL_DEX_PUROROMON,
        .categoryName = _("X Antibody"),
        .height = 4,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Although it is tiny in size, it is very\n"
            "hard to catch due it's fast and irratic\n"
            "flying. It is very weak in battle, only\n"
            "being a nuisance for it's opponents."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puroromon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_LUNGE_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Puroromon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Puroromon,
        .shinyPalette = gMonShinyPalette_Puroromon,
        .iconSprite = gMonIcon_Puroromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PuroromonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PuroromonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Puroromon)
        OVERWORLD(
            sPicTable_Puroromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Puroromon,
            gShinyOverworldPalette_Puroromon
        )
        OVERWORLD_FEMALE(
            sPicTable_PuroromonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPuroromonLevelUpLearnset,
        .teachableLearnset = sPuroromonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_RYUDAMON, CONDITIONS({IF_DEF, 12})},
                                {EVO_LEVEL, 0, SPECIES_DORUMON, CONDITIONS({IF_ATK, 13})},
                                {EVO_LEVEL, 11, SPECIES_FANBEEMON}),
    },
#endif //P_FAMILY_POROMON

#if P_FAMILY_PUSURIMON
    [SPECIES_PUSURIMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 28,
        .baseDefense   = 26,
        .baseSpeed     = 28,
        .baseSpAttack  = 23,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pusurimon"),
        .cryId = CRY_PUSURIMON,
        .natDexNum = NATIONAL_DEX_PUSURIMON,
        .categoryName = _("Prickly"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Pusurimon is almost aways seen running\n"
            "around energetically. Sometimes when\n"
            "it stops, it has just fallen asleep\n"
            "on the spot."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pusurimon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Pusurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pusurimon,
        .shinyPalette = gMonShinyPalette_Pusurimon,
        .iconSprite = gMonIcon_Pusurimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Pusurimon)
        OVERWORLD(
            sPicTable_Pusurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Pusurimon,
            gShinyOverworldPalette_Pusurimon
        )
        .levelUpLearnset = sPusurimonLevelUpLearnset,
        .teachableLearnset = sPusurimonTeachableLearnset,
        .eggMoveLearnset = sPusurimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_HERISSMON}),
    },

    [SPECIES_PUYOYOMON] =
    {
        .baseHP        = 21,
        .baseAttack    = 21,
        .baseDefense   = 18,
        .baseSpeed     = 23,
        .baseSpAttack  = 29,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Puyoyomon"),
        .cryId = CRY_PUYOYOMON,
        .natDexNum = NATIONAL_DEX_PUYOYOMON,
        .categoryName = _("Jellyfish"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Puyoyomon are always brimming with\n"
            "curiosity. Once it finds something it\n"
            "likes, it will stick to it until it\n"
            "is bored."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puyoyomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Puyoyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Puyoyomon,
        .shinyPalette = gMonShinyPalette_Puyoyomon,
        .iconSprite = gMonIcon_Puyoyomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Puyoyomon)
        OVERWORLD(
            sPicTable_Puyoyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Puyoyomon,
            gShinyOverworldPalette_Puyoyomon
        )
        .levelUpLearnset = sPuyoyomonLevelUpLearnset,
        .teachableLearnset = sPuyoyomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_KODOKGUMON, CONDITIONS({IF_SPD, 14})},
                                {EVO_LEVEL, 13, SPECIES_JELLYMON}),
    },
#endif //P_FAMILY_PUSURIMON

#if P_FAMILY_SAKUTTOMON
    [SPECIES_SAKUTTOMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 21,
        .baseSpAttack  = 20,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sakuttomon"),
        .cryId = CRY_SAKUTTOMON,
        .natDexNum = NATIONAL_DEX_SAKUTTOMON,
        .categoryName = _("Horn Blade"),
        .height = 4,
        .weight = 90,
        .description = COMPOUND_STRING(
            "Unlike it's younger self, Sakuttomon has\n"
            "finally stabillised itself with two\n"
            "blades. Adorably enough, it is sometimes\n"
            "found stuck in walls and ceilings."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sakuttomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Sakuttomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Sakuttomon,
        .shinyPalette = gMonShinyPalette_Sakuttomon,
        .iconSprite = gMonIcon_Sakuttomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Sakuttomon)
        OVERWORLD(
            sPicTable_Sakuttomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Sakuttomon,
            gShinyOverworldPalette_Sakuttomon
        )
        .levelUpLearnset = sSakuttomonLevelUpLearnset,
        .teachableLearnset = sSakuttomonTeachableLearnset,
        .eggMoveLearnset = sSakuttomonEggMoveLearnset,
        .formSpeciesIdTable = sSakuttomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_RYUDAMON, CONDITIONS({IF_DEF, 19})},
                                {EVO_LEVEL, 0, SPECIES_HACKMON, CONDITIONS({IF_ATK, 22})},
                                {EVO_LEVEL, 17, SPECIES_ZUBAMON}),
    },

    [SPECIES_SUNMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 22,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 29,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_DROUGHT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Sunmon"),
        .cryId = CRY_SUNMON,
        .natDexNum = NATIONAL_DEX_SUNMON,
        .categoryName = _("Sun"),
        .height = 3,
        .weight = 100,
        .description = COMPOUND_STRING(
            "Sunmon have very bright personalities \n"
            "and just general joys to be around. The\n"
            "flame on it's head have been known to\n"
            "burn down tamer homes and forests."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sunmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Sunmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Sunmon,
        .shinyPalette = gMonShinyPalette_Sunmon,
        .iconSprite = gMonIcon_Sunmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sunmon)
        OVERWORLD(
            sPicTable_Sunmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Sunmon,
            gShinyOverworldPalette_Sunmon
        )
        .levelUpLearnset = sSunmonLevelUpLearnset,
        .teachableLearnset = sSunmonTeachableLearnset,
        .formSpeciesIdTable = sSunmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SALAMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_KUDAMON_06, CONDITIONS({IF_HP, 34})},
                                {EVO_LEVEL, 0, SPECIES_GUILMON, CONDITIONS({IF_ATK, 19})},
                                {EVO_LEVEL, 15, SPECIES_CORONAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_SAKUTTOMON_ALOLA] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sakuttomon"),
        .cryId = CRY_SAKUTTOMON,
        .natDexNum = NATIONAL_DEX_SAKUTTOMON,
        .categoryName = _("Sludge"),
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING(
            "There are a hundred or so of them living\n"
            "in Alola's waste-disposal site. They're all\n"
            "hard workers who eat a lot of trash. Sakuttomon\n"
            "seems to relish any and all kinds of trash."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SakuttomonAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SakuttomonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SakuttomonAlola,
        .shinyPalette = gMonShinyPalette_SakuttomonAlola,
        .iconSprite = gMonIcon_SakuttomonAlola,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 1, SHADOW_SIZE_M)
        FOOTPRINT(Sakuttomon)
        OVERWORLD(
            sPicTable_SakuttomonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SakuttomonAlola,
            gShinyOverworldPalette_SakuttomonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSakuttomonAlolaLevelUpLearnset,
        .teachableLearnset = sSakuttomonAlolaTeachableLearnset,
        .eggMoveLearnset = sSakuttomonAlolaEggMoveLearnset,
        .formSpeciesIdTable = sSakuttomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_SUNMON_ALOLA}),
    },

    [SPECIES_SUNMON_ALOLA] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 157,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("Sunmon"),
        .cryId = CRY_SUNMON,
        .natDexNum = NATIONAL_DEX_SUNMON,
        .categoryName = _("Sludge"),
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING(
            "While it's unexpectedly quiet and friendly,\n"
            "if it's not fed any trash for a while,,\n"
            "it will smash its Trainer's furnishings,\n"
            "and eat up the fragments."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SunmonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SunmonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SunmonAlola,
        .shinyPalette = gMonShinyPalette_SunmonAlola,
        .iconSprite = gMonIcon_SunmonAlola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sunmon)
        OVERWORLD(
            sPicTable_SunmonAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SunmonAlola,
            gShinyOverworldPalette_SunmonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSunmonAlolaLevelUpLearnset,
        .teachableLearnset = sSunmonAlolaTeachableLearnset,
        .formSpeciesIdTable = sSunmonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SAKUTTOMON

#if P_FAMILY_TANEMON
    [SPECIES_TANEMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 23,
        .baseDefense   = 28,
        .baseSpeed     = 23,
        .baseSpAttack  = 25,
        .baseSpDefense = 24,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OVERGROW, ABILITY_CHLOROPHYLL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tanemon"),
        .cryId = CRY_TANEMON,
        .natDexNum = NATIONAL_DEX_TANEMON,
        .categoryName = _("Foliage"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tanemon have incredibly good hiding \n"
            "capabilites, with it disguising well in\n"
            "surrounding foliage. However it\n"
            "struggles against herbivore digimon."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tanemon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Tanemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 24),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tanemon,
        .shinyPalette = gMonShinyPalette_Tanemon,
        .iconSprite = gMonIcon_Tanemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -4, SHADOW_SIZE_S)
        FOOTPRINT(Tanemon)
        OVERWORLD(
            sPicTable_Tanemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Tanemon,
            gShinyOverworldPalette_Tanemon
        )
        .levelUpLearnset = sTanemonLevelUpLearnset,
        .teachableLearnset = sTanemonTeachableLearnset,
        .eggMoveLearnset = sTanemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MUSHROOMON, CONDITIONS({IF_HP, 32})},
                                {EVO_LEVEL, 0, SPECIES_ARURAUMON, CONDITIONS({IF_SPDEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_LALAMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_FLORAMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 14, SPECIES_PALMON}),
    },

    [SPECIES_TOKOMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 30,
        .baseDefense   = 24,
        .baseSpeed     = 26,
        .baseSpAttack  = 25,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tokomon"),
        .cryId = CRY_TOKOMON,
        .natDexNum = NATIONAL_DEX_TOKOMON,
        .categoryName = _("Biting"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "While Tokomon is very cute, tamers \n"
            "should be wary as it can suddenly snap\n"
            "at you with it's fangs which are very\n"
            "sharp and closely packed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Tokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Tokomon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Tokomon,
        .shinyPalette = gMonShinyPalette_Tokomon,
        .iconSprite = gMonIcon_Tokomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Tokomon)
        OVERWORLD(
            sPicTable_Tokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Tokomon,
            gShinyOverworldPalette_Tokomon
        )
        .levelUpLearnset = sTokomonLevelUpLearnset,
        .teachableLearnset = sTokomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_DEMIDEVMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 0, SPECIES_TSUKAIMON, CONDITIONS({IF_SPATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_DOTFALCMON, CONDITIONS({IF_HP, 32})},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_TOKOMON_X},
                                {EVO_LEVEL, 14, SPECIES_PATAMON}),
    },
#endif //P_FAMILY_TANEMON

#if P_FAMILY_TOKOMON_X
    [SPECIES_TOKOMON_X] =
    {
        .baseHP        = 24,
        .baseAttack    = 30,
        .baseDefense   = 26,
        .baseSpeed     = 28,
        .baseSpAttack  = 24,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tokomon"),
        .cryId = CRY_TOKOMON_X,
        .natDexNum = NATIONAL_DEX_TOKOMON_X,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tokomon X is even more valiant than\n"
            "its normal counterpart. No matter the\n"
            "setbacks, it will not be discouraged\n"
            "in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tokomon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLACK : ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 13,
        .backPic = gMonBackPic_Tokomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Tokomon_x,
        .shinyPalette = gMonShinyPalette_Tokomon_x,
        .iconSprite = gMonIcon_Tokomon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Tokomon_x)
        OVERWORLD(
            sPicTable_Tokomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Tokomon_x,
            gShinyOverworldPalette_Tokomon_x
        )
        .levelUpLearnset = sTokomon_xLevelUpLearnset,
        .teachableLearnset = sTokomon_xTeachableLearnset,
        .eggMoveLearnset = sTokomon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_HERISSMON, CONDITIONS({IF_DEF, 18})},
                                {EVO_LEVEL, 0, SPECIES_GABUMON_X, CONDITIONS({IF_SPDEF, 17})},
                                {EVO_LEVEL, 0, SPECIES_DRACOMON_X, CONDITIONS({IF_ATK, 19})},
                                {EVO_LEVEL, 0, SPECIES_AGUMON_X, CONDITIONS({IF_SPATK, 18})},
                                {EVO_LEVEL, 17, SPECIES_RENAMON_X}),
    },

    [SPECIES_TORBALLMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 27,
        .baseSpAttack  = 28,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_STENCH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Torballmon"),
        .cryId = CRY_TORBALLMON,
        .natDexNum = NATIONAL_DEX_TORBALLMON,
        .categoryName = _("Deep Fried"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "TorikaBallmon is digimon that was likely\n"
            "born from a deep-fried food recipe. Its\n"
            "scent is often used by tamers to either\n"
            "weaken or lure digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Torballmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 14,
        .backPic = gMonBackPic_Torballmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Torballmon,
        .shinyPalette = gMonShinyPalette_Torballmon,
        .iconSprite = gMonIcon_Torballmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Torballmon)
        OVERWORLD(
            sPicTable_Torballmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Torballmon,
            gShinyOverworldPalette_Torballmon
        )
        .levelUpLearnset = sTorBallmonLevelUpLearnset,
        .teachableLearnset = sTorballmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_EBIBURGMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 13, SPECIES_BURGERMON}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define TSUMEMON_ABILITIES {ABILITY_CURSED_BODY, ABILITY_NONE}
#else
#define TSUMEMON_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE}
#endif

    [SPECIES_TSUMEMON] =
    {
        .baseHP        = 20,
        .baseAttack    = 28,
        .baseDefense   = 21,
        .baseSpeed     = 30,
        .baseSpAttack  = 24,
        .baseSpDefense = 20,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Virus"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tsumemon is very ferocious digimon that\n"
            "uses the claws on the tips of its feelers.\n"
            "to corrode data. They are rarely tamed as\n"
            "it's too fast for tamers or digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Tsumemon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Tsumemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Tsumemon,
        .shinyPalette = gMonShinyPalette_Tsumemon,
        .iconSprite = gMonIcon_Tsumemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_L)
        FOOTPRINT(Tsumemon)
        OVERWORLD(
            sPicTable_Tsumemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tsumemon,
            gShinyOverworldPalette_Tsumemon
        )
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_BLKGUILMON, CONDITIONS({IF_ATK, 16})},
                                {EVO_LEVEL, 0, SPECIES_DEMIDEVMON, CONDITIONS({IF_SPD, 17})},
                                {EVO_LEVEL, 0, SPECIES_BLKGABUMON, CONDITIONS({IF_SPDEF, 14})},
                                {EVO_LEVEL, 0, SPECIES_BLKAGUMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 14, SPECIES_KERAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TSUMEMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 200,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 300 : 270,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON_MEGA,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Shadow"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Tsumemon's relationships are warped. It\n"
            "tries to take the lives of anyone and\n"
            "everyone. It will even try to curse the\n"
            "Trainer who is its master!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_TsumemonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsumemonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_TsumemonMega,
        .shinyPalette = gMonShinyPalette_TsumemonMega,
        .iconSprite = gMonIcon_TsumemonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tsumemon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_TsumemonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TsumemonMega,
            gShinyOverworldPalette_TsumemonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_TSUMEMON_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 75 : 130,
        .types = MON_TYPES(TYPE_GHOST, TYPE_POISON),
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = TSUMEMON_ABILITIES,
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsumemon"),
        .cryId = CRY_TSUMEMON,
        .natDexNum = NATIONAL_DEX_TSUMEMON,
        .categoryName = _("Shadow"),
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rumor has it that its gigantic\n"
            "mouth leads not into its body, filled\n"
            "with cursed energy, but instead\n"
            "directly to the afterlife."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_TsumemonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsumemonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TsumemonGmax,
        .shinyPalette = gMonShinyPalette_TsumemonGmax,
        .iconSprite = gMonIcon_TsumemonGmax,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Tsumemon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOKOMON_X

#if P_FAMILY_TSUNOMON
    [SPECIES_TSUNOMON] =
    {
        .baseHP        = 26,
        .baseAttack    = 31,
        .baseDefense   = 23,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 26,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tsunomon"),
        .cryId = CRY_TSUNOMON,
        .natDexNum = NATIONAL_DEX_TSUNOMON,
        .categoryName = _("Horn"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Tsunomon has a playful personality and\n"
            "loves pulling pranks on other digimon.\n"
            "Unlike many In-Training digimon, it has\n"
            "good battle sense as well."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        .frontPic = gMonFrontPic_Tsunomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RAPID_H_HOPS : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Tsunomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Tsunomon,
        .shinyPalette = gMonShinyPalette_Tsunomon,
        .iconSprite = gMonIcon_Tsunomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tsunomon)
        OVERWORLD(
            sPicTable_Tsunomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Tsunomon,
            gShinyOverworldPalette_Tsunomon
        )
        .levelUpLearnset = sTsunomonLevelUpLearnset,
        .teachableLearnset = sTsunomonTeachableLearnset,
        .eggMoveLearnset = sTsunomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MONMON, CONDITIONS({IF_SPD, 17})},
                                {EVO_LEVEL, 0, SPECIES_SYAKOMON, CONDITIONS({IF_DEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_PSYCHEMON, CONDITIONS({IF_HP, 36})},
                                {EVO_LEVEL, 0, SPECIES_ELECMON, CONDITIONS({IF_ATK, 19})},
                                {EVO_LEVEL, 16, SPECIES_GABUMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KODEKACMON] =
    {
        .baseHP        = 42,
        .baseAttack    = 46,
        .baseDefense   = 45,
        .baseSpeed     = 49,
        .baseSpAttack  = 44,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kodekacmon"),
        .cryId = CRY_KODEKACMON,
        .natDexNum = NATIONAL_DEX_KODEKACMON,
        .categoryName = _("Bossy"),
        .height = 8,
        .weight = 273,
        .description = COMPOUND_STRING(
            "Often mistaken for In-Training Digimon, \n"
            "Minidekachimon is actually just a small\n"
            "Rookie Digimon. It spends its time bossing\n"
            "Atamadekachimon around."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Kodekacmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 21),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 21),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SHAKE : ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Kodekacmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kodekacmon,
        .shinyPalette = gMonShinyPalette_Kodekacmon,
        .iconSprite = gMonIcon_Kodekacmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KodekacmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_KodekacmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kodekacmon)
        OVERWORLD(
            sPicTable_Kodekacmon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Kodekacmon,
            gShinyOverworldPalette_Kodekacmon
        )
        OVERWORLD_FEMALE(
            sPicTable_KodekacmonF,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sKodekacmonLevelUpLearnset,
        .teachableLearnset = sKodekacmonTeachableLearnset,
        .formSpeciesIdTable = sKodekacmonFormSpeciesIdTable,
        .formChangeTable = sKodekacmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_ATAMADEMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KODEKACMON_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_STEEL, TYPE_GROUND),
        .catchRate = 25,
        .expYield = 214,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kodekacmon"),
        .cryId = CRY_KODEKACMON_MEGA,
        .natDexNum = NATIONAL_DEX_KODEKACMON,
        .categoryName = _("Iron Snake"),
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING(
            "The cells within its body, crystallized by\n"
            "the energy produced from Mega Evolution,\n"
            "are stronger than any mineral and able\n"
            "to withstand any temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_KodekacmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KodekacmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_KodekacmonMega,
        .shinyPalette = gMonShinyPalette_KodekacmonMega,
        .iconSprite = gMonIcon_KodekacmonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kodekacmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_KodekacmonMega,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_KodekacmonMega,
            gShinyOverworldPalette_KodekacmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKodekacmonLevelUpLearnset,
        .teachableLearnset = sKodekacmonTeachableLearnset,
        .formSpeciesIdTable = sKodekacmonFormSpeciesIdTable,
        .formChangeTable = sKodekacmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_TSUNOMON

#if P_FAMILY_TUMBLEMON
    [SPECIES_TUMBLEMON] =
    {
        .baseHP        = 30,
        .baseAttack    = 28,
        .baseDefense   = 27,
        .baseSpeed     = 21,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_ROCK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tumblemon"),
        .cryId = CRY_TUMBLEMON,
        .natDexNum = NATIONAL_DEX_TUMBLEMON,
        .categoryName = _("Ore"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Tumblemon grows by eating rocks. It stores\n"
            "a small bit of ore in it's body for \n"
            "nourishment. When it eats, it turns blind\n"
            "as it's eye is in its mouth."),
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tumblemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCLE_C_CLOCKWISE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        .backPic = gMonBackPic_Tumblemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tumblemon,
        .shinyPalette = gMonShinyPalette_Tumblemon,
        .iconSprite = gMonIcon_Tumblemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Tumblemon)
        OVERWORLD(
            sPicTable_Tumblemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tumblemon,
            gShinyOverworldPalette_Tumblemon
        )
        .levelUpLearnset = sTumblemonLevelUpLearnset,
        .teachableLearnset = sTumblemonTeachableLearnset,
        .eggMoveLearnset = sTumblemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_EKAKIMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_BAKOMON, CONDITIONS({IF_HP, 36})},
                                {EVO_LEVEL, 0, SPECIES_GOTSUMON, CONDITIONS({IF_DEF, 17})},
                                {EVO_LEVEL, 0, SPECIES_STRABIMON, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 15, SPECIES_SUNARZAMON}),
    },

    [SPECIES_UPAMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 22,
        .baseDefense   = 19,
        .baseSpeed     = 24,
        .baseSpAttack  = 22,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Upamon"),
        .cryId = CRY_UPAMON,
        .natDexNum = NATIONAL_DEX_UPAMON,
        .categoryName = _("Axolotl"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although Upamon can live on both land and\n"
            "water, it prefer's to stick to land. It\n"
            "is often bullied by other digimon however\n"
            "it mistakes it for being played with."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Upamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Upamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Upamon,
        .shinyPalette = gMonShinyPalette_Upamon,
        .iconSprite = gMonIcon_Upamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_UpamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_UpamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Upamon)
        OVERWORLD(
            sPicTable_Upamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Upamon,
            gShinyOverworldPalette_Upamon
        )
        OVERWORLD_FEMALE(
            sPicTable_UpamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sUpamonLevelUpLearnset,
        .teachableLearnset = sUpamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_PILLOMON, CONDITIONS({IF_SPDEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_DAMEMON, CONDITIONS({IF_SPD, 16})},
                                {EVO_LEVEL, 0, SPECIES_BOKOMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_SANGOMON, CONDITIONS({IF_HP, 34})},
                                {EVO_LEVEL, 15, SPECIES_ARMADILMON}),
    },
#endif //P_FAMILY_TUMBLEMON

#if P_FAMILY_VIXIMON
    [SPECIES_VIXIMON] =
    {
        .baseHP        = 28,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 29,
        .baseSpAttack  = 22,
        .baseSpDefense = 23,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Viximon"),
        .cryId = CRY_VIXIMON,
        .natDexNum = NATIONAL_DEX_VIXIMON,
        .categoryName = _("Fox"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Although erratic and hard to catch, \n"
            "Viximon can be easily lured by the its\n"
            "favourite food. They only act in the\n"
            "evening and moonlit nights."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Viximon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Viximon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Viximon,
        .shinyPalette = gMonShinyPalette_Viximon,
        .iconSprite = gMonIcon_Viximon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Viximon)
        OVERWORLD(
            sPicTable_Viximon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Viximon,
            gShinyOverworldPalette_Viximon
        )
        .levelUpLearnset = sViximonLevelUpLearnset,
        .teachableLearnset = sViximonTeachableLearnset,
        .eggMoveLearnset = sViximonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_NEEMON, CONDITIONS({IF_DEF, 17})},
                                {EVO_LEVEL, 0, SPECIES_TERRIERMON_ASSISTANT, CONDITIONS({IF_SPDEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_CUTEMON, CONDITIONS({IF_HP, 39})},
                                {EVO_LEVEL, 0, SPECIES_TYUTYUMON, CONDITIONS({IF_SPATK, 18})},
                                {EVO_LEVEL, 18, SPECIES_RENAMON}),
    },

    [SPECIES_WANYAMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 26,
        .baseDefense   = 23,
        .baseSpeed     = 31,
        .baseSpAttack  = 21,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Wanyamon"),
        .cryId = CRY_WANYAMON,
        .natDexNum = NATIONAL_DEX_WANYAMON,
        .categoryName = _("Dog"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Wanyamon is very standoffish digimon\n"
            "when found in the wild however once\n"
            "show affection, it becomes attached\n"
            "like a pet."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wanyamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 14),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_ZIGZAG_SLOW : ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backPic = gMonBackPic_Wanyamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Wanyamon,
        .shinyPalette = gMonShinyPalette_Wanyamon,
        .iconSprite = gMonIcon_Wanyamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wanyamon)
        OVERWORLD(
            sPicTable_Wanyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wanyamon,
            gShinyOverworldPalette_Wanyamon
        )
        .levelUpLearnset = sWanyamonLevelUpLearnset,
        .teachableLearnset = sWanyamonTeachableLearnset,
        .formSpeciesIdTable = sWanyamonFormSpeciesIdTable,
        .formChangeTable = sWanyamonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_PAWNMON_WHITE, CONDITIONS({IF_ATK, 17})},
                                {EVO_LEVEL, 0, SPECIES_KODEKACMON, CONDITIONS({IF_DEF, 16})},
                                {EVO_LEVEL, 0, SPECIES_LUXMON, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_DONDOKOMON, CONDITIONS({IF_SPD, 18})},
                                {EVO_LEVEL, 15, SPECIES_GAOMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_WANYAMON_GMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 70,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 166 : 206,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Wanyamon"),
        .cryId = CRY_WANYAMON,
        .natDexNum = NATIONAL_DEX_WANYAMON,
        .categoryName = _("Pincer"),
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flow of Gigantamax energy has\n"
            "spurred this Pokémon's left pincer\n"
            "to grow to an enormous size. That\n"
            "claw can pulverize anything."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WanyamonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WanyamonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WanyamonGmax,
        .shinyPalette = gMonShinyPalette_WanyamonGmax,
        .iconSprite = gMonIcon_WanyamonGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Wanyamon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sWanyamonLevelUpLearnset,
        .teachableLearnset = sWanyamonTeachableLearnset,
        .formSpeciesIdTable = sWanyamonFormSpeciesIdTable,
        .formChangeTable = sWanyamonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_VIXIMON

#if P_FAMILY_XIAOMON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define YAAMON_EXP_YIELD 172
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define YAAMON_EXP_YIELD 168
#else
    #define YAAMON_EXP_YIELD 150
#endif

    [SPECIES_XIAOMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 26,
        .baseDefense   = 23,
        .baseSpeed     = 30,
        .baseSpAttack  = 24,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Xiaomon"),
        .cryId = CRY_XIAOMON,
        .natDexNum = NATIONAL_DEX_XIAOMON,
        .categoryName = _("Artificial"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Xiaomon is one of the most commonly \n"
            "created artificial digimon. It forms very\n"
            "strong attachments to people and is \n"
            "considered one of the easiest to train."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Xiaomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SWING_CONCAVE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backPic = gMonBackPic_Xiaomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Xiaomon,
        .shinyPalette = gMonShinyPalette_Xiaomon,
        .iconSprite = gMonIcon_Xiaomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Xiaomon)
        OVERWORLD(
            sPicTable_Xiaomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Xiaomon,
            gShinyOverworldPalette_Xiaomon
        )
        .levelUpLearnset = sXiaomonLevelUpLearnset,
        .teachableLearnset = sXiaomonTeachableLearnset,
        .formSpeciesIdTable = sXiaomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_VEMMON, CONDITIONS({IF_SPDEF, 13})},
                                {EVO_LEVEL, 0, SPECIES_IGNITEMON, CONDITIONS({IF_ATK, 14})},
                                {EVO_LEVEL, 0, SPECIES_AGUMON_FAKE_EXPERT, CONDITIONS({IF_SPATK, 14})},
                                {EVO_LEVEL, 12, SPECIES_LABRAMON}),
    },

    [SPECIES_YAAMON] =
    {
        .baseHP        = 24,
        .baseAttack    = 22,
        .baseDefense   = 21,
        .baseSpeed     = 26,
        .baseSpAttack  = 30,
        .baseSpDefense = 28,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Yaamon"),
        .cryId = CRY_YAAMON,
        .natDexNum = NATIONAL_DEX_YAAMON,
        .categoryName = _("Twisted"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Yaamon is twisted digimon that will do\n"
            "anything to have it's own fun including\n"
            "tormenting digimon. It will then mock\n"
            "the stunned digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yaamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 34),
            ANIMCMD_FRAME(1, 34),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Yaamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Yaamon,
        .shinyPalette = gMonShinyPalette_Yaamon,
        .iconSprite = gMonIcon_Yaamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Yaamon)
        OVERWORLD(
            sPicTable_Yaamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Yaamon,
            gShinyOverworldPalette_Yaamon
        )
        .levelUpLearnset = sYaamonLevelUpLearnset,
        .teachableLearnset = sYaamonTeachableLearnset,
        .formSpeciesIdTable = sYaamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SOUNBRDMON, CONDITIONS({IF_SPD, 16})},
                                {EVO_LEVEL, 0, SPECIES_PETITMAMON, CONDITIONS({IF_SPATK, 18})},
                                {EVO_LEVEL, 0, SPECIES_GIZUMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 0, SPECIES_GAOSSMON, CONDITIONS({IF_ATK, 15})},
                                {EVO_LEVEL, 15, SPECIES_IMPMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_XIAOMON_HISUI] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 103,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Xiaomon"),
        .cryId = CRY_XIAOMON,
        .natDexNum = NATIONAL_DEX_XIAOMON,
        .categoryName = _("Sphere"),
        .height = 5,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It esembles an ancient Poké Ball design.\n"
            "When excited, it discharges the electric\n"
            "current it has stored in its belly, then\n"
            "lets out a great, uproarious laugh."),
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_XiaomonHisui,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_XiaomonHisui,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_XiaomonHisui,
        .shinyPalette = gMonShinyPalette_XiaomonHisui,
        .iconSprite = gMonIcon_XiaomonHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Xiaomon)
        OVERWORLD(
            sPicTable_XiaomonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XiaomonHisui,
            gShinyOverworldPalette_XiaomonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sXiaomonHisuiLevelUpLearnset,
        .teachableLearnset = sXiaomonHisuiTeachableLearnset,
        .formSpeciesIdTable = sXiaomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_YAAMON_HISUI}),
    },

    [SPECIES_YAAMON_HISUI] =
    {
        .baseHP        = 70,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_GRASS),
        .catchRate = 70,
        .expYield = YAAMON_EXP_YIELD,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yaamon"),
        .cryId = CRY_YAAMON,
        .natDexNum = NATIONAL_DEX_YAAMON,
        .categoryName = _("Sphere"),
        .height = 12,
        .weight = 710,
        .description = COMPOUND_STRING(
            "The tissue on the surface of its body is\n"
            "similar in composition to an Apricorn.\n"
            "When irritated, it lets loose an electric\n"
            "current equal to 20 lightning bolts."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_YaamonHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_YaamonHisui,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_YaamonHisui,
        .shinyPalette = gMonShinyPalette_YaamonHisui,
        .iconSprite = gMonIcon_YaamonHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Yaamon)
        OVERWORLD(
            sPicTable_YaamonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_YaamonHisui,
            gShinyOverworldPalette_YaamonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sYaamonHisuiLevelUpLearnset,
        .teachableLearnset = sYaamonHisuiTeachableLearnset,
        .formSpeciesIdTable = sYaamonFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_XIAOMON

#if P_FAMILY_YOKOMON
    [SPECIES_YOKOMON] =
    {
        .baseHP        = 22,
        .baseAttack    = 24,
        .baseDefense   = 22,
        .baseSpeed     = 25,
        .baseSpAttack  = 23,
        .baseSpDefense = 22,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Yokomon"),
        .cryId = CRY_YOKOMON,
        .natDexNum = NATIONAL_DEX_YOKOMON,
        .categoryName = _("Bulb"),
        .height = 3,
        .weight = 45,
        .description = COMPOUND_STRING(
            "Yokomon is able to move skillfully by \n"
            "using it's root-like tentacles. They like\n"
            "to live in flocks, the flocks are known\n"
            "to grow up to a few hundred quickly."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Yokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Yokomon,
        .shinyPalette = gMonShinyPalette_Yokomon,
        .iconSprite = gMonIcon_Yokomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -5, SHADOW_SIZE_L)
        FOOTPRINT(Yokomon)
        OVERWORLD(
            sPicTable_Yokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Yokomon,
            gShinyOverworldPalette_Yokomon
        )
        .levelUpLearnset = sYokomonLevelUpLearnset,
        .teachableLearnset = sYokomonTeachableLearnset,
        .eggMoveLearnset = sYokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SANTAAGUMON, CONDITIONS({IF_SPD, 15})},
                                {EVO_LEVEL, 0, SPECIES_OTAMAMON_RED, CONDITIONS({IF_SPATK, 15})},
                                {EVO_LEVEL, 0, SPECIES_MODBETAMON, CONDITIONS({IF_HP, 32})},
                                {EVO_LEVEL, 0, SPECIES_SPARROWMON, CONDITIONS({IF_DEF, 15})},
                                {EVO_LEVEL, 14, SPECIES_BIYOMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define AGUMON_EXP_YIELD 186
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define AGUMON_EXP_YIELD 182
#else
    #define AGUMON_EXP_YIELD 212
#endif

    [SPECIES_AGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack = 1,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_BATTLE_BOND },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON,
        .natDexNum = NATIONAL_DEX_AGUMON,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Agumon are thought to be very arrogant\n"
            "digimon due to their frequency of fighting\n"
            "stronger digimon but it's actually because\n"
            "they lack any understanding of fear."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Agumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Agumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agumon,
        .shinyPalette = gMonShinyPalette_Agumon,
        .iconSprite = gMonIcon_Agumon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Agumon)
        OVERWORLD(
            sPicTable_Agumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon,
            gShinyOverworldPalette_Agumon
        )
        .levelUpLearnset = sAgumonLevelUpLearnset,
        .teachableLearnset = sAgumonTeachableLearnset,
        .formSpeciesIdTable = sAgumonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKAGUMON}, // DARK DIGITRON
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_AGUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 30, SPECIES_CENTARUMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_AGUMON_ALOLA] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_GRASS, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = AGUMON_EXP_YIELD,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON,
        .natDexNum = NATIONAL_DEX_AGUMON,
        .categoryName = _("Coconut"),
        .height = 109,
        .weight = 4156,
        .description = COMPOUND_STRING(
            "Alola is the best environment for\n"
            "this Pokémon. Local people take pride\n"
            "in its appearance, saying this is how\n"
            "Agumon ought to look."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_AgumonAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AgumonAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AgumonAlola,
        .shinyPalette = gMonShinyPalette_AgumonAlola,
        .iconSprite = gMonIcon_AgumonAlola,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Agumon)
        OVERWORLD(
            sPicTable_AgumonAlola,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AgumonAlola,
            gShinyOverworldPalette_AgumonAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sAgumonAlolaLevelUpLearnset,
        .teachableLearnset = sAgumonAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumonFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_YOKOMON

#if P_FAMILY_AGUMON_06
    [SPECIES_AGUMON_06] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_HUSTLE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_06,
        .natDexNum = NATIONAL_DEX_AGUMON_06,
        .categoryName = _("T-Rex"),
        .height = 13,
        .weight = 220,
        .description = COMPOUND_STRING(
            "This Agumon is exactly the same in nearly\n"
            "every way as a normal Agumon however the\n"
            "red straps on its hands seem to unlock\n"
            "the potential for a new digivolution."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_06,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_LOOP(1),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 30,
        .backPic = gMonBackPic_Agumon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Agumon_06,
        .shinyPalette = gMonShinyPalette_Agumon_06,
        .iconSprite = gMonIcon_Agumon_06,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Agumon_06)
        OVERWORLD(
            sPicTable_Agumon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_06,
            gShinyOverworldPalette_Agumon_06
        )
        .levelUpLearnset = sAgumon_06LevelUpLearnset,
        .teachableLearnset = sAgumon_06TeachableLearnset,
        .eggMoveLearnset = sAgumon_06EggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

    [SPECIES_AGUMON_EXPERT] =
    {
        .baseHP        = 46,
        .baseAttack    = 59,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 59,
        .baseSpDefense = 68,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BLAZE, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("T-Rex"),
        .height = 12,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Many mistake Agumon Expert as just a\n"
            "normal Agumon having a laugh, it is \n"
            "actually a very smart digimon, having its\n"
            "own Doctorate from Digital World Academy."),
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expert,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 14),
            ANIMCMD_FRAME(0, 14),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Agumon_expert,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agumon_expert,
        .shinyPalette = gMonShinyPalette_Agumon_expert,
        .iconSprite = gMonIcon_Agumon_expert,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 6, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_expert,
            gShinyOverworldPalette_Agumon_expert
        )
        .levelUpLearnset = sAgumon_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_COREDRAMON_GREEN}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_AGUMON_EXPERT_ALOLA] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 124,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("Bone Keeper"),
        .height = 10,
        .weight = 340,
        .description = gAgumon_expertAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expertAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_expertAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Agumon_expertAlola,
        .shinyPalette = gMonShinyPalette_Agumon_expertAlola,
        .iconSprite = gMonIcon_Agumon_expertAlola,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expertAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_expertAlola,
            gShinyOverworldPalette_Agumon_expertAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sAgumon_expertAlolaLevelUpLearnset,
        .teachableLearnset = sAgumon_expertAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
    },

    [SPECIES_AGUMON_EXPERT_ALOLA_TOTEM] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_EXPERT,
        .categoryName = _("Bone Keeper"),
        .height = 17,
        .weight = 980,
        .description = gAgumon_expertAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Agumon_expertAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_expertAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Agumon_expertAlola,
        .shinyPalette = gMonShinyPalette_Agumon_expertAlola,
        .iconSprite = gMonIcon_Agumon_expertAlola,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_expert)
        OVERWORLD(
            sPicTable_Agumon_expertAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_expertAlola,
            gShinyOverworldPalette_Agumon_expertAlola
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_expertAlolaLevelUpLearnset,
        .teachableLearnset = sAgumon_expertAlolaTeachableLearnset,
        .formSpeciesIdTable = sAgumon_expertFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_AGUMON_06

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SALAMON] =
    {
        .baseHP        = 46,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 54,
        .baseSpAttack  = 45,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Salamon"),
        .cryId = CRY_SALAMON,
        .natDexNum = NATIONAL_DEX_SALAMON,
        .categoryName = _("Holy"),
        .height = 3,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Technically it is a holy Digimon however\n"
            "it is so young that it can't manifest its\n"
            "holy power. It is a very anxious Digimon\n"
            "that is easily bullied by others."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Salamon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Salamon,
        .shinyPalette = gMonShinyPalette_Salamon,
        .iconSprite = gMonIcon_Salamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Salamon)
        OVERWORLD(
            sPicTable_Salamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salamon,
            gShinyOverworldPalette_Salamon
        )
        .levelUpLearnset = sSalamonLevelUpLearnset,
        .teachableLearnset = sSalamonTeachableLearnset,
        .eggMoveLearnset = sSalamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKGATOMON}, // DARK DIGITRON
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_SALAMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 30, SPECIES_GATOMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_AGUMON_X] =
    {
        .baseHP        = 57,
        .baseAttack    = 76,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 63,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_X,
        .natDexNum = NATIONAL_DEX_AGUMON_X,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 230,
        .description = COMPOUND_STRING(
            "This Agumon has developed unique blue lines\n"
            "across it's body, making it more akin to\n"
            "its common digivolution, Greymon. Its\n"
            "claws are now longer and sharper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Agumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Agumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Agumon_x,
        .shinyPalette = gMonShinyPalette_Agumon_x,
        .iconSprite = gMonIcon_Agumon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_x)
        OVERWORLD(
            sPicTable_Agumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_x,
            gShinyOverworldPalette_Agumon_x
        )
        .levelUpLearnset = sAgumon_XLevelUpLearnset,
        .teachableLearnset = sAgumon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_BLKAGUMON_X}, //DARK DIGITRON
                                {EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

    [SPECIES_ANGORAMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 48,
        .baseDefense   = 55,
        .baseSpeed     = 53,
        .baseSpAttack  = 50,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Angoramon"),
        .cryId = CRY_ANGORAMON,
        .natDexNum = NATIONAL_DEX_ANGORAMON,
        .categoryName = _("Rabbit"),
        .height = 22,
        .weight = 420,
        .description = COMPOUND_STRING(
            "Although it wouldn't like it, Angoramon\n"
            "has good capabilities to fly using its\n"
            "large ears that spin. Those same ears also\n"
            "have great hearing capabilities."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Angoramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 17),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Angoramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Angoramon,
        .shinyPalette = gMonShinyPalette_Angoramon,
        .iconSprite = gMonIcon_Angoramon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Angoramon)
        OVERWORLD(
            sPicTable_Angoramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Angoramon,
            gShinyOverworldPalette_Angoramon
        )
        .levelUpLearnset = sAngoramonLevelUpLearnset,
        .teachableLearnset = sAngoramonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_DOGGYMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SALAMON_X] =
    {
        .baseHP        = 45,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 54,
        .baseSpAttack  = 51,
        .baseSpDefense = 46,
        .types = MON_TYPES(TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_EPIPHANY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Salamon"),
        .cryId = CRY_SALAMON_X,
        .natDexNum = NATIONAL_DEX_SALAMON_X,
        .categoryName = _("X Antibody"),
        .height = 3,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Unlike normal Salamon, Salamon X will\n"
            "have much stronger holy power. It still\n"
            "can't manifest it on its own however\n"
            "it can subconsciously use it."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Salamon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 26),
            ANIMCMD_FRAME(0, 14),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Salamon_x,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Salamon_x,
        .shinyPalette = gMonShinyPalette_Salamon_x,
        .iconSprite = gMonIcon_Salamon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Salamon_x)
        OVERWORLD(
            sPicTable_Salamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salamon_x,
            gShinyOverworldPalette_Salamon_x
        )
        .levelUpLearnset = sSalamon_xLevelUpLearnset,
        .teachableLearnset = sSalamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_GATOMON_X}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_ARCADIAMON_ROOKIE
    [SPECIES_ARCADIAMON_ROOKIE] =
    {
        .baseHP        = 52,
        .baseAttack    = 71,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 71,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 135,
        .expYield = 120,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_BEAST_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Arcadiamon"),
        .cryId = CRY_ARCADIAMON_ROOKIE,
        .natDexNum = NATIONAL_DEX_ARCADIAMON_ROOKIE,
        .categoryName = _("Ultimate"),
        .height = 9,
        .weight = 265,
        .description = COMPOUND_STRING(
            "Unlike other Digimon, Arcadiamon can\n"
            "only evolve by absorbing other digimon\n"
            "data. It is also not clear if Arcadiamon\n"
            "has a sense of self."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Arcadiamon_rookie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Arcadiamon_rookie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Arcadiamon_rookie,
        .shinyPalette = gMonShinyPalette_Arcadiamon_rookie,
        .iconSprite = gMonIcon_Arcadiamon_rookie,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Arcadiamon_rookie)
        OVERWORLD(
            sPicTable_Arcadiamon_rookie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arcadiamon_rookie,
            gShinyOverworldPalette_Arcadiamon_rookie
        )
        .levelUpLearnset = sArcadiamon_rookieLevelUpLearnset,
        .teachableLearnset = sArcadiamon_rookieTeachableLearnset,
        .eggMoveLearnset = sArcadiamon_rookieEggMoveLearnset,
        
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 193,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lickilicky"),
        .cryId = CRY_LICKILICKY,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("Licking"),
        .height = 17,
        .weight = 1400,
        .description = COMPOUND_STRING(
            "The long tongue is always soggy with\n"
            "slobber. The saliva contains a solvent\n"
            "that causes numbness. Getting too close\n"
            "to it will leave you soaked with drool."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Lickilicky,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lickilicky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lickilicky,
        .shinyPalette = gMonShinyPalette_Lickilicky,
        .iconSprite = gMonIcon_Lickilicky,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lickilicky)
        OVERWORLD(
            sPicTable_Lickilicky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lickilicky,
            gShinyOverworldPalette_Lickilicky
        )
        .levelUpLearnset = sLickilickyLevelUpLearnset,
        .teachableLearnset = sLickilickyTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARCADIAMON_ROOKIE

#if P_FAMILY_ARGOMON_ROOKIE
    [SPECIES_ARGOMON_ROOKIE] =
    {
        .baseHP        = 43,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 80,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_VIRUS,
        .catchRate = 180,
        .expYield = 85,
        .evYield_Speed     = 3,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_ROOKIE,
        .natDexNum = NATIONAL_DEX_ARGOMON_ROOKIE,
        .categoryName = _("Algorithm"),
        .height = 7,
        .weight = 290,
        .description = COMPOUND_STRING(
            "Rookie Argomon are seen often protecting\n"
            "younger Argomon while they are feeding on\n"
            "data. There tendacy to protect means \n"
            "they sometimes attack inanimate objects."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_rookie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 14,
        .backPic = gMonBackPic_Argomon_rookie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Argomon_rookie,
        .shinyPalette = gMonShinyPalette_Argomon_rookie,
        .iconSprite = gMonIcon_Argomon_rookie,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Argomon_rookie)
        OVERWORLD(
            sPicTable_Argomon_rookie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Argomon_rookie,
            gShinyOverworldPalette_Argomon_rookie
        )
        .levelUpLearnset = sArgomon_rookieLevelUpLearnset,
        .teachableLearnset = sArgomon_rookieTeachableLearnset,
        .eggMoveLearnset = sArgomon_rookieEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ARGOMON_CHAMPION}),
    },

    [SPECIES_ARMADILMON] =
    {
        .baseHP        = 65,
        .baseAttack    = 53,
        .baseDefense   = 75,
        .baseSpeed     = 49,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense = 3,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Armadilmon"),
        .cryId = CRY_ARMADILMON,
        .natDexNum = NATIONAL_DEX_ARMADILMON,
        .categoryName = _("Armadillo"),
        .height = 6,
        .weight = 395,
        .description = COMPOUND_STRING(
            "Armadillomon is an ancient species of \n"
            "digimon that can access rarer digivolutions.\n"
            "They have a very carefree personality\n"
            "and quickly charms any tamer it likes."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Armadilmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 3,
        .backPic = gMonBackPic_Armadilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Armadilmon,
        .shinyPalette = gMonShinyPalette_Armadilmon,
        .iconSprite = gMonIcon_Armadilmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Armadilmon)
        OVERWORLD(
            sPicTable_Armadilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Armadilmon,
            gShinyOverworldPalette_Armadilmon
        )
        .levelUpLearnset = sArmadilmonLevelUpLearnset,
        .teachableLearnset = sArmadilmonTeachableLearnset,
        .formSpeciesIdTable = sArmadilmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_KINDNESS_EGG, SPECIES_CHAMELEMON},
                                {EVO_ITEM, ITEM_MIRACLES_EGG, SPECIES_ELEPHANMON},
                                {EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_DIGMON},
                                {EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_BOARMON},
                                {EVO_LEVEL, 32, SPECIES_ANKYLOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARMADILMON_GALAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_POISON, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 173,
        .evYield_Defense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Armadilmon"),
        .cryId = CRY_ARMADILMON,
        .natDexNum = NATIONAL_DEX_ARMADILMON,
        .categoryName = _("Poison Gas"),
        .height = 30,
        .weight = 170,
        .description = COMPOUND_STRING(
            "Long ago, when droves of factories fouled\n"
            "the air with pollution, it changed into this\n"
            "form for some reason. It consumes air\n"
            "pollutant particles, expelling clean air."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ArmadilmonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_ArmadilmonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArmadilmonGalar,
        .shinyPalette = gMonShinyPalette_ArmadilmonGalar,
        .iconSprite = gMonIcon_ArmadilmonGalar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Armadilmon)
        OVERWORLD(
            sPicTable_ArmadilmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ArmadilmonGalar,
            gShinyOverworldPalette_ArmadilmonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sArmadilmonGalarLevelUpLearnset,
        .teachableLearnset = sArmadilmonGalarTeachableLearnset,
        .formSpeciesIdTable = sArmadilmonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARGOMON_ROOKIE

#if P_FAMILY_ARURAUMON
    [SPECIES_ARURAUMON] =
    {
        .baseHP        = 58,
        .baseAttack    = 54,
        .baseDefense   = 54,
        .baseSpeed     = 50,
        .baseSpAttack  = 63,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Aruraumon"),
        .cryId = CRY_ARURAUMON,
        .natDexNum = NATIONAL_DEX_ARURAUMON,
        .categoryName = _("Mandragora"),
        .height = 8,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Often mistaken as a Palmon, Aruraumon is\n"
            "believed to have accomplished a similiar\n"
            "digivolution. It's flower gives a foul\n"
            "stench that can waft off predators."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aruraumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Aruraumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Aruraumon,
        .shinyPalette = gMonShinyPalette_Aruraumon,
        .iconSprite = gMonIcon_Aruraumon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AruraumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicFemale = gMonBackPic_AruraumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Aruraumon)
        OVERWORLD(
            sPicTable_Aruraumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aruraumon,
            gShinyOverworldPalette_Aruraumon
        )
        OVERWORLD_FEMALE(
            sPicTable_AruraumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sAruraumonLevelUpLearnset,
        .teachableLearnset = sAruraumonTeachableLearnset,
        .eggMoveLearnset = sAruraumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GEREMON}),
    },

    [SPECIES_BAKOMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 50,
        .baseDefense   = 48,
        .baseSpeed     = 60,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GHOST),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bakomon"),
        .cryId = CRY_BAKOMON,
        .natDexNum = NATIONAL_DEX_BAKOMON,
        .categoryName = _("Cardboard"),
        .height = 9,
        .weight = 110,
        .description = COMPOUND_STRING(
            "Although it may look innocent at first\n"
            "glance, Bakomon is actually an fearsome\n"
            "Digimon to encounter. Anyone who peeks\n"
            "inside one of it's boxes will be trapped."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Bakomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Bakomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bakomon,
        .shinyPalette = gMonShinyPalette_Bakomon,
        .iconSprite = gMonIcon_Bakomon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BakomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_BakomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bakomon)
        OVERWORLD(
            sPicTable_Bakomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bakomon,
            gShinyOverworldPalette_Bakomon
        )
        OVERWORLD_FEMALE(
            sPicTable_BakomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBakomonLevelUpLearnset,
        .teachableLearnset = sBakomonTeachableLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GROUND, TYPE_ROCK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 217,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Rhyperior"),
        .cryId = CRY_RHYPERIOR,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("Drill"),
        .height = 24,
        .weight = 2828,
        .description = COMPOUND_STRING(
            "It can launch a rock held in its hand\n"
            "like a missile by tightening and then\n"
            "expanding its muscles instantaneously.\n"
            "Monimon are shot at rare times."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Rhyperior,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rhyperior,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Rhyperior,
        .shinyPalette = gMonShinyPalette_Rhyperior,
        .iconSprite = gMonIcon_Rhyperior,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RhyperiorF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_RhyperiorF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rhyperior)
        OVERWORLD(
            sPicTable_Rhyperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rhyperior,
            gShinyOverworldPalette_Rhyperior
        )
        OVERWORLD_FEMALE(
            sPicTable_RhyperiorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRhyperiorLevelUpLearnset,
        .teachableLearnset = sRhyperiorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ARURAUMON

#if P_FAMILY_BEARMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 110 : 255,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Happiny"),
        .cryId = CRY_HAPPINY,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("Playhouse"),
        .height = 6,
        .weight = 244,
        .description = COMPOUND_STRING(
            "It carries a round white rock in its\n"
            "belly pouch. If it gets along well with\n"
            "someone, it will sometimes give that\n"
            "person the rock."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Happiny,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Happiny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Happiny,
        .shinyPalette = gMonShinyPalette_Happiny,
        .iconSprite = gMonIcon_Happiny,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Happiny)
        OVERWORLD(
            sPicTable_Happiny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Happiny,
            gShinyOverworldPalette_Happiny
        )
        .levelUpLearnset = sHappinyLevelUpLearnset,
        .teachableLearnset = sHappinyTeachableLearnset,
        .eggMoveLearnset = sHappinyEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BEARMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 56,
        .baseDefense   = 51,
        .baseSpeed     = 55,
        .baseSpAttack  = 49,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Bearmon"),
        .cryId = CRY_BEARMON,
        .natDexNum = NATIONAL_DEX_BEARMON,
        .categoryName = _("Bear"),
        .height = 9,
        .weight = 310,
        .description = COMPOUND_STRING(
            "Despite being a bear Digimon, Bearmon is\n"
            "actually very friendly. However this\n"
            "friendliness should not be mistaken for being\n"
            "weak as Bearmon has incredible strength."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bearmon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bearmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Bearmon,
        .shinyPalette = gMonShinyPalette_Bearmon,
        .iconSprite = gMonIcon_Bearmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Bearmon)
        OVERWORLD(
            sPicTable_Bearmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bearmon,
            gShinyOverworldPalette_Bearmon
        )
        .levelUpLearnset = sBearmonLevelUpLearnset,
        .teachableLearnset = sBearmonTeachableLearnset,
        .eggMoveLearnset = sBearmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_DOBERMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SHOUTMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 53,
        .baseDefense   = 52,
        .baseSpeed     = 61,
        .baseSpAttack  = 57,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Speed     = 1,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shoutmon"),
        .cryId = CRY_SHOUTMON,
        .natDexNum = NATIONAL_DEX_SHOUTMON,
        .categoryName = _("Rockstar"),
        .height = 9,
        .weight = 368,
        .description = COMPOUND_STRING(
            "The passion that Shoutman has is converted\n"
            "into energy. This energy gives it the\n"
            "tenacity to get up no matter what in a \n"
            "fight. Without its mic, it will wither away"),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Shoutmon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shoutmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Shoutmon,
        .shinyPalette = gMonShinyPalette_Shoutmon,
        .iconSprite = gMonIcon_Shoutmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Shoutmon)
        OVERWORLD(
            sPicTable_Shoutmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shoutmon,
            gShinyOverworldPalette_Shoutmon
        )
        .levelUpLearnset = sShoutmonLevelUpLearnset,
        .teachableLearnset = sShoutmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DONSHOUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BEARMON

#if P_FAMILY_BETAMON
    [SPECIES_BETAMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 57,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_DRY_SKIN, ABILITY_STATIC, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON,
        .natDexNum = NATIONAL_DEX_BETAMON,
        .categoryName = _("Amphibian"),
        .height = 7,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Betamon is an amphibious Digimon that walks\n"
            "on four legs. It is a gentle Digimon that\n"
            "often be seen floating in the water however\n"
            "it is not a weak Digimon."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Betamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 40),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Betamon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Betamon,
        .shinyPalette = gMonShinyPalette_Betamon,
        .iconSprite = gMonIcon_Betamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Betamon)
        OVERWORLD(
            sPicTable_Betamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Betamon,
            gShinyOverworldPalette_Betamon
        )
        .levelUpLearnset = sBetamonLevelUpLearnset,
        .teachableLearnset = sBetamonTeachableLearnset,
        .eggMoveLearnset = sBetamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 56, SPECIES_DRIMOGEMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_BETAMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 34, SPECIES_DINOHYUMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 211,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tangrowth"),
        .cryId = CRY_TANGROWTH,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = COMPOUND_STRING(
            "It ensnares prey by extending arms made\n"
            "of vines. Even if one of its arms is eaten,\n"
            "it's fine. The Pokémon regenerates quickly\n"
            "and will go right back to normal."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Tangrowth,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Tangrowth,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tangrowth,
        .shinyPalette = gMonShinyPalette_Tangrowth,
        .iconSprite = gMonIcon_Tangrowth,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_TangrowthF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tangrowth)
        OVERWORLD(
            sPicTable_Tangrowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tangrowth,
            gShinyOverworldPalette_Tangrowth
        )
        OVERWORLD_FEMALE(
            sPicTable_TangrowthF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sTangrowthLevelUpLearnset,
        .teachableLearnset = sTangrowthTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_BETAMON

#if P_FAMILY_BETAMON_X
    [SPECIES_BETAMON_X] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 52,
        .baseSpeed     = 53,
        .baseSpAttack  = 59,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_TRANSISTOR, ABILITY_STORM_DRAIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON_X,
        .natDexNum = NATIONAL_DEX_BETAMON_X,
        .categoryName = _("X Antibody"),
        .height = 7,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Although stronger than it's normal form,\n"
            "Betamon X is an endangered species often\n"
            "overhunted for it's looks. This in spite of\n"
            "its longer claws and stronger attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Betamon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Betamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Betamon_x,
        .shinyPalette = gMonShinyPalette_Betamon_x,
        .iconSprite = gMonIcon_Betamon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Betamon_x)
        OVERWORLD(
            sPicTable_Betamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Betamon_x,
            gShinyOverworldPalette_Betamon_x
        )
        .levelUpLearnset = sBetamon_xLevelUpLearnset,
        .teachableLearnset = sBetamon_xTeachableLearnset,
        .eggMoveLearnset = sBetamon_xEggMoveLearnset,
        .formSpeciesIdTable = sBetamon_xFormSpeciesIdTable,
        .formChangeTable = sBetamon_xFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_GARURUMON_X}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BETAMON_X_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 207,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Betamon"),
        .cryId = CRY_BETAMON_X_MEGA,
        .natDexNum = NATIONAL_DEX_BETAMON_X,
        .categoryName = _("Parent"),
        .height = 22,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "When the mother sees the back of her\n"
            "Mega-Evolved child, it makes her think\n"
            "of the day when her child will inevitably\n"
            "leave her."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Betamon_xMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Betamon_xMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Betamon_xMega,
        .shinyPalette = gMonShinyPalette_Betamon_xMega,
        .iconSprite = gMonIcon_Betamon_xMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Betamon_x)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Betamon_xMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Betamon_xMega,
            gShinyOverworldPalette_Betamon_xMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBetamon_xLevelUpLearnset,
        .teachableLearnset = sBetamon_xTeachableLearnset,
        .eggMoveLearnset = sBetamon_xEggMoveLearnset,
        .formSpeciesIdTable = sBetamon_xFormSpeciesIdTable,
        .formChangeTable = sBetamon_xFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BETAMON_X

#if P_FAMILY_BIYOMON
    [SPECIES_BIYOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 58,
        .baseDefense   = 49,
        .baseSpeed     = 53,
        .baseSpAttack  = 56,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_BIG_PECKS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Biyomon"),
        .cryId = CRY_BIYOMON,
        .natDexNum = NATIONAL_DEX_BIYOMON,
        .categoryName = _("Pink Bird"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Despite being a flying Digimon, Biyomon\n"
            "has poor flying capabilities. It's for\n"
            "this reason that it often has rilvaries\n"
            "with Patamon as they are similiar."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biyomon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_TWIST : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Biyomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Biyomon,
        .shinyPalette = gMonShinyPalette_Biyomon,
        .iconSprite = gMonIcon_Biyomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Biyomon)
        OVERWORLD(
            sPicTable_Biyomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Biyomon,
            gShinyOverworldPalette_Biyomon
        )
        .levelUpLearnset = sBiyomonLevelUpLearnset,
        .teachableLearnset = sBiyomonTeachableLearnset,
        .eggMoveLearnset = sBiyomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 48, SPECIES_AQUILAMON},
                                {EVO_LEVEL, 30, SPECIES_BIRDRAMON}),
    },

    [SPECIES_BLKAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkagumon"),
        .cryId = CRY_BLKAGUMON,
        .natDexNum = NATIONAL_DEX_BLKAGUMON,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 150,
        .description = COMPOUND_STRING(
            "BlackAgumon are a much more ferocious\n"
            "digimon that seeks out fights for the sake\n"
            "of fighting. However it is not stronger\n"
            "than Agumon so it often loses."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Blkagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon,
        .shinyPalette = gMonShinyPalette_Blkagumon,
        .iconSprite = gMonIcon_Blkagumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Blkagumon)
        OVERWORLD(
            sPicTable_Blkagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Blkagumon,
            gShinyOverworldPalette_Blkagumon
        )
        .levelUpLearnset = sBlkagumonLevelUpLearnset,
        .teachableLearnset = sBlkagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_BLKAGUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 40, SPECIES_DARKTYRMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PSYCHEMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 50,
        .baseDefense   = 53,
        .baseSpeed     = 50,
        .baseSpAttack  = 58,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_ICE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Psychemon"),
        .cryId = CRY_PSYCHEMON,
        .natDexNum = NATIONAL_DEX_PSYCHEMON,
        .categoryName = _("Psychedelia"),
        .height = 12,
        .weight = 312,
        .description = COMPOUND_STRING(
            "Psychemon is almost completely identical\n"
            "to Gabumon to the extent that some mistake\n"
            "the two however it actually has psychic\n"
            "abilities giving it an edge in fights."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Psychemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Psychemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Psychemon,
        .shinyPalette = gMonShinyPalette_Psychemon,
        .iconSprite = gMonIcon_Psychemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_M)
        FOOTPRINT(Psychemon)
        OVERWORLD(
            sPicTable_Psychemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Psychemon,
            gShinyOverworldPalette_Psychemon
        )
        .levelUpLearnset = sPsychemonLevelUpLearnset,
        .teachableLearnset = sPsychemonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_BIYOMON

#if P_FAMILY_BLKAGUMON_X
    [SPECIES_BLKAGUMON_X] =
    {
        .baseHP        = 47,
        .baseAttack    = 80,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 75,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkagumon"),
        .cryId = CRY_BLKAGUMON_X,
        .natDexNum = NATIONAL_DEX_BLKAGUMON_X,
        .categoryName = _("X Antibody"),
        .height = 10,
        .weight = 150,
        .description = COMPOUND_STRING(
            "A BlackAgumon X is even more violent\n"
            "than it's normal counterpart. It foregoes\n"
            "all strategy and defense for a full on\n"
            "barrage of offensive attacks."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkagumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 16),
            ANIMCMD_FRAME(1, 16),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Blkagumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon_x,
        .shinyPalette = gMonShinyPalette_Blkagumon_x,
        .iconSprite = gMonIcon_Blkagumon_x,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Blkagumon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .backPicFemale = gMonBackPic_Blkagumon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 0, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blkagumon_x)
        OVERWORLD(
            sPicTable_Blkagumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Blkagumon_x,
            gShinyOverworldPalette_Blkagumon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Blkagumon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBlkagumon_xLevelUpLearnset,
        .teachableLearnset = sBlkagumon_xTeachableLearnset,
        .eggMoveLearnset = sBlkagumon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DARKTYRMON_X}),
    },

    [SPECIES_BLKGABUMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 56,
        .baseDefense   = 60,
        .baseSpeed     = 52,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ICE),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blkgabumon"),
        .cryId = CRY_BLKGABUMON,
        .natDexNum = NATIONAL_DEX_BLKGABUMON,
        .categoryName = _("Pelt"),
        .height = 13,
        .weight = 310,
        .description = COMPOUND_STRING(
            "It's pelt is made up of Garurumon data\n"
            "that it has collected. If you remove its\n"
            "pelt, it becomes very bashful unlike its\n"
            "usual hooligan self."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkgabumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Blkgabumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkgabumon,
        .shinyPalette = gMonShinyPalette_Blkgabumon,
        .iconSprite = gMonIcon_Blkgabumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BlkgabumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_BlkgabumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blkgabumon)
        OVERWORLD(
            sPicTable_Blkgabumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Blkgabumon,
            gShinyOverworldPalette_Blkgabumon
        )
        OVERWORLD_FEMALE(
            sPicTable_BlkgabumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBlkgabumonLevelUpLearnset,
        .teachableLearnset = sBlkgabumonTeachableLearnset,
    },
#endif //P_FAMILY_BLKAGUMON_X

#if P_FAMILY_BLKGUILMON
    [SPECIES_BLKGUILMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 58,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 62,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 106,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Blkguilmon"),
        .cryId = CRY_BLKGUILMON,
        .natDexNum = NATIONAL_DEX_BLKGUILMON,
        .categoryName = _("Dark Hazard"),
        .height = 14,
        .weight = 300,
        .description = COMPOUND_STRING(
            "BlackGuilmon is a very confident fighter,\n"
            "often using a mixture of explosive and\n"
            "breath attacks. It is unknown why it\n"
            "has hazard and zero unit symbols on it."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blkguilmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Blkguilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blkguilmon,
        .shinyPalette = gMonShinyPalette_Blkguilmon,
        .iconSprite = gMonIcon_Blkguilmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Blkguilmon)
        OVERWORLD(
            sPicTable_Blkguilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blkguilmon,
            gShinyOverworldPalette_Blkguilmon
        )
        .levelUpLearnset = sBlkguilmonLevelUpLearnset,
        .teachableLearnset = sBlkguilmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_BLGROWLMON}),
    },

    [SPECIES_BOKOMON] =
    {
       .baseHP        = 42,
        .baseAttack    = 39,
        .baseDefense   = 40,
        .baseSpeed     = 47,
        .baseSpAttack  = 40,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 2,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_3),
        .abilities = { ABILITY_ANALYTIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bokomon"),
        .cryId = CRY_BOKOMON,
        .natDexNum = NATIONAL_DEX_BOKOMON,
        .categoryName = _("Haramaki"),
        .height = 8,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Bokomon has many tendancies like an old\n"
            "man and is well respected by younger\n"
            "Digimon. It is very bad at fighting \n"
            "and will avoid it as much as possible."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bokomon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Bokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Bokomon,
        .shinyPalette = gMonShinyPalette_Bokomon,
        .iconSprite = gMonIcon_Bokomon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Bokomon)
        OVERWORLD(
            sPicTable_Bokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bokomon,
            gShinyOverworldPalette_Bokomon
        )
        .levelUpLearnset = sBokomonLevelUpLearnset,
        .teachableLearnset = sBokomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_FLAWIZAMON}),
    },
#endif //P_FAMILY_BLKGUILMON

#if P_FAMILY_BULUCOMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_PSYCHIC),
    #endif
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 78,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
    #else
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_TECHNICIAN },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mime Jr."),
        .cryId = CRY_MIME_JR,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("Mime"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "In an attempt to confuse its enemy,\n"
            "it mimics the enemy's movements.\n"
            "Once mimicked, the foe cannot take\n"
            "its eyes off this Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MimeJr,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MimeJr,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MimeJr,
        .shinyPalette = gMonShinyPalette_MimeJr,
        .iconSprite = gMonIcon_MimeJr,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(MimeJr)
        OVERWORLD(
            sPicTable_MimeJr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MimeJr,
            gShinyOverworldPalette_MimeJr
        )
        .levelUpLearnset = sMimeJrLevelUpLearnset,
        .teachableLearnset = sMimeJrTeachableLearnset,
        .eggMoveLearnset = sMimeJrEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_BULUCOMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 58,
        .baseDefense   = 54,
        .baseSpeed     = 53,
        .baseSpAttack  = 57,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_ICE, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ICE_BODY, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bulucomon"),
        .cryId = CRY_BULUCOMON,
        .natDexNum = NATIONAL_DEX_BULUCOMON,
        .categoryName = _("Ice Dragon"),
        .height = 14,
        .weight = 545,
        .description = COMPOUND_STRING(
            "The average Bulucomon is incredibly strong\n"
            "as it's natural habitat is a cold, hard \n"
            "environment. However due to being made\n"
            "of ice, it is weak to high temperatures."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bulucomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bulucomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Bulucomon,
        .shinyPalette = gMonShinyPalette_Bulucomon,
        .iconSprite = gMonIcon_Bulucomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bulucomon)
        OVERWORLD(
            sPicTable_Bulucomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bulucomon,
            gShinyOverworldPalette_Bulucomon
        )
        .levelUpLearnset = sBulucomonLevelUpLearnset,
        .teachableLearnset = sBulucomonTeachableLearnset,
        .eggMoveLearnset = sBulucomonEggMoveLearnset,
        .formSpeciesIdTable = sBulucomonFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_BULUCOMON_GALAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 136,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Bulucomon"),
        .cryId = CRY_BULUCOMON,
        .natDexNum = NATIONAL_DEX_BULUCOMON,
        .categoryName = _("Dancing"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING(
            "Its talent is tap-dancing. It can radiate\n"
            "chilliness from the bottoms of its feet to\n"
            "to create a floor of ice, which this\n"
            "Pokémon can kick up to use as a barrier."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BulucomonGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BulucomonGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BulucomonGalar,
        .shinyPalette = gMonShinyPalette_BulucomonGalar,
        .iconSprite = gMonIcon_BulucomonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Bulucomon)
        OVERWORLD(
            sPicTable_BulucomonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BulucomonGalar,
            gShinyOverworldPalette_BulucomonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sBulucomonGalarLevelUpLearnset,
        .teachableLearnset = sBulucomonGalarTeachableLearnset,
        .eggMoveLearnset = sBulucomonGalarEggMoveLearnset,
        .formSpeciesIdTable = sBulucomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mr. Rime"),
        .cryId = CRY_MR_RIME,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("Comedian"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "It's highly skilled at tap-dancing. It\n"
            "waves its cane of ice in time with its\n"
            "graceful movements."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MrRime,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrRime,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrRime,
        .shinyPalette = gMonShinyPalette_MrRime,
        .iconSprite = gMonIcon_MrRime,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_L)
        FOOTPRINT(MrRime)
        OVERWORLD(
            sPicTable_MrRime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MrRime,
            gShinyOverworldPalette_MrRime
        )
        .levelUpLearnset = sMrRimeLevelUpLearnset,
        .teachableLearnset = sMrRimeTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_BULUCOMON

#if P_FAMILY_BURGERMON
    [SPECIES_BURGERMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 34,
        .baseDefense   = 52,
        .baseSpeed     = 48,
        .baseSpAttack  = 32,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Burgermon"),
        .cryId = CRY_BURGERMON,
        .natDexNum = NATIONAL_DEX_BURGERMON,
        .categoryName = _("Burger"),
        .height = 7,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Unlike most Digimon, Burgerman shares no\n"
            "interest in fighting, rather it prefers\n"
            "to spend all its time learning to make\n"
            "the perfect hamburger for other Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Burgermon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Burgermon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Burgermon,
        .shinyPalette = gMonShinyPalette_Burgermon,
        .iconSprite = gMonIcon_Burgermon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BurgermonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Burgermon)
        OVERWORLD(
            sPicTable_Burgermon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Burgermon,
            gShinyOverworldPalette_Burgermon
        )
        OVERWORLD_FEMALE(
            sPicTable_BurgermonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sBurgermonLevelUpLearnset,
        .teachableLearnset = sBurgermonTeachableLearnset,
        .eggMoveLearnset = sBurgermonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BURGERMON_CHAMPION}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_MONODRAMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 52,
        .baseSpAttack  = 55,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_DARK, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Monodramon"),
        .cryId = CRY_MONODRAMON,
        .natDexNum = NATIONAL_DEX_MONODRAMON,
        .categoryName = _("Dragon"),
        .height = 11,
        .weight = 637,
        .description = COMPOUND_STRING(
            "Despite being a Vaccine Digimon, Monodramon\n"
            "is a very rough Digimon that constantly\n"
            "likes to fight. Even an Ogremon will grow\n"
            "tired of its tenacity for fighting."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monodramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        .backPic = gMonBackPic_Monodramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Monodramon,
        .shinyPalette = gMonShinyPalette_Monodramon,
        .iconSprite = gMonIcon_Monodramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MonodramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Monodramon)
        OVERWORLD(
            sPicTable_Monodramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Monodramon,
            gShinyOverworldPalette_Monodramon
        )
        OVERWORLD_FEMALE(
            sPicTable_MonodramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMonodramonLevelUpLearnset,
        .teachableLearnset = sMonodramonTeachableLearnset,
        .formSpeciesIdTable = sMonodramonFormSpeciesIdTable,
        .formChangeTable = sMonodramonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 69, SPECIES_DEVIDRAMON},
                                {EVO_ITEM, ITEM_SINCERITY_EGG, SPECIES_DEPTHMON}, // SINCERITY EGG
                                {EVO_LEVEL, 40, SPECIES_AIRDRAMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MONODRAMON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Monodramon"),
        .cryId = CRY_MONODRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_MONODRAMON,
        .categoryName = _("Pincer"),
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING(
            "The excess energy that bathes this\n"
            "Pokémon keeps it in constant danger of\n"
            "overflow. It can't sustain a battle over\n"
            "long periods of time."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MonodramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MonodramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_MonodramonMega,
        .shinyPalette = gMonShinyPalette_MonodramonMega,
        .iconSprite = gMonIcon_MonodramonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Monodramon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MonodramonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MonodramonMega,
            gShinyOverworldPalette_MonodramonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMonodramonLevelUpLearnset,
        .teachableLearnset = sMonodramonTeachableLearnset,
        .formSpeciesIdTable = sMonodramonFormSpeciesIdTable,
        .formChangeTable = sMonodramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kleavor"),
        .cryId = CRY_KLEAVOR,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Axe"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING(
            "A violent creature that fells trees with\n"
            "its crude axes and shields itself with hard\n"
            "stone. Should one encounter this Pokémon\n"
            "in the wild, one's only recourse is to flee."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Kleavor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kleavor,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kleavor,
        .shinyPalette = gMonShinyPalette_Kleavor,
        .iconSprite = gMonIcon_Kleavor,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kleavor)
        OVERWORLD(
            sPicTable_Kleavor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kleavor,
            gShinyOverworldPalette_Kleavor
        )
        .levelUpLearnset = sKleavorLevelUpLearnset,
        .teachableLearnset = sKleavorTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_BURGERMON

#if P_FAMILY_SAMUAGUMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SANGOMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 45,
        .baseSpAttack  = 54,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TORRENT, ABILITY_DAMP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Sangomon"),
        .cryId = CRY_SANGOMON,
        .natDexNum = NATIONAL_DEX_SANGOMON,
        .categoryName = _("Coral"),
        .height = 7,
        .weight = 209,
        .description = COMPOUND_STRING(
            "Sangomon is a very gentle Digimon that likes\n"
            "to live in the shallow areas of the Net\n"
            "Ocean. It can sometimes be seen resting on\n"
            "the backs of Shellmon.."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sangomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(24, 40) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Sangomon,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sangomon,
        .shinyPalette = gMonShinyPalette_Sangomon,
        .iconSprite = gMonIcon_Sangomon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Sangomon)
        OVERWORLD(
            sPicTable_Sangomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sangomon,
            gShinyOverworldPalette_Sangomon
        )
        .levelUpLearnset = sSangomonLevelUpLearnset,
        .teachableLearnset = sSangomonTeachableLearnset,
        .eggMoveLearnset = sSangomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_SAMUAGUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_SAMUAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 56,
        .baseSpAttack  = 56,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_BLAZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Samuagumon"),
        .cryId = CRY_SAMUAGUMON,
        .natDexNum = NATIONAL_DEX_SAMUAGUMON,
        .categoryName = _("Samurai"),
        .height = 10,
        .weight = 306,
        .description = COMPOUND_STRING(
            "Although the school it says it is a part\n"
            "of does not exist, BushiAgumons\n"
            "swordsmanship is first-rate with very\n"
            "few digimon being able to compete."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Samuagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Samuagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Samuagumon,
        .shinyPalette = gMonShinyPalette_Samuagumon,
        .iconSprite = gMonIcon_Samuagumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Samuagumon)
        OVERWORLD(
            sPicTable_Samuagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Samuagumon,
            gShinyOverworldPalette_Samuagumon
        )
        .levelUpLearnset = sSamuAgumonLevelUpLearnset,
        .teachableLearnset = sSamuagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ARESDRAMON}),
    },
#endif //P_FAMILY_SAMUAGUMON

#if P_FAMILY_CANDLEMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SANTAAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Agumon"),
        .cryId = CRY_SANTAAGUMON,
        .natDexNum = NATIONAL_DEX_SANTAAGUMON,
        .categoryName = _("Christmas"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This Agumon is almost indistinguishable from\n"
            "a normal Agumon except for its hat. Some\n"
            "are so dedicated to it that they will live\n"
            "and train in ice-covered regions."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Santaagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Santaagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Santaagumon,
        .shinyPalette = gMonShinyPalette_Santaagumon,
        .iconSprite = gMonIcon_Santaagumon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Santaagumon)
        OVERWORLD(
            sPicTable_Santaagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Santaagumon,
            gShinyOverworldPalette_Santaagumon
        )
        .levelUpLearnset = sSantaAgumonLevelUpLearnset,
        .teachableLearnset = sSantaagumonTeachableLearnset,
        .eggMoveLearnset = sSantaagumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CENTARUMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CANDLEMON] =
    {
        .baseHP        = 42,
        .baseAttack    = 49,
        .baseDefense   = 48,
        .baseSpeed     = 59,
        .baseSpAttack  = 66,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_FLAME_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Candlemon"),
        .cryId = CRY_CANDLEMON,
        .natDexNum = NATIONAL_DEX_CANDLEMON,
        .categoryName = _("Candle"),
        .height = 20,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It is unknown which part of its body is the\n"
            "actual body. It was widely believed that\n"
            "wax was however it is recently been\n"
            "suggested that the flame is the body."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Candlemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Candlemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Candlemon,
        .shinyPalette = gMonShinyPalette_Candlemon,
        .iconSprite = gMonIcon_Candlemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 9, SHADOW_SIZE_L)
        FOOTPRINT(Candlemon)
        OVERWORLD(
            sPicTable_Candlemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Candlemon,
            gShinyOverworldPalette_Candlemon
        )
        .levelUpLearnset = sCandlemonLevelUpLearnset,
        .teachableLearnset = sCandlemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BAKEMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Electivire"),
        .cryId = CRY_ELECTIVIRE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("Thunderbolt"),
        .height = 18,
        .weight = 1386,
        .description = COMPOUND_STRING(
            "When it gets excited, it thumps its chest.\n"
            "With every thud, thunder roars, electric\n"
            "sparks shower all around and blue sparks\n"
            "begin to crackle between its horns."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Electivire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Electivire,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Electivire,
        .shinyPalette = gMonShinyPalette_Electivire,
        .iconSprite = gMonIcon_Electivire,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Electivire)
        OVERWORLD(
            sPicTable_Electivire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Electivire,
            gShinyOverworldPalette_Electivire
        )
        .levelUpLearnset = sElectivireLevelUpLearnset,
        .teachableLearnset = sElectivireTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CANDLEMON

#if P_FAMILY_CHIKURIMON
#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLKTOYAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 58,
        .baseSpeed     = 49,
        .baseSpAttack  = 49,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DARK_AURA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Blktoyamon"),
        .cryId = CRY_BLKTOYAMON,
        .natDexNum = NATIONAL_DEX_BLKTOYAMON,
        .categoryName = _("Toy"),
        .height = 11,
        .weight = 54,
        .description = COMPOUND_STRING(
            "BlkToyAgumon is very unsavoury Digimon that\n"
            "will bully children instead of playing with\n"
            "them. Although its attacks also look like\n"
            "toys, they are still very dangerous."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Blktoyamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blktoyamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Blktoyamon,
        .shinyPalette = gMonShinyPalette_Blktoyamon,
        .iconSprite = gMonIcon_Blktoyamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Blktoyamon)
        OVERWORLD(
            sPicTable_Blktoyamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blktoyamon,
            gShinyOverworldPalette_Blktoyamon
        )
        .levelUpLearnset = sBlktoyamonLevelUpLearnset,
        .teachableLearnset = sBlktoyamonTeachableLearnset,
        .eggMoveLearnset = sBlktoyamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_DELTAMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CHIKURIMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 75,
        .baseDefense   = 31,
        .baseSpeed     = 39,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Chikurimon"),
        .cryId = CRY_CHIKURIMON,
        .natDexNum = NATIONAL_DEX_CHIKURIMON,
        .categoryName = _("Mine"),
        .height = 4,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Chikurimon can often be found lurking in\n"
            "water or under rocks. Anyone that finds\n"
            "a Chikurimon should avoid eye contact and\n"
            "back away slowly as they will explode."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chikurimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Chikurimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Chikurimon,
        .shinyPalette = gMonShinyPalette_Chikurimon,
        .iconSprite = gMonIcon_Chikurimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Chikurimon)
        OVERWORLD(
            sPicTable_Chikurimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chikurimon,
            gShinyOverworldPalette_Chikurimon
        )
        .levelUpLearnset = sChikurimonLevelUpLearnset,
        .teachableLearnset = sChikurimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 270,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 243,
    #else
        .expYield = 199,
    #endif
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magmortar"),
        .cryId = CRY_MAGMORTAR,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("Blast"),
        .height = 16,
        .weight = 680,
        .description = COMPOUND_STRING(
            "According to what is known, a single pair\n"
            "of male and female Magmortar lives in\n"
            "one volcano. From its arm, it launches\n"
            "fireballs hotter than 3,700ºF."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Magmortar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magmortar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magmortar,
        .shinyPalette = gMonShinyPalette_Magmortar,
        .iconSprite = gMonIcon_Magmortar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magmortar)
        OVERWORLD(
            sPicTable_Magmortar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Magmortar,
            gShinyOverworldPalette_Magmortar
        )
        .levelUpLearnset = sMagmortarLevelUpLearnset,
        .teachableLearnset = sMagmortarTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_CHIKURIMON

#if P_FAMILY_TYUTYUMON
    [SPECIES_TYUTYUMON] =
    {
        .baseHP        = 27,
        .baseAttack    = 50,
        .baseDefense   = 30,
        .baseSpeed     = 57,
        .baseSpAttack  = 60,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tyutyumon"),
        .cryId = CRY_TYUTYUMON,
        .natDexNum = NATIONAL_DEX_TYUTYUMON,
        .categoryName = _("Tactician"),
        .height = 2,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Despite its small size, TyuTyumon is a very\n"
            "smart and shrewd Digimon. When it makes a\n"
            "plan, it almost always goes off without\n"
            "a single unplanned deviation."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tyutyumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GROW_VIBRATE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tyutyumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tyutyumon,
        .shinyPalette = gMonShinyPalette_Tyutyumon,
        .iconSprite = gMonIcon_Tyutyumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tyutyumon)
        OVERWORLD(
            sPicTable_Tyutyumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyutyumon,
            gShinyOverworldPalette_Tyutyumon
        )
        .levelUpLearnset = sTyutyumonLevelUpLearnset,
        .teachableLearnset = sTyutyumonTeachableLearnset,
        .eggMoveLearnset = sTyutyumonEggMoveLearnset,
        .formSpeciesIdTable = sTyutyumonFormSpeciesIdTable,
        .formChangeTable = sTyutyumonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYUTYUMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tyutyumon"),
        .cryId = CRY_TYUTYUMON_MEGA,
        .natDexNum = NATIONAL_DEX_TYUTYUMON,
        .categoryName = _("Stag Beetle"),
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING(
            "The influence of Mega Evolution leaves it\n"
            "in a state of constant excitement.\n"
            "It pierces enemies with its two large\n"
            "horns before shredding them."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_TyutyumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_TyutyumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TyutyumonMega,
        .shinyPalette = gMonShinyPalette_TyutyumonMega,
        .iconSprite = gMonIcon_TyutyumonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Tyutyumon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_TyutyumonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TyutyumonMega,
            gShinyOverworldPalette_TyutyumonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTyutyumonLevelUpLearnset,
        .teachableLearnset = sTyutyumonTeachableLearnset,
        .eggMoveLearnset = sTyutyumonEggMoveLearnset,
        .formSpeciesIdTable = sTyutyumonFormSpeciesIdTable,
        .formChangeTable = sTyutyumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYUTYUMON

#if P_FAMILY_CHUUMON
    [SPECIES_CHUUMON] =
    {
        .baseHP        = 34,
        .baseAttack    = 32,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 32,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_WIMP_OUT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Rat"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
            "Chuumon can often be found with a Sukamon,\n"
            "this partnership is usually a unruly one\n"
            "where trouble is rife. Chuumon does not.\n"
            "fight, instead coaxing Sukamon into it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chuumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Chuumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chuumon,
        .shinyPalette = gMonShinyPalette_Chuumon,
        .iconSprite = gMonIcon_Chuumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_Chuumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chuumon,
            gShinyOverworldPalette_Chuumon
        )
        .levelUpLearnset = sChuumonLevelUpLearnset,
        .teachableLearnset = sChuumonTeachableLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

#if P_PALDEAN_FORMS
    [SPECIES_CHUUMON_PALDEA_COMBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 1150,
        .description = COMPOUND_STRING(
            "This Pokémon has a muscular body\n"
            "and excels at close-quarters combat.\n"
            "It uses its short horns to strike\n"
            "the opponent’s weak spots."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaCombat,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaCombat,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaCombat,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaCombat,
        .iconSprite = gMonIcon_ChuumonPaldeaCombat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaCombat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChuumonPaldeaCombat,
            gShinyOverworldPalette_ChuumonPaldeaCombat
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaCombatLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaCombatTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaCombatEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

    [SPECIES_CHUUMON_PALDEA_BLAZE] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 850,
        .description = COMPOUND_STRING(
            "When heated by fire energy, its horns can\n"
            "get hotter than 1,800 degrees Fahrenheit.\n"
            "Those gored by them will suffer\n"
            "both wounds and burns."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaBlaze,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaBlaze,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaBlaze,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaBlaze,
        .iconSprite = gMonIcon_ChuumonPaldeaBlaze,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaBlaze,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChuumonPaldeaBlaze,
            gShinyOverworldPalette_ChuumonPaldeaBlaze
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaBlazeLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaBlazeTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaBlazeEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },

    [SPECIES_CHUUMON_PALDEA_AQUA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 30,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 211,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chuumon"),
        .cryId = CRY_CHUUMON,
        .natDexNum = NATIONAL_DEX_CHUUMON,
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "This Pokémon blasts water from holes on\n"
            "the tips of its horns--the high-pressure\n"
            "jets pierce right through\n"
            "Chuumon’s enemies."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ChuumonPaldeaAqua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_ChuumonPaldeaAqua,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ChuumonPaldeaAqua,
        .shinyPalette = gMonShinyPalette_ChuumonPaldeaAqua,
        .iconSprite = gMonIcon_ChuumonPaldeaAqua,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Chuumon)
        OVERWORLD(
            sPicTable_ChuumonPaldeaAqua,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChuumonPaldeaAqua,
            gShinyOverworldPalette_ChuumonPaldeaAqua
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sChuumonPaldeaAquaLevelUpLearnset,
        .teachableLearnset = sChuumonPaldeaAquaTeachableLearnset,
        .eggMoveLearnset = sChuumonPaldeaAquaEggMoveLearnset,
        .formSpeciesIdTable = sChuumonFormSpeciesIdTable,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_CHUUMON

#if P_FAMILY_HAZYAGUMON
    [SPECIES_HAZYAGUMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 46,
        .baseSpAttack  = 51,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_CLEAR_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Hazyagumon"),
        .cryId = CRY_HAZYAGUMON,
        .natDexNum = NATIONAL_DEX_HAZYAGUMON,
        .categoryName = _("Clear Toy"),
        .height = 10,
        .weight = 100,
        .description = COMPOUND_STRING(
            "HazyAgumon is an incredibly rare digimon\n"
            "that most will not see ever in their lives.\n"
            "Despite it's cowardly nature, it possesses\n"
            "a heart of justice and will fight."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hazyagumon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Hazyagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Hazyagumon,
        .shinyPalette = gMonShinyPalette_Hazyagumon,
        .iconSprite = gMonIcon_Hazyagumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_HazyagumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_HazyagumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Hazyagumon)
        OVERWORLD(
            sPicTable_Hazyagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Hazyagumon,
            gShinyOverworldPalette_Hazyagumon
        )
        OVERWORLD_FEMALE(
            sPicTable_HazyagumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sHazyAgumonLevelUpLearnset,
        .teachableLearnset = sHazyagumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MIRACLES_EGG, SPECIES_ELEPHANMON}, // Miracles Egg
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKTOYAMON}, // Dark Digitron
                                {EVO_LEVEL, 31, SPECIES_CLOCKMON}),
    },

    [SPECIES_COMMDRAMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 62,
        .baseDefense   = 70,
        .baseSpeed     = 52,
        .baseSpAttack  = 50,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_STEEL, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SNIPER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Commdramon"),
        .cryId = CRY_COMMDRAMON,
        .natDexNum = NATIONAL_DEX_COMMDRAMON,
        .categoryName = _("Commando"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Commdramon are an infantry digimon that\n"
            "will often partake in organised missions.\n"
            "Their skin is modified to detect the \n"
            "surrounding colors and camouflage."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_Commdramon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Commdramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Commdramon,
        .shinyPalette = gMonShinyPalette_Commdramon,
        .iconSprite = gMonIcon_Commdramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CommdramonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CommdramonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Commdramon)
        OVERWORLD(
            sPicTable_Commdramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Commdramon,
            gShinyOverworldPalette_Commdramon
        )
        OVERWORLD_FEMALE(
            sPicTable_CommdramonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sCommdramonLevelUpLearnset,
        .teachableLearnset = sCommdramonTeachableLearnset,
        .formSpeciesIdTable = sCommdramonFormSpeciesIdTable,
        .formChangeTable = sCommdramonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_COMMDRAMON_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_WATER, TYPE_DARK),
        .catchRate = 45,
        .expYield = 224,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Commdramon"),
        .cryId = CRY_COMMDRAMON_MEGA,
        .natDexNum = NATIONAL_DEX_COMMDRAMON,
        .categoryName = _("Atrocious"),
        .height = 65,
        .weight = 3050,
        .description = COMPOUND_STRING(
            "Although it obeys its instinctive drive to\n"
            "destroy everything within its reach, it\n"
            "will respond to orders from a Trainer it\n"
            "truly trusts."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
        .frontPic = gMonFrontPic_CommdramonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_CommdramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_CommdramonMega,
        .shinyPalette = gMonShinyPalette_CommdramonMega,
        .iconSprite = gMonIcon_CommdramonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Commdramon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_CommdramonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_CommdramonMega,
            gShinyOverworldPalette_CommdramonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCommdramonLevelUpLearnset,
        .teachableLearnset = sCommdramonTeachableLearnset,
        .formSpeciesIdTable = sCommdramonFormSpeciesIdTable,
        .formChangeTable = sCommdramonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAZYAGUMON

#if P_FAMILY_CORONAMON
    [SPECIES_CORONAMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 48,
        .baseDefense   = 53,
        .baseSpeed     = 53,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Coronamon"),
        .cryId = CRY_CORONAMON,
        .natDexNum = NATIONAL_DEX_CORONAMON,
        .categoryName = _("Sun"),
        .height = 8,
        .weight = 225,
        .description = COMPOUND_STRING(
            "Often seen with first time tamers,\n"
            "Coronamon is a very innocent digimon that\n"
            "likes to play a lot. It's sense of justice\n"
            "is also powerfully sincere."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Coronamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Coronamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Coronamon,
        .shinyPalette = gMonShinyPalette_Coronamon,
        .iconSprite = gMonIcon_Coronamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coronamon)
        OVERWORLD(
            sPicTable_Coronamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Coronamon,
            gShinyOverworldPalette_Coronamon
        )
        .levelUpLearnset = sCoronamonLevelUpLearnset,
        .teachableLearnset = sCoronamonTeachableLearnset,
        .eggMoveLearnset = sCoronamonEggMoveLearnset,
        .formSpeciesIdTable = sCoronamonFormSpeciesIdTable,
        .formChangeTable = sCoronamonFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORONAMON_GMAX] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_WATER, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 187 : 219,
        .evYield_HP = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Coronamon"),
        .cryId = CRY_CORONAMON,
        .natDexNum = NATIONAL_DEX_CORONAMON,
        .categoryName = _("Transport"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Over 5,000 people can ride on its\n"
            "shell at once. And it's a very\n"
            "comfortable ride, without the slightest\n"
            "shaking or swaying."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_CoronamonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CoronamonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CoronamonGmax,
        .shinyPalette = gMonShinyPalette_CoronamonGmax,
        .iconSprite = gMonIcon_CoronamonGmax,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coronamon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCoronamonLevelUpLearnset,
        .teachableLearnset = sCoronamonTeachableLearnset,
        .eggMoveLearnset = sCoronamonEggMoveLearnset,
        .formSpeciesIdTable = sCoronamonFormSpeciesIdTable,
        .formChangeTable = sCoronamonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CORONAMON

#if P_FAMILY_CRABMON
    [SPECIES_CRABMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 61,
        .baseDefense   = 66,
        .baseSpeed     = 50,
        .baseSpAttack  = 46,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_CRABMON),
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_HYPER_CUTTER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON,
        .natDexNum = NATIONAL_DEX_CRABMON,
        .categoryName = _("Crab"),
        .height = 6,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Crabmon are a fast growing species of\n"
            "Digimon that will quickly grow stronger\n"
            "over time. This strength gives it lots of\n"
            "confidence in battle."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Crabmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Crabmon,
        .shinyPalette = gMonShinyPalette_Crabmon,
        .iconSprite = gMonIcon_Crabmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Crabmon)
        OVERWORLD(
            sPicTable_Crabmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Crabmon,
            gShinyOverworldPalette_Crabmon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sCrabmonLevelUpLearnset,
        .teachableLearnset = sCrabmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_CRABMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 32, SPECIES_COELAMON}),
    },
#endif //P_FAMILY_CRABMON

#if P_FAMILY_CRABMON_X
    [SPECIES_CRABMON_X] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 45,
        .baseSpAttack  = 44,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),

        .abilities = { ABILITY_WATER_VEIL, ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("X Antibody"),
        .height = 7,
        .weight = 265,
        .description = COMPOUND_STRING(
            "Crabmon X has gained the ability to\n"
            "instantly restore parts of it's body. Its\n"
            "claw has also grown in size letting it\n"
            "quickly overpower digimon of larger size."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Crabmon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_x,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Crabmon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_Crabmon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Crabmon_x)
        OVERWORLD(
            sPicTable_Crabmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crabmon_x,
            gShinyOverworldPalette_Crabmon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Crabmon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
        .formChangeTable = sCrabmon_xFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CRABMON_X_GMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_2 ? 45 : 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("Evolution"),
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Having gotten even friendlier and\n"
            "more innocent, Crabmon_x tries to play\n"
            "with anyone around, only to end up\n"
            "crushing them with its immense body."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_xGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Crabmon_xGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Crabmon_xGmax,
        .shinyPalette = gMonShinyPalette_Crabmon_xGmax,
        .iconSprite = gMonIcon_Crabmon_xGmax,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_L)
        FOOTPRINT(Crabmon_x)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
        .formChangeTable = sCrabmon_xFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_CRABMON_X_STARTER] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 65 : 92,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Crabmon"),
        .cryId = CRY_CRABMON_X,
        .natDexNum = NATIONAL_DEX_CRABMON_X,
        .categoryName = _("Evolution"),
        .height = 3,
        .weight = 65,
        .description = gCrabmon_xPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Crabmon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Crabmon_x,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_xPartner,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Crabmon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_Crabmon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_Crabmon_xPartnerF,
        .iconPalIndexFemale = 2,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Crabmon_x)
        OVERWORLD(
            sPicTable_Crabmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crabmon_x,
            gShinyOverworldPalette_Crabmon_x
        )
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
        .levelUpLearnset = sCrabmon_xLevelUpLearnset,
        .teachableLearnset = sCrabmon_xTeachableLearnset,
        .eggMoveLearnset = sCrabmon_xEggMoveLearnset,
        .formSpeciesIdTable = sCrabmon_xFormSpeciesIdTable,
    },

    [SPECIES_CUTEMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 44,
        .baseDefense   = 51,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_SOUNDPROOF, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cutemon"),
        .cryId = CRY_CUTEMON,
        .natDexNum = NATIONAL_DEX_CUTEMON,
        .categoryName = _("Cute"),
        .height = 6,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Despite its adorable looks, Cutemon is\n"
            "often a mischievious Digimon. If you see\n"
            "one, be wary as it may be leading you to\n"
            "a trap. Its ears are actually a sense organ"),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cutemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GLOW_BLUE,
        .backPic = gMonBackPic_Cutemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Cutemon,
        .shinyPalette = gMonShinyPalette_Cutemon,
        .iconSprite = gMonIcon_Cutemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 3, SHADOW_SIZE_M)
        FOOTPRINT(Cutemon)
        OVERWORLD(
            sPicTable_Cutemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cutemon,
            gShinyOverworldPalette_Cutemon
        )
        .levelUpLearnset = sCutemonLevelUpLearnset,
        .teachableLearnset = sCutemonTeachableLearnset,
    },

    [SPECIES_DAMEMON] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 51,
        .baseSpeed     = 46,
        .baseSpAttack  = 58,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Damemon"),
        .cryId = CRY_DAMEMON,
        .natDexNum = NATIONAL_DEX_DAMEMON,
        .categoryName = _("No Good"),
        .height = 8,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Damemon is a glitch digimon that should\n"
            "not exist. Scientists theorise that it is\n"
            "an unnatural fusion of Koromon and Agumon\n"
            "data making it a very rare digimon."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Damemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Damemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Damemon,
        .shinyPalette = gMonShinyPalette_Damemon,
        .iconSprite = gMonIcon_Damemon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Damemon)
        OVERWORLD(
            sPicTable_Damemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Damemon,
            gShinyOverworldPalette_Damemon
        )
        .levelUpLearnset = sDamemonLevelUpLearnset,
        .teachableLearnset = sDamemonTeachableLearnset,
    },

    [SPECIES_DEMIDEVMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 63,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IMMUNITY, ABILITY_TOXIC_BOOST, ABILITY_PRANKSTER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Demidevmon"),
        .cryId = CRY_DEMIDEVMON,
        .natDexNum = NATIONAL_DEX_DEMIDEVMON,
        .categoryName = _("Tiny Devil"),
        .height = 4,
        .weight = 150,
        .description = COMPOUND_STRING(
            "DemiDevimon is a tiny familiar digimon that\n"
            "serves under stronger digimon like Devimon\n"
            "and Myotismon. It is not a strong digimon\n"
            "however it is cunning and quickwitted."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Demidevmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Demidevmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Demidevmon,
        .shinyPalette = gMonShinyPalette_Demidevmon,
        .iconSprite = gMonIcon_Demidevmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Demidevmon)
        OVERWORLD(
            sPicTable_Demidevmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Demidevmon,
            gShinyOverworldPalette_Demidevmon
        )
        .levelUpLearnset = sDemidevmonLevelUpLearnset,
        .teachableLearnset = sDemidevmonTeachableLearnset,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KUNEMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 51,
        .baseSpeed     = 56,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_SWARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Kunemon"),
        .cryId = CRY_KUNEMON,
        .natDexNum = NATIONAL_DEX_KUNEMON,
        .categoryName = _("Bee-Fly"),
        .height = 7,
        .weight = 151,
        .description = COMPOUND_STRING(
            "Originally thought to be completely blind,\n"
            "Kunemon seems to actually see through the\n"
            "lightning pattern on its head as they\n"
            "seem to change shape with emotion."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kunemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kunemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kunemon,
        .shinyPalette = gMonShinyPalette_Kunemon,
        .iconSprite = gMonIcon_Kunemon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Kunemon)
        OVERWORLD(
            sPicTable_Kunemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kunemon,
            gShinyOverworldPalette_Kunemon
        )
        .levelUpLearnset = sKunemonLevelUpLearnset,
        .teachableLearnset = sKunemonTeachableLearnset,
    },

    [SPECIES_LABRAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 56,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 52,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Labramon"),
        .cryId = CRY_LABRAMON,
        .natDexNum = NATIONAL_DEX_LABRAMON,
        .categoryName = _("Labrador"),
        .height = 16,
        .weight = 311,
        .description = COMPOUND_STRING(
            "Many believe that Rookie Digimon like\n"
            "Labramon are the highest level an\n"
            "artificial Digimon can reach however their\n"
            "is growing evidence on the contrary."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Labramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Labramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Labramon,
        .shinyPalette = gMonShinyPalette_Labramon,
        .iconSprite = gMonIcon_Labramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Labramon)
        OVERWORLD(
            sPicTable_Labramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Labramon,
            gShinyOverworldPalette_Labramon
        )
        .levelUpLearnset = sLabramonLevelUpLearnset,
        .teachableLearnset = sLabramonTeachableLearnset,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 70,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafeon"),
        .cryId = CRY_LEAFEON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "Its cellular composition is closer to\n"
            "that of a plant than an animal. It uses\n"
            "photosynthesis to produce its energy\n"
            "supply without eating food."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leafeon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Leafeon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Leafeon,
        .shinyPalette = gMonShinyPalette_Leafeon,
        .iconSprite = gMonIcon_Leafeon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Leafeon)
        OVERWORLD(
            sPicTable_Leafeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Leafeon,
            gShinyOverworldPalette_Leafeon
        )
        .levelUpLearnset = sLeafeonLevelUpLearnset,
        .teachableLearnset = sLeafeonTeachableLearnset,
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 184 : 196,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Glaceon"),
        .cryId = CRY_GLACEON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("Fresh Snow"),
        .height = 8,
        .weight = 259,
        .description = COMPOUND_STRING(
            "It can control its body temperature\n"
            "at will. This enables it to freeze the\n"
            "moisture in the atmosphere, creating\n"
            "flurries of diamond dust."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Glaceon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Glaceon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Glaceon,
        .shinyPalette = gMonShinyPalette_Glaceon,
        .iconSprite = gMonIcon_Glaceon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Glaceon)
        OVERWORLD(
            sPicTable_Glaceon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Glaceon,
            gShinyOverworldPalette_Glaceon
        )
        .levelUpLearnset = sGlaceonLevelUpLearnset,
        .teachableLearnset = sGlaceonTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("Sylveon"),
        .cryId = CRY_SYLVEON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("Intertwine"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its ribbonlike feelers give off an aura\n"
            "that weakens hostility in its prey, causing\n"
            "them to let down their guard. A moment\n"
            "later, it pounces."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sylveon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Sylveon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Sylveon,
        .shinyPalette = gMonShinyPalette_Sylveon,
        .iconSprite = gMonIcon_Sylveon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Sylveon)
        OVERWORLD(
            sPicTable_Sylveon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sylveon,
            gShinyOverworldPalette_Sylveon
        )
        .levelUpLearnset = sSylveonLevelUpLearnset,
        .teachableLearnset = sSylveonTeachableLearnset,
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_CRABMON_X

#if P_FAMILY_DOKUNEMON
    [SPECIES_DOKUNEMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 51,
        .baseSpeed     = 56,
        .baseSpAttack  = 57,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_POISON, TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dokunemon"),
        .cryId = CRY_DOKUNEMON,
        .natDexNum = NATIONAL_DEX_DOKUNEMON,
        .categoryName = _("Bee-Fly"),
        .height = 7,
        .weight = 104,
        .description = COMPOUND_STRING(
            "Scientists theorize that Dokunemon could\n"
            "be the key to understanding the mystery\n"
            "of insect Digimon. Unlike Kunemon, \n"
            "Dokunemon has a timid personality."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dokunemon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Dokunemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dokunemon,
        .shinyPalette = gMonShinyPalette_Dokunemon,
        .iconSprite = gMonIcon_Dokunemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dokunemon)
        OVERWORLD(
            sPicTable_Dokunemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dokunemon,
            gShinyOverworldPalette_Dokunemon
        )
        .levelUpLearnset = sDokunemonLevelUpLearnset,
        .teachableLearnset = sDokunemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, ITEM_UPGRADE, SPECIES_RENAMON_X},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_RENAMON_X}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_RENAMON_X] =
    {
        .baseHP        = 51,
        .baseAttack    = 60,
        .baseDefense   = 50,
        .baseSpeed     = 54,
        .baseSpAttack  = 69,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Renamon"),
        .cryId = CRY_RENAMON_X,
        .natDexNum = NATIONAL_DEX_RENAMON_X,
        .categoryName = _("X Antibody"),
        .height = 20,
        .weight = 414,
        .description = COMPOUND_STRING(
            "Renamon X are more well-versed in the\n"
            "dark arts making them a terrifying\n"
            "opponent. It will cover itself in red\n"
            "markings to symbolise its new strength."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Renamon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 9,
        .backPic = gMonBackPic_Renamon_x,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Renamon_x,
        .shinyPalette = gMonShinyPalette_Renamon_x,
        .iconSprite = gMonIcon_Renamon_x,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Renamon_x)
        OVERWORLD(
            sPicTable_Renamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Renamon_x,
            gShinyOverworldPalette_Renamon_x
        )
        .levelUpLearnset = sRenamon_xLevelUpLearnset,
        .teachableLearnset = sRenamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 268,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 241,
    #else
        .expYield = 185,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Porygon-Z"),
        .cryId = CRY_PORYGON_Z,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("Virtual"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING(
            "In order to create a more advanced\n"
            "Pokémon, an additional program was\n"
            "installed, but apparently it contained a\n"
            "defect that made it move oddly."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PorygonZ,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_PorygonZ,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_PorygonZ,
        .shinyPalette = gMonShinyPalette_PorygonZ,
        .iconSprite = gMonIcon_PorygonZ,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(PorygonZ)
        OVERWORLD(
            sPicTable_PorygonZ,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PorygonZ,
            gShinyOverworldPalette_PorygonZ
        )
        .levelUpLearnset = sPorygonZLevelUpLearnset,
        .teachableLearnset = sPorygonZTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_DOKUNEMON

#if P_FAMILY_DONDOKOMON
    [SPECIES_DONDOKOMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 56,
        .baseDefense   = 58,
        .baseSpeed     = 52,
        .baseSpAttack  = 58,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_INSOMNIA, ABILITY_SOUNDPROOF }, // SOUND BOOST
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dondokomon"),
        .cryId = CRY_DONDOKOMON,
        .natDexNum = NATIONAL_DEX_DONDOKOMON,
        .categoryName = _("Matsuri Ji"),
        .height = 5,
        .weight = 253,
        .description = COMPOUND_STRING(
            "When a festival is around, you can almost\n"
            "guarantee that a Dondokomon will be nearby.\n"
            "They love to pound out a rhythm that gets\n"
            "people stimulated and in a groove."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dondokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Dondokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dondokomon,
        .shinyPalette = gMonShinyPalette_Dondokomon,
        .iconSprite = gMonIcon_Dondokomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dondokomon)
        OVERWORLD(
            sPicTable_Dondokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Dondokomon,
            gShinyOverworldPalette_Dondokomon
        )
        .levelUpLearnset = sDondokomonLevelUpLearnset,
        .teachableLearnset = sDondokomonTeachableLearnset,
        .eggMoveLearnset = sDondokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_DORUMON}),
    },

    [SPECIES_DORUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_STEELWORKER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dorumon"),
        .cryId = CRY_DORUMON,
        .natDexNum = NATIONAL_DEX_DORUMON,
        .categoryName = _("X Antibody"),
        .height = 12,
        .weight = 400,
        .description = COMPOUND_STRING(
            "The current leading theory on Dorumons\n"
            "origin is that was a 'Prototype Digimon'\n"
            "from a long time ago. It has an\n"
            "incredible combat sense and instinct."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dorumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Dorumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dorumon,
        .shinyPalette = gMonShinyPalette_Dorumon,
        .iconSprite = gMonIcon_Dorumon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dorumon)
        OVERWORLD(
            sPicTable_Dorumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dorumon,
            gShinyOverworldPalette_Dorumon
        )
        .levelUpLearnset = sDorumonLevelUpLearnset,
        .teachableLearnset = sDorumonTeachableLearnset,
    },
#endif //P_FAMILY_DONDOKOMON

#if P_FAMILY_DOTAGUMON
    [SPECIES_DOTAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 48,
        .baseSpeed     = 46,
        .baseSpAttack  = 68,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dotagumon"),
        .cryId = CRY_DOTAGUMON,
        .natDexNum = NATIONAL_DEX_DOTAGUMON,
        .categoryName = _("8 Bit"),
        .height = 10,
        .weight = 8,
        .description = COMPOUND_STRING(
            "DotAgumon is rare form of Agumon that happens\n"
            "when an Agumon takes in too much data from\n"
            "keychain games. It's power is the exact\n"
            "same as Agumon but its potential is unknown."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dotagumon,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Dotagumon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dotagumon,
        .shinyPalette = gMonShinyPalette_Dotagumon,
        .iconSprite = gMonIcon_Dotagumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Dotagumon)
        OVERWORLD(
            sPicTable_Dotagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Dotagumon,
            gShinyOverworldPalette_Dotagumon
        )
        .levelUpLearnset = sDotagumonLevelUpLearnset,
        .teachableLearnset = sDotagumonTeachableLearnset,
        .eggMoveLearnset = sDotagumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_EBIDRAMON}),
    },

    [SPECIES_DOTFALCMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 56,
        .baseDefense   = 48,
        .baseSpeed     = 67,
        .baseSpAttack  = 55,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dotfalcmon"),
        .cryId = CRY_DOTFALCMON,
        .natDexNum = NATIONAL_DEX_DOTFALCMON,
        .categoryName = _("8 Bit"),
        .height = 10,
        .weight = 8,
        .description = COMPOUND_STRING(
            "In a similiar fashion to DotAgumon,\n"
            "DotFalcomon is caused when a Falcomon takes\n"
            "in too much data from a keychain game. It's\n"
            "unknown if it can actually evolve or not."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dotfalcmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Dotfalcmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dotfalcmon,
        .shinyPalette = gMonShinyPalette_Dotfalcmon,
        .iconSprite = gMonIcon_Dotfalcmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dotfalcmon)
        OVERWORLD(
            sPicTable_Dotfalcmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dotfalcmon,
            gShinyOverworldPalette_Dotfalcmon
        )
        .levelUpLearnset = sDotfalcmonLevelUpLearnset,
        .teachableLearnset = sDotfalcmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DIATRYMON}),
    },
#endif //P_FAMILY_DOTAGUMON

#if P_FAMILY_DRACMON
    [SPECIES_DRACMON] =
    {
        .baseHP        = 58,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS, 
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dracmon"),
        .cryId = CRY_DRACMON,
        .natDexNum = NATIONAL_DEX_DRACMON,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 237,
        .description = COMPOUND_STRING(
            "If you want a prank to be done, Dracmon\n"
            "is the perfect Digimon for the job. It\n"
            "will do any prank from graffitiing the\n"
            "soveriegns to scaring fresh born Digimon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Dracmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backPic = gMonBackPic_Dracmon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dracmon,
        .shinyPalette = gMonShinyPalette_Dracmon,
        .iconSprite = gMonIcon_Dracmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Dracmon)
        OVERWORLD(
            sPicTable_Dracmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dracmon,
            gShinyOverworldPalette_Dracmon
        )
        .levelUpLearnset = sDracmonLevelUpLearnset,
        .teachableLearnset = sDracmonTeachableLearnset,
        .eggMoveLearnset = sDracmonEggMoveLearnset,
        .formSpeciesIdTable = sDracmonFormSpeciesIdTable,
        .formChangeTable = sDracmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DARMAILMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DRACMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_ROCK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 215,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dracmon"),
        .cryId = CRY_DRACMON_MEGA,
        .natDexNum = NATIONAL_DEX_DRACMON,
        .categoryName = _("Fossil"),
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution has\n"
            "completely restored its genes. The rocks\n"
            "on its body are harder than diamond."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_DracmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_DracmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_DracmonMega,
        .shinyPalette = gMonShinyPalette_DracmonMega,
        .iconSprite = gMonIcon_DracmonMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Dracmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DracmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DracmonMega,
            gShinyOverworldPalette_DracmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sDracmonLevelUpLearnset,
        .teachableLearnset = sDracmonTeachableLearnset,
        .eggMoveLearnset = sDracmonEggMoveLearnset,
        .formSpeciesIdTable = sDracmonFormSpeciesIdTable,
        .formChangeTable = sDracmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRACMON

#if P_FAMILY_DRACOMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 94,
        .evYield_HP = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Munchlax"),
        .cryId = CRY_MUNCHLAX,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("Big Eater"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "When it finds something that looks like\n"
            "it might be edible, it goes right ahead\n"
            "and swallows it whole. That's why it gets\n"
            "fatter day by day."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Munchlax,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Munchlax,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Munchlax,
        .shinyPalette = gMonShinyPalette_Munchlax,
        .iconSprite = gMonIcon_Munchlax,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Munchlax)
        OVERWORLD(
            sPicTable_Munchlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Munchlax,
            gShinyOverworldPalette_Munchlax
        )
        .levelUpLearnset = sMunchlaxLevelUpLearnset,
        .teachableLearnset = sMunchlaxTeachableLearnset,
        .eggMoveLearnset = sMunchlaxEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_DRACOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 60,
        .baseDefense   = 58,
        .baseSpeed     = 51,
        .baseSpAttack  = 55,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON,
        .natDexNum = NATIONAL_DEX_DRACOMON,
        .categoryName = _("Dramon"),
        .height = 9,
        .weight = 374,
        .description = COMPOUND_STRING(
            "Dracomon is an ancient, pure-blooded Digimon\n"
            "that is thought to be the progenitor of\n"
            "all Dramon-type Digimon. It's body is also\n"
            "packed with incredible power for its size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_Dracomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dracomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dracomon,
        .shinyPalette = gMonShinyPalette_Dracomon,
        .iconSprite = gMonIcon_Dracomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dracomon)
        OVERWORLD(
            sPicTable_Dracomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dracomon,
            gShinyOverworldPalette_Dracomon
        )
        .levelUpLearnset = sDracomonLevelUpLearnset,
        .teachableLearnset = sDracomonTeachableLearnset,
        .eggMoveLearnset = sDracomonEggMoveLearnset,
        .formSpeciesIdTable = sDracomonFormSpeciesIdTable,
        .formChangeTable = sDracomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 90, SPECIES_DEXDORUMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DRACOMON_X},
                                {EVO_LEVEL, 34, SPECIES_COREDRAMON_BLUE}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DRACOMON_GMAX] =
    {
        .baseHP        = 170,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = P_UPDATED_STATS >= GEN_2 ? 110 : 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 189 : 154,
        .evYield_HP = 2,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON,
        .natDexNum = NATIONAL_DEX_DRACOMON,
        .categoryName = _("Sleeping"),
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax energy has affected\n"
            "stray seeds and even pebbles that\n"
            "got stuck to Dracomon, making them grow\n"
            "to a huge size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        .frontPic = gMonFrontPic_DracomonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DracomonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DracomonGmax,
        .shinyPalette = gMonShinyPalette_DracomonGmax,
        .iconSprite = gMonIcon_DracomonGmax,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dracomon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDracomonLevelUpLearnset,
        .teachableLearnset = sDracomonTeachableLearnset,
        .eggMoveLearnset = sDracomonEggMoveLearnset,
        .formSpeciesIdTable = sDracomonFormSpeciesIdTable,
        .formChangeTable = sDracomonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DRACOMON

#if P_FAMILY_DRACOMON_X
    [SPECIES_DRACOMON_X] =
    {
        .baseHP        = 52,
        .baseAttack    = 66,
        .baseDefense   = 56,
        .baseSpeed     = 55,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON_X,
        .natDexNum = NATIONAL_DEX_DRACOMON_X,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 441,
        .description = COMPOUND_STRING(
            "Dracomon X is a formidable foe with it now\n"
            "gaining the ability of flight for a short\n"
            "time and its wings now serving as weapons.\n"
            "It can now also use wind based attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Dracomon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Dracomon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Dracomon_x,
        .shinyPalette = gMonShinyPalette_Dracomon_x,
        .iconSprite = gMonIcon_Dracomon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Dracomon_x)
        OVERWORLD(
            sPicTable_Dracomon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dracomon_x,
            gShinyOverworldPalette_Dracomon_x
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDracomon_xLevelUpLearnset,
        .teachableLearnset = sDracomon_xTeachableLearnset,
        .formSpeciesIdTable = sDracomon_xFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DAMEMON_FUSION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_DRACOMON_X_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dracomon"),
        .cryId = CRY_DRACOMON_X,
        .natDexNum = NATIONAL_DEX_DRACOMON_X,
        .categoryName = _("Cruel"),
        .height = 17,
        .weight = 509,
        .description = COMPOUND_STRING(
            "It fires beams that immobilize opponents\n"
            "as if they had been frozen solid.\n"
            "Its feather-like blades of psychic energy\n"
            "rip through thick iron sheets like paper."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Dracomon_xGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Dracomon_xGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dracomon_xGalar,
        .shinyPalette = gMonShinyPalette_Dracomon_xGalar,
        .iconSprite = gMonIcon_Dracomon_xGalar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dracomon_x)
        OVERWORLD(
            sPicTable_Dracomon_xGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dracomon_xGalar,
            gShinyOverworldPalette_Dracomon_xGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sDracomon_xGalarLevelUpLearnset,
        .teachableLearnset = sDracomon_xGalarTeachableLearnset,
        .formSpeciesIdTable = sDracomon_xFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DRACOMON_X

#if P_FAMILY_EBIBURGMON
    [SPECIES_EBIBURGMON] =
    {
        .baseHP        = 70,
        .baseAttack    = 34,
        .baseDefense   = 52,
        .baseSpeed     = 48,
        .baseSpAttack  = 32,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_AROMA_VEIL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Ebiburgmon"),
        .cryId = CRY_EBIBURGMON,
        .natDexNum = NATIONAL_DEX_EBIBURGMON,
        .categoryName = _("Burger"),
        .height = 10,
        .weight = 126,
        .description = COMPOUND_STRING(
            "Although Burgermon are usually good cooks,\n"
            "EbiBurgamons food is generally disgusting\n"
            "as it will try to mix seafood into dishes\n"
            "that do not need seafood."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Ebiburgmon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Ebiburgmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Ebiburgmon,
        .shinyPalette = gMonShinyPalette_Ebiburgmon,
        .iconSprite = gMonIcon_Ebiburgmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Ebiburgmon)
        OVERWORLD(
            sPicTable_Ebiburgmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ebiburgmon,
            gShinyOverworldPalette_Ebiburgmon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEbiburgmonLevelUpLearnset,
        .teachableLearnset = sEbiburgmonTeachableLearnset,
        .formSpeciesIdTable = sEbiburgmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BURGERMON_CHAMPION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_EBIBURGMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ebiburgmon"),
        .cryId = CRY_EBIBURGMON,
        .natDexNum = NATIONAL_DEX_EBIBURGMON,
        .categoryName = _("Strong Legs"),
        .height = 16,
        .weight = 582,
        .description = COMPOUND_STRING(
            "When its feathers rub together, they\n"
            "produce a crackling sound like the\n"
            "zapping of electricity. Apparently, it runs\n"
            "through the mountains at over 180 mph."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_EbiburgmonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EbiburgmonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EbiburgmonGalar,
        .shinyPalette = gMonShinyPalette_EbiburgmonGalar,
        .iconSprite = gMonIcon_EbiburgmonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Ebiburgmon)
        OVERWORLD(
            sPicTable_EbiburgmonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_EbiburgmonGalar,
            gShinyOverworldPalette_EbiburgmonGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEbiburgmonGalarLevelUpLearnset,
        .teachableLearnset = sEbiburgmonGalarTeachableLearnset,
        .formSpeciesIdTable = sEbiburgmonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EBIBURGMON

#if P_FAMILY_EKAKIMON
    [SPECIES_EKAKIMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 52,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 73,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ekakimon"),
        .cryId = CRY_EKAKIMON,
        .natDexNum = NATIONAL_DEX_EKAKIMON,
        .categoryName = _("Pencil"),
        .height = 7,
        .weight = 114,
        .description = COMPOUND_STRING(
            "Many people do not trust Ekakimon as it has\n"
            "a sinister smile on its face at all times\n"
            "but thats just because it is so happy for\n"
            "the pictures it is usually drawing."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Ekakimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backPic = gMonBackPic_Ekakimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Ekakimon,
        .shinyPalette = gMonShinyPalette_Ekakimon,
        .iconSprite = gMonIcon_Ekakimon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Ekakimon)
        OVERWORLD(
            sPicTable_Ekakimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Ekakimon,
            gShinyOverworldPalette_Ekakimon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEkakimonLevelUpLearnset,
        .teachableLearnset = sEkakimonTeachableLearnset,
        .formSpeciesIdTable = sEkakimonFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_EKAKIMON_GALAR] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ekakimon"),
        .cryId = CRY_EKAKIMON,
        .natDexNum = NATIONAL_DEX_EKAKIMON,
        .categoryName = _("Malevolent"),
        .height = 20,
        .weight = 670,
        .description = COMPOUND_STRING(
            "This Pokémon's sinister, flame-like aura\n"
            "will consume the spirit of any creature\n"
            "it hits. Victims become burned-out\n"
            "shadows of themselves."),
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_EkakimonGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EkakimonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EkakimonGalar,
        .shinyPalette = gMonShinyPalette_EkakimonGalar,
        .iconSprite = gMonIcon_EkakimonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Ekakimon)
        OVERWORLD(
            sPicTable_EkakimonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_EkakimonGalar,
            gShinyOverworldPalette_EkakimonGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sEkakimonGalarLevelUpLearnset,
        .teachableLearnset = sEkakimonGalarTeachableLearnset,
        .formSpeciesIdTable = sEkakimonFormSpeciesIdTable,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_EKAKIMON

#if P_FAMILY_ELECMON
    [SPECIES_ELECMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 55,
        .baseSpAttack  = 59,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Elecmon"),
        .cryId = CRY_ELECMON,
        .natDexNum = NATIONAL_DEX_ELECMON,
        .categoryName = _("Electricity"),
        .height = 9,
        .weight = 226,
        .description = COMPOUND_STRING(
            "Elecmon is a very curious and lively\n"
            "Digimon. It's nine tails are likely caused\n"
            "by taking in peacock data at one point as it\n"
            "is used in similiar way to a peacocks tail."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Elecmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Elecmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Elecmon,
        .shinyPalette = gMonShinyPalette_Elecmon,
        .iconSprite = gMonIcon_Elecmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 3, SHADOW_SIZE_L)
        FOOTPRINT(Elecmon)
        OVERWORLD(
            sPicTable_Elecmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Elecmon,
            gShinyOverworldPalette_Elecmon
        )
        .levelUpLearnset = sElecmonLevelUpLearnset,
        .teachableLearnset = sElecmonTeachableLearnset,
        .eggMoveLearnset = sElecmonEggMoveLearnset,
    },

    [SPECIES_ELECMON_VIOLET] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 52,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_STATIC, ABILITY_POISON_POINT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elecmon"),
        .cryId = CRY_ELECMON_VIOLET,
        .natDexNum = NATIONAL_DEX_ELECMON_VIOLET,
        .categoryName = _("Electricity"),
        .height = 7,
        .weight = 287,
        .description = COMPOUND_STRING(
            "This Elecmon is a much more violent Elecmon\n"
            "as it has gained the Virus typing. It will\n"
            "indiscriminately attack anyone who it sees\n"
            "however it can be easily handled as it's weak."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        .frontPic = gMonFrontPic_Elecmon_violet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Elecmon_violet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(40, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Elecmon_violet,
        .shinyPalette = gMonShinyPalette_Elecmon_violet,
        .iconSprite = gMonIcon_Elecmon_violet,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Elecmon_violet)
        OVERWORLD(
            sPicTable_Elecmon_violet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Elecmon_violet,
            gShinyOverworldPalette_Elecmon_violet
        )
        .levelUpLearnset = sElecmon_violetLevelUpLearnset,
        .teachableLearnset = sElecmon_violetTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_BOARMON}),
    },

    [SPECIES_ESPIMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 49,
        .baseDefense   = 50,
        .baseSpeed     = 64,
        .baseSpAttack  = 71,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INFILTRATOR, ABILITY_MAGNET_PULL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Espimon"),
        .cryId = CRY_ESPIMON,
        .natDexNum = NATIONAL_DEX_ESPIMON,
        .categoryName = _("Espionage"),
        .height = 7,
        .weight = 412,
        .description = COMPOUND_STRING(
            "Despite it's small and dumb looks, Espimon\n"
            "is actually an incredibly smart Digimon\n"
            "with the ability to swiftly infiltrate\n"
            "any location it so desires."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Espimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_SHAKE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Espimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Espimon,
        .shinyPalette = gMonShinyPalette_Espimon,
        .iconSprite = gMonIcon_Espimon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Espimon)
        OVERWORLD(
            sPicTable_Espimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Espimon,
            gShinyOverworldPalette_Espimon
        )
        .levelUpLearnset = sEspimonLevelUpLearnset,
        .teachableLearnset = sEspimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_BLKGATOMON_UVER}),
    },
#endif //P_FAMILY_ELECMON

#if P_FAMILY_AGUMON_FAKE_EXPERT
    [SPECIES_AGUMON_FAKE_EXPERT] =
    {
        .baseHP        = 51,
        .baseAttack    = 60,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 56,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ANALYTIC, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Plagiarist"),
        .height = 11,
        .weight = 213,
        .description = COMPOUND_STRING(
            "Even though it is a very smart Digimon,\n"
            "NiseAgumon, it still plagiarises other\n"
            "Digimon works. Many question if its own\n"
            "title is legitimate or just a fake."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expert,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Agumon_fake_expert,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expert,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expert,
        .iconSprite = gMonIcon_Agumon_fake_expert,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Agumon_fake_expert)
        OVERWORLD(
            sPicTable_Agumon_fake_expert,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_fake_expert,
            gShinyOverworldPalette_Agumon_fake_expert
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGUMON_FAKE_EXPERT_MEGA_X] =
    {
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT_MEGA_X,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Genetic"),
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING(
            "Psychic power has augmented its muscles.\n"
            "It has a grip strength of one ton and can\n"
            "sprint a hundred meters in two seconds\n"
            "flat!"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expertMegaX,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_fake_expertMegaX,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expertMegaX,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expertMegaX,
        .iconSprite = gMonIcon_Agumon_fake_expertMegaX,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Agumon_fake_expert)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Agumon_fake_expertMegaX,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_fake_expertMegaX,
            gShinyOverworldPalette_Agumon_fake_expertMegaX
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
    },

    [SPECIES_AGUMON_FAKE_EXPERT_MEGA_Y] =
    {
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 390 : 351,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Agumon"),
        .cryId = CRY_AGUMON_FAKE_EXPERT_MEGA_Y,
        .natDexNum = NATIONAL_DEX_AGUMON_FAKE_EXPERT,
        .categoryName = _("Genetic"),
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Despite its diminished size, its mental\n"
            "power has grown phenomenally. With a mere\n"
            "thought, it can smash a skyscraper to\n"
            "smithereens."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Agumon_fake_expertMegaY,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Agumon_fake_expertMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expertMegaY,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expertMegaY,
        .iconSprite = gMonIcon_Agumon_fake_expertMegaY,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Agumon_fake_expert)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_Agumon_fake_expertMegaY,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Agumon_fake_expertMegaY,
            gShinyOverworldPalette_Agumon_fake_expertMegaY
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sAgumon_fake_expertLevelUpLearnset,
        .teachableLearnset = sAgumon_fake_expertTeachableLearnset,
        .formSpeciesIdTable = sAgumon_fake_expertFormSpeciesIdTable,
        .formChangeTable = sAgumon_fake_expertFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AGUMON_FAKE_EXPERT

#if P_FAMILY_FALCOMON
    [SPECIES_FALCOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 58,
        .baseDefense   = 51,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_EARLY_BIRD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Falcomon"),
        .cryId = CRY_FALCOMON,
        .natDexNum = NATIONAL_DEX_FALCOMON,
        .categoryName = _("Falcon"),
        .height = 9,
        .weight = 263,
        .description = COMPOUND_STRING(
            "Despite the fact that it loves on tall\n"
            "mountains and is full of Falcon Data, \n"
            "Falcomon can barely fly and instead has\n"
            "incredibly strong legs for movement."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Falcomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backPic = gMonBackPic_Falcomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Falcomon,
        .shinyPalette = gMonShinyPalette_Falcomon,
        .iconSprite = gMonIcon_Falcomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Falcomon)
        OVERWORLD(
            sPicTable_Falcomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Falcomon,
            gShinyOverworldPalette_Falcomon
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sFalcomonLevelUpLearnset,
        .teachableLearnset = sFalcomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DIATRYMON}),
    },
#endif //P_FAMILY_FALCOMON

#if P_FAMILY_FALCOMON_06
    [SPECIES_FALCOMON_06] =
    {
        .baseHP        = 49,
        .baseAttack    = 60,
        .baseDefense   = 51,
        .baseSpeed     = 67,
        .baseSpAttack  = 47,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NIGHT_VISION, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Falcomon"),
        .cryId = CRY_FALCOMON_06,
        .natDexNum = NATIONAL_DEX_FALCOMON_06,
        .categoryName = _("Ninja Bird"),
        .height = 12,
        .weight = 273,
        .description = COMPOUND_STRING(
            "These Falcomon are a subspecies of\n"
            "Falcomon who have learnt to fly and have\n"
            "a strong interest ninjutsu. They will use\n"
            "their ability to fly to drop atop targets."),
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Falcomon_06,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Falcomon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Falcomon_06,
        .shinyPalette = gMonShinyPalette_Falcomon_06,
        .iconSprite = gMonIcon_Falcomon_06,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Falcomon_06)
        OVERWORLD(
            sPicTable_Falcomon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Falcomon_06,
            gShinyOverworldPalette_Falcomon_06
        )
        .levelUpLearnset = sFalcomon_06LevelUpLearnset,
        .teachableLearnset = sFalcomon_06TeachableLearnset,
        .eggMoveLearnset = sFalcomon_06EggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_AIRDRAMON}),
    },

    [SPECIES_FANBEEMON] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 76,
        .baseSpAttack  = 43,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWARM, ABILITY_HONEY_GATHER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Fanbeemon"),
        .cryId = CRY_FANBEEMON,
        .natDexNum = NATIONAL_DEX_FANBEEMON,
        .categoryName = _("X Antibody"),
        .height = 8,
        .weight = 135,
        .description = COMPOUND_STRING(
            "Although a single Fanbeemon is incredibly\n"
            "weak, you should be incredibly careful\n"
            "when interacting with them as they can\n"
            "call the whole hive if threatened."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fanbeemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fanbeemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Fanbeemon,
        .shinyPalette = gMonShinyPalette_Fanbeemon,
        .iconSprite = gMonIcon_Fanbeemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Fanbeemon)
        OVERWORLD(
            sPicTable_Fanbeemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fanbeemon,
            gShinyOverworldPalette_Fanbeemon
        )
        .levelUpLearnset = sFanbeemonLevelUpLearnset,
        .teachableLearnset = sFanbeemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_FLYMON}),
    },

    [SPECIES_FLAMEMON] =
    {
        .baseHP        = 44,
        .baseAttack    = 43,
        .baseDefense   = 52,
        .baseSpeed     = 49,
        .baseSpAttack  = 72,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Flamemon"),
        .cryId = CRY_FLAMEMON,
        .natDexNum = NATIONAL_DEX_FLAMEMON,
        .categoryName = _("Hybrid"),
        .height = 18,
        .weight = 397,
        .description = COMPOUND_STRING(
            "Flamemon is the weakened form of Agnuimon\n"
            "however it can still pack an incredible\n"
            "punch as it is still a being that has\n"
            "inherited the Human Spirit of Flame."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Flamemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Flamemon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Flamemon,
        .shinyPalette = gMonShinyPalette_Flamemon,
        .iconSprite = gMonIcon_Flamemon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FlamemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .backPicFemale = gMonBackPic_FlamemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Flamemon)
        OVERWORLD(
            sPicTable_Flamemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flamemon,
            gShinyOverworldPalette_Flamemon
        )
        OVERWORLD_FEMALE(
            sPicTable_FlamemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sFlamemonLevelUpLearnset,
        .teachableLearnset = sFlamemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_AGUNIMON}),
    },
#endif //P_FAMILY_FALCOMON_06

#if P_FAMILY_FLORAMON
    [SPECIES_FLORAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 59,
        .baseSpeed     = 49,
        .baseSpAttack  = 54,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_AROMA_VEIL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Floramon"),
        .cryId = CRY_FLORAMON,
        .natDexNum = NATIONAL_DEX_FLORAMON,
        .categoryName = _("Flora"),
        .height = 12,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Despite the fact that its whole body is\n"
            "made of vegetation, it's head is \n"
            "incredibly tough. The petals on its body\n"
            "can open up wide when its feeling happy."),
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Floramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Floramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Floramon,
        .shinyPalette = gMonShinyPalette_Floramon,
        .iconSprite = gMonIcon_Floramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Floramon)
        OVERWORLD(
            sPicTable_Floramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Floramon,
            gShinyOverworldPalette_Floramon
        )
        .levelUpLearnset = sFloramonLevelUpLearnset,
        .teachableLearnset = sFloramonTeachableLearnset,
        .eggMoveLearnset = sFloramonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_BLKGATOMON}),
    },

    [SPECIES_GABUMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 52,
        .baseDefense   = 58,
        .baseSpeed     = 53,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ICE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Gabumon"),
        .cryId = CRY_GABUMON,
        .natDexNum = NATIONAL_DEX_GABUMON,
        .categoryName = _("Pelt"),
        .height = 13,
        .weight = 269,
        .description = COMPOUND_STRING(
            "A Gabumons pelt is made of discarded\n"
            "Garurumon data which acts as both a \n"
            "source of warmth and a defense mechanism\n"
            "against those scared of Garurumon."),
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gabumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Gabumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gabumon,
        .shinyPalette = gMonShinyPalette_Gabumon,
        .iconSprite = gMonIcon_Gabumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Gabumon)
        OVERWORLD(
            sPicTable_Gabumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gabumon,
            gShinyOverworldPalette_Gabumon
        )
        .levelUpLearnset = sGabumonLevelUpLearnset,
        .teachableLearnset = sGabumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKGABUMON},
            {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GABUMON_X},
            {EVO_LEVEL, 36, SPECIES_GARURUMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define GABUMON_X_EXP_YIELD 267
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define GABUMON_X_EXP_YIELD 240
#else
    #define GABUMON_X_EXP_YIELD 209
#endif

    [SPECIES_GABUMON_X] =
    {
        .baseHP        = 57,
        .baseAttack    = 59,
        .baseDefense   = 54,
        .baseSpeed     = 53,
        .baseSpAttack  = 53,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_ICE),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Gabumon"),
        .cryId = CRY_GABUMON_X,
        .natDexNum = NATIONAL_DEX_GABUMON_X,
        .categoryName = _("X Antibody"),
        .height = 13,
        .weight = 295,
        .description = COMPOUND_STRING(
            "When the pelt is off, Gabumon X is still\n"
            "a shy and timid Digimon but once the it\n"
            "is wearing the pelt, it becomes more \n"
            "aggressive with a more rough fighting style."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gabumon_x,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Gabumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Gabumon_x,
        .shinyPalette = gMonShinyPalette_Gabumon_x,
        .iconSprite = gMonIcon_Gabumon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gabumon_x)
        OVERWORLD(
            sPicTable_Gabumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gabumon_x,
            gShinyOverworldPalette_Gabumon_x
        )
        .levelUpLearnset = sGabumon_xLevelUpLearnset,
        .teachableLearnset = sGabumon_xTeachableLearnset,
        .formSpeciesIdTable = sGabumon_xFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_GARURUMON_X}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_GABUMON_X_HISUI] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 45,
        .expYield = GABUMON_X_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Gabumon"),
        .cryId = CRY_GABUMON_X,
        .natDexNum = NATIONAL_DEX_GABUMON_X,
        .categoryName = _("Ghost Flame"),
        .height = 16,
        .weight = 698,
        .description = COMPOUND_STRING(
            "Said to purify lost, forsaken souls with\n"
            "its flames and guide them to the afterlife.\n"
            "It's believed its form was influenced by\n"
            "the energy of Mt. Coronet in ancient times."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gabumon_xHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gabumon_xHisui,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gabumon_xHisui,
        .shinyPalette = gMonShinyPalette_Gabumon_xHisui,
        .iconSprite = gMonIcon_Gabumon_xHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gabumon_x)
        OVERWORLD(
            sPicTable_Gabumon_xHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gabumon_xHisui,
            gShinyOverworldPalette_Gabumon_xHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGabumon_xHisuiLevelUpLearnset,
        .teachableLearnset = sGabumon_xHisuiTeachableLearnset,
        .formSpeciesIdTable = sGabumon_xFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_FLORAMON

#if P_FAMILY_GAMMAMON
    [SPECIES_GAMMAMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 54,
        .baseSpAttack  = 54,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_PICKUP, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gammamon"),
        .cryId = CRY_GAMMAMON,
        .natDexNum = NATIONAL_DEX_GAMMAMON,
        .categoryName = _("Triceratops"),
        .height = 6,
        .weight = 175,
        .description = COMPOUND_STRING(
            "While Gammamon doesn't excel at anything, \n"
            "it is still a heavily sought out Digimon as\n"
            "it is both adorable and considered a \n"
            "jack of all trades in battle."),
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gammamon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Gammamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gammamon,
        .shinyPalette = gMonShinyPalette_Gammamon,
        .iconSprite = gMonIcon_Gammamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Gammamon)
        OVERWORLD(
            sPicTable_Gammamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gammamon,
            gShinyOverworldPalette_Gammamon
        )
        .levelUpLearnset = sGammamonLevelUpLearnset,
        .teachableLearnset = sGammamonTeachableLearnset,
        .eggMoveLearnset = sGammamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_BETGAMAMON}),
    },

    [SPECIES_GAOMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 64,
        .baseDefense   = 52,
        .baseSpeed     = 63,
        .baseSpAttack  = 47,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Gaomon"),
        .cryId = CRY_GAOMON,
        .natDexNum = NATIONAL_DEX_GAOMON,
        .categoryName = _("Boxing"),
        .height = 13,
        .weight = 275,
        .description = COMPOUND_STRING(
            "Gaomons keen movements have let it\n"
            "specialise in an attack style called 'hit\n"
            "and away' where it inflicts a singular\n"
            "blow before retreating to confuse opponents."),
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gaomon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gaomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gaomon,
        .shinyPalette = gMonShinyPalette_Gaomon,
        .iconSprite = gMonIcon_Gaomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gaomon)
        OVERWORLD(
            sPicTable_Gaomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gaomon,
            gShinyOverworldPalette_Gaomon
        )
        .levelUpLearnset = sGaomonLevelUpLearnset,
        .teachableLearnset = sGaomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 61, SPECIES_BABOONMON},
                                {EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLGAOGAMON},
                                {EVO_LEVEL, 37, SPECIES_GAOGAMON}),
    },

    [SPECIES_GAOSSMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 68,
        .baseDefense   = 55,
        .baseSpeed     = 70,
        .baseSpAttack  = 46,
        .baseSpDefense = 43,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gaossmon"),
        .cryId = CRY_GAOSSMON,
        .natDexNum = NATIONAL_DEX_GAOSSMON,
        .categoryName = _("Big Jaw"),
        .height = 8,
        .weight = 292,
        .description = COMPOUND_STRING(
            "The only strong part of Gaossmon is its\n"
            "competitive spirit and ability to bark. Its\n"
            "strong legs can outrun almost any Rookie \n"
            "and even some Champions."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Gaossmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Gaossmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gaossmon,
        .shinyPalette = gMonShinyPalette_Gaossmon,
        .iconSprite = gMonIcon_Gaossmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gaossmon)
        OVERWORLD(
            sPicTable_Gaossmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gaossmon,
            gShinyOverworldPalette_Gaossmon
        )
        .levelUpLearnset = sGaossmonLevelUpLearnset,
        .teachableLearnset = sGaossmonTeachableLearnset,
    },
#endif //P_FAMILY_GAMMAMON

#if P_FAMILY_GAZIMON
    [SPECIES_GAZIMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 59,
        .baseDefense   = 51,
        .baseSpeed     = 56,
        .baseSpAttack  = 50,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gazimon"),
        .cryId = CRY_GAZIMON,
        .natDexNum = NATIONAL_DEX_GAZIMON,
        .categoryName = _("Mammal"),
        .height = 9,
        .weight = 135,
        .description = COMPOUND_STRING(
            "Although it is quite strong and aggressive,\n"
            "this Digimon often finds itself as the\n"
            "underlings of more powerful and cruel\n"
            "Digimon like Etemon."),
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gazimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 56) : MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gazimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gazimon,
        .shinyPalette = gMonShinyPalette_Gazimon,
        .iconSprite = gMonIcon_Gazimon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Gazimon)
        OVERWORLD(
            sPicTable_Gazimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gazimon,
            gShinyOverworldPalette_Gazimon
        )
        .levelUpLearnset = sGazimonLevelUpLearnset,
        .teachableLearnset = sGazimonTeachableLearnset,
        .eggMoveLearnset = sGazimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 62, SPECIES_DEVIDRAMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GAZIMON_X},
                                {EVO_LEVEL, 69, SPECIES_APEMON},
                                {EVO_LEVEL, 67, SPECIES_BLGARURMON},
                                {EVO_LEVEL, 38, SPECIES_DELTAMON}),
    },

    [SPECIES_GAZIMON_X] =
    {
        .baseHP        = 53,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 53,
        .baseSpAttack  = 50,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 90,
        .expYield = 116,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gazimon"),
        .cryId = CRY_GAZIMON_X,
        .natDexNum = NATIONAL_DEX_GAZIMON_X,
        .categoryName = _("X Antibody"),
        .height = 13,
        .weight = 164,
        .description = COMPOUND_STRING(
            "Gazimon X have found a better use of\n"
            "bipedialism to make themselves look bigger\n"
            "and more intimidating. It's fighting \n"
            "also incorporates this more."),
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gazimon_x,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Gazimon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Gazimon_x,
        .shinyPalette = gMonShinyPalette_Gazimon_x,
        .iconSprite = gMonIcon_Gazimon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Gazimon_x)
        OVERWORLD(
            sPicTable_Gazimon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gazimon_x,
            gShinyOverworldPalette_Gazimon_x
        )
        .levelUpLearnset = sGazimon_xLevelUpLearnset,
        .teachableLearnset = sGazimon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_CYCLONEMON}),
    },
#endif //P_FAMILY_GAZIMON

#if P_FAMILY_GHOSTMON
    [SPECIES_GHOSTMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 50,
        .baseDefense   = 59,
        .baseSpeed     = 47,
        .baseSpAttack  = 60,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ghostmon"),
        .cryId = CRY_GHOSTMON,
        .natDexNum = NATIONAL_DEX_GHOSTMON,
        .categoryName = _("Ghost"),
        .height = 10,
        .weight = 28,
        .description = COMPOUND_STRING(
            "Ghostmon can often be seen floating over\n"
            "graveyards. It is a very timid and shy\n"
            "Digimon that can take months to befriend\n"
            "however it will still help those in need."),
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ghostmon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .backPic = gMonBackPic_Ghostmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ghostmon,
        .shinyPalette = gMonShinyPalette_Ghostmon,
        .iconSprite = gMonIcon_Ghostmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Ghostmon)
        OVERWORLD(
            sPicTable_Ghostmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ghostmon,
            gShinyOverworldPalette_Ghostmon
        )
        .levelUpLearnset = sGhostmonLevelUpLearnset,
        .teachableLearnset = sGhostmonTeachableLearnset,
        .eggMoveLearnset = sGhostmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_FLARIZAMON}),
    },

    [SPECIES_GIZAMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 56,
        .baseDefense   = 53,
        .baseSpeed     = 59,
        .baseSpAttack  = 55,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gizamon"),
        .cryId = CRY_GIZAMON,
        .natDexNum = NATIONAL_DEX_GIZAMON,
        .categoryName = _("Amphibian"),
        .height = 9,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Although Gizamon are well equipped for land\n"
            "and water, they struggle to do anything but\n"
            "walk about on land however in water they\n"
            "quickly become a formidable opponent."),
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gizamon,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gizamon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Gizamon,
        .shinyPalette = gMonShinyPalette_Gizamon,
        .iconSprite = gMonIcon_Gizamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Gizamon)
        OVERWORLD(
            sPicTable_Gizamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gizamon,
            gShinyOverworldPalette_Gizamon
        )
        .levelUpLearnset = sGizamonLevelUpLearnset,
        .teachableLearnset = sGizamonTeachableLearnset,
    },
#endif //P_FAMILY_GHOSTMON

#if P_FAMILY_GIZUMON
    [SPECIES_GIZUMON] =
    {
        .baseHP        = 39,
        .baseAttack    = 43,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gizumon"),
        .cryId = CRY_GIZUMON,
        .natDexNum = NATIONAL_DEX_GIZUMON,
        .categoryName = _("Artificial"),
        .height = 43,
        .weight = 654,
        .description = COMPOUND_STRING(
            "Despite it's large size, Gizumon is only\n"
            "a Rookie level Digimon however its laser\n"
            "has fire power that can compete with\n"
            "Ultimates and even some Megas."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gizumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Gizumon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Gizumon,
        .shinyPalette = gMonShinyPalette_Gizumon,
        .iconSprite = gMonIcon_Gizumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GizumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_GizumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gizumon)
        OVERWORLD(
            sPicTable_Gizumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Gizumon,
            gShinyOverworldPalette_Gizumon
        )
        OVERWORLD_FEMALE(
            sPicTable_GizumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following
        )
        .levelUpLearnset = sGizumonLevelUpLearnset,
        .teachableLearnset = sGizumonTeachableLearnset,
        .eggMoveLearnset = sGizumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_DARKTYRMON}),
    },

    [SPECIES_GOBLIMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 57,
        .baseDefense   = 52,
        .baseSpeed     = 55,
        .baseSpAttack  = 51,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Goblimon"),
        .cryId = CRY_GOBLIMON,
        .natDexNum = NATIONAL_DEX_GOBLIMON,
        .categoryName = _("Goblin"),
        .height = 17,
        .weight = 325,
        .description = COMPOUND_STRING(
            "Goblimon is a devious Digimon that loves\n"
            "to terrorise weaker Digimon. However \n"
            "despite its personality, it will always\n"
            "travel in groups and run when threatened."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Goblimon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backPic = gMonBackPic_Goblimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Goblimon,
        .shinyPalette = gMonShinyPalette_Goblimon,
        .iconSprite = gMonIcon_Goblimon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GoblimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_GoblimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Goblimon)
        OVERWORLD(
            sPicTable_Goblimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goblimon,
            gShinyOverworldPalette_Goblimon
        )
        OVERWORLD_FEMALE(
            sPicTable_GoblimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sGoblimonLevelUpLearnset,
        .teachableLearnset = sGoblimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FUGAMON}),
    },
#endif //P_FAMILY_GIZUMON

#if P_FAMILY_GOMAMON
    [SPECIES_GOMAMON] =
    {
        .baseHP        = 62,
        .baseAttack    = 52,
        .baseDefense   = 56,
        .baseSpeed     = 49,
        .baseSpAttack  = 54,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_TORRENT, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gomamon"),
        .cryId = CRY_GOMAMON,
        .natDexNum = NATIONAL_DEX_GOMAMON,
        .categoryName = _("Seal"),
        .height = 6,
        .weight = 212,
        .description = COMPOUND_STRING(
            "Gomamon is a loveable Digimon that has a\n"
            "child-like personality. Many tamers end\n"
            "up not using them in battle but treating\n"
            "them more like younger siblings."),
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gomamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Gomamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 16,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Gomamon,
        .shinyPalette = gMonShinyPalette_Gomamon,
        .iconSprite = gMonIcon_Gomamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -8, SHADOW_SIZE_M)
        FOOTPRINT(Gomamon)
        OVERWORLD(
            sPicTable_Gomamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Gomamon,
            gShinyOverworldPalette_Gomamon
        )
        .levelUpLearnset = sGomamonLevelUpLearnset,
        .teachableLearnset = sGomamonTeachableLearnset,
        .eggMoveLearnset = sGomamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GOMAMON_X},
                                {EVO_LEVEL, 35, SPECIES_GAOGAMON}),
    },

    [SPECIES_GOMAMON_X] =
    {
        .baseHP        = 60,
        .baseAttack    = 56,
        .baseDefense   = 56,
        .baseSpeed     = 53,
        .baseSpAttack  = 57,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gomamon"),
        .cryId = CRY_GOMAMON_X,
        .natDexNum = NATIONAL_DEX_GOMAMON_X,
        .categoryName = _("X Antibody"),
        .height = 6,
        .weight = 275,
        .description = COMPOUND_STRING(
            "While still adorable, Gomamon X is not as\n"
            "child-like and now boasts incredible power\n"
            "for its tiny size. It has also well adapted\n"
            "land despite its lower body not changing much."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gomamon_x,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gomamon_x,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Gomamon_x,
        .shinyPalette = gMonShinyPalette_Gomamon_x,
        .iconSprite = gMonIcon_Gomamon_x,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gomamon_x)
        OVERWORLD(
            sPicTable_Gomamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Gomamon_x,
            gShinyOverworldPalette_Gomamon_x
        )
        .levelUpLearnset = sGomamon_xLevelUpLearnset,
        .teachableLearnset = sGomamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_EBIDRAMON}),
    },
#endif //P_FAMILY_GOMAMON

#if P_FAMILY_GOTSUMON_X
    [SPECIES_GOTSUMON_X] =
    {
        .baseHP        = 59,
        .baseAttack    = 61,
        .baseDefense   = 69,
        .baseSpeed     = 42,
        .baseSpAttack  = 49,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_STURDY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gotsumon"),
        .cryId = CRY_GOTSUMON_X,
        .natDexNum = NATIONAL_DEX_GOTSUMON_X,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 1152,
        .description = COMPOUND_STRING(
            "A Gotsumon X goes through radical change\n"
            "when changing as it bulks up immensely\n"
            "giving it a physique of a sumo wrestler.\n"
            "When attacking, it uses its full weight."),
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gotsumon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gotsumon_x,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gotsumon_x,
        .shinyPalette = gMonShinyPalette_Gotsumon_x,
        .iconSprite = gMonIcon_Gotsumon_x,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Gotsumon_x)
        OVERWORLD(
            sPicTable_Gotsumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Gotsumon_x,
            gShinyOverworldPalette_Gotsumon_x
        )
        .levelUpLearnset = sGotsumon_xLevelUpLearnset,
        .teachableLearnset = sGotsumon_xTeachableLearnset,
        .eggMoveLearnset = sGotsumon_xEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_BIOSTEGMON}),
    },

    [SPECIES_GUILMON] =
    {
        .baseHP        = 57,
        .baseAttack    = 61,
        .baseDefense   = 51,
        .baseSpeed     = 53,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Guilmon"),
        .cryId = CRY_GUILMON,
        .natDexNum = NATIONAL_DEX_GUILMON,
        .categoryName = _("Hazard"),
        .height = 14,
        .weight = 343,
        .description = COMPOUND_STRING(
            "The mark on Guilmons chest is called the\n"
            "Digital Hazard which is given to those\n"
            "who can deal massive damage to data. It\n"
            "can still be a force of good despite that."),
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guilmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Guilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Guilmon,
        .shinyPalette = gMonShinyPalette_Guilmon,
        .iconSprite = gMonIcon_Guilmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 4, SHADOW_SIZE_M)
        FOOTPRINT(Guilmon)
        OVERWORLD(
            sPicTable_Guilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Guilmon,
            gShinyOverworldPalette_Guilmon
        )
        .levelUpLearnset = sGuilmonLevelUpLearnset,
        .teachableLearnset = sGuilmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 70, SPECIES_BALUCHIMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GUILMON_X}, // X Antibody
                                {EVO_LEVEL, 37, SPECIES_BLGROWLMON}),
    },
#endif //P_FAMILY_GOTSUMON_X

#if P_FAMILY_HAGURUMON
#define HAGURUMON_FAMILY_TYPE (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL)

    [SPECIES_HAGURUMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 57,
        .baseDefense   = 56,
        .baseSpeed     = 46,
        .baseSpAttack  = 49,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Hagurumon"),
        .cryId = CRY_HAGURUMON,
        .natDexNum = NATIONAL_DEX_HAGURUMON,
        .categoryName = _("Gear"),
        .height = 15,
        .weight = 735,
        .description = COMPOUND_STRING(
            "Hagurumon often find themselves being used\n"
            "by more evil Digimon as it lacks any sense\n"
            "of self and can send a virus to other\n"
            "Digimon to control them."),
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hagurumon,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Hagurumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Hagurumon,
        .shinyPalette = gMonShinyPalette_Hagurumon,
        .iconSprite = gMonIcon_Hagurumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Hagurumon)
        OVERWORLD(
            sPicTable_Hagurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hagurumon,
            gShinyOverworldPalette_Hagurumon
        )
        .levelUpLearnset = sHagurumonLevelUpLearnset,
        .teachableLearnset = sHagurumonTeachableLearnset,
        .eggMoveLearnset = sHagurumonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_HAGURUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 32, SPECIES_BALISTAMON}),
    },

    [SPECIES_HAGURUMON_X] =
    {
        .baseHP        = 55,
        .baseAttack    = 62,
        .baseDefense   = 57,
        .baseSpeed     = 47,
        .baseSpAttack  = 46,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_MAGNET_PULL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Hagurumon"),
        .cryId = CRY_HAGURUMON_X,
        .natDexNum = NATIONAL_DEX_HAGURUMON_X,
        .categoryName = _("X Antibody"),
        .height = 18,
        .weight = 853,
        .description = COMPOUND_STRING(
            "Hagurumon X is a pretty unique Digimon at\n"
            "it has now grown 2 extra Digimon as a part\n"
            "of it, named KoHagurumon. If these little\n"
            "ones fall off, they can't act independently"),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hagurumon_x,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hagurumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Hagurumon_x,
        .shinyPalette = gMonShinyPalette_Hagurumon_x,
        .iconSprite = gMonIcon_Hagurumon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hagurumon_x)
        OVERWORLD(
            sPicTable_Hagurumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Hagurumon_x,
            gShinyOverworldPalette_Hagurumon_x
        )
        .levelUpLearnset = sHagurumon_xLevelUpLearnset,
        .teachableLearnset = sHagurumon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 57, SPECIES_CLOCKMON},
                                {EVO_LEVEL, 59, SPECIES_BLIMPMON},
                                {EVO_LEVEL, 32, SPECIES_DECKDRAMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .types = MON_TYPES(HAGURUMON_FAMILY_TYPE, TYPE_FLYING),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 273,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 245,
    #else
        .expYield = 220,
    #endif
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Togekiss"),
        .cryId = CRY_TOGEKISS,
        .natDexNum = NATIONAL_DEX_TOGEKISS,
        .categoryName = _("Jubilee"),
        .height = 15,
        .weight = 380,
        .description = COMPOUND_STRING(
            "As everyone knows, it visits peaceful\n"
            "regions, bringing them gifts of kindness\n"
            "and sweet blessings. It will never appear\n"
            "where there is strife."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togekiss,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Togekiss,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Togekiss,
        .shinyPalette = gMonShinyPalette_Togekiss,
        .iconSprite = gMonIcon_Togekiss,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 15, SHADOW_SIZE_M)
        FOOTPRINT(Togekiss)
        OVERWORLD(
            sPicTable_Togekiss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Togekiss,
            gShinyOverworldPalette_Togekiss
        )
        .levelUpLearnset = sTogekissLevelUpLearnset,
        .teachableLearnset = sTogekissTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_HAGURUMON

#if P_FAMILY_HAWKMON
    [SPECIES_HAWKMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 56,
        .baseDefense   = 52,
        .baseSpeed     = 59,
        .baseSpAttack  = 52,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Hawkmon"),
        .cryId = CRY_HAWKMON,
        .natDexNum = NATIONAL_DEX_HAWKMON,
        .categoryName = _("Hawk"),
        .height = 10,
        .weight = 105,
        .description = COMPOUND_STRING(
            "People are often quickly wooed by Hawkmon\n"
            "as they are a very polite and calm Digimon.\n"
            "If it so wanted, it could probably convince\n"
            "people to do its bidding."),
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hawkmon,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Hawkmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hawkmon,
        .shinyPalette = gMonShinyPalette_Hawkmon,
        .iconSprite = gMonIcon_Hawkmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, -4, SHADOW_SIZE_S)
        FOOTPRINT(Hawkmon)
        OVERWORLD(
            sPicTable_Hawkmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hawkmon,
            gShinyOverworldPalette_Hawkmon
        )
        .levelUpLearnset = sHawkmonLevelUpLearnset,
        .teachableLearnset = sHawkmonTeachableLearnset,
        .eggMoveLearnset = sHawkmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_ALLOMON},
                                {EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_FLYBEEMON},
                                {EVO_LEVEL, 30, SPECIES_AQUILAMON}),
    },

    [SPECIES_HERISSMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 62,
        .baseDefense   = 64,
        .baseSpeed     = 49,
        .baseSpAttack  = 52,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Herissmon"),
        .cryId = CRY_HERISSMON,
        .natDexNum = NATIONAL_DEX_HERISSMON,
        .categoryName = _("Hedgehog"),
        .height = 13,
        .weight = 142,
        .description = COMPOUND_STRING(
            "Herissmon is a very curious Digimon and\n"
            "randomly fixate onto things. Though this\n"
            "does not mean they lose focus as they\n"
            "will still be wary of their surroundings."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Herissmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 56) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Herissmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Herissmon,
        .shinyPalette = gMonShinyPalette_Herissmon,
        .iconSprite = gMonIcon_Herissmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_HerissmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Herissmon)
        OVERWORLD(
            sPicTable_Herissmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Herissmon,
            gShinyOverworldPalette_Herissmon
        )
        OVERWORLD_FEMALE(
            sPicTable_HerissmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sHerissmonLevelUpLearnset,
        .teachableLearnset = sHerissmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_FILMON}),
    },
#endif //P_FAMILY_HAWKMON

#if P_FAMILY_HYOKOMON
    [SPECIES_HYOKOMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 52,
        .baseDefense   = 49,
        .baseSpeed     = 54,
        .baseSpAttack  = 45,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Hyokomon"),
        .cryId = CRY_HYOKOMON,
        .natDexNum = NATIONAL_DEX_HYOKOMON,
        .categoryName = _("Samurai"),
        .height = 8,
        .weight = 237,
        .description = COMPOUND_STRING(
            "Its small size lead to Hyokomon often\n"
            "being mistaken as an In-Training Digimon\n"
            "however it is a full-fledged Rookie who\n"
            "is training to master its swordsmanship."),
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hyokomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 50,
        .backPic = gMonBackPic_Hyokomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Hyokomon,
        .shinyPalette = gMonShinyPalette_Hyokomon,
        .iconSprite = gMonIcon_Hyokomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Hyokomon)
        OVERWORLD(
            sPicTable_Hyokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hyokomon,
            gShinyOverworldPalette_Hyokomon
        )
        .levelUpLearnset = sHyokomonLevelUpLearnset,
        .teachableLearnset = sHyokomonTeachableLearnset,
        .eggMoveLearnset = sHyokomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 39, SPECIES_BURAIMON}),
    },

    [SPECIES_IGNITEMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 61,
        .baseDefense   = 49,
        .baseSpeed     = 54,
        .baseSpAttack  = 54,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ignitemon"),
        .cryId = CRY_IGNITEMON,
        .natDexNum = NATIONAL_DEX_IGNITEMON,
        .categoryName = _("Reptile Man"),
        .height = 13,
        .weight = 386,
        .description = COMPOUND_STRING(
            "Ignitemon will spend its time playing\n"
            "with Monitamon. During downtime, they will\n"
            "also watch a comedy digitalk show. The\n"
            "rest of its time is spent lazing about."),
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ignitemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Ignitemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Ignitemon,
        .shinyPalette = gMonShinyPalette_Ignitemon,
        .iconSprite = gMonIcon_Ignitemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Ignitemon)
        OVERWORLD(
            sPicTable_Ignitemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ignitemon,
            gShinyOverworldPalette_Ignitemon
        )
        .levelUpLearnset = sIgnitemonLevelUpLearnset,
        .teachableLearnset = sIgnitemonTeachableLearnset,
    },

#define IMPMON_DEFENSE (P_UPDATED_STATS >= GEN_6 ? 85 : 75)

    [SPECIES_IMPMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 50,
        .baseDefense   = 51,
        .baseSpeed     = 55,
        .baseSpAttack  = 59,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Impmon"),
        .cryId = CRY_IMPMON,
        .natDexNum = NATIONAL_DEX_IMPMON,
        .categoryName = _("Imp"),
        .height = 9,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Impmon loves seeing its opponents\n"
            "embarrassed and will go to great lengths\n"
            "to do so. Unlike many other Dark Digimon, \n"
            "Impmon will stand up against the strong."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Impmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Impmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Impmon,
        .shinyPalette = gMonShinyPalette_Impmon,
        .iconSprite = gMonIcon_Impmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Impmon)
        OVERWORLD(
            sPicTable_Impmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Impmon,
            gShinyOverworldPalette_Impmon
        )
        .levelUpLearnset = sImpmonLevelUpLearnset,
        .teachableLearnset = sImpmonTeachableLearnset,
        .formSpeciesIdTable = sImpmonFormSpeciesIdTable,
        .formChangeTable = sImpmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 52, SPECIES_BIOTHUNMON},
                                {EVO_LEVEL, 55, SPECIES_BOOGIEMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_IMPMON_X},
                                {EVO_LEVEL, 30, SPECIES_DEVIMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_IMPMON_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = IMPMON_DEFENSE + 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 305 : 275,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Impmon"),
        .cryId = CRY_IMPMON_MEGA,
        .natDexNum = NATIONAL_DEX_IMPMON,
        .categoryName = _("Light"),
        .height = 14,
        .weight = 615,
        .description = COMPOUND_STRING(
            "Massive amounts of energy intensely\n"
            "stimulated Impmon's cells, apparently\n"
            "awakening its long-sleeping dragon's\n"
            "blood."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ImpmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ImpmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_ImpmonMega,
        .shinyPalette = gMonShinyPalette_ImpmonMega,
        .iconSprite = gMonIcon_ImpmonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Impmon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_ImpmonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ImpmonMega,
            gShinyOverworldPalette_ImpmonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sImpmonLevelUpLearnset,
        .teachableLearnset = sImpmonTeachableLearnset,
        .formSpeciesIdTable = sImpmonFormSpeciesIdTable,
        .formChangeTable = sImpmonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HYOKOMON

#if P_FAMILY_JAZAMON
#if P_GEN_3_CROSS_EVOS
    [SPECIES_BIOSTEGMON] =
    {
        .baseHP        = 82,
        .baseAttack    = 97,
        .baseDefense   = 80,
        .baseSpeed     = 61,
        .baseSpAttack  = 60,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE }, // BIO-HYBRID DNA
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Biostegmon"),
        .cryId = CRY_BIOSTEGMON,
        .natDexNum = NATIONAL_DEX_BIOSTEGMON,
        .categoryName = _("Bio-Hybrid"),
        .height = 57,
        .weight = 1964,
        .description = COMPOUND_STRING(
            "Thought to just be a rare version of\n"
            "Stegomon, BioStegomon is actually an \n"
            "illegal experiment caused by the forceful\n"
            "merging of Human data and Stegomon Data."),
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Biostegmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Biostegmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Biostegmon,
        .shinyPalette = gMonShinyPalette_Biostegmon,
        .iconSprite = gMonIcon_Biostegmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Biostegmon)
        OVERWORLD(
            sPicTable_Biostegmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Biostegmon,
            gShinyOverworldPalette_Biostegmon
        )
        .levelUpLearnset = sBiostegmonLevelUpLearnset,
        .teachableLearnset = sBiostegmonTeachableLearnset,
        .eggMoveLearnset = sBiostegmonEggMoveLearnset,
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_JAZAMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 54,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_FLYING, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_HUGE_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Jazamon"),
        .cryId = CRY_JAZAMON,
        .natDexNum = NATIONAL_DEX_JAZAMON,
        .categoryName = _("Steel Chick"),
        .height = 8,
        .weight = 371,
        .description = COMPOUND_STRING(
            "It is capable of gliding from high places\n"
            "however it can not fly as it is too lift\n"
            "itself. It is wary of any objects that\n"
            "move in its peripheral vision."),
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jazamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Jazamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Jazamon,
        .shinyPalette = gMonShinyPalette_Jazamon,
        .iconSprite = gMonIcon_Jazamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Jazamon)
        OVERWORLD(
            sPicTable_Jazamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Jazamon,
            gShinyOverworldPalette_Jazamon
        )
        .levelUpLearnset = sJazamonLevelUpLearnset,
        .teachableLearnset = sJazamonTeachableLearnset,
        .eggMoveLearnset = sJazamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_BIRDRAMON}),
    },

    [SPECIES_JELLYMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 52,
        .baseDefense   = 50,
        .baseSpeed     = 62,
        .baseSpAttack  = 60,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Jellymon"),
        .cryId = CRY_JELLYMON,
        .natDexNum = NATIONAL_DEX_JELLYMON,
        .categoryName = _("Jellyfish"),
        .height = 7,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Rarely do Tamers actually pick Jellymon\n"
            "as their partner but instead Jellymon\n"
            "will just follow them until they relent.\n"
            "It can also retract its body into its head."),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jellymon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Jellymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jellymon,
        .shinyPalette = gMonShinyPalette_Jellymon,
        .iconSprite = gMonIcon_Jellymon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 8, SHADOW_SIZE_S)
        FOOTPRINT(Jellymon)
        OVERWORLD(
            sPicTable_Jellymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Jellymon,
            gShinyOverworldPalette_Jellymon
        )
        .levelUpLearnset = sJellymonLevelUpLearnset,
        .teachableLearnset = sJellymonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_GESOMON}),
    },
#endif //P_FAMILY_JAZAMON

#if P_FAMILY_JUNKMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 68,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bonsly"),
        .cryId = CRY_BONSLY,
        .natDexNum = NATIONAL_DEX_BONSLY,
        .categoryName = _("Bonsai"),
        .height = 5,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Bonsly prefers an arid atmosphere.\n"
            "In order to adjust the level of fluids\n"
            "in its body, it exudes water from its eyes.\n"
            "This makes it appear to be crying."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bonsly,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Bonsly,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Bonsly,
        .shinyPalette = gMonShinyPalette_Bonsly,
        .iconSprite = gMonIcon_Bonsly,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Bonsly)
        OVERWORLD(
            sPicTable_Bonsly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bonsly,
            gShinyOverworldPalette_Bonsly
        )
        .levelUpLearnset = sBonslyLevelUpLearnset,
        .teachableLearnset = sBonslyTeachableLearnset,
        .eggMoveLearnset = sBonslyEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_JUNKMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 62,
        .baseDefense   = 51,
        .baseSpeed     = 50,
        .baseSpAttack  = 49,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STENCH, ABILITY_VITAL_SPIRIT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Junkmon"),
        .cryId = CRY_JUNKMON,
        .natDexNum = NATIONAL_DEX_JUNKMON,
        .categoryName = _("Junk"),
        .height = 10,
        .weight = 147,
        .description = COMPOUND_STRING(
            "Junkmon has a habit of picking up random\n"
            "junk and just tossing it onto its back.\n"
            "This works in its favour as it can use\n"
            "that same junk as ammo for its cannon."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Junkmon,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Junkmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Junkmon,
        .shinyPalette = gMonShinyPalette_Junkmon,
        .iconSprite = gMonIcon_Junkmon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_JunkmonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_JunkmonF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Junkmon)
        OVERWORLD(
            sPicTable_Junkmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Junkmon,
            gShinyOverworldPalette_Junkmon
        )
        OVERWORLD_FEMALE(
            sPicTable_JunkmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sJunkmonLevelUpLearnset,
        .teachableLearnset = sJunkmonTeachableLearnset,
        .eggMoveLearnset = sJunkmonEggMoveLearnset,
    },
#endif //P_FAMILY_JUNKMON

#if P_FAMILY_KERAMON
    [SPECIES_KERAMON] =
    {
        .baseHP        = 43,
        .baseAttack    = 67,
        .baseDefense   = 52,
        .baseSpeed     = 55,
        .baseSpAttack  = 56,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Keramon"),
        .cryId = CRY_KERAMON,
        .natDexNum = NATIONAL_DEX_KERAMON,
        .categoryName = _("Virus"),
        .height = 25,
        .weight = 296,
        .description = COMPOUND_STRING(
            "The insane mouth that Keramon has grown\n"
            "can eat upwards of more than 100 megabytes\n"
            "of data a second. Unlike most digimon,\n"
            "this data is destroyed instantly."),
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Keramon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .backPic = gMonBackPic_Keramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Keramon,
        .shinyPalette = gMonShinyPalette_Keramon,
        .iconSprite = gMonIcon_Keramon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Keramon)
        OVERWORLD(
            sPicTable_Keramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Keramon,
            gShinyOverworldPalette_Keramon
        )
        .levelUpLearnset = sKeramonLevelUpLearnset,
        .teachableLearnset = sKeramonTeachableLearnset,
        .eggMoveLearnset = sKeramonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_KERAMON_X},
                                {EVO_LEVEL, 40, SPECIES_CHRYSALMON}),
    },

    [SPECIES_KERAMON_X] =
    {
        .baseHP        = 45,
        .baseAttack    = 79,
        .baseDefense   = 52,
        .baseSpeed     = 54,
        .baseSpAttack  = 53,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_LEVITATE, ABILITY_HUGE_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Keramon"),
        .cryId = CRY_KERAMON_X,
        .natDexNum = NATIONAL_DEX_KERAMON_X,
        .categoryName = _("X Antibody"),
        .height = 28,
        .weight = 252,
        .description = COMPOUND_STRING(
            "A Keramon Xs face divides in such a way\n"
            "that it can devour even more data. With\n"
            "the right timing, it can even devour a\n"
            "Mega Digimons data without hassle."),
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Keramon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 15,
        .backPic = gMonBackPic_Keramon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Keramon_x,
        .shinyPalette = gMonShinyPalette_Keramon_x,
        .iconSprite = gMonIcon_Keramon_x,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Keramon_x)
        OVERWORLD(
            sPicTable_Keramon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Keramon_x,
            gShinyOverworldPalette_Keramon_x
        )
        .levelUpLearnset = sKeramon_xLevelUpLearnset,
        .teachableLearnset = sKeramon_xTeachableLearnset,
    },

    [SPECIES_KODOKGUMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 51,
        .baseDefense   = 47,
        .baseSpeed     = 59,
        .baseSpAttack  = 53,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
        .abilities = { ABILITY_SWARM, ABILITY_STICKY_HOLD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kodokgumon"),
        .cryId = CRY_KODOKGUMON,
        .natDexNum = NATIONAL_DEX_KODOKGUMON,
        .categoryName = _("Wolf Spider"),
        .height = 7,
        .weight = 157,
        .description = COMPOUND_STRING(
            "Often found with Dokugumon, KoDokugomon\n"
            "is rarely a threat on its own however\n"
            "in a grown they can quickly swarm and\n"
            "overwhelm weaker Digimon with ease."),
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kodokgumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Kodokgumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kodokgumon,
        .shinyPalette = gMonShinyPalette_Kodokgumon,
        .iconSprite = gMonIcon_Kodokgumon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Kodokgumon)
        OVERWORLD(
            sPicTable_Kodokgumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kodokgumon,
            gShinyOverworldPalette_Kodokgumon
        )
        .levelUpLearnset = sKodokgumonLevelUpLearnset,
        .teachableLearnset = sKodokgumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CHAMBLEMON}),
    },
#endif //P_FAMILY_KERAMON

#if P_FAMILY_KOKABUIMON
    [SPECIES_KOKABUIMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 64,
        .baseDefense   = 51,
        .baseSpeed     = 52,
        .baseSpAttack  = 50,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_BUG),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kokabuimon"),
        .cryId = CRY_KOKABUIMON,
        .natDexNum = NATIONAL_DEX_KOKABUIMON,
        .categoryName = _("Beetle"),
        .height = 21,
        .weight = 286,
        .description = COMPOUND_STRING(
            "Many Digimon fear KoKabuterimon as it is\n"
            "incredibly strong with it being known\n"
            "that it can lift Ultimate level Digimon\n"
            "however it is actually a gentle Digimon."),
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokabuimon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 64) : MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Kokabuimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Kokabuimon,
        .shinyPalette = gMonShinyPalette_Kokabuimon,
        .iconSprite = gMonIcon_Kokabuimon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KokabuimonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 64),
        .backPicFemale = gMonBackPic_KokabuimonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Kokabuimon)
        OVERWORLD(
            sPicTable_Kokabuimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kokabuimon,
            gShinyOverworldPalette_Kokabuimon
        )
        OVERWORLD_FEMALE(
            sPicTable_KokabuimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sKokabuimonLevelUpLearnset,
        .teachableLearnset = sKokabuimonTeachableLearnset,
        .eggMoveLearnset = sKokabuimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 52, SPECIES_DEPUTYMON},
                                {EVO_LEVEL, 27, SPECIES_SAWKUWAMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 169 : 186,
        .evYield_Speed = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_PICKUP, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ambipom"),
        .cryId = CRY_AMBIPOM,
        .natDexNum = NATIONAL_DEX_AMBIPOM,
        .categoryName = _("Long Tail"),
        .height = 12,
        .weight = 203,
        .description = COMPOUND_STRING(
            "They live on large trees. Split into two,\n"
            "the tails are so adept at handling and\n"
            "doing things, Ambipom rarely uses\n"
            "its hands now."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ambipom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Ambipom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Ambipom,
        .shinyPalette = gMonShinyPalette_Ambipom,
        .iconSprite = gMonIcon_Ambipom,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AmbipomF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_AmbipomF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Ambipom)
        OVERWORLD(
            sPicTable_Ambipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ambipom,
            gShinyOverworldPalette_Ambipom
        )
        OVERWORLD_FEMALE(
            sPicTable_AmbipomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sAmbipomLevelUpLearnset,
        .teachableLearnset = sAmbipomTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOKABUIMON

#if P_FAMILY_KOKUWAMON
    [SPECIES_KOKUWAMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 51,
        .baseSpAttack  = 59,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_STATIC, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kokuwamon"),
        .cryId = CRY_KOKUWAMON,
        .natDexNum = NATIONAL_DEX_KOKUWAMON,
        .categoryName = _("Steel Bug"),
        .height = 10,
        .weight = 642,
        .description = COMPOUND_STRING(
            "While they like to mind their own business\n"
            "most of the time, approaching a Kokuwamon\n"
            "should be done with caution as their head\n"
            "can discharge 100 megavolts when touched."),
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokuwamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kokuwamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Kokuwamon,
        .shinyPalette = gMonShinyPalette_Kokuwamon,
        .iconSprite = gMonIcon_Kokuwamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Kokuwamon)
        OVERWORLD(
            sPicTable_Kokuwamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Kokuwamon,
            gShinyOverworldPalette_Kokuwamon
        )
        .levelUpLearnset = sKokuwamonLevelUpLearnset,
        .teachableLearnset = sKokuwamonTeachableLearnset,
        .eggMoveLearnset = sKokuwamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_KOKUWAMON_X},
                                {EVO_LEVEL, 45, SPECIES_TRAILMON_BATTLE_ARMAMENT}),
    },

    [SPECIES_KOKUWAMON_X] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 58,
        .baseSpeed     = 57,
        .baseSpAttack  = 63,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_STATIC, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kokuwamon"),
        .cryId = CRY_KOKUWAMON_X,
        .natDexNum = NATIONAL_DEX_KOKUWAMON_X,
        .categoryName = _("X Antibody"),
        .height = 13,
        .weight = 679,
        .description = COMPOUND_STRING(
            "Kokuwamon X's increased charge capacity\n"
            "has now given it the ability to use\n"
            "greater electrical attacks. It also now\n"
            "has a new form letting it fly."),
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kokuwamon_x,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kokuwamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Kokuwamon_x,
        .shinyPalette = gMonShinyPalette_Kokuwamon_x,
        .iconSprite = gMonIcon_Kokuwamon_x,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Kokuwamon_x)
        OVERWORLD(
            sPicTable_Kokuwamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kokuwamon_x,
            gShinyOverworldPalette_Kokuwamon_x
        )
        .levelUpLearnset = sKokuwamon_xLevelUpLearnset,
        .teachableLearnset = sKokuwamon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_CLOCKMON_FUSION}),
    },
#endif //P_FAMILY_KOKUWAMON

#if P_FAMILY_KOTEMON
    [SPECIES_KOTEMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 57,
        .baseDefense   = 60,
        .baseSpeed     = 53,
        .baseSpAttack  = 49,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_BATTLE_ARMOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kotemon"),
        .cryId = CRY_KOTEMON,
        .natDexNum = NATIONAL_DEX_KOTEMON,
        .categoryName = _("Kendo"),
        .height = 9,
        .weight = 252,
        .description = COMPOUND_STRING(
            "A hardworking Digimon, Kotemon is almost\n"
            "always seen training in the art of Kendo.\n"
            "Its armour is an integral part of it\n"
            "that is never seen seperate from it."),
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kotemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backPic = gMonBackPic_Kotemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Kotemon,
        .shinyPalette = gMonShinyPalette_Kotemon,
        .iconSprite = gMonIcon_Kotemon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Kotemon)
        OVERWORLD(
            sPicTable_Kotemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kotemon,
            gShinyOverworldPalette_Kotemon
        )
        .levelUpLearnset = sKotemonLevelUpLearnset,
        .teachableLearnset = sKotemonTeachableLearnset,
        .eggMoveLearnset = sKotemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DINOHYUMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 76,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 198,
        .evYield_Attack = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Yanmega"),
        .cryId = CRY_YANMEGA,
        .natDexNum = NATIONAL_DEX_YANMEGA,
        .categoryName = _("Ogre Darner"),
        .height = 19,
        .weight = 515,
        .description = COMPOUND_STRING(
            "This six-legged Pokémon is easily capable\n"
            "of transporting an adult in flight. It is\n"
            "adept at biting apart foes while flying\n"
            "by at high speed."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Yanmega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Yanmega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Yanmega,
        .shinyPalette = gMonShinyPalette_Yanmega,
        .iconSprite = gMonIcon_Yanmega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Yanmega)
        OVERWORLD(
            sPicTable_Yanmega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yanmega,
            gShinyOverworldPalette_Yanmega
        )
        .levelUpLearnset = sYanmegaLevelUpLearnset,
        .teachableLearnset = sYanmegaTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_KOTEMON

#if P_FAMILY_KUDAMON
    [SPECIES_KUDAMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 48,
        .baseDefense   = 57,
        .baseSpeed     = 54,
        .baseSpAttack  = 50,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_GHOST),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kudamon"),
        .cryId = CRY_KUDAMON,
        .natDexNum = NATIONAL_DEX_KUDAMON,
        .categoryName = _("Kudagitsune"),
        .height = 5,
        .weight = 56,
        .description = COMPOUND_STRING(
            "Day after day, Kudamon accumulates holy\n"
            "power in its earring. This power makes\n"
            "it a frequent target however it can\n"
            "withdraw into its cartridge for safety."),
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kudamon,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kudamon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kudamon,
        .shinyPalette = gMonShinyPalette_Kudamon,
        .iconSprite = gMonIcon_Kudamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KudamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 32),
        .backPicFemale = gMonBackPic_KudamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Kudamon)
        OVERWORLD(
            sPicTable_Kudamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kudamon,
            gShinyOverworldPalette_Kudamon
        )
        OVERWORLD_FEMALE(
            sPicTable_KudamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sKudamonLevelUpLearnset,
        .teachableLearnset = sKudamonTeachableLearnset,
        .eggMoveLearnset = sKudamonEggMoveLearnset,
        .formSpeciesIdTable = sKudamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_FLARIZAMON}),
    },

    [SPECIES_KUDAMON_06] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 57,
        .baseSpAttack  = 50,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_GHOST),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kudamon"),
        .cryId = CRY_KUDAMON_06,
        .natDexNum = NATIONAL_DEX_KUDAMON_06,
        .categoryName = _("Kudagitsune"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "Taking a more physical form, this Kudamon\n"
            "is better equipped for a battle however\n"
            "it lacks some defense now. It still has\n"
            "an incredible intellect as well."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kudamon_06,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Kudamon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Kudamon_06,
        .shinyPalette = gMonShinyPalette_Kudamon_06,
        .iconSprite = gMonIcon_Kudamon_06,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Kudamon_06F,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_Kudamon_06F,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_M)
        FOOTPRINT(Kudamon_06)
        OVERWORLD(
            sPicTable_Kudamon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kudamon_06,
            gShinyOverworldPalette_Kudamon_06
        )
        OVERWORLD_FEMALE(
            sPicTable_Kudamon_06F,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sKudamon_06LevelUpLearnset,
        .teachableLearnset = sKudamon_06TeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ANGEMON}),
    },

#if P_PALDEAN_FORMS
    [SPECIES_KUDAMON_PALDEA] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 52,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kudamon"),
        .cryId = CRY_KUDAMON,
        .natDexNum = NATIONAL_DEX_KUDAMON,
        .categoryName = _("Poison Fish"),
        .height = 4,
        .weight = 110,
        .description = COMPOUND_STRING(
            "After losing a territorial struggle,\n"
            "Kudamon began living on land.\n"
            "The Pokémon changed over time, developing\n"
            "a poisonous film to protect its body."),
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KudamonPaldea,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KudamonPaldea,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_KudamonPaldea,
        .shinyPalette = gMonShinyPalette_KudamonPaldea,
        .iconSprite = gMonIcon_KudamonPaldea,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Kudamon)
        OVERWORLD(
            sPicTable_KudamonPaldea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_KudamonPaldea,
            gShinyOverworldPalette_KudamonPaldea
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sKudamonPaldeaLevelUpLearnset,
        .teachableLearnset = sKudamonPaldeaTeachableLearnset,
        .eggMoveLearnset = sKudamonPaldeaEggMoveLearnset,
        .formSpeciesIdTable = sKudamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CLODSIRE}),
    },

    [SPECIES_CLODSIRE] =
    {
        .baseHP        = 130,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Clodsire"),
        .cryId = CRY_CLODSIRE,
        .natDexNum = NATIONAL_DEX_CLODSIRE,
        .categoryName = _("Spiny Fish"),
        .height = 18,
        .weight = 2230,
        .description = COMPOUND_STRING(
            "When attacked, this Pokémon will\n"
            "retaliate by sticking thick spines out\n"
            "from its body. It's a risky move\n"
            "that puts everything on the line."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clodsire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clodsire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Clodsire,
        .shinyPalette = gMonShinyPalette_Clodsire,
        .iconSprite = gMonIcon_Clodsire,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_L)
        FOOTPRINT(Clodsire)
        OVERWORLD(
            sPicTable_Clodsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clodsire,
            gShinyOverworldPalette_Clodsire
        )
        .levelUpLearnset = sClodsireLevelUpLearnset,
        .teachableLearnset = sClodsireTeachableLearnset,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_KUDAMON

#if P_FAMILY_LALAMON
    [SPECIES_LALAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 50,
        .baseSpeed     = 51,
        .baseSpAttack  = 50,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 30,
        .expYield = 107,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lalamon"),
        .cryId = CRY_LALAMON,
        .natDexNum = NATIONAL_DEX_LALAMON,
        .categoryName = _("Flower Bud"),
        .height = 8,
        .weight = 151,
        .description = COMPOUND_STRING(
            "Although expressionless, Lalamons face is\n"
            "considered very charming. The leaf on its\n"
            "head spins, letting Lalamon fly however\n"
            "its flying is very unsteady and slow."),
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Lalamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 12,
        .backPic = gMonBackPic_Lalamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Lalamon,
        .shinyPalette = gMonShinyPalette_Lalamon,
        .iconSprite = gMonIcon_Lalamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LalamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .backPicFemale = gMonBackPic_LalamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Lalamon)
        OVERWORLD(
            sPicTable_Lalamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lalamon,
            gShinyOverworldPalette_Lalamon
        )
        OVERWORLD_FEMALE(
            sPicTable_LalamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sLalamonLevelUpLearnset,
        .teachableLearnset = sLalamonTeachableLearnset,
        .eggMoveLearnset = sLalamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 29, SPECIES_BAKEMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 71,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 187,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Honchkrow"),
        .cryId = CRY_HONCHKROW,
        .natDexNum = NATIONAL_DEX_HONCHKROW,
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .description = COMPOUND_STRING(
            "Becoming active at night, it is known\n"
            "to swarm with numerous Lalamon in tow.\n"
            "It is said that it never forgives the\n"
            "mistakes of its cronies."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honchkrow,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 21),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Honchkrow,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Honchkrow,
        .shinyPalette = gMonShinyPalette_Honchkrow,
        .iconSprite = gMonIcon_Honchkrow,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_M)
        FOOTPRINT(Honchkrow)
        OVERWORLD(
            sPicTable_Honchkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Honchkrow,
            gShinyOverworldPalette_Honchkrow
        )
        .levelUpLearnset = sHonchkrowLevelUpLearnset,
        .teachableLearnset = sHonchkrowTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LALAMON

#if P_FAMILY_LOOGAMON
    [SPECIES_LOOGAMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 59,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 52,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Loogamon"),
        .cryId = CRY_LOOGAMON,
        .natDexNum = NATIONAL_DEX_LOOGAMON,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 271,
        .description = COMPOUND_STRING(
            "Many Tamers seek out Loogamon as it is\n"
            "both a strong and loyal Digimon. It has an\n"
            "incredible capacity for rage making many\n"
            "tamers regret their choices."),
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Loogamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .backPic = gMonBackPic_Loogamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Loogamon,
        .shinyPalette = gMonShinyPalette_Loogamon,
        .iconSprite = gMonIcon_Loogamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Loogamon)
        OVERWORLD(
            sPicTable_Loogamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Loogamon,
            gShinyOverworldPalette_Loogamon
        )
        .levelUpLearnset = sLoogamonLevelUpLearnset,
        .teachableLearnset = sLoogamonTeachableLearnset,
        .eggMoveLearnset = sLoogamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_FILMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 187,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mismagius"),
        .cryId = CRY_MISMAGIUS,
        .natDexNum = NATIONAL_DEX_MISMAGIUS,
        .categoryName = _("Magical"),
        .height = 9,
        .weight = 44,
        .description = COMPOUND_STRING(
            "Its cries sound like incantations.\n"
            "Those hearing it are tormented by\n"
            "headaches and hallucinations.\n"
            "It appears where you least expect it."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mismagius,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Mismagius,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Mismagius,
        .shinyPalette = gMonShinyPalette_Mismagius,
        .iconSprite = gMonIcon_Mismagius,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Mismagius)
        OVERWORLD(
            sPicTable_Mismagius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mismagius,
            gShinyOverworldPalette_Mismagius
        )
        .levelUpLearnset = sMismagiusLevelUpLearnset,
        .teachableLearnset = sMismagiusTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LOOGAMON

    [SPECIES_LOPMON] =  \
    {                                                                                                   
        .baseHP        = 48,                                                                            
        .baseAttack    = 72,                                                                            
        .baseDefense   = 48,                                                                            
        .baseSpeed     = 48,                                                                            
        .baseSpAttack  = 72,                                                                            
        .baseSpDefense = 48,                                                                            
        .types = MON_TYPES(TYPE_PSYCHIC),                                                               
        .catchRate = 225,                                                                               
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 118 : 61,                                         
        .evYield_Attack = 1,                                                                            
        .evYield_SpAttack = 1,                                                                          
        .genderRatio = MON_GENDERLESS,                                                                  
        .eggCycles = 40,                                                                               
        .friendship = STANDARD_FRIENDSHIP,                                                              
        .growthRate = GROWTH_MEDIUM_FAST,                                                              
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                                      
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },                                  
        .bodyColor = BODY_COLOR_BLACK,                                                                  
        .noFlip = FALSE,                                                                              
        .speciesName = _("Lopmon"),                                                                     
        .cryId = CRY_LOPMON,                                                                             
        .natDexNum = NATIONAL_DEX_LOPMON,                                                                
        .categoryName = _("Symbol"),                                                                    
        .height = 5,                                                                                    
        .weight = 50,                                                                                   
        .description = gLopmonPokedexText,                                                               
        .pokemonScale = 411,                                                                            
        .pokemonOffset = 2,                                                                             
        .trainerScale = 256,                                                                            
        .trainerOffset = 0,                                                                             
        .frontPic = gMonFrontPic_LopmonA,                                                        
        .frontPicSize = MON_COORDS_SIZE(24, 40),                                       
        .frontPicYOffset = 16,                                                                          
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,                                                                
        .frontAnimId = ANIM_ZIGZAG_FAST,                                                                
        .enemyMonElevation = 8,                                                                         
        .backPic = gMonBackPic_LopmonA,                                                          
        .backPicSize = MON_COORDS_SIZE(24, 48),                                          
        .backPicYOffset = 8,                                                                  
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                                                   
        .palette = gMonPalette_Lopmon,                                                                   
        .shinyPalette = gMonShinyPalette_Lopmon,                                                         
        .iconSprite = gMonIcon_LopmonA,                                                          
        .iconPalIndex = 0,                                                                              
        SHADOW(0, 3, SHADOW_SIZE_S)                                                                     
        FOOTPRINT(Lopmon)                                                                                                                                                                      \
        .levelUpLearnset = sLopmonLevelUpLearnset,                                                       \
        .teachableLearnset = sLopmonTeachableLearnset,                                                   \
        .tmIlliterate = TRUE,                                                                           \
        .formSpeciesIdTable = sLopmonFormSpeciesIdTable,                                                 \
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_LOPMON_X},
                                {EVO_LEVEL, 39, SPECIES_GARGOYLMON}),  
    },

#if P_FAMILY_LOPMONX
#if P_GEN_3_CROSS_EVOS
    [SPECIES_EXVEEMON] =
    {
        .baseHP        = 76,
        .baseAttack    = 88,
        .baseDefense   = 70,
        .baseSpeed     = 71,
        .baseSpAttack  = 76,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 115,
        .expYield = 150,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_VICTORY_STAR, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Exveemon"),
        .cryId = CRY_EXVEEMON,
        .natDexNum = NATIONAL_DEX_EXVEEMON,
        .categoryName = _("Dragon Man"),
        .height = 45,
        .weight = 1432,
        .description = COMPOUND_STRING(
            "ExVeemon is the purebred form of Veedramon\n"
            "making it the true form in some peoples eyes.\n"
            "Its legs and arms are incredibly developed\n"
            "letting it destory foes with ease."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Exveemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Exveemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Exveemon,
        .shinyPalette = gMonShinyPalette_Exveemon,
        .iconSprite = gMonIcon_Exveemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Exveemon)
        OVERWORLD(
            sPicTable_Exveemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Exveemon,
            gShinyOverworldPalette_Exveemon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sExveemonLevelUpLearnset,
        .teachableLearnset = sExveemonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_EXVEEMON_VIRUS}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_LOPMONX] =
    {
        .baseHP        = 53,
        .baseAttack    = 57,
        .baseDefense   = 53,
        .baseSpeed     = 59,
        .baseSpAttack  = 53,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopmonx"),
        .cryId = CRY_LOPMONX,
        .natDexNum = NATIONAL_DEX_LOPMONX,
        .categoryName = _("X Antibody"),
        .height = 7,
        .weight = 198,
        .description = COMPOUND_STRING(
            "Lopmon X is much lighter than normal,\n"
            "letting it drift on the wind. It also has\n"
            "a psychic connection with its twin, \n"
            "Terriermon X.."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lopmonx,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Lopmonx,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Lopmonx,
        .shinyPalette = gMonShinyPalette_Lopmonx,
        .iconSprite = gMonIcon_Lopmonx,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LopmonxF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_LopmonxF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_LopmonxF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Lopmonx)
        OVERWORLD(
            sPicTable_Lopmonx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lopmonx,
            gShinyOverworldPalette_Lopmonx
        )
        OVERWORLD_FEMALE(
            sPicTable_LopmonxF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sLopmon_xLevelUpLearnset,
        .teachableLearnset = sLopmonxTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_GARGOMON}),
    },
#endif //P_FAMILY_LOPMONX

#if P_FAMILY_LUCEMON
    [SPECIES_LUCEMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 58,
        .baseDefense   = 54,
        .baseSpeed     = 50,
        .baseSpAttack  = 59,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_DARK),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_PURE_POWER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Lucemon"),
        .cryId = CRY_LUCEMON,
        .natDexNum = NATIONAL_DEX_LUCEMON,
        .categoryName = _("Angel"),
        .height = 15,
        .weight = 315,
        .description = COMPOUND_STRING(
            "Although it has the look of an innocent\n"
            "child, Lucemon holds an incredible\n"
            "darkness making it one of the scariest\n"
            "and strongest Digimon in the Digital World."),
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lucemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lucemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Lucemon,
        .shinyPalette = gMonShinyPalette_Lucemon,
        .iconSprite = gMonIcon_Lucemon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LucemonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_LucemonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Lucemon)
        OVERWORLD(
            sPicTable_Lucemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lucemon,
            gShinyOverworldPalette_Lucemon
        )
        OVERWORLD_FEMALE(
            sPicTable_LucemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sLucemonLevelUpLearnset,
        .teachableLearnset = sLucemonTeachableLearnset,
        .eggMoveLearnset = sLucemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DARCMON}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF] =
    {
        .baseHP        = 120,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 260,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUD_CHEW, ABILITY_ARMOR_TAIL, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Farigiraf"),
        .cryId = CRY_FARIGIRAF,
        .natDexNum = NATIONAL_DEX_FARIGIRAF,
        .categoryName = _("Long Neck"),
        .height = 32,
        .weight = 1600,
        .description = COMPOUND_STRING(
            "Now that the brain waves from the\n"
            "head and tail are synced up, the\n"
            "psychic power of this Pokémon is 10\n"
            "times stronger than Lucemon's."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Farigiraf,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Farigiraf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Farigiraf,
        .shinyPalette = gMonShinyPalette_Farigiraf,
        .iconSprite = gMonIcon_Farigiraf,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(11, 13, SHADOW_SIZE_L)
        FOOTPRINT(Farigiraf)
        OVERWORLD(
            sPicTable_Farigiraf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Farigiraf,
            gShinyOverworldPalette_Farigiraf
        )
        .levelUpLearnset = sFarigirafLevelUpLearnset,
        .teachableLearnset = sFarigirafTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUCEMON

#if P_FAMILY_LUDOMON
    [SPECIES_LUDOMON] =
    {
        .baseHP        = 57,
        .baseAttack    = 52,
        .baseDefense   = 73,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_STURDY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ludomon"),
        .cryId = CRY_LUDOMON,
        .natDexNum = NATIONAL_DEX_LUDOMON,
        .categoryName = _("Armour"),
        .height = 9,
        .weight = 711,
        .description = COMPOUND_STRING(
            "Ludomon is one of few Digimon capable of\n"
            "transforming itself into weapons. It is\n"
            "the only transforming weapon Digimon to be\n"
            "able to become a shield."),
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ludomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Ludomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Ludomon,
        .shinyPalette = gMonShinyPalette_Ludomon,
        .iconSprite = gMonIcon_Ludomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Ludomon)
        OVERWORLD(
            sPicTable_Ludomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Ludomon,
            gShinyOverworldPalette_Ludomon
        )
        .levelUpLearnset = sLudomonLevelUpLearnset,
        .teachableLearnset = sLudomonTeachableLearnset,
        .eggMoveLearnset = sLudomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_BLKGATOMON_UVER}),
    },

    [SPECIES_LUNAMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 50,
        .baseDefense   = 46,
        .baseSpeed     = 47,
        .baseSpAttack  = 49,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_AIR_LOCK, ABILITY_DRIZZLE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lunamon"),
        .cryId = CRY_LUNAMON,
        .natDexNum = NATIONAL_DEX_LUNAMON,
        .categoryName = _("Moon"),
        .height = 9,
        .weight = 202,
        .description = COMPOUND_STRING(
            "The best time to interact with a Lunamon\n"
            "is when its gazing at the moon. Its a timid\n"
            "Digimon but will develop attachments easily\n"
            "when it shares common interests."),
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lunamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Lunamon,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lunamon,
        .shinyPalette = gMonShinyPalette_Lunamon,
        .iconSprite = gMonIcon_Lunamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_L)
        FOOTPRINT(Lunamon)
        OVERWORLD(
            sPicTable_Lunamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Lunamon,
            gShinyOverworldPalette_Lunamon
        )
        .levelUpLearnset = sLunamonLevelUpLearnset,
        .teachableLearnset = sLunamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_COREDRAMON_BLUE}),
    },
#endif //P_FAMILY_LUDOMON

#if P_FAMILY_LUXMON
    [SPECIES_LUXMON] =
    {
        .baseHP        = 47,
        .baseAttack    = 43,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 51,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_LIGHT),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_EPIPHANY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Luxmon"),
        .cryId = CRY_LUXMON,
        .natDexNum = NATIONAL_DEX_LUXMON,
        .categoryName = _("Angel"),
        .height = 9,
        .weight = 144,
        .description = COMPOUND_STRING(
            "Luxmon is a pretty weak Digimon as it\n"
            "lacks experience and skill however it is\n"
            "said that it has a sacred power that will\n"
            "let it digivolve into a mighty Digimon."),
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Luxmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Luxmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Luxmon,
        .shinyPalette = gMonShinyPalette_Luxmon,
        .iconSprite = gMonIcon_Luxmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Luxmon)
        OVERWORLD(
            sPicTable_Luxmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Luxmon,
            gShinyOverworldPalette_Luxmon
        )
        .levelUpLearnset = sLuxmonLevelUpLearnset,
        .teachableLearnset = sLuxmonTeachableLearnset,
        .eggMoveLearnset = sLuxmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_BIRDRAMON}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dudunsparce"),
        .cryId = CRY_DUDUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUDUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 36,
        .weight = 392,
        .description = COMPOUND_STRING(
            "This Pokémon uses its hard tail to\n"
            "make its nest by boring holes into\n"
            "bedrock deep underground. The nest\n"
            "can reach lengths of over six miles."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DudunsparceTwoSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceTwoSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceTwoSegment,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Dudunsparce,
            gShinyOverworldPalette_Dudunsparce
        )
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dudunsparce"),
        .cryId = CRY_DUDUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUDUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 45,
        .weight = 474,
        .description = COMPOUND_STRING(
            "A recent study uncovered that the\n"
            "number of segments a Dudunsparce's\n"
            "body has is determined by the\n"
            "Pokémon's genes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DudunsparceThreeSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceThreeSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceThreeSegment,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_DudunsparceThreeSegment,
            gShinyOverworldPalette_DudunsparceThreeSegment
        )
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_LUXMON

#if P_FAMILY_METABEE
    [SPECIES_METABEE] = // Completely redo as a Champion
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 108,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_IMMUNITY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Metabee"),
        .cryId = CRY_METABEE,
        .natDexNum = NATIONAL_DEX_METABEE,
        .categoryName = _("Fly Scorpion"),
        .height = 11,
        .weight = 648,
        .description = COMPOUND_STRING(
            "It glides without making a single sound.\n"
            "It grasps the face of its foe using its\n"
            "hind and large front claws, then stabs\n"
            "with its poison barb."),
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metabee,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 17),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backPic = gMonBackPic_Metabee,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Metabee,
        .shinyPalette = gMonShinyPalette_Metabee,
        .iconSprite = gMonIcon_Metabee,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MetabeeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_MetabeeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Metabee)
        OVERWORLD(
            sPicTable_Metabee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Metabee,
            gShinyOverworldPalette_Metabee
        )
        OVERWORLD_FEMALE(
            sPicTable_MetabeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
        .levelUpLearnset = sMetabeeLevelUpLearnset,
        .teachableLearnset = sMetabeeTeachableLearnset,
        .eggMoveLearnset = sMetabeeEggMoveLearnset,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 192,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_POISON_HEAL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gliscor"),
        .cryId = CRY_GLISCOR,
        .natDexNum = NATIONAL_DEX_GLISCOR,
        .categoryName = _("Fang Scorp"),
        .height = 20,
        .weight = 425,
        .description = COMPOUND_STRING(
            "Gliscor observes prey while hanging\n"
            "upside down from branches. Its flight is\n"
            "soundless. When the chance presents\n"
            "itself, it swoops!"),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Gliscor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Gliscor,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gliscor,
        .shinyPalette = gMonShinyPalette_Gliscor,
        .iconSprite = gMonIcon_Gliscor,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gliscor)
        OVERWORLD(
            sPicTable_Gliscor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gliscor,
            gShinyOverworldPalette_Gliscor
        )
        .levelUpLearnset = sGliscorLevelUpLearnset,
        .teachableLearnset = sGliscorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_METABEE

#if P_FAMILY_MODBETAMON
    [SPECIES_MODBETAMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 51,
        .baseDefense   = 52,
        .baseSpeed     = 51,
        .baseSpAttack  = 60,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Modbetamon"),
        .cryId = CRY_MODBETAMON,
        .natDexNum = NATIONAL_DEX_MODBETAMON,
        .categoryName = _("Amphibian"),
        .height = 7,
        .weight = 260,
        .description = COMPOUND_STRING(
            "Although almost identical to normal\n"
            "Betamon, ModokiBetamon is actually much more\n"
            "peaceful. When it fights though, it will wait\n"
            "in cover to ambush whoever its fighting."),
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Modbetamon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Modbetamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Modbetamon,
        .shinyPalette = gMonShinyPalette_Modbetamon,
        .iconSprite = gMonIcon_Modbetamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Modbetamon)
        OVERWORLD(
            sPicTable_Modbetamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Modbetamon,
            gShinyOverworldPalette_Modbetamon
        )
        .levelUpLearnset = sModbetamonLevelUpLearnset,
        .teachableLearnset = sModbetamonTeachableLearnset,
        .eggMoveLearnset = sModbetamonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_GEKOMON}),
    },

    [SPECIES_MONITAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 50,
        .baseDefense   = 49,
        .baseSpeed     = 55,
        .baseSpAttack  = 51,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DARK),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_SOUNDPROOF, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Monitamon"),
        .cryId = CRY_MONITAMON,
        .natDexNum = NATIONAL_DEX_MONITAMON,
        .categoryName = _("Monitor"),
        .height = 8,
        .weight = 421,
        .description = COMPOUND_STRING(
            "Monitamon have an interesting hobby of\n"
            "Digimon-Watching. It insists that this is for\n"
            "its 'ninja activities' however it is more\n"
            "accurate to say it is just stalking."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monitamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Monitamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Monitamon,
        .shinyPalette = gMonShinyPalette_Monitamon,
        .iconSprite = gMonIcon_Monitamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Monitamon)
        OVERWORLD(
            sPicTable_Monitamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Monitamon,
            gShinyOverworldPalette_Monitamon
        )
        .levelUpLearnset = sMonitamonLevelUpLearnset,
        .teachableLearnset = sMonitamonTeachableLearnset,
    },
#endif //P_FAMILY_MODBETAMON

#if P_FAMILY_MONMON

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define MONMON_EXP_YIELD 88
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define MONMON_EXP_YIELD 86
#else
    #define MONMON_EXP_YIELD 100
#endif

    [SPECIES_MONMON] =
    {
        .baseHP        = 54,
        .baseAttack    = 58,
        .baseDefense   = 53,
        .baseSpeed     = 62,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_LIMBER, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Monmon"),
        .cryId = CRY_MONMON,
        .natDexNum = NATIONAL_DEX_MONMON,
        .categoryName = _("Monkey"),
        .height = 12,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Monmon is a very careless Digimon, with\n"
            "it often falling from treetops. Despite\n"
            "the frequent mistakes, it is a very \n"
            "confident Digimon that can move with ease."),
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Monmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 39,
        .backPic = gMonBackPic_Monmon,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Monmon,
        .shinyPalette = gMonShinyPalette_Monmon,
        .iconSprite = gMonIcon_Monmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Monmon)
        OVERWORLD(
            sPicTable_Monmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Monmon,
            gShinyOverworldPalette_Monmon
        )
        .levelUpLearnset = sMonmonLevelUpLearnset,
        .teachableLearnset = sMonmonTeachableLearnset,
        .eggMoveLearnset = sMonmonEggMoveLearnset,
        .formSpeciesIdTable = sMonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DEPTHMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_MONMON_HISUI] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = MONMON_EXP_YIELD,
        .evYield_Attack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Monmon"),
        .cryId = CRY_MONMON,
        .natDexNum = NATIONAL_DEX_MONMON,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A form of Monmon from the distant past.\n"
            "Fishers detest this troublesome Pokémon\n"
            "because it sprays poison from its spines,\n"
            "getting it everywhere."),
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MonmonHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_MonmonHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MonmonHisui,
        .shinyPalette = gMonShinyPalette_MonmonHisui,
        .iconSprite = gMonIcon_MonmonHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(Monmon)
        OVERWORLD(
            sPicTable_MonmonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MonmonHisui,
            gShinyOverworldPalette_MonmonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sMonmonHisuiLevelUpLearnset,
        .teachableLearnset = sMonmonHisuiTeachableLearnset,
        .formSpeciesIdTable = sMonmonFormSpeciesIdTable,
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Overqwil"),
        .cryId = CRY_OVERQWIL,
        .natDexNum = NATIONAL_DEX_OVERQWIL,
        .categoryName = _("Pin Cluster"),
        .height = 25,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Its lancelike spikes and savage\n"
            "temperament have earned it the\n"
            "nickname “Sea Fiend”.\n"
            "It slurps up poison to nourish itself."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Overqwil,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Overqwil,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Overqwil,
        .shinyPalette = gMonShinyPalette_Overqwil,
        .iconSprite = gMonIcon_Overqwil,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Overqwil)
        OVERWORLD(
            sPicTable_Overqwil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Overqwil,
            gShinyOverworldPalette_Overqwil
        )
        .levelUpLearnset = sOverqwilLevelUpLearnset,
        .teachableLearnset = sOverqwilTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MONMON

#if P_FAMILY_MORPHOMON
    [SPECIES_MORPHOMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 44,
        .baseDefense   = 45,
        .baseSpeed     = 52,
        .baseSpAttack  = 47,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_BUG, TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Morphomon"),
        .cryId = CRY_MORPHOMON,
        .natDexNum = NATIONAL_DEX_MORPHOMON,
        .categoryName = _("Butterfly"),
        .height = 7,
        .weight = 185,
        .description = COMPOUND_STRING(
            "Morphomon can often be found enjoying itself\n"
            "around nature. When it touches someone, it\n"
            "can determine if they are safe or not. If\n"
            "someone is safe, they will follow them."),
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Morphomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Morphomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Morphomon,
        .shinyPalette = gMonShinyPalette_Morphomon,
        .iconSprite = gMonIcon_Morphomon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Morphomon)
        OVERWORLD(
            sPicTable_Morphomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Morphomon,
            gShinyOverworldPalette_Morphomon
        )
        .levelUpLearnset = sMorphomonLevelUpLearnset,
        .teachableLearnset = sMorphomonTeachableLearnset,
        .eggMoveLearnset = sMorphomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_EOSMON_CHAMPION}),
    },
#endif //P_FAMILY_MORPHOMON

#if P_FAMILY_MUCHOMON
    [SPECIES_MUCHOMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 56,
        .baseDefense   = 54,
        .baseSpeed     = 60,
        .baseSpAttack  = 56,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Muchomon"),
        .cryId = CRY_MUCHOMON,
        .natDexNum = NATIONAL_DEX_MUCHOMON,
        .categoryName = _("Exotic Bird"),
        .height = 8,
        .weight = 223,
        .description = COMPOUND_STRING(
            "Although composed of Flying type data, \n"
            "Muchomon can not actually fly. Despite this\n"
            "it is a very happy Digimon, often seen\n"
            "to the rhythm of the samba."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Muchomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_LUNGE_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Muchomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Muchomon,
        .shinyPalette = gMonShinyPalette_Muchomon,
        .iconSprite = gMonIcon_Muchomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MuchomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_MuchomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Muchomon)
        OVERWORLD(
            sPicTable_Muchomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Muchomon,
            gShinyOverworldPalette_Muchomon
        )
        OVERWORLD_FEMALE(
            sPicTable_MuchomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMuchomonLevelUpLearnset,
        .teachableLearnset = sMuchomonTeachableLearnset,
        .eggMoveLearnset = sMuchomonEggMoveLearnset,
        .formSpeciesIdTable = sMuchomonFormSpeciesIdTable,
        .formChangeTable = sMuchomonFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 29, SPECIES_AKATORIMON}),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MUCHOMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SKILL_LINK, ABILITY_SKILL_LINK, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Muchomon"),
        .cryId = CRY_MUCHOMON_MEGA,
        .natDexNum = NATIONAL_DEX_MUCHOMON,
        .categoryName = _("Single Horn"),
        .height = 17,
        .weight = 625,
        .description = COMPOUND_STRING(
            "A tremendous influx of energy builds it up,\n"
            "but when Mega Evolution ends, Muchomon\n"
            "is bothered by terrible soreness in its\n"
            "muscles."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MuchomonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MuchomonMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_MuchomonMega,
        .shinyPalette = gMonShinyPalette_MuchomonMega,
        .iconSprite = gMonIcon_MuchomonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Muchomon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_MuchomonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MuchomonMega,
            gShinyOverworldPalette_MuchomonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sMuchomonLevelUpLearnset,
        .teachableLearnset = sMuchomonTeachableLearnset,
        .eggMoveLearnset = sMuchomonEggMoveLearnset,
        .formSpeciesIdTable = sMuchomonFormSpeciesIdTable,
        .formChangeTable = sMuchomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUCHOMON

#if P_FAMILY_MUSHROOMON
    [SPECIES_MUSHROOMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 57,
        .baseDefense   = 51,
        .baseSpeed     = 48,
        .baseSpAttack  = 58,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_POISON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_LIQUID_OOZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Mushroomon"),
        .cryId = CRY_MUSHROOMON,
        .natDexNum = NATIONAL_DEX_MUSHROOMON,
        .categoryName = _("Mushroom"),
        .height = 11,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Mushroomon is an extremely ill-tempered\n"
            "Digimon that loves to bully the weak. It\n"
            "also has a shy side so it will also conceal\n"
            "half of its face around others."),
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mushroomon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Mushroomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Mushroomon,
        .shinyPalette = gMonShinyPalette_Mushroomon,
        .iconSprite = gMonIcon_Mushroomon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MushroomonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_MushroomonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Mushroomon)
        OVERWORLD(
            sPicTable_Mushroomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mushroomon,
            gShinyOverworldPalette_Mushroomon
        )
        OVERWORLD_FEMALE(
            sPicTable_MushroomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMushroomonLevelUpLearnset,
        .teachableLearnset = sMushroomonTeachableLearnset,
        .eggMoveLearnset = sMushroomonEggMoveLearnset,
        .formSpeciesIdTable = sMushroomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CITRAMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 199,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Weavile"),
        .cryId = CRY_WEAVILE,
        .natDexNum = NATIONAL_DEX_WEAVILE,
        .categoryName = _("Sharp Claw"),
        .height = 11,
        .weight = 340,
        .description = COMPOUND_STRING(
            "They travel in groups of four or five,\n"
            "leaving signs for one another on trees\n"
            "and rocks. They bring down their prey\n"
            "with coordinated attacks."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weavile,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Weavile,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Weavile,
        .shinyPalette = gMonShinyPalette_Weavile,
        .iconSprite = gMonIcon_Weavile,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WeavileF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_WeavileF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Weavile)
        OVERWORLD(
            sPicTable_Weavile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Weavile,
            gShinyOverworldPalette_Weavile
        )
        OVERWORLD_FEMALE(
            sPicTable_WeavileF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sWeavileLevelUpLearnset,
        .teachableLearnset = sWeavileTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
    [SPECIES_MUSHROOMON_HISUI] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 132,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Mushroomon"),
        .cryId = CRY_MUSHROOMON,
        .natDexNum = NATIONAL_DEX_MUSHROOMON,
        .categoryName = _("Sharp Claw"),
        .height = 9,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Its sturdy, curved claws are ideal for\n"
            "traversing precipitous cliffs. From the\n"
            "tips of these claws drips a venom that\n"
            "infiltrates the nerves of any prey caught."),
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MushroomonHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MushroomonHisui,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MushroomonHisui,
        .shinyPalette = gMonShinyPalette_MushroomonHisui,
        .iconSprite = gMonIcon_MushroomonHisui,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MushroomonHisuiF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_MushroomonHisuiF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Mushroomon)
        OVERWORLD(
            sPicTable_MushroomonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MushroomonHisui,
            gShinyOverworldPalette_MushroomonHisui
        )
        OVERWORLD_FEMALE(
            sPicTable_MushroomonHisuiF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sMushroomonHisuiLevelUpLearnset,
        .teachableLearnset = sMushroomonHisuiTeachableLearnset,
        .formSpeciesIdTable = sMushroomonFormSpeciesIdTable,
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 20,
        .expYield = 102,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_UNBURDEN, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sneasler"),
        .cryId = CRY_SNEASLER,
        .natDexNum = NATIONAL_DEX_SNEASLER,
        .categoryName = _("Free Climb"),
        .height = 13,
        .weight = 430,
        .description = COMPOUND_STRING(
            "Because of its wicked poison and daunting\n"
            "physical prowess, no other species could\n"
            "hope to best it on frozen highlands. It\n"
            "prefers solitude and doesn't form packs."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sneasler,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sneasler,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sneasler,
        .shinyPalette = gMonShinyPalette_Sneasler,
        .iconSprite = gMonIcon_Sneasler,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Sneasler)
        OVERWORLD(
            sPicTable_Sneasler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sneasler,
            gShinyOverworldPalette_Sneasler
        )
        .levelUpLearnset = sSneaslerLevelUpLearnset,
        .teachableLearnset = sSneaslerTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_MUSHROOMON

#if P_FAMILY_NEEMON
    [SPECIES_NEEMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 43,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .itemCommon = ITEM_HONEY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Neemon"),
        .cryId = CRY_NEEMON,
        .natDexNum = NATIONAL_DEX_NEEMON,
        .categoryName = _("Lazy"),
        .height = 11,
        .weight = 286,
        .description = COMPOUND_STRING(
            "A Neemon can almost always be found half\n"
            "asleep or dodging its duties. Despite the \n"
            "fact it is so lazy, it is still very\n"
            "knowledgable on many topics."),
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Neemon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Neemon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Neemon,
        .shinyPalette = gMonShinyPalette_Neemon,
        .iconSprite = gMonIcon_Neemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Neemon)
        OVERWORLD(
            sPicTable_Neemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Neemon,
            gShinyOverworldPalette_Neemon
        )
        .levelUpLearnset = sNeemonLevelUpLearnset,
        .teachableLearnset = sNeemonTeachableLearnset,
        .eggMoveLearnset = sNeemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DOGGYMON}),
    },

    [SPECIES_OTAMAMON] =
    {
        .baseHP        = 50,
        .baseAttack    = 56,
        .baseDefense   = 53,
        .baseSpeed     = 49,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Otamamon"),
        .cryId = CRY_OTAMAMON,
        .natDexNum = NATIONAL_DEX_OTAMAMON,
        .categoryName = _("Tadpole"),
        .height = 3,
        .weight = 162,
        .description = COMPOUND_STRING(
            "Although Otamamon has grown a lot from\n"
            "its Fresh days, it is still considered a \n"
            "larva Digimon as its skin has not fully\n"
            "formed. For this reason, it lives in water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Otamamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Otamamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Otamamon,
        .shinyPalette = gMonShinyPalette_Otamamon,
        .iconSprite = gMonIcon_Otamamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_OtamamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_OtamamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Otamamon)
        OVERWORLD(
            sPicTable_Otamamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Otamamon,
            gShinyOverworldPalette_Otamamon
        )
        OVERWORLD_FEMALE(
            sPicTable_OtamamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sOtamamonLevelUpLearnset,
        .teachableLearnset = sOtamamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_OTAMAMON_X},
                                {EVO_LEVEL, 29, SPECIES_GEKOMON}),
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 20,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GUTS, ABILITY_BULLETPROOF, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaluna"),
        .cryId = CRY_URSALUNA,
        .natDexNum = NATIONAL_DEX_URSALUNA,
        .categoryName = _("Peat"),
        .height = 24,
        .weight = 2900,
        .description = COMPOUND_STRING(
            "Swampy terrain gives Ursaluna its burly\n"
            "physique and newfound capacity to\n"
            "manipulate peat at will."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Ursaluna,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ursaluna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ursaluna,
        .shinyPalette = gMonShinyPalette_Ursaluna,
        .iconSprite = gMonIcon_Ursaluna,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ursaluna)
        OVERWORLD(
            sPicTable_Ursaluna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ursaluna,
            gShinyOverworldPalette_Ursaluna
        )
        .levelUpLearnset = sUrsalunaLevelUpLearnset,
        .teachableLearnset = sUrsalunaTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .baseHP        = 113,
        .baseAttack    = 70,
        .baseDefense   = 120,
        .baseSpeed     = 52,
        .baseSpAttack  = 135,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 5,
        .expYield = 275,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaluna"),
        .cryId = CRY_URSALUNA,
        .natDexNum = NATIONAL_DEX_URSALUNA,
        .categoryName = _("Peat"),
        .height = 27,
        .weight = 3330,
        .description = COMPOUND_STRING(
            "It crossed the sea and drifted\n"
            "ashore in a new land. Surviving in this\n"
            "place led it to take on a unique\n"
            "appearance and gain special powers."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_UrsalunaBloodmoon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrsalunaBloodmoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrsalunaBloodmoon,
        .shinyPalette = gMonShinyPalette_UrsalunaBloodmoon,
        .iconSprite = gMonIcon_UrsalunaBloodmoon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 11, SHADOW_SIZE_L)
        FOOTPRINT(Ursaluna)
        .levelUpLearnset = sLopmon_xLevelUpLearnset,
        .teachableLearnset = sUrsalunaBloodmoonTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_NEEMON

#if P_FAMILY_OTAMAMON_RED
    [SPECIES_OTAMAMON_RED] =
    {
        .baseHP        = 53,
        .baseAttack    = 58,
        .baseDefense   = 52,
        .baseSpeed     = 49,
        .baseSpAttack  = 58,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Otamamon"),
        .cryId = CRY_OTAMAMON_RED,
        .natDexNum = NATIONAL_DEX_OTAMAMON_RED,
        .categoryName = _("Tadpole"),
        .height = 3,
        .weight = 191,
        .description = COMPOUND_STRING(
            "These Otamamon are a variation that have\n"
            "acquired the Fire type after swimming in\n"
            "hot springs. With this new type, it has\n"
            "also grown stronger forelimbs for climbing."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Otamamon_red,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Otamamon_red,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Otamamon_red,
        .shinyPalette = gMonShinyPalette_Otamamon_red,
        .iconSprite = gMonIcon_Otamamon_red,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Otamamon_red)
        OVERWORLD(
            sPicTable_Otamamon_red,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Otamamon_red,
            gShinyOverworldPalette_Otamamon_red
        )
        .levelUpLearnset = sOtamamon_redLevelUpLearnset,
        .teachableLearnset = sOtamamon_redTeachableLearnset,
        .eggMoveLearnset = sOtamamon_redEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FROGMON}),
    },

    [SPECIES_OTAMAMON_X] =
    {
        .baseHP        = 58,
        .baseAttack    = 53,
        .baseDefense   = 53,
        .baseSpeed     = 46,
        .baseSpAttack  = 64,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_RAIN_DISH, ABILITY_THICK_FAT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Otamamon"),
        .cryId = CRY_OTAMAMON_X,
        .natDexNum = NATIONAL_DEX_OTAMAMON_X,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 198,
        .description = COMPOUND_STRING(
            "Otamamon Xs round body is one of its\n"
            "many points that it is proud. It is\n"
            "said that its roundness is so perfect\n"
            "that even PrinceMamemon notices it."),
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Otamamon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Otamamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Otamamon_x,
        .shinyPalette = gMonShinyPalette_Otamamon_x,
        .iconSprite = gMonIcon_Otamamon_x,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Otamamon_x)
        OVERWORLD(
            sPicTable_Otamamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Otamamon_x,
            gShinyOverworldPalette_Otamamon_x
        )
        .levelUpLearnset = sOtamamon_xLevelUpLearnset,
        .teachableLearnset = sOtamamon_xTeachableLearnset,
    },
#endif //P_FAMILY_OTAMAMON_RED

#if P_FAMILY_PALMON
    [SPECIES_PALMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 56,
        .baseDefense   = 54,
        .baseSpeed     = 52,
        .baseSpAttack  = 60,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_STENCH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Palmon"),
        .cryId = CRY_PALMON,
        .natDexNum = NATIONAL_DEX_PALMON,
        .categoryName = _("Palm Tree"),
        .height = 10,
        .weight = 278,
        .description = COMPOUND_STRING(
            "Although Palmon is for all intents and\n"
            "purposes a grass type Digimon, it\n"
            "is actually made up of lots of reptile\n"
            "data just like Tanemon."),
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Palmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Palmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Palmon,
        .shinyPalette = gMonShinyPalette_Palmon,
        .iconSprite = gMonIcon_Palmon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, -6, SHADOW_SIZE_S)
        FOOTPRINT(Palmon)
        OVERWORLD(
            sPicTable_Palmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palmon,
            gShinyOverworldPalette_Palmon
        )
        .levelUpLearnset = sPalmonLevelUpLearnset,
        .teachableLearnset = sPalmonTeachableLearnset,
        .eggMoveLearnset = sPalmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_PALMON_X},
                                {EVO_LEVEL, 33, SPECIES_FANGMON}),
    },

    [SPECIES_PALMON_X] =
    {
        .baseHP        = 59,
        .baseAttack    = 56,
        .baseDefense   = 54,
        .baseSpeed     = 50,
        .baseSpAttack  = 64,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_STENCH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Palmon"),
        .cryId = CRY_PALMON_X,
        .natDexNum = NATIONAL_DEX_PALMON_X,
        .categoryName = _("X Antibody"),
        .height = 11,
        .weight = 201,
        .description = COMPOUND_STRING(
            "Palmon Xs flower has now fully bloomed\n"
            "with colours and fragnance now expressing\n"
            "its feelings. It can now also release a\n"
            "poisonous scent that causes many effects."),
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Palmon_x,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Palmon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Palmon_x,
        .shinyPalette = gMonShinyPalette_Palmon_x,
        .iconSprite = gMonIcon_Palmon_x,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Palmon_xF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_Palmon_xF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Palmon_x)
        OVERWORLD(
            sPicTable_Palmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palmon_x,
            gShinyOverworldPalette_Palmon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Palmon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPalmon_xLevelUpLearnset,
        .teachableLearnset = sPalmon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DOKUGUMON}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 50,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 207,
    #endif
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mamoswine"),
        .cryId = CRY_MAMOSWINE,
        .natDexNum = NATIONAL_DEX_MAMOSWINE,
        .categoryName = _("Twin Tusk"),
        .height = 25,
        .weight = 2910,
        .description = COMPOUND_STRING(
            "A frozen Mamoswine was dug from ice\n"
            "dating back 10,000 years. It woke up to\n"
            "much amazement. This Pokémon has been\n"
            "around for a long, long, long time."),
        .pokemonScale = 257,
        .pokemonOffset = 6,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Mamoswine,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Mamoswine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Mamoswine,
        .shinyPalette = gMonShinyPalette_Mamoswine,
        .iconSprite = gMonIcon_Mamoswine,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MamoswineF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 7, SHADOW_SIZE_L)
        FOOTPRINT(Mamoswine)
        OVERWORLD(
            sPicTable_Mamoswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mamoswine,
            gShinyOverworldPalette_Mamoswine
        )
        OVERWORLD_FEMALE(
            sPicTable_MamoswineF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sMamoswineLevelUpLearnset,
        .teachableLearnset = sMamoswineTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_PALMON

#if P_FAMILY_PATAMON
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define PATAMON_EXP_YIELD 144
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PATAMON_EXP_YIELD 133
#else
    #define PATAMON_EXP_YIELD 113
#endif
#define PATAMON_HP       (P_UPDATED_STATS >= GEN_7 ? 65 : 55)
#define PATAMON_DEFENSES (P_UPDATED_STATS >= GEN_7 ? 95 : 85)

    [SPECIES_PATAMON] =
    {
        .baseHP        = 60,
        .baseAttack    = 47,
        .baseDefense   = 49,
        .baseSpeed     = 48,
        .baseSpAttack  = 50,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LUMINOUS_MOSS,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_EPIPHANY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Patamon"),
        .cryId = CRY_PATAMON,
        .natDexNum = NATIONAL_DEX_PATAMON,
        .categoryName = _("Holy"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Although it doesn't wear a Holy Ring, \n"
            "Patamon can still exhibit its hidden holy\n"
            "power. While Patamon can fly, it is so\n"
            "slow that it is better off just walking."),
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Patamon,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Patamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Patamon,
        .shinyPalette = gMonShinyPalette_Patamon,
        .iconSprite = gMonIcon_Patamon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Patamon)
        OVERWORLD(
            sPicTable_Patamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Patamon,
            gShinyOverworldPalette_Patamon
        )
        .levelUpLearnset = sPatamonLevelUpLearnset,
        .teachableLearnset = sPatamonTeachableLearnset,
        .eggMoveLearnset = sPatamonEggMoveLearnset,
        .formSpeciesIdTable = sPatamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_BAROMON},
                                {EVO_LEVEL, 26, SPECIES_ANGEMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_PATAMON_GALAR] =
    {
        .baseHP        = PATAMON_HP - 5,
        .baseAttack    = 55,
        .baseDefense   = PATAMON_DEFENSES + 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = PATAMON_DEFENSES + 5,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 60,
        .expYield = PATAMON_EXP_YIELD,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Patamon"),
        .cryId = CRY_PATAMON,
        .natDexNum = NATIONAL_DEX_PATAMON,
        .categoryName = _("Coral"),
        .height = 6,
        .weight = 5,
        .description = COMPOUND_STRING(
            "Sudden climate change wiped out this\n"
            "ancient kind of Patamon. With its branches,\n"
            "it absorbs others' life-force. It curses\n"
            "those unaware that kick it by accident."),
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PatamonGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PatamonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PatamonGalar,
        .shinyPalette = gMonShinyPalette_PatamonGalar,
        .iconSprite = gMonIcon_PatamonGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Patamon)
        OVERWORLD(
            sPicTable_PatamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PatamonGalar,
            gShinyOverworldPalette_PatamonGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPatamonGalarLevelUpLearnset,
        .teachableLearnset = sPatamonGalarTeachableLearnset,
        .eggMoveLearnset = sPatamonGalarEggMoveLearnset,
        .formSpeciesIdTable = sPatamonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CURSOLA}),
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 30,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cursola"),
        .cryId = CRY_CURSOLA,
        .natDexNum = NATIONAL_DEX_CURSOLA,
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Its shell is overflowing with its\n"
            "heightened otherworldly energy. The\n"
            "ectoplasm serves as protection for this\n"
            "Pokémon's core spirit."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cursola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cursola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cursola,
        .shinyPalette = gMonShinyPalette_Cursola,
        .iconSprite = gMonIcon_Cursola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Cursola)
        OVERWORLD(
            sPicTable_Cursola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cursola,
            gShinyOverworldPalette_Cursola
        )
        .levelUpLearnset = sCursolaLevelUpLearnset,
        .teachableLearnset = sCursolaTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PATAMON

#if P_FAMILY_PAWNMON_BLACK
    [SPECIES_PAWNMON_BLACK] =
    {
        .baseHP        = 46,
        .baseAttack    = 43,
        .baseDefense   = 48,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pawnmon"),
        .cryId = CRY_PAWNMON_BLACK,
        .natDexNum = NATIONAL_DEX_PAWNMON_BLACK,
        .categoryName = _("Chess"),
        .height = 13,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Even though it is almost identical to white\n"
            "PawnChessmon, it stil says it hates them\n"
            "with a passion although it has been\n"
            "reported that have been friendly together."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawnmon_black,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Pawnmon_black,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pawnmon_black,
        .shinyPalette = gMonShinyPalette_Pawnmon_black,
        .iconSprite = gMonIcon_Pawnmon_black,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pawnmon_black)
        OVERWORLD(
            sPicTable_Pawnmon_black,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pawnmon_black,
            gShinyOverworldPalette_Pawnmon_black
        )
        .levelUpLearnset = sPawnmon_blackLevelUpLearnset,
        .teachableLearnset = sPawnmon_blackTeachableLearnset,
        .eggMoveLearnset = sPawnmon_blackEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ANGEMON}),
    },

    [SPECIES_PAWNMON_WHITE] =
    {
        .baseHP        = 46,
        .baseAttack    = 43,
        .baseDefense   = 48,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pawnmon"),
        .cryId = CRY_PAWNMON_WHITE,
        .natDexNum = NATIONAL_DEX_PAWNMON_WHITE,
        .categoryName = _("Chess"),
        .height = 13,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Although PawnChessmon is a very weak Rookie,\n"
            "it is said that it likely possess Mega \n"
            "class power. When it goes into battle, it\n"
            "can be heard chanting 'I only advance!'."),
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawnmon_white,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Pawnmon_white,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Pawnmon_white,
        .shinyPalette = gMonShinyPalette_Pawnmon_white,
        .iconSprite = gMonIcon_Pawnmon_white,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_Pawnmon_whiteF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_Pawnmon_whiteF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pawnmon_white)
        OVERWORLD(
            sPicTable_Pawnmon_white,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Pawnmon_white,
            gShinyOverworldPalette_Pawnmon_white
        )
        OVERWORLD_FEMALE(
            sPicTable_Pawnmon_whiteF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
        .levelUpLearnset = sPawnmon_whiteLevelUpLearnset,
        .teachableLearnset = sPawnmon_whiteTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ANGEMON}),
    },
#endif //P_FAMILY_PAWNMON_BLACK

#if P_FAMILY_PENGUINMON
    [SPECIES_PENGUINMON] =
    {
        .baseHP        = 47,
        .baseAttack    = 53,
        .baseDefense   = 51,
        .baseSpeed     = 64,
        .baseSpAttack  = 55,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_EARLY_BIRD, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Penguinmon"),
        .cryId = CRY_PENGUINMON,
        .natDexNum = NATIONAL_DEX_PENGUINMON,
        .categoryName = _("Penguin"),
        .height = 8,
        .weight = 169,
        .description = COMPOUND_STRING(
            "Because it lives in an ice-covered region,\n"
            "Penguinmon is very weak in hotter areas.\n"
            "When sliding on its body, it can reach\n"
            "upwards of 40 mph in good conditions"),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Penguinmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Penguinmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Penguinmon,
        .shinyPalette = gMonShinyPalette_Penguinmon,
        .iconSprite = gMonIcon_Penguinmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Penguinmon)
        OVERWORLD(
            sPicTable_Penguinmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Penguinmon,
            gShinyOverworldPalette_Penguinmon
        )
        .levelUpLearnset = sPenguinmonLevelUpLearnset,
        .teachableLearnset = sPenguinmonTeachableLearnset,
        .eggMoveLearnset = sPenguinmonEggMoveLearnset,
    },
#endif //P_FAMILY_PENGUINMON

#if P_FAMILY_PETITMAMON
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 108,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mantyke"),
        .cryId = CRY_MANTYKE,
        .natDexNum = NATIONAL_DEX_MANTYKE,
        .categoryName = _("Kite"),
        .height = 10,
        .weight = 650,
        .description = COMPOUND_STRING(
            "When it swims close to the surface\n"
            "of the ocean, people aboard ships are\n"
            "able to observe the pattern on its back.\n"
            "It often swims in a school of Pawnmon_black."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mantyke,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Mantyke,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Mantyke,
        .shinyPalette = gMonShinyPalette_Mantyke,
        .iconSprite = gMonIcon_Mantyke,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Mantyke)
        OVERWORLD(
            sPicTable_Mantyke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mantyke,
            gShinyOverworldPalette_Mantyke
        )
        .levelUpLearnset = sMantykeLevelUpLearnset,
        .teachableLearnset = sMantykeTeachableLearnset,
        .eggMoveLearnset = sMantykeEggMoveLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_PETITMAMON] =
    {
        .baseHP        = 57,
        .baseAttack    = 46,
        .baseDefense   = 43,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Petitmamon"),
        .cryId = CRY_PETITMAMON,
        .natDexNum = NATIONAL_DEX_PETITMAMON,
        .categoryName = _("Demon"),
        .height = 7,
        .weight = 156,
        .description = COMPOUND_STRING(
            "Even though it is a Demon Digimon,\n"
            "PetitMamon has a soft side to it and\n"
            "will offer assistance to anyone under\n"
            "the right circumstances."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Petitmamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .backPic = gMonBackPic_Petitmamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Petitmamon,
        .shinyPalette = gMonShinyPalette_Petitmamon,
        .iconSprite = gMonIcon_Petitmamon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Petitmamon)
        OVERWORLD(
            sPicTable_Petitmamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Petitmamon,
            gShinyOverworldPalette_Petitmamon
        )
        .levelUpLearnset = sPetitmamonLevelUpLearnset,
        .teachableLearnset = sPetitmamonTeachableLearnset,
        .eggMoveLearnset = sPetitmamonEggMoveLearnset,
    },
#endif //P_FAMILY_PETITMAMON

#if P_FAMILY_PHASCOMON
    [SPECIES_PHASCOMON] =
    {
        .baseHP        = 58,
        .baseAttack    = 57,
        .baseDefense   = 52,
        .baseSpeed     = 38,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_DARK, TYPE_PSYCHIC),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_TRUANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Phascomon"),
        .cryId = CRY_PHASCOMON,
        .natDexNum = NATIONAL_DEX_PHASCOMON,
        .categoryName = _("Koala"),
        .height = 6,
        .weight = 204,
        .description = COMPOUND_STRING(
            "Often found in the dark 'Evil Forest',\n"
            "Phascomon will wait atop trees for\n"
            "unsuspecting visitors. When it decides on\n"
            "a target, it will drop down to attack."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Phascomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Phascomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Phascomon,
        .shinyPalette = gMonShinyPalette_Phascomon,
        .iconSprite = gMonIcon_Phascomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Phascomon)
        OVERWORLD(
            sPicTable_Phascomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phascomon,
            gShinyOverworldPalette_Phascomon
        )
        .levelUpLearnset = sPhascomonLevelUpLearnset,
        .teachableLearnset = sPhascomonTeachableLearnset,
        .eggMoveLearnset = sPhascomonEggMoveLearnset,
    },
#endif //P_FAMILY_PHASCOMON

#if P_FAMILY_PILLOMON
    [SPECIES_PILLOMON] =
    {
        .baseHP        = 63,
        .baseAttack    = 43,
        .baseDefense   = 49,
        .baseSpeed     = 39,
        .baseSpAttack  = 69,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP        = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRUANT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pillomon"),
        .cryId = CRY_PILLOMON,
        .natDexNum = NATIONAL_DEX_PILLOMON,
        .categoryName = _("Sleeping"),
        .height = 4,
        .weight = 162,
        .description = COMPOUND_STRING(
            "When sleeping, Pillomon will always be\n"
            "floating around. If someone is nearby\n"
            "when it is sleeping, they can either have\n"
            "very pleasent dreams or horrible nightmares."),
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pillomon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pillomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pillomon,
        .shinyPalette = gMonShinyPalette_Pillomon,
        .iconSprite = gMonIcon_Pillomon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pillomon)
        OVERWORLD(
            sPicTable_Pillomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pillomon,
            gShinyOverworldPalette_Pillomon
        )
        .levelUpLearnset = sPillomonLevelUpLearnset,
        .teachableLearnset = sPillomonTeachableLearnset,
        .eggMoveLearnset = sPillomonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_POMUMON}),
    },

    [SPECIES_POMUMON] =
    {
        .baseHP        = 48,
        .baseAttack    = 54,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 49,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_OVERGROW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pomumon"),
        .cryId = CRY_POMUMON,
        .natDexNum = NATIONAL_DEX_POMUMON,
        .categoryName = _("Fruit"),
        .height = 9,
        .weight = 254,
        .description = COMPOUND_STRING(
            "The sugar content of Pomumon is exceptional\n"
            "making it a very popular prey of stronger\n"
            "Digimon. It struggles to flee from\n"
            "predators as it is very bad at flying."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pomumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Pomumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pomumon,
        .shinyPalette = gMonShinyPalette_Pomumon,
        .iconSprite = gMonIcon_Pomumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PomumonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PomumonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pomumon)
        OVERWORLD(
            sPicTable_Pomumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pomumon,
            gShinyOverworldPalette_Pomumon
        )
        OVERWORLD_FEMALE(
            sPicTable_PomumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sPomumonLevelUpLearnset,
        .teachableLearnset = sPomumonTeachableLearnset,
        .formSpeciesIdTable = sPomumonFormSpeciesIdTable,
        .formChangeTable = sPomumonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_POMUMON_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 210,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pomumon"),
        .cryId = CRY_POMUMON_MEGA,
        .natDexNum = NATIONAL_DEX_POMUMON,
        .categoryName = _("Dark"),
        .height = 19,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Its red claws and the tips of its tail are\n"
            "melting from high internal temperatures\n"
            "that are painful to Pomumon itself.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PomumonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PomumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_PomumonMega,
        .shinyPalette = gMonShinyPalette_PomumonMega,
        .iconSprite = gMonIcon_PomumonMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pomumon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_PomumonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PomumonMega,
            gShinyOverworldPalette_PomumonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPomumonLevelUpLearnset,
        .teachableLearnset = sPomumonTeachableLearnset,
        .formSpeciesIdTable = sPomumonFormSpeciesIdTable,
        .formChangeTable = sPomumonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PILLOMON

#if P_FAMILY_PULSEMON
    [SPECIES_PULSEMON] =
    {
        .baseHP        = 66,
        .baseAttack    = 53,
        .baseDefense   = 52,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_ELECTRIC),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pulsemon"),
        .cryId = CRY_PULSEMON,
        .natDexNum = NATIONAL_DEX_PULSEMON,
        .categoryName = _("Heartbeat"),
        .height = 10,
        .weight = 275,
        .description = COMPOUND_STRING(
            "Pulsemon is one of the friendliest \n"
            "Digimon out there, making it a popular\n"
            "pick for many tamers. It is also very\n"
            "savvy in battle with its agility."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pulsemon,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Pulsemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pulsemon,
        .shinyPalette = gMonShinyPalette_Pulsemon,
        .iconSprite = gMonIcon_Pulsemon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, -2, SHADOW_SIZE_M)
        FOOTPRINT(Pulsemon)
        OVERWORLD(
            sPicTable_Pulsemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pulsemon,
            gShinyOverworldPalette_Pulsemon
        )
        .levelUpLearnset = sPulsemonLevelUpLearnset,
        .teachableLearnset = sPulsemonTeachableLearnset,
        .eggMoveLearnset = sPulsemonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_RENAMON}),
    },

    [SPECIES_RENAMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 61,
        .baseDefense   = 53,
        .baseSpeed     = 57,
        .baseSpAttack  = 60,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_PSYCHIC),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Renamon"),
        .cryId = CRY_RENAMON,
        .natDexNum = NATIONAL_DEX_RENAMON,
        .categoryName = _("Kitsune"),
        .height = 20,
        .weight = 414,
        .description = COMPOUND_STRING(
            "Renamon is a very calm, cool and collected\n"
            "Digimon that won't lose composure in any\n"
            "situation. Its height stands out when\n"
            "compared to other Rookie Digimon."),
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Renamon,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE_TWICE : ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Renamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Renamon,
        .shinyPalette = gMonShinyPalette_Renamon,
        .iconSprite = gMonIcon_Renamon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RenamonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_RenamonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Renamon)
        OVERWORLD(
            sPicTable_Renamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Renamon,
            gShinyOverworldPalette_Renamon
        )
        OVERWORLD_FEMALE(
            sPicTable_RenamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
        .levelUpLearnset = sRenamonLevelUpLearnset,
        .teachableLearnset = sRenamonTeachableLearnset,
    },
#endif //P_FAMILY_PULSEMON

#if P_FAMILY_ROKUSHO
    [SPECIES_ROKUSHO] = // REDO AS CHAMP
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 165,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rokusho"),
        .cryId = CRY_ROKUSHO,
        .natDexNum = NATIONAL_DEX_ROKUSHO,
        .categoryName = _("Big Horn"),
        .height = 14,
        .weight = 712,
        .description = COMPOUND_STRING(
            "Rokusho's magnificent antlers were\n"
            "once traded at high prices as works of art.\n"
            "As a result, this Pokémon was hunted\n"
            "close to extinction."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rokusho,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rokusho,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Rokusho,
        .shinyPalette = gMonShinyPalette_Rokusho,
        .iconSprite = gMonIcon_Rokusho,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rokusho)
        OVERWORLD(
            sPicTable_Rokusho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rokusho,
            gShinyOverworldPalette_Rokusho
        )
        .levelUpLearnset = sRokushoLevelUpLearnset,
        .teachableLearnset = sRokushoTeachableLearnset,
        .eggMoveLearnset = sRokushoEggMoveLearnset,
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 105,
        .baseDefense   = 72,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 263,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Wyrdeer"),
        .cryId = CRY_WYRDEER,
        .natDexNum = NATIONAL_DEX_WYRDEER,
        .categoryName = _("Big Horn"),
        .height = 18,
        .weight = 951,
        .description = COMPOUND_STRING(
            "The black orbs shine with an uncanny light\n"
            "when it is erecting invisible barriers.\n"
            "The fur shed from its beard retains heat\n"
            "and is useful for winter clothing."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Wyrdeer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wyrdeer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wyrdeer,
        .shinyPalette = gMonShinyPalette_Wyrdeer,
        .iconSprite = gMonIcon_Wyrdeer,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Wyrdeer)
        OVERWORLD(
            sPicTable_Wyrdeer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wyrdeer,
            gShinyOverworldPalette_Wyrdeer
        )
        .levelUpLearnset = sWyrdeerLevelUpLearnset,
        .teachableLearnset = sWyrdeerTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_ROKUSHO

#if P_FAMILY_RYUDAMON
    [SPECIES_RYUDAMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 59,
        .baseSpeed     = 63,
        .baseSpAttack  = 48,
        .baseSpDefense = 57,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Ryudamon"),
        .cryId = CRY_RYUDAMON,
        .natDexNum = NATIONAL_DEX_RYUDAMON,
        .categoryName = _("X Antibody"),
        .height = 9,
        .weight = 580,
        .description = COMPOUND_STRING(
            "Despite the fact that is covered in\n"
            "Japanese-style armour, its movements are\n"
            "very nimble making it very adept in\n"
            "battles against even strong Digimon."),
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ryudamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Ryudamon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Ryudamon,
        .shinyPalette = gMonShinyPalette_Ryudamon,
        .iconSprite = gMonIcon_Ryudamon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 7, SHADOW_SIZE_S)
        FOOTPRINT(Ryudamon)
        OVERWORLD(
            sPicTable_Ryudamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ryudamon,
            gShinyOverworldPalette_Ryudamon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sRyudamonLevelUpLearnset,
        .teachableLearnset = sRyudamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DEXDORUMON}),
    },
#endif //P_FAMILY_RYUDAMON

#if P_FAMILY_SHAMANMON
    [SPECIES_SHAMANMON] =
    {
        .baseHP        = 53,
        .baseAttack    = 53,
        .baseDefense   = 50,
        .baseSpeed     = 53,
        .baseSpAttack  = 57,
        .baseSpDefense = 51,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_SpAttack  = 3,
        .itemCommon = ITEM_MOOMOO_MILK,
        .itemRare = ITEM_MOOMOO_MILK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Shamanmon"),
        .cryId = CRY_SHAMANMON,
        .natDexNum = NATIONAL_DEX_SHAMANMON,
        .categoryName = _("Shaman"),
        .height = 16,
        .weight = 455,
        .description = COMPOUND_STRING(
            "Shamanmon is just a Goblimon who has been\n"
            "given the duty of listening to the will of\n"
            "its god. It will perform a dance during its\n"
            "rituals which will let it hear its god."),
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shamanmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Shamanmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Shamanmon,
        .shinyPalette = gMonShinyPalette_Shamanmon,
        .iconSprite = gMonIcon_Shamanmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 4, SHADOW_SIZE_M)
        FOOTPRINT(Shamanmon)
        OVERWORLD(
            sPicTable_Shamanmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shamanmon,
            gShinyOverworldPalette_Shamanmon
        )
        .levelUpLearnset = sShamanmonLevelUpLearnset,
        .teachableLearnset = sShamanmonTeachableLearnset,
        .eggMoveLearnset = sShamanmonEggMoveLearnset,
    },
#endif //P_FAMILY_SHAMANMON

#if P_FAMILY_YUKIAGUMON
    [SPECIES_YUKIAGUMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 50,
        .baseSpAttack  = 66,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_ICE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DAMP, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Yukiagumon"),
        .cryId = CRY_YUKIAGUMON,
        .natDexNum = NATIONAL_DEX_YUKIAGUMON,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 358,
        .description = COMPOUND_STRING(
            "Due to the child-like behaviour it inherited\n"
            "from Agumon, it is very gleeful when it\n"
            "is snowing. Because of its white body, it\n"
            "can easily sneak upto Digimon in the snow."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Yukiagumon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Yukiagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Yukiagumon,
        .shinyPalette = gMonShinyPalette_Yukiagumon,
        .iconSprite = gMonIcon_Yukiagumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 7, SHADOW_SIZE_L)
        FOOTPRINT(Yukiagumon)
        OVERWORLD(
            sPicTable_Yukiagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yukiagumon,
            gShinyOverworldPalette_Yukiagumon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sYukiagumonLevelUpLearnset,
        .teachableLearnset = sYukiagumonTeachableLearnset,
    },
#endif //P_FAMILY_YUKIAGUMON

#if P_FAMILY_YUKIAGUMON_06
    [SPECIES_YUKIAGUMON_06] =
    {
        .baseHP        = 55,
        .baseAttack    = 68,
        .baseDefense   = 51,
        .baseSpeed     = 53,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ICE, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_DAMP, ABILITY_RAIN_DISH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Yukiagumon"),
        .cryId = CRY_YUKIAGUMON_06,
        .natDexNum = NATIONAL_DEX_YUKIAGUMON_06,
        .categoryName = _("T-Rex"),
        .height = 10,
        .weight = 358,
        .description = COMPOUND_STRING(
            "Unlike normal YukiAgumon, this YukiAgumon\n"
            "favours physical fights and follows a more\n"
            "strength based hierarchy. It also has \n"
            "abandoned stealth attacks out of honour."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Yukiagumon_06,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Yukiagumon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Yukiagumon_06,
        .shinyPalette = gMonShinyPalette_Yukiagumon_06,
        .iconSprite = gMonIcon_Yukiagumon_06,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Yukiagumon_06)
        OVERWORLD(
            sPicTable_Yukiagumon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yukiagumon_06,
            gShinyOverworldPalette_Yukiagumon_06
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sYukiagumon_06LevelUpLearnset,
        .teachableLearnset = sYukiagumon_06TeachableLearnset,
    },
#endif //P_FAMILY_YUKIAGUMON_06

#if P_FAMILY_ICEGOBIMON
    [SPECIES_ICEGOBIMON] =
    {
        .baseHP        = 49,
        .baseAttack    = 57,
        .baseDefense   = 51,
        .baseSpeed     = 54,
        .baseSpAttack  = 56,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ICE, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Icegobimon"),
        .cryId = CRY_ICEGOBIMON,
        .natDexNum = NATIONAL_DEX_ICEGOBIMON,
        .categoryName = _("Goblin"),
        .height = 16,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Although it was brought up in an ice cold\n"
            "region, it still struggles with the cold\n"
            "if you remove any of its clothing however\n"
            "its bare feet are well adjusted for snow."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Icegobimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Icegobimon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Icegobimon,
        .shinyPalette = gMonShinyPalette_Icegobimon,
        .iconSprite = gMonIcon_Icegobimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Icegobimon)
        OVERWORLD(
            sPicTable_Icegobimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Icegobimon,
            gShinyOverworldPalette_Icegobimon
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sIcegobimonLevelUpLearnset,
        .teachableLearnset = sIcegobimonTeachableLearnset,
    },
#endif //P_FAMILY_ICEGOBIMON

#if P_FAMILY_SOLARMON
    [SPECIES_SOLARMON] =
    {
        .baseHP        = 51,
        .baseAttack    = 57,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 63,
        .baseSpDefense = 49,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FIRE),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Solarmon"),
        .cryId = CRY_SOLARMON,
        .natDexNum = NATIONAL_DEX_SOLARMON,
        .categoryName = _("Gear"),
        .height = 15,
        .weight = 699,
        .description = COMPOUND_STRING(
            "It is not known if it is a variation of\n"
            "Hagurumon despite the similiar appearence.\n"
            "Its body is hot enough that it is\n"
            "recommended to proceed with caution."),
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Solarmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Solarmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Solarmon,
        .shinyPalette = gMonShinyPalette_Solarmon,
        .iconSprite = gMonIcon_Solarmon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Solarmon)
        OVERWORLD(
            sPicTable_Solarmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Solarmon,
            gShinyOverworldPalette_Solarmon
        )
        .levelUpLearnset = sSolarmonLevelUpLearnset,
        .teachableLearnset = sSolarmonTeachableLearnset,
        .eggMoveLearnset = sSolarmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TRAILMON_DARK}),
    },

    [SPECIES_SOUNBRDMON] =
    {
        .baseHP        = 47,
        .baseAttack    = 43,
        .baseDefense   = 44,
        .baseSpeed     = 59,
        .baseSpAttack  = 68,
        .baseSpDefense = 44,
        .types = MON_TYPES(TYPE_FLYING, TYPE_DARK),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Sounbrdmon"),
        .cryId = CRY_SOUNBRDMON,
        .natDexNum = NATIONAL_DEX_SOUNBRDMON,
        .categoryName = _("Speaker"),
        .height = 6,
        .weight = 101,
        .description = COMPOUND_STRING(
            "Soundbirdmon is a very reserved and\n"
            "cautious Digimon that likes to keep quiet\n"
            "however when other Digimon apporach, it\n"
            "will drive them away with high pitch sounds."),
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sounbrdmon,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sounbrdmon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Sounbrdmon,
        .shinyPalette = gMonShinyPalette_Sounbrdmon,
        .iconSprite = gMonIcon_Sounbrdmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sounbrdmon)
        OVERWORLD(
            sPicTable_Sounbrdmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Sounbrdmon,
            gShinyOverworldPalette_Sounbrdmon
        )
        .levelUpLearnset = sSounbrdmonLevelUpLearnset,
        .teachableLearnset = sSounbrdmonTeachableLearnset,
    },

    [SPECIES_SPADAMON] =
    {
        .baseHP        = 55,
        .baseAttack    = 67,
        .baseDefense   = 54,
        .baseSpeed     = 57,
        .baseSpAttack  = 49,
        .baseSpDefense = 47,
        .types = MON_TYPES(TYPE_FIGHTING),
        .attribute = TYPE_FREE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Spadamon"),
        .cryId = CRY_SPADAMON,
        .natDexNum = NATIONAL_DEX_SPADAMON,
        .categoryName = _("Spear"),
        .height = 12,
        .weight = 286,
        .description = COMPOUND_STRING(
            "Spadamon is one of the legendary 'Legend-\n"
            "Arms' Digimon that can transform into a\n"
            "spear. It is said that in spear form it can\n"
            "either save or destroy the world."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Spadamon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SHAKE : ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Spadamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Spadamon,
        .shinyPalette = gMonShinyPalette_Spadamon,
        .iconSprite = gMonIcon_Spadamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Spadamon)
        OVERWORLD(
            sPicTable_Spadamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spadamon,
            gShinyOverworldPalette_Spadamon
        )
        .levelUpLearnset = sSpadamonLevelUpLearnset,
        .teachableLearnset = sSpadamonTeachableLearnset,
        .formSpeciesIdTable = sSpadamonFormSpeciesIdTable,
        .formChangeTable = sSpadamonFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SPADAMON_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 150,
        .baseSpeed     = 71,
        .baseSpAttack  = 95,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_SAND_STREAM, ABILITY_SAND_STREAM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Spadamon"),
        .cryId = CRY_SPADAMON_MEGA,
        .natDexNum = NATIONAL_DEX_SPADAMON,
        .categoryName = _("Armor"),
        .height = 25,
        .weight = 2550,
        .description = COMPOUND_STRING(
            "Due to the colossal power poured into it,\n"
            "this Pokémon's back split right open. Its\n"
            "destructive instincts are the only thing\n"
            "keeping it moving."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_SpadamonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SpadamonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_SpadamonMega,
        .shinyPalette = gMonShinyPalette_SpadamonMega,
        .iconSprite = gMonIcon_SpadamonMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Spadamon)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_SpadamonMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SpadamonMega,
            gShinyOverworldPalette_SpadamonMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sSpadamonLevelUpLearnset,
        .teachableLearnset = sSpadamonTeachableLearnset,
        .formSpeciesIdTable = sSpadamonFormSpeciesIdTable,
        .formChangeTable = sSpadamonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SOLARMON

#if P_FAMILY_SPARROWMON
    [SPECIES_SPARROWMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 48,
        .baseDefense   = 53,
        .baseSpeed     = 73,
        .baseSpAttack  = 55,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_MAGNET_PULL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sparrowmon"),
        .cryId = CRY_SPARROWMON,
        .natDexNum = NATIONAL_DEX_SPARROWMON,
        .categoryName = _("Jet"),
        .height = 14,
        .weight = 812,
        .description = COMPOUND_STRING(
            "You can generally tell what mood a\n"
            "Sparrowmon is in by how well it is flying.\n"
            "In battle, it uses its extreme speed to\n"
            "overwhelm any opponents that challenge it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Sparrowmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 20,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Sparrowmon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Sparrowmon,
        .shinyPalette = gMonShinyPalette_Sparrowmon,
        .iconSprite = gMonIcon_Sparrowmon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Sparrowmon)
        OVERWORLD(
            sPicTable_Sparrowmon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sparrowmon,
            gShinyOverworldPalette_Sparrowmon
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sSparrowmonLevelUpLearnset,
        .teachableLearnset = sSparrowmonTeachableLearnset,
    },
#endif //P_FAMILY_SPARROWMON

#if P_FAMILY_STARMON_2010
    [SPECIES_STARMON_2010] =
    {
        .baseHP        = 49,
        .baseAttack    = 53,
        .baseDefense   = 51,
        .baseSpeed     = 54,
        .baseSpAttack  = 55,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FAIRY),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Starmon"),
        .cryId = CRY_STARMON_2010,
        .natDexNum = NATIONAL_DEX_STARMON_2010,
        .categoryName = _("Star"),
        .height = 5,
        .weight = 137,
        .description = COMPOUND_STRING(
            "When in a group of Pickmon, Starmon is\n"
            "always the leader. When it feels down, it\n"
            "will just think about its appearence to\n"
            "feel better about everything."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_Starmon_2010,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Starmon_2010,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Starmon_2010,
        .shinyPalette = gMonShinyPalette_Starmon_2010,
        .iconSprite = gMonIcon_Starmon_2010,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 17, SHADOW_SIZE_L)
        FOOTPRINT(Starmon_2010)
        OVERWORLD(
            sPicTable_Starmon_2010,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Starmon_2010,
            gShinyOverworldPalette_Starmon_2010
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sStarmon_2010LevelUpLearnset,
        .teachableLearnset = sStarmon_2010TeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_DORULUMON}),
    },
#endif //P_FAMILY_STARMON_2010

#if P_FAMILY_STRABIMON
    [SPECIES_STRABIMON] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 54,
        .baseSpeed     = 56,
        .baseSpAttack  = 52,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DARK),
        .attribute = TYPE_FREE,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Strabimon"),
        .cryId = CRY_STRABIMON,
        .natDexNum = NATIONAL_DEX_STRABIMON,
        .categoryName = _("Hybrid"),
        .height = 20,
        .weight = 411,
        .description = COMPOUND_STRING(
            "Unlike Flamemon, Strabimon is a much more\n"
            "ferocious Digimon, so much so that when\n"
            "it rampages, even Champion Digimon\n"
            "struggle to handle it."),
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Strabimon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RISING_WOBBLE : ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Strabimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Strabimon,
        .shinyPalette = gMonShinyPalette_Strabimon,
        .iconSprite = gMonIcon_Strabimon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Strabimon)
        OVERWORLD(
            sPicTable_Strabimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Strabimon,
            gShinyOverworldPalette_Strabimon
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sStrabimonLevelUpLearnset,
        .teachableLearnset = sStrabimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_FANGMON}),
    },
#endif //P_FAMILY_STRABIMON

#ifdef __INTELLISENSE__
};
#endif
