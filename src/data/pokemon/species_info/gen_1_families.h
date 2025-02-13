#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_ARGOMON_F
    [SPECIES_ARGOMON_F] =
    {
        .baseHP        = 8,
        .baseAttack    = 8,
        .baseDefense   = 8,
        .baseSpeed     = 10,
        .baseSpAttack  = 9,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Argomon"),
        .cryId = CRY_ARGOMON_F,
        .natDexNum = NATIONAL_DEX_ARGOMON_F,
        .categoryName = _("Algorithm"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Argomon has a habit of finding and \n"
            "converging at places with high data\n"
            "capacity. They generally gather up\n"
            "and become a horde quickly."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Argomon_f,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .frontAnimFrames = sAnims_Argomon_f,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Argomon_f,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 32) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Argomon_f,
        .shinyPalette = gMonShinyPalette_Argomon_f,
        .iconSprite = gMonIcon_Argomon_f,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Argomon_f)
        OVERWORLD(
            sPicTable_Bulbasaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bulbasaur,
            gShinyOverworldPalette_Bulbasaur
        )
        .levelUpLearnset = sArgomon_fLevelUpLearnset,
        .teachableLearnset = sArgomon_fTeachableLearnset,
        .eggMoveLearnset = sBulbasaurEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_ARGOMON_IT}),
    },

    [SPECIES_BOMBMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 15,
        .baseDefense   = 8,
        .baseSpeed     = 8,
        .baseSpAttack  = 15,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE, 
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bombmon"),
        .cryId = CRY_BOMBMON,
        .natDexNum = NATIONAL_DEX_BOMBMON,
        .categoryName = _("Bomb"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Bombmon is a short tempered Digimon\n"
            "with a tendency to blow up on short\n"
            "notice. Although the explosions are \n"
            "particularly weak."),
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bombmon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = sAnims_Bombmon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Bombmon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Bombmon,
        .shinyPalette = gMonShinyPalette_Bombmon,
        .iconSprite = gMonIcon_Bombmon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(-1, 3, SHADOW_SIZE_L)
        FOOTPRINT(Bombmon)
        OVERWORLD(
            sPicTable_Ivysaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ivysaur,
            gShinyOverworldPalette_Ivysaur
        )
        .levelUpLearnset = sBombmonLevelUpLearnset,
        .teachableLearnset = sBombmonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_MISSIMON}),
    },

    [SPECIES_BOMMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 13,
        .baseDefense   = 8,
        .baseSpeed     = 9,
        .baseSpAttack  = 13,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE, 
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_AFTERMATH, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Bomb"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Bommons tail ignites from the moment it's\n"
            "born but because of it's fast growth it\n"
            "is said that no one has ever seen what\n"
            "happens when it's tail goes out."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_Venusaur,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Bommon,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Venusaur,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Bommon,
        .shinyPalette = gMonShinyPalette_Bommon,
        .iconSprite = gMonIcon_Bommon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_VenusaurF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_VenusaurF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        OVERWORLD(
            sPicTable_Venusaur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venusaur,
            gShinyOverworldPalette_Venusaur
        )
        OVERWORLD_FEMALE(
            sPicTable_VenusaurF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_MISSIMON}),
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
        
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BOMMON_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_THICK_FAT, ABILITY_THICK_FAT, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON_MEGA,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Seed"),
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING(
            "In order to support its flower, which\n"
            "has grown larger due to Mega Evolution,\n"
            "its back and legs have become stronger."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_BommonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_BommonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BommonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_BommonMega,
        .shinyPalette = gMonShinyPalette_BommonMega,
        .iconSprite = gMonIcon_BommonMega,
        .iconPalIndex = 4,
        SHADOW(2, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BOMMON_GMAX] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS, TYPE_POISON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bommon"),
        .cryId = CRY_BOMMON,
        .natDexNum = NATIONAL_DEX_BOMMON,
        .categoryName = _("Seed"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Spits big amounts of pollen like a volcano.\n"
            "Breathing too much of it causes fainting.\n"
            "In battle, it swings around two thick vines\n"
            "that can easily topple 10-story buildings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        .frontPic = gMonFrontPic_VenusaurGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_VenusaurGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VenusaurGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VenusaurGmax,
        .shinyPalette = gMonShinyPalette_VenusaurGmax,
        .iconSprite = gMonIcon_VenusaurGmax,
        .iconPalIndex = 0,
        SHADOW(2, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Bommon)
        .isGigantamax = TRUE,
        .levelUpLearnset = sBommonLevelUpLearnset,
        .teachableLearnset = sBommonTeachableLearnset,
        .formSpeciesIdTable = sBommonFormSpeciesIdTable,
        .formChangeTable = sBommonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ARGOMON_F

#if P_FAMILY_BOTAMON
    [SPECIES_BOTAMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 7,
        .baseDefense   = 12,
        .baseSpeed     = 9,
        .baseSpAttack  = 8,
        .baseSpDefense = 15,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SIMPLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Botamon"),
        .cryId = CRY_BOTAMON,
        .natDexNum = NATIONAL_DEX_BOTAMON,
        .categoryName = _("Fuzz"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Botamon's surface is made up of slime but\n"
            "it has also grown a thick black fuzz atop\n"
            "the slime. It is unable to battle as it's\n"
            "so freshly hatched."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Botamon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Botamon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Botamon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Botamon,
        .shinyPalette = gMonShinyPalette_Botamon,
        .iconSprite = gMonIcon_Botamon,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Botamon)
        OVERWORLD(
            sPicTable_Charmander,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmander,
            gShinyOverworldPalette_Charmander
        )
        .levelUpLearnset = sBotamonLevelUpLearnset,
        .teachableLearnset = sBotamonTeachableLearnset,
        .eggMoveLearnset = sCharmanderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_BUDMON},
                                {EVO_ATTACK, 6, SPECIES_WANYAMON},
                                {EVO_SPATTACK, 6, SPECIES_PAGUMON},
                                {EVO_SPEED, 7, SPECIES_PINAMON},
                                {EVO_LEVEL, 5, SPECIES_KOROMON}),                                
    },

    [SPECIES_CHIBICKMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 9,
        .baseDefense   = 7,
        .baseSpeed     = 9,
        .baseSpAttack  = 12,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_SIMPLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Chibickmon"),
        .cryId = CRY_CHIBICKMON,
        .natDexNum = NATIONAL_DEX_CHIBICKMON,
        .categoryName = _("Social"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Chibickmon is a socialable digimon with\n"
            "a deep desire to help out. Large groups of\n"
            "them will appear to help out before knowing\n"
            "what needs to be done."),
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Charmeleon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = sAnims_Charmeleon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Charmeleon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Chibickmon,
        .shinyPalette = gMonShinyPalette_Chibickmon,
        .iconSprite = gMonIcon_Chibickmon,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Charmeleon)
        OVERWORLD(
            sPicTable_Charmeleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charmeleon,
            gShinyOverworldPalette_Charmeleon
        )
        .levelUpLearnset = sCharmeleonLevelUpLearnset,
        .teachableLearnset = sCharmeleonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 6, SPECIES_PICKMON_RED},
                                {EVO_DEFENSE, 5, SPECIES_PICKMON_SILVER},
                                {EVO_LEVEL, 6, SPECIES_PICKMON_WHITE}),
    },

    [SPECIES_CHIBOMON] =
    {
        .baseHP        = 14,
        .baseAttack    = 9,
        .baseDefense   = 10,
        .baseSpeed     = 7,
        .baseSpAttack  = 11,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Dragon"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Chibomon is said to have the potential to\n"
            "digivolve into every single dragon digimon.\n"
            "This make's it extremely valuable for Tamers\n"
            "and others looking to use it's talents."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_Chibomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = sAnims_Charizard,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Charizard,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Chibomon,
        .shinyPalette = gMonShinyPalette_Chibomon,
        .iconSprite = gMonIcon_Chibomon,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        OVERWORLD(
            sPicTable_Charizard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Charizard,
            gShinyOverworldPalette_Charizard
        )
        .levelUpLearnset = sCharizardLevelUpLearnset,
        .teachableLearnset = sCharizardTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_DEMIVEEMON}),
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,
        .formChangeTable = sCharizardFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHIBOMON_MEGA_X] =
    {
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON_MEGA_X,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "The overwhelming power that fills its\n"
            "entire body causes it to turn black\n"
            "and creates intense blue flames."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ChibomonMegaX,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ChibomonMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChibomonMegaX,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_ChibomonMegaX,
        .shinyPalette = gMonShinyPalette_ChibomonMegaX,
        .iconSprite = gMonIcon_ChibomonMegaX,
        .iconPalIndex = 0,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },

    [SPECIES_CHIBOMON_MEGA_Y] =
    {
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON_MEGA_Y,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "Its bond with its Trainer is the source\n"
            "of its power. It boasts speed and\n"
            "maneuverability greater than that of a\n"
            "jet fighter."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_ChibomonMegaY,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ChibomonMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChibomonMegaY,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_ChibomonMegaY,
        .shinyPalette = gMonShinyPalette_ChibomonMegaY,
        .iconSprite = gMonIcon_ChibomonMegaY,
        .iconPalIndex = 0,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GMAX] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Chibomon"),
        .cryId = CRY_CHIBOMON,
        .natDexNum = NATIONAL_DEX_CHIBOMON,
        .categoryName = _("Flame"),
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The flame inside its body burns\n"
            "hotter than 3,700 degrees Fahrenheit.\n"
            "When Chibomon roars, that\n"
            "temperature climbs even higher."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        .frontPic = gMonFrontPic_CharizardGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CharizardGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CharizardGmax,
        .shinyPalette = gMonShinyPalette_CharizardGmax,
        .iconSprite = gMonIcon_CharizardGmax,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Charizard)
        .isGigantamax = TRUE,
        .levelUpLearnset = sChibomonLevelUpLearnset,
        .teachableLearnset = sChibomonTeachableLearnset,
        .formSpeciesIdTable = sChibomonFormSpeciesIdTable,
        .formChangeTable = sChibomonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BOTAMON

#if P_FAMILY_CONOMON
    [SPECIES_CONOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 11,
        .baseSpeed     = 7,
        .baseSpAttack  = 9,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MINUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Conomon"),
        .cryId = CRY_CONOMON,
        .natDexNum = NATIONAL_DEX_CONOMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Conomon is an extremely rare digimon born\n"
            "as a twin with Zerimon. Unlike the one horned\n"
            "Zerimon, the three horned conomon is\n"
            "relatively docile."),
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Squirtle,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Squirtle,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Squirtle,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Conomon,
        .shinyPalette = gMonShinyPalette_Conomon,
        .iconSprite = gMonIcon_Conomon,
        .iconPalIndex = 0,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Squirtle)
        OVERWORLD(
            sPicTable_Squirtle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Squirtle,
            gShinyOverworldPalette_Squirtle
        )
        .levelUpLearnset = sSquirtleLevelUpLearnset,
        .teachableLearnset = sSquirtleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_KOKOMON}),
        .eggMoveLearnset = sSquirtleEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_KOKOMON}),
    },

    [SPECIES_COTSUCOMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 7,
        .baseDefense   = 14,
        .baseSpeed     = 11,
        .baseSpAttack  = 8,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cotsucomon"),
        .cryId = CRY_COTSUCOMON,
        .natDexNum = NATIONAL_DEX_COTSUCOMON,
        .categoryName = _("Armour"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Cotsucomon are born wearing a leather\n"
            "cap. Although the cap looks strong\n"
            "it is actually very weak due to the\n"
            "soft material that makes it up."),
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wartortle,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Wartortle,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Wartortle,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Cotsucomon,
        .shinyPalette = gMonShinyPalette_Cotsucomon,
        .iconSprite = gMonIcon_Cotsucomon,
        .iconPalIndex = 2,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Wartortle)
        OVERWORLD(
            sPicTable_Wartortle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wartortle,
            gShinyOverworldPalette_Wartortle
        )
        .levelUpLearnset = sWartortleLevelUpLearnset,
        .teachableLearnset = sWartortleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_KAKKINMON}),
    },

    [SPECIES_CURIMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 11,
        .baseDefense   = 10,
        .baseSpeed     = 14,
        .baseSpAttack  = 7,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Energetic"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Even before hatching, Curimon is so \n"
            "energetic that it's Digi-Egg bounces.\n"
            "After hatcing, it will move around \n"
            "vigorously, making it hard to care for."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Curimon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .frontAnimFrames = sAnims_Blastoise,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 50 : 20,
        .backPic = gMonBackPic_Blastoise,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Curimon,
        .shinyPalette = gMonShinyPalette_Curimon,
        .iconSprite = gMonIcon_Curimon,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Blastoise)
        OVERWORLD(
            sPicTable_Blastoise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blastoise,
            gShinyOverworldPalette_Blastoise
        )
        .levelUpLearnset = sBlastoiseLevelUpLearnset,
        .teachableLearnset = sBlastoiseTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_GURIMON}),
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,
        .formChangeTable = sBlastoiseFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CURIMON_MEGA] =
    {
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 315 : 284,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON_MEGA,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Shellfish"),
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING(
            "The cannon on its back is as powerful\n"
            "as a tank gun. Its tough legs and back\n"
            "enable it to withstand the recoil from\n"
            "firing the cannon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_CurimonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CurimonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CurimonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_CurimonMega,
        .shinyPalette = gMonShinyPalette_CurimonMega,
        .iconSprite = gMonIcon_CurimonMega,
        .iconPalIndex = 2,
        SHADOW(4, 11, SHADOW_SIZE_L)
        FOOTPRINT(Blastoise)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sCurimonLevelUpLearnset,
        .teachableLearnset = sCurimonTeachableLearnset,
        .formSpeciesIdTable = sCurimonFormSpeciesIdTable,
        .formChangeTable = sCurimonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GMAX] =
    {
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Curimon"),
        .cryId = CRY_CURIMON,
        .natDexNum = NATIONAL_DEX_CURIMON,
        .categoryName = _("Shellfish"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "It's not very good at precision\n"
            "shooting. When attacking, it just fires\n"
            "its 31 cannons over and over and\n"
            "over."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_BlastoiseGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlastoiseGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BlastoiseGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_BlastoiseGmax,
        .shinyPalette = gMonShinyPalette_BlastoiseGmax,
        .iconSprite = gMonIcon_BlastoiseGmax,
        .iconPalIndex = 0,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Blastoise)
        .isGigantamax = TRUE,
        .levelUpLearnset = sCurimonLevelUpLearnset,
        .teachableLearnset = sCurimonTeachableLearnset,
        .formSpeciesIdTable = sCurimonFormSpeciesIdTable,
        .formChangeTable = sCurimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CONOMON

#if P_FAMILY_DATIRIMON
    [SPECIES_DATIRIMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 8,
        .baseDefense   = 10,
        .baseSpeed     = 6,
        .baseSpAttack  = 10,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Datirimon"),
        .cryId = CRY_DATIRIMON,
        .natDexNum = NATIONAL_DEX_DATIRIMON,
        .categoryName = _("Fruit"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Datirimon are born from the fruit of\n"
            "large trees. Legend has it that it will\n"
            "appear to those who have lost and\n"
            "regained their hope."),
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Caterpie,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Caterpie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Caterpie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Datirimon,
        .shinyPalette = gMonShinyPalette_Datirimon,
        .iconSprite = gMonIcon_Datirimon,
        .iconPalIndex = 1,
        SHADOW(4, 1, SHADOW_SIZE_S)
        FOOTPRINT(Caterpie)
        OVERWORLD(
            sPicTable_Caterpie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Caterpie,
            gShinyOverworldPalette_Caterpie
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDatirimonLevelUpLearnset,
        .teachableLearnset = sDatirimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 18, SPECIES_YOKOMON},
                                {EVO_ATTACK, 6, SPECIES_NEGAMON},
                                {EVO_SPDEFENSE, 7, SPECIES_MINOMON},
                                {EVO_LEVEL,  6, SPECIES_BUDMON}),
    },

    [SPECIES_DODOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 15,
        .baseSpeed     = 9,
        .baseSpAttack  = 8,
        .baseSpDefense = 13,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Dodomon"),
        .cryId = CRY_DODOMON,
        .natDexNum = NATIONAL_DEX_DODOMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Dodomon is a carrier of the X Antibody.\n"
            "It's whole fur is covered in something\n"
            "called Mithril Hair, providing it strong\n"
            "defensive capabilities from hatching."),
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Metapod,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 14,
        .frontAnimFrames = sAnims_Metapod,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Metapod,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dodomon,
        .shinyPalette = gMonShinyPalette_Dodomon,
        .iconSprite = gMonIcon_Dodomon,
        .iconPalIndex = 1,
        SHADOW(3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Metapod)
        OVERWORLD(
            sPicTable_Metapod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Metapod,
            gShinyOverworldPalette_Metapod
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sDodomonLevelUpLearnset,
        .teachableLearnset = sDodomonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 7, SPECIES_WANYAMON},
                                {EVO_LEVEL, 5, SPECIES_DORIMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define DOKIMON_EXP_YIELD 198
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define DOKIMON_EXP_YIELD 178
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define DOKIMON_EXP_YIELD 173
#else
    #define DOKIMON_EXP_YIELD 170
#endif

    [SPECIES_DOKIMON] =
    {
        .baseHP        = 13,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 12,
        .baseSpAttack  = 7,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dokimon"),
        .cryId = CRY_DOKIMON,
        .natDexNum = NATIONAL_DEX_DOKIMON,
        .categoryName = _("Healthy"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Dokimon is said to have been born from\n"
            "human vital data. It beats at a constant\n"
            "rhythm which seems to reflect the\n"
            "heartbeat of the person holding it."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Butterfree,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Butterfree,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .backPic = gMonBackPic_Butterfree,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Dokimon,
        .shinyPalette = gMonShinyPalette_Dokimon,
        .iconSprite = gMonIcon_Dokimon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ButterfreeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_ButterfreeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Butterfree)
        OVERWORLD(
            sPicTable_Butterfree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Butterfree,
            gShinyOverworldPalette_Butterfree
        )
        OVERWORLD_FEMALE(
            sPicTable_ButterfreeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sButterfreeLevelUpLearnset,
        .teachableLearnset = sButterfreeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL,  4, SPECIES_BIBIMON}),
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,
        .formChangeTable = sButterfreeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 45,
        .expYield = DOKIMON_EXP_YIELD,
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dokimon"),
        .cryId = CRY_DOKIMON,
        .natDexNum = NATIONAL_DEX_DOKIMON,
        .categoryName = _("Butterfly"),
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Once it has opponents trapped in a\n"
            "tornado that could blow away a 10-\n"
            "ton truck, it finishes them off with\n"
            "its poisonous scales."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_ButterfreeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ButterfreeGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ButterfreeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ButterfreeGmax,
        .shinyPalette = gMonShinyPalette_ButterfreeGmax,
        .iconSprite = gMonIcon_ButterfreeGmax,
        .iconPalIndex = 0,
        SHADOW(-4, 15, SHADOW_SIZE_S)
        FOOTPRINT(Butterfree)
        .isGigantamax = TRUE,
        .levelUpLearnset = sDokimonLevelUpLearnset,
        .teachableLearnset = sDokimonTeachableLearnset,
        .formSpeciesIdTable = sDokimonFormSpeciesIdTable,
        .formChangeTable = sDokimonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DATIRIMON

#if P_FAMILY_FUFUMON
    [SPECIES_FUFUMON] =
    {
        .baseHP        = 7,
        .baseAttack    = 13,
        .baseDefense   = 9,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Fufumon"),
        .cryId = CRY_FUFUMON,
        .natDexNum = NATIONAL_DEX_FUFUMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Fufumon's body is so light that it floats\n"
            "through the air from birth. But due to it's\n"
            "slow floating, it is an easy target for \n"
            "attacks from predators."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weedle,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 13,
        .frontAnimFrames = sAnims_Weedle,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Weedle,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Weedle,
        .shinyPalette = gMonShinyPalette_Weedle,
        .iconSprite = gMonIcon_Weedle,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Weedle)
        OVERWORLD(
            sPicTable_Weedle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weedle,
            gShinyOverworldPalette_Weedle
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sFufumonLevelUpLearnset,
        .teachableLearnset = sFufumonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL,  5, SPECIES_KYOKYOMON}),
    },

    [SPECIES_JYARIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 12,
        .baseDefense   = 9,
        .baseSpeed     = 8,
        .baseSpAttack  = 14,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_BLAZE, ABILITY_GUTS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Jyarimon"),
        .cryId = CRY_JYARIMON,
        .natDexNum = NATIONAL_DEX_JYARIMON,
        .categoryName = _("Fire Dragon"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Jyarimon are an incredibly scarce Digimon\n"
            "with the power to evolve into a strong \n"
            "Dragon Digimon. At this stage however it\n"
            "only has tiny fangs."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kakuna,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(24, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Kakuna,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Kakuna,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(32, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Jyarimon,
        .shinyPalette = gMonShinyPalette_Jyarimon,
        .iconSprite = gMonIcon_Jyarimon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Kakuna)
        OVERWORLD(
            sPicTable_Kakuna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kakuna,
            gShinyOverworldPalette_Kakuna
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sJyarimonLevelUpLearnset,
        .teachableLearnset = sJyarimonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_GIGIMON}),
    },

#define KEEMON_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

    [SPECIES_KEEMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 7,
        .baseDefense   = 9,
        .baseSpeed     = 11,
        .baseSpAttack  = 14,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Keemon"),
        .cryId = CRY_KEEMON,
        .natDexNum = NATIONAL_DEX_KEEMON,
        .categoryName = _("Evil Eyes"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Keemon is always seen scowling even\n"
            "though it is very young. It hates being \n"
            "crowded by others and opts for living as\n"
            "a hermit."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beedrill,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .frontAnimFrames = sAnims_Beedrill,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backPic = gMonBackPic_Beedrill,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Keemon,
        .shinyPalette = gMonShinyPalette_Keemon,
        .iconSprite = gMonIcon_Keemon,
        .iconPalIndex = 2,
        SHADOW(4, 15, SHADOW_SIZE_M)
        FOOTPRINT(Beedrill)
        OVERWORLD(
            sPicTable_Beedrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beedrill,
            gShinyOverworldPalette_Beedrill
        )
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_YAAMON}),
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,
        .formChangeTable = sBeedrillFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KEEMON_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = KEEMON_ATTACK + 70,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 248 : 223,
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Keemon"),
        .cryId = CRY_KEEMON_MEGA,
        .natDexNum = NATIONAL_DEX_KEEMON,
        .categoryName = _("Poison Bee"),
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING(
            "Its legs have become poison stingers.\n"
            "It stabs its prey repeatedly with the\n"
            "stingers on its limbs, dealing the final\n"
            "blow with the stinger on its rear."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_KeemonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_KeemonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_KeemonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_KeemonMega,
        .shinyPalette = gMonShinyPalette_KeemonMega,
        .iconSprite = gMonIcon_KeemonMega,
        .iconPalIndex = 2,
        SHADOW(1, 14, SHADOW_SIZE_S)
        FOOTPRINT(Beedrill)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKeemonLevelUpLearnset,
        .teachableLearnset = sKeemonTeachableLearnset,
        .formSpeciesIdTable = sKeemonFormSpeciesIdTable,
        .formChangeTable = sKeemonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_FUFUMON

#if P_FAMILY_KETOMON
    [SPECIES_KETOMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 9,
        .baseSpeed     = 10,
        .baseSpAttack  = 7,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ketomon"),
        .cryId = CRY_KETOMON,
        .natDexNum = NATIONAL_DEX_KETOMON,
        .categoryName = _("Large Eyes"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Ketomon's large eye's are its \n"
            "defining characteristic feature. They\n"
            "give it the ability to discern the\n"
            "nature of Digimon."),
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = sAnims_Pidgey,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_STRETCH,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 0,
        .backPic = gMonBackPic_Pidgey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Ketomon,
        .shinyPalette = gMonShinyPalette_Ketomon,
        .iconSprite = gMonIcon_Ketomon,
        .iconPalIndex = 0,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Pidgey)
        OVERWORLD(
            sPicTable_Pidgey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgey,
            gShinyOverworldPalette_Pidgey
        )
        .levelUpLearnset = sPidgeyLevelUpLearnset,
        .teachableLearnset = sPidgeyTeachableLearnset,
        .eggMoveLearnset = sPidgeyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_CHAPMON},
                                {EVO_LEVEL, 5, SPECIES_HOPMON}),
    },

    [SPECIES_KURAMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 7,
        .baseDefense   = 7,
        .baseSpeed     = 20,
        .baseSpAttack  = 8,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_DARK),
        .attribute = TYPE_UKNOWN,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Kuramon"),
        .cryId = CRY_KURAMON,
        .natDexNum = NATIONAL_DEX_KURAMON,
        .categoryName = _("Virus"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Kuramon is said to have been born from\n"
            "humanities malicious nature from the\n"
            "internet. It multiplies incredibly fast,\n"
            "consuming all data it finds."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pidgeotto,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = sAnims_Pidgeotto,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Pidgeotto,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kuramon,
        .shinyPalette = gMonShinyPalette_Kuramon,
        .iconSprite = gMonIcon_Kuramon,
        .iconPalIndex = 0,
        SHADOW(-4, 6, SHADOW_SIZE_M)
        FOOTPRINT(Pidgeotto)
        OVERWORLD(
            sPicTable_Pidgeotto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeotto,
            gShinyOverworldPalette_Pidgeotto
        )
        .levelUpLearnset = sPidgeottoLevelUpLearnset,
        .teachableLearnset = sPidgeottoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 8, SPECIES_ARCADIAMON_IT},
                                {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                                {EVO_LEVEL, 6, SPECIES_TSUMEMON}),
    },

