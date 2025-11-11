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
    {56, 27, 35, 25, 23, 25, SPECIES_ANKYLOMON},
    {56, 35, 35, 25, 23, 25, SPECIES_GORILLAMON},
    {56, 27, 43, 25, 23, 25, SPECIES_GOLEMON},
    {56, 27, 35, 25, 23, 29, SPECIES_TUSKMON},
    {64, 27, 35, 25, 23, 25, SPECIES_MINOTARUMON},
    {55, 23, 30, 22, 20, 22, SPECIES_SUKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAruraumonDigivolveTable[] = {
    {54, 23, 23, 25, 27, 29, SPECIES_WEEDMON},
    {54, 23, 23, 25, 27, 37, SPECIES_STINGMON},
    {54, 23, 25, 25, 27, 35, SPECIES_YANMAMON},
    {54, 28, 23, 25, 27, 35, SPECIES_NINJAMON},
    {54, 23, 23, 25, 32, 35, SPECIES_KIWIMON},
    {54, 23, 28, 25, 32, 29, SPECIES_ICEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBearmonDigivolveTable[] = {
    // {58, 33, 25, 25, 21, 21, SPECIES_GRIZZLYMON},
    // {58, 33, 25, 25, 21, 21, SPECIES_MIKEMON},
    {58, 33, 25, 33, 21, 21, SPECIES_DOBERMON},
    {58, 36, 25, 31, 21, 21, SPECIES_BLACKGARURUMON},
    // {58, 33, 25, 25, 21, 21, SPECIES_GLADIMON},
    {58, 38, 30, 25, 21, 21, SPECIES_HYOGAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShoutmonDigivolveTable[] = {
    // {98, 49, 45, 53, 49, 45, SPECIES_OMNISHOUTMON},
    // {54, 27, 25, 29, 27, 25, SPECIES_REDVEEDRAMON},
    {59, 32, 25, 29, 27, 25, SPECIES_BULKMON},
    // {54, 27, 25, 29, 27, 25, SPECIES_ZUBAEAGERMON},
    // {54, 27, 25, 29, 27, 25, SPECIES_MIMICMON},
    {54, 35, 25, 29, 27, 25, SPECIES_GREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBetamonDigivolveTable[] = {
    {48, 25, 25, 25, 27, 27, SPECIES_SEADRAMON},
    {48, 25, 33, 25, 27, 27, SPECIES_MORISHELLMON},
    {48, 33, 25, 25, 27, 27, SPECIES_DINOHYUMON},
    {56, 25, 25, 25, 27, 27, SPECIES_DELTAMON},
    {48, 31, 29, 25, 27, 27, SPECIES_EBIDRAMON},
    {44, 23, 23, 23, 24, 24, SPECIES_NUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBetamon_xDigivolveTable[] = {
    // {52, 31, 25, 27, 33, 27, SPECIES_SEADRAMON_X},
    // {52, 31, 25, 27, 33, 27, SPECIES_LEOMON_X},
    // {52, 31, 25, 27, 33, 27, SPECIES_STARMON_X},
    {52, 31, 25, 27, 33, 35, SPECIES_GARURUMON_X},
    // {52, 31, 25, 27, 33, 27, SPECIES_GREYMON_X},
    {52, 31, 25, 27, 41, 27, SPECIES_GEKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBiyomonDigivolveTable[] = {
    {42, 21, 21, 31, 27, 35, SPECIES_BIRDRAMON},
    {42, 21, 21, 31, 27, 43, SPECIES_AQUILAMON},
    // {42, 21, 21, 31, 27, 35, SPECIES_XIQUEMON},
    // {42, 21, 21, 31, 27, 35, SPECIES_KAZEMON},
    {42, 21, 21, 36, 32, 35, SPECIES_PIDMON},
    // {42, 21, 21, 31, 27, 35, SPECIES_YOUKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackagumonDigivolveTable[] = {
    // {50, 29, 23, 35, 27, 25, SPECIES_GREYMON_BLUE},
    {50, 37, 23, 35, 27, 25, SPECIES_DARKTYRANNOMON},
    {50, 35, 23, 39, 27, 25, SPECIES_DEVIDRAMON},
    {50, 29, 31, 35, 27, 25, SPECIES_TORTOMON},
    // {50, 29, 23, 35, 27, 25, SPECIES_KYUBIMON_SILVER},
    {50, 29, 23, 35, 27, 33, SPECIES_COREDRAMON_BLUE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPsychemonDigivolveTable[] = {
    {50, 25, 27, 25, 29, 33, SPECIES_GURURUMON},
    {50, 30, 27, 25, 34, 33, SPECIES_BOMBERNANIMON},
    {50, 25, 27, 29, 33, 37, SPECIES_DORUGAMON},
    // {50, 25, 27, 25, 29, 33, SPECIES_TURUIEMON},
    {50, 33, 27, 25, 29, 33, SPECIES_APEMON},
    {50, 25, 35, 25, 29, 33, SPECIES_MOJYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackagumon_xDigivolveTable[] = {
    {48, 37, 23, 23, 35, 23, SPECIES_DARKTYRANNOMON_X},
    {48, 45, 23, 23, 35, 23, SPECIES_ALLOMON_X},
    // {48, 37, 23, 23, 35, 23, SPECIES_KUWAGAMON_X},
    // {42, 32, 20, 20, 30, 20, SPECIES_NUMEMON_X},
    // {48, 37, 23, 23, 35, 23, SPECIES_GREYMON_BLUE},
    {48, 42, 28, 23, 35, 23, SPECIES_GEOGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackgabumonDigivolveTable[] = {
    {50, 27, 29, 31, 33, 27, SPECIES_BLACKGARURUMON},
    {50, 35, 29, 31, 33, 27, SPECIES_BLACKGAOGAMON},
    {55, 29, 29, 31, 33, 27, SPECIES_DORULUMON},
    {50, 27, 29, 36, 33, 32, SPECIES_SABERDRAMON},
    {55, 27, 29, 31, 38, 27, SPECIES_FRIGIMON},
    // {50, 27, 29, 31, 33, 27, SPECIES_STRIKEDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackguilmonDigivolveTable[] = {
    {54, 31, 27, 29, 27, 35, SPECIES_BLACKGROWLMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBokomonDigivolveTable[] = {
    {42, 21, 21, 33, 33, 17, SPECIES_NANIMON},
    {42, 21, 21, 33, 33, 25, SPECIES_CENTARUMON},
    {42, 21, 21, 33, 41, 17, SPECIES_MUDFRIGIMON},
    {42, 21, 21, 41, 33, 17, SPECIES_WIZARDMON},
    // {42, 21, 21, 33, 33, 17, SPECIES_SEASARMON},
    {42, 26, 21, 38, 33, 17, SPECIES_BETELGAMMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBulucomonDigivolveTable[] = {
    // {46, 29, 17, 33, 29, 25, SPECIES_PALEDRAMON},
    {51, 29, 17, 33, 34, 25, SPECIES_FRIGIMON},
    // {46, 29, 17, 33, 29, 25, SPECIES_GINRYUMON},
    {46, 34, 22, 33, 29, 25, SPECIES_HYOGAMON},
    // {46, 29, 17, 33, 29, 25, SPECIES_MOOSEMON},
    // {46, 29, 17, 33, 29, 25, SPECIES_OMEKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBurgermonDigivolveTable[] = {
    {58, 19, 25, 25, 17, 31, SPECIES_BURGERMON_CHAMPION},
    {58, 19, 25, 25, 17, 39, SPECIES_STARMON_2010},
    {66, 19, 25, 25, 17, 31, SPECIES_BOARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonodramonDigivolveTable[] = {
    // {56, 31, 29, 27, 27, 25, SPECIES_STRIKEDRAMON},
    {56, 31, 37, 27, 27, 25, SPECIES_MONOCHROMON},
    {56, 39, 29, 27, 27, 25, SPECIES_CYCLONEMON},
    {64, 31, 29, 27, 27, 25, SPECIES_DELTAMON},
    // {56, 31, 29, 27, 27, 25, SPECIES_KOGAMON},
    {59, 36, 29, 27, 30, 28, SPECIES_EXVEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSangomonDigivolveTable[] = {
    {50, 25, 25, 23, 27, 25, SPECIES_SHELLMON},
    {50, 25, 25, 23, 27, 33, SPECIES_SEADRAMON},
    // {50, 25, 25, 23, 27, 25, SPECIES_TOBIUMON},
    {50, 25, 25, 31, 27, 25, SPECIES_OCTOMON},
    // {50, 25, 25, 23, 27, 25, SPECIES_HOOKMON},
    {44, 22, 22, 20, 23, 22, SPECIES_SHELLNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBushiagumonDigivolveTable[] = {
    // {52, 33, 25, 27, 27, 25, SPECIES_REPPAMON},
    {52, 38, 25, 27, 27, 30, SPECIES_ARRESTERDRAMON},
    {52, 41, 25, 27, 27, 30, SPECIES_GREYMON},
    // {52, 38, 25, 27, 27, 30, SPECIES_GREYMON_BLUE},
    {52, 38, 30, 27, 27, 25, SPECIES_GEOGREYMON},
    // {52, 33, 25, 27, 27, 25, SPECIES_MANBOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSantaagumonDigivolveTable[] = {
    {52, 31, 25, 23, 33, 25, SPECIES_CENTARUMON},
    {52, 39, 25, 23, 33, 25, SPECIES_GREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCandlemonDigivolveTable[] = {
    {44, 21, 21, 35, 31, 31, SPECIES_MERAMON},
    {44, 21, 21, 35, 39, 31, SPECIES_BAKEMON},
    {44, 21, 21, 43, 39, 31, SPECIES_WIZARDMON},
    {44, 21, 21, 35, 39, 39, SPECIES_VILEMON},
    {44, 29, 21, 35, 39, 31, SPECIES_SHIMAUNIMON},
    {52, 21, 21, 35, 39, 31, SPECIES_FLARERIZAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShadowtoyagumonDigivolveTable[] = {
    {46, 25, 33, 25, 33, 25, SPECIES_TANKMON},
    {46, 25, 33, 33, 33, 25, SPECIES_THUNDERBALLMON},
    {46, 25, 41, 25, 33, 25, SPECIES_MEKANORIMON},
    // {46, 25, 33, 25, 33, 25, SPECIES_TRAILMON_BALL},
    {54, 25, 33, 25, 33, 25, SPECIES_FUGAMON},
    {40, 22, 28, 22, 28, 22, SPECIES_GEREMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sChuuchuumonDigivolveTable[] = {
//     {37, 22, 15, 25, 25, 23, SPECIES_TUWARMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sChuumonDigivolveTable[] = {
    // {35, 18, 16, 22, 22, 37, SPECIES_SEARCHMON},
    {35, 25, 16, 22, 22, 37, SPECIES_TYRANNOMON},
    {35, 18, 16, 22, 28, 37, SPECIES_SUKAMON},
    {47, 25, 22, 30, 30, 45, SPECIES_PLATINUMSUKAMON},
    {48, 18, 16, 22, 22, 37, SPECIES_DOGGYMON},
    {46, 18, 16, 22, 22, 42, SPECIES_ROACHMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sClearagumonDigivolveTable[] = {
    {58, 29, 23, 23, 25, 25, SPECIES_GUARDROMON},
    {58, 29, 23, 31, 25, 25, SPECIES_DEPUTYMON},
    // {58, 29, 23, 23, 25, 25, SPECIES_GROWLMON_ORANGE},
    {66, 29, 23, 23, 25, 25, SPECIES_DOGGYMON},
    {58, 29, 23, 23, 25, 33, SPECIES_NINJAMON},
    {58, 29, 31, 23, 25, 25, SPECIES_ICEDEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCommandramonDigivolveTable[] = {
    // {50, 29, 33, 25, 25, 25, SPECIES_HI_COMMANDRAMON},
    // {60, 38, 40, 27, 30, 30, SPECIES_SEALSDRAMON},
    // {50, 29, 33, 25, 25, 25, SPECIES_HOVERESPIMON},
    {50, 29, 33, 25, 33, 25, SPECIES_CLOCKMON},
    {50, 29, 33, 33, 25, 25, SPECIES_DOBERMON},
    {50, 37, 33, 25, 25, 25, SPECIES_SNIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCoronamonDigivolveTable[] = {
    {56, 31, 25, 29, 25, 27, SPECIES_FIRAMON},
    {56, 31, 25, 37, 25, 27, SPECIES_MERAMON},
    {56, 31, 25, 29, 25, 35, SPECIES_BIRDRAMON},
    {56, 36, 30, 29, 25, 27, SPECIES_GROWLMON},
    {64, 31, 25, 29, 25, 27, SPECIES_LEOMON},
    {56, 31, 30, 35, 25, 27, SPECIES_COREDRAMON_GREEN},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCrabmonDigivolveTable[] = {
    {40, 35, 39, 19, 27, 17, SPECIES_COELAMON},
    {45, 35, 39, 19, 32, 17, SPECIES_GESOMON},
    {40, 35, 39, 27, 27, 17, SPECIES_OCTOMON},
    {40, 35, 39, 24, 30, 20, SPECIES_DOLPHMON},
    {40, 35, 39, 19, 35, 17, SPECIES_GEKOMON},
    {48, 35, 39, 19, 27, 17, SPECIES_WHAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCrabmon_xDigivolveTable[] = {
    // {44, 37, 41, 21, 29, 13, SPECIES_GESOMON_X},
    // {44, 37, 41, 21, 29, 13, SPECIES_TYLOMON_X},
    // {44, 37, 41, 21, 29, 13, SPECIES_MONOCHROME_X},
    {44, 45, 41, 21, 29, 13, SPECIES_EBIDRAMON},
    // {44, 37, 41, 21, 29, 13, SPECIES_GAWAPPAMON},
    {44, 37, 41, 21, 37, 13, SPECIES_GEKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCutemonDigivolveTable[] = {
    {44, 45, 41, 21, 29, 13, SPECIES_UNIMON},
    {44, 43, 46, 21, 29, 13, SPECIES_TYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDemidevimonDigivolveTable[] = {
    {50, 27, 25, 31, 29, 29, SPECIES_DEVIMON},
    // {50, 27, 25, 31, 29, 29, SPECIES_PORCUPAMON},
    {50, 27, 25, 39, 29, 29, SPECIES_BLACKGATOMON},
    {54, 31, 25, 35, 29, 29, SPECIES_BLACKGROWLMON},
    // {50, 27, 25, 31, 29, 29, SPECIES_SORCERYMON},
    {50, 27, 25, 31, 29, 37, SPECIES_MUSYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKunemonDigivolveTable[] = {
    {50, 25, 25, 27, 27, 17, SPECIES_FLYMON},
    {50, 33, 25, 27, 27, 17, SPECIES_KUWAGAMON},
    {50, 25, 25, 27, 27, 25, SPECIES_KABUTERIMON},
    {50, 31, 25, 27, 27, 21, SPECIES_SNIMON},
    {50, 25, 25, 27, 35, 17, SPECIES_DOKUGUMON},
    {50, 25, 25, 35, 27, 17, SPECIES_REDVEGIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLabramonDigivolveTable[] = {
    {56, 29, 27, 13, 21, 29, SPECIES_DOBERMON},
    // {56, 29, 27, 13, 21, 29, SPECIES_SEASARMON},
    // {56, 29, 27, 13, 21, 29, SPECIES_TOBUCATMON},
    {64, 29, 27, 13, 21, 29, SPECIES_IKKAKUMON},
    {56, 37, 27, 13, 21, 29, SPECIES_GARGOMON},
    {56, 29, 27, 13, 21, 37, SPECIES_DARCMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDokunemonDigivolveTable[] = {
    {50, 25, 25, 27, 27, 25, SPECIES_SANDYANMAMON},
    {58, 25, 25, 27, 27, 25, SPECIES_ROACHMON},
    {50, 25, 25, 27, 27, 33, SPECIES_STINGMON},
    {56, 25, 25, 31, 27, 25, SPECIES_KOKATORIMON},
    {50, 25, 33, 27, 27, 25, SPECIES_WOODMON},
    {55, 25, 28, 31, 27, 25, SPECIES_NISEDRIMOGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRenamon_xDigivolveTable[] = {
    // {50, 29, 25, 27, 33, 27, SPECIES_LEOMON_X},
    // {50, 29, 25, 27, 33, 27, SPECIES_SANGLOUPMON},
    {50, 29, 33, 27, 33, 27, SPECIES_DAMEMON_FUSION},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDorumonDigivolveTable[] = {
    {52, 27, 27, 27, 27, 27, SPECIES_DORUGAMON},
    {52, 30, 27, 31, 30, 27, SPECIES_DEXDORUGAMON},
    // {52, 30, 27, 31, 30, 27, SPECIES_RAPTORDRAMON},
    {52, 30, 27, 31, 27, 30, SPECIES_AIRDRAMON},
    // {52, 27, 27, 27, 27, 27, SPECIES_WASPMON},
    // {52, 27, 27, 27, 27, 27, SPECIES_WENDIGOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDotagumonDigivolveTable[] = {
    {52, 31, 25, 23, 33, 25, SPECIES_FLARERIZAMON},
    {52, 39, 25, 23, 33, 25, SPECIES_DINOHYUMON},
    {52, 37, 30, 23, 33, 25, SPECIES_EBIDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDotfalcomonDigivolveTable[] = {
    {52, 27, 25, 31, 27, 25, SPECIES_DIATRYMON},
    {52, 27, 25, 36, 27, 30, SPECIES_SABERDRAMON},
    {52, 27, 25, 31, 27, 33, SPECIES_STARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDracmonDigivolveTable[] = {
    // {42, 29, 21, 29, 29, 33, SPECIES_SANGLOUPMON},
    // {42, 29, 21, 29, 29, 33, SPECIES_YASYAMON},
    {42, 34, 21, 34, 29, 33, SPECIES_DEVIMON},
    {42, 29, 21, 37, 29, 33, SPECIES_DEXDORUGAMON},
    // {42, 29, 21, 29, 29, 33, SPECIES_SISTERMON_NOIR},
    {50, 29, 21, 29, 29, 33, SPECIES_RAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDracomonDigivolveTable[] = {
    {54, 29, 25, 25, 29, 29, SPECIES_VEEDRAMON},
    {54, 37, 25, 25, 29, 29, SPECIES_TYRANNOMON},
    {54, 34, 30, 25, 29, 29, SPECIES_GEOGREYMON},
    {62, 29, 25, 25, 29, 29, SPECIES_DELTAMON},
    // {54, 29, 25, 25, 29, 29, SPECIES_GINRYUMON},
    {54, 35, 25, 30, 29, 29, SPECIES_DARKTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDracomon_xDigivolveTable[] = {
    // {58, 31, 27, 27, 27, 27, SPECIES_GROWLMON_X},
    {58, 31, 35, 27, 27, 27, SPECIES_DAMEMON_FUSION},
    // {58, 31, 27, 27, 27, 27, SPECIES_SISTERMON_CIEL},
    DIGIVOLUTION_END,
};

static const struct Digivolution sEbiburgamonDigivolveTable[] = {
    {58, 19, 25, 25, 17, 27, SPECIES_BURGERMON_CHAMPION},
    {58, 27, 25, 25, 17, 27, SPECIES_EBIDRAMON},
    {66, 19, 25, 25, 17, 27, SPECIES_KOKATORIMON},
    {58, 19, 25, 25, 17, 35, SPECIES_KABUTERIMON},
    {58, 19, 25, 33, 17, 27, SPECIES_OCTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sElecmonDigivolveTable[] = {
    {50, 25, 21, 29, 21, 35, SPECIES_LEOMON},
    // {50, 25, 21, 29, 21, 35, SPECIES_RUNNERMON},
    {50, 30, 21, 29, 26, 35, SPECIES_AEGIOMON},
    {50, 25, 21, 37, 21, 35, SPECIES_BLACKGARURUMON},
    {50, 33, 21, 29, 21, 35, SPECIES_DARKTYRANNOMON},
    {58, 25, 21, 29, 21, 35, SPECIES_RAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sElecmon_violetDigivolveTable[] = {
    {46, 21, 17, 37, 13, 47, SPECIES_THUNDERBALLMON},
    // {46, 21, 17, 37, 13, 47, SPECIES_MADLEOMON},
    // {46, 21, 17, 37, 13, 47, SPECIES_LIAMON},
    {46, 21, 17, 37, 13, 55, SPECIES_GATOMON},
    {46, 21, 22, 37, 18, 47, SPECIES_VEGIEMON},
    // {46, 21, 17, 37, 13, 47, SPECIES_HOOKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sEspimonDigivolveTable[] = {
    // {42, 21, 25, 29, 33, 37, SPECIES_HOVERESPIMON},
    {42, 21, 25, 29, 33, 45, SPECIES_BLACKGATOMON_UVER},
    // {42, 21, 25, 29, 33, 37, SPECIES_REPPAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAgumon_fake_expertDigivolveTable[] = {
    // {58, 17, 17, 37, 33, 21, SPECIES_GREYMON_BLUE},
    {58, 25, 17, 37, 33, 21, SPECIES_GREYMON},
    {58, 22, 22, 37, 33, 21, SPECIES_GEOGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFalcomonDigivolveTable[] = {
    {50, 29, 25, 29, 25, 25, SPECIES_DIATRYMON},
    {50, 29, 25, 29, 25, 33, SPECIES_NINJAMON},
    {50, 37, 25, 29, 25, 25, SPECIES_OGREMON},
    {50, 29, 30, 29, 25, 31, SPECIES_STINGMON},
    {50, 34, 25, 29, 28, 28, SPECIES_EXVEEMON},
    {50, 35, 25, 34, 25, 25, SPECIES_TYRANNOMON},
    {44, 25, 22, 25, 22, 22, SPECIES_NUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFalcomon_06DigivolveTable[] = {
    // {50, 29, 25, 31, 25, 25, SPECIES_PECKMON},
    // {50, 29, 25, 31, 25, 25, SPECIES_KOGAMON},
    {50, 29, 25, 31, 25, 33, SPECIES_STARMON},
    // {50, 29, 25, 31, 25, 25, SPECIES_XIQUEMON},
    {50, 29, 25, 36, 25, 31, SPECIES_BIRDRAMON},
    // {50, 29, 25, 31, 25, 25, SPECIES_GOLDNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFanbeemonDigivolveTable[] = {
    // {46, 25, 25, 35, 23, 23, SPECIES_WASPMON},
    // {46, 25, 25, 35, 23, 23, SPECIES_FORGEBEEMON},
    {46, 25, 25, 35, 31, 23, SPECIES_DOKUGUMON},
    {46, 33, 25, 35, 23, 23, SPECIES_KUWAGAMON},
    {46, 25, 25, 43, 23, 23, SPECIES_FLYMON},
    {49, 31, 28, 35, 23, 23, SPECIES_TOGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlamemonDigivolveTable[] = {
    {50, 29, 17, 29, 37, 29, SPECIES_AGUNIMON},
    {58, 29, 17, 29, 37, 29, SPECIES_FLARERIZAMON},
    {50, 29, 17, 37, 37, 29, SPECIES_MERAMON},
    {50, 29, 17, 35, 37, 34, SPECIES_AIRDRAMON},
    // {50, 29, 17, 29, 37, 29, SPECIES_STRIKEDRAMON},
    {55, 29, 17, 29, 42, 29, SPECIES_VEEDRAMON},
    {50, 29, 17, 29, 45, 29, SPECIES_EXVEEMON_VIRUS},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFloramonDigivolveTable[] = {
    {54, 21, 25, 33, 37, 21, SPECIES_KIWIMON},
    {54, 21, 30, 33, 42, 21, SPECIES_VEGIEMON},
    {62, 21, 25, 33, 37, 21, SPECIES_RAREMON},
    {54, 21, 25, 33, 45, 21, SPECIES_REDVEGIEMON},
    {54, 21, 30, 38, 37, 21, SPECIES_AKATORIMON},
    // {54, 21, 25, 33, 37, 21, SPECIES_STINGMON_BLACK},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGabumonDigivolveTable[] = {
    {54, 29, 27, 29, 33, 23, SPECIES_GARURUMON},
    // {54, 29, 27, 29, 33, 23, SPECIES_KAUSGAMMAMON},
    {62, 29, 27, 29, 33, 23, SPECIES_DORULUMON},
    // {54, 29, 27, 29, 33, 23, SPECIES_TIALUDOMON},
    {54, 34, 27, 29, 33, 28, SPECIES_JUNGLEMOJYAMON},
    {60, 29, 27, 29, 38, 23, SPECIES_DARKLIZARDMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGabumon_xDigivolveTable[] = {
    {56, 29, 27, 33, 37, 21, SPECIES_GARURUMON_X},
    {56, 29, 27, 33, 37, 29, SPECIES_GATOMON_X},
    // {56, 29, 27, 33, 37, 21, SPECIES_LEOMON_X},
    {56, 29, 27, 41, 37, 21, SPECIES_DOBERMON_X},
    // {56, 29, 27, 33, 37, 21, SPECIES_NEFERTIMON_X},
    // {56, 29, 27, 33, 37, 21, SPECIES_RHINOMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGammamonDigivolveTable[] = {
    {46, 33, 25, 33, 29, 25, SPECIES_BETELGAMMAMON},
    // {46, 33, 25, 25, 29, 25, SPECIES_KAUSGAMMAMON},
    // {46, 33, 25, 25, 29, 25, SPECIES_WEZENGAMMAMON},
    // {46, 33, 25, 25, 29, 25, SPECIES_GULUSGAMMAMON},
    // {46, 33, 25, 25, 29, 25, SPECIES_SEALSDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGaomonDigivolveTable[] = {
    {50, 35, 29, 19, 27, 29, SPECIES_GAOGAMON},
    {50, 43, 29, 19, 27, 29, SPECIES_TOGEMON},
    // {50, 35, 29, 19, 27, 29, SPECIES_TURUIEMON},
    // {50, 35, 29, 19, 27, 29, SPECIES_KNIGHTCHESSMON_BLACK},
    {58, 35, 29, 19, 27, 29, SPECIES_BABOONGAMON},
    {50, 35, 29, 19, 27, 37, SPECIES_GURURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGaossmonDigivolveTable[] = {
    {70, 27, 17, 23, 25, 13, SPECIES_DARKTYRANNOMON},
    {70, 35, 17, 23, 25, 13, SPECIES_TYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGazimonDigivolveTable[] = {
    // {42, 29, 17, 25, 29, 39, SPECIES_MADLEOMON},
    // {42, 29, 17, 25, 29, 39, SPECIES_WENDIGOMON},
    {42, 37, 17, 25, 29, 39, SPECIES_DEVIDRAMON},
    {47, 35, 17, 25, 29, 39, SPECIES_CYCLONEMON},
    {42, 34, 17, 25, 29, 44, SPECIES_BAOHUCKMON},
    {50, 29, 17, 25, 29, 39, SPECIES_BLIMPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGazimon_xDigivolveTable[] = {
    {46, 31, 21, 25, 33, 37, SPECIES_DOBERMON_X},
    {46, 31, 21, 25, 33, 45, SPECIES_GARURUMON_X},
    {46, 31, 21, 25, 38, 43, SPECIES_GATOMON_X},
    // {46, 31, 21, 25, 33, 37, SPECIES_MANTARAYMON_X},
    {46, 31, 21, 28, 36, 40, SPECIES_DORUGAMON},
    // {46, 31, 21, 25, 33, 37, SPECIES_GRIZZLYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGhostmonDigivolveTable[] = {
    {50, 17, 13, 37, 25, 35, SPECIES_BAKEMON},
    // {50, 17, 13, 37, 25, 35, SPECIES_WITCHMON},
    {50, 17, 13, 37, 25, 43, SPECIES_SABERDRAMON},
    {50, 17, 13, 45, 25, 35, SPECIES_WIZARDMON},
    {58, 17, 13, 37, 25, 35, SPECIES_FLARERIZAMON},
    {50, 22, 13, 42, 25, 35, SPECIES_DEVIMON},
    {50, 22, 13, 43, 25, 35, SPECIES_ARGOMON_CHAMPION},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGizamonDigivolveTable[] = {
    {62, 27, 25, 27, 25, 17, SPECIES_ARCHELOMON},
    {62, 27, 25, 27, 25, 25, SPECIES_SEADRAMON},
    {62, 27, 30, 27, 25, 22, SPECIES_COELAMON},
    // {62, 27, 25, 27, 25, 17, SPECIES_TOBIUMON},
    {62, 35, 25, 27, 25, 17, SPECIES_APEMON},
    // {62, 27, 25, 27, 25, 17, SPECIES_MEICOOMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sGizumonDigivolveTable[] = {
//     {42, 21, 25, 29, 33, 37, SPECIES_GIZUMON_AT},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sGoblimonDigivolveTable[] = {
    {62, 37, 29, 13, 13, 21, SPECIES_OGREMON},
    {70, 37, 29, 13, 13, 21, SPECIES_FUGAMON},
    {62, 37, 38, 13, 13, 21, SPECIES_GOLEMON},
    {68, 42, 29, 13, 13, 21, SPECIES_MINOTARUMON},
    {62, 37, 29, 13, 13, 29, SPECIES_STINGMON},
    {62, 45, 29, 13, 13, 21, SPECIES_NANIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGomamonDigivolveTable[] = {
    {62, 25, 21, 25, 29, 17, SPECIES_IKKAKUMON},
    // {62, 25, 21, 25, 29, 17, SPECIES_KUMAMON},
    {62, 25, 29, 25, 29, 17, SPECIES_MOJYAMON},
    {67, 25, 21, 25, 34, 17, SPECIES_FRIGIMON},
    // {62, 25, 21, 25, 29, 17, SPECIES_SUNFLOWMON},
    {62, 28, 27, 25, 32, 17, SPECIES_ANKYLOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGomamon_xDigivolveTable[] = {
    // {62, 29, 29, 27, 29, 13, SPECIES_GESOMON_X},
    // {62, 29, 29, 27, 29, 13, SPECIES_MANTARAYMON_X},
    // {62, 29, 29, 27, 29, 13, SPECIES_TYLOMON_X},
    {62, 37, 29, 27, 29, 13, SPECIES_ALLOMON_X},
    // {62, 29, 29, 27, 29, 13, SPECIES_GROWLMON_X},
    // {62, 29, 29, 27, 29, 13, SPECIES_KUWAGAMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGotsumonDigivolveTable[] = {
    {48, 35, 45, 13, 13, 21, SPECIES_ICEMON},
    {48, 35, 53, 13, 13, 21, SPECIES_GOLEMON},
    {48, 40, 51, 13, 13, 21, SPECIES_MONOCHROMON},
    {56, 35, 45, 13, 13, 21, SPECIES_MINOTARUMON},
    {48, 35, 45, 13, 21, 21, SPECIES_MUDFRIGIMON},
    // {48, 35, 45, 13, 13, 21, SPECIES_GOLDVEEDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGotsumon_xDigivolveTable[] = {
    // {52, 39, 49, 13, 19, 13, SPECIES_RHINOMON_X},
    {52, 39, 49, 13, 19, 21, SPECIES_GARURUMON_X},
    // {52, 39, 49, 13, 19, 13, SPECIES_GREYMON_X},
    // {52, 39, 49, 13, 19, 13, SPECIES_STARMON_X},
    {52, 39, 57, 13, 19, 13, SPECIES_TORTOMON},
    {52, 39, 49, 13, 27, 13, SPECIES_CLOCKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGuilmonDigivolveTable[] = {
    {58, 33, 27, 29, 17, 25, SPECIES_GROWLMON},
    // {58, 33, 27, 29, 17, 25, SPECIES_VEEDRAMON_BLACK},
    {58, 38, 27, 29, 17, 30, SPECIES_ARRESTERDRAMON},
    {58, 33, 32, 34, 17, 25, SPECIES_TANKMON},
    {58, 33, 35, 29, 17, 25, SPECIES_MEKANORIMON},
    {58, 33, 27, 37, 17, 25, SPECIES_BALUCHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHagurumonDigivolveTable[] = {
    {56, 21, 37, 27, 29, 17, SPECIES_GUARDROMON},
    // {67, 25, 45, 32, 35, 20, SPECIES_GUARDROMON_GOLD},
    {64, 21, 37, 27, 29, 17, SPECIES_BLIMPMON},
    // {56, 21, 37, 27, 29, 17, SPECIES_MAILBIRDRAMON},
    // {56, 21, 37, 27, 29, 17, SPECIES_MACHMON},
    {56, 26, 42, 27, 29, 17, SPECIES_BALLISTAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHagurumon_xDigivolveTable[] = {
    // {56, 23, 41, 27, 33, 17, SPECIES_THUNDERBALLMON_X},
    // {56, 23, 41, 27, 33, 17, SPECIES_STARMON_X},
    // {56, 23, 41, 27, 33, 17, SPECIES_TRAILMON_BALL},
    // {56, 23, 41, 27, 33, 17, SPECIES_HOVERESPIMON},
    {56, 23, 41, 27, 41, 17, SPECIES_CLOCKMON},
    // {56, 23, 41, 27, 33, 17, SPECIES_MERCURYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHawkmonDigivolveTable[] = {
    {46, 35, 17, 35, 17, 37, SPECIES_AQUILAMON},
    {46, 40, 17, 35, 17, 42, SPECIES_BURAIMON},
    // {46, 35, 17, 35, 17, 37, SPECIES_JAZARDMON},
    {46, 35, 17, 35, 17, 45, SPECIES_BIRDRAMON},
    {46, 35, 17, 43, 17, 37, SPECIES_ANGEMON},
    // {46, 35, 17, 35, 17, 37, SPECIES_KAZEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHerissmonDigivolveTable[] = {
    {52, 27, 37, 25, 21, 29, SPECIES_FILMON},
    // {52, 27, 37, 25, 21, 29, SPECIES_LOOGARMON},
    {52, 27, 45, 25, 21, 29, SPECIES_DAMEMON_FUSION},
    // {52, 27, 37, 25, 21, 29, SPECIES_SANGLOUPMON},
    // {52, 27, 37, 25, 21, 29, SPECIES_NUMEMON_X},
    // {52, 27, 37, 25, 21, 29, SPECIES_TYRANNOMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHyokomonDigivolveTable[] = {
    {52, 31, 29, 19, 23, 27, SPECIES_BURAIMON},
    {52, 39, 29, 19, 23, 27, SPECIES_DINOHYUMON},
    // {52, 31, 29, 19, 23, 27, SPECIES_PECKMON},
    {52, 31, 29, 19, 23, 35, SPECIES_BIRDRAMON},
    {52, 31, 32, 22, 23, 33, SPECIES_KABUTERIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sImpmonDigivolveTable[] = {
    {46, 21, 21, 33, 33, 33, SPECIES_WIZARDMON},
    {46, 21, 21, 41, 33, 33, SPECIES_MERAMON},
    // {46, 21, 21, 33, 33, 33, SPECIES_PUNKMON},
    // {46, 21, 21, 33, 33, 33, SPECIES_LIANPUMON},
    {41, 21, 21, 39, 33, 33, SPECIES_BLACKGATOMON},
    {46, 21, 21, 33, 33, 41, SPECIES_FANGMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJazamonDigivolveTable[] = {
    // {50, 17, 37, 29, 25, 29, SPECIES_JAZARDMON},
    {50, 17, 37, 29, 25, 37, SPECIES_BIRDRAMON},
    // {50, 17, 37, 29, 25, 29, SPECIES_MACHMON},
    // {50, 17, 37, 29, 25, 29, SPECIES_KOMONDOMON},
    // {50, 17, 37, 29, 25, 29, SPECIES_OMEKAMON},
    {58, 17, 37, 29, 25, 29, SPECIES_RAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJellymonDigivolveTable[] = {
    {38, 17, 17, 35, 37, 35, SPECIES_TESLAJELLYMON},
    {43, 17, 17, 35, 42, 35, SPECIES_GESOMON},
    {38, 25, 17, 35, 37, 35, SPECIES_EBIDRAMON},
    {38, 17, 17, 43, 37, 35, SPECIES_DOLPHMON},
    // {38, 17, 17, 35, 37, 35, SPECIES_TOBIUMON},
    // {38, 17, 17, 35, 37, 35, SPECIES_KINKAKUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJunkmonDigivolveTable[] = {
    // {44, 19, 29, 21, 25, 37, SPECIES_KOMONDOMON},
    {50, 24, 29, 21, 25, 37, SPECIES_MINOTARUMON},
    {52, 19, 29, 21, 25, 37, SPECIES_RAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKeramonDigivolveTable[] = {
    {40, 17, 25, 33, 37, 29, SPECIES_CHRYSALIMON},
    {40, 17, 25, 41, 37, 29, SPECIES_SOULMON},
    // {40, 17, 25, 33, 37, 29, SPECIES_WENDIGOMON},
    // {40, 17, 25, 33, 37, 29, SPECIES_DUSKMON},
    {40, 22, 25, 33, 42, 29, SPECIES_BOMBERNANIMON},
    {47, 20, 30, 40, 45, 35, SPECIES_ARCADIAMON_CHAMPION},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sKeramon_xDigivolveTable[] = {
//     {100, 53, 71, 89, 107, 77, SPECIES_DIABOROMON_X},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sKodokugumonDigivolveTable[] = {
    {50, 25, 29, 29, 29, 17, SPECIES_DOKUGUMON},
    {58, 25, 29, 29, 29, 17, SPECIES_CHAMBLEMON},
    {44, 22, 25, 25, 25, 15, SPECIES_SHELLNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKokabuterimonDigivolveTable[] = {
    {48, 41, 35, 17, 17, 21, SPECIES_KABUTERIMON},
    {48, 49, 35, 17, 17, 21, SPECIES_BLADEKUWAGAMON},
    {48, 47, 40, 17, 17, 21, SPECIES_KUWAGAMON},
    {48, 47, 35, 17, 17, 26, SPECIES_APEMON},
    {48, 41, 35, 17, 17, 29, SPECIES_AQUILAMON},
    {48, 41, 35, 25, 17, 21, SPECIES_DEPUTYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKokuwamonDigivolveTable[] = {
    {50, 25, 33, 29, 21, 17, SPECIES_GUARDROMON},
    // {50, 25, 33, 29, 21, 17, SPECIES_WASPMON},
    {50, 25, 38, 34, 21, 17, SPECIES_TANKMON},
    {50, 33, 33, 29, 21, 17, SPECIES_BLADEKUWAGAMON},
    // {50, 25, 33, 29, 21, 17, SPECIES_HICOMMANDRAMON},
    {53, 28, 36, 29, 21, 17, SPECIES_BLACKGARGOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKokuwamon_xDigivolveTable[] = {
    {50, 29, 35, 29, 21, 21, SPECIES_ALLOMON_X},
    // {50, 29, 35, 29, 21, 21, SPECIES_GREYMON_X},
    // {50, 29, 35, 29, 21, 21, SPECIES_KUWAGAMON_X},
    // {50, 29, 35, 29, 21, 21, SPECIES_NUMEMON_X},
    // {50, 29, 35, 29, 21, 21, SPECIES_PTERAMON},
    {50, 37, 35, 29, 21, 21, SPECIES_FILMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKotemonDigivolveTable[] = {
    // {52, 31, 29, 19, 29, 25, SPECIES_GLADIMON},
    {52, 39, 29, 19, 29, 25, SPECIES_DINOHYUMON},
    {52, 31, 29, 19, 29, 33, SPECIES_MUSYAMON},
    {52, 36, 29, 19, 29, 31, SPECIES_STARMON},
    // {52, 31, 29, 19, 29, 25, SPECIES_SKULLKNIGHTMON},
    {52, 37, 34, 19, 29, 25, SPECIES_AXEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKudamonDigivolveTable[] = {
    {50, 25, 27, 27, 25, 27, SPECIES_BLADEKUWAGAMON},
    {58, 25, 27, 27, 25, 27, SPECIES_FLARERIZAMON},
    // {50, 25, 27, 27, 25, 27, SPECIES_REPPAMON},
    {44, 22, 23, 23, 22, 23, SPECIES_NUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKudamon_06DigivolveTable[] = {
    // {52, 25, 25, 27, 25, 27, SPECIES_REPPAMON},
    // {52, 25, 25, 27, 25, 27, SPECIES_GINRYUMON},
    {52, 25, 25, 35, 25, 27, SPECIES_AIRDRAMON},
    {52, 25, 25, 32, 30, 27, SPECIES_PIDMON},
    // {52, 25, 25, 27, 25, 27, SPECIES_LOBOMON},
    // {52, 25, 25, 27, 25, 27, SPECIES_GOLDNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLalamonDigivolveTable[] = {
    // {40, 15, 15, 35, 35, 35, SPECIES_SUNFLOWMON},
    {40, 15, 23, 35, 35, 35, SPECIES_WOODMON},
    {40, 23, 15, 35, 35, 35, SPECIES_TOGEMON},
    {40, 15, 15, 35, 43, 35, SPECIES_REDVEGIEMON},
    // {40, 15, 15, 35, 35, 35, SPECIES_TURUIEMON},
    // {40, 15, 15, 35, 35, 35, SPECIES_HUDIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLoogamonDigivolveTable[] = {
    // {48, 31, 27, 37, 37, 17, SPECIES_LOOGARMON},
    // {48, 31, 27, 37, 37, 17, SPECIES_SNATCHMON},
    {48, 31, 27, 37, 45, 17, SPECIES_BAKEMON},
    {48, 39, 27, 37, 37, 17, SPECIES_FILMON},
    {51, 31, 27, 40, 42, 17, SPECIES_DOKUGUMON},
    {48, 37, 27, 37, 37, 22, SPECIES_APEMON},
    {48, 37, 27, 42, 37, 17, SPECIES_TYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLopmonDigivolveTable[] = {
    // {50, 25, 25, 25, 25, 25, SPECIES_WENDIGOMON},
    // {50, 25, 25, 25, 25, 25, SPECIES_TURUIEMON},
    // {50, 25, 25, 25, 25, 25, SPECIES_LOPMON_WHITE},
    // {50, 25, 25, 25, 25, 25, SPECIES_KYUBIMON_SILVER},
    {50, 25, 25, 33, 25, 25, SPECIES_BLACKGATOMON},
    {55, 25, 25, 25, 30, 25, SPECIES_VEEDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLopmonxDigivolveTable[] = {
    // {50, 27, 25, 29, 31, 25, SPECIES_PEGASMON_X},
    {50, 27, 25, 29, 31, 33, SPECIES_GATOMON_X},
    // {50, 27, 25, 29, 31, 25, SPECIES_WIZARDMON_X},
    {53, 30, 28, 29, 31, 25, SPECIES_BLACKGARGOMON},
    // {50, 27, 25, 29, 31, 25, SPECIES_WENDIGOMON},
    // {50, 27, 25, 29, 31, 25, SPECIES_TURUIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLucemonDigivolveTable[] = {
    // {90, 53, 49, 53, 49, 45, SPECIES_LUCEMON_FALLDOWN_MODE},
    {50, 29, 27, 37, 27, 25, SPECIES_ANGEMON},
    {50, 34, 27, 34, 27, 25, SPECIES_DEVIMON},
    {50, 37, 27, 29, 27, 25, SPECIES_UNIMON},
    {50, 29, 27, 29, 27, 33, SPECIES_DARCMON},
    {50, 29, 32, 34, 27, 25, SPECIES_CHRYSALIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLudomonDigivolveTable[] = {
    // {54, 21, 47, 17, 35, 17, SPECIES_TIALUDOMON},
    // {54, 21, 47, 17, 35, 17, SPECIES_REPPAMON},
    {54, 21, 47, 17, 35, 25, SPECIES_BLACKGATOMON_UVER},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLunamonDigivolveTable[] = {
    // {58, 19, 23, 31, 29, 27, SPECIES_LEKISMON},
    {58, 19, 28, 31, 34, 27, SPECIES_ICEMON},
    {63, 19, 23, 31, 34, 27, SPECIES_FRIGIMON},
    {58, 24, 28, 31, 29, 27, SPECIES_HYOGAMON},
    {58, 19, 23, 31, 29, 35, SPECIES_GARURUMON},
    // {58, 19, 23, 31, 29, 27, SPECIES_SISTERMON_NOIR},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLuxmonDigivolveTable[] = {
    {54, 25, 21, 33, 29, 33, SPECIES_PIDMON},
    // {54, 25, 21, 33, 29, 33, SPECIES_XIQUEMON},
    {54, 25, 21, 33, 29, 41, SPECIES_BIRDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sModokibetamonDigivolveTable[] = {
    {46, 25, 31, 25, 31, 21, SPECIES_GESOMON},
    {46, 25, 31, 25, 39, 21, SPECIES_GEKOMON},
    {46, 25, 39, 25, 31, 21, SPECIES_SHELLMON},
    {46, 25, 36, 25, 36, 21, SPECIES_WEEDMON},
    {54, 25, 31, 25, 31, 21, SPECIES_NISEDRIMOGEMON},
    {46, 25, 31, 25, 31, 29, SPECIES_YANMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonitamonDigivolveTable[] = {
    // {50, 25, 25, 27, 25, 25, SPECIES_HI_VISION_MONITAMON},
    {50, 33, 25, 27, 25, 25, SPECIES_AXEMON},
    // {50, 25, 25, 27, 25, 25, SPECIES_SKULLKNIGHTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonmonDigivolveTable[] = {
    {52, 33, 29, 13, 25, 25, SPECIES_APEMON},
    {52, 41, 29, 13, 25, 25, SPECIES_GORILLAMON},
    {52, 33, 29, 13, 33, 25, SPECIES_MUDFRIGIMON},
    // {52, 33, 29, 13, 25, 25, SPECIES_KOGAMON},
    // {52, 33, 29, 13, 25, 25, SPECIES_KAUSGAMMAMON},
    // {52, 33, 29, 13, 25, 25, SPECIES_GRUMBLEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMorphomonDigivolveTable[] = {
    {50, 23, 23, 25, 25, 23, SPECIES_EOSMON_CHAMPION},
    // {50, 23, 23, 25, 25, 23, SPECIES_HUDIEMON},
    {50, 31, 23, 25, 25, 23, SPECIES_UNIMON},
    {58, 23, 23, 25, 25, 23, SPECIES_ROACHMON},
    // {50, 23, 23, 25, 25, 23, SPECIES_WASPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMuchomonDigivolveTable[] = {
    {50, 27, 27, 29, 27, 25, SPECIES_KOKATORIMON},
    {50, 35, 27, 29, 27, 25, SPECIES_DIATRYMON},
    // {50, 27, 27, 29, 27, 25, SPECIES_PECKMON},
    {58, 27, 27, 29, 27, 25, SPECIES_FUGAMON},
    {50, 27, 35, 29, 27, 25, SPECIES_GOLEMON},
    {56, 27, 27, 29, 32, 25, SPECIES_IKKAKUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMushroomonDigivolveTable[] = {
    {52, 27, 25, 25, 29, 27, SPECIES_CHAMBLEMON},
    {52, 27, 33, 25, 29, 27, SPECIES_WOODMON},
    // {52, 27, 25, 25, 29, 27, SPECIES_ARBORMON},
    // {52, 27, 25, 25, 29, 27, SPECIES_STINGMON_BLACK},
    {52, 35, 25, 25, 29, 27, SPECIES_NANIMON},
    {52, 27, 30, 25, 34, 27, SPECIES_VEGIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNeemonDigivolveTable[] = {
    {50, 23, 23, 27, 21, 21, SPECIES_DOGGYMON},
    {50, 23, 31, 27, 21, 21, SPECIES_ICEDEVIMON},
    // {50, 23, 23, 27, 21, 21, SPECIES_WITCHMON},
    {50, 31, 23, 27, 21, 21, SPECIES_TOGEMON},
    {50, 23, 23, 35, 21, 21, SPECIES_ANGEMON},
    {50, 23, 23, 27, 21, 29, SPECIES_STINGMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOtamamonDigivolveTable[] = {
    {50, 27, 25, 25, 29, 25, SPECIES_GEKOMON},
    // {50, 27, 25, 25, 29, 25, SPECIES_LANAMON},
    // {50, 27, 25, 25, 29, 25, SPECIES_GWAPPAMON},
    {58, 27, 25, 25, 29, 25, SPECIES_WHAMON},
    {50, 27, 30, 25, 29, 30, SPECIES_COELAMON},
    {50, 27, 33, 25, 29, 25, SPECIES_TORTOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOtamamon_redDigivolveTable[] = {
    {52, 29, 25, 25, 29, 25, SPECIES_OCTOMON},
    // {52, 29, 25, 25, 29, 25, SPECIES_HOOKMON},
    {52, 29, 33, 25, 29, 25, SPECIES_SHELLMON},
    {52, 29, 25, 25, 29, 33, SPECIES_SEADRAMON},
    // {52, 29, 25, 25, 29, 25, SPECIES_LANAMON},
    {52, 34, 31, 25, 29, 25, SPECIES_MOJYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOtamamon_xDigivolveTable[] = {
    // {54, 27, 27, 23, 31, 25, SPECIES_SEADRAMON_X},
    // {54, 27, 27, 23, 31, 25, SPECIES_GESOMON_X},
    // {54, 27, 27, 23, 31, 25, SPECIES_MANTARAYMON_X},
    // {54, 27, 27, 23, 31, 25, SPECIES_NUMEMON_X},
    {54, 35, 27, 23, 31, 25, SPECIES_ALLOMON_X},
    // {54, 27, 27, 23, 31, 25, SPECIES_GLADIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPalmonDigivolveTable[] = {
    {52, 27, 27, 25, 29, 29, SPECIES_TOGEMON},
    // {52, 27, 27, 25, 29, 29, SPECIES_SUNFLOWMON},
    // {52, 27, 27, 25, 29, 29, SPECIES_PARASAURMON},
    {52, 27, 35, 25, 29, 29, SPECIES_MORISHELLMON},
    {52, 35, 27, 25, 29, 29, SPECIES_SNIMON},
    {52, 32, 27, 25, 29, 34, SPECIES_JUNGLEMOJYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPalmon_xDigivolveTable[] = {
    // {54, 27, 27, 25, 31, 27, SPECIES_TOGEMON_X},
    {54, 27, 27, 25, 31, 35, SPECIES_GATOMON_X},
    // {54, 27, 27, 25, 31, 27, SPECIES_PTERAMON_X},
    {54, 27, 27, 25, 36, 33, SPECIES_KIWIMON},
    // {54, 27, 27, 25, 31, 27, SPECIES_WITCHMON},
    {54, 27, 35, 25, 31, 27, SPECIES_WOODMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPatamonDigivolveTable[] = {
    {54, 23, 25, 25, 25, 27, SPECIES_ANGEMON},
    // {54, 23, 25, 25, 25, 27, SPECIES_KUMAMON},
    // {54, 23, 25, 25, 25, 27, SPECIES_KYUBIMON},
    // {54, 23, 25, 25, 25, 27, SPECIES_GROWLMON_ORANGE},
    // {54, 23, 25, 25, 25, 27, SPECIES_MIMICMON},
    {62, 23, 25, 25, 25, 27, SPECIES_DRIMOGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPawnchessmon_blackDigivolveTable[] = {
    // {48, 23, 25, 21, 21, 23, SPECIES_KNIGHTCHESSMON_BLACK},
    // {48, 23, 25, 21, 21, 23, SPECIES_HOOKMON},
    {56, 23, 25, 21, 21, 23, SPECIES_GUARDROMON},
    {48, 23, 25, 29, 21, 23, SPECIES_DEPUTYMON},
    {48, 23, 25, 21, 21, 31, SPECIES_STARMON},
    {48, 23, 33, 21, 21, 23, SPECIES_PLATINUMSUKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPawnchessmon_whiteDigivolveTable[] = {
    // {48, 23, 25, 21, 21, 23, SPECIES_KNIGHTCHESSMON_WHITE},
    // {48, 23, 25, 21, 21, 23, SPECIES_GOLDVEEDRAMON},
    {56, 23, 25, 21, 21, 23, SPECIES_GUARDROMON},
    {48, 23, 25, 27, 26, 23, SPECIES_ANGEMON},
    {48, 23, 25, 29, 21, 23, SPECIES_DEPUTYMON},
    {48, 23, 33, 21, 21, 23, SPECIES_ANKYLOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPenguinmonDigivolveTable[] = {
    {48, 27, 25, 31, 27, 27, SPECIES_FRIGIMON},
    {48, 27, 25, 39, 27, 27, SPECIES_DOLPHMON},
    {56, 27, 25, 31, 27, 27, SPECIES_IKKAKUMON},
    {48, 27, 33, 31, 27, 27, SPECIES_MOJYAMON},
    {51, 27, 28, 35, 30, 27, SPECIES_OCTOMON},
    // {48, 27, 25, 31, 27, 27, SPECIES_PECKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPetitmamonDigivolveTable[] = {
    {52, 23, 23, 25, 29, 25, SPECIES_DEVIMON},
    {52, 23, 23, 25, 29, 33, SPECIES_NINJAMON},
    {60, 23, 23, 25, 29, 25, SPECIES_BUCCHIEMON_RED},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPhascomonDigivolveTable[] = {
    // {54, 27, 25, 21, 29, 19, SPECIES_PORCUPAMON},
    // {54, 27, 25, 21, 29, 19, SPECIES_TROOPMON},
    // {54, 27, 25, 21, 29, 19, SPECIES_SANGLOUPMON},
    {54, 27, 25, 21, 29, 27, SPECIES_VILEMON},
    // {54, 27, 25, 21, 29, 19, SPECIES_WENDIGOMON},
    // {54, 27, 25, 21, 29, 19, SPECIES_MADLEOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPomumonDigivolveTable[] = {
    // {50, 27, 25, 25, 25, 25, SPECIES_PARASAURMON},
    // {50, 27, 25, 25, 25, 25, SPECIES_ARBORMON},
    {58, 27, 25, 25, 25, 25, SPECIES_KOKATORIMON},
    {50, 27, 30, 25, 30, 25, SPECIES_VEGIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPulsemonDigivolveTable[] = {
    {56, 27, 25, 27, 27, 27, SPECIES_BULKMON},
    {56, 27, 25, 27, 27, 35, SPECIES_EXERMON},
    // {56, 27, 25, 27, 27, 27, SPECIES_RUNNERMON},
    // {56, 27, 25, 27, 27, 27, SPECIES_NAMAKEMON},
    {56, 27, 25, 35, 27, 27, SPECIES_THUNDERBALLMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRenamonDigivolveTable[] = {
    // {50, 29, 27, 27, 29, 27, SPECIES_KYUBIMON},
    // {50, 29, 27, 27, 29, 27, SPECIES_TENKOMON},
    // {50, 29, 27, 27, 29, 27, SPECIES_YOUKOMON},
    // {50, 29, 27, 27, 29, 27, SPECIES_MEICOOMON},
    // {50, 29, 27, 27, 29, 27, SPECIES_TURUIEMON},
    {44, 25, 23, 23, 25, 23, SPECIES_GEREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRyudamonDigivolveTable[] = {
    // {52, 25, 29, 31, 25, 27, SPECIES_GINRYUMON},
    {52, 25, 29, 39, 25, 27, SPECIES_DEXDORUGAMON},
    // {52, 25, 29, 31, 25, 27, SPECIES_RAPTORDRAMON},
    {52, 25, 29, 31, 25, 35, SPECIES_MUSYAMON},
    {52, 25, 37, 31, 25, 27, SPECIES_MONOCHROMON},
    // {52, 25, 29, 31, 25, 27, SPECIES_TOBUCATMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShamanmonDigivolveTable[] = {
    // {52, 27, 25, 27, 29, 25, SPECIES_WITCHMON},
    {52, 35, 25, 27, 29, 25, SPECIES_OGREMON},
    // {52, 27, 25, 27, 29, 25, SPECIES_KOGAMON},
    // {52, 27, 25, 27, 29, 25, SPECIES_YOUKOMON},
    // {52, 27, 25, 27, 29, 25, SPECIES_SORCERMON},
    {52, 27, 25, 27, 37, 25, SPECIES_BAKEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnowagumonDigivolveTable[] = {
    {52, 31, 25, 25, 31, 25, SPECIES_FRIGIMON},
    {52, 31, 30, 25, 36, 25, SPECIES_ICEMON},
    // {52, 31, 25, 25, 31, 25, SPECIES_KUMAMON},
    {52, 36, 30, 25, 31, 25, SPECIES_HYOGAMON},
    {52, 31, 33, 25, 31, 25, SPECIES_MOJYAMON},
    {52, 31, 25, 25, 31, 33, SPECIES_GURURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnowagumon_06DigivolveTable[] = {
    {52, 33, 25, 27, 29, 23, SPECIES_ICEDEVIMON},
    {57, 33, 25, 27, 34, 23, SPECIES_FRIGIMON},
    {52, 33, 25, 27, 29, 31, SPECIES_SEADRAMON},
    // {52, 33, 25, 27, 29, 23, SPECIES_GWAPPAMON},
    // {52, 33, 25, 27, 29, 23, SPECIES_GROWLMON_ORANGE},
    {52, 33, 25, 27, 37, 23, SPECIES_BAKEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnowgoblimonDigivolveTable[] = {
    {52, 33, 37, 21, 17, 25, SPECIES_HYOGAMON},
    {52, 33, 45, 21, 17, 25, SPECIES_ICEDEVIMON},
    // {52, 33, 37, 21, 17, 25, SPECIES_KYUBIMON_SILVER},
    {60, 33, 37, 21, 17, 25, SPECIES_IKKAKUMON},
    {52, 41, 37, 21, 17, 25, SPECIES_TUSKMON},
    {45, 28, 32, 18, 15, 22, SPECIES_SUKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSolarmonDigivolveTable[] = {
    // {50, 27, 25, 23, 31, 25, SPECIES_GUARDROMON_GOLD},
    {50, 27, 25, 23, 39, 25, SPECIES_CLOCKMON_FUSION},
    {58, 27, 25, 23, 31, 25, SPECIES_BLIMPMON},
    // {50, 27, 25, 23, 31, 25, SPECIES_TRAILMON_BALL},
    {54, 30, 28, 26, 31, 25, SPECIES_FLARERIZAMON},
    {50, 27, 33, 23, 31, 25, SPECIES_GOLEMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sSoundbirdmonDigivolveTable[] = {
//     // {124, 59, 59, 77, 89, 59, SPECIES_GHOULMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sSparrowmonDigivolveTable[] = {
//     //{52, 25, 27, 35, 27, 25, SPECIES_RAPTORSPARROWMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sStarmon_2010DigivolveTable[] = {
    // {50, 27, 25, 27, 27, 27, SPECIES_SHOOTINGSTARMON},
    {50, 27, 25, 27, 27, 35, SPECIES_STARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sStrabimonDigivolveTable[] = {
    // {50, 27, 27, 27, 25, 27, SPECIES_LOBOMON},
    // {50, 27, 27, 27, 25, 27, SPECIES_GRIZZLYMON},
    {50, 27, 27, 35, 25, 27, SPECIES_BLACKGARURUMON},
    {50, 27, 27, 33, 30, 27, SPECIES_DOBERMON},
    // {50, 27, 27, 27, 25, 27, SPECIES_FANGMON},
    {50, 35, 27, 27, 25, 27, SPECIES_GARGOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSunarizamonDigivolveTable[] = {
    // {52, 27, 29, 25, 25, 27, SPECIES_LANDRAMON},
    {52, 27, 37, 25, 25, 27, SPECIES_TORTOMON},
    {52, 32, 35, 25, 25, 27, SPECIES_GOLEMON},
    {60, 27, 29, 25, 25, 27, SPECIES_BABOONGAMON},
    {52, 35, 29, 25, 25, 27, SPECIES_TOGEMON},
    {52, 33, 29, 30, 25, 27, SPECIES_DARKTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSwimmonDigivolveTable[] = {
    // {50, 27, 27, 29, 27, 25, SPECIES_TOBIUMON},
    {50, 27, 32, 29, 27, 30, SPECIES_COELAMON},
    {58, 27, 27, 29, 27, 25, SPECIES_WHAMON},
    {50, 27, 27, 29, 27, 33, SPECIES_NINJAMON},
    {50, 35, 27, 29, 27, 25, SPECIES_TYRANNOMON},
    {44, 23, 23, 25, 23, 22, SPECIES_SHELLNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSyakomonDigivolveTable[] = {
    {50, 25, 33, 25, 27, 33, SPECIES_SHELLMON},
    {50, 25, 33, 33, 27, 33, SPECIES_OCTOMON},
    // {50, 25, 33, 25, 27, 33, SPECIES_HOOKMON},
    {50, 25, 33, 30, 30, 36, SPECIES_DOLPHMON},
    {50, 33, 33, 25, 27, 33, SPECIES_EBIDRAMON},
    {50, 25, 33, 25, 35, 33, SPECIES_GEKOMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sSyakomon_xDigivolveTable[] = {
//     // {48, 29, 31, 27, 27, 31, SPECIES_SEADRAMON_X},
//     // {48, 29, 31, 27, 27, 31, SPECIES_TYLOMON_X},
//     // {48, 29, 31, 27, 27, 31, SPECIES_GROWLMON_X},
//     // {48, 29, 31, 27, 27, 31, SPECIES_WIZARDMON_X},
//     // {48, 29, 31, 27, 27, 31, SPECIES_LANAMON},
//     // {48, 29, 31, 27, 27, 31, SPECIES_MONOCHROMON_X},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sTapirmonDigivolveTable[] = {
    {52, 25, 25, 27, 29, 29, SPECIES_MONOCHROMON},
    // {52, 25, 25, 27, 29, 29, SPECIES_KYUBIMON},
    {52, 25, 25, 35, 29, 29, SPECIES_ANGEMON},
    {52, 25, 25, 27, 29, 37, SPECIES_DARCMON},
    {52, 33, 25, 27, 29, 29, SPECIES_SHIMAUNIMON},
    // {52, 25, 25, 27, 29, 29, SPECIES_LOWEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTentomonDigivolveTable[] = {
    {52, 27, 25, 27, 29, 25, SPECIES_KABUTERIMON},
    {52, 35, 25, 27, 29, 25, SPECIES_KUWAGAMON},
    {52, 33, 25, 27, 29, 30, SPECIES_BLADEKUWAGAMON},
    {52, 27, 25, 27, 37, 25, SPECIES_DOKUGUMON},
    {52, 27, 25, 27, 29, 33, SPECIES_YANMAMON},
    {52, 27, 25, 32, 35, 25, SPECIES_REDVEGIEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTerriermonDigivolveTable[] = {
    {52, 27, 27, 25, 27, 25, SPECIES_GARGOMON},
    // {52, 27, 27, 25, 27, 25, SPECIES_FANGMON},
    {52, 35, 27, 25, 27, 25, SPECIES_UNIMON},
    // {52, 27, 27, 25, 27, 25, SPECIES_SEASARMON},
    // {52, 27, 27, 25, 27, 25, SPECIES_SEALSDRAMON},
    {57, 33, 27, 25, 27, 25, SPECIES_GORILLAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTerriermon_assistantDigivolveTable[] = {
    // {46, 23, 27, 33, 31, 21, SPECIES_TURUIEMON},
    {46, 31, 27, 33, 31, 21, SPECIES_GARGOMON},
    // {46, 23, 27, 33, 31, 21, SPECIES_WENDIGOMON},
    {49, 26, 30, 33, 31, 21, SPECIES_BLACKGARGOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTerriermon_xDigivolveTable[] = {
    // {52, 25, 25, 27, 31, 25, SPECIES_SEASARMON_X},
    // {52, 25, 25, 27, 31, 25, SPECIES_TOGEMON_X},
    // {52, 25, 25, 27, 31, 25, SPECIES_MERAMON_X},
    {52, 33, 25, 27, 31, 25, SPECIES_GARGOMON},
    // {52, 25, 25, 27, 31, 25, SPECIES_TURUIEMON},
    {52, 25, 25, 30, 34, 28, SPECIES_DORUGAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTinkermonDigivolveTable[] = {
    // {48, 25, 29, 27, 27, 25, SPECIES_KAZEMON},
    // {48, 25, 29, 27, 27, 25, SPECIES_PETERMON},
    {48, 25, 34, 27, 32, 25, SPECIES_WEEDMON},
    {51, 25, 33, 27, 31, 25, SPECIES_VEGIEMON},
    // {48, 25, 29, 27, 27, 25, SPECIES_PARASAURMON},
    {56, 25, 29, 27, 27, 25, SPECIES_KOKATORIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sToyagumonDigivolveTable[] = {
    // {52, 27, 27, 25, 25, 25, SPECIES_OMEKAMON},
    {52, 27, 27, 25, 33, 25, SPECIES_CLOCKMON_FUSION},
    {52, 27, 27, 33, 25, 25, SPECIES_DEPUTYMON},
    {52, 27, 35, 25, 25, 25, SPECIES_MEKANORIMON},
    {60, 27, 27, 25, 25, 25, SPECIES_LEOMON},
    {45, 23, 23, 22, 22, 22, SPECIES_NUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTsukaimonDigivolveTable[] = {
    {50, 27, 27, 25, 25, 25, SPECIES_DEVIMON},
    {50, 35, 27, 25, 25, 25, SPECIES_DEVIDRAMON},
    // {50, 27, 27, 25, 25, 25, SPECIES_WITCHMON},
    {50, 27, 27, 33, 25, 25, SPECIES_BLACKGATOMON},
    {50, 27, 27, 25, 33, 25, SPECIES_BAKEMON},
    {50, 27, 27, 31, 30, 25, SPECIES_SOULMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVeemonDigivolveTable[] = {
    {52, 29, 25, 25, 25, 25, SPECIES_EXVEEMON},
    {57, 29, 25, 25, 30, 25, SPECIES_VEEDRAMON},
    // {52, 29, 25, 25, 25, 25, SPECIES_STRIKEDRAMON},
    {52, 29, 25, 33, 25, 25, SPECIES_MERAMON},
    {60, 29, 25, 25, 25, 25, SPECIES_MINOTARUMON},
    // {52, 29, 25, 25, 25, 25, SPECIES_LOBOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVemmonDigivolveTable[] = {
    // {50, 29, 29, 27, 25, 27, SPECIES_SNATCHMON},
    {50, 29, 37, 27, 25, 27, SPECIES_DAMEMON_FUSION},
    {50, 37, 29, 27, 25, 27, SPECIES_TYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVorvomonDigivolveTable[] = {
    // {54, 27, 27, 25, 29, 25, SPECIES_LAVORVOMON},
    {54, 27, 27, 33, 29, 25, SPECIES_MERAMON},
    {54, 27, 27, 25, 29, 33, SPECIES_BIRDRAMON},
    {54, 35, 27, 25, 29, 25, SPECIES_TYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMinidekachimonDigivolveTable[] = {
    {48, 23, 23, 27, 27, 27, SPECIES_ATAMADEKACHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWormmonDigivolveTable[] = {
    {50, 23, 23, 21, 25, 23, SPECIES_STINGMON},
    // {50, 23, 23, 21, 25, 23, SPECIES_HUDIEMON},
    {50, 31, 23, 21, 25, 23, SPECIES_SNIMON},
    {50, 23, 23, 21, 25, 31, SPECIES_SANDYANMAMON},
    // {50, 23, 23, 21, 25, 23, SPECIES_BEETLEMON},
    {44, 20, 20, 18, 22, 20, SPECIES_GEREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZenimonDigivolveTable[] = {
    {54, 21, 31, 25, 19, 27, SPECIES_GANEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGuilmon_xDigivolveTable[] = {
    // {58, 33, 31, 33, 19, 25, SPECIES_GROWLMON_X},
    // {58, 33, 31, 33, 19, 25, SPECIES_MONOCHROMON_X},
    {58, 41, 31, 33, 19, 25, SPECIES_ALLOMON_X},
    {58, 33, 31, 41, 19, 25, SPECIES_DEXDORUGAMON},
    // {58, 33, 31, 33, 19, 25, SPECIES_VEEDRAMON_BLACK},
    {58, 33, 31, 39, 24, 25, SPECIES_MERAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLiollmonDigivolveTable[] = {
    // {54, 33, 29, 17, 17, 33, SPECIES_LIAMON},
    // {54, 33, 29, 17, 17, 33, SPECIES_MADLEOMON},
    {62, 33, 29, 17, 17, 33, SPECIES_LEOMON},
    // {54, 33, 29, 17, 17, 33, SPECIES_LOWEEMON},
    // {54, 33, 29, 17, 17, 33, SPECIES_SEALSDRAMON},
    {54, 33, 29, 17, 17, 41, SPECIES_CENTARUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTinpetDigivolveTable[] = {
    {59, 28, 24, 30, 20, 28, SPECIES_METABEE},
    {58, 32, 23, 34, 19, 27, SPECIES_ROKUSHO},
    {58, 35, 23, 29, 19, 27, SPECIES_GREYMON},
    {58, 27, 23, 29, 19, 35, SPECIES_ROKUSHO},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKamemonDigivolveTable[] = {
    // {54, 21, 35, 21, 35, 17, SPECIES_GWAPPAMON},
    {54, 29, 35, 21, 35, 17, SPECIES_DINOHYUMON},
    {54, 21, 43, 21, 35, 17, SPECIES_SHELLMON},
    {54, 21, 41, 21, 40, 17, SPECIES_TORTOMON},
    {62, 21, 35, 21, 35, 17, SPECIES_WHAMON},
    {47, 18, 30, 18, 30, 15, SPECIES_SHELLNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sImpmon_xDigivolveTable[] = {
    // {46, 21, 21, 39, 35, 33, SPECIES_OGREMON_X},
    // {46, 21, 21, 39, 35, 33, SPECIES_SEADRAMON_X},
    {46, 29, 21, 39, 35, 33, SPECIES_ALLOMON_X},
    // {46, 21, 21, 39, 35, 33, SPECIES_NUMEMON_X},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHackmonDigivolveTable[] = {
    {46, 35, 25, 27, 29, 29, SPECIES_BAOHUCKMON},
    // {46, 35, 25, 27, 29, 29, SPECIES_TARGETMON},
    {54, 35, 25, 27, 29, 29, SPECIES_LEOMON},
    {46, 40, 25, 27, 29, 34, SPECIES_ARRESTERDRAMON},
    // {46, 35, 25, 27, 29, 29, SPECIES_REDVEEDRAMON},
    {46, 40, 25, 27, 34, 29, SPECIES_BOMBERNANIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGumdramonDigivolveTable[] = {
    {52, 29, 27, 27, 25, 27, SPECIES_ARRESTERDRAMON},
    {52, 34, 27, 27, 25, 32, SPECIES_BAOHUCKMON},
    // {52, 29, 27, 27, 25, 27, SPECIES_TURUIEMON},
    {52, 29, 27, 27, 25, 35, SPECIES_GATOMON},
    {57, 29, 27, 27, 30, 27, SPECIES_VEEDRAMON},
    {45, 25, 23, 23, 22, 23, SPECIES_SUKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZubamonDigivolveTable[] = {
    // {50, 31, 27, 27, 25, 27, SPECIES_ZUBAEAGERMON},
    {50, 36, 27, 27, 25, 32, SPECIES_BAOHUCKMON},
    {50, 31, 27, 27, 25, 35, SPECIES_MUSYAMON},
    {50, 31, 32, 32, 25, 27, SPECIES_TANKMON},
    {50, 35, 30, 27, 25, 31, SPECIES_BURAIMON},
    // {50, 31, 27, 27, 25, 27, SPECIES_TARGETMON},
    DIGIVOLUTION_END,
};