const struct TrainerMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_KOKUWAMON] = {
        .species = SPECIES_KOKUWAMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_HELPING_HAND, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BIOSTEGOMON] = {
        .species = SPECIES_BIOSTEGOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SING, MOVE_CHARM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DATIRIMON] = {
        .species = SPECIES_DATIRIMON,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_FUFUMON] = {
        .species = SPECIES_FUFUMON,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VEEMON] = {
        .species = SPECIES_VEEMON,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_APEMON] = {
        .species = SPECIES_APEMON,
        .moves = {MOVE_CONFUSION, MOVE_IMPRISON, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEARAGUMON] = {
        .species = SPECIES_CLEARAGUMON,
        .moves = {MOVE_FLAIL, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DOGGYMON] = {
        .species = SPECIES_DOGGYMON,
        .moves = {MOVE_FLAIL, MOVE_MIRROR_COAT, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DODOMON] = {
        .species = SPECIES_DODOMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_JYARIMON] = {
        .species = SPECIES_JYARIMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_GUILMON_X] = {
        .species = SPECIES_GUILMON_X,
        .moves = {MOVE_SWEET_KISS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SHOCK_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_VEMMON] = {
        .species = SPECIES_VEMMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_WORMMON] = {
        .species = SPECIES_WORMMON,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_HACKMON] = {
        .species = SPECIES_HACKMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KUDAMON] = {
        .species = SPECIES_KUDAMON,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_WATER_PULSE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SALAMON] = {
        .species = SPECIES_SALAMON,
        .moves = {MOVE_MACH_PUNCH, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FACADE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAZIMON] = {
        .species = SPECIES_GAZIMON,
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ASSIST},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GUMDRAMON] = {
        .species = SPECIES_GUMDRAMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_AIRDRAMON] = {
        .species = SPECIES_AIRDRAMON,
        .moves = {MOVE_BULLET_SEED, MOVE_BIDE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZUBAMON] = {
        .species = SPECIES_ZUBAMON,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_SUNNY_DAY, MOVE_MEGA_DRAIN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TINKERMON] = {
        .species = SPECIES_TINKERMON,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ROAR, MOVE_SAND_ATTACK},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BALUCHIMON] = {
        .species = SPECIES_BALUCHIMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SILVER_WIND, MOVE_GRUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_BETELGAMMAMON] = {
        .species = SPECIES_BETELGAMMAMON,
        .moves = {MOVE_FAKE_OUT, MOVE_SEISMIC_TOSS, MOVE_DETECT, MOVE_WHIRLWIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BAOHUCKMON] = {
        .species = SPECIES_BAOHUCKMON,
        .moves = {MOVE_UPROAR, MOVE_SWAGGER, MOVE_BODY_SLAM, MOVE_SMELLING_SALTS},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TOYAGUMON] = {
        .species = SPECIES_TOYAGUMON,
        .moves = {MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SWIFT, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SNOWBOTAMON] = {
        .species = SPECIES_SNOWBOTAMON,
        .moves = {MOVE_POISON_FANG, MOVE_WHIRLWIND, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_HAGURUMON] = {
        .species = SPECIES_HAGURUMON,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GOMAMON] = {
        .species = SPECIES_GOMAMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_JAZAMON] = {
        .species = SPECIES_JAZAMON,
        .moves = {MOVE_WATER_PULSE, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_KERAMON] = {
        .species = SPECIES_KERAMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_OTAMAMON_RED] = {
        .species = SPECIES_OTAMAMON_RED,
        .moves = {MOVE_EMBER, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_BODY_SLAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PALMON] = {
        .species = SPECIES_PALMON,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDURE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_RYUDAMON] = {
        .species = SPECIES_RYUDAMON,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KETOMON] = {
        .species = SPECIES_KETOMON,
        .moves = {MOVE_GUST, MOVE_SAND_ATTACK, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_METALKOROMON] = {
        .species = SPECIES_METALKOROMON,
        .moves = {MOVE_HYPER_FANG, MOVE_PURSUIT, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EXVEEMON] = {
        .species = SPECIES_EXVEEMON,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BIRDRAMON] = {
        .species = SPECIES_BIRDRAMON,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NYOKIMON] = {
        .species = SPECIES_NYOKIMON,
        .moves = {MOVE_FURY_ATTACK, MOVE_PURSUIT, MOVE_MIRROR_MOVE, MOVE_PROTECT},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GHOSTMON] = {
        .species = SPECIES_GHOSTMON,
        .moves = {MOVE_CONFUSION, MOVE_HYPNOSIS, MOVE_SUPERSONIC, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BUDMON] = {
        .species = SPECIES_BUDMON,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_GIZUMON] = {
        .species = SPECIES_GIZUMON,
        .moves = {MOVE_PSYBEAM, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_BAKEMON] = {
        .species = SPECIES_BAKEMON,
        .moves = {MOVE_MUD_SLAP, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ARCHELOMON] = {
        .species = SPECIES_ARCHELOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_RAIN_DANCE, MOVE_SWEET_SCENT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SANDMON] = {
        .species = SPECIES_SANDMON,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_MIMIC, MOVE_DOUBLE_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ALLOMON_X] = {
        .species = SPECIES_ALLOMON_X,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_FOCUS_ENERGY},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_ANGEMON] = {
        .species = SPECIES_ANGEMON,
        .moves = {MOVE_WATER_PULSE, MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_STEEL_WING},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PUSUMON] = {
        .species = SPECIES_PUSUMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_DISABLE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PUNIMON] = {
        .species = SPECIES_PUNIMON,
        .moves = {MOVE_CRUNCH, MOVE_DOUBLE_KICK, MOVE_FLATTER, MOVE_HELPING_HAND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AQUILAMON] = {
        .species = SPECIES_AQUILAMON,
        .moves = {MOVE_CONFUSION, MOVE_WILL_O_WISP, MOVE_FUTURE_SIGHT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HYOKOMON] = {
        .species = SPECIES_HYOKOMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BLADEKUWAGAMON] = {
        .species = SPECIES_BLADEKUWAGAMON,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_AURUMON] = {
        .species = SPECIES_AURUMON,
        .moves = {MOVE_YAWN, MOVE_SCRATCH, MOVE_ENCORE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ARGOMON_IT] = {
        .species = SPECIES_ARGOMON_IT,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PAFUMON] = {
        .species = SPECIES_PAFUMON,
        .moves = {MOVE_ACID, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CRABMON] = {
        .species = SPECIES_CRABMON,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_METAL_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DEPTHMON] = {
        .species = SPECIES_DEPTHMON,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_CALUMON] = {
        .species = SPECIES_CALUMON,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_SCREECH, MOVE_FAKE_OUT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LUDOMON] = {
        .species = SPECIES_LUDOMON,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_TAKE_DOWN, MOVE_REFLECT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_COREDRAMON_GREEN] = {
        .species = SPECIES_COREDRAMON_GREEN,
        .moves = {MOVE_TOXIC, MOVE_DIG, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_EYESMON_SCATTERMODE] = {
        .species = SPECIES_EYESMON_SCATTERMODE,
        .moves = {MOVE_ICE_BALL, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_MUD_SLAP},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BIYOMON] = {
        .species = SPECIES_BIYOMON,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY, MOVE_ICY_WIND, MOVE_TWISTER},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARRESTERDRAMON] = {
        .species = SPECIES_ARRESTERDRAMON,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_HEADBUTT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DORUGAMON] = {
        .species = SPECIES_DORUGAMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_GRUDGE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DRIMOGEMON] = {
        .species = SPECIES_DRIMOGEMON,
        .moves = {MOVE_SKILL_SWAP, MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BOARMON] = {
        .species = SPECIES_BOARMON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RELEMON] = {
        .species = SPECIES_RELEMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PETITMON] = {
        .species = SPECIES_PETITMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIGHT_BALL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POPOMON] = {
        .species = SPECIES_POPOMON,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GUMMYMON] = {
        .species = SPECIES_GUMMYMON,
        .moves = {MOVE_HYPNOSIS, MOVE_ICY_WIND, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KYAROMON] = {
        .species = SPECIES_KYAROMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_MONIMON] = {
        .species = SPECIES_MONIMON,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_STRENGTH, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ELECMON] = {
        .species = SPECIES_ELECMON,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC, MOVE_WATER_PULSE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MODOKIBETAMON] = {
        .species = SPECIES_MODOKIBETAMON,
        .moves = {MOVE_BITE, MOVE_CHARM, MOVE_SWAGGER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PAWNCHESSMON_BLACK] = {
        .species = SPECIES_PAWNCHESSMON_BLACK,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SOLARMON] = {
        .species = SPECIES_SOLARMON,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_DIG, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_DEXDORUGAMON] = {
        .species = SPECIES_DEXDORUGAMON,
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_MUD_SLAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXVEEMON_VIRUS] = {
        .species = SPECIES_EXVEEMON_VIRUS,
        .moves = {MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_LEER, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FLYMON] = {
        .species = SPECIES_FLYMON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_FUGAMON] = {
        .species = SPECIES_FUGAMON,
        .moves = {MOVE_TAKE_DOWN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BURAIMON] = {
        .species = SPECIES_BURAIMON,
        .moves = {MOVE_TOXIC, MOVE_YAWN, MOVE_PAIN_SPLIT, MOVE_ATTRACT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_BIBIMON] = {
        .species = SPECIES_BIBIMON,
        .moves = {MOVE_PSYBEAM, MOVE_SUPERSONIC, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DEMIVEEMON] = {
        .species = SPECIES_DEMIVEEMON,
        .moves = {MOVE_KARATE_CHOP, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_KOKOMON] = {
        .species = SPECIES_KOKOMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_REVENGE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TANEMON] = {
        .species = SPECIES_TANEMON,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_CLAMP, MOVE_WITHDRAW},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SANGOMON] = {
        .species = SPECIES_SANGOMON,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_MUD_SLAP, MOVE_FAKE_OUT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHRYSALIMON] = {
        .species = SPECIES_CHRYSALIMON,
        .moves = {MOVE_EMBER, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BUTTERFLYMON] = {
        .species = SPECIES_BUTTERFLYMON,
        .moves = {MOVE_BITE, MOVE_SCREECH, MOVE_SCARY_FACE, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DEVIDRAMON] = {
        .species = SPECIES_DEVIDRAMON,
        .moves = {MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BOTAMON] = {
        .species = SPECIES_BOTAMON,
        .moves = {MOVE_FIRE_SPIN, MOVE_METAL_CLAW, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FLORAMON] = {
        .species = SPECIES_FLORAMON,
        .moves = {MOVE_EMBER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOPMON] = {
        .species = SPECIES_HOPMON,
        .moves = {MOVE_MIMIC, MOVE_METRONOME, MOVE_FLASH, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_POROMON] = {
        .species = SPECIES_POROMON,
        .moves = {MOVE_FURY_ATTACK, MOVE_UPROAR, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TOKOMON_X] = {
        .species = SPECIES_TOKOMON_X,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DARKLIZARDMON] = {
        .species = SPECIES_DARKLIZARDMON,
        .moves = {MOVE_TAKE_DOWN, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SUNARIZAMON] = {
        .species = SPECIES_SUNARIZAMON,
        .moves = {MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SYAKOMON_X] = {
        .species = SPECIES_SYAKOMON_X,
        .moves = {MOVE_FIRE_SPIN, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TERRIERMON] = {
        .species = SPECIES_TERRIERMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_ENDEAVOR, MOVE_MUD_SPORT, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CONOMON] = {
        .species = SPECIES_CONOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_WITHDRAW, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAMMAMON] = {
        .species = SPECIES_GAMMAMON,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_SCREECH, MOVE_ICY_WIND},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PAGUMON] = {
        .species = SPECIES_PAGUMON,
        .moves = {MOVE_CONFUSION, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ARGOMON_F] = {
        .species = SPECIES_ARGOMON_F,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FALCOMON_06] = {
        .species = SPECIES_FALCOMON_06,
        .moves = {MOVE_SECRET_POWER, MOVE_BULLET_SEED, MOVE_MUD_SLAP, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ZERIMON] = {
        .species = SPECIES_ZERIMON,
        .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SWEET_SCENT, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHICCHIMON] = {
        .species = SPECIES_CHICCHIMON,
        .moves = {MOVE_CONFUSION, MOVE_FURY_SWIPES, MOVE_AERIAL_ACE, MOVE_DISABLE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_AGUMON_06] = {
        .species = SPECIES_AGUMON_06,
        .moves = {MOVE_BONE_CLUB, MOVE_HEADBUTT, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BLACKAGUMON_X] = {
        .species = SPECIES_BLACKAGUMON_X,
        .moves = {MOVE_WATERFALL, MOVE_FURY_ATTACK, MOVE_AGILITY, MOVE_PSYBEAM},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HAWKMON] = {
        .species = SPECIES_HAWKMON,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PUYOMON] = {
        .species = SPECIES_PUYOMON,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_PICKMON_WHITE] = {
        .species = SPECIES_PICKMON_WHITE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SUPERSONIC, MOVE_METAL_SOUND, MOVE_REFLECT},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_PUSURIMON] = {
        .species = SPECIES_PUSURIMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .heldItem = ITEM_ASPEAR_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SAKUTTOMON] = {
        .species = SPECIES_SAKUTTOMON,
        .moves = {MOVE_SLUDGE, MOVE_ROCK_TOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VIXIMON] = {
        .species = SPECIES_VIXIMON,
        .moves = {MOVE_CRABHAMMER, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_YOKOMON] = {
        .species = SPECIES_YOKOMON,
        .moves = {MOVE_CONFUSION, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_CRABMON_X] = {
        .species = SPECIES_CRABMON_X,
        .moves = {MOVE_CHARM, MOVE_ATTRACT, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TUMBLEMON] = {
        .species = SPECIES_TUMBLEMON,
        .moves = {MOVE_CONFUSION, MOVE_HEADBUTT, MOVE_DISABLE, MOVE_BARRIER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_XIAOMON] = {
        .species = SPECIES_XIAOMON,
        .moves = {MOVE_SPARK, MOVE_SCREECH, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GOTSUMON_X] = {
        .species = SPECIES_GOTSUMON_X,
        .moves = {MOVE_SPARK, MOVE_DIVE, MOVE_CONFUSE_RAY, MOVE_TAKE_DOWN},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NEEMON] = {
        .species = SPECIES_NEEMON,
        .moves = {MOVE_SECRET_POWER, MOVE_FAKE_TEARS, MOVE_FEINT_ATTACK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PENGUINMON] = {
        .species = SPECIES_PENGUINMON,
        .moves = {MOVE_PRESENT, MOVE_ICE_BALL, MOVE_AERIAL_ACE, MOVE_HAIL},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PILLOMON] = {
        .species = SPECIES_PILLOMON,
        .moves = {MOVE_CRUNCH, MOVE_EMBER, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PULSEMON] = {
        .species = SPECIES_PULSEMON,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_ROCK_TOMB, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_CLOCKMON_FUSION] = {
        .species = SPECIES_CLOCKMON_FUSION,
        .moves = {MOVE_PSYWAVE, MOVE_BOUNCE, MOVE_MAGIC_COAT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BLACKGATOMON] = {
        .species = SPECIES_BLACKGATOMON,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_METAL_SOUND, MOVE_ROAR},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FLYBEEMON] = {
        .species = SPECIES_FLYBEEMON,
        .moves = {MOVE_SWEET_KISS, MOVE_ATTRACT, MOVE_DIVE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MINOMON] = {
        .species = SPECIES_MINOMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_BARRIER, MOVE_WRAP},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DARCMON] = {
        .species = SPECIES_DARCMON,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_COTTON_SPORE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LOPMON] = {
        .species = SPECIES_LOPMON,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ARGOMON_ROOKIE] = {
        .species = SPECIES_ARGOMON_ROOKIE,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TORMENT, MOVE_HAZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BLACKGUILMON] = {
        .species = SPECIES_BLACKGUILMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MINIMIZE, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KERAMON_X] = {
        .species = SPECIES_KERAMON_X,
        .moves = {MOVE_MEGA_DRAIN, MOVE_CONFUSION, MOVE_COTTON_SPORE, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_AKATORIMON] = {
        .species = SPECIES_AKATORIMON,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_RAZOR_WIND, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AEGIOMON] = {
        .species = SPECIES_AEGIOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_ABSORB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CYCLONEMON] = {
        .species = SPECIES_CYCLONEMON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_DIG, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ARURAUMON] = {
        .species = SPECIES_ARURAUMON,
        .moves = {MOVE_ROCK_BLAST, MOVE_DIG, MOVE_SCARY_FACE, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FIRAMON] = {
        .species = SPECIES_FIRAMON,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_IRON_DEFENSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_DEEP_SEA_SCALE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KURAMON] = {
        .species = SPECIES_KURAMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_FRIMON] = {
        .species = SPECIES_FRIMON,
        .moves = {MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_ROAR, MOVE_AGILITY},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PINAMON] = {
        .species = SPECIES_PINAMON,
        .moves = {MOVE_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_LEEK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DONDOKOMON] = {
        .species = SPECIES_DONDOKOMON,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DOTAGUMON] = {
        .species = SPECIES_DOTAGUMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SAND_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DIGMON] = {
        .species = SPECIES_DIGMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_ACID, MOVE_INGRAIN, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DOBERMON] = {
        .species = SPECIES_DOBERMON,
        .moves = {MOVE_METAL_CLAW, MOVE_FURY_CUTTER, MOVE_ANCIENT_POWER, MOVE_WATER_GUN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KOKABUTERIMON] = {
        .species = SPECIES_KOKABUTERIMON,
        .moves = {MOVE_FURY_SWIPES, MOVE_SAND_ATTACK, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SANTAAGUMON] = {
        .species = SPECIES_SANTAAGUMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_QUICK_ATTACK, MOVE_SWIFT, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_BAROMON] = {
        .species = SPECIES_BAROMON,
        .moves = {MOVE_STOMP, MOVE_HOWL, MOVE_ASTONISH, MOVE_SUPERSONIC},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_COREDRAMON_BLUE] = {
        .species = SPECIES_COREDRAMON_BLUE,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE, MOVE_PSYBEAM, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PUPUMON] = {
        .species = SPECIES_PUPUMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PUTTIMON] = {
        .species = SPECIES_PUTTIMON,
        .moves = {MOVE_DOUBLE_KICK, MOVE_WATER_PULSE, MOVE_MUD_SLAP, MOVE_FLATTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_IGNITEMON] = {
        .species = SPECIES_IGNITEMON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COTTON_SPORE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SHADOWTOYAGUMON] = {
        .species = SPECIES_SHADOWTOYAGUMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_SMOG},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BIOTHUNDERBIRDMON] = {
        .species = SPECIES_BIOTHUNDERBIRDMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SANDSTORM},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PATAMON] = {
        .species = SPECIES_PATAMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MIRROR_COAT, MOVE_ATTRACT, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_BLACKGARURUMON] = {
        .species = SPECIES_BLACKGARURUMON,
        .moves = {MOVE_CRUNCH, MOVE_FAKE_TEARS, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DOKIMON] = {
        .species = SPECIES_DOKIMON,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_WHIRLWIND},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KEEMON] = {
        .species = SPECIES_KEEMON,
        .moves = {MOVE_TWINEEDLE, MOVE_PURSUIT, MOVE_ENDEAVOR, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_GURIMON] = {
        .species = SPECIES_GURIMON,
        .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_SLAP, MOVE_ICY_WIND, MOVE_RAIN_DANCE},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TSUNOMON] = {
        .species = SPECIES_TSUNOMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BIND, MOVE_DRAGON_BREATH, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_VORVOMON] = {
        .species = SPECIES_VORVOMON,
        .moves = {MOVE_SILVER_WIND, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_WHIRLWIND},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ZENIMON] = {
        .species = SPECIES_ZENIMON,
        .moves = {MOVE_SILVER_WIND, MOVE_TOXIC, MOVE_PSYBEAM, MOVE_WHIRLWIND},
        .heldItem = ITEM_SILVER_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GOBLIMON] = {
        .species = SPECIES_GOBLIMON,
        .moves = {MOVE_COMET_PUNCH, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_GOMAMON_X] = {
        .species = SPECIES_GOMAMON_X,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SPIDER_WEB, MOVE_NIGHT_SHADE, MOVE_TOXIC},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_KOTEMON] = {
        .species = SPECIES_KOTEMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_DETECT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BLACKGAOGAMON_1] = {
        .species = SPECIES_BLACKGAOGAMON,
        .moves = {MOVE_SECRET_POWER, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_HEAL_BELL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_BLACKGARGOMON_1] = {
        .species = SPECIES_BLACKGARGOMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .heldItem = ITEM_BLACK_GLASSES,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_ARCADIAMON_ROOKIE_1] = {
        .species = SPECIES_ARCADIAMON_ROOKIE,
        .moves = {MOVE_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KYOKYOMON_1] = {
        .species = SPECIES_KYOKYOMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_WRAP, MOVE_SWEET_SCENT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MOONMON_1] = {
        .species = SPECIES_MOONMON,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZURUMON_1] = {
        .species = SPECIES_ZURUMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DOKUNEMON_1] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_RECYCLE, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KAKKINMON_1] = {
        .species = SPECIES_KAKKINMON,
        .moves = {MOVE_CONFUSION, MOVE_ROLE_PLAY, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CHAMBLEMON_1] = {
        .species = SPECIES_CHAMBLEMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_ROAR, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BULLMON_1] = {
        .species = SPECIES_BULLMON,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_TOXIC, MOVE_GRASS_WHISTLE, MOVE_COTTON_SPORE},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BUCCHIEMON_GREEN_1] = {
        .species = SPECIES_BUCCHIEMON_GREEN,
        .moves = {MOVE_SILVER_WIND, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BULKMON_1] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_SILVER_WIND, MOVE_WISH, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BOMBMON_1] = {
        .species = SPECIES_BOMBMON,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SWEET_SCENT, MOVE_FURY_CUTTER},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_CHIBICKMON_1] = {
        .species = SPECIES_CHIBICKMON,
        .moves = {MOVE_SLASH, MOVE_FIRE_SPIN, MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_COTSUCOMON_1] = {
        .species = SPECIES_COTSUCOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_MUD_SLAP, MOVE_YAWN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BABYDMON_1] = {
        .species = SPECIES_BABYDMON,
        .moves = {MOVE_SLASH, MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_FLASH},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_KOROMON_1] = {
        .species = SPECIES_KOROMON,
        .moves = {MOVE_LOW_KICK, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORIKARABALLMON_1] = {
        .species = SPECIES_TORIKARABALLMON,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_FANBEEMON_1] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GABUMON_1] = {
        .species = SPECIES_GABUMON,
        .moves = {MOVE_FLAME_WHEEL, MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SMOKESCREEN},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAOMON_1] = {
        .species = SPECIES_GAOMON,
        .moves = {MOVE_SLASH, MOVE_WATER_PULSE, MOVE_BITE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HAGURUMON_X_1] = {
        .species = SPECIES_HAGURUMON_X,
        .moves = {MOVE_AERIAL_ACE, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LALAMON_1] = {
        .species = SPECIES_LALAMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FLY, MOVE_TORMENT, MOVE_TAUNT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LOPMONX_1] = {
        .species = SPECIES_LOPMONX,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_SAFEGUARD},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BOOGIEMON_1] = {
        .species = SPECIES_BOOGIEMON,
        .moves = {MOVE_SPARK, MOVE_FAKE_TEARS, MOVE_QUICK_ATTACK, MOVE_HELPING_HAND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BUCCHIEMON_RED_1] = {
        .species = SPECIES_BUCCHIEMON_RED,
        .moves = {MOVE_SPARK, MOVE_CHARM, MOVE_ENCORE, MOVE_HELPING_HAND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SWIMMON_1] = {
        .species = SPECIES_SWIMMON,
        .moves = {MOVE_FURY_CUTTER, MOVE_ENDEAVOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAPIRMON_1] = {
        .species = SPECIES_TAPIRMON,
        .moves = {MOVE_EMBER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TERRIERMON_ASSISTANT_1] = {
        .species = SPECIES_TERRIERMON_ASSISTANT,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_NEGAMON_1] = {
        .species = SPECIES_NEGAMON,
        .moves = {MOVE_FIRE_SPIN, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_JELLYMON_1] = {
        .species = SPECIES_JELLYMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_FACADE, MOVE_DIG, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_JUNKMON_1] = {
        .species = SPECIES_JUNKMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_HARD_STONE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_OTAMAMON_X_1] = {
        .species = SPECIES_OTAMAMON_X,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EMBER, MOVE_ACID_ARMOR, MOVE_SANDSTORM},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_SOUNDBIRDMON_1] = {
        .species = SPECIES_SOUNDBIRDMON,
        .moves = {MOVE_DIG, MOVE_BITE, MOVE_SCARY_FACE, MOVE_SANDSTORM},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FANGMON_1] = {
        .species = SPECIES_FANGMON,
        .moves = {MOVE_ICE_BALL, MOVE_HAIL, MOVE_SNORE, MOVE_REST},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MOKUMON_1] = {
        .species = SPECIES_MOKUMON,
        .moves = {MOVE_ENDEAVOR, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ARGOMON_CHAMPION_1] = {
        .species = SPECIES_ARGOMON_CHAMPION,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_ICY_WIND, MOVE_STUN_SPORE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GAZIMON_X_1] = {
        .species = SPECIES_GAZIMON_X,
        .moves = {MOVE_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_LUXMON_1] = {
        .species = SPECIES_LUXMON,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ELECMON_VIOLET_1] = {
        .species = SPECIES_ELECMON_VIOLET,
        .moves = {MOVE_DRAGON_BREATH, MOVE_LEER, MOVE_WRAP, MOVE_SAFEGUARD},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TINPET_1] = {
        .species = SPECIES_TINPET,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_ROAR},
        .heldItem = ITEM_MENTAL_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TSUKAIMON_1] = {
        .species = SPECIES_TSUKAIMON,
        .moves = {MOVE_SECRET_POWER, MOVE_SAND_ATTACK, MOVE_COVET, MOVE_TICKLE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DOLPHMON_1] = {
        .species = SPECIES_DOLPHMON_NORMAL,
        .moves = {MOVE_EMBER, MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_ICY_WIND},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_FRIGIMON_1] = {
        .species = SPECIES_FRIGIMON,
        .moves = {MOVE_HEADBUTT, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_SCARY_FACE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GANEMON_1] = {
        .species = SPECIES_GANEMON,
        .moves = {MOVE_METAL_CLAW, MOVE_CONFUSION, MOVE_PURSUIT, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TSUBUMON_1] = {
        .species = SPECIES_TSUBUMON,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_SECRET_POWER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_KOKUWAMON_X_1] = {
        .species = SPECIES_KOKUWAMON_X,
        .moves = {MOVE_PETAL_DANCE, MOVE_INGRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_EOSMON_CHAMPION_1] = {
        .species = SPECIES_EOSMON_CHAMPION,
        .moves = {MOVE_PSYWAVE, MOVE_TAKE_DOWN, MOVE_HEAL_BELL, MOVE_SAFEGUARD},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_METABEE_1] = {
        .species = SPECIES_METABEE,
        .moves = {MOVE_METAL_CLAW, MOVE_DIG, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_MONMON_1] = {
        .species = SPECIES_MONMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_PIN_MISSILE, MOVE_SPIKES, MOVE_MINIMIZE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_MUSHROOMON_1] = {
        .species = SPECIES_MUSHROOMON,
        .moves = {MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ANKYLOMON_1] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_WATER_PULSE, MOVE_AERIAL_ACE, MOVE_STOCKPILE, MOVE_SWALLOW},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ANGELAMON_1] = {
        .species = SPECIES_ANGELAMON,
        .moves = {MOVE_FLY, MOVE_ENDEAVOR, MOVE_FACADE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLACKGATOMON_UVER_1] = {
        .species = SPECIES_BLACKGATOMON_UVER,
        .moves = {MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .heldItem = ITEM_METAL_COAT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BETAMON_1] = {
        .species = SPECIES_BETAMON,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLAM, MOVE_TOXIC, MOVE_BIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PAOMON_1] = {
        .species = SPECIES_PAOMON,
        .moves = {MOVE_POISON_FANG, MOVE_DIG, MOVE_BITE, MOVE_GLARE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHAPMON_1] = {
        .species = SPECIES_CHAPMON,
        .moves = {MOVE_FAKE_OUT, MOVE_SLASH, MOVE_TORMENT, MOVE_SWAGGER},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BLACKAGUMON_1] = {
        .species = SPECIES_BLACKAGUMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_SMOKESCREEN, MOVE_WATER_GUN, MOVE_RAIN_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DONSHOUTMON_1] = {
        .species = SPECIES_DONSHOUTMON,
        .moves = {MOVE_SECRET_POWER, MOVE_PSYBEAM, MOVE_MAGIC_COAT, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 170, 0, 0, 0),
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_AXEMON_1] = {
        .species = SPECIES_AXEMON,
        .moves = {MOVE_SLASH, MOVE_COUNTER, MOVE_ENCORE, MOVE_UPROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DECKERDRAMON_1] = {
        .species = SPECIES_DECKERDRAMON,
        .moves = {MOVE_CONFUSION, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DELTAMON_1] = {
        .species = SPECIES_DELTAMON,
        .moves = {MOVE_CONFUSION, MOVE_FIRE_SPIN, MOVE_LIGHT_SCREEN, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GIZAMON_1] = {
        .species = SPECIES_GIZAMON,
        .moves = {MOVE_CONFUSION, MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_POYOMON_1] = {
        .species = SPECIES_POYOMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_SWIFT, MOVE_SANDSTORM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOSAMON_1] = {
        .species = SPECIES_BOSAMON,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYBEAM, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BEARMON_1] = {
        .species = SPECIES_BEARMON,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BLACKGABUMON_1] = {
        .species = SPECIES_BLACKGABUMON,
        .moves = {MOVE_WATER_PULSE, MOVE_PSYBEAM, MOVE_SWIFT, MOVE_AGILITY},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KODOKUGUMON_1] = {
        .species = SPECIES_KODOKUGUMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SYNTHESIS},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PALMON_X_1] = {
        .species = SPECIES_PALMON_X,
        .moves = {MOVE_DIG, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_YURAMON_1] = {
        .species = SPECIES_YURAMON,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DORIMON_1] = {
        .species = SPECIES_DORIMON,
        .moves = {MOVE_KARATE_CHOP, MOVE_COUNTER, MOVE_SWAGGER, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AGUMON_X_1] = {
        .species = SPECIES_AGUMON_X,
        .moves = {MOVE_ROLLING_KICK, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_FACADE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ANGORAMON_1] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUCEMON_1] = {
        .species = SPECIES_LUCEMON,
        .moves = {MOVE_PSYBEAM, MOVE_STOMP, MOVE_WISH, MOVE_SKILL_SWAP},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SALAMON_X_1] = {
        .species = SPECIES_SALAMON_X,
        .moves = {MOVE_TRIPLE_KICK, MOVE_DIG, MOVE_MACH_PUNCH, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DORULUMON_1] = {
        .species = SPECIES_DORULUMON,
        .moves = {MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP, MOVE_SPITE, MOVE_KNOCK_OFF},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BALLISTAMON_1] = {
        .species = SPECIES_BALLISTAMON,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_ENDURE, MOVE_DIG},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_DARKTYRANNOMON_X_1] = {
        .species = SPECIES_DARKTYRANNOMON_X,
        .moves = {MOVE_POISON_TAIL, MOVE_BITE, MOVE_GLARE, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DARKTYRANNOMON_1] = {
        .species = SPECIES_DARKTYRANNOMON,
        .moves = {MOVE_SLASH, MOVE_DOUBLE_KICK, MOVE_ROAR, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CITRAMON_1] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_MAGNITUDE, MOVE_PROTECT, MOVE_SANDSTORM, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CENTARUMON_1] = {
        .species = SPECIES_CENTARUMON,
        .moves = {MOVE_SLASH, MOVE_BITE, MOVE_WATER_PULSE, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELEPHANTMON_1] = {
        .species = SPECIES_ELEPHANTMON,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_WHIRLWIND, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PICKMON_RED_1] = {
        .species = SPECIES_PICKMON_RED,
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_PETITMAMON_1] = {
        .species = SPECIES_PETITMAMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_AERIAL_ACE, MOVE_RAIN_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ROKUSHO_1] = {
        .species = SPECIES_ROKUSHO,
        .moves = {MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY, MOVE_STOMP, MOVE_SAND_ATTACK},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_GENTLE
    },
    [FRONTIER_MON_EXERMON_1] = {
        .species = SPECIES_EXERMON,
        .moves = {MOVE_BITE, MOVE_RAZOR_WIND, MOVE_FUTURE_SIGHT, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BURGERMON_CHAMPION_1] = {
        .species = SPECIES_BURGERMON_CHAMPION,
        .moves = {MOVE_STOCKPILE, MOVE_SWALLOW, MOVE_SPIT_UP, MOVE_SLUDGE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DEVIMON_1] = {
        .species = SPECIES_DEVIMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_KNOCK_OFF, MOVE_PROTECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LEAFMON_1] = {
        .species = SPECIES_LEAFMON,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_COELAMON_1] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_MAGIC_COAT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLOCKMON_1] = {
        .species = SPECIES_CLOCKMON,
        .moves = {MOVE_EMBER, MOVE_FIRE_SPIN, MOVE_SMOKESCREEN, MOVE_AMNESIA},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_WANYAMON_1] = {
        .species = SPECIES_WANYAMON,
        .moves = {MOVE_CRABHAMMER, MOVE_METAL_CLAW, MOVE_MUD_SHOT, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TRAILMON_DARK_1] = {
        .species = SPECIES_TRAILMON_DARK,
        .moves = {MOVE_NEEDLE_ARM, MOVE_FEINT_ATTACK, MOVE_ACID, MOVE_MEGA_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_IMPMON_X_1] = {
        .species = SPECIES_IMPMON_X,
        .moves = {MOVE_PETAL_DANCE, MOVE_SAFEGUARD, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PAWNCHESSMON_WHITE_1] = {
        .species = SPECIES_PAWNCHESSMON_WHITE,
        .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_PSYBEAM, MOVE_ROCK_BLAST},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FLAMEDRAMON_1] = {
        .species = SPECIES_FLAMEDRAMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_SCARY_FACE, MOVE_MUD_SLAP, MOVE_BITE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FLAMEWIZARDMON_1] = {
        .species = SPECIES_FLAMEWIZARDMON,
        .moves = {MOVE_WHIRLPOOL, MOVE_AMNESIA, MOVE_ICY_WIND, MOVE_CONFUSION},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FLARERIZAMON_1] = {
        .species = SPECIES_FLARERIZAMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_WATER_PULSE, MOVE_HARDEN, MOVE_AMNESIA},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DORUMON_1] = {
        .species = SPECIES_DORUMON,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SPIKE_CANNON, MOVE_TICKLE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DOTFALCOMON_1] = {
        .species = SPECIES_DOTFALCOMON,
        .moves = {MOVE_SLASH, MOVE_DIG, MOVE_FURY_CUTTER, MOVE_KNOCK_OFF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HIYARIMON_1] = {
        .species = SPECIES_HIYARIMON,
        .moves = {MOVE_SUBMISSION, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_BUBBLE_BEAM},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BURGERMON_1] = {
        .species = SPECIES_BURGERMON,
        .moves = {MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHUUCHUUMON_1] = {
        .species = SPECIES_CHUUCHUUMON,
        .moves = {MOVE_SUBMISSION, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_REVENGE},
        .heldItem = ITEM_BLACK_BELT,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_KAMEMON_1] = {
        .species = SPECIES_KAMEMON,
        .moves = {MOVE_DIVE, MOVE_DIG, MOVE_HYPNOSIS, MOVE_SWAGGER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TOKOMON_1] = {
        .species = SPECIES_TOKOMON,
        .moves = {MOVE_AURORA_BEAM, MOVE_SPIKE_CANNON, MOVE_SUPERSONIC, MOVE_PROTECT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BLACKGAOGAMON_2] = {
        .species = SPECIES_BLACKGAOGAMON,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLACKGARGOMON_2] = {
        .species = SPECIES_BLACKGARGOMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FEINT_ATTACK, MOVE_CONFUSE_RAY, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ARCADIAMON_ROOKIE_2] = {
        .species = SPECIES_ARCADIAMON_ROOKIE,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KYOKYOMON_2] = {
        .species = SPECIES_KYOKYOMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_MOONMON_2] = {
        .species = SPECIES_MOONMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZURUMON_2] = {
        .species = SPECIES_ZURUMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .heldItem = ITEM_PECHA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DOKUNEMON_2] = {
        .species = SPECIES_DOKUNEMON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KAKKINMON_2] = {
        .species = SPECIES_KAKKINMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHAMBLEMON_2] = {
        .species = SPECIES_CHAMBLEMON,
        .moves = {MOVE_WATER_SPOUT, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BULLMON_2] = {
        .species = SPECIES_BULLMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_GRASS_WHISTLE, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BUCCHIEMON_GREEN_2] = {
        .species = SPECIES_BUCCHIEMON_GREEN,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BULKMON_2] = {
        .species = SPECIES_BULKMON,
        .moves = {MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BOMBMON_2] = {
        .species = SPECIES_BOMBMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHIBICKMON_2] = {
        .species = SPECIES_CHIBICKMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_RAGE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_COTSUCOMON_2] = {
        .species = SPECIES_COTSUCOMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BABYDMON_2] = {
        .species = SPECIES_BABYDMON,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_KOROMON_2] = {
        .species = SPECIES_KOROMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TORIKARABALLMON_2] = {
        .species = SPECIES_TORIKARABALLMON,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FANBEEMON_2] = {
        .species = SPECIES_FANBEEMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GABUMON_2] = {
        .species = SPECIES_GABUMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUSH_CLAW, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAOMON_2] = {
        .species = SPECIES_GAOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAGURUMON_X_2] = {
        .species = SPECIES_HAGURUMON_X,
        .moves = {MOVE_RETURN, MOVE_SWEET_KISS, MOVE_AERIAL_ACE, MOVE_YAWN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LALAMON_2] = {
        .species = SPECIES_LALAMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_LOPMONX_2] = {
        .species = SPECIES_LOPMONX,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BOOGIEMON_2] = {
        .species = SPECIES_BOOGIEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SEISMIC_TOSS, MOVE_WISH},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BUCCHIEMON_RED_2] = {
        .species = SPECIES_BUCCHIEMON_RED,
        .moves = {MOVE_THUNDERBOLT, MOVE_ATTRACT, MOVE_CHARM, MOVE_WISH},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SWIMMON_2] = {
        .species = SPECIES_SWIMMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_CRUSH_CLAW, MOVE_SCREECH, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TAPIRMON_2] = {
        .species = SPECIES_TAPIRMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TERRIERMON_ASSISTANT_2] = {
        .species = SPECIES_TERRIERMON_ASSISTANT,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_MUD_SLAP, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NEGAMON_2] = {
        .species = SPECIES_NEGAMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_JELLYMON_2] = {
        .species = SPECIES_JELLYMON,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL, MOVE_DIG},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JUNKMON_2] = {
        .species = SPECIES_JUNKMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_LOW_KICK, MOVE_SELF_DESTRUCT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_OTAMAMON_X_2] = {
        .species = SPECIES_OTAMAMON_X,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SOUNDBIRDMON_2] = {
        .species = SPECIES_SOUNDBIRDMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FANGMON_2] = {
        .species = SPECIES_FANGMON,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM, MOVE_HAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MOKUMON_2] = {
        .species = SPECIES_MOKUMON,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARGOMON_CHAMPION_2] = {
        .species = SPECIES_ARGOMON_CHAMPION,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GAZIMON_X_2] = {
        .species = SPECIES_GAZIMON_X,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_FOLLOW_ME},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUXMON_2] = {
        .species = SPECIES_LUXMON,
        .moves = {MOVE_ICE_BEAM, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ELECMON_VIOLET_2] = {
        .species = SPECIES_ELECMON_VIOLET,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TINPET_2] = {
        .species = SPECIES_TINPET,
        .moves = {MOVE_CRUNCH, MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCARY_FACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TSUKAIMON_2] = {
        .species = SPECIES_TSUKAIMON,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DOLPHMON_2] = {
        .species = SPECIES_DOLPHMON_NORMAL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FRIGIMON_2] = {
        .species = SPECIES_FRIGIMON,
        .moves = {MOVE_FRUSTRATION, MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GANEMON_2] = {
        .species = SPECIES_GANEMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TSUBUMON_2] = {
        .species = SPECIES_TSUBUMON,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KOKUWAMON_X_2] = {
        .species = SPECIES_KOKUWAMON_X,
        .moves = {MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_GROWTH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_EOSMON_CHAMPION_2] = {
        .species = SPECIES_EOSMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEAL_BELL},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_METABEE_2] = {
        .species = SPECIES_METABEE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_SCREECH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MONMON_2] = {
        .species = SPECIES_MONMON,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUSHROOMON_2] = {
        .species = SPECIES_MUSHROOMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ANKYLOMON_2] = {
        .species = SPECIES_ANKYLOMON,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ANGELAMON_2] = {
        .species = SPECIES_ANGELAMON,
        .moves = {MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLACKGATOMON_UVER_2] = {
        .species = SPECIES_BLACKGATOMON_UVER,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BETAMON_2] = {
        .species = SPECIES_BETAMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PAOMON_2] = {
        .species = SPECIES_PAOMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_GLARE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHAPMON_2] = {
        .species = SPECIES_CHAPMON,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_ROAR, MOVE_FAKE_OUT},
        .heldItem = ITEM_SILK_SCARF,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BLACKAGUMON_2] = {
        .species = SPECIES_BLACKAGUMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DONSHOUTMON_2] = {
        .species = SPECIES_DONSHOUTMON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_AXEMON_2] = {
        .species = SPECIES_AXEMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DECKERDRAMON_2] = {
        .species = SPECIES_DECKERDRAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_CALM_MIND},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DELTAMON_2] = {
        .species = SPECIES_DELTAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COSMIC_POWER, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GIZAMON_2] = {
        .species = SPECIES_GIZAMON,
        .moves = {MOVE_PSYCHIC, MOVE_FEINT_ATTACK, MOVE_AERIAL_ACE, MOVE_REFLECT},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_POYOMON_2] = {
        .species = SPECIES_POYOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUSH_CLAW, MOVE_SANDSTORM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOSAMON_2] = {
        .species = SPECIES_BOSAMON,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BEARMON_2] = {
        .species = SPECIES_BEARMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_BLACKGABUMON_2] = {
        .species = SPECIES_BLACKGABUMON,
        .moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KODOKUGUMON_2] = {
        .species = SPECIES_KODOKUGUMON,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PALMON_X_2] = {
        .species = SPECIES_PALMON_X,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_YURAMON_2] = {
        .species = SPECIES_YURAMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DORIMON_2] = {
        .species = SPECIES_DORIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_TOMB, MOVE_OVERHEAT, MOVE_BULK_UP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AGUMON_X_2] = {
        .species = SPECIES_AGUMON_X,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ANGORAMON_2] = {
        .species = SPECIES_ANGORAMON,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_MACH_PUNCH, MOVE_DETECT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUCEMON_2] = {
        .species = SPECIES_LUCEMON,
        .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMON_X_2] = {
        .species = SPECIES_SALAMON_X,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SEISMIC_TOSS, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DORULUMON_2] = {
        .species = SPECIES_DORULUMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BALLISTAMON_2] = {
        .species = SPECIES_BALLISTAMON,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DARKTYRANNOMON_X_2] = {
        .species = SPECIES_DARKTYRANNOMON_X,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DARKTYRANNOMON_2] = {
        .species = SPECIES_DARKTYRANNOMON,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CITRAMON_2] = {
        .species = SPECIES_CITRAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_BODY_SLAM, MOVE_SCARY_FACE},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CENTARUMON_2] = {
        .species = SPECIES_CENTARUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELEPHANTMON_2] = {
        .species = SPECIES_ELEPHANTMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_BODY_SLAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PICKMON_RED_2] = {
        .species = SPECIES_PICKMON_RED,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PETITMAMON_2] = {
        .species = SPECIES_PETITMAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ROKUSHO_2] = {
        .species = SPECIES_ROKUSHO,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_EXERMON_2] = {
        .species = SPECIES_EXERMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BURGERMON_CHAMPION_2] = {
        .species = SPECIES_BURGERMON_CHAMPION,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEVIMON_2] = {
        .species = SPECIES_DEVIMON,
        .moves = {MOVE_GUILLOTINE, MOVE_FRUSTRATION, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LEAFMON_2] = {
        .species = SPECIES_LEAFMON,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COELAMON_2] = {
        .species = SPECIES_COELAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOCKMON_2] = {
        .species = SPECIES_CLOCKMON,
        .moves = {MOVE_OVERHEAT, MOVE_BODY_SLAM, MOVE_SMOKESCREEN, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WANYAMON_2] = {
        .species = SPECIES_WANYAMON,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TRAILMON_DARK_2] = {
        .species = SPECIES_TRAILMON_DARK,
        .moves = {MOVE_MEGA_KICK, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_SANDSTORM},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_IMPMON_X_2] = {
        .species = SPECIES_IMPMON_X,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ATTRACT, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PAWNCHESSMON_WHITE_2] = {
        .species = SPECIES_PAWNCHESSMON_WHITE,
        .moves = {MOVE_OCTAZOOKA, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_MUD_SLAP},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_FLAMEDRAMON_2] = {
        .species = SPECIES_FLAMEDRAMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FLAMEWIZARDMON_2] = {
        .species = SPECIES_FLAMEWIZARDMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_BODY_SLAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FLARERIZAMON_2] = {
        .species = SPECIES_FLARERIZAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_DORUMON_2] = {
        .species = SPECIES_DORUMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DOTFALCOMON_2] = {
        .species = SPECIES_DOTFALCOMON,
        .moves = {MOVE_SLASH, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HIYARIMON_2] = {
        .species = SPECIES_HIYARIMON,
        .moves = {MOVE_BRICK_BREAK, MOVE_HYPNOSIS, MOVE_REST, MOVE_BELLY_DRUM},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BURGERMON_2] = {
        .species = SPECIES_BURGERMON,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHUUCHUUMON_2] = {
        .species = SPECIES_CHUUCHUUMON,
        .moves = {MOVE_GUILLOTINE, MOVE_SWORDS_DANCE, MOVE_FLAIL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KAMEMON_2] = {
        .species = SPECIES_KAMEMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_MUD_SLAP, MOVE_SWAGGER},
        .heldItem = ITEM_LAX_INCENSE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOKOMON_2] = {
        .species = SPECIES_TOKOMON,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BUKAMON_1] = {
        .species = SPECIES_BUKAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .heldItem = ITEM_SOFT_SAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLIMPMON_1] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_PSYCHIC, MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LOOGAMON_1] = {
        .species = SPECIES_LOOGAMON,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PABUMON_1] = {
        .species = SPECIES_PABUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_MUD_SLAP},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MONITAMON_1] = {
        .species = SPECIES_MONITAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SMELLING_SALTS, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUSHIAGUMON_1] = {
        .species = SPECIES_BUSHIAGUMON,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EBIDRAMON_1] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PUROROMON_1] = {
        .species = SPECIES_PUROROMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BULUCOMON_1] = {
        .species = SPECIES_BULUCOMON,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_FAKE_OUT, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_GUILMON_1] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ATAMADEKACHIMON_1] = {
        .species = SPECIES_ATAMADEKACHIMON,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_HEADBUTT, MOVE_COUNTER},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LUNAMON_1] = {
        .species = SPECIES_LUNAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_LIGHT_SCREEN, MOVE_SPIKES},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEPUTYMON_1] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERISSMON_1] = {
        .species = SPECIES_HERISSMON,
        .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SHADE, MOVE_WISH, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHARP_BEAK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_PHASCOMON_1] = {
        .species = SPECIES_PHASCOMON,
        .moves = {MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_COUNTER, MOVE_AGILITY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGUMON_EXPERT_1] = {
        .species = SPECIES_AGUMON_EXPERT,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KUDAMON_06_1] = {
        .species = SPECIES_KUDAMON_06,
        .moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_MUD_SLAP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PYONMON_1] = {
        .species = SPECIES_PYONMON,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_FOLLOW_ME},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BIOQUETZALMON_1] = {
        .species = SPECIES_BIOQUETZALMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PICHIMON_1] = {
        .species = SPECIES_PICHIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PUYOYOMON_1] = {
        .species = SPECIES_PUYOYOMON,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_FAKE_OUT},
        .heldItem = ITEM_NEVER_MELT_ICE,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BOMBERNANIMON_1] = {
        .species = SPECIES_BOMBERNANIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_IT_1] = {
        .species = SPECIES_ARCADIAMON_IT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KYUPIMON_1] = {
        .species = SPECIES_KYUPIMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_YAAMON_1] = {
        .species = SPECIES_YAAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_PROTECT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_TRAILMON_BATTLE_ARMAMENT_1] = {
        .species = SPECIES_TRAILMON_BATTLE_ARMAMENT,
        .moves = {MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALLOMON_1] = {
        .species = SPECIES_ALLOMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_QUICK_ATTACK, MOVE_FAKE_OUT},
        .heldItem = ITEM_MIRACLE_SEED,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_EYESMON_1] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_HAIL, MOVE_PROTECT},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGUNIMON_1] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_UPAMON_1] = {
        .species = SPECIES_UPAMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MOTIMON_1] = {
        .species = SPECIES_MOTIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BAKOMON_1] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KAPURIMON_1] = {
        .species = SPECIES_KAPURIMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMADILLOMON_1] = {
        .species = SPECIES_ARMADILLOMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BETAMON_X_1] = {
        .species = SPECIES_BETAMON_X,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CANDLEMON_1] = {
        .species = SPECIES_CANDLEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHUUMON_1] = {
        .species = SPECIES_CHUUMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_THRASH, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PICKMON_SILVER_1] = {
        .species = SPECIES_PICKMON_SILVER,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_HEADBUTT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_LIOLLMON_1] = {
        .species = SPECIES_LIOLLMON,
        .moves = {MOVE_PSYCHIC, MOVE_BRICK_BREAK, MOVE_AMNESIA, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SHAMANMON_1] = {
        .species = SPECIES_SHAMANMON,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DARKMAILDRAMON_1] = {
        .species = SPECIES_DARKMAILDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_REFRESH, MOVE_BODY_SLAM},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PURURUMON_1] = {
        .species = SPECIES_PURURUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUWAMON_1] = {
        .species = SPECIES_PUWAMON,
        .moves = {MOVE_HORN_DRILL, MOVE_DOUBLE_KICK, MOVE_BODY_SLAM, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHIKURIMON_1] = {
        .species = SPECIES_CHIKURIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_BRICK_BREAK, MOVE_BARRIER},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DINOHYUMON_1] = {
        .species = SPECIES_DINOHYUMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_DOBERMON_X_1] = {
        .species = SPECIES_DOBERMON_X,
        .moves = {MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER, MOVE_PROTECT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEMIMERAMON_1] = {
        .species = SPECIES_DEMIMERAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_BRICK_BREAK, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_NYAROMON_1] = {
        .species = SPECIES_NYAROMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_CHARCOAL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SUNMON_1] = {
        .species = SPECIES_SUNMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_SCREECH, MOVE_MINIMIZE},
        .heldItem = ITEM_POISON_BARB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TSUMEMON_1] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_IMPMON_1] = {
        .species = SPECIES_IMPMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_ATTRACT},
        .heldItem = ITEM_MAGNET,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MONODRAMON_1] = {
        .species = SPECIES_MONODRAMON,
        .moves = {MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUCHOMON_1] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OTAMAMON_1] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_CRUNCH, MOVE_AERIAL_ACE, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_POMUMON_1] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_WILL_O_WISP},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RENAMON_1] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIATRYMON_1] = {
        .species = SPECIES_DIATRYMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHAMELEMON_1] = {
        .species = SPECIES_CHAMELEMON,
        .moves = {MOVE_SURF, MOVE_ICY_WIND, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SAKUMON_1] = {
        .species = SPECIES_SAKUMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_RAWST_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KOZENIMON_1] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_SCARY_FACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MORPHOMON_1] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_MINIDEKACHIMON_1] = {
        .species = SPECIES_MINIDEKACHIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB, MOVE_ROAR},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISSIMON_1] = {
        .species = SPECIES_MISSIMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_BARRIER, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PERSIM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DRACMON_1] = {
        .species = SPECIES_DRACMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RENAMON_X_1] = {
        .species = SPECIES_RENAMON_X,
        .moves = {MOVE_TRI_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_1] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MAGICAL_LEAF, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AGUMON_1] = {
        .species = SPECIES_AGUMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BOKOMON_1] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DAMEMON_FUSION_1] = {
        .species = SPECIES_DAMEMON_FUSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEEL_WING, MOVE_FEINT_ATTACK, MOVE_FACADE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BOMMON_1] = {
        .species = SPECIES_BOMMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_CUTEMON_1] = {
        .species = SPECIES_CUTEMON,
        .moves = {MOVE_SURF, MOVE_ROAR, MOVE_BITE, MOVE_QUICK_ATTACK},
        .heldItem = ITEM_MYSTIC_WATER,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DAMEMON_1] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_PROTECT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEMIDEVIMON_1] = {
        .species = SPECIES_DEMIDEVIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_SAND_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAMEMON_1] = {
        .species = SPECIES_FLAMEMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KUNEMON_1] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_PSYCHIC, MOVE_CHARM, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LABRAMON_1] = {
        .species = SPECIES_LABRAMON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURIMON_1] = {
        .species = SPECIES_CURIMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_SEISMIC_TOSS},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GAOSSMON_1] = {
        .species = SPECIES_GAOSSMON,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BLACKGROWLMON_1] = {
        .species = SPECIES_BLACKGROWLMON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTOMON_1] = {
        .species = SPECIES_TENTOMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FILMON_1] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_YAWN, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SYAKOMON_1] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_AERIAL_ACE, MOVE_DETECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIBOMON_1] = {
        .species = SPECIES_CHIBOMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_ROAR, MOVE_SCARY_FACE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GABUMON_X_1] = {
        .species = SPECIES_GABUMON_X,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SMOKESCREEN, MOVE_ROAR},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CORONAMON_1] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOTSUMON_1] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_ASTONISH, MOVE_SCREECH},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TERRIERMON_X_1] = {
        .species = SPECIES_TERRIERMON_X,
        .moves = {MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_REST, MOVE_CURSE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_COMMANDRAMON_1] = {
        .species = SPECIES_COMMANDRAMON,
        .moves = {MOVE_RETURN, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRACOMON_1] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_FACADE, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PSYCHEMON_1] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_ICY_WIND, MOVE_ATTRACT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHOUTMON_1] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_SOFT_BOILED},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DOKUGUMON_1] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICY_WIND, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIGIMON_1] = {
        .species = SPECIES_GIGIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROGMON_1] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GAOGAMON_1] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BABOONGAMON_1] = {
        .species = SPECIES_BABOONGAMON,
        .moves = {MOVE_YAWN, MOVE_BULK_UP, MOVE_SWAGGER, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUKAMON_2] = {
        .species = SPECIES_BUKAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_TRI_ATTACK},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLIMPMON_2] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_PSYCHIC, MOVE_FAKE_OUT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGUMON_EXPERT_2] = {
        .species = SPECIES_AGUMON_EXPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KUDAMON_06_2] = {
        .species = SPECIES_KUDAMON_06,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_YAWN, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LOOGAMON_2] = {
        .species = SPECIES_LOOGAMON,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PABUMON_2] = {
        .species = SPECIES_PABUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_PURSUIT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MONITAMON_2] = {
        .species = SPECIES_MONITAMON,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_BUSHIAGUMON_2] = {
        .species = SPECIES_BUSHIAGUMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EBIDRAMON_2] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PUROROMON_2] = {
        .species = SPECIES_PUROROMON,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_FEINT_ATTACK, MOVE_PROTECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BULUCOMON_2] = {
        .species = SPECIES_BULUCOMON,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GUILMON_2] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ATAMADEKACHIMON_2] = {
        .species = SPECIES_ATAMADEKACHIMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LUNAMON_2] = {
        .species = SPECIES_LUNAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_COUNTER, MOVE_PROTECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PHASCOMON_2] = {
        .species = SPECIES_PHASCOMON,
        .moves = {MOVE_SPIKES, MOVE_ROAR, MOVE_DRILL_PECK, MOVE_TOXIC},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DEPUTYMON_2] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_HERISSMON_2] = {
        .species = SPECIES_HERISSMON,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_PYONMON_2] = {
        .species = SPECIES_PYONMON,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_DOUBLE_TEAM, MOVE_FOLLOW_ME},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BIOQUETZALMON_2] = {
        .species = SPECIES_BIOQUETZALMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PICHIMON_2] = {
        .species = SPECIES_PICHIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUYOYOMON_2] = {
        .species = SPECIES_PUYOYOMON,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_DISABLE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BOMBERNANIMON_2] = {
        .species = SPECIES_BOMBERNANIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_IT_2] = {
        .species = SPECIES_ARCADIAMON_IT,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KYUPIMON_2] = {
        .species = SPECIES_KYUPIMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_YAAMON_2] = {
        .species = SPECIES_YAAMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SWAGGER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TRAILMON_BATTLE_ARMAMENT_2] = {
        .species = SPECIES_TRAILMON_BATTLE_ARMAMENT,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ALLOMON_2] = {
        .species = SPECIES_ALLOMON,
        .moves = {MOVE_LEECH_SEED, MOVE_DIG, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EYESMON_2] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_BODY_SLAM, MOVE_ICY_WIND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AGUNIMON_2] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_UPAMON_2] = {
        .species = SPECIES_UPAMON,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .heldItem = ITEM_TWISTED_SPOON,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOTIMON_2] = {
        .species = SPECIES_MOTIMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BAKOMON_2] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KAPURIMON_2] = {
        .species = SPECIES_KAPURIMON,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMADILLOMON_2] = {
        .species = SPECIES_ARMADILLOMON,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_FACADE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BETAMON_X_2] = {
        .species = SPECIES_BETAMON_X,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CANDLEMON_2] = {
        .species = SPECIES_CANDLEMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ATTRACT, MOVE_FOCUS_PUNCH},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHUUMON_2] = {
        .species = SPECIES_CHUUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PICKMON_SILVER_2] = {
        .species = SPECIES_PICKMON_SILVER,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_YAWN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LIOLLMON_2] = {
        .species = SPECIES_LIOLLMON,
        .moves = {MOVE_YAWN, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHAMANMON_2] = {
        .species = SPECIES_SHAMANMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DARKMAILDRAMON_2] = {
        .species = SPECIES_DARKMAILDRAMON,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PURSUIT, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PURURUMON_2] = {
        .species = SPECIES_PURURUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUWAMON_2] = {
        .species = SPECIES_PUWAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHIKURIMON_2] = {
        .species = SPECIES_CHIKURIMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SMOKESCREEN, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DINOHYUMON_2] = {
        .species = SPECIES_DINOHYUMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_SITRUS_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DOBERMON_X_2] = {
        .species = SPECIES_DOBERMON_X,
        .moves = {MOVE_IRON_TAIL, MOVE_ANCIENT_POWER, MOVE_BRICK_BREAK, MOVE_KNOCK_OFF},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEMIMERAMON_2] = {
        .species = SPECIES_DEMIMERAMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_NYAROMON_2] = {
        .species = SPECIES_NYAROMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUNMON_2] = {
        .species = SPECIES_SUNMON,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_DYNAMIC_PUNCH},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TSUMEMON_2] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_IMPMON_2] = {
        .species = SPECIES_IMPMON,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MONODRAMON_2] = {
        .species = SPECIES_MONODRAMON,
        .moves = {MOVE_SILVER_WIND, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MUCHOMON_2] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ATTRACT, MOVE_BULK_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OTAMAMON_2] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POMUMON_2] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RENAMON_2] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DIATRYMON_2] = {
        .species = SPECIES_DIATRYMON,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CHAMELEMON_2] = {
        .species = SPECIES_CHAMELEMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SAKUMON_2] = {
        .species = SPECIES_SAKUMON,
        .moves = {MOVE_HEAT_WAVE, MOVE_BODY_SLAM, MOVE_GRUDGE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KOZENIMON_2] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MORPHOMON_2] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_FLASH, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MINIDEKACHIMON_2] = {
        .species = SPECIES_MINIDEKACHIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_BLOCK},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MISSIMON_2] = {
        .species = SPECIES_MISSIMON,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SURF},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DRACMON_2] = {
        .species = SPECIES_DRACMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ANCIENT_POWER},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RENAMON_X_2] = {
        .species = SPECIES_RENAMON_X,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_2] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGUMON_2] = {
        .species = SPECIES_AGUMON,
        .moves = {MOVE_RETURN, MOVE_CURSE, MOVE_SLEEP_POWDER, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BOKOMON_2] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DAMEMON_FUSION_2] = {
        .species = SPECIES_DAMEMON_FUSION,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BOMMON_2] = {
        .species = SPECIES_BOMMON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CUTEMON_2] = {
        .species = SPECIES_CUTEMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DAMEMON_2] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_DEMIDEVIMON_2] = {
        .species = SPECIES_DEMIDEVIMON,
        .moves = {MOVE_CURSE, MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FLAMEMON_2] = {
        .species = SPECIES_FLAMEMON,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_GRASS_WHISTLE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_KUNEMON_2] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_LABRAMON_2] = {
        .species = SPECIES_LABRAMON,
        .moves = {MOVE_CURSE, MOVE_SCREECH, MOVE_DOUBLE_TEAM, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CURIMON_2] = {
        .species = SPECIES_CURIMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GAOSSMON_2] = {
        .species = SPECIES_GAOSSMON,
        .moves = {MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_BRICK_BREAK, MOVE_SCARY_FACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_BLACKGROWLMON_2] = {
        .species = SPECIES_BLACKGROWLMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTOMON_2] = {
        .species = SPECIES_TENTOMON,
        .moves = {MOVE_BLAZE_KICK, MOVE_MEGA_KICK, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FILMON_2] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SYAKOMON_2] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIBOMON_2] = {
        .species = SPECIES_CHIBOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE, MOVE_SMOKESCREEN},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GABUMON_X_2] = {
        .species = SPECIES_GABUMON_X,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CORONAMON_2] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_ROAR},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GOTSUMON_2] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TERRIERMON_X_2] = {
        .species = SPECIES_TERRIERMON_X,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_COMMANDRAMON_2] = {
        .species = SPECIES_COMMANDRAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACOMON_2] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PSYCHEMON_2] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHOUTMON_2] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_SING, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DOKUGUMON_2] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SAFEGUARD, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIGIMON_2] = {
        .species = SPECIES_GIGIMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FROGMON_2] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GAOGAMON_2] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_PSYCH_UP, MOVE_SWAGGER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BABOONGAMON_2] = {
        .species = SPECIES_BABOONGAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUKAMON_3] = {
        .species = SPECIES_BUKAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLIMPMON_3] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LOOGAMON_3] = {
        .species = SPECIES_LOOGAMON,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_PABUMON_3] = {
        .species = SPECIES_PABUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MONITAMON_3] = {
        .species = SPECIES_MONITAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUSHIAGUMON_3] = {
        .species = SPECIES_BUSHIAGUMON,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ATTRACT, MOVE_SUBSTITUTE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_EBIDRAMON_3] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUROROMON_3] = {
        .species = SPECIES_PUROROMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_FEINT_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BULUCOMON_3] = {
        .species = SPECIES_BULUCOMON,
        .moves = {MOVE_TRICK, MOVE_TORMENT, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GUILMON_3] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_RAIN_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ATAMADEKACHIMON_3] = {
        .species = SPECIES_ATAMADEKACHIMON,
        .moves = {MOVE_IRON_TAIL, MOVE_FOCUS_PUNCH, MOVE_ATTRACT, MOVE_SPORE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNAMON_3] = {
        .species = SPECIES_LUNAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ZAP_CANNON},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_DEPUTYMON_3] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_HERISSMON_3] = {
        .species = SPECIES_HERISSMON,
        .moves = {MOVE_DRILL_PECK, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_STEEL_WING},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PHASCOMON_3] = {
        .species = SPECIES_PHASCOMON,
        .moves = {MOVE_TOXIC, MOVE_CURSE, MOVE_REST, MOVE_FLY},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_AGUMON_EXPERT_3] = {
        .species = SPECIES_AGUMON_EXPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KUDAMON_06_3] = {
        .species = SPECIES_KUDAMON_06,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PYONMON_3] = {
        .species = SPECIES_PYONMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MAGICAL_LEAF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BIOQUETZALMON_3] = {
        .species = SPECIES_BIOQUETZALMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FACADE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PICHIMON_3] = {
        .species = SPECIES_PICHIMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_IRON_TAIL, MOVE_ATTRACT},
        .heldItem = ITEM_CHERI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PUYOYOMON_3] = {
        .species = SPECIES_PUYOYOMON,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BOMBERNANIMON_3] = {
        .species = SPECIES_BOMBERNANIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ARCADIAMON_IT_3] = {
        .species = SPECIES_ARCADIAMON_IT,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KYUPIMON_3] = {
        .species = SPECIES_KYUPIMON,
        .moves = {MOVE_STUN_SPORE, MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_YAAMON_3] = {
        .species = SPECIES_YAAMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .heldItem = ITEM_LIECHI_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_TRAILMON_BATTLE_ARMAMENT_3] = {
        .species = SPECIES_TRAILMON_BATTLE_ARMAMENT,
        .moves = {MOVE_OVERHEAT, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_EXTRASENSORY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ALLOMON_3] = {
        .species = SPECIES_ALLOMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_SYNTHESIS},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_EYESMON_3] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGUNIMON_3] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_UPAMON_3] = {
        .species = SPECIES_UPAMON,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_MEGA_KICK, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MOTIMON_3] = {
        .species = SPECIES_MOTIMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BAKOMON_3] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_MEGAHORN, MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KAPURIMON_3] = {
        .species = SPECIES_KAPURIMON,
        .moves = {MOVE_TRICK, MOVE_DISABLE, MOVE_PSYCHIC, MOVE_SKILL_SWAP},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMADILLOMON_3] = {
        .species = SPECIES_ARMADILLOMON,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_BETAMON_X_3] = {
        .species = SPECIES_BETAMON_X,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CANDLEMON_3] = {
        .species = SPECIES_CANDLEMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHUUMON_3] = {
        .species = SPECIES_CHUUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PICKMON_SILVER_3] = {
        .species = SPECIES_PICKMON_SILVER,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_LIOLLMON_3] = {
        .species = SPECIES_LIOLLMON,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SHAMANMON_3] = {
        .species = SPECIES_SHAMANMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DARKMAILDRAMON_3] = {
        .species = SPECIES_DARKMAILDRAMON,
        .moves = {MOVE_SING, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PURURUMON_3] = {
        .species = SPECIES_PURURUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PUWAMON_3] = {
        .species = SPECIES_PUWAMON,
        .moves = {MOVE_HORN_DRILL, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIKURIMON_3] = {
        .species = SPECIES_CHIKURIMON,
        .moves = {MOVE_MEGA_KICK, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DINOHYUMON_3] = {
        .species = SPECIES_DINOHYUMON,
        .moves = {MOVE_SUBSTITUTE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DOBERMON_X_3] = {
        .species = SPECIES_DOBERMON_X,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEMIMERAMON_3] = {
        .species = SPECIES_DEMIMERAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NYAROMON_3] = {
        .species = SPECIES_NYAROMON,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUNMON_3] = {
        .species = SPECIES_SUNMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_TSUMEMON_3] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SKILL_SWAP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IMPMON_3] = {
        .species = SPECIES_IMPMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_IRON_TAIL, MOVE_BRICK_BREAK},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MONODRAMON_3] = {
        .species = SPECIES_MONODRAMON,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SLASH},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUCHOMON_3] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OTAMAMON_3] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 170, 170, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POMUMON_3] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RENAMON_3] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SECRET_POWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIATRYMON_3] = {
        .species = SPECIES_DIATRYMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHAMELEMON_3] = {
        .species = SPECIES_CHAMELEMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SAKUMON_3] = {
        .species = SPECIES_SAKUMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KOZENIMON_3] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MORPHOMON_3] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MINIDEKACHIMON_3] = {
        .species = SPECIES_MINIDEKACHIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISSIMON_3] = {
        .species = SPECIES_MISSIMON,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 170, 170, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACMON_3] = {
        .species = SPECIES_DRACMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_RENAMON_X_3] = {
        .species = SPECIES_RENAMON_X,
        .moves = {MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_3] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_MAGICAL_LEAF},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGUMON_3] = {
        .species = SPECIES_AGUMON,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_EXPLOSION},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BOKOMON_3] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DAMEMON_FUSION_3] = {
        .species = SPECIES_DAMEMON_FUSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BOMMON_3] = {
        .species = SPECIES_BOMMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CUTEMON_3] = {
        .species = SPECIES_CUTEMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_BATON_PASS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DAMEMON_3] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DEMIDEVIMON_3] = {
        .species = SPECIES_DEMIDEVIMON,
        .moves = {MOVE_SHADOW_BALL, MOVE_FLAIL, MOVE_ENDURE, MOVE_OVERHEAT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_FLAMEMON_3] = {
        .species = SPECIES_FLAMEMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_KUNEMON_3] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_WISH, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LABRAMON_3] = {
        .species = SPECIES_LABRAMON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ATTRACT, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURIMON_3] = {
        .species = SPECIES_CURIMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAOSSMON_3] = {
        .species = SPECIES_GAOSSMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BLACKGROWLMON_3] = {
        .species = SPECIES_BLACKGROWLMON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TENTOMON_3] = {
        .species = SPECIES_TENTOMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FILMON_3] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_SURF, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SYAKOMON_3] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHIBOMON_3] = {
        .species = SPECIES_CHIBOMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_BITE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GABUMON_X_3] = {
        .species = SPECIES_GABUMON_X,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CORONAMON_3] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GOTSUMON_3] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_AIR_CUTTER, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_SCREECH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TERRIERMON_X_3] = {
        .species = SPECIES_TERRIERMON_X,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_COMMANDRAMON_3] = {
        .species = SPECIES_COMMANDRAMON,
        .moves = {MOVE_SURF, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DRACOMON_3] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PSYCHEMON_3] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHOUTMON_3] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DOKUGUMON_3] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_ATTRACT, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GIGIMON_3] = {
        .species = SPECIES_GIGIMON,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_AERIAL_ACE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FROGMON_3] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GAOGAMON_3] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BABOONGAMON_3] = {
        .species = SPECIES_BABOONGAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BUKAMON_4] = {
        .species = SPECIES_BUKAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FISSURE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLIMPMON_4] = {
        .species = SPECIES_BLIMPMON,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LOOGAMON_4] = {
        .species = SPECIES_LOOGAMON,
        .moves = {MOVE_DESTINY_BOND, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PABUMON_4] = {
        .species = SPECIES_PABUMON,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SKY_ATTACK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MONITAMON_4] = {
        .species = SPECIES_MONITAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_BUSHIAGUMON_4] = {
        .species = SPECIES_BUSHIAGUMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_FAKE_TEARS},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EBIDRAMON_4] = {
        .species = SPECIES_EBIDRAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUROROMON_4] = {
        .species = SPECIES_PUROROMON,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_FACADE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BULUCOMON_4] = {
        .species = SPECIES_BULUCOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GUILMON_4] = {
        .species = SPECIES_GUILMON,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ATAMADEKACHIMON_4] = {
        .species = SPECIES_ATAMADEKACHIMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SLUDGE_BOMB, MOVE_SPORE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNAMON_4] = {
        .species = SPECIES_LUNAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEPUTYMON_4] = {
        .species = SPECIES_DEPUTYMON,
        .moves = {MOVE_FISSURE, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HERISSMON_4] = {
        .species = SPECIES_HERISSMON,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_PETAYA_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PHASCOMON_4] = {
        .species = SPECIES_PHASCOMON,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AGUMON_EXPERT_4] = {
        .species = SPECIES_AGUMON_EXPERT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_MEGA_KICK},
        .heldItem = ITEM_THICK_CLUB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KUDAMON_06_4] = {
        .species = SPECIES_KUDAMON_06,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_AMNESIA},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PYONMON_4] = {
        .species = SPECIES_PYONMON,
        .moves = {MOVE_MEGA_KICK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BIOQUETZALMON_4] = {
        .species = SPECIES_BIOQUETZALMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FAKE_OUT},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PICHIMON_4] = {
        .species = SPECIES_PICHIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_PROTECT, MOVE_MEGA_KICK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PUYOYOMON_4] = {
        .species = SPECIES_PUYOYOMON,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_BOMBERNANIMON_4] = {
        .species = SPECIES_BOMBERNANIMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_IT_4] = {
        .species = SPECIES_ARCADIAMON_IT,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KYUPIMON_4] = {
        .species = SPECIES_KYUPIMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_YAAMON_4] = {
        .species = SPECIES_YAAMON,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_TRAILMON_BATTLE_ARMAMENT_4] = {
        .species = SPECIES_TRAILMON_BATTLE_ARMAMENT,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_OVERHEAT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_ALLOMON_4] = {
        .species = SPECIES_ALLOMON,
        .moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_MEGA_KICK, MOVE_FAKE_OUT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_EYESMON_4] = {
        .species = SPECIES_EYESMON,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGUNIMON_4] = {
        .species = SPECIES_AGUNIMON,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_UPAMON_4] = {
        .species = SPECIES_UPAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOTIMON_4] = {
        .species = SPECIES_MOTIMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BAKOMON_4] = {
        .species = SPECIES_BAKOMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HORN_DRILL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KAPURIMON_4] = {
        .species = SPECIES_KAPURIMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARMADILLOMON_4] = {
        .species = SPECIES_ARMADILLOMON,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FRUSTRATION, MOVE_SHADOW_BALL},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BETAMON_X_4] = {
        .species = SPECIES_BETAMON_X,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CANDLEMON_4] = {
        .species = SPECIES_CANDLEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_MEGA_KICK, MOVE_CROSS_CHOP},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHUUMON_4] = {
        .species = SPECIES_CHUUMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PICKMON_SILVER_4] = {
        .species = SPECIES_PICKMON_SILVER,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_LIOLLMON_4] = {
        .species = SPECIES_LIOLLMON,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHAMANMON_4] = {
        .species = SPECIES_SHAMANMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DARKMAILDRAMON_4] = {
        .species = SPECIES_DARKMAILDRAMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PURURUMON_4] = {
        .species = SPECIES_PURURUMON,
        .moves = {MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PUWAMON_4] = {
        .species = SPECIES_PUWAMON,
        .moves = {MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CHIKURIMON_4] = {
        .species = SPECIES_CHIKURIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DINOHYUMON_4] = {
        .species = SPECIES_DINOHYUMON,
        .moves = {MOVE_TOXIC, MOVE_INGRAIN, MOVE_MIRROR_COAT, MOVE_GIGA_DRAIN},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DOBERMON_X_4] = {
        .species = SPECIES_DOBERMON_X,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DEMIMERAMON_4] = {
        .species = SPECIES_DEMIMERAMON,
        .moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_ICE_BEAM, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NYAROMON_4] = {
        .species = SPECIES_NYAROMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_DOUBLE_KICK},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SUNMON_4] = {
        .species = SPECIES_SUNMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_TSUMEMON_4] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IMPMON_4] = {
        .species = SPECIES_IMPMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MONODRAMON_4] = {
        .species = SPECIES_MONODRAMON,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MUCHOMON_4] = {
        .species = SPECIES_MUCHOMON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_REVERSAL, MOVE_ENDURE},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OTAMAMON_4] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POMUMON_4] = {
        .species = SPECIES_POMUMON,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RENAMON_4] = {
        .species = SPECIES_RENAMON,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DIATRYMON_4] = {
        .species = SPECIES_DIATRYMON,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CHAMELEMON_4] = {
        .species = SPECIES_CHAMELEMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_FISSURE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SAKUMON_4] = {
        .species = SPECIES_SAKUMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KOZENIMON_4] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MORPHOMON_4] = {
        .species = SPECIES_MORPHOMON,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MINIDEKACHIMON_4] = {
        .species = SPECIES_MINIDEKACHIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISSIMON_4] = {
        .species = SPECIES_MISSIMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 170, 0),
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_DRACMON_4] = {
        .species = SPECIES_DRACMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BITE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_RENAMON_X_4] = {
        .species = SPECIES_RENAMON_X,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_4] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGUMON_4] = {
        .species = SPECIES_AGUMON,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BOKOMON_4] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DAMEMON_FUSION_4] = {
        .species = SPECIES_DAMEMON_FUSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_DOUBLE_EDGE, MOVE_CRUNCH},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BOMMON_4] = {
        .species = SPECIES_BOMMON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 0, 170, 170),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CUTEMON_4] = {
        .species = SPECIES_CUTEMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 0, 0, 170, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DAMEMON_4] = {
        .species = SPECIES_DAMEMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEMIDEVIMON_4] = {
        .species = SPECIES_DEMIDEVIMON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_FLAMEMON_4] = {
        .species = SPECIES_FLAMEMON,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_KUNEMON_4] = {
        .species = SPECIES_KUNEMON,
        .moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_ATTRACT, MOVE_CALM_MIND},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LABRAMON_4] = {
        .species = SPECIES_LABRAMON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CURIMON_4] = {
        .species = SPECIES_CURIMON,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GAOSSMON_4] = {
        .species = SPECIES_GAOSSMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BLACKGROWLMON_4] = {
        .species = SPECIES_BLACKGROWLMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTOMON_4] = {
        .species = SPECIES_TENTOMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FILMON_4] = {
        .species = SPECIES_FILMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SHEER_COLD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SYAKOMON_4] = {
        .species = SPECIES_SYAKOMON,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIBOMON_4] = {
        .species = SPECIES_CHIBOMON,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GABUMON_X_4] = {
        .species = SPECIES_GABUMON_X,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CORONAMON_4] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOTSUMON_4] = {
        .species = SPECIES_GOTSUMON,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TERRIERMON_X_4] = {
        .species = SPECIES_TERRIERMON_X,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_COMMANDRAMON_4] = {
        .species = SPECIES_COMMANDRAMON,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOMON_4] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PSYCHEMON_4] = {
        .species = SPECIES_PSYCHEMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SHOUTMON_4] = {
        .species = SPECIES_SHOUTMON,
        .moves = {MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_DOKUGUMON_4] = {
        .species = SPECIES_DOKUGUMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 170, 0, 170, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GIGIMON_4] = {
        .species = SPECIES_GIGIMON,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FROGMON_4] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GAOGAMON_4] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_BABOONGAMON_4] = {
        .species = SPECIES_BABOONGAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_YAWN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACOMON_X_1] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EBIBURGAMON_1] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_1] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_AERIAL_ACE, MOVE_MUD_SLAP, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNOWAGUMON_1] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_06_1] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ICEGOBIMON_1] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARGOMON_1] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOYLEMON_1] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARURUMON_1] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_METAL_CLAW, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARURUMON_X_1] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GATOMON_1] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRACOMON_X_2] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_BLIZZARD, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_EBIBURGAMON_2] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_2] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SNOWAGUMON_2] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_06_2] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ICEGOBIMON_2] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GARGOMON_2] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOYLEMON_2] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GARURUMON_2] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GARURUMON_X_2] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GATOMON_2] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRACOMON_X_3] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_ICE_BEAM, MOVE_FACADE, MOVE_AERIAL_ACE, MOVE_PROTECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EBIBURGAMON_3] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_3] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_DOUBLE_TEAM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_3] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_ROAR},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_06_3] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_EDGE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ICEGOBIMON_3] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARGOMON_3] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOYLEMON_3] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GARURUMON_3] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_AMNESIA, MOVE_COUNTER, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARURUMON_X_3] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GATOMON_3] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRACOMON_X_4] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_REST, MOVE_REFLECT},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EBIBURGAMON_4] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_4] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_STEEL_WING, MOVE_SAFEGUARD},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SNOWAGUMON_4] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_REFLECT},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_06_4] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_DOUBLE_TEAM, MOVE_REFLECT},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ICEGOBIMON_4] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BITE, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARGOMON_4] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 0, 170),
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GARGOYLEMON_4] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_ICE_BEAM, MOVE_HAIL, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARURUMON_4] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_GARURUMON_X_4] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_MIST_BALL, MOVE_SHADOW_BALL, MOVE_CHARM, MOVE_REFLECT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GATOMON_4] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TSUMEMON_5] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TSUMEMON_6] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TSUMEMON_7] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TSUMEMON_8] = {
        .species = SPECIES_TSUMEMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OTAMAMON_5] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_CHOICE_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OTAMAMON_6] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_YAWN, MOVE_SWORDS_DANCE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OTAMAMON_7] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BULK_UP},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_OTAMAMON_8] = {
        .species = SPECIES_OTAMAMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 0, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KOZENIMON_5] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOZENIMON_6] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOZENIMON_7] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KOZENIMON_8] = {
        .species = SPECIES_KOZENIMON,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_5] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 170, 0, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_6] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_7] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_WILL_O_WISP, MOVE_DESTINY_BOND},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCADIAMON_CHAMPION_8] = {
        .species = SPECIES_ARCADIAMON_CHAMPION,
        .moves = {MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BOKOMON_5] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BOKOMON_6] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BOKOMON_7] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BOKOMON_8] = {
        .species = SPECIES_BOKOMON,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CORONAMON_5] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CORONAMON_6] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CORONAMON_7] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .heldItem = ITEM_LEPPA_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CORONAMON_8] = {
        .species = SPECIES_CORONAMON,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRACOMON_5] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOMON_6] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOMON_7] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOMON_8] = {
        .species = SPECIES_DRACOMON,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BELLY_DRUM, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROGMON_5] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FROGMON_6] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_HEADBUTT, MOVE_AERIAL_ACE, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_FROGMON_7] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FROGMON_8] = {
        .species = SPECIES_FROGMON,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_ATTRACT},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GAOGAMON_5] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GAOGAMON_6] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GAOGAMON_7] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GAOGAMON_8] = {
        .species = SPECIES_GAOGAMON,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(170, 170, 0, 170, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOMON_5] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOMON_6] = {
        .species = SPECIES_GARGOMON,
        .moves = {MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARGOYLEMON_5] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_COUNTER},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 170, 0),
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GARGOYLEMON_6] = {
        .species = SPECIES_GARGOYLEMON,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARURUMON_5] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARURUMON_6] = {
        .species = SPECIES_GARURUMON,
        .moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARURUMON_X_5] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARURUMON_X_6] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARURUMON_X_7] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARURUMON_X_8] = {
        .species = SPECIES_GARURUMON_X,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GATOMON_5] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE, MOVE_CALM_MIND, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GATOMON_6] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_LUSTER_PURGE, MOVE_SHADOW_BALL, MOVE_DRAGON_CLAW, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_GATOMON_7] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GATOMON_8] = {
        .species = SPECIES_GATOMON,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE},
        .heldItem = ITEM_KINGS_ROCK,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ESPIMON_1] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESPIMON_2] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESPIMON_3] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_ATTRACT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(0, 170, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESPIMON_4] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ESPIMON_5] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_OUTRAGE, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_ROAR},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ESPIMON_6] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPIMON_7] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPIMON_8] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_BRICK_BREAK},
        .heldItem = ITEM_SHELL_BELL,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPIMON_9] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ESPIMON_10] = {
        .species = SPECIES_ESPIMON,
        .moves = {MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SPADAMON_1] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_THUNDERBOLT, MOVE_SURF},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SPADAMON_2] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SPADAMON_3] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPADAMON_4] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SPADAMON_5] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPADAMON_6] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPADAMON_7] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_CURSE},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPADAMON_8] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE, MOVE_REST},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPADAMON_9] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ATTRACT},
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SPADAMON_10] = {
        .species = SPECIES_SPADAMON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRACOMON_X_5] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SWAGGER},
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRACOMON_X_6] = {
        .species = SPECIES_DRACOMON_X,
        .moves = {MOVE_ICE_BEAM, MOVE_AERIAL_ACE, MOVE_REFLECT, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EBIBURGAMON_5] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EBIBURGAMON_6] = {
        .species = SPECIES_EBIBURGAMON,
        .moves = {MOVE_THUNDER, MOVE_DRILL_PECK, MOVE_RAIN_DANCE, MOVE_DOUBLE_EDGE},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 170, 0, 170, 170, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_5] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_SWAGGER, MOVE_FACADE},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_EKAKIMON_6] = {
        .species = SPECIES_EKAKIMON,
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE, MOVE_STEEL_WING},
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNOWAGUMON_5] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ROAR, MOVE_REFLECT},
        .heldItem = ITEM_BRIGHT_POWDER,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_6] = {
        .species = SPECIES_SNOWAGUMON,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNOWAGUMON_06_5] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FIRE_BLAST, MOVE_DOUBLE_EDGE, MOVE_ENDURE, MOVE_REFLECT},
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SNOWAGUMON_06_6] = {
        .species = SPECIES_SNOWAGUMON_06,
        .moves = {MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_ROAR, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 0, 252),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ICEGOBIMON_5] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_ICY_WIND},
        .heldItem = ITEM_LUM_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ICEGOBIMON_6] = {
        .species = SPECIES_ICEGOBIMON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .heldItem = ITEM_CHESTO_BERRY,
        .ev = TRAINER_PARTY_EVS(170, 0, 170, 0, 0, 170),
        .nature = NATURE_MODEST
    }
};