#define LEAFMON_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

    [SPECIES_LEAFMON] =
    {
        .baseHP        = 14,
        .baseAttack    = 8,
        .baseDefense   = 8,
        .baseSpeed     = 10,
        .baseSpAttack  = 8,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_OVERGROW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Leafmon"),
        .cryId = CRY_LEAFMON,
        .natDexNum = NATIONAL_DEX_LEAFMON,
        .categoryName = _("Leaf"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Leafmons body is almost identical to the\n"
            "make-up of a plant. It has a leaf shaped\n"
            "tail that is use's to protect itself \n"
            "from the elements."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Leafmon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .frontAnimFrames = sAnims_Pidgeot,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FRONT_FLIP : ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backPic = gMonBackPic_Pidgeot,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Leafmon,
        .shinyPalette = gMonShinyPalette_Leafmon,
        .iconSprite = gMonIcon_Leafmon,
        .iconPalIndex = 0,
        SHADOW(-7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Pidgeot)
        OVERWORLD(
            sPicTable_Pidgeot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pidgeot,
            gShinyOverworldPalette_Pidgeot
        )
        .levelUpLearnset = sPidgeotLevelUpLearnset,
        .teachableLearnset = sPidgeotTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_MINOMON}),
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,
        .formChangeTable = sPidgeotFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LEAFMON_MEGA] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = LEAFMON_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 290 : 261,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Leafmon"),
        .cryId = CRY_LEAFMON_MEGA,
        .natDexNum = NATIONAL_DEX_LEAFMON,
        .categoryName = _("Bird"),
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING(
            "With its muscular strength now greatly\n"
            "increased, it can fly continuously\n"
            "for two weeks without resting."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LeafmonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LeafmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_LeafmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_LeafmonMega,
        .shinyPalette = gMonShinyPalette_LeafmonMega,
        .iconSprite = gMonIcon_LeafmonMega,
        .iconPalIndex = 0,
        SHADOW(-7, 19, SHADOW_SIZE_M)
        FOOTPRINT(Pidgeot)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sLeafmonLevelUpLearnset,
        .teachableLearnset = sLeafmonTeachableLearnset,
        .formSpeciesIdTable = sLeafmonFormSpeciesIdTable,
        .formChangeTable = sLeafmonFormChangeTable,
    },
#endif
#endif //P_FAMILY_KETOMON

#if P_FAMILY_CHOROMON
    [SPECIES_CHOROMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 10,
        .baseSpeed     = 12,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_STEEL, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_VOLT_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Choromon"),
        .cryId = CRY_CHOROMON,
        .natDexNum = NATIONAL_DEX_CHOROMON,
        .categoryName = _("Darting"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Choromon's is mistaken to be a very.\n"
            "energetic digimon however that is\n"
            "because of it's simple programming\n"
            "making it move whenever there is light."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Rattata,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 13,
        .frontAnimFrames = sAnims_Rattata,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RAPID_H_HOPS : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Rattata,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Choromon,
        .shinyPalette = gMonShinyPalette_Choromon,
        .iconSprite = gMonIcon_Choromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RattataF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_RattataF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Rattata)
        OVERWORLD(
            sPicTable_Rattata,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rattata,
            gShinyOverworldPalette_Rattata
        )
        OVERWORLD_FEMALE(
            sPicTable_RattataF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRattataLevelUpLearnset,
        .teachableLearnset = sRattataTeachableLearnset,
        .eggMoveLearnset = sRattataEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 8, SPECIES_KOZENIMON},
                                {EVO_SPATTACK, 7, SPECIES_PAGUMON},
                                {EVO_LEVEL, 4, SPECIES_KAPURIMON}),  
        .formSpeciesIdTable = sRattataFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_RATICATE}),
    },

    [SPECIES_MOKUMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 9,
        .baseDefense   = 8,
        .baseSpeed     = 13,
        .baseSpAttack  = 12,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_FIRE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Smoke"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Mokumon is a unique digimon who lacks a\n"
            "wire-frame model, leaving it's core\n"
            "unprotected. It use's the smoke from\n"
            "burning it's core to obscure itself."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raticate,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .frontAnimFrames = sAnims_Raticate,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FIGURE_8 : ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Raticate,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Raticate,
        .shinyPalette = gMonShinyPalette_Raticate,
        .iconSprite = gMonIcon_Raticate,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RaticateF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_RaticateF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_Raticate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raticate,
            gShinyOverworldPalette_Raticate
        )
        OVERWORLD_FEMALE(
            sPicTable_RaticateF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRaticateLevelUpLearnset,
        .teachableLearnset = sRaticateTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 17, SPECIES_YAAMON},
                                {EVO_SPEED, 7, SPECIES_KOROMON},
                                {EVO_DEFENSE, 7, SPECIES_KAPURIMON},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNMON},
                                {EVO_LEVEL, 6, SPECIES_DEMMERAMON}), 
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },

#if P_ALOLAN_FORMS
    [SPECIES_RATTATA_ALOLA] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 51 : 57,
        .evYield_Speed = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Choromon"),
        .cryId = CRY_CHOROMON,
        .natDexNum = NATIONAL_DEX_CHOROMON,
        .categoryName = _("Mouse"),
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING(
            "With its incisors, it gnaws through doors\n"
            "and infiltrates people's homes.\n"
            "Then, with a twitch of its whiskers,\n"
            "it steals whatever food it finds."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RattataAlola,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_RattataAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RattataAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RattataAlola,
        .shinyPalette = gMonShinyPalette_RattataAlola,
        .iconSprite = gMonIcon_RattataAlola,
        .iconPalIndex = 2,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rattata)
        OVERWORLD(
            sPicTable_RattataAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RattataAlola,
            gShinyOverworldPalette_RattataAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRattataAlolaLevelUpLearnset,
        .teachableLearnset = sRattataAlolaTeachableLearnset,
        .eggMoveLearnset = sRattataAlolaEggMoveLearnset,
        .formSpeciesIdTable = sRattataFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 20, SPECIES_RATICATE_ALOLA},
                                {EVO_NONE, 0, SPECIES_RATICATE_ALOLA_TOTEM}),
    },

    [SPECIES_RATICATE_ALOLA] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 255,
        .description = gRaticateAlolaPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaticateAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RaticateAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaticateAlola,
        .shinyPalette = gMonShinyPalette_RaticateAlola,
        .iconSprite = gMonIcon_RaticateAlola,
        .iconPalIndex = 2,
        SHADOW(-4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_RaticateAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaticateAlola,
            gShinyOverworldPalette_RaticateAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRaticateAlolaLevelUpLearnset,
        .teachableLearnset = sRaticateAlolaTeachableLearnset,
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },

    [SPECIES_RATICATE_ALOLA_TOTEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_NORMAL),
        .catchRate = 127,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mokumon"),
        .cryId = CRY_MOKUMON,
        .natDexNum = NATIONAL_DEX_MOKUMON,
        .categoryName = _("Mouse"),
        .height = 14,
        .weight = 1050,
        .description = gRaticateAlolaPokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaticateAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RaticateAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaticateAlola,
        .shinyPalette = gMonShinyPalette_RaticateAlola,
        .iconSprite = gMonIcon_RaticateAlola,
        .iconPalIndex = 2,
        SHADOW(-4, 3, SHADOW_SIZE_L)
        FOOTPRINT(Raticate)
        OVERWORLD(
            sPicTable_RaticateAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaticateAlola,
            gShinyOverworldPalette_RaticateAlola
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sRaticateAlolaLevelUpLearnset,
        .teachableLearnset = sRaticateAlolaTeachableLearnset,
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CHOROMON

#if P_FAMILY_NYOKIMON
    [SPECIES_NYOKIMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 7,
        .baseDefense   = 10,
        .baseSpeed     = 9,
        .baseSpAttack  = 9,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Nyokimon"),
        .cryId = CRY_NYOKIMON,
        .natDexNum = NATIONAL_DEX_NYOKIMON,
        .categoryName = _("Seed"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Nyokimon is covered in a transparent \n"
            "tissue. Inside that tissue, it has a very\n"
            "similiar body to Botamon. Many believe\n"
            "this make's it a cousin to Botamon."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spearow,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Spearow,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RISING_WOBBLE : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Spearow,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Nyokimon,
        .shinyPalette = gMonShinyPalette_Nyokimon,
        .iconSprite = gMonIcon_Nyokimon,
        .iconPalIndex = 0,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Spearow)
        OVERWORLD(
            sPicTable_Spearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Spearow,
            gShinyOverworldPalette_Spearow
        )
        .levelUpLearnset = sSpearowLevelUpLearnset,
        .teachableLearnset = sSpearowTeachableLearnset,
        .eggMoveLearnset = sSpearowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 18, SPECIES_MONIMON},
                                {EVO_DEFENSE, 7, SPECIES_BUDMON},
                                {EVO_SPEED, 7, SPECIES_TANEMON},
                                {EVO_SPATTACK, 7, SPECIES_TORBALLMON},
                                {EVO_LEVEL, 7, SPECIES_YOKOMON}),
    },

    [SPECIES_PABUMON] =
    {
        .baseHP        = 5,
        .baseAttack    = 6,
        .baseDefense   = 5,
        .baseSpeed     = 10,
        .baseSpAttack  = 7,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_STICKY_HOLD, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Pabumon"),
        .cryId = CRY_PABUMON,
        .natDexNum = NATIONAL_DEX_PABUMON,
        .categoryName = _("Slime"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pabumon is well known for being a very\n"
            "expressive digimon. It's surface has not\n"
            "hardened yet giving it very little\n"
            "defensive power."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Fearow,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Pabumon,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Pabumon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pabumon,
        .shinyPalette = gMonShinyPalette_Pabumon,
        .iconSprite = gMonIcon_Pabumon,
        .iconPalIndex = 0,
        SHADOW(0, 17, SHADOW_SIZE_M)
        FOOTPRINT(Fearow)
        OVERWORLD(
            sPicTable_Fearow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Fearow,
            gShinyOverworldPalette_Fearow
        )
        .levelUpLearnset = sFearowLevelUpLearnset,
        .teachableLearnset = sFearowTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_YOKOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_SPATTACK, 6, SPECIES_TANEMON},
                                {EVO_LEVEL,  6, SPECIES_MOTIMON}),
    },
#endif //P_FAMILY_NYOKIMON

#if P_FAMILY_PAFUMON
    [SPECIES_PAFUMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 7,
        .baseDefense   = 7,
        .baseSpeed     = 13,
        .baseSpAttack  = 8,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_GHOST),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pafumon"),
        .cryId = CRY_PAFUMON,
        .natDexNum = NATIONAL_DEX_PAFUMON,
        .categoryName = _("Spirit"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pafumon possesses a light translucent\n"
            "body, meaning it is constantly \n"
            "drifting through the air. It dislikes\n"
            "fighting a lot."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ekans,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Ekans,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Ekans,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pafumon,
        .shinyPalette = gMonShinyPalette_Pafumon,
        .iconSprite = gMonIcon_Pafumon,
        .iconPalIndex = 2,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Ekans)
        OVERWORLD(
            sPicTable_Ekans,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ekans,
            gShinyOverworldPalette_Ekans
        )
        .levelUpLearnset = sEkansLevelUpLearnset,
        .teachableLearnset = sEkansTeachableLearnset,
        .eggMoveLearnset = sEkansEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_KYAROMON}),
    },

    [SPECIES_PAOMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 11,
        .baseDefense   = 7,
        .baseSpeed     = 12,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Paomon"),
        .cryId = CRY_PAOMON,
        .natDexNum = NATIONAL_DEX_PAOMON,
        .categoryName = _("Artificial"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Paomon is an artificial digimon that was\n"
            "created for aesthetic reasons. Rumours \n"
            "are that it was created between groups\n"
            "from Shanghai, Taiwan and Okinawa."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        .frontPic = gMonFrontPic_Paomon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 1,
        .frontAnimFrames = sAnims_Arbok,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Arbok,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Paomon,
        .shinyPalette = gMonShinyPalette_Paomon,
        .iconSprite = gMonIcon_Paomon,
        .iconPalIndex = 2,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Arbok)
        OVERWORLD(
            sPicTable_Arbok,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Arbok,
            gShinyOverworldPalette_Arbok
        )
        .levelUpLearnset = sArbokLevelUpLearnset,
        .teachableLearnset = sArbokTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_XIAOMON}),
    },
#endif //P_FAMILY_PAFUMON

#if P_FAMILY_PETITMON
#if P_GEN_2_CROSS_EVOS

    [SPECIES_GUILMON_X] =
    {
        .baseHP        = 62,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 53,
        .baseSpAttack  = 58,
        .baseSpDefense = 64,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_VIRUS,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_BLAZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Guilmon"),
        .cryId = CRY_GUILMON_X,
        .natDexNum = NATIONAL_DEX_GUILMON_X,
        .categoryName = _("X Antibody"),
        .height = 15,
        .weight = 383,
        .description = COMPOUND_STRING(
            "Guilmon X has grown and accepted and\n"
            "contained its power. This has made it less\n"
            "destructive however this realisation and\n"
            "growth makes it a much more formidable foe."),
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guilmon_x,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 14,
        .frontAnimFrames = sAnims_Pichu,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Pichu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Pichu,
        .shinyPalette = gMonShinyPalette_Pichu,
        .iconSprite = gMonIcon_Pichu,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pichu)
        OVERWORLD(
            sPicTable_Pichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pichu,
            gShinyOverworldPalette_Pichu
        )
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .formSpeciesIdTable = sPichuFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEXDORUMON}),
    },

    [SPECIES_GUILMON_X_SPIKY_EARED] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 15,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 41 : 42,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Guilmon"),
        .cryId = CRY_GUILMON_X,
        .natDexNum = NATIONAL_DEX_GUILMON_X,
        .categoryName = _("Tiny Mouse"),
        .height = 3,
        .weight = 20,
        .description = gGuilmon_xPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Guilmon_xSpikyEared,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PichuSpikyEared,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_PichuSpikyEared,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Guilmon_xSpikyEared,
        .shinyPalette = gMonShinyPalette_Guilmon_xSpikyEared,
        .iconSprite = gMonIcon_Guilmon_xSpikyEared,
        .iconPalIndex = 1,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Pichu)
        OVERWORLD_SET_ANIM(
            sPicTable_PichuSpikyEared,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_PichuSpikyEared,
            gShinyOverworldPalette_PichuSpikyEared
        )
        .levelUpLearnset = sPichuLevelUpLearnset,
        .teachableLearnset = sPichuTeachableLearnset,
        .eggMoveLearnset = sPichuEggMoveLearnset,
        .formSpeciesIdTable = sPichuFormSpeciesIdTable,
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_UPDATED_EXP_YIELDS >= GEN_6
    #define PETITMON_EXP_YIELD 112
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PETITMON_EXP_YIELD 105
#else
    #define PETITMON_EXP_YIELD 82
#endif

    [SPECIES_PETITMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 8,
        .baseDefense   = 11,
        .baseSpeed     = 13,
        .baseSpAttack  = 12,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_FIRE, TYPE_DRAGON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Tiny Dragon"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Although Petitmon is small in size, it\n"
            "can use it's fire to both defend itself\n"
            "and flee. It is also known for having\n"
            "a cheerful personality."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikachu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Petitmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 25,
        .backPic = gMonBackPic_Pikachu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Petitmon,
        .shinyPalette = gMonShinyPalette_Petitmon,
        .iconSprite = gMonIcon_Petitmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PikachuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_PikachuF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PetitmonF,
        .iconPalIndexFemale = 2,
    #endif //P_CUSTOM_GENDER_DIFF_ICONS
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_M)
        OVERWORLD(
            sPicTable_Pikachu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pikachu,
            gShinyOverworldPalette_Pikachu
        )
        OVERWORLD_FEMALE(
            sPicTable_PikachuF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
        .formChangeTable = sPikachuFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_BABYDMON}),
    },

#if P_COSPLAY_PETITMON_FORMS
    [SPECIES_PETITMON_COSPLAY]   =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonCosplay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonCosplay,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonCosplay,
        .shinyPalette = gMonShinyPalette_PetitmonCosplay,
        .iconSprite = gMonIcon_PetitmonCosplay,
        .iconPalIndex = 2,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_ROCK_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonRockStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonRockStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonRockStar,
        .shinyPalette = gMonShinyPalette_PetitmonRockStar,
        .iconSprite = gMonIcon_PetitmonRockStar,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_BELLE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonBelle,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonBelle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonBelle,
        .shinyPalette = gMonShinyPalette_PetitmonBelle,
        .iconSprite = gMonIcon_PetitmonBelle,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_POP_STAR] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonPopStar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonPopStar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonPopStar,
        .shinyPalette = gMonShinyPalette_PetitmonPopStar,
        .iconSprite = gMonIcon_PetitmonPopStar,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_PHD] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonPhD,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonPhD,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonPhD,
        .shinyPalette = gMonShinyPalette_PetitmonPhD,
        .iconSprite = gMonIcon_PetitmonPhD,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PETITMON_LIBRE] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PetitmonLibre,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PetitmonLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PetitmonLibre,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PetitmonLibre,
        .shinyPalette = gMonShinyPalette_PetitmonLibre,
        .iconSprite = gMonIcon_PetitmonLibre,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#endif //P_COSPLAY_PETITMON_FORMS

#if P_CAP_PIKACHU_FORMS
    [SPECIES_PIKACHU_ORIGINAL] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across many different regions."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuOriginal,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuOriginal,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuOriginal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuOriginal,
        .shinyPalette = gMonShinyPalette_PikachuOriginal,
        .iconSprite = gMonIcon_PikachuOriginal,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_HOENN] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Hoenn region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuHoenn,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuHoenn,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuHoenn,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuHoenn,
        .shinyPalette = gMonShinyPalette_PikachuHoenn,
        .iconSprite = gMonIcon_PikachuHoenn,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_SINNOH] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Sinnoh region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuSinnoh,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuSinnoh,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuSinnoh,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuSinnoh,
        .shinyPalette = gMonShinyPalette_PikachuSinnoh,
        .iconSprite = gMonIcon_PikachuSinnoh,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_UNOVA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Unova region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuUnova,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuUnova,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuUnova,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuUnova,
        .shinyPalette = gMonShinyPalette_PikachuUnova,
        .iconSprite = gMonIcon_PikachuUnova,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_KALOS] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Kalos region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuKalos,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuKalos,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuKalos,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuKalos,
        .shinyPalette = gMonShinyPalette_PikachuKalos,
        .iconSprite = gMonIcon_PikachuKalos,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_ALOLA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the Alola region together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuAlola,
        .shinyPalette = gMonShinyPalette_PikachuAlola,
        .iconSprite = gMonIcon_PikachuAlola,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_PARTNER] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed as the two overcame\n"
            "many hardships together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuPartner,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPartner,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuPartner,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuPartner,
        .shinyPalette = gMonShinyPalette_PikachuPartner,
        .iconSprite = gMonIcon_PikachuPartner,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

    [SPECIES_PIKACHU_WORLD] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "This Petitmon wears its partner's cap, which\n"
            "is proof of the strong bond Petitmon and\n"
            "its partner formed during adventures\n"
            "across the world together."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuWorld,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuWorld,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuWorld,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuWorld,
        .shinyPalette = gMonShinyPalette_PikachuWorld,
        .iconSprite = gMonIcon_PikachuWorld,
        .iconPalIndex = 0,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#endif //P_CAP_PETITMON_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GMAX] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 210,
        .weight = 0,
        .description = COMPOUND_STRING(
            "When it smashes its opponents with\n"
            "its bolt-shaped tail, it delivers a\n"
            "surge of electricity equivalent to a\n"
            "lightning strike."),
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_PikachuGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PikachuGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PikachuGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PikachuGmax,
        .shinyPalette = gMonShinyPalette_PikachuGmax,
        .iconSprite = gMonIcon_PikachuGmax,
        .iconPalIndex = 2,
        SHADOW(-3, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pikachu)
        .isGigantamax = TRUE,
        .levelUpLearnset = sPetitmonLevelUpLearnset,
        .teachableLearnset = sPetitmonTeachableLearnset,
        .formSpeciesIdTable = sPetitmonFormSpeciesIdTable,
        .formChangeTable = sPetitmonFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_PIKACHU_STARTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = PETITMON_EXP_YIELD,
        .evYield_Speed = 2,
        .itemRare = ITEM_LIGHT_BALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Petitmon"),
        .cryId = CRY_PETITMON,
        .natDexNum = NATIONAL_DEX_PETITMON,
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 70,
        .description = gPetitmonPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pikachu,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Petitmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Pikachu,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pikachu,
        .shinyPalette = gMonShinyPalette_Pikachu,
        .iconSprite = gMonIcon_PikachuStarter,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PikachuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_PikachuF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_PikachuStarterF,
        .iconPalIndexFemale = 2,
    #endif
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Pikachu)
        OVERWORLD(
            sPicTable_Pikachu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pikachu,
            gShinyOverworldPalette_Pikachu
        )
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
        .levelUpLearnset = sPikachuLevelUpLearnset,
        .teachableLearnset = sPikachuTeachableLearnset,
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable,
    },

#define PICHIMON_SPEED (P_UPDATED_STATS >= GEN_6 ? 110 : 100)

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define PICHIMON_EXP_YIELD 243
#elif P_UPDATED_EXP_YIELDS >= GEN_7
    #define PICHIMON_EXP_YIELD 218
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define PICHIMON_EXP_YIELD 214
#else
    #define PICHIMON_EXP_YIELD 122
