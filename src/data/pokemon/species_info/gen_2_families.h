#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen2[] =
{
#endif

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
        .frontAnimFrames = sAnims_Falcomon_06,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Falcomon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Falcomon_06,
        .shinyPalette = gMonShinyPalette_Falcomon_06,
        .iconSprite = gMonIcon_Falcomon_06,
        .iconPalIndex = 1,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Falcomon_06)
        OVERWORLD(
            sPicTable_Falcomon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Fanbeemon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fanbeemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Fanbeemon,
        .shinyPalette = gMonShinyPalette_Fanbeemon,
        .iconSprite = gMonIcon_Fanbeemon,
        .iconPalIndex = 1,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Fanbeemon)
        OVERWORLD(
            sPicTable_Fanbeemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Flamemon,
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
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Flamemon)
        OVERWORLD(
            sPicTable_Flamemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flamemon,
            gShinyOverworldPalette_Flamemon
        )
        OVERWORLD_FEMALE(
            sPicTable_FlamemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Floramon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Floramon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Floramon,
        .shinyPalette = gMonShinyPalette_Floramon,
        .iconSprite = gMonIcon_Floramon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Floramon)
        OVERWORLD(
            sPicTable_Floramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gabumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Gabumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gabumon,
        .shinyPalette = gMonShinyPalette_Gabumon,
        .iconSprite = gMonIcon_Gabumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Gabumon)
        OVERWORLD(
            sPicTable_Gabumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gabumon_x,
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
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gabumon_x)
        OVERWORLD(
            sPicTable_Gabumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gabumon_xHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gabumon_xHisui,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Gabumon_xHisui,
        .shinyPalette = gMonShinyPalette_Gabumon_xHisui,
        .iconSprite = gMonIcon_Gabumon_xHisui,
        .iconPalIndex = 1,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Gabumon_x)
        OVERWORLD(
            sPicTable_Gabumon_xHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gammamon,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Gammamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gammamon,
        .shinyPalette = gMonShinyPalette_Gammamon,
        .iconSprite = gMonIcon_Gammamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Gammamon)
        OVERWORLD(
            sPicTable_Gammamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gaomon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gaomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Gaomon,
        .shinyPalette = gMonShinyPalette_Gaomon,
        .iconSprite = gMonIcon_Gaomon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gaomon)
        OVERWORLD(
            sPicTable_Gaomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gaomon,
            gShinyOverworldPalette_Gaomon
        )
        .levelUpLearnset = sGaomonLevelUpLearnset,
        .teachableLearnset = sGaomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 61, SPECIES_BABOONMON},
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
        .frontAnimFrames = sAnims_Gaossmon,
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
        SHADOW(3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gaossmon)
        OVERWORLD(
            sPicTable_Gaossmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gazimon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gazimon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gazimon,
        .shinyPalette = gMonShinyPalette_Gazimon,
        .iconSprite = gMonIcon_Gazimon,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Gazimon)
        OVERWORLD(
            sPicTable_Gazimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gazimon,
            gShinyOverworldPalette_Gazimon
        )
        .levelUpLearnset = sGazimonLevelUpLearnset,
        .teachableLearnset = sGazimonTeachableLearnset,
        .eggMoveLearnset = sGazimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 62, SPECIES_DEVIDRAMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GAZIMON_X},
                                {EVO_ATTACK, 69, SPECIES_APEMON},
                                {EVO_SPEED, 67, SPECIES_BLGARURMON},
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
        .frontAnimFrames = sAnims_Gazimon_x,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Gazimon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Gazimon_x,
        .shinyPalette = gMonShinyPalette_Gazimon_x,
        .iconSprite = gMonIcon_Gazimon_x,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Gazimon_x)
        OVERWORLD(
            sPicTable_Gazimon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Ghostmon,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .backPic = gMonBackPic_Ghostmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ghostmon,
        .shinyPalette = gMonShinyPalette_Ghostmon,
        .iconSprite = gMonIcon_Ghostmon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Ghostmon)
        OVERWORLD(
            sPicTable_Ghostmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Gizamon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gizamon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Gizamon,
        .shinyPalette = gMonShinyPalette_Gizamon,
        .iconSprite = gMonIcon_Gizamon,
        .iconPalIndex = 2,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Gizamon)
        OVERWORLD(
            sPicTable_Gizamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Gizumon,
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
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gizumon)
        OVERWORLD(
            sPicTable_Gizumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Gizumon,
            gShinyOverworldPalette_Gizumon
        )
        OVERWORLD_FEMALE(
            sPicTable_GizumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG
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
        .frontAnimFrames = sAnims_Goblimon,
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
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Goblimon)
        OVERWORLD(
            sPicTable_Goblimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Goblimon,
            gShinyOverworldPalette_Goblimon
        )
        OVERWORLD_FEMALE(
            sPicTable_GoblimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Gomamon,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Gomamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 16,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Gomamon,
        .shinyPalette = gMonShinyPalette_Gomamon,
        .iconSprite = gMonIcon_Gomamon,
        .iconPalIndex = 1,
        SHADOW(0, -8, SHADOW_SIZE_M)
        FOOTPRINT(Gomamon)
        OVERWORLD(
            sPicTable_Gomamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
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
        .frontAnimFrames = sAnims_Gomamon_x,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Gomamon_x,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Gomamon_x,
        .shinyPalette = gMonShinyPalette_Gomamon_x,
        .iconSprite = gMonIcon_Gomamon_x,
        .iconPalIndex = 0,
        SHADOW(1, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gomamon_x)
        OVERWORLD(
            sPicTable_Gomamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
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
        .frontAnimFrames = sAnims_Gotsumon_x,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gotsumon_x,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gotsumon_x,
        .shinyPalette = gMonShinyPalette_Gotsumon_x,
        .iconSprite = gMonIcon_Gotsumon_x,
        .iconPalIndex = 2,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Gotsumon_x)
        OVERWORLD(
            sPicTable_Gotsumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
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
        .frontAnimFrames = sAnims_Guilmon,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Guilmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Guilmon,
        .shinyPalette = gMonShinyPalette_Guilmon,
        .iconSprite = gMonIcon_Guilmon,
        .iconPalIndex = 0,
        SHADOW(5, 4, SHADOW_SIZE_M)
        FOOTPRINT(Guilmon)
        OVERWORLD(
            sPicTable_Guilmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Guilmon,
            gShinyOverworldPalette_Guilmon
        )
        .levelUpLearnset = sGuilmonLevelUpLearnset,
        .teachableLearnset = sGuilmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 70, SPECIES_BALUCHIMON},
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
        .frontAnimFrames = sAnims_Hagurumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Hagurumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Hagurumon,
        .shinyPalette = gMonShinyPalette_Hagurumon,
        .iconSprite = gMonIcon_Hagurumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Hagurumon)
        OVERWORLD(
            sPicTable_Hagurumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Hagurumon_x,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hagurumon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Hagurumon_x,
        .shinyPalette = gMonShinyPalette_Hagurumon_x,
        .iconSprite = gMonIcon_Hagurumon_x,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hagurumon_x)
        OVERWORLD(
            sPicTable_Hagurumon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Hagurumon_x,
            gShinyOverworldPalette_Hagurumon_x
        )
        .levelUpLearnset = sHagurumon_xLevelUpLearnset,
        .teachableLearnset = sHagurumon_xTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 57, SPECIES_CLOCKMON},
                                {EVO_SPEED, 59, SPECIES_BLIMPMON},
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
        .frontAnimFrames = sAnims_Togekiss,
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
        SHADOW(4, 15, SHADOW_SIZE_M)
        FOOTPRINT(Togekiss)
        OVERWORLD(
            sPicTable_Togekiss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Hawkmon,
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
        SHADOW(-2, -4, SHADOW_SIZE_S)
        FOOTPRINT(Hawkmon)
        OVERWORLD(
            sPicTable_Hawkmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Herissmon,
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
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Herissmon)
        OVERWORLD(
            sPicTable_Herissmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Herissmon,
            gShinyOverworldPalette_Herissmon
        )
        OVERWORLD_FEMALE(
            sPicTable_HerissmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Hyokomon,
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
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Hyokomon)
        OVERWORLD(
            sPicTable_Hyokomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Ignitemon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Ignitemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Ignitemon,
        .shinyPalette = gMonShinyPalette_Ignitemon,
        .iconSprite = gMonIcon_Ignitemon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Ignitemon)
        OVERWORLD(
            sPicTable_Ignitemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Impmon,
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
        SHADOW(3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Impmon)
        OVERWORLD(
            sPicTable_Impmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Impmon,
            gShinyOverworldPalette_Impmon
        )
        .levelUpLearnset = sImpmonLevelUpLearnset,
        .teachableLearnset = sImpmonTeachableLearnset,
        .formSpeciesIdTable = sImpmonFormSpeciesIdTable,
        .formChangeTable = sImpmonFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPEED, 52, SPECIES_BIOTHUNMON},
                                {EVO_HEALTH, 81, SPECIES_BIOQUETMON},
                                {EVO_SPATTACK, 55, SPECIES_BOOGIEMON},
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
        .frontAnimFrames = sAnims_ImpmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ImpmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_ImpmonMega,
        .shinyPalette = gMonShinyPalette_ImpmonMega,
        .iconSprite = gMonIcon_ImpmonMega,
        .iconPalIndex = 0,
        SHADOW(-7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Impmon)
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
        .frontAnimFrames = sAnims_Biostegmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Biostegmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Biostegmon,
        .shinyPalette = gMonShinyPalette_Biostegmon,
        .iconSprite = gMonIcon_Biostegmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Biostegmon)
        OVERWORLD(
            sPicTable_Biostegmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Biostegmon,
            gShinyOverworldPalette_Biostegmon
        )
        .levelUpLearnset = sBiostegmonLevelUpLearnset,
        .teachableLearnset = sBiostegmonTeachableLearnset,
        .eggMoveLearnset = sBiostegmonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_JAZAMON}),
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
        .frontAnimFrames = sAnims_Jazamon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Jazamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Jazamon,
        .shinyPalette = gMonShinyPalette_Jazamon,
        .iconSprite = gMonIcon_Jazamon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Jazamon)
        OVERWORLD(
            sPicTable_Jazamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Jellymon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Jellymon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jellymon,
        .shinyPalette = gMonShinyPalette_Jellymon,
        .iconSprite = gMonIcon_Jellymon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-4, 8, SHADOW_SIZE_S)
        FOOTPRINT(Jellymon)
        OVERWORLD(
            sPicTable_Jellymon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Bonsly,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Bonsly,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Bonsly,
        .shinyPalette = gMonShinyPalette_Bonsly,
        .iconSprite = gMonIcon_Bonsly,
        .iconPalIndex = 1,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Bonsly)
        OVERWORLD(
            sPicTable_Bonsly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bonsly,
            gShinyOverworldPalette_Bonsly
        )
        .levelUpLearnset = sBonslyLevelUpLearnset,
        .teachableLearnset = sBonslyTeachableLearnset,
        .eggMoveLearnset = sBonslyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_JUNKMON}),
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
        .frontAnimFrames = sAnims_Junkmon,
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
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Junkmon)
        OVERWORLD(
            sPicTable_Junkmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Junkmon,
            gShinyOverworldPalette_Junkmon
        )
        OVERWORLD_FEMALE(
            sPicTable_JunkmonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Keramon,
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
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Keramon)
        OVERWORLD(
            sPicTable_Keramon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Keramon_x,
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
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Keramon_x)
        OVERWORLD(
            sPicTable_Keramon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Kodokgumon,
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
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Kodokgumon)
        OVERWORLD(
            sPicTable_Kodokgumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Kokabuimon,
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
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Kokabuimon)
        OVERWORLD(
            sPicTable_Kokabuimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kokabuimon,
            gShinyOverworldPalette_Kokabuimon
        )
        OVERWORLD_FEMALE(
            sPicTable_KokabuimonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sKokabuimonLevelUpLearnset,
        .teachableLearnset = sKokabuimonTeachableLearnset,
        .eggMoveLearnset = sKokabuimonEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 52, SPECIES_DEPUTYMON},
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
        .frontAnimFrames = sAnims_Ambipom,
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
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Ambipom)
        OVERWORLD(
            sPicTable_Ambipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ambipom,
            gShinyOverworldPalette_Ambipom
        )
        OVERWORLD_FEMALE(
            sPicTable_AmbipomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Kokuwamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kokuwamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Kokuwamon,
        .shinyPalette = gMonShinyPalette_Kokuwamon,
        .iconSprite = gMonIcon_Kokuwamon,
        .iconPalIndex = 1,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Kokuwamon)
        OVERWORLD(
            sPicTable_Kokuwamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
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
        .frontAnimFrames = sAnims_Kokuwamon_x,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kokuwamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Kokuwamon_x,
        .shinyPalette = gMonShinyPalette_Kokuwamon_x,
        .iconSprite = gMonIcon_Kokuwamon_x,
        .iconPalIndex = 1,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Kokuwamon_x)
        OVERWORLD(
            sPicTable_Kokuwamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Kotemon,
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
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Kotemon)
        OVERWORLD(
            sPicTable_Kotemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Yanmega,
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
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Yanmega)
        OVERWORLD(
            sPicTable_Yanmega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Kudamon,
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
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Kudamon)
        OVERWORLD(
            sPicTable_Kudamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kudamon,
            gShinyOverworldPalette_Kudamon
        )
        OVERWORLD_FEMALE(
            sPicTable_KudamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Kudamon_06,
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
        SHADOW(0, 8, SHADOW_SIZE_M)
        FOOTPRINT(Kudamon_06)
        OVERWORLD(
            sPicTable_Kudamon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kudamon_06,
            gShinyOverworldPalette_Kudamon_06
        )
        OVERWORLD_FEMALE(
            sPicTable_Kudamon_06F,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_KudamonPaldea,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KudamonPaldea,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_KudamonPaldea,
        .shinyPalette = gMonShinyPalette_KudamonPaldea,
        .iconSprite = gMonIcon_KudamonPaldea,
        .iconPalIndex = 2,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Kudamon)
        OVERWORLD(
            sPicTable_KudamonPaldea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Clodsire,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clodsire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Clodsire,
        .shinyPalette = gMonShinyPalette_Clodsire,
        .iconSprite = gMonIcon_Clodsire,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_L)
        FOOTPRINT(Clodsire)
        OVERWORLD(
            sPicTable_Clodsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Lalamon,
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
        SHADOW(-2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Lalamon)
        OVERWORLD(
            sPicTable_Lalamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lalamon,
            gShinyOverworldPalette_Lalamon
        )
        OVERWORLD_FEMALE(
            sPicTable_LalamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Honchkrow,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Honchkrow,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Honchkrow,
        .shinyPalette = gMonShinyPalette_Honchkrow,
        .iconSprite = gMonIcon_Honchkrow,
        .iconPalIndex = 2,
        SHADOW(5, 7, SHADOW_SIZE_M)
        FOOTPRINT(Honchkrow)
        OVERWORLD(
            sPicTable_Honchkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Loogamon,
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
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Loogamon)
        OVERWORLD(
            sPicTable_Loogamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Mismagius,
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
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Mismagius)
        OVERWORLD(
            sPicTable_Mismagius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mismagius,
            gShinyOverworldPalette_Mismagius
        )
        .levelUpLearnset = sMismagiusLevelUpLearnset,
        .teachableLearnset = sMismagiusTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LOOGAMON

#if P_FAMILY_LOPMON
#define LOPMON_MISC_INFO(letter, _noFlip, frontWidth, frontHeight, backWidth, backHeight, backYOffset)   \
    {                                                                                                   \
        .baseHP        = 48,                                                                            \
        .baseAttack    = 72,                                                                            \
        .baseDefense   = 48,                                                                            \
        .baseSpeed     = 48,                                                                            \
        .baseSpAttack  = 72,                                                                            \
        .baseSpDefense = 48,                                                                            \
        .types = MON_TYPES(TYPE_PSYCHIC),                                                               \
        .catchRate = 225,                                                                               \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 118 : 61,                                         \
        .evYield_Attack = 1,                                                                            \
        .evYield_SpAttack = 1,                                                                          \
        .genderRatio = MON_GENDERLESS,                                                                  \
        .eggCycles = 40,                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                                      \
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },                                  \
        .bodyColor = BODY_COLOR_BLACK,                                                                  \
        .noFlip = _noFlip,                                                                              \
        .speciesName = _("Lopmon"),                                                                      \
        .cryId = CRY_LOPMON,                                                                             \
        .natDexNum = NATIONAL_DEX_LOPMON,                                                                \
        .categoryName = _("Symbol"),                                                                    \
        .height = 5,                                                                                    \
        .weight = 50,                                                                                   \
        .description = gLopmonPokedexText,                                                               \
        .pokemonScale = 411,                                                                            \
        .pokemonOffset = 2,                                                                             \
        .trainerScale = 256,                                                                            \
        .trainerOffset = 0,                                                                             \
        .frontPic = gMonFrontPic_Lopmon ##letter,                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, frontHeight),                                       \
        .frontPicYOffset = 16,                                                                          \
        .frontAnimFrames = sAnims_Lopmon,                                                                \
        .frontAnimId = ANIM_ZIGZAG_FAST,                                                                \
        .enemyMonElevation = 8,                                                                         \
        .backPic = gMonBackPic_Lopmon ##letter,                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, backHeight),                                          \
        .backPicYOffset = backYOffset,                                                                  \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                                                    \
        .palette = gMonPalette_Lopmon,                                                                   \
        .shinyPalette = gMonShinyPalette_Lopmon,                                                         \
        .iconSprite = gMonIcon_Lopmon ##letter,                                                          \
        .iconPalIndex = 0,                                                                              \
        SHADOW(0, 3, SHADOW_SIZE_S)                                                                     \
        FOOTPRINT(Lopmon)                                                                                \
        OVERWORLD(                                                                                      \
            sPicTable_Lopmon ##letter,                                                                   \
            SIZE_32x32,                                                                                 \
            SHADOW_SIZE_M,                                                                              \
            TRACKS_NONE,                                                                                \
            gOverworldPalette_Lopmon,                                                                    \
            gShinyOverworldPalette_Lopmon,                                                               \
        )                                                                                               \
        .levelUpLearnset = sLopmonLevelUpLearnset,                                                       \
        .teachableLearnset = sLopmonTeachableLearnset,                                                   \
        .tmIlliterate = TRUE,                                                                           \
        .formSpeciesIdTable = sLopmonFormSpeciesIdTable,                                                 \
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_LOPMON_X},
                                {EVO_LEVEL, 39, SPECIES_GARGOYLMON}),  
    }

    [SPECIES_LOPMON]             = LOPMON_MISC_INFO(A,           FALSE, 24, 40, 24, 48,  8 ),
    [SPECIES_LOPMON_B]           = LOPMON_MISC_INFO(B,           TRUE,  24, 32, 40, 48,  9 ),
    [SPECIES_LOPMON_C]           = LOPMON_MISC_INFO(C,           TRUE,  32, 32, 48, 56,  6 ),
    [SPECIES_LOPMON_D]           = LOPMON_MISC_INFO(D,           TRUE,  32, 32, 40, 48,  8 ),
    [SPECIES_LOPMON_E]           = LOPMON_MISC_INFO(E,           TRUE,  32, 32, 40, 48, 10 ),
    [SPECIES_LOPMON_F]           = LOPMON_MISC_INFO(F,           TRUE,  32, 32, 48, 48, 10 ),
    [SPECIES_LOPMON_G]           = LOPMON_MISC_INFO(G,           TRUE,  24, 40, 40, 56,  5 ),
    [SPECIES_LOPMON_H]           = LOPMON_MISC_INFO(H,           TRUE,  32, 32, 48, 48,  8 ),
    [SPECIES_LOPMON_I]           = LOPMON_MISC_INFO(I,           FALSE, 24, 32, 24, 56,  7 ),
    [SPECIES_LOPMON_J]           = LOPMON_MISC_INFO(J,           TRUE,  24, 32, 32, 48,  9 ),
    [SPECIES_LOPMON_K]           = LOPMON_MISC_INFO(K,           TRUE,  32, 32, 40, 56,  7 ),
    [SPECIES_LOPMON_L]           = LOPMON_MISC_INFO(L,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_LOPMON_M]           = LOPMON_MISC_INFO(M,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_LOPMON_N]           = LOPMON_MISC_INFO(N,           TRUE,  32, 24, 48, 40, 13 ),
    [SPECIES_LOPMON_O]           = LOPMON_MISC_INFO(O,           FALSE, 32, 32, 48, 48,  8 ),
    [SPECIES_LOPMON_P]           = LOPMON_MISC_INFO(P,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_LOPMON_Q]           = LOPMON_MISC_INFO(Q,           TRUE,  32, 24, 40, 40, 15 ),
    [SPECIES_LOPMON_R]           = LOPMON_MISC_INFO(R,           TRUE,  24, 32, 32, 40, 12 ),
    [SPECIES_LOPMON_S]           = LOPMON_MISC_INFO(S,           TRUE,  32, 40, 40, 56,  4 ),
    [SPECIES_LOPMON_T]           = LOPMON_MISC_INFO(T,           FALSE, 24, 32, 32, 40, 13 ),
    [SPECIES_LOPMON_U]           = LOPMON_MISC_INFO(U,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_LOPMON_V]           = LOPMON_MISC_INFO(V,           TRUE,  32, 32, 40, 48, 11 ),
    [SPECIES_LOPMON_W]           = LOPMON_MISC_INFO(W,           FALSE, 32, 32, 40, 40, 13 ),
    [SPECIES_LOPMON_X]           = LOPMON_MISC_INFO(X,           FALSE, 24, 24, 40, 40, 15 ),
    [SPECIES_LOPMON_Y]           = LOPMON_MISC_INFO(Y,           FALSE, 24, 32, 32, 48, 10 ),
    [SPECIES_LOPMON_Z]           = LOPMON_MISC_INFO(Z,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_LOPMON_EXCLAMATION] = LOPMON_MISC_INFO(Exclamation, FALSE, 24, 40, 24, 56,  6 ),
    [SPECIES_LOPMON_QUESTION]    = LOPMON_MISC_INFO(Question,    TRUE,  24, 40, 32, 56,  6 ),
