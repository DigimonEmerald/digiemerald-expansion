// Digivolution data structure
// Fields: HPReq, atkReq, defReq, spatkReq, spdefReq, speedReq, target species
struct Digivolution
{
    u8 HPReq;
    u8 atkReq;
    u8 defReq;
    u8 spatkReq;
    u8 spdefReq;
    u8 speedReq;
    u16 species;
};

// Sentinel value to mark the end of a digivolution table
#define DIGIVOLUTION_END {0, 0, 0, 0, 0, 0, SPECIES_NONE}

// NOTE: other files expect the symbol name `sBlastoiseDigivolveTable` (no "ution").
static const struct Digivolution sArgomon_fDigivolveTable[] = {
    {15, 5, 5, 7, 6, 7, SPECIES_ARGOMON_IT},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBombmonDigivolveTable[] = {
    {17, 7, 8, 6, 6, 6, SPECIES_MISSIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBommonDigivolveTable[] = {
    {16, 8, 7, 6, 6, 8, SPECIES_MISSIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBotamonDigivolveTable[] = {
    {20, 7, 7, 8, 7, 7, SPECIES_KOROMON},
    {20, 7, 8, 8, 8, 7, SPECIES_BUDMON},
    {20, 7, 7, 8, 7, 10, SPECIES_PINAMON},
    {20, 9, 7, 9, 7, 7, SPECIES_TOKOMON},
    {20, 7, 7, 10, 7, 7, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChibickmonDigivolveTable[] = {
    {15, 5, 5, 7, 5, 11, SPECIES_PICKMON_WHITE},
    {17, 6, 6, 8, 6, 13, SPECIES_PICKMON_RED},
    {19, 6, 6, 8, 6, 14, SPECIES_PICKMON_SILVER},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChibomonDigivolveTable[] = {
    {17, 7, 8, 8, 7, 7, SPECIES_DEMIVEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sConomonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_KOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCotsucomonDigivolveTable[] = {
    {17, 6, 9, 6, 7, 6, SPECIES_KAKKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCurimonDigivolveTable[] = {
    {19, 7, 7, 7, 7, 7, SPECIES_GURIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDatirimonDigivolveTable[] = {
    {21, 6, 8, 7, 5, 5, SPECIES_TANEMON},
    {21, 6, 9, 7, 5, 4, SPECIES_YOKOMON},
    {21, 6, 8, 7, 5, 6, SPECIES_CHAPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDodomonDigivolveTable[] = {
    {18, 8, 7, 9, 6, 6, SPECIES_DORIMON},
    {19, 9, 7, 9, 6, 6, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDokimonDigivolveTable[] = {
    {17, 6, 6, 8, 7, 11, SPECIES_BIBIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFufumonDigivolveTable[] = {
    {16, 6, 7, 8, 8, 8, SPECIES_KYOKYOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJyarimonDigivolveTable[] = {
    {17, 7, 7, 8, 8, 8, SPECIES_GIGIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKeemonDigivolveTable[] = {
    {17, 9, 6, 8, 7, 7, SPECIES_YAAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKetomonDigivolveTable[] = {
    {19, 9, 6, 6, 6, 7, SPECIES_HOPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKuramonDigivolveTable[] = {
    {19, 8, 6, 9, 5, 7, SPECIES_TSUMEMON},
    {28, 10, 7, 11, 5, 11, SPECIES_ARCADIAMON_IT},
    {19, 8, 7, 10, 5, 8, SPECIES_PAGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLeafmonDigivolveTable[] = {
    {19, 6, 6, 9, 9, 5, SPECIES_MINOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetalkoromonDigivolveTable[] = {
    {18, 7, 12, 6, 7, 7, SPECIES_KAPURIMON},
    {18, 7, 13, 7, 7, 8, SPECIES_PAGUMON},
    {19, 7, 13, 6, 7, 8, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMokumonDigivolveTable[] = {
    {16, 6, 6, 8, 11, 6, SPECIES_DEMIMERAMON},
    {16, 6, 7, 8, 11, 6, SPECIES_KAPURIMON},
    {16, 7, 5, 8, 11, 6, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNyokimonDigivolveTable[] = {
    {21, 5, 5, 7, 9, 6, SPECIES_YOKOMON},
    {21, 5, 6, 7, 9, 6, SPECIES_TANEMON},
    {21, 5, 6, 7, 8, 7, SPECIES_BUDMON},
    {21, 6, 5, 8, 9, 6, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPabumonDigivolveTable[] = {
    {19, 7, 6, 7, 6, 6, SPECIES_MOTIMON},
    {19, 7, 6, 8, 6, 6, SPECIES_NYAROMON},
    {19, 7, 7, 7, 6, 6, SPECIES_TANEMON},
    {20, 7, 7, 7, 6, 6, SPECIES_YOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPafumonDigivolveTable[] = {
    {17, 7, 7, 6, 6, 9, SPECIES_KYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPaomonDigivolveTable[] = {
    {20, 8, 6, 6, 6, 6, SPECIES_XIAOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPetitmonDigivolveTable[] = {
    {19, 8, 7, 9, 8, 7, SPECIES_BABYDMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPichimonDigivolveTable[] = {
    {18, 6, 6, 6, 9, 6, SPECIES_BUKAMON},
    {18, 7, 6, 7, 9, 6, SPECIES_TOKOMON},
    {18, 6, 6, 7, 9, 7, SPECIES_CHAPMON},
    {18, 7, 6, 6, 9, 6, SPECIES_TSUNOMON},
    {18, 6, 6, 7, 9, 6, SPECIES_NYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPopomonDigivolveTable[] = {
    {20, 6, 8, 6, 8, 6, SPECIES_FRIMON},
    {20, 6, 8, 7, 8, 6, SPECIES_WANYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPoyomonDigivolveTable[] = {
    {21, 6, 5, 6, 5, 9, SPECIES_TOKOMON},
    {22, 6, 5, 6, 5, 9, SPECIES_GUMMYMON},
    {21, 5, 7, 6, 5, 9, SPECIES_YOKOMON},
    {21, 5, 6, 6, 6, 9, SPECIES_BUKAMON},
    {21, 6, 5, 7, 5, 9, SPECIES_NYAROMON},
    {21, 6, 5, 6, 5, 9, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPunimonDigivolveTable[] = {
    {19, 9, 8, 5, 5, 6, SPECIES_TSUNOMON},
    {19, 9, 8, 6, 5, 6, SPECIES_DEMIMERAMON},
    {19, 9, 8, 6, 6, 6, SPECIES_BUKAMON},
    {19, 10, 8, 6, 5, 6, SPECIES_NYAROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPupumonDigivolveTable[] = {
    {16, 6, 6, 8, 7, 8, SPECIES_PUROROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPururumonDigivolveTable[] = {
    {18, 8, 6, 7, 5, 10, SPECIES_POROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPusumonDigivolveTable[] = {
    {16, 6, 7, 7, 8, 8, SPECIES_PUSURIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuttimonDigivolveTable[] = {
    {18, 6, 5, 9, 7, 7, SPECIES_KYUPIMON},
    {18, 7, 6, 10, 7, 7, SPECIES_TOKOMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuwamonDigivolveTable[] = {
    {17, 8, 6, 7, 7, 8, SPECIES_PINAMON},
    {17, 8, 6, 7, 8, 8, SPECIES_KYAROMON},
    {17, 8, 6, 7, 7, 9, SPECIES_CHAPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuyomonDigivolveTable[] = {
    {16, 5, 6, 9, 11, 7, SPECIES_PUYOYOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPyonmonDigivolveTable[] = {
    {18, 8, 8, 6, 6, 6, SPECIES_BOSAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRelemonDigivolveTable[] = {
    {17, 8, 6, 8, 6, 9, SPECIES_VIXIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSakumonDigivolveTable[] = {
    {17, 11, 6, 6, 6, 6, SPECIES_SAKUTTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSandmonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_TUMBLEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTsubumonDigivolveTable[] = {
    {18, 7, 7, 7, 7, 6, SPECIES_UPAMON},
    {18, 8, 7, 8, 7, 6, SPECIES_TOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnowbotamonDigivolveTable[] = {
    {20, 6, 5, 10, 6, 5, SPECIES_HIYARIMON},
    {20, 6, 5, 11, 6, 5, SPECIES_NYAROMON},
    {20, 7, 5, 10, 6, 5, SPECIES_TSUNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sYuramonDigivolveTable[] = {
    {19, 6, 6, 7, 6, 9, SPECIES_BUDMON},
    {19, 6, 7, 7, 6, 9, SPECIES_TANEMON},
    {19, 6, 6, 8, 6, 9, SPECIES_DEMIMERAMON},
    {19, 7, 6, 8, 6, 9, SPECIES_KOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZerimonDigivolveTable[] = {
    {17, 7, 7, 7, 7, 7, SPECIES_GUMMYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZurumonDigivolveTable[] = {
    {16, 8, 8, 8, 8, 6, SPECIES_PAGUMON},
    {16, 9, 8, 9, 8, 6, SPECIES_KOROMON},
    {16, 8, 9, 8, 8, 6, SPECIES_KAPURIMON},
    {16, 8, 9, 8, 8, 7, SPECIES_MOTIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTomorimonDigivolveTable[] = {
    {17, 6, 6, 8, 7, 7, SPECIES_ONIBIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArcadiamon_itDigivolveTable[] = {
    {34, 13, 14, 15, 12, 17, SPECIES_ARCADIAMON_ROOKIE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArgomon_itDigivolveTable[] = {
    {28, 9, 8, 16, 9, 14, SPECIES_ARGOMON_ROOKIE},
    {28, 12, 8, 19, 9, 14, SPECIES_AGUMON},
    {31, 9, 8, 16, 12, 14, SPECIES_WORMMON},
    {21, 9, 8, 16, 9, 16, SPECIES_LABRAMON},
    {28, 9, 8, 19, 9, 14, SPECIES_GHOSTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBabydmonDigivolveTable[] = {
    {27, 11, 12, 12, 13, 12, SPECIES_DRACOMON},
    {27, 14, 12, 12, 13, 12, SPECIES_GUMDRAMON},
    {28, 14, 13, 13, 13, 12, SPECIES_AGUMON_06},
    {27, 11, 12, 15, 16, 12, SPECIES_AGUMON_EXPERT},
    {27, 14, 12, 12, 13, 12, SPECIES_HACKMON},
    {27, 11, 12, 12, 16, 12, SPECIES_OTAMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBibimonDigivolveTable[] = {
    {25, 10, 12, 13, 13, 14, SPECIES_PULSEMON},
    {27, 10, 12, 15, 13, 14, SPECIES_SHOUTMON},
    {25, 10, 14, 15, 13, 16, SPECIES_KUDAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBosamonDigivolveTable[] = {
    {27, 12, 12, 11, 11, 11, SPECIES_ANGORAMON},
    {27, 12, 12, 11, 11, 14, SPECIES_DRACMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBudmonDigivolveTable[] = {
    {25, 11, 16, 10, 16, 8, SPECIES_LALAMON},
    {25, 13, 16, 12, 16, 8, SPECIES_AGUMON},
    {25, 13, 16, 10, 18, 8, SPECIES_SNOWAGUMON},
    {28, 11, 16, 10, 16, 8, SPECIES_GOMAMON},
    {25, 11, 16, 10, 16, 8, SPECIES_LALAMON},
    {25, 11, 16, 10, 18, 10, SPECIES_BETAMON},
    {25, 11, 16, 10, 16, 11, SPECIES_CHUUMON},
    {25, 11, 19, 10, 16, 8, SPECIES_PAWNCHESSMON_WHITE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBukamonDigivolveTable[] = {
    {27, 11, 11, 12, 12, 11, SPECIES_GOMAMON},
    {27, 11, 13, 12, 12, 13, SPECIES_SYAKOMON},
    {27, 11, 14, 12, 12, 11, SPECIES_SNOWGOBLIMON},
    {27, 14, 11, 12, 12, 11, SPECIES_MONMON},
    {30, 11, 11, 12, 12, 11, SPECIES_CLEARAGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCalumonDigivolveTable[] = {
    {29, 11, 12, 10, 10, 14, SPECIES_SALAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChapmonDigivolveTable[] = {
    {27, 11, 11, 12, 11, 12, SPECIES_BETAMON},
    {27, 11, 11, 12, 11, 15, SPECIES_ELECMON},
    {27, 11, 11, 15, 11, 12, SPECIES_FALCOMON_06},
    {28, 13, 11, 12, 11, 12, SPECIES_GOBLIMON},
    {27, 11, 11, 12, 14, 12, SPECIES_KAMEMON},
    {27, 11, 11, 14, 11, 14, SPECIES_KUDAMON_06},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChicchimonDigivolveTable[] = {
    {30, 11, 12, 10, 13, 13, SPECIES_HYOKOMON},
    {30, 11, 12, 13, 13, 13, SPECIES_PENGUINMON},
    {30, 11, 12, 13, 13, 13, SPECIES_MUCHOMON},
    {30, 11, 14, 12, 13, 13, SPECIES_FALCOMON_06},
    {31, 12, 12, 12, 13, 13, SPECIES_DOTFALCOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDemimeramonDigivolveTable[] = {
    {25, 11, 9, 14, 10, 16, SPECIES_CANDLEMON},
    {25, 11, 9, 17, 10, 16, SPECIES_GHOSTMON},
    {27, 11, 9, 14, 12, 16, SPECIES_VORVOMON},
    {25, 11, 9, 16, 12, 16, SPECIES_LOOGAMON},
    {25, 11, 9, 14, 13, 16, SPECIES_FLAMEMON},
    {25, 11, 9, 14, 12, 18, SPECIES_TAPIRMON},
    {25, 11, 9, 16, 11, 17, SPECIES_DEMIDEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDemiveemonDigivolveTable[] = {
    {26, 14, 11, 12, 12, 12, SPECIES_VEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDorimonDigivolveTable[] = {
    {28, 14, 11, 12, 12, 11, SPECIES_DORUMON},
    {29, 15, 12, 13, 13, 12, SPECIES_LOPMON},
    {30, 14, 11, 12, 12, 13, SPECIES_ARURAUMON},
    {30, 16, 11, 12, 12, 11, SPECIES_MONODRAMON},
    {28, 14, 11, 12, 15, 11, SPECIES_SHAMANMON},
    {28, 14, 11, 15, 12, 11, SPECIES_BLACKAGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFrimonDigivolveTable[] = {
    {25, 12, 12, 11, 11, 14, SPECIES_GAZIMON},
    {25, 15, 12, 11, 11, 14, SPECIES_KOKABUTERIMON},
    {25, 14, 12, 11, 11, 16, SPECIES_LIOLLMON},
    {27, 14, 12, 11, 11, 14, SPECIES_BEARMON},
    {25, 12, 12, 11, 11, 17, SPECIES_ELECMON},
    {25, 14, 12, 11, 13, 14, SPECIES_OTAMAMON_RED},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGigimonDigivolveTable[] = {
    {26, 12, 10, 13, 11, 12, SPECIES_GUILMON},
    {26, 12, 10, 13, 14, 12, SPECIES_SOLARMON},
    {26, 12, 13, 13, 11, 12, SPECIES_HAGURUMON},
    {28, 12, 10, 15, 11, 12, SPECIES_SHOUTMON},
    {28, 14, 10, 13, 11, 12, SPECIES_GOBLIMON},
    {27, 13, 10, 14, 13, 12, SPECIES_TENTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGummymonDigivolveTable[] = {
    {29, 11, 11, 11, 13, 12, SPECIES_TERRIERMON},
    {29, 11, 11, 14, 13, 12, SPECIES_JAZAMON},
    {29, 12, 11, 13, 14, 12, SPECIES_BULUCOMON},
    {31, 13, 13, 11, 13, 12, SPECIES_TOYAGUMON},
    {29, 13, 11, 13, 13, 12, SPECIES_RENAMON},
    {29, 11, 11, 11, 15, 13, SPECIES_TAPIRMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGurimonDigivolveTable[] = {
    {27, 12, 11, 14, 11, 11, SPECIES_GAMMAMON},
    {27, 15, 11, 14, 11, 11, SPECIES_MONMON},
    {27, 12, 11, 16, 13, 11, SPECIES_BOKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHiyarimonDigivolveTable[] = {
    {24, 8, 11, 13, 18, 9, SPECIES_BULUCOMON},
    {26, 10, 11, 13, 18, 9, SPECIES_BEARMON},
    {24, 8, 11, 16, 18, 9, SPECIES_PENGUINMON},
    {24, 8, 14, 13, 18, 9, SPECIES_SNOWGOBLIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHopmonDigivolveTable[] = {
    {26, 12, 12, 12, 11, 12, SPECIES_MONODRAMON},
    {26, 12, 12, 12, 14, 12, SPECIES_GABUMON},
    {26, 12, 15, 12, 11, 12, SPECIES_JAZAMON},
    {26, 12, 12, 12, 11, 15, SPECIES_JUNKMON},
    {26, 15, 12, 12, 11, 12, SPECIES_VEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKakkinmonDigivolveTable[] = {
    {27, 8, 20, 9, 15, 7, SPECIES_LUDOMON},
    {27, 11, 20, 9, 15, 7, SPECIES_SPADAMON},
    {27, 10, 20, 9, 15, 8, SPECIES_ZUBAMON},
    {27, 8, 20, 9, 15, 10, SPECIES_ESPIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKapurimonDigivolveTable[] = {
    {29, 14, 18, 8, 8, 8, SPECIES_KOKUWAMON},
    {29, 14, 21, 8, 8, 8, SPECIES_COMMANDRAMON},
    {31, 14, 18, 8, 10, 8, SPECIES_PHASCOMON},
    {30, 15, 20, 8, 8, 8, SPECIES_PAWNCHESSMON_BLACK},
    {29, 14, 18, 8, 8, 11, SPECIES_ESPIMON},
    {29, 17, 18, 8, 8, 8, SPECIES_KOKABUTERIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKokomonDigivolveTable[] = {
    {26, 14, 13, 11, 11, 11, SPECIES_LOPMON},
    {26, 14, 13, 14, 11, 11, SPECIES_RYUDAMON},
    {26, 14, 15, 11, 13, 11, SPECIES_SHADOWTOYAGUMON},
    {26, 14, 13, 13, 12, 12, SPECIES_DEMIDEVIMON},
    {26, 14, 13, 11, 14, 11, SPECIES_SHAMANMON},
    {28, 14, 13, 11, 13, 11, SPECIES_WORMMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKoromonDigivolveTable[] = {
    {26, 12, 11, 12, 10, 10, SPECIES_AGUMON},
    {26, 15, 11, 12, 10, 10, SPECIES_AGUMON_06},
    {26, 12, 11, 15, 10, 10, SPECIES_BLACKAGUMON},
    {26, 12, 11, 14, 12, 10, SPECIES_AGUMON_EXPERT},
    {26, 14, 11, 12, 12, 10, SPECIES_SNOWAGUMON},
    {26, 14, 11, 13, 12, 10, SPECIES_SNOWAGUMON_06},
    {26, 12, 11, 12, 12, 12, SPECIES_BETAMON},
    {27, 14, 11, 13, 11, 10, SPECIES_BUSHIAGUMON},
    {26, 12, 11, 12, 13, 10, SPECIES_DOTAGUMON},
    {26, 12, 11, 14, 12, 9, SPECIES_KUNEMON},
    {34, 17, 14, 15, 12, 11, SPECIES_LUCEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKozenimonDigivolveTable[] = {
    {26, 13, 16, 10, 12, 10, SPECIES_ZENIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKyaromonDigivolveTable[] = {
    {23, 12, 12, 11, 13, 9, SPECIES_KUDAMON_06},
    {23, 12, 12, 11, 15, 12, SPECIES_PALMON},
    {23, 12, 12, 12, 14, 11, SPECIES_IMPMON},
    {23, 12, 12, 14, 13, 9, SPECIES_CANDLEMON},
    {23, 12, 14, 11, 15, 9, SPECIES_KAMEMON},
    //{23, 12, 12, 11, 13, 9, SPECIES_HANIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKyokyomonDigivolveTable[] = {
    {28, 13, 7, 7, 13, 13, SPECIES_RYUDAMON},
    {29, 14, 7, 8, 13, 13, SPECIES_GUILMON_X},
    {28, 13, 10, 7, 13, 13, SPECIES_COMMANDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKyupimonDigivolveTable[] = {
    {32, 6, 6, 11, 21, 9, SPECIES_SALAMON},
    {33, 7, 7, 11, 22, 9, SPECIES_TERRIERMON},
    {35, 6, 6, 11, 21, 9, SPECIES_PATAMON},
    {43, 6, 6, 14, 29, 11, SPECIES_LUCEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMinomonDigivolveTable[] = {
    {28, 9, 17, 9, 17, 8, SPECIES_WORMMON},
    {28, 9, 17, 9, 20, 8, SPECIES_TENTOMON},
    {28, 9, 17, 11, 19, 8, SPECIES_KUNEMON},
    {28, 9, 20, 9, 17, 8, SPECIES_KOKUWAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMissimonDigivolveTable[] = {
    {24, 11, 10, 13, 11, 17, SPECIES_COMMANDRAMON},
    {24, 11, 10, 13, 11, 20, SPECIES_DRACMON},
    {27, 11, 10, 13, 11, 17, SPECIES_GIZAMON},
    {24, 11, 13, 13, 11, 17, SPECIES_HAGURUMON},
    {24, 11, 10, 16, 11, 17, SPECIES_PENGUINMON},
    {24, 11, 10, 13, 14, 17, SPECIES_TENTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonimonDigivolveTable[] = {
    {28, 11, 18, 15, 9, 9, SPECIES_MONITAMON},
    {28, 11, 21, 15, 9, 9, SPECIES_HAGURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMoonmonDigivolveTable[] = {
    {27, 11, 11, 11, 12, 12, SPECIES_LUNAMON},
    {27, 11, 11, 13, 14, 12, SPECIES_LOPMON},
    {27, 11, 11, 11, 12, 15, SPECIES_GAZIMON},
    {27, 11, 11, 14, 12, 12, SPECIES_BLACKAGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMotimonDigivolveTable[] = {
    {26, 11, 12, 11, 11, 12, SPECIES_TENTOMON},
    {26, 14, 12, 11, 11, 12, SPECIES_HACKMON},
    {26, 11, 15, 11, 11, 12, SPECIES_CRABMON},
    {26, 11, 12, 14, 11, 12, SPECIES_FANBEEMON},
    {27, 11, 12, 12, 12, 12, SPECIES_MORPHOMON},
    {28, 11, 12, 11, 13, 12, SPECIES_WORMMON},
    {26, 11, 12, 13, 13, 12, SPECIES_DOKUNEMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sNegamonDigivolveTable[] = {
//     {28, 11, 18, 15, 9, 9, SPECIES_NEGAMON_MEGA},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sNyaromonDigivolveTable[] = {
    {26, 12, 11, 13, 10, 11, SPECIES_SALAMON},
    {26, 12, 14, 13, 10, 11, SPECIES_TINKERMON},
    {26, 12, 11, 15, 12, 11, SPECIES_AGUMON_EXPERT},
    {26, 12, 11, 13, 10, 14, SPECIES_HAWKMON},
    {26, 12, 11, 14, 10, 13, SPECIES_BIYOMON},
    {26, 14, 11, 14, 10, 11, SPECIES_RENAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPagumonDigivolveTable[] = {
    {26, 11, 12, 12, 11, 12, SPECIES_GIZAMON},
    {26, 11, 12, 12, 11, 15, SPECIES_GAZIMON},
    {26, 11, 12, 13, 12, 13, SPECIES_IMPMON},
    {26, 11, 12, 15, 11, 12, SPECIES_DEMIDEVIMON},
    {27, 12, 13, 12, 11, 12, SPECIES_TSUKAIMON},
    {26, 11, 15, 12, 11, 12, SPECIES_GOTSUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPickmon_silverDigivolveTable[] = {
    {32, 12, 17, 8, 8, 8, SPECIES_STARMON_2010},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPickmon_whiteDigivolveTable[] = {
    {28, 9, 11, 15, 14, 15, SPECIES_STARMON_2010},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPickmon_redDigivolveTable[] = {
    {29, 13, 14, 10, 9, 10, SPECIES_STARMON_2010},
    {31, 15, 14, 10, 9, 10, SPECIES_GUILMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPinamonDigivolveTable[] = {
    {27, 10, 11, 10, 10, 19, SPECIES_FALCOMON_06},
    {27, 10, 11, 11, 11, 20, SPECIES_LALAMON},
    {27, 10, 11, 10, 10, 22, SPECIES_ELECMON},
    {27, 12, 11, 12, 10, 19, SPECIES_FALCOMON},
    {27, 10, 11, 13, 10, 19, SPECIES_SWIMMON},
    {27, 10, 11, 10, 13, 19, SPECIES_MUSHROOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPoromonDigivolveTable[] = {
    {27, 11, 11, 12, 11, 11, SPECIES_HAWKMON},
    {27, 11, 14, 12, 11, 11, SPECIES_TINKERMON},
    {27, 11, 11, 12, 14, 11, SPECIES_GABUMON},
    {27, 11, 11, 15, 11, 11, SPECIES_FALCOMON_06},
    {27, 14, 11, 12, 11, 11, SPECIES_POMUMON},
    //{27, 11, 11, 12, 11, 11, SPECIES_UKKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuroromonDigivolveTable[] = {
    {28, 14, 8, 14, 8, 16, SPECIES_FANBEEMON},
    {28, 16, 8, 14, 10, 16, SPECIES_DORUMON},
    {28, 14, 8, 17, 8, 16, SPECIES_RYUDAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPusurimonDigivolveTable[] = {
    {26, 12, 12, 12, 11, 10, SPECIES_HERISSMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPuyoyomonDigivolveTable[] = {
    {23, 8, 12, 12, 16, 16, SPECIES_JELLYMON},
    {23, 8, 13, 13, 17, 16, SPECIES_KODOKUGUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSakuttomonDigivolveTable[] = {
    {26, 13, 12, 11, 10, 11, SPECIES_ZUBAMON},
    {26, 16, 12, 11, 10, 11, SPECIES_SPADAMON},
    {26, 13, 12, 14, 10, 11, SPECIES_RYUDAMON},
    {26, 13, 15, 11, 10, 11, SPECIES_LUDOMON},
    {26, 15, 12, 11, 11, 12, SPECIES_HACKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSunmonDigivolveTable[] = {
    {27, 11, 11, 11, 12, 12, SPECIES_CORONAMON},
    {29, 13, 11, 11, 12, 12, SPECIES_GUILMON},
    {28, 11, 11, 12, 12, 13, SPECIES_KUDAMON_06},
    {27, 11, 11, 14, 12, 12, SPECIES_SALAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTanemonDigivolveTable[] = {
    {27, 12, 13, 12, 12, 12, SPECIES_PALMON},
    {27, 12, 13, 13, 13, 13, SPECIES_LALAMON},
    {27, 12, 13, 12, 15, 12, SPECIES_FLORAMON},
    {27, 15, 13, 12, 12, 12, SPECIES_POMUMON},
    {27, 12, 13, 12, 14, 14, SPECIES_BETAMON},
    {30, 12, 13, 12, 12, 12, SPECIES_GOBLIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTokomonDigivolveTable[] = {
    {26, 12, 11, 12, 11, 11, SPECIES_PATAMON},
    {26, 12, 14, 12, 11, 11, SPECIES_CRABMON},
    {28, 12, 11, 14, 11, 11, SPECIES_SHOUTMON},
    //{26, 12, 11, 12, 11, 11, SPECIES_SISTERMON_BLANC},
    {34, 15, 14, 15, 14, 14, SPECIES_LUCEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTokomon_xDigivolveTable[] = {
    {26, 12, 12, 12, 11, 11, SPECIES_RENAMON_X},
    {26, 12, 12, 12, 14, 11, SPECIES_GABUMON_X},
    {26, 12, 12, 15, 11, 11, SPECIES_AGUMON_X},
    {26, 12, 15, 12, 11, 11, SPECIES_HERISSMON},
    //{26, 12, 12, 12, 11, 11, SPECIES_SISTERMON_BLANC},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTorikaraballmonDigivolveTable[] = {
    {26, 11, 11, 12, 11, 12, SPECIES_BURGERMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTsumemonDigivolveTable[] = {
    {31, 17, 7, 13, 10, 12, SPECIES_KERAMON},
    {31, 17, 7, 13, 13, 12, SPECIES_BLACKGABUMON},
    {31, 17, 7, 16, 10, 12, SPECIES_BLACKAGUMON},
    {31, 17, 9, 13, 12, 12, SPECIES_SHADOWTOYAGUMON},
    {31, 20, 7, 13, 10, 12, SPECIES_KOTEMON},
    {32, 18, 7, 14, 12, 12, SPECIES_SHAMANMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTsunomonDigivolveTable[] = {
    {27, 13, 12, 11, 11, 12, SPECIES_GABUMON},
    {27, 13, 12, 11, 14, 12, SPECIES_BLACKGABUMON},
    {27, 13, 12, 11, 11, 15, SPECIES_PSYCHEMON},
    {27, 13, 14, 11, 11, 14, SPECIES_SYAKOMON},
    {28, 14, 12, 11, 12, 13, SPECIES_DRACOMON},
    {27, 13, 12, 14, 11, 12, SPECIES_ELECMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTumblemonDigivolveTable[] = {
    {27, 12, 12, 11, 11, 11, SPECIES_SUNARIZAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sUpamonDigivolveTable[] = {
    {30, 9, 13, 13, 11, 12, SPECIES_ARMADILLOMON},
    {30, 9, 13, 16, 11, 12, SPECIES_AGUMON},
    {33, 9, 13, 13, 11, 12, SPECIES_GIZAMON},
    {32, 9, 13, 13, 11, 13, SPECIES_PATAMON},
    {30, 9, 13, 13, 14, 12, SPECIES_SANGOMON},
    {30, 9, 13, 16, 11, 12, SPECIES_SWIMMON},
    {30, 12, 13, 13, 11, 12, SPECIES_VEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sViximonDigivolveTable[] = {
    {27, 11, 11, 12, 11, 11, SPECIES_RENAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWanyamonDigivolveTable[] = {
    {27, 12, 11, 13, 11, 11, SPECIES_GAOMON},
    {27, 12, 11, 13, 11, 14, SPECIES_ELECMON},
    {29, 14, 11, 13, 11, 11, SPECIES_BEARMON},
    {27, 13, 12, 14, 11, 12, SPECIES_STRABIMON},
    {27, 14, 11, 13, 13, 11, SPECIES_RENAMON},
    {27, 12, 14, 13, 11, 11, SPECIES_PAWNCHESSMON_WHITE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sXiaomonDigivolveTable[] = {
    {27, 12, 11, 12, 11, 11, SPECIES_LABRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sYaamonDigivolveTable[] = {
    {26, 11, 11, 12, 12, 12, SPECIES_IMPMON},
    {26, 13, 11, 12, 14, 12, SPECIES_DORUMON},
    {26, 11, 14, 12, 12, 12, SPECIES_HERISSMON},
    {26, 11, 11, 12, 15, 12, SPECIES_KERAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sYokomonDigivolveTable[] = {
    {30, 9, 14, 15, 13, 7, SPECIES_BIYOMON},
    {30, 9, 14, 18, 13, 7, SPECIES_CUTEMON},
    {32, 9, 14, 15, 15, 7, SPECIES_PHASCOMON},
    {30, 9, 14, 15, 13, 10, SPECIES_ELECMON_VIOLET},
    {30, 9, 14, 17, 13, 9, SPECIES_LUXMON},
    //{30, 9, 14, 15, 13, 7, SPECIES_PTEROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOnibimonDigivolveTable[] = {
    //{26, 10, 9, 15, 13, 11, SPECIES_WANKOMON},
    {26, 12, 9, 15, 15, 11, SPECIES_RENAMON},
    //{26, 10, 9, 15, 13, 11, SPECIES_HANIMON},
    //{26, 10, 9, 15, 13, 11, SPECIES_GASAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAgumonDigivolveTable[] = {
    {52, 31, 25, 31, 25, 25, SPECIES_GREYMON},
    {52, 31, 25, 39, 25, 25, SPECIES_MERAMON},
    {52, 39, 25, 31, 25, 25, SPECIES_TUSKMON},
    {52, 37, 25, 34, 25, 25, SPECIES_TYRANNOMON},
    {52, 31, 25, 37, 25, 30, SPECIES_AIRDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAgumon_06DigivolveTable[] = {
    {54, 33, 29, 29, 19, 25, SPECIES_GEOGREYMON},
    // {54, 33, 29, 29, 19, 25, SPECIES_GROWLMON_ORANGE},
    // {54, 33, 29, 29, 19, 25, SPECIES_RAPTORDRAMON},
    {62, 33, 29, 29, 19, 25, SPECIES_FLARERIZAMON},
    {54, 33, 29, 29, 24, 25, SPECIES_VEEDRAMON},
    {47, 28, 25, 25, 16, 22, SPECIES_SHELLNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAgumon_expertDigivolveTable[] = {
    {48, 25, 25, 31, 31, 25, SPECIES_WIZARDMON},
    {48, 25, 25, 31, 31, 33, SPECIES_GARURUMON},
    // {48, 25, 25, 31, 31, 25, SPECIES_GREYMON_BLUE},
    // {48, 25, 25, 31, 31, 25, SPECIES_GWAPPAMON},
    // {48, 25, 25, 31, 31, 25, SPECIES_REPPAMON},
    {48, 30, 25, 31, 31, 31, SPECIES_STARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSalamonDigivolveTable[] = {
    {50, 25, 23, 27, 23, 23, SPECIES_GATOMON},
    {50, 25, 23, 27, 23, 31, SPECIES_DARCMON},
    // {50, 25, 23, 27, 23, 23, SPECIES_FANGMON},
    {50, 30, 23, 27, 23, 29, SPECIES_MUSYAMON},
    {50, 33, 23, 27, 23, 23, SPECIES_UNIMON},
    {44, 22, 20, 23, 20, 20, SPECIES_RAREMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sAgumon_xDigivolveTable[] = {
//     // {52, 29, 25, 33, 25, 27, SPECIES_GREYMON_X},
//     // {52, 29, 25, 33, 25, 27, SPECIES_OMEKAMON},
//     {52, 29, 25, 33, 25, 27, SPECIES_TYRANNOMON_X},
//     {52, 29, 25, 33, 25, 27, SPECIES_SEADRAMON_X},
//     {52, 29, 25, 33, 25, 27, SPECIES_LEOMON_X},
//     {52, 29, 25, 33, 25, 27, SPECIES_KUWAGAMON_X},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sAngoramonDigivolveTable[] = {
    // {60, 27, 29, 17, 31, 17, SPECIES_SYMBAREANGORAMON},
    // {60, 27, 29, 17, 31, 17, SPECIES_SEASARMON},
    // {60, 27, 29, 17, 31, 17, SPECIES_KOMONDOMON},
    // {60, 27, 29, 17, 31, 17, SPECIES_PORCUPAMON},
    // {60, 27, 29, 17, 31, 17, SPECIES_PUBLIMON},
    {68, 27, 29, 17, 31, 17, SPECIES_DOGGYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSalamon_xDigivolveTable[] = {
    {48, 25, 23, 27, 27, 25, SPECIES_GATOMON_X},
    // {48, 25, 23, 27, 27, 25, SPECIES_LEOMON_X},
    {48, 25, 23, 27, 27, 33, SPECIES_GARURUMON_X},
    {48, 25, 23, 35, 27, 25, SPECIES_DOBERMON_X},
    // {48, 25, 23, 27, 27, 25, SPECIES_TOGEMON_X},
    // {48, 25, 23, 27, 27, 25, SPECIES_MEICOOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArcadiamon_rookieDigivolveTable[] = {
    {58, 31, 31, 31, 31, 31, SPECIES_ARCADIAMON_CHAMPION},
    {54, 29, 34, 34, 29, 29, SPECIES_CHRYSALIMON},
    {62, 29, 29, 29, 29, 29, SPECIES_BOOGIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArgomon_rookieDigivolveTable[] = {
    {52, 25, 27, 37, 31, 17, SPECIES_ARGOMON_CHAMPION},
    {52, 30, 27, 42, 31, 17, SPECIES_DEVIMON},
    {52, 25, 35, 37, 31, 17, SPECIES_MOJYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArmadillomonDigivolveTable[] = {
    {52, 25, 27, 37, 31, 17, SPECIES_ARGOMON_CHAMPION},
    DIGIVOLUTION_END,
};