#endif

    [SPECIES_PICHIMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 7,
        .baseDefense   = 5,
        .baseSpeed     = 15,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pichimon"),
        .cryId = CRY_PICHIMON,
        .natDexNum = NATIONAL_DEX_PICHIMON,
        .categoryName = _("Micro"),
        .height = 1,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Pichimon is considered to be a\n"
            "microorganism digimon due to it's small\n"
            "size. Due it's simplicity, it's actions\n"
            "change very frequently."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Raichu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Raichu,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Raichu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Pichimon,
        .shinyPalette = gMonShinyPalette_Pichimon,
        .iconSprite = gMonIcon_Pichimon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RaichuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Raichu)
        OVERWORLD(
            sPicTable_Raichu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raichu,
            gShinyOverworldPalette_Raichu
        )
        OVERWORLD_FEMALE(
            sPicTable_RaichuF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRaichuLevelUpLearnset,
        .teachableLearnset = sRaichuTeachableLearnset,
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_TSUNOMON},
                                {EVO_HEALTH, 16, SPECIES_TOKOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_LEVEL, 6, SPECIES_BUKAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_RAICHU_ALOLA] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = PICHIMON_SPEED,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_PSYCHIC),
        .catchRate = 75,
        .expYield = PICHIMON_EXP_YIELD,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SURGE_SURFER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pichimon"),
        .cryId = CRY_PICHIMON,
        .natDexNum = NATIONAL_DEX_PICHIMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING(
            "It uses psychokinesis to control\n"
            "electricity. It focuses psychic energy\n"
            "into its tail and rides it like it's surfing.\n"
            "Another name for this Pokémon is 'hodad'."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_RaichuAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RaichuAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_RaichuAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RaichuAlola,
        .shinyPalette = gMonShinyPalette_RaichuAlola,
        .iconSprite = gMonIcon_RaichuAlola,
        .iconPalIndex = 2,
        SHADOW(3, 15, SHADOW_SIZE_M)
        FOOTPRINT(Raichu)
        OVERWORLD(
            sPicTable_RaichuAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RaichuAlola,
            gShinyOverworldPalette_RaichuAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sRaichuAlolaLevelUpLearnset,
        .teachableLearnset = sRaichuAlolaTeachableLearnset,
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PETITMON

#if P_FAMILY_POPOMON
    [SPECIES_POPOMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 7,
        .baseDefense   = 11,
        .baseSpeed     = 8,
        .baseSpAttack  = 9,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Popomon"),
        .cryId = CRY_POPOMON,
        .natDexNum = NATIONAL_DEX_POPOMON,
        .categoryName = _("Plant"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Popomon looks like a plant, including its\n"
            "tail which has the characteristics of a\n"
            "leaf. It is a very shy digimon but it\n"
            "is very loyal to those it trusts."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandshrew,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Popomon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Popomon,
        .shinyPalette = gMonShinyPalette_Popomon,
        .iconSprite = gMonIcon_Popomon,
        .iconPalIndex = 2,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Sandshrew)
        OVERWORLD(
            sPicTable_Sandshrew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandshrew,
            gShinyOverworldPalette_Sandshrew
        )
        .levelUpLearnset = sSandshrewLevelUpLearnset,
        .teachableLearnset = sSandshrewTeachableLearnset,
        .eggMoveLearnset = sSandshrewEggMoveLearnset,
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 16, SPECIES_WANYAMON},
                                {EVO_LEVEL, 5, SPECIES_FRIMON}),
    },

    [SPECIES_POYOMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 11,
        .baseDefense   = 5,
        .baseSpeed     = 5,
        .baseSpAttack  = 12,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_WATER),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TORRENT, ABILITY_WATER_ABSORB, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Poyomon"),
        .cryId = CRY_POYOMON,
        .natDexNum = NATIONAL_DEX_POYOMON,
        .categoryName = _("Jellyfish"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Poyomon can commonly be found drifting\n"
            "through the net ocean like a jellyfish.\n"
            "Researchers consider it the missing\n"
            "link to solving the origin of digimon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandslash,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sandslash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Poyomon,
        .shinyPalette = gMonShinyPalette_Poyomon,
        .iconSprite = gMonIcon_Poyomon,
        .iconPalIndex = 2,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_Sandslash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandslash,
            gShinyOverworldPalette_Sandslash
        )
        .levelUpLearnset = sSandslashLevelUpLearnset,
        .teachableLearnset = sSandslashTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_TOKOMON},
                         {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                         {EVO_HEALTH, 18, SPECIES_BUKAMON},
                         {EVO_SPEED, 7, SPECIES_NYAROMON},
                         {EVO_SPDEFENSE, 7, SPECIES_YOKOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_SANDSHREW_ALOLA] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 93,
        .evYield_Defense = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Popomon"),
        .cryId = CRY_POPOMON,
        .natDexNum = NATIONAL_DEX_POPOMON,
        .categoryName = _("Mouse"),
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Life on mountains covered with deep snow\n"
            "has granted this Pokémon a body of ice\n"
            "that's as hard as steel.\n"
            "Predators go after its soft belly."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SandshrewAlola,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SandshrewAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandshrewAlola,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandshrewAlola,
        .shinyPalette = gMonShinyPalette_SandshrewAlola,
        .iconSprite = gMonIcon_SandshrewAlola,
        .iconPalIndex = 0,
        SHADOW(-2, -1, SHADOW_SIZE_M)
        FOOTPRINT(Sandshrew)
        OVERWORLD(
            sPicTable_SandshrewAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandshrewAlola,
            gShinyOverworldPalette_SandshrewAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSandshrewAlolaLevelUpLearnset,
        .teachableLearnset = sSandshrewAlolaTeachableLearnset,
        .eggMoveLearnset = sSandshrewAlolaEggMoveLearnset,
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_POYOMON_ALOLAN}),
    },

    [SPECIES_SANDSLASH_ALOLA] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE, TYPE_STEEL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Poyomon"),
        .cryId = CRY_POYOMON,
        .natDexNum = NATIONAL_DEX_POYOMON,
        .categoryName = _("Mouse"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "It uses large, hooked claws to cut a path\n"
            "through deep snow as it runs.\n"
            "On snowy mountains, this Poyomon\n"
            "is faster than any other Pokémon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SandslashAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandslashAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandslashAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SandslashAlola,
        .shinyPalette = gMonShinyPalette_SandslashAlola,
        .iconSprite = gMonIcon_SandslashAlola,
        .iconPalIndex = 0,
        SHADOW(0, 9, SHADOW_SIZE_L)
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_SandslashAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SandslashAlola,
            gShinyOverworldPalette_SandslashAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sSandslashAlolaLevelUpLearnset,
        .teachableLearnset = sSandslashAlolaTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_POPOMON

#if P_FAMILY_NIDORAN
    [SPECIES_PUNIMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 10,
        .baseDefense   = 8,
        .baseSpeed     = 9,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Punimon"),
        .cryId = CRY_PUNIMON,
        .natDexNum = NATIONAL_DEX_PUNIMON,
        .categoryName = _("Acid"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Punimon is new kind of Fresh digimon.\n"
            "It's body is squishy it has three \n"
            "feeler-like things atop it's head. \n"
            "It's bubbles are very acidic."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NidoranF,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_NidoranF,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        .backPic = gMonBackPic_NidoranF,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_NidoranF,
        .shinyPalette = gMonShinyPalette_NidoranF,
        .iconSprite = gMonIcon_NidoranF,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(NidoranF)
        OVERWORLD(
            sPicTable_NidoranF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranF,
            gShinyOverworldPalette_NidoranF
        )
        .levelUpLearnset = sNidoranFLevelUpLearnset,
        .teachableLearnset = sNidoranFTeachableLearnset,
        .eggMoveLearnset = sNidoranFEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 7, SPECIES_BUKAMON},
                                {EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_LEVEL, 6, SPECIES_TSUNOMON}),
    },

    [SPECIES_PUPUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 13,
        .baseDefense   = 10,
        .baseSpeed     = 11,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWARM, ABILITY_RUN_AWAY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pupumon"),
        .cryId = CRY_PUPUMON,
        .natDexNum = NATIONAL_DEX_PUPUMON,
        .categoryName = _("X Antibody"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Pupumon's body is as light as a \n"
            "bubble. However it is very sensitive\n"
            "to movement and will run if detected.\n"
            "It will still counterattack though."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pupumon,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Nidorina,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Nidorina,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Nidorina,
        .shinyPalette = gMonShinyPalette_Nidorina,
        .iconSprite = gMonIcon_Nidorina,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Nidorina)
        OVERWORLD(
            sPicTable_Nidorina,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorina,
            gShinyOverworldPalette_Nidorina
        )
        .levelUpLearnset = sNidorinaLevelUpLearnset,
        .teachableLearnset = sNidorinaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 3, SPECIES_PUROROMON}),
    },

    [SPECIES_PURURUMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 8,
        .baseDefense   = 7,
        .baseSpeed     = 6,
        .baseSpAttack  = 8,
        .baseSpDefense = 7,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_HP = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Pururumon"),
        .cryId = CRY_PURURUMON,
        .natDexNum = NATIONAL_DEX_PURURUMON,
        .categoryName = _("Chick"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Although Pururumon is a flying type, it\n"
            "does not have the ability to fly and.\n"
            "instead jiggles along the floor. It \n"
            "loves the smell of grass."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidoqueen,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = sAnims_Nidoqueen,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Nidoqueen,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pururumon,
        .shinyPalette = gMonShinyPalette_Pururumon,
        .iconSprite = gMonIcon_Pururumon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nidoqueen)
        OVERWORLD(
            sPicTable_Nidoqueen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoqueen,
            gShinyOverworldPalette_Nidoqueen
        )
        .levelUpLearnset = sNidoqueenLevelUpLearnset,
        .teachableLearnset = sNidoqueenTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 6, SPECIES_NYAROMON},
                                {EVO_LEVEL, 5, SPECIES_POROMON}),
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 9,
        .baseAttack    = 14,
        .baseDefense   = 7,
        .baseSpeed     = 10,
        .baseSpAttack  = 8,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pusumon"),
        .cryId = CRY_PUSUMON,
        .natDexNum = NATIONAL_DEX_PUSUMON,
        .categoryName = _("Furry"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pusumon's body is covered in a soft fur\n"
            "however the yellow hairs on it's head are\n"
            "fairly hard. It is inconsolable when it\n"
            "loses it's pacifier."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pusumon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pusumon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_NidoranM,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Pusumon,
        .shinyPalette = gMonShinyPalette_Pusumon,
        .iconSprite = gMonIcon_Pusumon,
        .iconPalIndex = 2,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(NidoranM)
        OVERWORLD(
            sPicTable_NidoranM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NidoranM,
            gShinyOverworldPalette_NidoranM
        )
        .levelUpLearnset = sNidoranMLevelUpLearnset,
        .teachableLearnset = sNidoranMTeachableLearnset,
        .eggMoveLearnset = sNidoranMEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_PUSURIMON}),
    },

    [SPECIES_PUTTIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 6,
        .baseDefense   = 7,
        .baseSpeed     = 11,
        .baseSpAttack  = 14,
        .baseSpDefense = 12,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_CLOUD_NINE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Puttimon"),
        .cryId = CRY_PUTTIMON,
        .natDexNum = NATIONAL_DEX_PUTTIMON,
        .categoryName = _("Angel"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Puttimon is said to be template for all\n"
            "angel like digimon. Although it is Light\n"
            "type, it has a mischievous side to it \n"
            "that is quite adorable."),
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidorino,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = sAnims_Nidorino,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Nidorino,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Puttimon,
        .shinyPalette = gMonShinyPalette_Puttimon,
        .iconSprite = gMonIcon_Puttimon,
        .iconPalIndex = 2,
        SHADOW(2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Nidorino)
        OVERWORLD(
            sPicTable_Nidorino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidorino,
            gShinyOverworldPalette_Nidorino
        )
        .levelUpLearnset = sNidorinoLevelUpLearnset,
        .teachableLearnset = sNidorinoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_CALUMON},
                                {EVO_LEVEL, 5, SPECIES_KYUPIMON}),
    },

    [SPECIES_PUWAMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 13,
        .baseDefense   = 9,
        .baseSpeed     = 13,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_FLYING, TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Puwamon"),
        .cryId = CRY_PUWAMON,
        .natDexNum = NATIONAL_DEX_PUWAMON,
        .categoryName = _("Owlet"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Puwamon has incredibly strong eyesight \n"
            "despite it's tiny size. It also has a\n"
            "curious personality and lacks any\n"
            "shyness making it a tamer favourite."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Nidoking,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Puwamon,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Puwamon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Puwamon,
        .shinyPalette = gMonShinyPalette_Puwamon,
        .iconSprite = gMonIcon_Puwamon,
        .iconPalIndex = 2,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Nidoking)
        OVERWORLD(
            sPicTable_Nidoking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Nidoking,
            gShinyOverworldPalette_Nidoking
        )
        .levelUpLearnset = sNidokingLevelUpLearnset,
        .teachableLearnset = sNidokingTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 7, SPECIES_KYAROMON},
                                {EVO_LEVEL, 5, SPECIES_PINAMON}),
    },
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_PUYOMON
#if P_UPDATED_TYPES >= GEN_6
    #define PUYOMON_FAMILY_TYPES { TYPE_FAIRY, TYPE_FAIRY }
#else
    #define PUYOMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_GUMDRAMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 56,
        .baseSpAttack  = 52,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_VACCINE,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_OWN_TEMPO, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
        .speciesName = _("Gumdramon"),
        .cryId = CRY_GUMDRAMON,
        .natDexNum = NATIONAL_DEX_GUMDRAMON,
        .categoryName = _("Hammer"),
        .height = 8,
        .weight = 291,
        .description = COMPOUND_STRING(
            "Gumdramon possesses a flexiable tail that\n"
            "is in the shape of a hammer. Combine this\n"
            "with its light and elastic body, it makes it\n"
            "hard to hit in battle as it bounces around."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gumdramon,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .frontAnimFrames = sAnims_Cleffa,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Gumdramon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Gumdramon,
        .shinyPalette = gMonShinyPalette_Gumdramon,
        .iconSprite = gMonIcon_Gumdramon,
        .iconPalIndex = 0,
        SHADOW(0, -4, SHADOW_SIZE_S)
        FOOTPRINT(Cleffa)
        OVERWORLD(
            sPicTable_Cleffa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cleffa,
            gShinyOverworldPalette_Cleffa
        )
        .levelUpLearnset = sCleffaLevelUpLearnset,
        .teachableLearnset = sCleffaTeachableLearnset,
        .eggMoveLearnset = sCleffaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_ARESDRAMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_PUYOMON] =
    {
        .baseHP        = 6,
        .baseAttack    = 8,
        .baseDefense   = 6,
        .baseSpeed     = 5,
        .baseSpAttack  = 8,
        .baseSpDefense = 6,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Puyomon"),
        .cryId = CRY_PUYOMON,
        .natDexNum = NATIONAL_DEX_PUYOMON,
        .categoryName = _("Jellyfish"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Puyomon is another species of Jellyfish \n"
            "digimon found in the Net Ocean. It has\n"
            "a singular lens but it lacks any \n"
            "emotional expression."),
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Puyomon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = sAnims_Clefairy,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clefairy,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Puyomon,
        .shinyPalette = gMonShinyPalette_Puyomon,
        .iconSprite = gMonIcon_Puyomon,
        .iconPalIndex = 0,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Clefairy)
        OVERWORLD(
            sPicTable_Clefairy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefairy,
            gShinyOverworldPalette_Clefairy
        )
        .levelUpLearnset = sClefairyLevelUpLearnset,
        .teachableLearnset = sClefairyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_PUYOYOMON}),
    },

    [SPECIES_PYONMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 20,
        .baseDefense   = 8,
        .baseSpeed     = 12,
        .baseSpAttack  = 9,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Pyonmon"),
        .cryId = CRY_PYONMON,
        .natDexNum = NATIONAL_DEX_PYONMON,
        .categoryName = _("Large Ear"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Pyonmon is covered in tufty body hair\n"
            "and has a singular large ear. When it\n"
            "attacks, it uses its ear which has \n"
            "enough power to blow away Rookies."),
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clefable,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Clefable,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clefable,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pyonmon,
        .shinyPalette = gMonShinyPalette_Pyonmon,
        .iconSprite = gMonIcon_Pyonmon,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Clefable)
        OVERWORLD(
            sPicTable_Clefable,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clefable,
            gShinyOverworldPalette_Clefable
        )
        .levelUpLearnset = sClefableLevelUpLearnset,
        .teachableLearnset = sClefableTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_BOSAMON}),
    },
#endif //P_FAMILY_PUYOMON

#if P_FAMILY_RELEMON
    [SPECIES_RELEMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 6,
        .baseDefense   = 14,
        .baseSpeed     = 12,
        .baseSpAttack  = 6,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Relemon"),
        .cryId = CRY_RELEMON,
        .natDexNum = NATIONAL_DEX_RELEMON,
        .categoryName = _("Fox"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Relemon are said to be only born on\n"
            "moonlit nights. Those born on fullmoons\n"
            "are also said to have great magical\n"
            "powers."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Vulpix,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .frontAnimFrames = sAnims_Vulpix,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Vulpix,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Vulpix,
        .shinyPalette = gMonShinyPalette_Vulpix,
        .iconSprite = gMonIcon_Vulpix,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 5,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Vulpix)
        OVERWORLD(
            sPicTable_Vulpix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vulpix,
            gShinyOverworldPalette_Vulpix
        )
        .levelUpLearnset = sVulpixLevelUpLearnset,
        .teachableLearnset = sVulpixTeachableLearnset,
        .eggMoveLearnset = sVulpixEggMoveLearnset,
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_VIXIMON}),
    },

    [SPECIES_SAKUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 15,
        .baseDefense   = 15,
        .baseSpeed     = 8,
        .baseSpAttack  = 7,
        .baseSpDefense = 9,
        .types = MON_TYPES(TYPE_STEEL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Attack = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sakumon"),
        .cryId = CRY_SAKUMON,
        .natDexNum = NATIONAL_DEX_SAKUMON,
        .categoryName = _("Gold Blade"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Sakumon's is a mischievous digimon that\n"
            "is known to cause trouble. When running\n"
            "away, it generally struggles as the\n"
            "heavy blade keeps it off balance."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sakumon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Ninetales,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Ninetales,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Ninetales,
        .shinyPalette = gMonShinyPalette_Ninetales,
        .iconSprite = gMonIcon_Ninetales,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ninetales)
        OVERWORLD(
            sPicTable_Ninetales,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ninetales,
            gShinyOverworldPalette_Ninetales
        )
        .levelUpLearnset = sNinetalesLevelUpLearnset,
        .teachableLearnset = sNinetalesTeachableLearnset,
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 5, SPECIES_SAKUTTOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_VULPIX_ALOLA] =
    {
        .baseHP        = 38,
        .baseAttack    = 41,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ICE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 70 : 63,
        .evYield_Speed = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Relemon"),
        .cryId = CRY_RELEMON,
        .natDexNum = NATIONAL_DEX_RELEMON,
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 99,
        .description = COMPOUND_STRING(
            "They live together in a skulk, helping\n"
            "one another. In hot weather, this Pokémon\n"
            "makes ice shards with its six tails and\n"
            "sprays them around to cool itself off."),
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_VulpixAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_VulpixAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VulpixAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VulpixAlola,
        .shinyPalette = gMonShinyPalette_VulpixAlola,
        .iconSprite = gMonIcon_VulpixAlola,
        .iconPalIndex = 0,
        SHADOW(-2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Vulpix)
        OVERWORLD(
            sPicTable_VulpixAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VulpixAlola,
            gShinyOverworldPalette_VulpixAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sVulpixAlolaLevelUpLearnset,
        .teachableLearnset = sVulpixAlolaTeachableLearnset,
        .eggMoveLearnset = sVulpixAlolaEggMoveLearnset,
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLA}),
    },

    [SPECIES_NINETALES_ALOLA] =
    {
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ICE, TYPE_FAIRY),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 178,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sakumon"),
        .cryId = CRY_SAKUMON,
        .natDexNum = NATIONAL_DEX_SAKUMON,
        .categoryName = _("Fox"),
        .height = 11,
        .weight = 199,
        .description = COMPOUND_STRING(
            "While it will guide travelers who get lost\n"
            "on a snowy mountain down to the\n"
            "mountain's base, it won't forgive anyone\n"
            "who harms nature."),
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_NinetalesAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_NinetalesAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_NinetalesAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_NinetalesAlola,
        .shinyPalette = gMonShinyPalette_NinetalesAlola,
        .iconSprite = gMonIcon_NinetalesAlola,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ninetales)
        OVERWORLD(
            sPicTable_NinetalesAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_NinetalesAlola,
            gShinyOverworldPalette_NinetalesAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sNinetalesAlolaLevelUpLearnset,
        .teachableLearnset = sNinetalesAlolaTeachableLearnset,
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RELEMON

#if P_FAMILY_SANDMON
#if P_UPDATED_TYPES >= GEN_6
    #define SANDMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_FAIRY}
#else
    #define SANDMON_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HACKMON] =
    {
        .baseHP        = 56,
        .baseAttack    = 57,
        .baseDefense   = 55,
        .baseSpeed     = 56,
        .baseSpAttack  = 54,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DRAGON),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_MARVEL_SCALE, ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Hackmon"),
        .cryId = CRY_HACKMON,
        .natDexNum = NATIONAL_DEX_HACKMON,
        .categoryName = _("Rookie"),
        .height = 11,
        .weight = 242,
        .description = COMPOUND_STRING(
            "Although Hackmon is a pretty average Digimon\n"
            "with no exceptional strengths, it is an\n"
            "incredibly hard worker with many stronger\n"
            "Digimon acknowledging it."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hackmon,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 17,
        .frontAnimFrames = sAnims_Igglybuff,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Igglybuff,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Hackmon,
        .shinyPalette = gMonShinyPalette_Hackmon,
        .iconSprite = gMonIcon_Hackmon,
        .iconPalIndex = 1,
        SHADOW(0, -3, SHADOW_SIZE_S)
        FOOTPRINT(Igglybuff)
        OVERWORLD(
            sPicTable_Igglybuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Igglybuff,
            gShinyOverworldPalette_Igglybuff
        )
        .levelUpLearnset = sIgglybuffLevelUpLearnset,
        .teachableLearnset = sIgglybuffTeachableLearnset,
        .eggMoveLearnset = sIgglybuffEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_BAOHUCKMON}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_SANDMON] =
    {
        .baseHP        = 11,
        .baseAttack    = 8,
        .baseDefense   = 15,
        .baseSpeed     = 9,
        .baseSpAttack  = 7,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_GROUND),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_SAND_VEIL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Sandmon"),
        .cryId = CRY_SANDMON,
        .natDexNum = NATIONAL_DEX_SANDMON,
        .categoryName = _("Sand"),
        .height = 2,
        .weight = 30,
        .description = COMPOUND_STRING(
            "As the name implies, Sandmons body is \n"
            "completely made up of sand. It can \n"
            "harden or soften it's body at will to\n"
            "fit its needs in the moment."),
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jigglypuff,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .frontAnimFrames = sAnims_Jigglypuff,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Jigglypuff,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Sandmon,
        .shinyPalette = gMonShinyPalette_Sandmon,
        .iconSprite = gMonIcon_Sandmon,
        .iconPalIndex = 0,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Jigglypuff)
        OVERWORLD(
            sPicTable_Jigglypuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jigglypuff,
            gShinyOverworldPalette_Jigglypuff
        )
        .levelUpLearnset = sJigglypuffLevelUpLearnset,
        .teachableLearnset = sJigglypuffTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 6, SPECIES_TUMBLEMON}),
    },

    [SPECIES_TSUBUMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 7,
        .baseDefense   = 8,
        .baseSpeed     = 20,
        .baseSpAttack  = 9,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Tsubumon"),
        .cryId = CRY_TSUBUMON,
        .natDexNum = NATIONAL_DEX_TSUBUMON,
        .categoryName = _("Fake Seed"),
        .height = 4,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Tsubumon is often mistaken to be a grass\n"
            "type digimon due it's seed like appearance\n"
            "and that it is often sent flying with \n"
            "strong gusts of wind."),
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wigglytuff,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = sAnims_Wigglytuff,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Wigglytuff,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Tsubumon,
        .shinyPalette = gMonShinyPalette_Tsubumon,
        .iconSprite = gMonIcon_Tsubumon,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wigglytuff)
        OVERWORLD(
            sPicTable_Wigglytuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wigglytuff,
            gShinyOverworldPalette_Wigglytuff
        )
        .levelUpLearnset = sWigglytuffLevelUpLearnset,
        .teachableLearnset = sWigglytuffTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 15, SPECIES_CHICCHIMON},
                                {EVO_SPEED, 7, SPECIES_TOKOMON},
                                {EVO_LEVEL, 5, SPECIES_UPAMON}),
    },
#endif //P_FAMILY_SANDMON