#endif //P_FAMILY_LOPMON

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
        .frontAnimFrames = sAnims_Exveemon,
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
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Exveemon)
        OVERWORLD(
            sPicTable_Exveemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Lopmonx,
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
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Lopmonx)
        OVERWORLD(
            sPicTable_Lopmonx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lopmonx,
            gShinyOverworldPalette_Lopmonx
        )
        OVERWORLD_FEMALE(
            sPicTable_LopmonxF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Lucemon,
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
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Lucemon)
        OVERWORLD(
            sPicTable_Lucemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lucemon,
            gShinyOverworldPalette_Lucemon
        )
        OVERWORLD_FEMALE(
            sPicTable_LucemonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Farigiraf,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Farigiraf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Farigiraf,
        .shinyPalette = gMonShinyPalette_Farigiraf,
        .iconSprite = gMonIcon_Farigiraf,
        .iconPalIndex = 0,
        SHADOW(11, 13, SHADOW_SIZE_L)
        FOOTPRINT(Farigiraf)
        OVERWORLD(
            sPicTable_Farigiraf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Pineco,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = sAnims_Pineco,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Pineco,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Ludomon,
        .shinyPalette = gMonShinyPalette_Ludomon,
        .iconSprite = gMonIcon_Ludomon,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pineco)
        OVERWORLD(
            sPicTable_Pineco,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Pineco,
            gShinyOverworldPalette_Pineco
        )
        .levelUpLearnset = sPinecoLevelUpLearnset,
        .teachableLearnset = sPinecoTeachableLearnset,
        .eggMoveLearnset = sPinecoEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Forretress,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = sAnims_Forretress,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Lunamon,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lunamon,
        .shinyPalette = gMonShinyPalette_Lunamon,
        .iconSprite = gMonIcon_Lunamon,
        .iconPalIndex = 2,
        SHADOW(0, 6, SHADOW_SIZE_L)
        FOOTPRINT(Forretress)
        OVERWORLD(
            sPicTable_Forretress,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Forretress,
            gShinyOverworldPalette_Forretress
        )
        .levelUpLearnset = sForretressLevelUpLearnset,
        .teachableLearnset = sForretressTeachableLearnset,
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
        .frontAnimFrames = sAnims_Luxmon,
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
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Luxmon)
        OVERWORLD(
            sPicTable_Luxmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
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
        .frontAnimFrames = sAnims_Dudunsparce,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceTwoSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceTwoSegment,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
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
        .frontAnimFrames = sAnims_Dudunsparce,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceThreeSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceThreeSegment,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
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
        .frontAnimFrames = sAnims_Metabee,
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
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Metabee)
        OVERWORLD(
            sPicTable_Metabee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Metabee,
            gShinyOverworldPalette_Metabee
        )
        OVERWORLD_FEMALE(
            sPicTable_MetabeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sMetabeeLevelUpLearnset,
        .teachableLearnset = sMetabeeTeachableLearnset,
        .eggMoveLearnset = sMetabeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR},
                                {EVO_ITEM_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR}),
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
        .frontAnimFrames = sAnims_Gliscor,
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
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gliscor)
        OVERWORLD(
            sPicTable_Gliscor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Modbetamon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Modbetamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Modbetamon,
        .shinyPalette = gMonShinyPalette_Modbetamon,
        .iconSprite = gMonIcon_Modbetamon,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Modbetamon)
        OVERWORLD(
            sPicTable_Modbetamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Monitamon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Monitamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Monitamon,
        .shinyPalette = gMonShinyPalette_Monitamon,
        .iconSprite = gMonIcon_Monitamon,
        .iconPalIndex = 2,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Monitamon)
        OVERWORLD(
            sPicTable_Monitamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Monmon,
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
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Monmon)
        OVERWORLD(
            sPicTable_Monmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
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
        .frontAnimFrames = sAnims_MonmonHisui,
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
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(Monmon)
        OVERWORLD(
            sPicTable_MonmonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MonmonHisui,
            gShinyOverworldPalette_MonmonHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sMonmonHisuiLevelUpLearnset,
        .teachableLearnset = sMonmonHisuiTeachableLearnset,
        .formSpeciesIdTable = sMonmonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_BARB_BARRAGE, SPECIES_OVERQWIL}),
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
        .frontAnimFrames = sAnims_Overqwil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Overqwil,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Overqwil,
        .shinyPalette = gMonShinyPalette_Overqwil,
        .iconSprite = gMonIcon_Overqwil,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Overqwil)
        OVERWORLD(
            sPicTable_Overqwil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Morphomon,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Morphomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Morphomon,
        .shinyPalette = gMonShinyPalette_Morphomon,
        .iconSprite = gMonIcon_Morphomon,
        .iconPalIndex = 1,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Morphomon)
        OVERWORLD(
            sPicTable_Morphomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Muchomon,
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
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Muchomon)
        OVERWORLD(
            sPicTable_Muchomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Muchomon,
            gShinyOverworldPalette_Muchomon
        )
        OVERWORLD_FEMALE(
            sPicTable_MuchomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_MuchomonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MuchomonMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_MuchomonMega,
        .shinyPalette = gMonShinyPalette_MuchomonMega,
        .iconSprite = gMonIcon_MuchomonMega,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Muchomon)
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
        .frontAnimFrames = sAnims_Mushroomon,
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
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Mushroomon)
        OVERWORLD(
            sPicTable_Mushroomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mushroomon,
            gShinyOverworldPalette_Mushroomon
        )
        OVERWORLD_FEMALE(
            sPicTable_MushroomonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Weavile,
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
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Weavile)
        OVERWORLD(
            sPicTable_Weavile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Weavile,
            gShinyOverworldPalette_Weavile
        )
        OVERWORLD_FEMALE(
            sPicTable_WeavileF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_MushroomonHisui,
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
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Mushroomon)
        OVERWORLD(
            sPicTable_MushroomonHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MushroomonHisui,
            gShinyOverworldPalette_MushroomonHisui
        )
        OVERWORLD_FEMALE(
            sPicTable_MushroomonHisuiF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sMushroomonHisuiLevelUpLearnset,
        .teachableLearnset = sMushroomonHisuiTeachableLearnset,
        .formSpeciesIdTable = sMushroomonFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_RAZOR_CLAW, SPECIES_SNEASLER},
                                {EVO_ITEM_DAY, ITEM_RAZOR_CLAW, SPECIES_SNEASLER}),
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
        .frontAnimFrames = sAnims_Sneasler,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sneasler,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sneasler,
        .shinyPalette = gMonShinyPalette_Sneasler,
        .iconSprite = gMonIcon_Sneasler,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Sneasler)
        OVERWORLD(
            sPicTable_Sneasler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Neemon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Neemon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Neemon,
        .shinyPalette = gMonShinyPalette_Neemon,
        .iconSprite = gMonIcon_Neemon,
        .iconPalIndex = 0,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Neemon)
        OVERWORLD(
            sPicTable_Neemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Otamamon,
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
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Otamamon)
        OVERWORLD(
            sPicTable_Otamamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Otamamon,
            gShinyOverworldPalette_Otamamon
        )
        OVERWORLD_FEMALE(
            sPicTable_OtamamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Ursaluna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ursaluna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ursaluna,
        .shinyPalette = gMonShinyPalette_Ursaluna,
        .iconSprite = gMonIcon_Ursaluna,
        .iconPalIndex = 2,
        SHADOW(1, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ursaluna)
        OVERWORLD(
            sPicTable_Ursaluna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_UrsalunaBloodmoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrsalunaBloodmoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrsalunaBloodmoon,
        .shinyPalette = gMonShinyPalette_UrsalunaBloodmoon,
        .iconSprite = gMonIcon_UrsalunaBloodmoon,
        .iconPalIndex = 2,
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
        .frontAnimFrames = sAnims_Otamamon_red,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Otamamon_red,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Otamamon_red,
        .shinyPalette = gMonShinyPalette_Otamamon_red,
        .iconSprite = gMonIcon_Otamamon_red,
        .iconPalIndex = 0,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Otamamon_red)
        OVERWORLD(
            sPicTable_Otamamon_red,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
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
        .frontAnimFrames = sAnims_Otamamon_x,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Otamamon_x,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Otamamon_x,
        .shinyPalette = gMonShinyPalette_Otamamon_x,
        .iconSprite = gMonIcon_Otamamon_x,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Otamamon_x)
        OVERWORLD(
            sPicTable_Otamamon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
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
        .frontAnimFrames = sAnims_Palmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Palmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Palmon,
        .shinyPalette = gMonShinyPalette_Palmon,
        .iconSprite = gMonIcon_Palmon,
        .iconPalIndex = 2,
        SHADOW(-3, -6, SHADOW_SIZE_S)
        FOOTPRINT(Palmon)
        OVERWORLD(
            sPicTable_Palmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Palmon_x,
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
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Palmon_x)
        OVERWORLD(
            sPicTable_Palmon_x,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Palmon_x,
            gShinyOverworldPalette_Palmon_x
        )
        OVERWORLD_FEMALE(
            sPicTable_Palmon_xF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Mamoswine,
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
        SHADOW(7, 7, SHADOW_SIZE_L)
        FOOTPRINT(Mamoswine)
        OVERWORLD(
            sPicTable_Mamoswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mamoswine,
            gShinyOverworldPalette_Mamoswine
        )
        OVERWORLD_FEMALE(
            sPicTable_MamoswineF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Patamon,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Patamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Patamon,
        .shinyPalette = gMonShinyPalette_Patamon,
        .iconSprite = gMonIcon_Patamon,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Patamon)
        OVERWORLD(
            sPicTable_Patamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_PatamonGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PatamonGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PatamonGalar,
        .shinyPalette = gMonShinyPalette_PatamonGalar,
        .iconSprite = gMonIcon_PatamonGalar,
        .iconPalIndex = 0,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Patamon)
        OVERWORLD(
            sPicTable_PatamonGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Cursola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cursola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cursola,
        .shinyPalette = gMonShinyPalette_Cursola,
        .iconSprite = gMonIcon_Cursola,
        .iconPalIndex = 0,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Cursola)
        OVERWORLD(
            sPicTable_Cursola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Pawnmon_black,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Pawnmon_black,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pawnmon_black,
        .shinyPalette = gMonShinyPalette_Pawnmon_black,
        .iconSprite = gMonIcon_Pawnmon_black,
        .iconPalIndex = 0,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pawnmon_black)
        OVERWORLD(
            sPicTable_Pawnmon_black,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
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
        .frontAnimFrames = sAnims_Pawnmon_white,
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
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pawnmon_white)
        OVERWORLD(
            sPicTable_Pawnmon_white,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Pawnmon_white,
            gShinyOverworldPalette_Pawnmon_white
        )
        OVERWORLD_FEMALE(
            sPicTable_Pawnmon_whiteF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
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
        .frontAnimFrames = sAnims_Penguinmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Penguinmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Penguinmon,
        .shinyPalette = gMonShinyPalette_Penguinmon,
        .iconSprite = gMonIcon_Penguinmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Penguinmon)
        OVERWORLD(
            sPicTable_Penguinmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Mantyke,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Mantyke,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Mantyke,
        .shinyPalette = gMonShinyPalette_Mantyke,
        .iconSprite = gMonIcon_Mantyke,
        .iconPalIndex = 0,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Mantyke)
        OVERWORLD(
            sPicTable_Mantyke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mantyke,
            gShinyOverworldPalette_Mantyke
        )
        .levelUpLearnset = sMantykeLevelUpLearnset,
        .teachableLearnset = sMantykeTeachableLearnset,
        .eggMoveLearnset = sMantykeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPECIFIC_MON_IN_PARTY, SPECIES_PAWNMON_BLACK, SPECIES_PETITMAMON}),
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
        .frontAnimFrames = sAnims_Petitmamon,
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
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Petitmamon)
        OVERWORLD(
            sPicTable_Petitmamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Phascomon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Phascomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Phascomon,
        .shinyPalette = gMonShinyPalette_Phascomon,
        .iconSprite = gMonIcon_Phascomon,
        .iconPalIndex = 0,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Phascomon)
        OVERWORLD(
            sPicTable_Phascomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Pillomon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pillomon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pillomon,
        .shinyPalette = gMonShinyPalette_Pillomon,
        .iconSprite = gMonIcon_Pillomon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pillomon)
        OVERWORLD(
            sPicTable_Pillomon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Pomumon,
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
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pomumon)
        OVERWORLD(
            sPicTable_Pomumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pomumon,
            gShinyOverworldPalette_Pomumon
        )
        OVERWORLD_FEMALE(
            sPicTable_PomumonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_PomumonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PomumonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_PomumonMega,
        .shinyPalette = gMonShinyPalette_PomumonMega,
        .iconSprite = gMonIcon_PomumonMega,
        .iconPalIndex = 0,
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Pomumon)
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
        .evYield_HP = 3,
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
        .frontAnimFrames = sAnims_Pulsemon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Pulsemon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pulsemon,
        .shinyPalette = gMonShinyPalette_Pulsemon,
        .iconSprite = gMonIcon_Pulsemon,
        .iconPalIndex = 0,
        SHADOW(3, -2, SHADOW_SIZE_M)
        FOOTPRINT(Pulsemon)
        OVERWORLD(
            sPicTable_Pulsemon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Renamon,
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
        SHADOW(7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Renamon)
        OVERWORLD(
            sPicTable_Renamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Renamon,
            gShinyOverworldPalette_Renamon
        )
        OVERWORLD_FEMALE(
            sPicTable_RenamonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Rokusho,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rokusho,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Rokusho,
        .shinyPalette = gMonShinyPalette_Rokusho,
        .iconSprite = gMonIcon_Rokusho,
        .iconPalIndex = 2,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rokusho)
        OVERWORLD(
            sPicTable_Rokusho,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rokusho,
            gShinyOverworldPalette_Rokusho
        )
        .levelUpLearnset = sRokushoLevelUpLearnset,
        .teachableLearnset = sRokushoTeachableLearnset,
        .eggMoveLearnset = sRokushoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_USE_MOVE_TWENTY_TIMES, MOVE_PSYSHIELD_BASH, SPECIES_WYRDEER}),
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
        .frontAnimFrames = sAnims_Wyrdeer,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wyrdeer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wyrdeer,
        .shinyPalette = gMonShinyPalette_Wyrdeer,
        .iconSprite = gMonIcon_Wyrdeer,
        .iconPalIndex = 2,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Wyrdeer)
        OVERWORLD(
            sPicTable_Wyrdeer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Ryudamon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Ryudamon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Ryudamon,
        .shinyPalette = gMonShinyPalette_Ryudamon,
        .iconSprite = gMonIcon_Ryudamon,
        .iconPalIndex = 1,
        SHADOW(6, 7, SHADOW_SIZE_S)
        FOOTPRINT(Ryudamon)
        OVERWORLD(
            sPicTable_Ryudamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Shamanmon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Shamanmon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Shamanmon,
        .shinyPalette = gMonShinyPalette_Shamanmon,
        .iconSprite = gMonIcon_Shamanmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(-3, 4, SHADOW_SIZE_M)
        FOOTPRINT(Shamanmon)
        OVERWORLD(
            sPicTable_Shamanmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Yukiagumon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Yukiagumon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Yukiagumon,
        .shinyPalette = gMonShinyPalette_Yukiagumon,
        .iconSprite = gMonIcon_Yukiagumon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-4, 7, SHADOW_SIZE_L)
        FOOTPRINT(Yukiagumon)
        OVERWORLD(
            sPicTable_Yukiagumon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Yukiagumon_06,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Yukiagumon_06,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Yukiagumon_06,
        .shinyPalette = gMonShinyPalette_Yukiagumon_06,
        .iconSprite = gMonIcon_Yukiagumon_06,
        .iconPalIndex = 2,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Yukiagumon_06)
        OVERWORLD(
            sPicTable_Yukiagumon_06,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Icegobimon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Icegobimon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Icegobimon,
        .shinyPalette = gMonShinyPalette_Icegobimon,
        .iconSprite = gMonIcon_Icegobimon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Icegobimon)
        OVERWORLD(
            sPicTable_Icegobimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Solarmon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Solarmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Solarmon,
        .shinyPalette = gMonShinyPalette_Solarmon,
        .iconSprite = gMonIcon_Solarmon,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Solarmon)
        OVERWORLD(
            sPicTable_Solarmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Sounbirdmon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sounbirdmon,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Sounbirdmon,
        .shinyPalette = gMonShinyPalette_Sounbirdmon,
        .iconSprite = gMonIcon_Sounbirdmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sounbirdmon)
        OVERWORLD(
            sPicTable_Sounbirdmon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Sounbirdmon,
            gShinyOverworldPalette_Sounbirdmon
        )
        .levelUpLearnset = sSounbirdmonLevelUpLearnset,
        .teachableLearnset = sSounbirdmonTeachableLearnset,
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
        .frontAnimFrames = sAnims_Spadamon,
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
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Spadamon)
        OVERWORLD(
            sPicTable_Spadamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_SpadamonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SpadamonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_SpadamonMega,
        .shinyPalette = gMonShinyPalette_SpadamonMega,
        .iconSprite = gMonIcon_SpadamonMega,
        .iconPalIndex = 1,
        SHADOW(-1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Spadamon)
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
        .frontAnimFrames = sAnims_Sparrowmon,
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
        SHADOW(2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Sparrowmon)
        OVERWORLD(
            sPicTable_Sparrowmon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Starmon_2010,
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
        SHADOW(1, 17, SHADOW_SIZE_L)
        FOOTPRINT(Starmon_2010)
        OVERWORLD(
            sPicTable_Starmon_2010,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
        .frontAnimFrames = sAnims_Strabimon,
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
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Strabimon)
        OVERWORLD(
            sPicTable_Strabimon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
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