#if P_FAMILY_ICEBOTAMON
    [SPECIES_ICEBOTAMON] =
    {
        .baseHP        = 12,
        .baseAttack    = 8,
        .baseDefense   = 13,
        .baseSpeed     = 10,
        .baseSpAttack  = 12,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_ICE),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Icebotamon"),
        .cryId = CRY_ICEBOTAMON,
        .natDexNum = NATIONAL_DEX_ICEBOTAMON,
        .categoryName = _("Snow"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "IceBotamon is considered a species of\n"
            "Botamon that has adapted for the cold\n"
            "climate. It's breath freezes the \n"
            "moisture in the air."),
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Zubat,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 16,
        .frontAnimFrames = sAnims_Zubat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 16,
        .backPic = gMonBackPic_Zubat,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Icebotamon,
        .shinyPalette = gMonShinyPalette_Icebotamon,
        .iconSprite = gMonIcon_Icebotamon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ZubatF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_ZubatF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-4, 11, SHADOW_SIZE_S)
        FOOTPRINT(Zubat)
        OVERWORLD(
            sPicTable_Zubat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Zubat,
            gShinyOverworldPalette_Zubat
        )
        OVERWORLD_FEMALE(
            sPicTable_ZubatF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sZubatLevelUpLearnset,
        .teachableLearnset = sZubatTeachableLearnset,
        .eggMoveLearnset = sZubatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 7, SPECIES_TSUNOMON},
                                {EVO_SPEED, 7, SPECIES_NYAROMON},
                                {EVO_ITEM, ITEM_MOON_STONE, SPECIES_MOONMON},
                                {EVO_LEVEL, 7, SPECIES_HIYARIMON}),
    },

    [SPECIES_YURAMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 6,
        .baseDefense   = 14,
        .baseSpeed     = 10,
        .baseSpAttack  = 6,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_GRASS),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_CHLOROPHYLL, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Yuramon"),
        .cryId = CRY_YURAMON,
        .natDexNum = NATIONAL_DEX_YURAMON,
        .categoryName = _("Seed"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Yuramon is a seed digimon, its body seems\n"
            "to be covered in long, soft hair. When\n"
            "it hatches, it will seek a suitable\n"
            "environment to grow."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golbat,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 7,
        .frontAnimFrames = sAnims_Golbat,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backPic = gMonBackPic_Golbat,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Yuramon,
        .shinyPalette = gMonShinyPalette_Yuramon,
        .iconSprite = gMonIcon_Yuramon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GolbatF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_GolbatF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Golbat)
        OVERWORLD(
            sPicTable_Golbat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golbat,
            gShinyOverworldPalette_Golbat
        )
        OVERWORLD_FEMALE(
            sPicTable_GolbatF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sGolbatLevelUpLearnset,
        .teachableLearnset = sGolbatTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_DEMMERAMON},
                                {EVO_HEALTH, 18, SPECIES_KOROMON},
                                {EVO_SPDEFENSE, 7, SPECIES_TANEMON},
                                {EVO_LEVEL, 7, SPECIES_BUDMON}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_GOTSUMON] =
    {
        .baseHP        = 57,
        .baseAttack    = 55,
        .baseDefense   = 61,
        .baseSpeed     = 48,
        .baseSpAttack  = 51,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .attribute = TYPE_DATA,
        .catchRate = 155,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_CLOUD_NINE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gotsumon"),
        .cryId = CRY_GOTSUMON,
        .natDexNum = NATIONAL_DEX_GOTSUMON,
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 822,
        .description = COMPOUND_STRING(
            "Although it just looks like it is made up\n"
            "of rock to the naked eye, it can actually\n"
            "hide incredibly valuable ores and minerals\n"
            "in its very tough body."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Crobat,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .frontAnimFrames = sAnims_Crobat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .backPic = gMonBackPic_Crobat,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Gotsumon,
        .shinyPalette = gMonShinyPalette_Gotsumon,
        .iconSprite = gMonIcon_Gotsumon,
        .iconPalIndex = 2,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Crobat)
        OVERWORLD(
            sPicTable_Crobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Crobat,
            gShinyOverworldPalette_Crobat
        )
        .levelUpLearnset = sCrobatLevelUpLearnset,
        .teachableLearnset = sCrobatTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_GOTSUMON_X},
                                {EVO_LEVEL, 33, SPECIES_BIOSTEGMON}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ICEBOTAMON

#if P_FAMILY_ZERIMON
    [SPECIES_ZERIMON] =
    {
        .baseHP        = 8,
        .baseAttack    = 7,
        .baseDefense   = 11,
        .baseSpeed     = 15,
        .baseSpAttack  = 9,
        .baseSpDefense = 8,
        .types = MON_TYPES(TYPE_NORMAL),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_PLUS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Zerimon"),
        .cryId = CRY_ZERIMON,
        .natDexNum = NATIONAL_DEX_ZERIMON,
        .categoryName = _("Twin"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Zerimon is an extremely rare digimon born\n"
            "as a twin with Conomon. Unlike the three\n"
            "horned Conomon, the one horned Zerimon\n"
            "is very energetic."),
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Oddish,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Oddish,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Oddish,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Oddish,
        .shinyPalette = gMonShinyPalette_Oddish,
        .iconSprite = gMonIcon_Oddish,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Oddish)
        OVERWORLD(
            sPicTable_Oddish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Oddish,
            gShinyOverworldPalette_Oddish
        )
        .levelUpLearnset = sOddishLevelUpLearnset,
        .teachableLearnset = sOddishTeachableLearnset,
        .eggMoveLearnset = sOddishEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 4, SPECIES_GUMMYMON}),
    },

    [SPECIES_ZURUMON] =
    {
        .baseHP        = 9,
        .baseAttack    = 10,
        .baseDefense   = 8,
        .baseSpeed     = 12,
        .baseSpAttack  = 9,
        .baseSpDefense = 11,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .attribute = TYPE_FREE,
        .catchRate = 255,
        .expYield = 20,
        .evYield_Speed = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
        .abilities = { ABILITY_POISON_POINT, ABILITY_LIQUID_OOZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zurumon"),
        .cryId = CRY_ZURUMON,
        .natDexNum = NATIONAL_DEX_ZURUMON,
        .categoryName = _("Toxic Virus"),
        .height = 2,
        .weight = 40,
        .description = COMPOUND_STRING(
            "Zurumon was produced by hackers with\n"
            "evil desires. It's body is made up of \n"
            "a toxic slime substance. It has skillful\n"
            "control of it's body."),
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gloom,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Gloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gloom,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Zurumon,
        .shinyPalette = gMonShinyPalette_Zurumon,
        .iconSprite = gMonIcon_Zurumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GloomF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_GloomF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gloom)
        OVERWORLD(
            sPicTable_Gloom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gloom,
            gShinyOverworldPalette_Gloom
        )
        OVERWORLD_FEMALE(
            sPicTable_GloomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sGloomLevelUpLearnset,
        .teachableLearnset = sGloomTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 7, SPECIES_KAPURIMON},
                                {EVO_SPATTACK, 7, SPECIES_MOTIMON},
                                {EVO_HEALTH, 17, SPECIES_KOROMON},
                                {EVO_LEVEL, 6, SPECIES_PAGUMON}),
    },

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
        .frontPic = gMonFrontPic_Vileplume,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = sAnims_Vileplume,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SLOW : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Vileplume,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Arcadiamon_it,
        .shinyPalette = gMonShinyPalette_Arcadiamon_it,
        .iconSprite = gMonIcon_Arcadiamon_it,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_VileplumeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_VileplumeF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Vileplume)
        OVERWORLD(
            sPicTable_Vileplume,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vileplume,
            gShinyOverworldPalette_Vileplume
        )
        OVERWORLD_FEMALE(
            sPicTable_VileplumeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sVileplumeLevelUpLearnset,
        .teachableLearnset = sVileplumeTeachableLearnset,
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
        .frontAnimFrames = sAnims_Bellossom,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bellossom,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Impmon_x,
        .shinyPalette = gMonShinyPalette_Impmon_x,
        .iconSprite = gMonIcon_Impmon_x,
        .iconPalIndex = 1,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Bellossom)
        OVERWORLD(
            sPicTable_Bellossom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellossom,
            gShinyOverworldPalette_Bellossom
        )
        .levelUpLearnset = sBellossomLevelUpLearnset,
        .teachableLearnset = sBellossomTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_ALLOMON_X}),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZERIMON

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
        .frontPic = gMonFrontPic_Paras,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Argomon_it,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Paras,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Argomon_it,
        .shinyPalette = gMonShinyPalette_Argomon_it,
        .iconSprite = gMonIcon_Argomon_it,
        .iconPalIndex = 0,
        SHADOW(7, -11, SHADOW_SIZE_M)
        FOOTPRINT(Paras)
        OVERWORLD(
            sPicTable_Paras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Paras,
            gShinyOverworldPalette_Paras
        )
        .levelUpLearnset = sParasLevelUpLearnset,
        .teachableLearnset = sParasTeachableLearnset,
        .eggMoveLearnset = sParasEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_AGUMON},
                                {EVO_SPEED, 11, SPECIES_LABRAMON},
                                {EVO_SPDEFENSE, 10, SPECIES_GHOSTMON},
                                {EVO_HEALTH, 25, SPECIES_WORMMON},
                                {EVO_LEVEL, 11, SPECIES_ARGOMON_ROOKIE}),
    },

    [SPECIES_PARASECT] =
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
        .frontPic = gMonFrontPic_Parasect,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Parasect,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Parasect,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Babydmon,
        .shinyPalette = gMonShinyPalette_Babydmon,
        .iconSprite = gMonIcon_Babydmon,
        .iconPalIndex = 0,
        SHADOW(5, 2, SHADOW_SIZE_L)
        FOOTPRINT(Parasect)
        OVERWORLD(
            sPicTable_Parasect,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Parasect,
            gShinyOverworldPalette_Parasect
        )
        .levelUpLearnset = sParasectLevelUpLearnset,
        .teachableLearnset = sParasectTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 19, SPECIES_AGUMON_EXPERT},
                                {EVO_ATTACK, 15, SPECIES_HACKMON},
                                {EVO_SPEED, 16, SPECIES_GUMDRAMON},
                                {EVO_HEALTH, 33, SPECIES_AGUMON_06},
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
        .frontPic = gMonFrontPic_Venonat,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Bibimon,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Venonat,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Venonat,
        .shinyPalette = gMonShinyPalette_Venonat,
        .iconSprite = gMonIcon_Venonat,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Venonat)
        OVERWORLD(
            sPicTable_Venonat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venonat,
            gShinyOverworldPalette_Venonat
        )
        .levelUpLearnset = sVenonatLevelUpLearnset,
        .teachableLearnset = sVenonatTeachableLearnset,
        .eggMoveLearnset = sVenonatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 14, SPECIES_KUDAMON},
                                {EVO_SPATTACK, 13, SPECIES_SHOUTMON},
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
        .frontPic = gMonFrontPic_Venomoth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 16,
        .backPic = gMonBackPic_Venomoth,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Bosamon,
        .shinyPalette = gMonShinyPalette_Bosamon,
        .iconSprite = gMonIcon_Bosamon,
        .iconPalIndex = 2,
        SHADOW(-5, 18, SHADOW_SIZE_M)
        FOOTPRINT(Venomoth)
        OVERWORLD(
            sPicTable_Venomoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venomoth,
            gShinyOverworldPalette_Venomoth
        )
        .levelUpLearnset = sVenomothLevelUpLearnset,
        .teachableLearnset = sVenomothTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_DRACMON},
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

#define BUKAMON_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

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
        .frontPic = gMonFrontPic_Diglett,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 17,
        .frontAnimFrames = sAnims_Diglett,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        .backPic = gMonBackPic_Diglett,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Budmon,
        .shinyPalette = gMonShinyPalette_Budmon,
        .iconSprite = gMonIcon_Budmon,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Diglett)
        OVERWORLD(
            sPicTable_Diglett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Diglett,
            gShinyOverworldPalette_Diglett
        )
        .levelUpLearnset = sDiglettLevelUpLearnset,
        .teachableLearnset = sDiglettTeachableLearnset,
        .eggMoveLearnset = sDiglettEggMoveLearnset,
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPEED, 14, SPECIES_TOYAGUMON},
                                {EVO_SPATTACK, 16, SPECIES_DOKUNEMON},
                                {EVO_ATTACK, 16, SPECIES_PALMON},
                                {EVO_HEALTH, 32, SPECIES_MUSHROOMON},
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
        .frontPic = gMonFrontPic_Dugtrio,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Dugtrio,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        .backPic = gMonBackPic_Dugtrio,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Bukamon,
        .shinyPalette = gMonShinyPalette_Bukamon,
        .iconSprite = gMonIcon_Bukamon,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Dugtrio)
        OVERWORLD(
            sPicTable_Dugtrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dugtrio,
            gShinyOverworldPalette_Dugtrio
        )
        .levelUpLearnset = sDugtrioLevelUpLearnset,
        .teachableLearnset = sDugtrioTeachableLearnset,
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_YUKIAGUMON},
                                {EVO_DEFENSE, 14, SPECIES_CRABMON},
                                {EVO_SPDEFENSE, 14, SPECIES_OTAMAMON},
                                {EVO_SPEED, 15, SPECIES_BETAMON},
                                {EVO_LEVEL, 13, SPECIES_GOMAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLA] =
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
        .frontPic = gMonFrontPic_DiglettAlola,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_DiglettAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiglettAlola,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DiglettAlola,
        .shinyPalette = gMonShinyPalette_DiglettAlola,
        .iconSprite = gMonIcon_DiglettAlola,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Diglett)
        OVERWORLD(
            sPicTable_DiglettAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DiglettAlola,
            gShinyOverworldPalette_DiglettAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sDiglettAlolaLevelUpLearnset,
        .teachableLearnset = sDiglettAlolaTeachableLearnset,
        .eggMoveLearnset = sDiglettAlolaEggMoveLearnset,
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO_ALOLA}),
    },

    [SPECIES_DUGTRIO_ALOLA] =
    {
        .baseHP        = 35,
        .baseAttack    = BUKAMON_ATTACK,
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
        .frontPic = gMonFrontPic_DugtrioAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_DugtrioAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DugtrioAlola,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_DugtrioAlola,
        .shinyPalette = gMonShinyPalette_DugtrioAlola,
        .iconSprite = gMonIcon_DugtrioAlola,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Dugtrio)
        OVERWORLD(
            sPicTable_DugtrioAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_DugtrioAlola,
            gShinyOverworldPalette_DugtrioAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sDugtrioAlolaLevelUpLearnset,
        .teachableLearnset = sDugtrioAlolaTeachableLearnset,
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Meowth,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = sAnims_Meowth,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Meowth,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Calumon,
        .shinyPalette = gMonShinyPalette_Calumon,
        .iconSprite = gMonIcon_Calumon,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_Meowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meowth,
            gShinyOverworldPalette_Meowth
        )
        .levelUpLearnset = sMeowthLevelUpLearnset,
        .teachableLearnset = sMeowthTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .formChangeTable = sMeowthFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 11, SPECIES_SALAMON}),
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
        .frontPic = gMonFrontPic_Persian,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .frontAnimFrames = sAnims_Persian,
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
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Persian)
        OVERWORLD(
            sPicTable_Persian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Persian,
            gShinyOverworldPalette_Persian
        )
        .levelUpLearnset = sPersianLevelUpLearnset,
        .teachableLearnset = sPersianTeachableLearnset,
        .formSpeciesIdTable = sPersianFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 17, SPECIES_KUDAMON_06},
                                {EVO_ATTACK, 15, SPECIES_ELECMON},
                                {EVO_SPEED, 16, SPECIES_FALCOMON_06},
                                {EVO_SPATTACK, 16, SPECIES_BETAMON},
                                {EVO_LEVEL, 15, SPECIES_KAMEMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MEOWTH_ALOLA] =
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
        .frontPic = gMonFrontPic_MeowthAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MeowthAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthAlola,
        .shinyPalette = gMonShinyPalette_MeowthAlola,
        .iconSprite = gMonIcon_MeowthAlola,
        .iconPalIndex = 2,
        SHADOW(-2, 5, SHADOW_SIZE_M)
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_MeowthAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthAlola,
            gShinyOverworldPalette_MeowthAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMeowthAlolaLevelUpLearnset,
        .teachableLearnset = sMeowthAlolaTeachableLearnset,
        .eggMoveLearnset = sMeowthAlolaEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PERSIAN_ALOLA}),
    },

    [SPECIES_PERSIAN_ALOLA] =
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
        .frontPic = gMonFrontPic_PersianAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_PersianAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PersianAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PersianAlola,
        .shinyPalette = gMonShinyPalette_PersianAlola,
        .iconSprite = gMonIcon_PersianAlola,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Persian)
        OVERWORLD(
            sPicTable_PersianAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PersianAlola,
            gShinyOverworldPalette_PersianAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sPersianAlolaLevelUpLearnset,
        .teachableLearnset = sPersianAlolaTeachableLearnset,
        .formSpeciesIdTable = sPersianFormSpeciesIdTable,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALAR] =
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
        .frontPic = gMonFrontPic_MeowthGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeowthGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthGalar,
        .shinyPalette = gMonShinyPalette_MeowthGalar,
        .iconSprite = gMonIcon_MeowthGalar,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Meowth)
        OVERWORLD(
            sPicTable_MeowthGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MeowthGalar,
            gShinyOverworldPalette_MeowthGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sMeowthGalarLevelUpLearnset,
        .teachableLearnset = sMeowthGalarTeachableLearnset,
        .eggMoveLearnset = sMeowthGalarEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
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
        .frontAnimFrames = sAnims_Perrserker,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Perrserker,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Perrserker,
        .shinyPalette = gMonShinyPalette_Perrserker,
        .iconSprite = gMonIcon_Perrserker,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Perrserker)
        OVERWORLD(
            sPicTable_Perrserker,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Perrserker,
            gShinyOverworldPalette_Perrserker
        )
        .levelUpLearnset = sPerrserkerLevelUpLearnset,
        .teachableLearnset = sPerrserkerTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GMAX] =
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
        .frontPic = gMonFrontPic_MeowthGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MeowthGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeowthGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MeowthGmax,
        .shinyPalette = gMonShinyPalette_MeowthGmax,
        .iconSprite = gMonIcon_MeowthGmax,
        .iconPalIndex = 1,
        SHADOW(4, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Meowth)
        .isGigantamax = TRUE,
        .levelUpLearnset = sMeowthLevelUpLearnset,
        .teachableLearnset = sMeowthTeachableLearnset,
        .eggMoveLearnset = sMeowthEggMoveLearnset,
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable,
        .formChangeTable = sMeowthFormChangeTable,
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
        .frontAnimFrames = sAnims_Psyduck,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Psyduck,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Chicchimon,
        .shinyPalette = gMonShinyPalette_Chicchimon,
        .iconSprite = gMonIcon_Chicchimon,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Psyduck)
        OVERWORLD(
            sPicTable_Psyduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Psyduck,
            gShinyOverworldPalette_Psyduck
        )
        .levelUpLearnset = sPsyduckLevelUpLearnset,
        .teachableLearnset = sPsyduckTeachableLearnset,
        .eggMoveLearnset = sPsyduckEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 30, SPECIES_DOTFALCMON},
                                {EVO_SPATTACK, 14, SPECIES_MUCHOMON},
                                {EVO_ATTACK, 14, SPECIES_PENGUINMON},
                                {EVO_SPEED, 16, SPECIES_FALCOMON},
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
        .frontPic = gMonFrontPic_Golduck,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = sAnims_Golduck,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Golduck,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Golduck,
        .shinyPalette = gMonShinyPalette_Golduck,
        .iconSprite = gMonIcon_Golduck,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Golduck)
        OVERWORLD(
            sPicTable_Golduck,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golduck,
            gShinyOverworldPalette_Golduck
        )
        .levelUpLearnset = sGolduckLevelUpLearnset,
        .teachableLearnset = sGolduckTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 16, SPECIES_GOTSUMON},
                                {EVO_SPATTACK, 19, SPECIES_CORONAMON},
                                {EVO_ATTACK, 16, SPECIES_FLAMEMON},
                                {EVO_SPEED, 18, SPECIES_VORVOMON},
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
        .frontPic = gMonFrontPic_Mankey,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Mankey,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Mankey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Demiveemon,
        .shinyPalette = gMonShinyPalette_Demiveemon,
        .iconSprite = gMonIcon_Demiveemon,
        .iconPalIndex = 1,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Mankey)
        OVERWORLD(
            sPicTable_Mankey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mankey,
            gShinyOverworldPalette_Mankey
        )
        .levelUpLearnset = sMankeyLevelUpLearnset,
        .teachableLearnset = sMankeyTeachableLearnset,
        .eggMoveLearnset = sMankeyEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Primeape,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = sAnims_Primeape,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Primeape,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Dorimon,
        .shinyPalette = gMonShinyPalette_Dorimon,
        .iconSprite = gMonIcon_Dorimon,
        .iconPalIndex = 2,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Primeape)
        OVERWORLD(
            sPicTable_Primeape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Primeape,
            gShinyOverworldPalette_Primeape
        )
        .levelUpLearnset = sPrimeapeLevelUpLearnset,
        .teachableLearnset = sPrimeapeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 30, SPECIES_BLKAGUMON},
                                {EVO_SPATTACK, 14, SPECIES_SHAMANMON},
                                {EVO_ATTACK, 15, SPECIES_MONODRAMON},
                                {EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                                {EVO_LEVEL, 13, SPECIES_DORUMON}),
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
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Annihilape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Annihilape,
        .shinyPalette = gMonShinyPalette_Annihilape,
        .iconSprite = gMonIcon_Annihilape,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Annihilape)
        OVERWORLD(
            sPicTable_Annihilape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Growlithe,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BACK_AND_LUNGE : ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Growlithe,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Growlithe,
        .shinyPalette = gMonShinyPalette_Growlithe,
        .iconSprite = gMonIcon_Growlithe,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Growlithe)
        OVERWORLD(
            sPicTable_Growlithe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Growlithe,
            gShinyOverworldPalette_Growlithe
        )
        .levelUpLearnset = sGrowlitheLevelUpLearnset,
        .teachableLearnset = sGrowlitheTeachableLearnset,
        .eggMoveLearnset = sGrowlitheEggMoveLearnset,
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_KOKABUIMON},
                                {EVO_DEFENSE, 15, SPECIES_BEARMON},
                                {EVO_SPEED, 14, SPECIES_GAZIMON},
                                {EVO_ATTACK, 14, SPECIES_ELECMON_VIOLET},
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
        .frontAnimFrames = sAnims_Arcanine,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 40 : 8,
        .backPic = gMonBackPic_Arcanine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Arcanine,
        .shinyPalette = gMonShinyPalette_Arcanine,
        .iconSprite = gMonIcon_Arcanine,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Arcanine)
        OVERWORLD(
            sPicTable_Arcanine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Arcanine,
            gShinyOverworldPalette_Arcanine
        )
        .levelUpLearnset = sArcanineLevelUpLearnset,
        .teachableLearnset = sArcanineTeachableLearnset,
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 35, SPECIES_SHOUTMON},
                                {EVO_DEFENSE, 16, SPECIES_HAGURUMON},
                                {EVO_ATTACK, 18, SPECIES_GOBLIMON},
                                {EVO_SPATTACK, 17, SPECIES_SOLARMON},
                                {EVO_LEVEL, 16, SPECIES_GUILMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUI] =
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
        .frontPic = gMonFrontPic_GrowlitheHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrowlitheHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrowlitheHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GrowlitheHisui,
        .shinyPalette = gMonShinyPalette_GrowlitheHisui,
        .iconSprite = gMonIcon_GrowlitheHisui,
        .iconPalIndex = 0,
        SHADOW(2, -2, SHADOW_SIZE_M)
        FOOTPRINT(Growlithe)
        OVERWORLD(
            sPicTable_GrowlitheHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrowlitheHisui,
            gShinyOverworldPalette_GrowlitheHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sGrowlitheHisuiLevelUpLearnset,
        .teachableLearnset = sGrowlitheHisuiTeachableLearnset,
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE_HISUI}),
    },

    [SPECIES_ARCANINE_HISUI] =
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
        .frontPic = gMonFrontPic_ArcanineHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArcanineHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ArcanineHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArcanineHisui,
        .shinyPalette = gMonShinyPalette_ArcanineHisui,
        .iconSprite = gMonIcon_ArcanineHisui,
        .iconPalIndex = 0,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Arcanine)
        OVERWORLD(
            sPicTable_ArcanineHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArcanineHisui,
            gShinyOverworldPalette_ArcanineHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sArcanineHisuiLevelUpLearnset,
        .teachableLearnset = sArcanineHisuiTeachableLearnset,
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Poliwag,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 13,
        .frontAnimFrames = sAnims_Poliwag,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Poliwag,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Gummymon,
        .shinyPalette = gMonShinyPalette_Gummymon,
        .iconSprite = gMonIcon_Gummymon,
        .iconPalIndex = 0,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Poliwag)
        OVERWORLD(
            sPicTable_Poliwag,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwag,
            gShinyOverworldPalette_Poliwag
        )
        .levelUpLearnset = sPoliwagLevelUpLearnset,
        .teachableLearnset = sPoliwagTeachableLearnset,
        .eggMoveLearnset = sPoliwagEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 14, SPECIES_HAZYAGUMON},
                                {EVO_SPATTACK, 15, SPECIES_TAPIRMON},
                                {EVO_ATTACK, 16, SPECIES_GAOMON},
                                {EVO_SPEED, 17, SPECIES_JAZAMON},
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
        .frontPic = gMonFrontPic_Poliwhirl,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = sAnims_Poliwhirl,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Poliwhirl,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Gurimon,
        .shinyPalette = gMonShinyPalette_Gurimon,
        .iconSprite = gMonIcon_Gurimon,
        .iconPalIndex = 0,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Poliwhirl)
        OVERWORLD(
            sPicTable_Poliwhirl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwhirl,
            gShinyOverworldPalette_Poliwhirl
        )
        .levelUpLearnset = sPoliwhirlLevelUpLearnset,
        .teachableLearnset = sPoliwhirlTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 13, SPECIES_BOKOMON},
                                {EVO_SPEED, 13, SPECIES_MONMON},
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
        .frontPic = gMonFrontPic_Poliwrath,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Poliwrath,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Poliwrath,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Hiyarimon,
        .shinyPalette = gMonShinyPalette_Hiyarimon,
        .iconSprite = gMonIcon_Hiyarimon,
        .iconPalIndex = 0,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Poliwrath)
        OVERWORLD(
            sPicTable_Poliwrath,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Poliwrath,
            gShinyOverworldPalette_Poliwrath
        )
        .levelUpLearnset = sPoliwrathLevelUpLearnset,
        .teachableLearnset = sPoliwrathTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 15, SPECIES_BEARMON},
                                {EVO_ATTACK, 15, SPECIES_BULUCOMON},
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
        .frontPic = gMonFrontPic_Politoed,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Politoed,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Politoed,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Kamemon,
        .shinyPalette = gMonShinyPalette_Kamemon,
        .iconSprite = gMonIcon_Kamemon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PolitoedF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_PolitoedF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Politoed)
        OVERWORLD(
            sPicTable_Politoed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Politoed,
            gShinyOverworldPalette_Politoed
        )
        OVERWORLD_FEMALE(
            sPicTable_PolitoedF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sPolitoedLevelUpLearnset,
        .teachableLearnset = sPolitoedTeachableLearnset,
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
        .frontPic = gMonFrontPic_Abra,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .frontAnimFrames = sAnims_Abra,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Abra,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Hopmon,
        .shinyPalette = gMonShinyPalette_Hopmon,
        .iconSprite = gMonIcon_Hopmon,
        .iconPalIndex = 2,
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Abra)
        OVERWORLD(
            sPicTable_Abra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Abra,
            gShinyOverworldPalette_Abra
        )
        .levelUpLearnset = sAbraLevelUpLearnset,
        .teachableLearnset = sAbraTeachableLearnset,
        .eggMoveLearnset = sAbraEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_VEEMON},
                                {EVO_SPDEFENSE, 18, SPECIES_GABUMON},
                                {EVO_SPATTACK, 17, SPECIES_JUNKMON},
                                {EVO_SPEED, 17, SPECIES_JAZAMON},
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
        .frontPic = gMonFrontPic_Kadabra,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kakkinmon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Kadabra,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kakkinmon,
        .shinyPalette = gMonShinyPalette_Kakkinmon,
        .iconSprite = gMonIcon_Kakkinmon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KadabraF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_KadabraF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Kadabra)
        OVERWORLD(
            sPicTable_Kadabra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Kadabra,
            gShinyOverworldPalette_Kadabra
        )
        OVERWORLD_FEMALE(
            sPicTable_KadabraF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sKadabraLevelUpLearnset,
        .teachableLearnset = sKadabraTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 14, SPECIES_ESPIMON},
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
        .frontPic = gMonFrontPic_Alakazam,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = sAnims_Alakazam,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Alakazam,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Kapurimon,
        .shinyPalette = gMonShinyPalette_Kapurimon,
        .iconSprite = gMonIcon_Kapurimon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AlakazamF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_AlakazamF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Alakazam)
        OVERWORLD(
            sPicTable_Alakazam,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Alakazam,
            gShinyOverworldPalette_Alakazam
        )
        OVERWORLD_FEMALE(
            sPicTable_AlakazamF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE
        )
        .levelUpLearnset = sAlakazamLevelUpLearnset,
        .teachableLearnset = sAlakazamTeachableLearnset,
        .formSpeciesIdTable = sAlakazamFormSpeciesIdTable,
        .formChangeTable = sAlakazamFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 16, SPECIES_PHASCOMON},
                                {EVO_HEALTH, 34, SPECIES_PAWNMON_WHITE},
                                {EVO_DEFENSE, 19, SPECIES_HAGURUMON},
                                {EVO_ATTACK, 15, SPECIES_KOTEMON},
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
        .frontAnimFrames = sAnims_KapurimonMega,
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
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(Alakazam)
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
        .frontPic = gMonFrontPic_Machop,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Machop,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Machop,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Kokomon,
        .shinyPalette = gMonShinyPalette_Kokomon,
        .iconSprite = gMonIcon_Kokomon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Machop)
        OVERWORLD(
            sPicTable_Machop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machop,
            gShinyOverworldPalette_Machop
        )
        .levelUpLearnset = sMachopLevelUpLearnset,
        .teachableLearnset = sMachopTeachableLearnset,
        .eggMoveLearnset = sMachopEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 15, SPECIES_BLKTOYAMON},
                                {EVO_SPDEFENSE, 16, SPECIES_WORMMON},
                                {EVO_DEFENSE, 16, SPECIES_RYUDAMON},
                                {EVO_SPATTACK, 15, SPECIES_DEMIDEVMON},
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
        .frontPic = gMonFrontPic_Machoke,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Machoke,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Machoke,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Koromon,
        .shinyPalette = gMonShinyPalette_Koromon,
        .iconSprite = gMonIcon_Koromon,
        .iconPalIndex = 2,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Machoke)
        OVERWORLD(
            sPicTable_Machoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machoke,
            gShinyOverworldPalette_Machoke
        )
        .levelUpLearnset = sMachokeLevelUpLearnset,
        .teachableLearnset = sMachokeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 16, SPECIES_SHOUTMON},
                                {EVO_HEALTH, 36, SPECIES_SAMUAGUMON},
                                {EVO_SPDEFENSE, 16, SPECIES_DOTAGUMON},
                                {EVO_ATTACK, 16, SPECIES_AGUMON_06},
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
        .frontAnimFrames = sAnims_Machamp,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Machamp,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kozenimon,
        .shinyPalette = gMonShinyPalette_Kozenimon,
        .iconSprite = gMonIcon_Kozenimon,
        .iconPalIndex = 0,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Machamp)
        OVERWORLD(
            sPicTable_Machamp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Machamp,
            gShinyOverworldPalette_Machamp
        )
        .levelUpLearnset = sMachampLevelUpLearnset,
        .teachableLearnset = sMachampTeachableLearnset,
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,
        .formChangeTable = sMachampFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_ZENIMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GMAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
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
        .frontPic = gMonFrontPic_MachampGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MachampGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MachampGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MachampGmax,
        .shinyPalette = gMonShinyPalette_MachampGmax,
        .iconSprite = gMonIcon_MachampGmax,
        .iconPalIndex = 0,
        SHADOW(7, 13, SHADOW_SIZE_L)
        FOOTPRINT(Machamp)
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
        .frontPic = gMonFrontPic_Bellsprout,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = sAnims_Bellsprout,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Bellsprout,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyaromon,
        .shinyPalette = gMonShinyPalette_Kyaromon,
        .iconSprite = gMonIcon_Kyaromon,
        .iconPalIndex = 1,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Bellsprout)
        OVERWORLD(
            sPicTable_Bellsprout,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bellsprout,
            gShinyOverworldPalette_Bellsprout
        )
        .levelUpLearnset = sBellsproutLevelUpLearnset,
        .teachableLearnset = sBellsproutTeachableLearnset,
        .eggMoveLearnset = sBellsproutEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 15, SPECIES_KUDAMON_06},
                                {EVO_SPATTACK, 15, SPECIES_IMPMON},
                                {EVO_ATTACK, 18, SPECIES_ELECMON_VIOLET},
                                {EVO_DEFENSE, 17, SPECIES_KAMEMON},
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
        .frontPic = gMonFrontPic_Weepinbell,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kyokyomon,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        .backPic = gMonBackPic_Weepinbell,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyokyomon,
        .shinyPalette = gMonShinyPalette_Kyokyomon,
        .iconSprite = gMonIcon_Kyokyomon,
        .iconPalIndex = 1,
        SHADOW(-3, 3, SHADOW_SIZE_M)
        FOOTPRINT(Weepinbell)
        OVERWORLD(
            sPicTable_Weepinbell,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Weepinbell,
            gShinyOverworldPalette_Weepinbell
        )
        .levelUpLearnset = sWeepinbellLevelUpLearnset,
        .teachableLearnset = sWeepinbellTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_COMMDRAMON},
                                {EVO_LEVEL, 13, SPECIES_RYUDAMON}),
    },

    [SPECIES_KYUPIMON] =
    {
        .baseHP        = 23,
        .baseAttack    = 19,
        .baseDefense   = 19,
        .baseSpeed     = 28,
        .baseSpAttack  = 31,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_LIGHT, TYPE_FLYING),
        .attribute = TYPE_FREE,
        .catchRate = 200,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
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
        .frontPic = gMonFrontPic_Victreebel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = sAnims_Victreebel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Kyupimon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Kyupimon,
        .shinyPalette = gMonShinyPalette_Kyupimon,
        .iconSprite = gMonIcon_Kyupimon,
        .iconPalIndex = 1,
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Victreebel)
        OVERWORLD(
            sPicTable_Victreebel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Victreebel,
            gShinyOverworldPalette_Victreebel
        )
        .levelUpLearnset = sVictreebelLevelUpLearnset,
        .teachableLearnset = sVictreebelTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 24, SPECIES_IMPMON},
                                {EVO_ATTACK, 19, SPECIES_TERRIERMON},
                                {EVO_SPDEFENSE, 25, SPECIES_SALAMON},
                                {EVO_SPEED, 25, SPECIES_PATAMON},
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
        .frontPic = gMonFrontPic_Tentacool,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = sAnims_Tentacool,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tentacool,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tentacool,
        .shinyPalette = gMonShinyPalette_Tentacool,
        .iconSprite = gMonIcon_Tentacool,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Tentacool)
        OVERWORLD(
            sPicTable_Tentacool,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Tentacool,
            gShinyOverworldPalette_Tentacool
        )
        .levelUpLearnset = sTentacoolLevelUpLearnset,
        .teachableLearnset = sTentacoolTeachableLearnset,
        .eggMoveLearnset = sTentacoolEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 14, SPECIES_KOKUWAMON},
                                {EVO_HEALTH, 32, SPECIES_KUNEMON},
                                {EVO_SPATTACK, 16, SPECIES_TENTOMON},
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
        .frontAnimFrames = sAnims_Tentacruel,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Tentacruel,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Tentacruel,
        .shinyPalette = gMonShinyPalette_Tentacruel,
        .iconSprite = gMonIcon_Tentacruel,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tentacruel)
        OVERWORLD(
            sPicTable_Tentacruel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Tentacruel,
            gShinyOverworldPalette_Tentacruel
        )
        .levelUpLearnset = sTentacruelLevelUpLearnset,
        .teachableLearnset = sTentacruelTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 17, SPECIES_GIZAMON},
                                {EVO_HEALTH, 36, SPECIES_CHIKURIMON},
                                {EVO_SPATTACK, 19, SPECIES_DRACMON},
                                {EVO_DEFENSE, 17, SPECIES_HAGURUMON},
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
        .frontPic = gMonFrontPic_Geodude,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 18 : 19,
        .frontAnimFrames = sAnims_Geodude,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 10,
        .backPic = gMonBackPic_Geodude,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Monimon,
        .shinyPalette = gMonShinyPalette_Monimon,
        .iconSprite = gMonIcon_Monimon,
        .iconPalIndex = 1,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Geodude)
        OVERWORLD(
            sPicTable_Geodude,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Geodude,
            gShinyOverworldPalette_Geodude
        )
        .levelUpLearnset = sGeodudeLevelUpLearnset,
        .teachableLearnset = sGeodudeTeachableLearnset,
        .eggMoveLearnset = sGeodudeEggMoveLearnset,
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Graveler,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = sAnims_Graveler,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Graveler,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Moonmon,
        .shinyPalette = gMonShinyPalette_Moonmon,
        .iconSprite = gMonIcon_Moonmon,
        .iconPalIndex = 1,
        SHADOW(0, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Graveler)
        OVERWORLD(
            sPicTable_Graveler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Graveler,
            gShinyOverworldPalette_Graveler
        )
        .levelUpLearnset = sGravelerLevelUpLearnset,
        .teachableLearnset = sGravelerTeachableLearnset,
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 35, SPECIES_BLKAGUMON},
                                {EVO_ATTACK, 16, SPECIES_GAZIMON},
                                {EVO_SPATTACK, 17, SPECIES_LOPMON},
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
        .frontPic = gMonFrontPic_Golem,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .frontAnimFrames = sAnims_Golem,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Golem,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 32) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Golem,
        .shinyPalette = gMonShinyPalette_Golem,
        .iconSprite = gMonIcon_Golem,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(3, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Golem)
        OVERWORLD(
            sPicTable_Golem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golem,
            gShinyOverworldPalette_Golem
        )
        .levelUpLearnset = sGolemLevelUpLearnset,
        .teachableLearnset = sGolemTeachableLearnset,
        .formSpeciesIdTable = sGolemFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_TENTOMON},
                                {EVO_SPEED, 15, SPECIES_BIYOMON},
                                {EVO_ATTACK, 15, SPECIES_FANBEEMON},
                                {EVO_SPATTACK, 16, SPECIES_MORPHOMON},
                                {EVO_LEVEL, 15, SPECIES_TENTOMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_GEODUDE_ALOLA] =
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
        .frontPic = gMonFrontPic_GeodudeAlola,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_GeodudeAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_GeodudeAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GeodudeAlola,
        .shinyPalette = gMonShinyPalette_GeodudeAlola,
        .iconSprite = gMonIcon_GeodudeAlola,
        .iconPalIndex = 2,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Geodude)
        OVERWORLD(
            sPicTable_GeodudeAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GeodudeAlola,
            gShinyOverworldPalette_GeodudeAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGeodudeAlolaLevelUpLearnset,
        .teachableLearnset = sGeodudeAlolaTeachableLearnset,
        .eggMoveLearnset = sGeodudeAlolaEggMoveLearnset,
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER_ALOLA}),
    },

    [SPECIES_GRAVELER_ALOLA] =
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
        .frontPic = gMonFrontPic_GravelerAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_GravelerAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GravelerAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GravelerAlola,
        .shinyPalette = gMonShinyPalette_GravelerAlola,
        .iconSprite = gMonIcon_GravelerAlola,
        .iconPalIndex = 0,
        SHADOW(1, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Graveler)
        OVERWORLD(
            sPicTable_GravelerAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GravelerAlola,
            gShinyOverworldPalette_GravelerAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGravelerAlolaLevelUpLearnset,
        .teachableLearnset = sGravelerAlolaTeachableLearnset,
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLA},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLA}),
    },

    [SPECIES_GOLEM_ALOLA] =
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
        .frontPic = gMonFrontPic_GolemAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GolemAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GolemAlola,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GolemAlola,
        .shinyPalette = gMonShinyPalette_GolemAlola,
        .iconSprite = gMonIcon_GolemAlola,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Golem)
        OVERWORLD(
            sPicTable_GolemAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GolemAlola,
            gShinyOverworldPalette_GolemAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGolemAlolaLevelUpLearnset,
        .teachableLearnset = sGolemAlolaTeachableLearnset,
        .formSpeciesIdTable = sGolemFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Ponyta,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_Ponyta,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_ORANGE : ANIM_V_SHAKE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 10,
        .backPic = gMonBackPic_Ponyta,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Ponyta,
        .shinyPalette = gMonShinyPalette_Ponyta,
        .iconSprite = gMonIcon_Ponyta,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Ponyta)
        OVERWORLD(
            sPicTable_Ponyta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ponyta,
            gShinyOverworldPalette_Ponyta
        )
        .levelUpLearnset = sPonytaLevelUpLearnset,
        .teachableLearnset = sPonytaTeachableLearnset,
        .eggMoveLearnset = sPonytaEggMoveLearnset,
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH}),
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
        .frontAnimFrames = sAnims_Rapidash,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCULAR_VIBRATE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Rapidash,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Rapidash,
        .shinyPalette = gMonShinyPalette_Rapidash,
        .iconSprite = gMonIcon_Rapidash,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rapidash)
        OVERWORLD(
            sPicTable_Rapidash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rapidash,
            gShinyOverworldPalette_Rapidash
        )
        .levelUpLearnset = sRapidashLevelUpLearnset,
        .teachableLearnset = sRapidashTeachableLearnset,
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_DEFENSE, 15, SPECIES_ARMADILMON},
                                {EVO_SPATTACK, 14, SPECIES_TINKERMON},
                                {EVO_ATTACK, 17, SPECIES_RENAMON},
                                {EVO_SPEED, 17, SPECIES_HAWKMON},
                                {EVO_LEVEL, 14, SPECIES_SALAMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALAR] =
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
        .frontPic = gMonFrontPic_PonytaGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_PonytaGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PonytaGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_PonytaGalar,
        .shinyPalette = gMonShinyPalette_PonytaGalar,
        .iconSprite = gMonIcon_PonytaGalar,
        .iconPalIndex = 2,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Ponyta)
        OVERWORLD(
            sPicTable_PonytaGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_PonytaGalar,
            gShinyOverworldPalette_PonytaGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sPonytaGalarLevelUpLearnset,
        .teachableLearnset = sPonytaGalarTeachableLearnset,
        .eggMoveLearnset = sPonytaGalarEggMoveLearnset,
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH_GALAR}),
    },

    [SPECIES_RAPIDASH_GALAR] =
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
        .frontPic = gMonFrontPic_RapidashGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RapidashGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RapidashGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_RapidashGalar,
        .shinyPalette = gMonShinyPalette_RapidashGalar,
        .iconSprite = gMonIcon_RapidashGalar,
        .iconPalIndex = 2,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rapidash)
        OVERWORLD(
            sPicTable_RapidashGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_RapidashGalar,
            gShinyOverworldPalette_RapidashGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sRapidashGalarLevelUpLearnset,
        .teachableLearnset = sRapidashGalarTeachableLearnset,
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Slowpoke,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 16,
        .frontAnimFrames = sAnims_Slowpoke,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Pagumon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pagumon,
        .shinyPalette = gMonShinyPalette_Pagumon,
        .iconSprite = gMonIcon_Pagumon,
        .iconPalIndex = 0,
        SHADOW(1, -5, SHADOW_SIZE_L)
        FOOTPRINT(Slowpoke)
        OVERWORLD(
            sPicTable_Slowpoke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowpoke,
            gShinyOverworldPalette_Slowpoke
        )
        .levelUpLearnset = sSlowpokeLevelUpLearnset,
        .teachableLearnset = sSlowpokeTeachableLearnset,
        .eggMoveLearnset = sSlowpokeEggMoveLearnset,
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 31, SPECIES_CHUUMON},
                                {EVO_SPEED, 15, SPECIES_TSUKAIMON},
                                {EVO_ATTACK, 14, SPECIES_GIZAMON},
                                {EVO_SPATTACK, 14, SPECIES_IMPMON},
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
        .frontPic = gMonFrontPic_Slowbro,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .frontAnimFrames = sAnims_Slowbro,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Slowbro,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silver,
        .shinyPalette = gMonShinyPalette_Pickmon_silver,
        .iconSprite = gMonIcon_Pickmon_silver,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Slowbro)
        OVERWORLD(
            sPicTable_Slowbro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowbro,
            gShinyOverworldPalette_Slowbro
        )
        .levelUpLearnset = sSlowbroLevelUpLearnset,
        .teachableLearnset = sSlowbroTeachableLearnset,
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable,
        .formChangeTable = sSlowbroFormChangeTable,
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
        .frontPic = gMonFrontPic_Slowking,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Liollmon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Slowking,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Liollmon,
        .shinyPalette = gMonShinyPalette_Liollmon,
        .iconSprite = gMonIcon_Liollmon,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Slowking)
        OVERWORLD(
            sPicTable_Slowking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Slowking,
            gShinyOverworldPalette_Slowking
        )
        .levelUpLearnset = sSlowkingLevelUpLearnset,
        .teachableLearnset = sSlowkingTeachableLearnset,
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 56, SPECIES_EYESMON},
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
        .frontAnimFrames = sAnims_Pickmon_silverMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pickmon_silverMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Pickmon_silverMega,
        .shinyPalette = gMonShinyPalette_Pickmon_silverMega,
        .iconSprite = gMonIcon_Pickmon_silverMega,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Slowbro)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPickmon_silverLevelUpLearnset,
        .teachableLearnset = sPickmon_silverTeachableLearnset,
        .formSpeciesIdTable = sPickmon_silverFormSpeciesIdTable,
        .formChangeTable = sPickmon_silverFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALAR] =
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
        .speciesName = _("Slowpoke"),
        .cryId = CRY_SLOWPOKE_GALAR,
        .natDexNum = NATIONAL_DEX_SLOWPOKE,
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
        .frontPic = gMonFrontPic_SlowpokeGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SlowpokeGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowpokeGalar,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowpokeGalar,
        .shinyPalette = gMonShinyPalette_SlowpokeGalar,
        .iconSprite = gMonIcon_SlowpokeGalar,
        .iconPalIndex = 0,
        SHADOW(-3, -8, SHADOW_SIZE_L)
        FOOTPRINT(Slowpoke)
        OVERWORLD(
            sPicTable_SlowpokeGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowpokeGalar,
            gShinyOverworldPalette_SlowpokeGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowpokeGalarLevelUpLearnset,
        .teachableLearnset = sSlowpokeGalarTeachableLearnset,
        .eggMoveLearnset = sSlowpokeGalarEggMoveLearnset,
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_SLOWBRO_GALAR},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_SLOWKING_GALAR}),
    },

    [SPECIES_SLOWBRO_GALAR] =
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
        .frontPic = gMonFrontPic_SlowbroGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SlowbroGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowbroGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowbroGalar,
        .shinyPalette = gMonShinyPalette_SlowbroGalar,
        .iconSprite = gMonIcon_SlowbroGalar,
        .iconPalIndex = 0,
        SHADOW(-5, 9, SHADOW_SIZE_L)
        FOOTPRINT(Slowbro)
        OVERWORLD_SET_ANIM(
            sPicTable_SlowbroGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_SlowbroGalar,
            gShinyOverworldPalette_SlowbroGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowbroGalarLevelUpLearnset,
        .teachableLearnset = sSlowbroGalarTeachableLearnset,
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALAR] =
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
        .frontPic = gMonFrontPic_SlowkingGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowkingGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlowkingGalar,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SlowkingGalar,
        .shinyPalette = gMonShinyPalette_SlowkingGalar,
        .iconSprite = gMonIcon_SlowkingGalar,
        .iconPalIndex = 0,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Slowking)
        OVERWORLD(
            sPicTable_SlowkingGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SlowkingGalar,
            gShinyOverworldPalette_SlowkingGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sSlowkingGalarLevelUpLearnset,
        .teachableLearnset = sSlowkingGalarTeachableLearnset,
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Magnemite,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 20,
        .frontAnimFrames = sAnims_Magnemite,
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 16 : 17,
        .backPic = gMonBackPic_Magnemite,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_white,
        .shinyPalette = gMonShinyPalette_Pickmon_white,
        .iconSprite = gMonIcon_Pickmon_white,
        .iconPalIndex = 0,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Magnemite)
        OVERWORLD(
            sPicTable_Magnemite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magnemite,
            gShinyOverworldPalette_Magnemite
        )
        .levelUpLearnset = sMagnemiteLevelUpLearnset,
        .teachableLearnset = sMagnemiteTeachableLearnset,
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
        .frontPic = gMonFrontPic_Magneton,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Magneton,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backPic = gMonBackPic_Magneton,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Pickmon_red,
        .shinyPalette = gMonShinyPalette_Pickmon_red,
        .iconSprite = gMonIcon_Pickmon_red,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Magneton)
        OVERWORLD(
            sPicTable_Magneton,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Magneton,
            gShinyOverworldPalette_Magneton
        )
        .levelUpLearnset = sMagnetonLevelUpLearnset,
        .teachableLearnset = sMagnetonTeachableLearnset,
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
        .frontAnimFrames = sAnims_Magnezone,
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
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magnezone)
        OVERWORLD(
            sPicTable_Magnezone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Farfetchd,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .frontAnimFrames = sAnims_Farfetchd,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Farfetchd,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Pinamon,
        .shinyPalette = gMonShinyPalette_Pinamon,
        .iconSprite = gMonIcon_Pinamon,
        .iconPalIndex = 1,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Farfetchd)
        OVERWORLD_SET_ANIM(
            sPicTable_Farfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following_Asym,
            gOverworldPalette_Farfetchd,
            gShinyOverworldPalette_Farfetchd
        )
        .levelUpLearnset = sFarfetchdLevelUpLearnset,
        .teachableLearnset = sFarfetchdTeachableLearnset,
        .eggMoveLearnset = sFarfetchdEggMoveLearnset,
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_GOBLIMON},
                                {EVO_SPATTACK, 16, SPECIES_KUDAMON_06},
                                {EVO_SPEED, 18, SPECIES_SWIMMON},
                                {EVO_SPDEFENSE, 16, SPECIES_YUKIAGUMON_06},
                                {EVO_LEVEL, 15, SPECIES_FALCOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALAR] =
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
        .frontPic = gMonFrontPic_FarfetchdGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_FarfetchdGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FarfetchdGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_FarfetchdGalar,
        .shinyPalette = gMonShinyPalette_FarfetchdGalar,
        .iconSprite = gMonIcon_FarfetchdGalar,
        .iconPalIndex = 1,
        SHADOW(-7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Farfetchd)
        OVERWORLD(
            sPicTable_FarfetchdGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_FarfetchdGalar,
            gShinyOverworldPalette_FarfetchdGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sFarfetchdGalarLevelUpLearnset,
        .teachableLearnset = sFarfetchdGalarTeachableLearnset,
        .eggMoveLearnset = sFarfetchdGalarEggMoveLearnset,
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_CRITICAL_HITS, 3, SPECIES_SIRFETCHD}),
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
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sirfetchd,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sirfetchd,
        .shinyPalette = gMonShinyPalette_Sirfetchd,
        .iconSprite = gMonIcon_Sirfetchd,
        .iconPalIndex = 1,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Sirfetchd)
        OVERWORLD(
            sPicTable_Sirfetchd,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Doduo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = sAnims_Doduo,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Doduo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Poromon,
        .shinyPalette = gMonShinyPalette_Poromon,
        .iconSprite = gMonIcon_Poromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_DoduoF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_DoduoF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(6, 5, SHADOW_SIZE_M)
        FOOTPRINT(Doduo)
        OVERWORLD(
            sPicTable_Doduo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Doduo,
            gShinyOverworldPalette_Doduo
        )
        OVERWORLD_FEMALE(
            sPicTable_DoduoF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sDoduoLevelUpLearnset,
        .teachableLearnset = sDoduoTeachableLearnset,
        .eggMoveLearnset = sDoduoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 31, SPECIES_POMUMON}, // Add Ukkomon
                                {EVO_SPATTACK, 15, SPECIES_TINKERMON},
                                {EVO_SPEED, 15, SPECIES_FALCOMON_06},
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
        .frontPic = gMonFrontPic_Dodrio,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dodrio,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_LUNGE_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dodrio,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Puroromon,
        .shinyPalette = gMonShinyPalette_Puroromon,
        .iconSprite = gMonIcon_Puroromon,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_DodrioF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_DodrioF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Dodrio)
        OVERWORLD(
            sPicTable_Dodrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dodrio,
            gShinyOverworldPalette_Dodrio
        )
        OVERWORLD_FEMALE(
            sPicTable_DodrioF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sDodrioLevelUpLearnset,
        .teachableLearnset = sDodrioTeachableLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 12, SPECIES_RYUDAMON},
                                {EVO_ATTACK, 13, SPECIES_DORUMON},
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
        .frontAnimFrames = sAnims_Seel,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Seel,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Seel,
        .shinyPalette = gMonShinyPalette_Seel,
        .iconSprite = gMonIcon_Seel,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Seel)
        OVERWORLD(
            sPicTable_Seel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Seel,
            gShinyOverworldPalette_Seel
        )
        .levelUpLearnset = sSeelLevelUpLearnset,
        .teachableLearnset = sSeelTeachableLearnset,
        .eggMoveLearnset = sSeelEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Dewgong,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .frontAnimFrames = sAnims_Dewgong,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Dewgong,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Puyoyomon,
        .shinyPalette = gMonShinyPalette_Puyoyomon,
        .iconSprite = gMonIcon_Puyoyomon,
        .iconPalIndex = 2,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dewgong)
        OVERWORLD(
            sPicTable_Dewgong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Dewgong,
            gShinyOverworldPalette_Dewgong
        )
        .levelUpLearnset = sDewgongLevelUpLearnset,
        .teachableLearnset = sDewgongTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 14, SPECIES_KODOKGUMON},
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
        .frontPic = gMonFrontPic_Grimer,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 9,
        .frontAnimFrames = sAnims_Grimer,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Grimer,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Sakuttomon,
        .shinyPalette = gMonShinyPalette_Sakuttomon,
        .iconSprite = gMonIcon_Sakuttomon,
        .iconPalIndex = 2,
        SHADOW(2, 3, SHADOW_SIZE_M)
        FOOTPRINT(Grimer)
        OVERWORLD(
            sPicTable_Grimer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Grimer,
            gShinyOverworldPalette_Grimer
        )
        .levelUpLearnset = sGrimerLevelUpLearnset,
        .teachableLearnset = sGrimerTeachableLearnset,
        .eggMoveLearnset = sGrimerEggMoveLearnset,
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_DEFENSE, 19, SPECIES_RYUDAMON},
                                {EVO_ATTACK, 22, SPECIES_HACKMON},
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
        .frontAnimFrames = sAnims_Muk,
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
        SHADOW(-1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Muk)
        OVERWORLD(
            sPicTable_Muk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Muk,
            gShinyOverworldPalette_Muk
        )
        .levelUpLearnset = sMukLevelUpLearnset,
        .teachableLearnset = sMukTeachableLearnset,
        .formSpeciesIdTable = sMukFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_SALAMON},
                                {EVO_HEALTH, 34, SPECIES_KUDAMON_06},
                                {EVO_ATTACK, 19, SPECIES_GUILMON},
                                {EVO_LEVEL, 15, SPECIES_CORONAMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_GRIMER_ALOLA] =
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
        .frontPic = gMonFrontPic_GrimerAlola,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrimerAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrimerAlola,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GrimerAlola,
        .shinyPalette = gMonShinyPalette_GrimerAlola,
        .iconSprite = gMonIcon_GrimerAlola,
        .iconPalIndex = 1,
        SHADOW(2, 1, SHADOW_SIZE_M)
        FOOTPRINT(Grimer)
        OVERWORLD(
            sPicTable_GrimerAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_GrimerAlola,
            gShinyOverworldPalette_GrimerAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sGrimerAlolaLevelUpLearnset,
        .teachableLearnset = sGrimerAlolaTeachableLearnset,
        .eggMoveLearnset = sGrimerAlolaEggMoveLearnset,
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK_ALOLA}),
    },

    [SPECIES_MUK_ALOLA] =
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
        .frontPic = gMonFrontPic_MukAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MukAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MukAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MukAlola,
        .shinyPalette = gMonShinyPalette_MukAlola,
        .iconSprite = gMonIcon_MukAlola,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Muk)
        OVERWORLD(
            sPicTable_MukAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MukAlola,
            gShinyOverworldPalette_MukAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMukAlolaLevelUpLearnset,
        .teachableLearnset = sMukAlolaTeachableLearnset,
        .formSpeciesIdTable = sMukFormSpeciesIdTable,
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
        .frontAnimFrames = sAnims_Shellder,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Shellder,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 24),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tanemon,
        .shinyPalette = gMonShinyPalette_Tanemon,
        .iconSprite = gMonIcon_Tanemon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_S)
        FOOTPRINT(Shellder)
        OVERWORLD(
            sPicTable_Shellder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Shellder,
            gShinyOverworldPalette_Shellder
        )
        .levelUpLearnset = sShellderLevelUpLearnset,
        .teachableLearnset = sShellderTeachableLearnset,
        .eggMoveLearnset = sShellderEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_HEALTH, 32, SPECIES_MUSHROOMON},
                                {EVO_SPDEFENSE, 15, SPECIES_ARURAUMON},
                                {EVO_ATTACK, 15, SPECIES_LALAMON},
                                {EVO_SPATTACK, 16, SPECIES_FLORAMON},
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
        .frontPic = gMonFrontPic_Cloyster,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 3,
        .frontAnimFrames = sAnims_Cloyster,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE_WOBBLE : ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Cloyster,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Tokomon,
        .shinyPalette = gMonShinyPalette_Tokomon,
        .iconSprite = gMonIcon_Tokomon,
        .iconPalIndex = 2,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Cloyster)
        OVERWORLD(
            sPicTable_Cloyster,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Cloyster,
            gShinyOverworldPalette_Cloyster
        )
        .levelUpLearnset = sCloysterLevelUpLearnset,
        .teachableLearnset = sCloysterTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_DEMIDEVMON},
                                {EVO_SPATTACK, 16, SPECIES_TSUKAIMON},
                                {EVO_HEALTH, 32, SPECIES_DOTFALCMON},
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
        .frontPic = gMonFrontPic_Gastly,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 13,
        .frontAnimFrames = sAnims_Gastly,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GLOW_BLACK : ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 13,
        .backPic = gMonBackPic_Gastly,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Tokomon_x,
        .shinyPalette = gMonShinyPalette_Tokomon_x,
        .iconSprite = gMonIcon_Tokomon_x,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Gastly)
        OVERWORLD(
            sPicTable_Gastly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Gastly,
            gShinyOverworldPalette_Gastly
        )
        .levelUpLearnset = sGastlyLevelUpLearnset,
        .teachableLearnset = sGastlyTeachableLearnset,
        .eggMoveLearnset = sGastlyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 18, SPECIES_HERISSMON},
                                {EVO_SPDEFENSE, 17, SPECIES_GABUMON_X},
                                {EVO_ATTACK, 19, SPECIES_DRACOMON_X},
                                {EVO_SPATTACK, 18, SPECIES_AGUMON_X},
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
        .frontPic = gMonFrontPic_Haunter,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 13,
        .frontAnimFrames = sAnims_Haunter,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 4 : 14,
        .backPic = gMonBackPic_Haunter,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Torballmon,
        .shinyPalette = gMonShinyPalette_Torballmon,
        .iconSprite = gMonIcon_Torballmon,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Haunter)
        OVERWORLD(
            sPicTable_Haunter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Haunter,
            gShinyOverworldPalette_Haunter
        )
        .levelUpLearnset = sHaunterLevelUpLearnset,
        .teachableLearnset = sHaunterTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 15, SPECIES_EBIBURGMON},
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
        .frontAnimFrames = sAnims_Gengar,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Gengar,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Tsumemon,
        .shinyPalette = gMonShinyPalette_Tsumemon,
        .iconSprite = gMonIcon_Tsumemon,
        .iconPalIndex = 2,
        SHADOW(3, 5, SHADOW_SIZE_L)
        FOOTPRINT(Gengar)
        OVERWORLD(
            sPicTable_Gengar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gengar,
            gShinyOverworldPalette_Gengar
        )
        .levelUpLearnset = sGengarLevelUpLearnset,
        .teachableLearnset = sGengarTeachableLearnset,
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,
        .formChangeTable = sGengarFormChangeTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 16, SPECIES_BLKGUILMON},
                                {EVO_SPEED, 17, SPECIES_DEMIDEVMON},
                                {EVO_SPDEFENSE, 14, SPECIES_BLKGABUMON},
                                {EVO_SPATTACK, 15, SPECIES_BLKAGUMON},
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
        .frontAnimFrames = sAnims_TsumemonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TsumemonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_TsumemonMega,
        .shinyPalette = gMonShinyPalette_TsumemonMega,
        .iconSprite = gMonIcon_TsumemonMega,
        .iconPalIndex = 2,
        SHADOW(6, 1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gengar)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTsumemonLevelUpLearnset,
        .teachableLearnset = sTsumemonTeachableLearnset,
        .formSpeciesIdTable = sTsumemonFormSpeciesIdTable,
        .formChangeTable = sTsumemonFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GMAX] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
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
        .frontPic = gMonFrontPic_GengarGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GengarGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_GengarGmax,
        .shinyPalette = gMonShinyPalette_GengarGmax,
        .iconSprite = gMonIcon_GengarGmax,
        .iconPalIndex = 2,
        NO_SHADOW
        FOOTPRINT(Gengar)
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
        .frontPic = gMonFrontPic_Onix,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = sAnims_Onix,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RAPID_H_HOPS : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Onix,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Tsunomon,
        .shinyPalette = gMonShinyPalette_Tsunomon,
        .iconSprite = gMonIcon_Tsunomon,
        .iconPalIndex = 2,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Onix)
        OVERWORLD(
            sPicTable_Onix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Onix,
            gShinyOverworldPalette_Onix
        )
        .levelUpLearnset = sOnixLevelUpLearnset,
        .teachableLearnset = sOnixTeachableLearnset,
        .eggMoveLearnset = sOnixEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 17, SPECIES_MONMON},
                                {EVO_DEFENSE, 16, SPECIES_SYAKOMON},
                                {EVO_HEALTH, 36, SPECIES_PSYCHEMON},
                                {EVO_ATTACK, 19, SPECIES_ELECMON},
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
        .frontPic = gMonFrontPic_Steelix,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Steelix,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SHAKE : ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        .backPic = gMonBackPic_Steelix,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kodekacmon,
        .shinyPalette = gMonShinyPalette_Kodekacmon,
        .iconSprite = gMonIcon_Kodekacmon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SteelixF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_SteelixF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Steelix)
        OVERWORLD(
            sPicTable_Steelix,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Steelix,
            gShinyOverworldPalette_Steelix
        )
        OVERWORLD_FEMALE(
            sPicTable_SteelixF,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sSteelixLevelUpLearnset,
        .teachableLearnset = sSteelixTeachableLearnset,
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,
        .formChangeTable = sSteelixFormChangeTable,
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
        .frontAnimFrames = sAnims_KodekacmonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KodekacmonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_KodekacmonMega,
        .shinyPalette = gMonShinyPalette_KodekacmonMega,
        .iconSprite = gMonIcon_KodekacmonMega,
        .iconPalIndex = 0,
        SHADOW(1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Steelix)
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
        .frontPic = gMonFrontPic_Drowzee,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drowzee,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_CIRCLE_C_CLOCKWISE_SLOW : ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        .backPic = gMonBackPic_Drowzee,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Tumblemon,
        .shinyPalette = gMonShinyPalette_Tumblemon,
        .iconSprite = gMonIcon_Tumblemon,
        .iconPalIndex = 2,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Drowzee)
        OVERWORLD(
            sPicTable_Drowzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Drowzee,
            gShinyOverworldPalette_Drowzee
        )
        .levelUpLearnset = sDrowzeeLevelUpLearnset,
        .teachableLearnset = sDrowzeeTeachableLearnset,
        .eggMoveLearnset = sDrowzeeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPATTACK, 15, SPECIES_EKAKIMON},
                                {EVO_HEALTH, 36, SPECIES_BAKOMON},
                                {EVO_DEFENSE, 17, SPECIES_GOTSUMON},
                                {EVO_ATTACK, 17, SPECIES_STRABIMON},
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
        .frontPic = gMonFrontPic_Hypno,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = sAnims_Hypno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        .backPic = gMonBackPic_Hypno,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Hypno,
        .shinyPalette = gMonShinyPalette_Hypno,
        .iconSprite = gMonIcon_Hypno,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_HypnoF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_HypnoF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-3, 9, SHADOW_SIZE_L)
        FOOTPRINT(Hypno)
        OVERWORLD(
            sPicTable_Hypno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hypno,
            gShinyOverworldPalette_Hypno
        )
        OVERWORLD_FEMALE(
            sPicTable_HypnoF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sHypnoLevelUpLearnset,
        .teachableLearnset = sHypnoTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 15, SPECIES_PILLOMON},
                                {EVO_SPEED, 16, SPECIES_DAMEMON},
                                {EVO_SPATTACK, 15, SPECIES_BOKOMON},
                                {EVO_HEALTH, 34, SPECIES_SANGOMON},
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
        .frontPic = gMonFrontPic_Krabby,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 14,
        .frontAnimFrames = sAnims_Krabby,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SLIDE : ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Krabby,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Krabby,
        .shinyPalette = gMonShinyPalette_Krabby,
        .iconSprite = gMonIcon_Krabby,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Krabby)
        OVERWORLD(
            sPicTable_Krabby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Krabby,
            gShinyOverworldPalette_Krabby
        )
        .levelUpLearnset = sKrabbyLevelUpLearnset,
        .teachableLearnset = sKrabbyTeachableLearnset,
        .eggMoveLearnset = sKrabbyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_DEFENSE, 17, SPECIES_NEEMON},
                                {EVO_SPDEFENSE, 16, SPECIES_TERRIERMON_ASSISTANT},
                                {EVO_HEALTH, 39, SPECIES_CUTEMON},
                                {EVO_SPATTACK, 18, SPECIES_TYUTYUMON},
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
        .frontPic = gMonFrontPic_Kingler,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 8,
        .frontAnimFrames = sAnims_Kingler,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_ZIGZAG_SLOW : ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backPic = gMonBackPic_Kingler,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Kingler,
        .shinyPalette = gMonShinyPalette_Kingler,
        .iconSprite = gMonIcon_Kingler,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(-2, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kingler)
        OVERWORLD(
            sPicTable_Kingler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kingler,
            gShinyOverworldPalette_Kingler
        )
        .levelUpLearnset = sKinglerLevelUpLearnset,
        .teachableLearnset = sKinglerTeachableLearnset,
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,
        .formChangeTable = sKinglerFormChangeTable,
        .evolutions = EVOLUTION({EVO_ATTACK, 17, SPECIES_PAWNMON_WHITE},
                                {EVO_DEFENSE, 16, SPECIES_KODEKACMON},
                                {EVO_SPATTACK, 15, SPECIES_LUXMON},
                                {EVO_SPEED, 18, SPECIES_DONDOKOMON},
                                {EVO_LEVEL, 15, SPECIES_GAOMON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GMAX] =
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
        .frontPic = gMonFrontPic_KinglerGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KinglerGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KinglerGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_KinglerGmax,
        .shinyPalette = gMonShinyPalette_KinglerGmax,
        .iconSprite = gMonIcon_KinglerGmax,
        .iconPalIndex = 0,
        SHADOW(-3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kingler)
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
        .frontPic = gMonFrontPic_Voltorb,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 15,
        .frontAnimFrames = sAnims_Voltorb,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SWING_CONCAVE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 10 : 0,
        .backPic = gMonBackPic_Voltorb,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Xiaomon,
        .shinyPalette = gMonShinyPalette_Xiaomon,
        .iconSprite = gMonIcon_Xiaomon,
        .iconPalIndex = 0,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Voltorb)
        OVERWORLD(
            sPicTable_Voltorb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Voltorb,
            gShinyOverworldPalette_Voltorb
        )
        .levelUpLearnset = sVoltorbLevelUpLearnset,
        .teachableLearnset = sVoltorbTeachableLearnset,
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPDEFENSE, 13, SPECIES_VEMMON},
                                {EVO_ATTACK, 14, SPECIES_IGNITEMON},
                                {EVO_SPATTACK, 14, SPECIES_AGUMON_FAKE_EXPERT},
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
        .frontPic = gMonFrontPic_Electrode,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = sAnims_Electrode,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 0,
        .backPic = gMonBackPic_Electrode,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Yaamon,
        .shinyPalette = gMonShinyPalette_Yaamon,
        .iconSprite = gMonIcon_Yaamon,
        .iconPalIndex = 0,
        SHADOW(1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Electrode)
        OVERWORLD(
            sPicTable_Electrode,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Electrode,
            gShinyOverworldPalette_Electrode
        )
        .levelUpLearnset = sElectrodeLevelUpLearnset,
        .teachableLearnset = sElectrodeTeachableLearnset,
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_SPEED, 16, SPECIES_SOUNBRDMON},
                                {EVO_SPATTACK, 18, SPECIES_PETITMAMON},
                                {EVO_DEFENSE, 15, SPECIES_GIZUMON},
                                {EVO_ATTACK, 15, SPECIES_GAOSSMON},
                                {EVO_LEVEL, 15, SPECIES_IMPMON}),
    },

#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUI] =
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
        .frontPic = gMonFrontPic_VoltorbHisui,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_VoltorbHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_VoltorbHisui,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_VoltorbHisui,
        .shinyPalette = gMonShinyPalette_VoltorbHisui,
        .iconSprite = gMonIcon_VoltorbHisui,
        .iconPalIndex = 0,
        SHADOW(1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Voltorb)
        OVERWORLD(
            sPicTable_VoltorbHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_VoltorbHisui,
            gShinyOverworldPalette_VoltorbHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sVoltorbHisuiLevelUpLearnset,
        .teachableLearnset = sVoltorbHisuiTeachableLearnset,
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ELECTRODE_HISUI}),
    },

    [SPECIES_ELECTRODE_HISUI] =
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
        .frontPic = gMonFrontPic_ElectrodeHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_ElectrodeHisui,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ElectrodeHisui,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ElectrodeHisui,
        .shinyPalette = gMonShinyPalette_ElectrodeHisui,
        .iconSprite = gMonIcon_ElectrodeHisui,
        .iconPalIndex = 1,
        SHADOW(-1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Electrode)
        OVERWORLD(
            sPicTable_ElectrodeHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ElectrodeHisui,
            gShinyOverworldPalette_ElectrodeHisui
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sElectrodeHisuiLevelUpLearnset,
        .teachableLearnset = sElectrodeHisuiTeachableLearnset,
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Exeggcute,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = sAnims_Exeggcute,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Exeggcute,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Yokomon,
        .shinyPalette = gMonShinyPalette_Yokomon,
        .iconSprite = gMonIcon_Yokomon,
        .iconPalIndex = 0,
        SHADOW(0, -5, SHADOW_SIZE_L)
        FOOTPRINT(Exeggcute)
        OVERWORLD(
            sPicTable_Exeggcute,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Exeggcute,
            gShinyOverworldPalette_Exeggcute
        )
        .levelUpLearnset = sExeggcuteLevelUpLearnset,
        .teachableLearnset = sExeggcuteTeachableLearnset,
        .eggMoveLearnset = sExeggcuteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 15, SPECIES_SANTAAGUMON},
                                {EVO_SPATTACK, 15, SPECIES_OTAMAMON_RED},
                                {EVO_HEALTH, 32, SPECIES_MODBETAMON},
                                {EVO_DEFENSE, 15, SPECIES_SPARROWMON},
                                {EVO_LEVEL, 14, SPECIES_BIYOMON}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define AGUMON_EXP_YIELD 186
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define AGUMON_EXP_YIELD 182
#else
    #define AGUMON_EXP_YIELD 212
#endif

#define AGUMON_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

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
        .frontAnimFrames = sAnims_Agumon,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Exeggutor,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Agumon,
        .shinyPalette = gMonShinyPalette_Agumon,
        .iconSprite = gMonIcon_Agumon,
        .iconPalIndex = 1,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Exeggutor)
        OVERWORLD(
            sPicTable_Exeggutor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Exeggutor,
            gShinyOverworldPalette_Exeggutor
        )
        .levelUpLearnset = sExeggutorLevelUpLearnset,
        .teachableLearnset = sExeggutorTeachableLearnset,
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DARK_DIGITRON, SPECIES_BLKAGUMON}, // DARK DIGITRON
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_AGUMON_X}, // X ANTIBODY
                                {EVO_LEVEL, 30, SPECIES_CENTARUMON}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLA] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = AGUMON_SP_DEF,
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
        .frontPic = gMonFrontPic_ExeggutorAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ExeggutorAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExeggutorAlola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ExeggutorAlola,
        .shinyPalette = gMonShinyPalette_ExeggutorAlola,
        .iconSprite = gMonIcon_ExeggutorAlola,
        .iconPalIndex = 1,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Exeggutor)
        OVERWORLD(
            sPicTable_ExeggutorAlola,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ExeggutorAlola,
            gShinyOverworldPalette_ExeggutorAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sExeggutorAlolaLevelUpLearnset,
        .teachableLearnset = sExeggutorAlolaTeachableLearnset,
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Cubone,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_Cubone,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = P_GBA_STYLE_SPECIES_GFX ? 0 : 30,
        .backPic = gMonBackPic_Cubone,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Cubone,
        .shinyPalette = gMonShinyPalette_Cubone,
        .iconSprite = gMonIcon_Cubone,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Cubone)
        OVERWORLD(
            sPicTable_Cubone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cubone,
            gShinyOverworldPalette_Cubone
        )
        .levelUpLearnset = sCuboneLevelUpLearnset,
        .teachableLearnset = sCuboneTeachableLearnset,
        .eggMoveLearnset = sCuboneEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Marowak,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .frontAnimFrames = sAnims_Marowak,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Marowak,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Marowak,
        .shinyPalette = gMonShinyPalette_Marowak,
        .iconSprite = gMonIcon_Marowak,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(6, 6, SHADOW_SIZE_M)
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_Marowak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marowak,
            gShinyOverworldPalette_Marowak
        )
        .levelUpLearnset = sMarowakLevelUpLearnset,
        .teachableLearnset = sMarowakTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_COREDRAMON_GREEN}),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLA] =
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
        .description = gMarowakAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MarowakAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MarowakAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MarowakAlola,
        .shinyPalette = gMonShinyPalette_MarowakAlola,
        .iconSprite = gMonIcon_MarowakAlola,
        .iconPalIndex = 1,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_MarowakAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MarowakAlola,
            gShinyOverworldPalette_MarowakAlola
        )
        .isAlolanForm = TRUE,
        .levelUpLearnset = sMarowakAlolaLevelUpLearnset,
        .teachableLearnset = sMarowakAlolaTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
    },

    [SPECIES_MAROWAK_ALOLA_TOTEM] =
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
        .description = gMarowakAlolaPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_MarowakAlola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MarowakAlola,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MarowakAlola,
        .shinyPalette = gMonShinyPalette_MarowakAlola,
        .iconSprite = gMonIcon_MarowakAlola,
        .iconPalIndex = 1,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Marowak)
        OVERWORLD(
            sPicTable_MarowakAlola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MarowakAlola,
            gShinyOverworldPalette_MarowakAlola
        )
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMarowakAlolaLevelUpLearnset,
        .teachableLearnset = sMarowakAlolaTeachableLearnset,
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Tyrogue,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Tyrogue,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Tyrogue,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Salamon,
        .shinyPalette = gMonShinyPalette_Salamon,
        .iconSprite = gMonIcon_Salamon,
        .iconPalIndex = 2,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Tyrogue)
        OVERWORLD(
            sPicTable_Tyrogue,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tyrogue,
            gShinyOverworldPalette_Tyrogue
        )
        .levelUpLearnset = sTyrogueLevelUpLearnset,
        .teachableLearnset = sTyrogueTeachableLearnset,
        .eggMoveLearnset = sTyrogueEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Hitmonlee,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Hitmonlee,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Hitmonlee,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Agumon_x,
        .shinyPalette = gMonShinyPalette_Agumon_x,
        .iconSprite = gMonIcon_Agumon_x,
        .iconPalIndex = 2,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Hitmonlee)
        OVERWORLD(
            sPicTable_Hitmonlee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonlee,
            gShinyOverworldPalette_Hitmonlee
        )
        .levelUpLearnset = sHitmonleeLevelUpLearnset,
        .teachableLearnset = sHitmonleeTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_BLKAGUMON_X}, //DARK DIGITRON
                                {EVO_LEVEL, 36, SPECIES_GEOGREYMON}),
    },

    [SPECIES_HITMONCHAN] =
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
        .frontPic = gMonFrontPic_Hitmonchan,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Angoramon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Hitmonchan,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Angoramon,
        .shinyPalette = gMonShinyPalette_Angoramon,
        .iconSprite = gMonIcon_Angoramon,
        .iconPalIndex = 2,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Hitmonchan)
        OVERWORLD(
            sPicTable_Hitmonchan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmonchan,
            gShinyOverworldPalette_Hitmonchan
        )
        .levelUpLearnset = sHitmonchanLevelUpLearnset,
        .teachableLearnset = sHitmonchanTeachableLearnset,
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
        .frontPic = gMonFrontPic_Hitmontop,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = sAnims_Hitmontop,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_VIBRATE : ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Hitmontop,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Salamon_x,
        .shinyPalette = gMonShinyPalette_Salamon_x,
        .iconSprite = gMonIcon_Salamon_x,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Hitmontop)
        OVERWORLD(
            sPicTable_Hitmontop,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hitmontop,
            gShinyOverworldPalette_Hitmontop
        )
        .levelUpLearnset = sHitmontopLevelUpLearnset,
        .teachableLearnset = sHitmontopTeachableLearnset,
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
        .frontPic = gMonFrontPic_Lickitung,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = sAnims_Lickitung,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lickitung,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Lickitung,
        .shinyPalette = gMonShinyPalette_Lickitung,
        .iconSprite = gMonIcon_Lickitung,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Lickitung)
        OVERWORLD(
            sPicTable_Lickitung,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Lickitung,
            gShinyOverworldPalette_Lickitung
        )
        .levelUpLearnset = sLickitungLevelUpLearnset,
        .teachableLearnset = sLickitungTeachableLearnset,
        .eggMoveLearnset = sLickitungEggMoveLearnset,
        
    },
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
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lickilicky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Lickilicky,
        .shinyPalette = gMonShinyPalette_Lickilicky,
        .iconSprite = gMonIcon_Lickilicky,
        .iconPalIndex = 1,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lickilicky)
        OVERWORLD(
            sPicTable_Lickilicky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Koffing,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .frontAnimFrames = sAnims_Koffing,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 14,
        .backPic = gMonBackPic_Koffing,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Argomon_rookie,
        .shinyPalette = gMonShinyPalette_Argomon_rookie,
        .iconSprite = gMonIcon_Argomon_rookie,
        .iconPalIndex = 2,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Koffing)
        OVERWORLD(
            sPicTable_Koffing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Koffing,
            gShinyOverworldPalette_Koffing
        )
        .levelUpLearnset = sKoffingLevelUpLearnset,
        .teachableLearnset = sKoffingTeachableLearnset,
        .eggMoveLearnset = sKoffingEggMoveLearnset,
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
        .frontAnimFrames = sAnims_Weezing,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 3,
        .backPic = gMonBackPic_Weezing,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Armadilmon,
        .shinyPalette = gMonShinyPalette_Armadilmon,
        .iconSprite = gMonIcon_Armadilmon,
        .iconPalIndex = 2,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Weezing)
        OVERWORLD(
            sPicTable_Weezing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Weezing,
            gShinyOverworldPalette_Weezing
        )
        .levelUpLearnset = sWeezingLevelUpLearnset,
        .teachableLearnset = sWeezingTeachableLearnset,
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_KINDNESS_EGG, SPECIES_CHAMELEMON},
                                {EVO_ITEM, ITEM_MIRACLES_EGG, SPECIES_ELEPHANMON},
                                {EVO_ITEM, ITEM_KNOWLEDGE_EGG, SPECIES_DIGMON},
                                {EVO_ITEM, ITEM_COURAGE_EGG, SPECIES_BOARMON},
                                {EVO_LEVEL, 32, SPECIES_ANKYLOMON}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALAR] =
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
        .frontPic = gMonFrontPic_WeezingGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WeezingGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_WeezingGalar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_WeezingGalar,
        .shinyPalette = gMonShinyPalette_WeezingGalar,
        .iconSprite = gMonIcon_WeezingGalar,
        .iconPalIndex = 1,
        SHADOW(7, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Weezing)
        OVERWORLD(
            sPicTable_WeezingGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WeezingGalar,
            gShinyOverworldPalette_WeezingGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sWeezingGalarLevelUpLearnset,
        .teachableLearnset = sWeezingGalarTeachableLearnset,
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Rhyhorn,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 12,
        .frontAnimFrames = sAnims_Rhyhorn,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Rhyhorn,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Aruraumon,
        .shinyPalette = gMonShinyPalette_Aruraumon,
        .iconSprite = gMonIcon_Aruraumon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RhyhornF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicFemale = gMonBackPic_RhyhornF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Rhyhorn)
        OVERWORLD(
            sPicTable_Rhyhorn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyhorn,
            gShinyOverworldPalette_Rhyhorn
        )
        OVERWORLD_FEMALE(
            sPicTable_RhyhornF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRhyhornLevelUpLearnset,
        .teachableLearnset = sRhyhornTeachableLearnset,
        .eggMoveLearnset = sRhyhornEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Rhydon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 3,
        .frontAnimFrames = sAnims_Rhydon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SHRINK_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rhydon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Bakomon,
        .shinyPalette = gMonShinyPalette_Bakomon,
        .iconSprite = gMonIcon_Bakomon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_RhydonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_RhydonF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rhydon)
        OVERWORLD(
            sPicTable_Rhydon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhydon,
            gShinyOverworldPalette_Rhydon
        )
        OVERWORLD_FEMALE(
            sPicTable_RhydonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sRhydonLevelUpLearnset,
        .teachableLearnset = sRhydonTeachableLearnset,
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
        .frontAnimFrames = sAnims_Rhyperior,
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
        SHADOW(2, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rhyperior)
        OVERWORLD(
            sPicTable_Rhyperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Rhyperior,
            gShinyOverworldPalette_Rhyperior
        )
        OVERWORLD_FEMALE(
            sPicTable_RhyperiorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Happiny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Happiny,
        .shinyPalette = gMonShinyPalette_Happiny,
        .iconSprite = gMonIcon_Happiny,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Happiny)
        OVERWORLD(
            sPicTable_Happiny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Happiny,
            gShinyOverworldPalette_Happiny
        )
        .levelUpLearnset = sHappinyLevelUpLearnset,
        .teachableLearnset = sHappinyTeachableLearnset,
        .eggMoveLearnset = sHappinyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}),
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
        .frontAnimFrames = sAnims_Chansey,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE_SLOW : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chansey,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Bearmon,
        .shinyPalette = gMonShinyPalette_Bearmon,
        .iconSprite = gMonIcon_Bearmon,
        .iconPalIndex = 0,
        SHADOW(1, 4, SHADOW_SIZE_L)
        FOOTPRINT(Chansey)
        OVERWORLD(
            sPicTable_Chansey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chansey,
            gShinyOverworldPalette_Chansey
        )
        .levelUpLearnset = sChanseyLevelUpLearnset,
        .teachableLearnset = sChanseyTeachableLearnset,
        .eggMoveLearnset = sChanseyEggMoveLearnset,
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
        .frontAnimFrames = sAnims_Blissey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Blissey,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blissey,
        .shinyPalette = gMonShinyPalette_Blissey,
        .iconSprite = gMonIcon_Blissey,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Blissey)
        OVERWORLD(
            sPicTable_Blissey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Blissey,
            gShinyOverworldPalette_Blissey
        )
        .levelUpLearnset = sBlisseyLevelUpLearnset,
        .teachableLearnset = sBlisseyTeachableLearnset,
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
        .frontPic = gMonFrontPic_Tangela,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 12,
        .frontAnimFrames = sAnims_Tangela,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Tangela,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Betamon,
        .shinyPalette = gMonShinyPalette_Betamon,
        .iconSprite = gMonIcon_Betamon,
        .iconPalIndex = 0,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Tangela)
        OVERWORLD(
            sPicTable_Tangela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangela,
            gShinyOverworldPalette_Tangela
        )
        .levelUpLearnset = sTangelaLevelUpLearnset,
        .teachableLearnset = sTangelaTeachableLearnset,
        .eggMoveLearnset = sTangelaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ATTACK, 56, SPECIES_DRIMOGEMON},
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
        .frontAnimFrames = sAnims_Tangrowth,
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
        SHADOW(-2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tangrowth)
        OVERWORLD(
            sPicTable_Tangrowth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tangrowth,
            gShinyOverworldPalette_Tangrowth
        )
        OVERWORLD_FEMALE(
            sPicTable_TangrowthF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
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
        .frontAnimFrames = sAnims_Kangaskhan,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Kangaskhan,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Kangaskhan,
        .shinyPalette = gMonShinyPalette_Kangaskhan,
        .iconSprite = gMonIcon_Kangaskhan,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kangaskhan)
        OVERWORLD(
            sPicTable_Kangaskhan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kangaskhan,
            gShinyOverworldPalette_Kangaskhan
        )
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,
        .formChangeTable = sKangaskhanFormChangeTable,
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
        .frontAnimFrames = sAnims_Betamon_xMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Betamon_xMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Betamon_xMega,
        .shinyPalette = gMonShinyPalette_Betamon_xMega,
        .iconSprite = gMonIcon_Betamon_xMega,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kangaskhan)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sKangaskhanLevelUpLearnset,
        .teachableLearnset = sKangaskhanTeachableLearnset,
        .eggMoveLearnset = sKangaskhanEggMoveLearnset,
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,
        .formChangeTable = sKangaskhanFormChangeTable,
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
        .frontAnimFrames = sAnims_Horsea,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_TWIST : ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Horsea,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Biyomon,
        .shinyPalette = gMonShinyPalette_Biyomon,
        .iconSprite = gMonIcon_Biyomon,
        .iconPalIndex = 0,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Horsea)
        OVERWORLD(
            sPicTable_Horsea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Horsea,
            gShinyOverworldPalette_Horsea
        )
        .levelUpLearnset = sHorseaLevelUpLearnset,
        .teachableLearnset = sHorseaTeachableLearnset,
        .eggMoveLearnset = sHorseaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 48, SPECIES_AQUILAMON},
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
        .frontPic = gMonFrontPic_Seadra,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .frontAnimFrames = sAnims_Seadra,
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Seadra,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon,
        .shinyPalette = gMonShinyPalette_Blkagumon,
        .iconSprite = gMonIcon_Blkagumon,
        .iconPalIndex = 0,
        SHADOW(-2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Seadra)
        OVERWORLD(
            sPicTable_Seadra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seadra,
            gShinyOverworldPalette_Seadra
        )
        .levelUpLearnset = sSeadraLevelUpLearnset,
        .teachableLearnset = sSeadraTeachableLearnset,
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
        .frontPic = gMonFrontPic_Kingdra,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .frontAnimFrames = sAnims_Kingdra,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Psychemon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Psychemon,
        .shinyPalette = gMonShinyPalette_Psychemon,
        .iconSprite = gMonIcon_Psychemon,
        .iconPalIndex = 0,
        SHADOW(3, 12, SHADOW_SIZE_M)
        FOOTPRINT(Kingdra)
        OVERWORLD(
            sPicTable_Kingdra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Kingdra,
            gShinyOverworldPalette_Kingdra
        )
        .levelUpLearnset = sKingdraLevelUpLearnset,
        .teachableLearnset = sKingdraTeachableLearnset,
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
        .frontPic = gMonFrontPic_Goldeen,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 13,
        .frontAnimFrames = sAnims_Goldeen,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Goldeen,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkagumon_x,
        .shinyPalette = gMonShinyPalette_Blkagumon_x,
        .iconSprite = gMonIcon_Blkagumon_x,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GoldeenF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .backPicFemale = gMonBackPic_GoldeenF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-6, 0, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Goldeen)
        OVERWORLD(
            sPicTable_Goldeen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Goldeen,
            gShinyOverworldPalette_Goldeen
        )
        OVERWORLD_FEMALE(
            sPicTable_GoldeenF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .levelUpLearnset = sGoldeenLevelUpLearnset,
        .teachableLearnset = sGoldeenTeachableLearnset,
        .eggMoveLearnset = sGoldeenEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Seaking,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Seaking,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Seaking,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Blkgabumon,
        .shinyPalette = gMonShinyPalette_Blkgabumon,
        .iconSprite = gMonIcon_Blkgabumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SeakingF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_SeakingF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Seaking)
        OVERWORLD(
            sPicTable_Seaking,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Seaking,
            gShinyOverworldPalette_Seaking
        )
        OVERWORLD_FEMALE(
            sPicTable_SeakingF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
        )
        .levelUpLearnset = sSeakingLevelUpLearnset,
        .teachableLearnset = sSeakingTeachableLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 60, SPECIES_DARLIZAMON},
                                {EVO_LEVEL, 36, SPECIES_BLGARURMON}),
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
        .frontPic = gMonFrontPic_Staryu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Staryu,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Staryu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Blkguilmon,
        .shinyPalette = gMonShinyPalette_Blkguilmon,
        .iconSprite = gMonIcon_Blkguilmon,
        .iconPalIndex = 2,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Staryu)
        OVERWORLD(
            sPicTable_Staryu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Staryu,
            gShinyOverworldPalette_Staryu
        )
        .levelUpLearnset = sStaryuLevelUpLearnset,
        .teachableLearnset = sStaryuTeachableLearnset,
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
        .frontAnimFrames = sAnims_Bokomon,
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Starmie,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Bokomon,
        .shinyPalette = gMonShinyPalette_Bokomon,
        .iconSprite = gMonIcon_Bokomon,
        .iconPalIndex = 2,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Starmie)
        OVERWORLD(
            sPicTable_Starmie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Starmie,
            gShinyOverworldPalette_Starmie
        )
        .levelUpLearnset = sStarmieLevelUpLearnset,
        .teachableLearnset = sStarmieTeachableLearnset,
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
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MimeJr,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_MimeJr,
        .shinyPalette = gMonShinyPalette_MimeJr,
        .iconSprite = gMonIcon_MimeJr,
        .iconPalIndex = 0,
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(MimeJr)
        OVERWORLD(
            sPicTable_MimeJr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MimeJr,
            gShinyOverworldPalette_MimeJr
        )
        .levelUpLearnset = sMimeJrLevelUpLearnset,
        .teachableLearnset = sMimeJrTeachableLearnset,
        .eggMoveLearnset = sMimeJrEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME},
                                {EVO_NONE, 0, SPECIES_MR_MIME_GALAR}),
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
        .frontPic = gMonFrontPic_MrMime,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .frontAnimFrames = sAnims_MrMime,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_MrMime,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Bulucomon,
        .shinyPalette = gMonShinyPalette_Bulucomon,
        .iconSprite = gMonIcon_Bulucomon,
        .iconPalIndex = 0,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(MrMime)
        OVERWORLD(
            sPicTable_MrMime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMime,
            gShinyOverworldPalette_MrMime
        )
        .levelUpLearnset = sMrMimeLevelUpLearnset,
        .teachableLearnset = sMrMimeTeachableLearnset,
        .eggMoveLearnset = sMrMimeEggMoveLearnset,
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALAR] =
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
        .frontPic = gMonFrontPic_MrMimeGalar,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_MrMimeGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrMimeGalar,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrMimeGalar,
        .shinyPalette = gMonShinyPalette_MrMimeGalar,
        .iconSprite = gMonIcon_MrMimeGalar,
        .iconPalIndex = 0,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(MrMime)
        OVERWORLD(
            sPicTable_MrMimeGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MrMimeGalar,
            gShinyOverworldPalette_MrMimeGalar
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sMrMimeGalarLevelUpLearnset,
        .teachableLearnset = sMrMimeGalarTeachableLearnset,
        .eggMoveLearnset = sMrMimeGalarEggMoveLearnset,
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable,
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
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MrRime,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MrRime,
        .shinyPalette = gMonShinyPalette_MrRime,
        .iconSprite = gMonIcon_MrRime,
        .iconPalIndex = 0,
        SHADOW(3, 9, SHADOW_SIZE_L)
        FOOTPRINT(MrRime)
        OVERWORLD(
            sPicTable_MrRime,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Scyther,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = sAnims_Scyther,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Scyther,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Burgermon,
        .shinyPalette = gMonShinyPalette_Burgermon,
        .iconSprite = gMonIcon_Burgermon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ScytherF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Scyther)
        OVERWORLD(
            sPicTable_Scyther,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scyther,
            gShinyOverworldPalette_Scyther
        )
        OVERWORLD_FEMALE(
            sPicTable_ScytherF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sScytherLevelUpLearnset,
        .teachableLearnset = sScytherTeachableLearnset,
        .eggMoveLearnset = sScytherEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Scizor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = sAnims_Scizor,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        .backPic = gMonBackPic_Scizor,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Monodramon,
        .shinyPalette = gMonShinyPalette_Monodramon,
        .iconSprite = gMonIcon_Monodramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ScizorF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Scizor)
        OVERWORLD(
            sPicTable_Scizor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Scizor,
            gShinyOverworldPalette_Scizor
        )
        OVERWORLD_FEMALE(
            sPicTable_ScizorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sScizorLevelUpLearnset,
        .teachableLearnset = sScizorTeachableLearnset,
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,
        .formChangeTable = sScizorFormChangeTable,
        .evolutions = EVOLUTION({EVO_SPATTACK, 69, SPECIES_DEVIDRAMON},
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
        .frontAnimFrames = sAnims_MonodramonMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MonodramonMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_MonodramonMega,
        .shinyPalette = gMonShinyPalette_MonodramonMega,
        .iconSprite = gMonIcon_MonodramonMega,
        .iconPalIndex = 0,
        SHADOW(5, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Scizor)
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
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kleavor,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Kleavor,
        .shinyPalette = gMonShinyPalette_Kleavor,
        .iconSprite = gMonIcon_Kleavor,
        .iconPalIndex = 2,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kleavor)
        OVERWORLD(
            sPicTable_Kleavor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Smoochum,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(24, 40) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .frontAnimFrames = sAnims_Smoochum,
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
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Smoochum)
        OVERWORLD(
            sPicTable_Smoochum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Smoochum,
            gShinyOverworldPalette_Smoochum
        )
        .levelUpLearnset = sSmoochumLevelUpLearnset,
        .teachableLearnset = sSmoochumTeachableLearnset,
        .eggMoveLearnset = sSmoochumEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_JYNX}),
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
        .frontPic = gMonFrontPic_Jynx,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 9,
        .frontAnimFrames = sAnims_Jynx,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Jynx,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Samuagumon,
        .shinyPalette = gMonShinyPalette_Samuagumon,
        .iconSprite = gMonIcon_Samuagumon,
        .iconPalIndex = 2,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(Jynx)
        OVERWORLD(
            sPicTable_Jynx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jynx,
            gShinyOverworldPalette_Jynx
        )
        .levelUpLearnset = sJynxLevelUpLearnset,
        .teachableLearnset = sJynxTeachableLearnset,
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
        .frontPic = gMonFrontPic_Elekid,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = sAnims_Elekid,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Elekid,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Santaagumon,
        .shinyPalette = gMonShinyPalette_Santaagumon,
        .iconSprite = gMonIcon_Santaagumon,
        .iconPalIndex = 1,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Elekid)
        OVERWORLD(
            sPicTable_Elekid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Elekid,
            gShinyOverworldPalette_Elekid
        )
        .levelUpLearnset = sElekidLevelUpLearnset,
        .teachableLearnset = sElekidTeachableLearnset,
        .eggMoveLearnset = sElekidEggMoveLearnset,
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
        .frontPic = gMonFrontPic_Electabuzz,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 2 : 4,
        .frontAnimFrames = sAnims_Electabuzz,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Electabuzz,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Candlemon,
        .shinyPalette = gMonShinyPalette_Candlemon,
        .iconSprite = gMonIcon_Candlemon,
        .iconPalIndex = 1,
        SHADOW(-2, 9, SHADOW_SIZE_L)
        FOOTPRINT(Electabuzz)
        OVERWORLD(
            sPicTable_Electabuzz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Electabuzz,
            gShinyOverworldPalette_Electabuzz
        )
        .levelUpLearnset = sElectabuzzLevelUpLearnset,
        .teachableLearnset = sElectabuzzTeachableLearnset,
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
        .frontAnimFrames = sAnims_Electivire,
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Electivire,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Electivire,
        .shinyPalette = gMonShinyPalette_Electivire,
        .iconSprite = gMonIcon_Electivire,
        .iconPalIndex = 1,
        SHADOW(-3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Electivire)
        OVERWORLD(
            sPicTable_Electivire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .itemRare = ITEM_CHIKURIMONIZER,
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
        .frontPic = gMonFrontPic_Magby,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 11,
        .frontAnimFrames = sAnims_Magby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Magby,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magby,
        .shinyPalette = gMonShinyPalette_Magby,
        .iconSprite = gMonIcon_Magby,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Magby)
        OVERWORLD(
            sPicTable_Magby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magby,
            gShinyOverworldPalette_Magby
        )
        .levelUpLearnset = sMagbyLevelUpLearnset,
        .teachableLearnset = sMagbyTeachableLearnset,
        .eggMoveLearnset = sMagbyEggMoveLearnset,
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
        .itemRare = ITEM_CHIKURIMONIZER,
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
        .frontPic = gMonFrontPic_Magmar,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Chikurimon,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Magmar,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Chikurimon,
        .shinyPalette = gMonShinyPalette_Chikurimon,
        .iconSprite = gMonIcon_Chikurimon,
        .iconPalIndex = 0,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Magmar)
        OVERWORLD(
            sPicTable_Magmar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Magmar,
            gShinyOverworldPalette_Magmar
        )
        .levelUpLearnset = sMagmarLevelUpLearnset,
        .teachableLearnset = sMagmarTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
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
        .itemRare = ITEM_CHIKURIMONIZER,
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
        .frontAnimFrames = sAnims_Magmortar,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magmortar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magmortar,
        .shinyPalette = gMonShinyPalette_Magmortar,
        .iconSprite = gMonIcon_Magmortar,
        .iconPalIndex = 0,
        SHADOW(4, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Magmortar)
        OVERWORLD(
            sPicTable_Magmortar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Pinsir,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .frontAnimFrames = sAnims_Pinsir,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_GROW_VIBRATE : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pinsir,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tyutyumon,
        .shinyPalette = gMonShinyPalette_Tyutyumon,
        .iconSprite = gMonIcon_Tyutyumon,
        .iconPalIndex = 2,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Pinsir)
        OVERWORLD(
            sPicTable_Pinsir,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Pinsir,
            gShinyOverworldPalette_Pinsir
        )
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,
        .formChangeTable = sPinsirFormChangeTable,
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
        .frontAnimFrames = sAnims_TyutyumonMega,
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
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Pinsir)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sPinsirLevelUpLearnset,
        .teachableLearnset = sPinsirTeachableLearnset,
        .eggMoveLearnset = sPinsirEggMoveLearnset,
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,
        .formChangeTable = sPinsirFormChangeTable,
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
        .frontPic = gMonFrontPic_Tauros,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .frontAnimFrames = sAnims_Tauros,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Tauros,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Chuumon,
        .shinyPalette = gMonShinyPalette_Chuumon,
        .iconSprite = gMonIcon_Chuumon,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_Tauros,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tauros,
            gShinyOverworldPalette_Tauros
        )
        .levelUpLearnset = sTaurosLevelUpLearnset,
        .teachableLearnset = sTaurosTeachableLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

#if P_PALDEAN_FORMS
    [SPECIES_TAUROS_PALDEA_COMBAT] =
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
        .frontPic = gMonFrontPic_TaurosPaldeaCombat,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeaCombat,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeaCombat,
        .shinyPalette = gMonShinyPalette_TaurosPaldeaCombat,
        .iconSprite = gMonIcon_TaurosPaldeaCombat,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeaCombat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeaCombat,
            gShinyOverworldPalette_TaurosPaldeaCombat
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeaCombatLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaCombatTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaCombatEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

    [SPECIES_TAUROS_PALDEA_BLAZE] =
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
        .frontPic = gMonFrontPic_TaurosPaldeaBlaze,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeaBlaze,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeaBlaze,
        .shinyPalette = gMonShinyPalette_TaurosPaldeaBlaze,
        .iconSprite = gMonIcon_TaurosPaldeaBlaze,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeaBlaze,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeaBlaze,
            gShinyOverworldPalette_TaurosPaldeaBlaze
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeaBlazeLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaBlazeTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaBlazeEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
    },

    [SPECIES_TAUROS_PALDEA_AQUA] =
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
        .frontPic = gMonFrontPic_TaurosPaldeaAqua,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_TaurosPaldea,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TaurosPaldeaAqua,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TaurosPaldeaAqua,
        .shinyPalette = gMonShinyPalette_TaurosPaldeaAqua,
        .iconSprite = gMonIcon_TaurosPaldeaAqua,
        .iconPalIndex = 0,
        SHADOW(1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Tauros)
        OVERWORLD(
            sPicTable_TaurosPaldeaAqua,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TaurosPaldeaAqua,
            gShinyOverworldPalette_TaurosPaldeaAqua
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sTaurosPaldeaAquaLevelUpLearnset,
        .teachableLearnset = sTaurosPaldeaAquaTeachableLearnset,
        .eggMoveLearnset = sTaurosPaldeaAquaEggMoveLearnset,
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Magikarp,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = sAnims_Magikarp,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Magikarp,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Hazyagumon,
        .shinyPalette = gMonShinyPalette_Hazyagumon,
        .iconSprite = gMonIcon_Hazyagumon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MagikarpF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_MagikarpF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        SHADOW(1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Magikarp)
        OVERWORLD(
            sPicTable_Magikarp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Magikarp,
            gShinyOverworldPalette_Magikarp
        )
        OVERWORLD_FEMALE(
            sPicTable_MagikarpF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT
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
        .frontPic = gMonFrontPic_Gyarados,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 2,
        .frontAnimFrames = sAnims_Gyarados,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_Gyarados,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Commdramon,
        .shinyPalette = gMonShinyPalette_Commdramon,
        .iconSprite = gMonIcon_Commdramon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GyaradosF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_GyaradosF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        SHADOW(5, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gyarados)
        OVERWORLD(
            sPicTable_Gyarados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Gyarados,
            gShinyOverworldPalette_Gyarados
        )
        OVERWORLD_FEMALE(
            sPicTable_GyaradosF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER
        )
        .levelUpLearnset = sGyaradosLevelUpLearnset,
        .teachableLearnset = sGyaradosTeachableLearnset,
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,
        .formChangeTable = sGyaradosFormChangeTable,
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
        .frontAnimFrames = sAnims_CommdramonMega,
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
        SHADOW(3, 17, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gyarados)
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
        .frontPic = gMonFrontPic_Lapras,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 2,
        .frontAnimFrames = sAnims_Lapras,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lapras,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Coronamon,
        .shinyPalette = gMonShinyPalette_Coronamon,
        .iconSprite = gMonIcon_Coronamon,
        .iconPalIndex = 2,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Lapras)
        OVERWORLD(
            sPicTable_Lapras,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Lapras,
            gShinyOverworldPalette_Lapras
        )
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,
        .formChangeTable = sLaprasFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GMAX] =
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
        .frontPic = gMonFrontPic_LaprasGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LaprasGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LaprasGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_LaprasGmax,
        .shinyPalette = gMonShinyPalette_LaprasGmax,
        .iconSprite = gMonIcon_LaprasGmax,
        .iconPalIndex = 2,
        SHADOW(2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Lapras)
        .isGigantamax = TRUE,
        .levelUpLearnset = sLaprasLevelUpLearnset,
        .teachableLearnset = sLaprasTeachableLearnset,
        .eggMoveLearnset = sLaprasEggMoveLearnset,
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,
        .formChangeTable = sLaprasFormChangeTable,
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
        .frontPic = gMonFrontPic_Ditto,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .frontAnimFrames = sAnims_Ditto,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Ditto,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Crabmon,
        .shinyPalette = gMonShinyPalette_Crabmon,
        .iconSprite = gMonIcon_Crabmon,
        .iconPalIndex = 2,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Ditto)
        OVERWORLD(
            sPicTable_Ditto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Ditto,
            gShinyOverworldPalette_Ditto
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
        .frontPic = gMonFrontPic_Eevee,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Eevee,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_x,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_EeveeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_EeveeF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Eevee)
        OVERWORLD(
            sPicTable_Eevee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eevee,
            gShinyOverworldPalette_Eevee
        )
        OVERWORLD_FEMALE(
            sPicTable_EeveeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT
        )
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
        .formChangeTable = sEeveeFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                                {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                                {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                                {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_GLACEON},
                                {EVO_FRIENDSHIP_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GMAX] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
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
        .frontPic = gMonFrontPic_EeveeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_EeveeGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EeveeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_EeveeGmax,
        .shinyPalette = gMonShinyPalette_EeveeGmax,
        .iconSprite = gMonIcon_EeveeGmax,
        .iconPalIndex = 2,
        SHADOW(0, 4, SHADOW_SIZE_L)
        FOOTPRINT(Eevee)
        .isGigantamax = TRUE,
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
        .formChangeTable = sEeveeFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_EEVEE_STARTER] =
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
        .frontPic = gMonFrontPic_Eevee,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Crabmon_x,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Eevee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Crabmon_x,
        .shinyPalette = gMonShinyPalette_Crabmon_x,
        .iconSprite = gMonIcon_Crabmon_xPartner,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_EeveeF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_EeveeF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_Crabmon_xPartnerF,
        .iconPalIndexFemale = 2,
    #endif
#endif //P_GENDER_DIFFERENCES
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Eevee)
        OVERWORLD(
            sPicTable_Eevee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Eevee,
            gShinyOverworldPalette_Eevee
        )
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
        .levelUpLearnset = sEeveeLevelUpLearnset,
        .teachableLearnset = sEeveeTeachableLearnset,
        .eggMoveLearnset = sEeveeEggMoveLearnset,
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Vaporeon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 9,
        .frontAnimFrames = sAnims_Vaporeon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GLOW_BLUE,
        .backPic = gMonBackPic_Vaporeon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Cutemon,
        .shinyPalette = gMonShinyPalette_Cutemon,
        .iconSprite = gMonIcon_Cutemon,
        .iconPalIndex = 0,
        SHADOW(-4, 3, SHADOW_SIZE_M)
        FOOTPRINT(Vaporeon)
        OVERWORLD(
            sPicTable_Vaporeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Vaporeon,
            gShinyOverworldPalette_Vaporeon
        )
        .levelUpLearnset = sVaporeonLevelUpLearnset,
        .teachableLearnset = sVaporeonTeachableLearnset,
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
        .frontPic = gMonFrontPic_Jolteon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = sAnims_Jolteon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Jolteon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Jolteon,
        .shinyPalette = gMonShinyPalette_Jolteon,
        .iconSprite = gMonIcon_Jolteon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Jolteon)
        OVERWORLD(
            sPicTable_Jolteon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Jolteon,
            gShinyOverworldPalette_Jolteon
        )
        .levelUpLearnset = sJolteonLevelUpLearnset,
        .teachableLearnset = sJolteonTeachableLearnset,
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
        .frontPic = gMonFrontPic_Flareon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .frontAnimFrames = sAnims_Flareon,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Flareon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Flareon,
        .shinyPalette = gMonShinyPalette_Flareon,
        .iconSprite = gMonIcon_Flareon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 3,
        SHADOW(-2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Flareon)
        OVERWORLD(
            sPicTable_Flareon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flareon,
            gShinyOverworldPalette_Flareon
        )
        .levelUpLearnset = sFlareonLevelUpLearnset,
        .teachableLearnset = sFlareonTeachableLearnset,
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
        .frontPic = gMonFrontPic_Espeon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = sAnims_Espeon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Espeon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kunemon,
        .shinyPalette = gMonShinyPalette_Kunemon,
        .iconSprite = gMonIcon_Kunemon,
        .iconPalIndex = 2,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Espeon)
        OVERWORLD(
            sPicTable_Espeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Espeon,
            gShinyOverworldPalette_Espeon
        )
        .levelUpLearnset = sEspeonLevelUpLearnset,
        .teachableLearnset = sEspeonTeachableLearnset,
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
        .frontPic = gMonFrontPic_Umbreon,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = sAnims_Umbreon,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Umbreon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Umbreon,
        .shinyPalette = gMonShinyPalette_Umbreon,
        .iconSprite = gMonIcon_Umbreon,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Umbreon)
        OVERWORLD(
            sPicTable_Umbreon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Umbreon,
            gShinyOverworldPalette_Umbreon
        )
        .levelUpLearnset = sUmbreonLevelUpLearnset,
        .teachableLearnset = sUmbreonTeachableLearnset,
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
        .frontAnimFrames = sAnims_Leafeon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Leafeon,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Leafeon,
        .shinyPalette = gMonShinyPalette_Leafeon,
        .iconSprite = gMonIcon_Leafeon,
        .iconPalIndex = 1,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Leafeon)
        OVERWORLD(
            sPicTable_Leafeon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Glaceon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Glaceon,
        .shinyPalette = gMonShinyPalette_Glaceon,
        .iconSprite = gMonIcon_Glaceon,
        .iconPalIndex = 0,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Glaceon)
        OVERWORLD(
            sPicTable_Glaceon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Sylveon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Sylveon,
        .shinyPalette = gMonShinyPalette_Sylveon,
        .iconSprite = gMonIcon_Sylveon,
        .iconPalIndex = 0,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Sylveon)
        OVERWORLD(
            sPicTable_Sylveon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontAnimFrames = sAnims_Porygon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Porygon,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Dokunemon,
        .shinyPalette = gMonShinyPalette_Dokunemon,
        .iconSprite = gMonIcon_Dokunemon,
        .iconPalIndex = 0,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Porygon)
        OVERWORLD(
            sPicTable_Porygon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon,
            gShinyOverworldPalette_Porygon
        )
        .levelUpLearnset = sPorygonLevelUpLearnset,
        .teachableLearnset = sPorygonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}),
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
        .frontAnimFrames = sAnims_Renamon_x,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 9,
        .backPic = gMonBackPic_Porygon2,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Renamon_x,
        .shinyPalette = gMonShinyPalette_Renamon_x,
        .iconSprite = gMonIcon_Renamon_x,
        .iconPalIndex = 0,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Porygon2)
        OVERWORLD(
            sPicTable_Porygon2,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Porygon2,
            gShinyOverworldPalette_Porygon2
        )
        .levelUpLearnset = sPorygon2LevelUpLearnset,
        .teachableLearnset = sPorygon2TeachableLearnset,
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DOKUNEMON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
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
        .speciesName = _("DokunemonZ"),
        .cryId = CRY_DOKUNEMON_Z,
        .natDexNum = NATIONAL_DEX_DOKUNEMON_Z,
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
        .frontPic = gMonFrontPic_DokunemonZ,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Dokunemon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_DokunemonZ,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_DokunemonZ,
        .shinyPalette = gMonShinyPalette_DokunemonZ,
        .iconSprite = gMonIcon_DokunemonZ,
        .iconPalIndex = 0,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(PorygonZ)
        OVERWORLD(
            sPicTable_PorygonZ,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
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
        .frontPic = gMonFrontPic_Omanyte,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = sAnims_Omanyte,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Omanyte,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dondokomon,
        .shinyPalette = gMonShinyPalette_Dondokomon,
        .iconSprite = gMonIcon_Dondokomon,
        .iconPalIndex = 0,
        SHADOW(-2, -2, SHADOW_SIZE_S)
        FOOTPRINT(Omanyte)
        OVERWORLD(
            sPicTable_Omanyte,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Omanyte,
            gShinyOverworldPalette_Omanyte
        )
        .levelUpLearnset = sOmanyteLevelUpLearnset,
        .teachableLearnset = sOmanyteTeachableLearnset,
        .eggMoveLearnset = sOmanyteEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_OMASTAR}),
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
        .frontPic = gMonFrontPic_Omastar,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = sAnims_Omastar,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Omastar,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dorumon,
        .shinyPalette = gMonShinyPalette_Dorumon,
        .iconSprite = gMonIcon_Dorumon,
        .iconPalIndex = 0,
        SHADOW(0, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Omastar)
        OVERWORLD(
            sPicTable_Omastar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Omastar,
            gShinyOverworldPalette_Omastar
        )
        .levelUpLearnset = sOmastarLevelUpLearnset,
        .teachableLearnset = sOmastarTeachableLearnset,
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
        .frontAnimFrames = sAnims_Kabuto,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .backPic = gMonBackPic_Dotagumon,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Dotagumon,
        .shinyPalette = gMonShinyPalette_Dotagumon,
        .iconSprite = gMonIcon_Dotagumon,
        .iconPalIndex = 2,
        SHADOW(2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Kabuto)
        OVERWORLD(
            sPicTable_Kabuto,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Kabuto,
            gShinyOverworldPalette_Kabuto
        )
        .levelUpLearnset = sKabutoLevelUpLearnset,
        .teachableLearnset = sKabutoTeachableLearnset,
        .eggMoveLearnset = sKabutoEggMoveLearnset,
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
        .frontAnimFrames = sAnims_Kabutops,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Kabutops,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Dotfalcmon,
        .shinyPalette = gMonShinyPalette_Dotfalcmon,
        .iconSprite = gMonIcon_Dotfalcmon,
        .iconPalIndex = 2,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Kabutops)
        OVERWORLD(
            sPicTable_Kabutops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Kabutops,
            gShinyOverworldPalette_Kabutops
        )
        .levelUpLearnset = sKabutopsLevelUpLearnset,
        .teachableLearnset = sKabutopsTeachableLearnset,
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
        .frontAnimFrames = sAnims_Aerodactyl,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .backPic = gMonBackPic_Aerodactyl,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Aerodactyl,
        .shinyPalette = gMonShinyPalette_Aerodactyl,
        .iconSprite = gMonIcon_Aerodactyl,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Aerodactyl)
        OVERWORLD(
            sPicTable_Aerodactyl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Aerodactyl,
            gShinyOverworldPalette_Aerodactyl
        )
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,
        .formChangeTable = sAerodactylFormChangeTable,
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
        .frontAnimFrames = sAnims_DracmonMega,
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
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Aerodactyl)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAerodactylLevelUpLearnset,
        .teachableLearnset = sAerodactylTeachableLearnset,
        .eggMoveLearnset = sAerodactylEggMoveLearnset,
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,
        .formChangeTable = sAerodactylFormChangeTable,
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
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Munchlax,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        .palette = gMonPalette_Munchlax,
        .shinyPalette = gMonShinyPalette_Munchlax,
        .iconSprite = gMonIcon_Munchlax,
        .iconPalIndex = 3,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Munchlax)
        OVERWORLD(
            sPicTable_Munchlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Munchlax,
            gShinyOverworldPalette_Munchlax
        )
        .levelUpLearnset = sMunchlaxLevelUpLearnset,
        .teachableLearnset = sMunchlaxTeachableLearnset,
        .eggMoveLearnset = sMunchlaxEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}),
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
        .frontPic = gMonFrontPic_Snorlax,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .frontAnimFrames = sAnims_Snorlax,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snorlax,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Snorlax,
        .shinyPalette = gMonShinyPalette_Snorlax,
        .iconSprite = gMonIcon_Snorlax,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Snorlax)
        OVERWORLD(
            sPicTable_Snorlax,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snorlax,
            gShinyOverworldPalette_Snorlax
        )
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,
        .formChangeTable = sSnorlaxFormChangeTable,
        .evolutions = EVOLUTION({EVO_HEALTH, 90, SPECIES_DEXDORUMON},
                                {EVO_ITEM, ITEM_X_ANTIBODY, SPECIES_DRACOMON_X},
                                {EVO_LEVEL, 34, SPECIES_COREDRAMON_BLUE}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GMAX] =
    {
        .baseHP        = 170,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
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
        .frontPic = gMonFrontPic_SnorlaxGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SnorlaxGmax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SnorlaxGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SnorlaxGmax,
        .shinyPalette = gMonShinyPalette_SnorlaxGmax,
        .iconSprite = gMonIcon_SnorlaxGmax,
        .iconPalIndex = 3,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Snorlax)
        .isGigantamax = TRUE,
        .levelUpLearnset = sSnorlaxLevelUpLearnset,
        .teachableLearnset = sSnorlaxTeachableLearnset,
        .eggMoveLearnset = sSnorlaxEggMoveLearnset,
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,
        .formChangeTable = sSnorlaxFormChangeTable,
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
        .frontAnimFrames = sAnims_Articuno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Articuno,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Articuno,
        .shinyPalette = gMonShinyPalette_Articuno,
        .iconSprite = gMonIcon_Articuno,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Articuno)
        OVERWORLD(
            sPicTable_Articuno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Articuno,
            gShinyOverworldPalette_Articuno
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sArticunoLevelUpLearnset,
        .teachableLearnset = sArticunoTeachableLearnset,
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DAMEMON_FUSION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO_GALAR] =
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
        .frontPic = gMonFrontPic_ArticunoGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ArticunoGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_ArticunoGalar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ArticunoGalar,
        .shinyPalette = gMonShinyPalette_ArticunoGalar,
        .iconSprite = gMonIcon_ArticunoGalar,
        .iconPalIndex = 2,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Articuno)
        OVERWORLD(
            sPicTable_ArticunoGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ArticunoGalar,
            gShinyOverworldPalette_ArticunoGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sArticunoGalarLevelUpLearnset,
        .teachableLearnset = sArticunoGalarTeachableLearnset,
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,
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
        .frontAnimFrames = sAnims_Ebiburgmon,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Zapdos,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Ebiburgmon,
        .shinyPalette = gMonShinyPalette_Ebiburgmon,
        .iconSprite = gMonIcon_Ebiburgmon,
        .iconPalIndex = 0,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Zapdos)
        OVERWORLD(
            sPicTable_Zapdos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Zapdos,
            gShinyOverworldPalette_Zapdos
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZapdosLevelUpLearnset,
        .teachableLearnset = sZapdosTeachableLearnset,
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BURGERMON_CHAMPION}),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS_GALAR] =
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
        .frontPic = gMonFrontPic_ZapdosGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ZapdosGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZapdosGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_ZapdosGalar,
        .shinyPalette = gMonShinyPalette_ZapdosGalar,
        .iconSprite = gMonIcon_ZapdosGalar,
        .iconPalIndex = 0,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Zapdos)
        OVERWORLD(
            sPicTable_ZapdosGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_ZapdosGalar,
            gShinyOverworldPalette_ZapdosGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sZapdosGalarLevelUpLearnset,
        .teachableLearnset = sZapdosGalarTeachableLearnset,
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,
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
        .frontAnimFrames = sAnims_Moltres,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backPic = gMonBackPic_Moltres,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Ekakimon,
        .shinyPalette = gMonShinyPalette_Ekakimon,
        .iconSprite = gMonIcon_Ekakimon,
        .iconPalIndex = 0,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Moltres)
        OVERWORLD(
            sPicTable_Moltres,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Moltres,
            gShinyOverworldPalette_Moltres
        )
        .isLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMoltresLevelUpLearnset,
        .teachableLearnset = sMoltresTeachableLearnset,
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES_GALAR] =
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
        .frontPic = gMonFrontPic_MoltresGalar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MoltresGalar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MoltresGalar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_MoltresGalar,
        .shinyPalette = gMonShinyPalette_MoltresGalar,
        .iconSprite = gMonIcon_MoltresGalar,
        .iconPalIndex = 0,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Moltres)
        OVERWORLD(
            sPicTable_MoltresGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_MoltresGalar,
            gShinyOverworldPalette_MoltresGalar
        )
        .isLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMoltresGalarLevelUpLearnset,
        .teachableLearnset = sMoltresGalarTeachableLearnset,
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,
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
        .frontPic = gMonFrontPic_Dratini,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 9,
        .frontAnimFrames = sAnims_Dratini,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dratini,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Elecmon,
        .shinyPalette = gMonShinyPalette_Elecmon,
        .iconSprite = gMonIcon_Elecmon,
        .iconPalIndex = 0,
        SHADOW(3, 3, SHADOW_SIZE_L)
        FOOTPRINT(Dratini)
        OVERWORLD(
            sPicTable_Dratini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dratini,
            gShinyOverworldPalette_Dratini
        )
        .levelUpLearnset = sDratiniLevelUpLearnset,
        .teachableLearnset = sDratiniTeachableLearnset,
        .eggMoveLearnset = sDratiniEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_SPEED, 58, SPECIES_BLGARURMON},
                                {EVO_LEVEL, 33, SPECIES_AEGIOMON}),
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
        .frontPic = gMonFrontPic_Dragonair,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .frontAnimFrames = sAnims_Dragonair,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Dragonair,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(40, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Elecmon_violet,
        .shinyPalette = gMonShinyPalette_Elecmon_violet,
        .iconSprite = gMonIcon_Elecmon_violet,
        .iconPalIndex = 0,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dragonair)
        OVERWORLD(
            sPicTable_Dragonair,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dragonair,
            gShinyOverworldPalette_Dragonair
        )
        .levelUpLearnset = sDragonairLevelUpLearnset,
        .teachableLearnset = sDragonairTeachableLearnset,
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
        .frontAnimFrames = sAnims_Dragonite,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_SHAKE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 0,
        .backPic = gMonBackPic_Dragonite,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Espimon,
        .shinyPalette = gMonShinyPalette_Espimon,
        .iconSprite = gMonIcon_Espimon,
        .iconPalIndex = 2,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dragonite)
        OVERWORLD(
            sPicTable_Dragonite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dragonite,
            gShinyOverworldPalette_Dragonite
        )
        .levelUpLearnset = sDragoniteLevelUpLearnset,
        .teachableLearnset = sDragoniteTeachableLearnset,
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
        .frontAnimFrames = sAnims_Agumon_fake_expert,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Mewtwo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expert,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expert,
        .iconSprite = gMonIcon_Agumon_fake_expert,
        .iconPalIndex = 2,
        SHADOW(6, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mewtwo)
        OVERWORLD(
            sPicTable_Mewtwo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mewtwo,
            gShinyOverworldPalette_Mewtwo
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
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
        .frontAnimFrames = sAnims_Agumon_fake_expertMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Agumon_fake_expertMegaX,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Agumon_fake_expertMegaX,
        .shinyPalette = gMonShinyPalette_Agumon_fake_expertMegaX,
        .iconSprite = gMonIcon_Agumon_fake_expertMegaX,
        .iconPalIndex = 2,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Mewtwo)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
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
        .frontAnimFrames = sAnims_Agumon_fake_expertMegaY,
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
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Mewtwo)
        .isLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMewtwoLevelUpLearnset,
        .teachableLearnset = sMewtwoTeachableLearnset,
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,
        .formChangeTable = sMewtwoFormChangeTable,
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
        .frontPic = gMonFrontPic_Mew,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .frontAnimFrames = sAnims_Mew,
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONVEX : ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backPic = gMonBackPic_Mew,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Falcomon,
        .shinyPalette = gMonShinyPalette_Falcomon,
        .iconSprite = gMonIcon_Falcomon,
        .iconPalIndex = 0,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Mew)
        OVERWORLD(
            sPicTable_Mew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Mew,
            gShinyOverworldPalette_Mew
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .levelUpLearnset = sMewLevelUpLearnset,
        .teachableLearnset = sMewTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_DIATRYMON}),
    },
#endif //P_FAMILY_FALCOMON

#ifdef __INTELLISENSE__
};
#endif

