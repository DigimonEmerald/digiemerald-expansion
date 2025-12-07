// Digivolution data structure
// Fields: HPReq, atkReq, defReq, spatkReq, spdefReq, speedReq, target species
struct Digivolution
{
    u16 HPReq;
    u16 atkReq;
    u16 defReq;
    u16 spatkReq;
    u16 spdefReq;
    u16 speedReq;
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
    // {52, 31, 25, 31, 25, 25, SPECIES_GREYMON_2010},
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
    {50, 33, 23, 27, 20, 28, SPECIES_FANGMON},
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
    {58, 36, 25, 31, 21, 21, SPECIES_GARURUMON_BLACK},
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
    {50, 27, 29, 31, 33, 27, SPECIES_GARURUMON_BLACK},
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
    {50, 25, 21, 37, 21, 35, SPECIES_GARURUMON_BLACK},
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
    {52, 37, 34, 19, 29, 25, SPECIES_DEADLYAXEMON},
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
    {50, 33, 25, 27, 25, 25, SPECIES_DEADLYAXEMON},
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
    {50, 27, 27, 35, 25, 27, SPECIES_GARURUMON_BLACK},
    {50, 27, 27, 33, 30, 27, SPECIES_DOBERMON},
    {50, 27, 27, 27, 25, 35, SPECIES_FANGMON},
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
    {52, 27, 27, 25, 27, 33, SPECIES_FANGMON},
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

// static const struct Digivolution sAegiomonDigivolveTable[] = {
//     // {102, 61, 53, 53, 61, 57, SPECIES_AEGIOCHUSMON},
//     // {102, 61, 53, 53, 61, 57, SPECIES_AEGIOCHUSMON_BLUE},
//     // {102, 61, 53, 53, 61, 57, SPECIES_AEGIOCHUSMON_DARK},
//     // {102, 61, 53, 53, 61, 57, SPECIES_AEGIOCHUSMON_GREEN},
//     // {102, 61, 53, 53, 61, 57, SPECIES_AEGIOCHUSMON_HOLY},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sBiostegomonDigivolveTable[] = {
    {160, 95, 125, 77, 95, 83, SPECIES_BIOSPINOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAgunimonDigivolveTable[] = {
    // {102, 81, 53, 65, 65, 57, SPECIES_BURNINGGREYMON},
    {102, 81, 53, 82, 65, 57, SPECIES_SKULLMERAMON},
    // {102, 81, 53, 65, 65, 57, SPECIES_RIZEGREYMON},
    // {102, 81, 53, 65, 65, 57, SPECIES_MATADORMON},
    {102, 81, 70, 65, 65, 57, SPECIES_METALTYRANNOMON},
    // {102, 81, 53, 65, 65, 57, SPECIES_DARKSUPERSTARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAirdramonDigivolveTable[] = {
    {98, 69, 49, 81, 57, 77, SPECIES_MEGADRAMON},
    {98, 86, 49, 81, 57, 77, SPECIES_METALGREYMON_VIRUS},
    {98, 81, 49, 81, 69, 77, SPECIES_KIMERAMON},
    // {98, 69, 49, 81, 57, 77, SPECIES_KARATENMON},
    // {98, 69, 49, 81, 57, 77, SPECIES_SINDURAMON},
    // {98, 69, 49, 81, 57, 77, SPECIES_WINGDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAkatorimonDigivolveTable[] = {
    {110, 61, 69, 69, 69, 45, SPECIES_PARROTMON},
    {110, 69, 69, 77, 77, 45, SPECIES_GARUDAMON},
    {110, 61, 69, 69, 69, 62, SPECIES_GIGADRAMON},
    // {110, 61, 69, 69, 69, 45, SPECIES_HIPPOGRYPHONMON},
    // {110, 61, 69, 69, 69, 45, SPECIES_SINDURAMON},
    {110, 61, 69, 86, 69, 45, SPECIES_PIXIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAllomonDigivolveTable[] = {
    {114, 89, 69, 53, 53, 53, SPECIES_AEROVEEDRAMON},
    {114, 89, 69, 70, 53, 53, SPECIES_OROCHIMON},
    // {114, 89, 69, 53, 53, 53, SPECIES_HISYARYUMON},
    {114, 106, 69, 53, 53, 53, SPECIES_WARGROWLMON},
    // {114, 89, 69, 53, 53, 53, SPECIES_VIKARALAMON},
    // {114, 89, 69, 53, 53, 53, SPECIES_SKULLBALUCHIMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sAllomon_xDigivolveTable[] = {
//     // {114, 89, 69, 57, 53, 69, SPECIES_TRICERAMON_X},
//     // {114, 89, 69, 57, 53, 69, SPECIES_WARGROWLMON_X},
//     // {114, 89, 69, 57, 53, 69, SPECIES_MAMMOTHMON_X},
//     // {114, 89, 69, 57, 53, 69, SPECIES_ICELEOMON_X},
//     // {114, 89, 69, 57, 53, 69, SPECIES_HISYARYUMON},
//     {114, 89, 69, 57, 53, 69, SPECIES_METALPHANTOMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sAngemonDigivolveTable[] = {
    {102, 61, 61, 85, 77, 61, SPECIES_MAGNAANGEMON},
    {102, 61, 61, 85, 94, 61, SPECIES_ANGEWOMON},
    // {102, 61, 61, 85, 77, 61, SPECIES_ANTYLAMON_DATA},
    // {102, 61, 61, 85, 77, 61, SPECIES_MANTICOREMON},
    {102, 78, 61, 85, 77, 61, SPECIES_PUMPKINMON},
    // {102, 61, 61, 85, 77, 61, SPECIES_BAALMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAnkylomonDigivolveTable[] = {
    {106, 69, 85, 49, 69, 45, SPECIES_BRACHIOMON},
    {106, 69, 102, 49, 69, 45, SPECIES_VERMILIMON},
    // {106, 69, 85, 49, 69, 45, SPECIES_VIKARALAMON},
    {123, 69, 85, 49, 69, 45, SPECIES_MAMMOTHMON},
    // {106, 69, 85, 49, 69, 45, SPECIES_GUSOKUMON},
    // {106, 69, 85, 49, 69, 45, SPECIES_GROUNDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sApemonDigivolveTable[] = {
    // {102, 73, 61, 53, 57, 65, SPECIES_GOKUUMON},
    // {102, 73, 61, 53, 57, 65, SPECIES_MIHIRAMON},
    // {102, 73, 61, 53, 57, 65, SPECIES_DOUMON},
    {119, 73, 61, 53, 57, 65, SPECIES_ASURAMON},
    {102, 90, 61, 53, 57, 65, SPECIES_WEREGARURUMON},
    {102, 73, 78, 53, 57, 65, SPECIES_JAGAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAquilamonDigivolveTable[] = {
    {98, 61, 57, 65, 57, 85, SPECIES_GARUDAMON},
    {115, 61, 57, 65, 57, 85, SPECIES_DERAMON},
    // {98, 61, 57, 65, 57, 85, SPECIES_HIPPOGRYPHONMON},
    // {98, 61, 57, 65, 57, 85, SPECIES_TYILINMON},
    {98, 61, 57, 65, 57, 102, SPECIES_AEROVEEDRAMON},
    // {98, 61, 57, 65, 57, 85, SPECIES_LOADERLEOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArcadiamon_championDigivolveTable[] = {
    // {106, 69, 61, 69, 61, 69, SPECIES_ARCADIAMON_ULTIMATE},
    // {106, 69, 61, 69, 61, 69, SPECIES_INFERMON},
    {106, 69, 61, 86, 61, 69, SPECIES_SKULLSATAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArchelomonDigivolveTable[] = {
    {106, 65, 81, 53, 57, 53, SPECIES_DIVERMON},
    {106, 82, 81, 53, 57, 53, SPECIES_ZUDOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArgomon_championDigivolveTable[] = {
    // {102, 65, 61, 73, 61, 61, SPECIES_ARGOMON_ULTIMATE},
    // {102, 65, 61, 73, 61, 61, SPECIES_BULBMON},
    {119, 65, 61, 73, 61, 61, SPECIES_BIGMAMEMON},
    {102, 65, 73, 85, 61, 61, SPECIES_ANDROMON},
    {102, 77, 73, 73, 61, 61, SPECIES_METALGREYMON},
    {102, 82, 61, 73, 61, 61, SPECIES_MUMMYMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sArresterdramonDigivolveTable[] = {
//     // {110, 77, 49, 61, 57, 77, SPECIES_ARRESTERDRAMON_SUPERIOR_MODE},
//     // {110, 77, 49, 61, 57, 77, SPECIES_SAVIORHUCKMON},
//     // {110, 77, 49, 61, 57, 77, SPECIES_DURAMON},
//     // {110, 77, 49, 61, 57, 77, SPECIES_BAALMON},
//     // {110, 77, 49, 61, 57, 77, SPECIES_WINGDRAMON},
//     // {110, 77, 49, 61, 57, 77, SPECIES_RIZEGREYMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sAtamadekachimonDigivolveTable[] = {
    {126, 77, 73, 37, 73, 29, SPECIES_MASTERTYRANNOMON},
    {126, 77, 90, 37, 73, 29, SPECIES_METALTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAurumonDigivolveTable[] = {
    // {102, 57, 49, 65, 49, 97, SPECIES_BASTEMON},
    {102, 74, 49, 65, 49, 97, SPECIES_MYOTISMON},
    // {102, 57, 49, 65, 49, 97, SPECIES_WEREGARURUMON_BLACK},
    {102, 70, 49, 76, 49, 97, SPECIES_WARUMONZAEMON},
    {119, 57, 49, 65, 49, 97, SPECIES_MAMMOTHMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sDeadlyaxemonDigivolveTable[] = {
//     {102, 89, 77, 49, 57, 61, SPECIES_DARKNIGHTMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sBaboongamonDigivolveTable[] = {
//     // {130, 73, 69, 29, 69, 61, SPECIES_GOGMAMON},
//     // {130, 73, 69, 29, 69, 61, SPECIES_JEWELBEEMON},
//     // {130, 73, 69, 29, 69, 61, SPECIES_MACHGAOGAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sBakemonDigivolveTable[] = {
    {98, 61, 53, 73, 85, 45, SPECIES_PHANTOMON},
    {98, 78, 53, 73, 85, 45, SPECIES_MYOTISMON},
    // {98, 61, 53, 73, 85, 45, SPECIES_METALPHANTOMON},
    // {98, 61, 53, 73, 85, 45, SPECIES_ENBARRMON},
    // {98, 61, 53, 73, 85, 45, SPECIES_ASTAMON},
    {110, 61, 53, 85, 85, 45, SPECIES_DRAGOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBallistamonDigivolveTable[] = {
    // {106, 77, 77, 57, 49, 49, SPECIES_ATLURBALLISTAMON},
    // {106, 77, 77, 57, 49, 49, SPECIES_REBELLIMON},
    // {106, 77, 77, 57, 49, 49, SPECIES_METALGREYMON_2010},
    {106, 77, 94, 57, 49, 49, SPECIES_METALMAMEMON},
    // {106, 77, 77, 57, 49, 49, SPECIES_LOCOMON},
    // {106, 77, 77, 57, 49, 49, SPECIES_LOADERLEOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBaluchimonDigivolveTable[] = {
    // {106, 65, 65, 73, 57, 65, SPECIES_SKULLBALUCHIMON},
    // {106, 65, 65, 73, 57, 65, SPECIES_MANTICOREMON},
    {106, 82, 65, 73, 57, 65, SPECIES_WARGROWLMON},
    // {106, 65, 65, 73, 57, 65, SPECIES_DURAMON},
    // {106, 65, 65, 73, 57, 65, SPECIES_RAIJILUDOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBaohuckmonDigivolveTable[] = {
    // {94, 73, 65, 57, 57, 73, SPECIES_SAVIORHUCKMON},
    // {94, 73, 65, 57, 57, 73, SPECIES_DURAMON},
    // {94, 73, 65, 57, 57, 73, SPECIES_ARRESTERDRAMON_SUPERIOR_MODE},
    // {94, 73, 65, 57, 57, 73, SPECIES_KENDOGARURUMON},
    {94, 90, 65, 57, 57, 73, SPECIES_MASTERTYRANNOMON},
    {94, 82, 72, 57, 57, 80, SPECIES_ETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBaromonDigivolveTable[] = {
    // {118, 57, 73, 69, 69, 37, SPECIES_MEPHISTOMON},
    {118, 74, 73, 69, 69, 37, SPECIES_ZUDOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBetelgammamonDigivolveTable[] = {
    // {102, 69, 53, 77, 65, 57, SPECIES_CANOWEISSMON},
    // {102, 69, 53, 77, 65, 57, SPECIES_REGULUSMON},
    // {102, 69, 53, 77, 65, 57, SPECIES_FUMAMON},
    // {102, 69, 53, 77, 65, 57, SPECIES_ZANMETSUMON},
    {119, 69, 53, 77, 65, 57, SPECIES_BRACHIOMON},
    // {102, 69, 53, 77, 65, 57, SPECIES_GHILLIEDHUMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sBioquetzalmonDigivolveTable[] = {
//     // {166, 101, 71, 101, 95, 101, SPECIES_BIOROTOSMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sBiothunderbirdmonDigivolveTable[] = {
//     // {154, 83, 83, 119, 77, 119, SPECIES_BIODARKDRAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sBirdramonDigivolveTable[] = {
    {106, 65, 49, 69, 65, 77, SPECIES_GARUDAMON},
    // {106, 65, 49, 69, 65, 77, SPECIES_LAVAGARITAMON},
    {106, 65, 49, 69, 65, 94, SPECIES_PARROTMON},
    // {106, 65, 49, 69, 65, 77, SPECIES_FLAREMON},
    {123, 65, 49, 69, 65, 77, SPECIES_ASURAMON},
    {106, 77, 49, 69, 77, 77, SPECIES_KIMERAMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sBlackgaogamonDigivolveTable[] = {
//     {122, 85, 53, 49, 45, 61, SPECIES_BLACKMACHGAOGAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sBlackgargomonDigivolveTable[] = {
    // {114, 69, 69, 61, 53, 57, SPECIES_BLACKRAPIDMON},
    // {114, 69, 69, 61, 53, 57, SPECIES_VOLCANOMON},
    {114, 69, 69, 78, 53, 57, SPECIES_DATAMON},
    {114, 86, 69, 61, 53, 57, SPECIES_CYBERDRAMON},
    // {114, 69, 69, 61, 53, 57, SPECIES_ASSAULTMON},
    {126, 81, 69, 61, 53, 57, SPECIES_METALGREYMON_VIRUS},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGarurumon_blackDigivolveTable[] = {
    // {106, 65, 61, 77, 61, 61, SPECIES_WEREGARURUMON_BLACK},
    {106, 65, 61, 77, 61, 78, SPECIES_ICELEOMON},
    // {106, 65, 61, 77, 61, 61, SPECIES_PANDAMON},
    // {106, 65, 61, 77, 61, 61, SPECIES_VAJRAMON},
    // {106, 65, 61, 77, 61, 61, SPECIES_JAEGERDORULUMON},
    // {106, 65, 61, 77, 61, 61, SPECIES_CATURAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackgatomonDigivolveTable[] = {
    {110, 57, 45, 73, 57, 57, SPECIES_LADYDEVIMON},
    {110, 74, 45, 73, 57, 57, SPECIES_WARUMONZAEMON},
    // {110, 57, 45, 73, 57, 57, SPECIES_BASTEMON},
    // {110, 57, 45, 73, 57, 57, SPECIES_MEICRACKMON_VICIOUS_MODE},
    // {110, 57, 45, 73, 57, 57, SPECIES_ANTYLAMON_DATA},
    // {110, 57, 45, 73, 57, 57, SPECIES_BETSUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackgatomon_uverDigivolveTable[] = {
    // {114, 53, 37, 61, 61, 85, SPECIES_MANTICOREMON},
    {114, 53, 37, 78, 61, 85, SPECIES_PIXIMON},
    {131, 53, 37, 61, 61, 85, SPECIES_DIGITAMAMON},
    // {114, 53, 37, 61, 61, 85, SPECIES_RAIJILUDOMON},
    // {114, 53, 37, 61, 61, 85, SPECIES_RARERAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlackgrowlmonDigivolveTable[] = {
    // {114, 69, 57, 69, 65, 61, SPECIES_BLACKWARGROWLMON},
    // {114, 69, 57, 69, 65, 61, SPECIES_LOUDMON},
    {126, 69, 57, 81, 65, 61, SPECIES_SKULLGREYMON},
    // {114, 69, 57, 69, 65, 61, SPECIES_VOLCDRAMON},
    {114, 69, 57, 86, 65, 61, SPECIES_SKULLMERAMON},
    // {114, 69, 57, 69, 65, 61, SPECIES_WINGDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBladekuwagamonDigivolveTable[] = {
    // {90, 97, 65, 41, 41, 89, SPECIES_METALLIFEKUWAGAMON},
    // {90, 97, 65, 41, 41, 89, SPECIES_METALKABUTERIMON},
    {90, 97, 82, 41, 41, 89, SPECIES_MEGAKABUTERIMON_BLUE},
    {90, 114, 65, 41, 41, 89, SPECIES_MUMMYMON},
    {90, 97, 65, 41, 41, 106, SPECIES_GIROMON},
    {102, 97, 65, 41, 53, 89, SPECIES_BLOSSOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlimpmonDigivolveTable[] = {
    // {158, 61, 41, 57, 29, 85, SPECIES_MASTERBLIMPMON},
    // {158, 61, 41, 57, 29, 85, SPECIES_BULBMON},
    // {158, 61, 41, 57, 29, 85, SPECIES_LOCOMON},
    {158, 61, 58, 57, 29, 85, SPECIES_METALMAMEMON},
    {158, 61, 41, 57, 29, 102, SPECIES_GIROMON},
    {158, 73, 53, 57, 29, 85, SPECIES_KNIGHTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBoarmonDigivolveTable[] = {
    // {138, 77, 61, 37, 61, 57, SPECIES_VIKARALAMON},
    {155, 77, 61, 37, 61, 57, SPECIES_MAMMOTHMON},
    // {138, 77, 61, 37, 61, 57, SPECIES_CATURAMON},
    {138, 77, 61, 54, 61, 57, SPECIES_PIXIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBombernanimonDigivolveTable[] = {
    // {98, 69, 61, 61, 69, 61, SPECIES_VOLCANOMON},
    {115, 69, 61, 61, 69, 61, SPECIES_ASURAMON},
    {98, 69, 78, 61, 69, 61, SPECIES_METALMAMEMON},
    {98, 69, 61, 78, 69, 61, SPECIES_MEGADRAMON},
    // {98, 69, 61, 61, 69, 61, SPECIES_MEPHISTOMON},
    {98, 69, 68, 71, 76, 61, SPECIES_DATAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBoogiemonDigivolveTable[] = {
    // {126, 57, 57, 57, 57, 81, SPECIES_FERESMON},
    // {126, 57, 57, 57, 57, 81, SPECIES_NEODEVIMON},
    {126, 74, 57, 57, 57, 81, SPECIES_WARUMONZAEMON},
    // {126, 57, 57, 57, 57, 81, SPECIES_MEPHISTOMON},
    {126, 57, 57, 74, 57, 81, SPECIES_SKULLMERAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBucchiemon_redDigivolveTable[] = {
    // {130, 57, 49, 61, 69, 61, SPECIES_MEICRACKMON_VICIOUS_MODE},
    {130, 57, 49, 78, 69, 61, SPECIES_LILLYMON},
    // {130, 57, 49, 61, 69, 61, SPECIES_FERESMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBucchiemon_greenDigivolveTable[] = {
    // {130, 57, 49, 61, 69, 61, SPECIES_BANCHOSTINGMON},
    {130, 57, 49, 78, 69, 61, SPECIES_LILLYMON},
    // {130, 57, 49, 61, 69, 61, SPECIES_FERESMON},
    // {130, 57, 49, 61, 69, 61, SPECIES_GRANKUWAGAMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sBulkmonDigivolveTable[] = {
//     // {118, 73, 61, 65, 53, 53, SPECIES_BOUTMON},
//     // {118, 73, 61, 65, 53, 53, SPECIES_TEMPOMON},
//     // {118, 73, 61, 65, 53, 53, SPECIES_PISTIMON},
//     // {118, 73, 61, 65, 53, 53, SPECIES_SHOOTMON},
//     // {118, 73, 61, 65, 53, 53, SPECIES_CLIMBMON},
//     // {118, 73, 61, 65, 53, 53, SPECIES_DIVEMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sBullmonDigivolveTable[] = {
//     // {98, 81, 77, 29, 77, 69, SPECIES_VAJRAMON},
//     // {98, 81, 77, 29, 77, 69, SPECIES_KUMBHIRAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sBuraimonDigivolveTable[] = {
    // {94, 77, 61, 69, 61, 77, SPECIES_BUTENMON},
    // {94, 77, 61, 69, 61, 77, SPECIES_DURAMON},
    // {94, 77, 61, 69, 61, 77, SPECIES_GRADEMON},
    {94, 85, 61, 77, 69, 77, SPECIES_GARUDAMON},
    {111, 77, 61, 69, 61, 77, SPECIES_DIGITAMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBurgermon_championDigivolveTable[] = {
    {122, 53, 57, 57, 85, 53, SPECIES_JAGAMON},
    {139, 53, 57, 57, 85, 53, SPECIES_DIGITAMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sButterflymonDigivolveTable[] = {
    {110, 61, 61, 73, 65, 57, SPECIES_MEGAKABUTERIMON_BLUE},
    {110, 61, 61, 73, 65, 74, SPECIES_TEKKAMON},
    {110, 61, 61, 90, 65, 57, SPECIES_PIXIMON},
    {110, 78, 61, 73, 65, 57, SPECIES_ETEMON},
    {110, 61, 78, 73, 65, 57, SPECIES_JAGAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCentarumonDigivolveTable[] = {
    // {90, 57, 65, 65, 77, 85, SPECIES_VAJRAMON},
    // {90, 57, 65, 65, 77, 85, SPECIES_ARMORMON},
    {90, 74, 65, 65, 77, 85, SPECIES_SCORPIOMON},
    {90, 57, 65, 82, 77, 85, SPECIES_VADEMON},
    {97, 57, 65, 75, 84, 85, SPECIES_SKULLSATAMON},
    // {90, 57, 65, 65, 77, 85, SPECIES_TAOMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sChamblemonDigivolveTable[] = {
//     // {146, 69, 61, 49, 69, 29, SPECIES_TOROPIAMON},
//     // {146, 69, 61, 49, 69, 29, SPECIES_MARINKIMERAMON}, 
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sChamelemonDigivolveTable[] = {
    {102, 61, 73, 65, 93, 29, SPECIES_SCORPIOMON},
    {102, 73, 73, 77, 93, 29, SPECIES_DIVERMON},
    {119, 61, 73, 65, 93, 29, SPECIES_BRACHIOMON},
    {102, 78, 73, 65, 93, 29, SPECIES_PUMPKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sChrysalimonDigivolveTable[] = {
    // {102, 65, 73, 73, 63, 57, SPECIES_INFERMON},
    {102, 65, 73, 90, 63, 57, SPECIES_OROCHIMON},
    {114, 65, 73, 85, 63, 57, SPECIES_DRAGOMON},
    {119, 65, 73, 73, 63, 57, SPECIES_ARUKENIMON},
    // {102, 65, 73, 73, 63, 57, SPECIES_ARCADIAMON_ULTIMATE},
    {102, 82, 73, 73, 63, 57, SPECIES_CYBERDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sClockmonDigivolveTable[] = {
    {94, 53, 53, 69, 85, 65, SPECIES_DATAMON},
    {94, 70, 53, 69, 85, 65, SPECIES_MAMEMON},
    // {94, 53, 53, 69, 85, 65, SPECIES_WISEMON},
    {94, 53, 65, 81, 85, 65, SPECIES_ANDROMON},
    {94, 65, 65, 69, 85, 65, SPECIES_METALGREYMON},
    {94, 53, 53, 69, 102, 65, SPECIES_EXTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCoelamonDigivolveTable[] = {
    {86, 57, 73, 61, 65, 73, SPECIES_SCORPIOMON},
    {86, 57, 73, 61, 77, 85, SPECIES_MARINEDEVIMON},
    {98, 57, 73, 73, 65, 73, SPECIES_DRAGOMON},
    {86, 69, 73, 73, 65, 73, SPECIES_DIVERMON},
    {103, 57, 73, 61, 65, 73, SPECIES_SHOGUNGEKOMON},
    // {86, 57, 73, 61, 65, 73, SPECIES_MERMAIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCoredramon_blueDigivolveTable[] = {
    // {106, 61, 45, 69, 53, 85, SPECIES_WINGDRAMON},
    {106, 61, 45, 69, 53, 102, SPECIES_AEROVEEDRAMON},
    {106, 78, 45, 69, 53, 85, SPECIES_CYBERDRAMON},
    {113, 61, 45, 76, 53, 94, SPECIES_GIGADRAMON},
    // {106, 61, 45, 69, 53, 85, SPECIES_BLACKWARGROWLMON},
    {118, 61, 45, 69, 65, 85, SPECIES_MEGASEADRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCoredramon_greenDigivolveTable[] = {
    // {110, 61, 69, 73, 53, 53, SPECIES_GROUNDRAMON},
    {110, 78, 69, 73, 53, 53, SPECIES_TRICERAMON},
    {122, 61, 69, 85, 53, 53, SPECIES_SKULLGREYMON},
    {110, 61, 69, 90, 53, 53, SPECIES_MEGADRAMON},
    {110, 70, 76, 73, 60, 53, SPECIES_WARGROWLMON},
    // {110, 61, 69, 73, 53, 53, SPECIES_DARKKNIGHTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCyclonemonDigivolveTable[] = {
    {110, 77, 61, 57, 61, 45, SPECIES_BRACHIOMON},
    {110, 77, 61, 74, 61, 45, SPECIES_MEGADRAMON},
    // {110, 77, 61, 57, 61, 45, SPECIES_DORUGREYMON},
    {110, 94, 61, 57, 61, 45, SPECIES_METALGREYMON_VIRUS},
    {117, 86, 68, 57, 61, 45, SPECIES_MASTERTYRANNOMON},
    {110, 77, 78, 57, 61, 45, SPECIES_GARBAGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDamemon_fusionDigivolveTable[] = {
    // {82, 56, 77, 44, 47, 35, SPECIES_TUWARMON},
    // {106, 73, 101, 57, 61, 45, SPECIES_CHOHAKKAIMON},
    // {106, 73, 101, 57, 61, 45, SPECIES_DESTROMON},
    {106, 73, 113, 69, 61, 45, SPECIES_ANDROMON},
    // {106, 73, 101, 57, 61, 45, SPECIES_SKULLBALUCHIMON},
    // {106, 73, 101, 57, 61, 45, SPECIES_LUCEMON_FALLDOWN_MODE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDarcmonDigivolveTable[] = {
    // {94, 73, 61, 61, 53, 77, SPECIES_HIPPOGRYPHONMON},
    {94, 73, 61, 61, 70, 77, SPECIES_ANGEWOMON},
    {94, 73, 61, 78, 53, 77, SPECIES_PIXIMON},
    // {94, 73, 61, 61, 53, 77, SPECIES_WISEMON},
    // {94, 73, 61, 61, 53, 77, SPECIES_DURAMON},
    // {94, 73, 61, 61, 53, 77, SPECIES_RIZEGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDarklizardmonDigivolveTable[] = {
    {122, 65, 57, 61, 69, 53, SPECIES_SKULLSATAMON},
    // {122, 65, 57, 61, 69, 53, SPECIES_FERESMON},
    {122, 65, 57, 61, 69, 70, SPECIES_GIGADRAMON},
    {122, 65, 74, 61, 69, 53, SPECIES_METALTYRANNOMON},
    {122, 82, 57, 61, 69, 53, SPECIES_WARGROWLMON},
    // {122, 65, 57, 61, 69, 53, SPECIES_LOUDMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDarkmaildramonDigivolveTable[] = {
    {148, 89, 113, 89, 95, 95, SPECIES_MACHINEDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDarktyrannomonDigivolveTable[] = {
    {106, 81, 65, 69, 53, 57, SPECIES_METALTYRANNOMON},
    // {106, 81, 65, 69, 53, 57, SPECIES_CERBERUSMON},
    // {106, 81, 65, 69, 53, 57, SPECIES_MAMETYRAMON},
    {106, 98, 65, 69, 53, 57, SPECIES_MASTERTYRANNOMON},
    {106, 81, 65, 69, 53, 74, SPECIES_GIGADRAMON},
    {106, 93, 65, 79, 53, 57, SPECIES_WARUMONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDarktyrannomon_xDigivolveTable[] = {
    // {106, 93, 65, 81, 53, 53, SPECIES_METALGREYMON_VIRUS_X},
    // {106, 93, 65, 81, 53, 53, SPECIES_TRICERAMON_X},
    {106, 93, 82, 81, 53, 53, SPECIES_METALTYRANNOMON},
    {106, 110, 65, 81, 53, 53, SPECIES_MASTERTYRANNOMON},
    // {106, 93, 65, 81, 53, 53, SPECIES_MAMETYRAMON},
    {106, 93, 65, 81, 70, 53, SPECIES_EXTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDeckerdramonDigivolveTable[] = {
    {172, 83, 107, 89, 125, 47, SPECIES_MACHINEDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDeltamonDigivolveTable[] = {
    {130, 57, 57, 65, 77, 45, SPECIES_OROCHIMON},
    {130, 69, 57, 65, 89, 45, SPECIES_KIMERAMON},
    {130, 69, 69, 65, 77, 45, SPECIES_METALGREYMON},
    // {130, 57, 57, 65, 77, 45, SPECIES_SHARKMON},
    {130, 57, 57, 82, 77, 45, SPECIES_DATAMON},
    {147, 57, 57, 65, 77, 45, SPECIES_MONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDepthmonDigivolveTable[] = {
    {86, 61, 81, 69, 57, 69, SPECIES_MARINEDEVIMON},
    {98, 61, 81, 81, 57, 69, SPECIES_DRAGOMON},
    // {86, 61, 81, 69, 57, 69, SPECIES_MERMAIMON},
    {86, 78, 81, 69, 57, 69, SPECIES_ZUDOMON},
    {86, 67, 87, 75, 63, 69, SPECIES_METEORMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDeputymonDigivolveTable[] = {
    // {94, 57, 53, 85, 61, 69, SPECIES_PANDAMON},
    {94, 69, 65, 85, 61, 69, SPECIES_KNIGHTMON},
    // {94, 57, 53, 85, 61, 69, SPECIES_SUPERSTARMON},
    // {94, 57, 53, 85, 61, 69, SPECIES_RIZEGREYMON},
    // {94, 57, 53, 85, 61, 69, SPECIES_TAOMON_SILVER},
    // {94, 57, 53, 85, 61, 69, SPECIES_WISEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDevidramonDigivolveTable[] = {
    {106, 85, 49, 65, 45, 73, SPECIES_MEGADRAMON},
    {106, 102, 49, 65, 45, 73, SPECIES_CYBERDRAMON},
    // {106, 85, 49, 65, 45, 73, SPECIES_WARGROWLMON_ORANGE},
    // {106, 85, 49, 65, 45, 73, SPECIES_KARATENMON}, 
    // {106, 85, 49, 65, 45, 73, SPECIES_CERBERUSMON},
    // {106, 85, 49, 65, 45, 73, SPECIES_ASTAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDevimonDigivolveTable[] = {
    // {98, 81, 45, 81, 53, 69, SPECIES_NEODEVIMON},
    {98, 81, 45, 98, 53, 69, SPECIES_SKULLSATAMON},
    {98, 98, 45, 81, 53, 69, SPECIES_MYOTISMON},
    // {98, 81, 45, 81, 53, 69, SPECIES_FERESMON},
    // {98, 81, 45, 81, 53, 69, SPECIES_MEPHISTOMON},
    {98, 88, 45, 88, 53, 76, SPECIES_LADYDEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDexdorugamonDigivolveTable[] = {
    // {102, 77, 29, 85, 69, 69, SPECIES_DEXDORUGREYMON},
    // {102, 77, 29, 85, 69, 69, SPECIES_DORUGREYMON},
    {102, 77, 46, 85, 69, 69, SPECIES_METALTYRANNOMON},
    {102, 77, 41, 97, 69, 69, SPECIES_ANDROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDiatrymonDigivolveTable[] = {
    // {106, 73, 65, 57, 49, 69, SPECIES_TOROPIAMON},
    // {106, 73, 65, 57, 49, 69, SPECIES_TYILINMON},
    // {106, 73, 65, 57, 49, 69, SPECIES_SINDURAMON},
    {123, 73, 65, 57, 49, 69, SPECIES_DERAMON},
    // {106, 73, 65, 57, 49, 69, SPECIES_CROWMON},
    // {106, 73, 65, 57, 49, 69, SPECIES_ANTYLAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDigmonDigivolveTable[] = {
    // {122, 61, 65, 57, 69, 57, SPECIES_SKULLSCORPIOMON},
    // {122, 61, 65, 57, 69, 57, SPECIES_GOGMAMON},
    {122, 78, 65, 57, 69, 57, SPECIES_TRICERAMON},
    // {122, 61, 65, 57, 69, 57, SPECIES_VOLCANOMON},
    {129, 70, 65, 57, 76, 57, SPECIES_MUMMYMON},
    // {122, 61, 65, 57, 69, 57, SPECIES_VULTUREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDinohyumonDigivolveTable[] = {
    // {110, 77, 61, 61, 57, 61, SPECIES_SHAUJINMON},
    {127, 77, 61, 61, 57, 61, SPECIES_CHERRYMON},
    {110, 94, 61, 61, 57, 61, SPECIES_MUMMYMON},
    // {110, 77, 61, 61, 57, 61, SPECIES_GRADEMON},
    {110, 89, 73, 61, 57, 61, SPECIES_KNIGHTMON},
    // {110, 77, 61, 61, 57, 61, SPECIES_VOLCDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDobermonDigivolveTable[] = {
    // {98, 65, 53, 77, 69, 65, SPECIES_CERBERUSMON},
    {98, 82, 53, 77, 69, 65, SPECIES_WEREGARURUMON},
    // {98, 65, 53, 77, 69, 65, SPECIES_MIHIRAMON},
    // {98, 65, 53, 77, 69, 65, SPECIES_GRAPLEOMON},
    // {98, 65, 53, 77, 69, 65, SPECIES_TANKDRAMON},
    // {98, 65, 53, 77, 69, 65, SPECIES_DARKSUPERSTARMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sDobermon_xDigivolveTable[] = {
//     // {98, 69, 61, 77, 69, 73, SPECIES_CERBERUSMON_X},
//     // {98, 69, 61, 77, 69, 73, SPECIES_WEREGARURUMON_X},
//     // {98, 69, 61, 77, 69, 73, SPECIES_MEGASEADRAMON_X},
//     // {98, 69, 61, 77, 69, 73, SPECIES_METALGREYMON_X},
//     // {98, 69, 61, 77, 69, 73, SPECIES_VOLCDRAMON},
//     // {98, 69, 61, 77, 69, 73, SPECIES_CATURAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sDoggymonDigivolveTable[] = {
    {126, 53, 73, 53, 53, 69, SPECIES_DIGITAMAMON},
    // {126, 53, 73, 53, 53, 69, SPECIES_OLEAMON},
    {126, 70, 73, 53, 53, 69, SPECIES_METALGREYMON_VIRUS},
    // {126, 53, 73, 53, 53, 69, SPECIES_CERBERUSMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDokugumonDigivolveTable[] = {
    {110, 61, 61, 65, 73, 49, SPECIES_ARUKENIMON},
    // {110, 61, 61, 65, 73, 49, SPECIES_GYUUKIMON},
    // {110, 61, 61, 65, 73, 49, SPECIES_INFERMON},
    {127, 61, 61, 65, 73, 49, SPECIES_MEGAKABUTERIMON_RED},
    // {110, 61, 61, 65, 73, 49, SPECIES_OBOROMON},
    {122, 61, 61, 65, 85, 49, SPECIES_BLOSSOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDolphmonDigivolveTable[] = {
    {98, 49, 57, 81, 69, 69, SPECIES_DIVERMON},
    {110, 49, 57, 81, 81, 69, SPECIES_MEGASEADRAMON},
    {98, 49, 57, 81, 81, 81, SPECIES_MARINEDEVIMON},
    {98, 66, 57, 81, 69, 69, SPECIES_SCORPIOMON},
    // {98, 49, 57, 81, 69, 69, SPECIES_MERMAIMON},
    // {98, 49, 57, 81, 69, 69, SPECIES_THETISMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDorugamonDigivolveTable[] = {
    // {102, 57, 57, 65, 65, 65, SPECIES_DORUGREYMON},
    // {102, 57, 57, 65, 65, 65, SPECIES_GREATGRIZZLYMON},
    {102, 69, 57, 65, 65, 77, SPECIES_LADYDEVIMON},
    {102, 57, 69, 65, 77, 65, SPECIES_PHANTOMON},
    // {102, 57, 57, 65, 65, 65, SPECIES_TYILINMON},
    // {102, 57, 57, 65, 65, 65, SPECIES_CANNONBEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDorulumonDigivolveTable[] = {
    // {118, 73, 65, 65, 53, 57, SPECIES_JAEGERDORULUMON},
    // {118, 73, 65, 65, 53, 57, SPECIES_WEREGARURUMON_BLACK},
    // {118, 73, 65, 65, 53, 57, SPECIES_CERBERUSMON},
    // {118, 73, 65, 65, 53, 57, SPECIES_PANDAMON},
    {118, 90, 65, 65, 53, 57, SPECIES_WEREGARURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDrimogemonDigivolveTable[] = {
    {126, 65, 65, 57, 49, 57, SPECIES_GARBAGEMON},
    // {126, 65, 65, 57, 49, 57, SPECIES_LOADERLEOMON},
    // {126, 65, 65, 57, 49, 57, SPECIES_JAEGERDORULUMON},
    {143, 65, 65, 57, 49, 57, SPECIES_MAMMOTHMON},
    {126, 71, 71, 63, 55, 57, SPECIES_METEORMON},
    {139, 65, 65, 67, 49, 57, SPECIES_SHOGUNGEKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sEbidramonDigivolveTable[] = {
    // {106, 77, 69, 57, 61, 57, SPECIES_GUSOKUMON},
    {106, 89, 69, 69, 61, 57, SPECIES_DIVERMON},
    {106, 77, 69, 57, 61, 74, SPECIES_WARUSEADRAMON},
    // {106, 77, 69, 57, 61, 57, SPECIES_CALMARAMON},
    // {106, 77, 69, 57, 61, 57, SPECIES_KENDOGARURUMON},
    // {106, 77, 69, 57, 61, 57, SPECIES_SAVIORHUCKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sElephantmonDigivolveTable[] = {
    {118, 57, 77, 65, 65, 45, SPECIES_WARGROWLMON},
    {118, 74, 77, 65, 65, 45, SPECIES_MASTERTYRANNOMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sEosmon_championDigivolveTable[] = {
//     // {82, 37, 77, 77, 77, 61, SPECIES_EOSMON_ULTIMATE},
//     // {82, 37, 77, 77, 77, 61, SPECIES_LOADERLEOMON},
//     // {82, 37, 77, 77, 77, 61, SPECIES_LOCOMON},
//     {82, 37, 77, 77, 77, 61, SPECIES_REBELLIMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sExermonDigivolveTable[] = {
    // {110, 49, 57, 69, 65, 73, SPECIES_TEMPOMON},
    // {110, 49, 57, 69, 65, 73, SPECIES_SHOOTMON},
    // {110, 49, 57, 69, 65, 73, SPECIES_PISTIMON},
    // {110, 49, 57, 69, 65, 73, SPECIES_CLIMBMON},
    // {110, 49, 57, 69, 65, 73, SPECIES_DIVEMON},
    // {110, 49, 57, 69, 65, 73, SPECIES_BOUTMON},
    {110, 49, 74, 69, 65, 73, SPECIES_MEGAKABUTERIMON_BLUE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sExveemonDigivolveTable[] = {
    {110, 73, 57, 57, 65, 65, SPECIES_AEROVEEDRAMON},
    // {110, 73, 57, 57, 65, 65, SPECIES_BAALMON},
    {110, 90, 57, 57, 65, 65, SPECIES_MAGNAANGEMON},
    // {110, 73, 57, 57, 65, 65, SPECIES_REBELLIMON},
    {127, 73, 57, 57, 65, 65, SPECIES_DIGITAMAMON},
    // {110, 73, 57, 57, 65, 65, SPECIES_CROWMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sExveemon_virusDigivolveTable[] = {
    {110, 65, 53, 61, 77, 61, SPECIES_AEROVEEDRAMON},
    {127, 65, 53, 61, 77, 61, SPECIES_BRACHIOMON},
    {110, 65, 53, 78, 77, 61, SPECIES_SKULLSATAMON},
    {122, 65, 53, 73, 77, 61, SPECIES_SKULLGREYMON},
    {110, 65, 53, 73, 77, 71, SPECIES_OROCHIMON},
    // {110, 65, 53, 61, 77, 61, SPECIES_CROWMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sEyesmonDigivolveTable[] = {
    {110, 57, 61, 57, 57, 77, SPECIES_OROCHIMON},
    // {110, 57, 61, 57, 57, 77, SPECIES_LOUDMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sEyesmon_scattermodeDigivolveTable[] = {
//     // {78, 45, 45, 45, 45, 45, SPECIES_LOUDMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sFangmonDigivolveTable[] = {
    // {94, 77, 45, 69, 49, 85, SPECIES_CERBERUSMON},
    {111, 77, 45, 69, 49, 85, SPECIES_ARUKENIMON},
    {94, 94, 45, 69, 49, 85, SPECIES_WEREGARURUMON},
    // {94, 77, 45, 69, 49, 85, SPECIES_CATURAMON},
    // {94, 77, 45, 69, 49, 85, SPECIES_ARMORMON},
    // {94, 77, 45, 69, 49, 85, SPECIES_JEWELBEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFilmonDigivolveTable[] = {
    // {110, 73, 65, 57, 57, 57, SPECIES_STEFILMON},
    // {110, 73, 65, 57, 57, 57, SPECIES_JAGERLOWEEMON},
    // {110, 73, 65, 57, 57, 57, SPECIES_SOLOOGARMON},
    // {110, 73, 65, 57, 57, 57, SPECIES_MAMATYRAMON},
    {110, 73, 77, 69, 57, 57, SPECIES_ANDROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFiramonDigivolveTable[] = {
    // {98, 61, 65, 77, 45, 77, SPECIES_FLAREMON},
    // {98, 61, 65, 77, 45, 77, SPECIES_MISTYMON},
    {98, 69, 65, 85, 53, 77, SPECIES_GARUDAMON},
    {115, 61, 65, 77, 45, 77, SPECIES_BIGMAMEMON},
    // {98, 61, 65, 77, 45, 77, SPECIES_MACHGAOGAMON},
    {98, 78, 65, 77, 45, 77, SPECIES_PUMPKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlamedramonDigivolveTable[] = {
    {94, 77, 61, 77, 53, 57, SPECIES_BLUEMERAMON},
    {94, 77, 61, 94, 53, 57, SPECIES_SKULLMERAMON},
    // {94, 77, 61, 77, 53, 57, SPECIES_VOLCANOMON},
    {94, 77, 61, 77, 53, 74, SPECIES_AEROVEEDRAMON},
    {94, 94, 61, 77, 53, 57, SPECIES_MAGNAANGEMON},
    // {94, 77, 61, 77, 53, 57, SPECIES_MAJIRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlamewizardmonDigivolveTable[] = {
    // {90, 53, 61, 85, 73, 69, SPECIES_MISTYMON},
    // {90, 53, 61, 85, 73, 69, SPECIES_WISEMON},
    {90, 70, 61, 85, 73, 69, SPECIES_WARUMONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlarerizamonDigivolveTable[] = {
    {126, 65, 65, 65, 53, 53, SPECIES_SKULLMERAMON},
    // {126, 65, 65, 65, 53, 53, SPECIES_BURNINGGREYMON},
    {126, 65, 65, 65, 53, 70, SPECIES_GIGADRAMON},
    // {126, 65, 65, 65, 53, 53, SPECIES_RIZEGREYMON},
    {126, 65, 82, 65, 53, 53, SPECIES_VERMILIMON},
    // {126, 65, 65, 65, 53, 53, SPECIES_ARGOMON_ULTIMATE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlybeemonDigivolveTable[] = {
    {98, 65, 65, 77, 61, 57, SPECIES_ARUKENIMON},
    {110, 65, 65, 77, 73, 57, SPECIES_BLOSSOMON},
    {98, 77, 77, 77, 61, 57, SPECIES_KNIGHTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFlymonDigivolveTable[] = {
    {102, 65, 65, 73, 61, 57, SPECIES_OKUWAMON},
    // {102, 65, 65, 73, 61, 57, SPECIES_ANCIENTBEETLEMON},
    {119, 65, 65, 73, 61, 57, SPECIES_MEGAKABUTERIMON_RED},
    // {102, 65, 65, 73, 61, 57, SPECIES_JEWELBEEMON},
    // {102, 65, 65, 73, 61, 57, SPECIES_CANNOBEEMON},
    {102, 65, 83, 73, 61, 57, SPECIES_GARBAGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFrigimonDigivolveTable[] = {
    // {122, 57, 49, 61, 77, 45, SPECIES_POLARBEARMON},
    // {122, 57, 49, 61, 77, 45, SPECIES_FROZOMON},
    {122, 74, 49, 61, 77, 45, SPECIES_MAMEMON},
    {130, 57, 57, 61, 85, 45, SPECIES_MAGNAANGEMON_PRIESTMODE},
    // {122, 57, 49, 61, 77, 45, SPECIES_SIRENMON},
    {122, 57, 49, 78, 77, 45, SPECIES_BLUEMERAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sFugamonDigivolveTable[] = {
    {130, 65, 65, 53, 61, 49, SPECIES_ETEMON},
    {130, 82, 65, 53, 61, 49, SPECIES_MUMMYMON},
    // {130, 65, 65, 53, 61, 49, SPECIES_VOLCANOMON},
    // {130, 65, 65, 53, 61, 49, SPECIES_MATADORMON},
    // {130, 65, 65, 53, 61, 49, SPECIES_WEREGARURUMON_BLACK},
    // {130, 65, 65, 53, 61, 49, SPECIES_GRAPLEOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGaogamonDigivolveTable[] = {
    // {106, 85, 65, 45, 49, 73, SPECIES_MACHGAOGAMON},
    {106, 85, 65, 45, 49, 90, SPECIES_ICELEOMON},
    // {106, 85, 65, 45, 49, 73, SPECIES_TAOMON},
    // {106, 85, 65, 45, 49, 73, SPECIES_CRESCEMON},
    // {106, 85, 65, 45, 49, 73, SPECIES_CROWMON_06},
    // {106, 85, 65, 45, 49, 73, SPECIES_KUMBHIRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGargomonDigivolveTable[] = {
    // {94, 81, 73, 37, 77, 61, SPECIES_RAPIDMON},
    // {94, 81, 73, 37, 77, 61, SPECIES_ANTYLAMON},
    // {94, 81, 73, 37, 77, 61, SPECIES_PANDAMON},
    // {94, 81, 73, 37, 77, 61, SPECIES_MAKURAMON},
    // {94, 81, 73, 37, 77, 61, SPECIES_CATCHMAMEMON},
    {94, 81, 90, 37, 77, 61, SPECIES_METALMAMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGargoylemonDigivolveTable[] = {
    {94, 77, 49, 77, 65, 65, SPECIES_CYBERDRAMON},
    // {94, 77, 49, 77, 65, 65, SPECIES_MEPHISTOMON},
    // {94, 77, 49, 77, 65, 65, SPECIES_SKULLBALUCHIMON},
    // {94, 77, 49, 77, 65, 65, SPECIES_SKULLSCORPIOMON},
    {106, 77, 49, 89, 65, 65, SPECIES_SKULLGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGarurumonDigivolveTable[] = {
    {94, 73, 57, 61, 53, 85, SPECIES_WEREGARURUMON},
    // {94, 73, 57, 61, 53, 85, SPECIES_CERBERUSMON},
    {94, 73, 57, 61, 53, 102, SPECIES_ICELEOMON},
    // {94, 73, 57, 61, 53, 85, SPECIES_JAEGERDORULUMON},
    // {94, 73, 57, 61, 53, 85, SPECIES_KARATENMON},
    {94, 85, 57, 61, 65, 85, SPECIES_KIMERAMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sGarurumon_xDigivolveTable[] = {
//     // {94, 81, 65, 61, 53, 85, SPECIES_WEREGARURUMON_X},
//     // {94, 81, 65, 61, 53, 85, SPECIES_ICELEOMON_X},
//     // {94, 81, 65, 61, 53, 85, SPECIES_CERBERUSMON_X},
//     // {94, 81, 65, 61, 53, 85, SPECIES_ARMORMON},
//     // {94, 81, 65, 61, 53, 85, SPECIES_TAOMON_SILVER},
//     {94, 81, 65, 61, 53, 85, SPECIES_TYILINMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sGatomonDigivolveTable[] = {
    {86, 53, 41, 57, 77, 85, SPECIES_ANGEWOMON},
    // {86, 53, 41, 57, 77, 85, SPECIES_DARKKNIGHTMON},
    // {86, 53, 41, 57, 77, 85, SPECIES_HIPPOGRYPHONMON},
    // {86, 53, 41, 57, 77, 85, SPECIES_SANZOMON},
    {86, 53, 41, 74, 77, 85, SPECIES_PIXIMON},
    // {86, 53, 41, 57, 77, 85, SPECIES_LILAMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sGatomon_xDigivolveTable[] = {
//     // {86, 53, 41, 73, 81, 85, SPECIES_ANGEWOMON_X},
//     {86, 53, 41, 73, 81, 85, SPECIES_LILYMON_X},
//     {86, 53, 41, 73, 81, 85, SPECIES_MONZAEMON_X},
//     {86, 53, 41, 73, 81, 85, SPECIES_WEREGARURUMON_X},
//     {86, 53, 41, 73, 81, 85, SPECIES_MAMEMON_X},
//     {86, 53, 41, 73, 81, 85, SPECIES_TRICERAMON_X},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sGekomonDigivolveTable[] = {
    {90, 53, 53, 61, 85, 77, SPECIES_SHOGUNGEKOMON},
    // {90, 53, 53, 61, 85, 77, SPECIES_SIRENMON},
    {90, 65, 53, 73, 85, 77, SPECIES_DIVERMON},
    {102, 53, 53, 73, 85, 77, SPECIES_DRAGOMON},
    {90, 53, 70, 61, 85, 77, SPECIES_GARBAGEMON},
    {107, 53, 53, 61, 85, 77, SPECIES_BIGMAMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGeogreymonDigivolveTable[] = {
    // {114, 77, 77, 53, 53, 49, SPECIES_RIZEGREYMON},
    // {114, 77, 77, 53, 53, 49, SPECIES_GROUNDRAMON},
    // {114, 77, 77, 53, 53, 49, SPECIES_WINGDRAMON},
    // {114, 77, 77, 53, 53, 49, SPECIES_VOLDRAMON},
    {114, 77, 94, 53, 53, 49, SPECIES_METALTYRANNOMON},
    {114, 94, 77, 53, 53, 49, SPECIES_METALGREYMON_VIRUS},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGeremonDigivolveTable[] = {
    {110, 53, 69, 53, 69, 21, SPECIES_MONZAEMON},
    {110, 70, 69, 53, 69, 21, SPECIES_ETEMON},
    {110, 53, 69, 70, 69, 21, SPECIES_VADEMON},
    {110, 53, 81, 53, 81, 21, SPECIES_PHANTOMON},
    // {110, 53, 69, 53, 69, 21, SPECIES_BLACKKINGNUMEMON},
    // {110, 53, 69, 53, 69, 21, SPECIES_CATCHMAMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGesomonDigivolveTable[] = {
    {122, 53, 53, 69, 77, 53, SPECIES_DRAGOMON},
    {122, 53, 53, 86, 77, 53, SPECIES_VADEMON},
    {122, 53, 53, 69, 77, 70, SPECIES_WARUSEADRAMON},
    {134, 53, 53, 69, 89, 53, SPECIES_MEGASEADRAMON},
    {122, 70, 53, 69, 77, 53, SPECIES_SCORPIOMON},
    {139, 53, 53, 69, 77, 53, SPECIES_SHOGUNGEKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGreymonDigivolveTable[] = {
    {114, 77, 57, 69, 53, 53, SPECIES_METALGREYMON},
    {126, 77, 57, 81, 53, 53, SPECIES_SKULLGREYMON},
    {114, 94, 57, 69, 53, 53, SPECIES_MAMEMON},
    {114, 77, 57, 69, 70, 53, SPECIES_KIMERAMON},
    // {114, 77, 57, 69, 53, 53, SPECIES_DORUGREYMON},
    // {114, 77, 57, 69, 53, 53, SPECIES_NEODEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKabuterimonDigivolveTable[] = {
    {90, 57, 73, 73, 49, 77, SPECIES_MEGAKABUTERIMON_RED},
    {90, 57, 90, 73, 49, 77, SPECIES_MEGAKABUTERIMON_BLUE},
    // {90, 57, 73, 73, 49, 77, SPECIES_JEWELBEEMON},
    // {90, 57, 73, 73, 49, 77, SPECIES_METALLIFEKUWAGAMON},
    {90, 74, 73, 73, 49, 77, SPECIES_OKUWAMON},
    // {90, 57, 73, 73, 49, 77, SPECIES_WINGDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMeramonDigivolveTable[] = {
    {98, 65, 53, 77, 69, 53, SPECIES_SKULLMERAMON},
    {98, 65, 53, 94, 69, 53, SPECIES_BLUEMERAMON},
    // {98, 65, 53, 77, 69, 53, SPECIES_LAVOGARITAMON},
    // {98, 65, 53, 77, 69, 53, SPECIES_VOLCANOMON},
    // {98, 65, 53, 77, 69, 53, SPECIES_BURNINGGREYMON},
    // {98, 65, 53, 77, 69, 53, SPECIES_SUPERSTARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNumemonDigivolveTable[] = {
    // {98, 49, 45, 61, 53, 61, SPECIES_BLACKKINGNUMEMON},
    {115, 49, 45, 61, 53, 61, SPECIES_MONZAEMON},
    {98, 49, 45, 78, 53, 61, SPECIES_VADEMON},
    {98, 66, 45, 61, 53, 61, SPECIES_ETEMON},
    {98, 49, 62, 61, 53, 61, SPECIES_GARBAGEMON},
    // {98, 49, 45, 61, 53, 61, SPECIES_PAJIRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSeadramonDigivolveTable[] = {
    {106, 57, 49, 69, 53, 73, SPECIES_MEGASEADRAMON},
    {106, 57, 49, 69, 53, 90, SPECIES_WARUSEADRAMON},
    // {106, 57, 49, 69, 53, 73, SPECIES_SKULLSEADRAMON},
    // {106, 57, 49, 69, 53, 73, SPECIES_GUSOKUMON},
    // {106, 57, 49, 69, 53, 73, SPECIES_MARINKIMERAMON},
    {106, 74, 49, 69, 53, 73, SPECIES_MAMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTyrannomonDigivolveTable[] = {
    {110, 77, 57, 69, 49, 53, SPECIES_MASTERTYRANNOMON},
    {110, 77, 74, 69, 49, 53, SPECIES_METALTYRANNOMON},
    {122, 77, 57, 81, 49, 53, SPECIES_SKULLGREYMON},
    {110, 77, 57, 69, 66, 53, SPECIES_EXTYRANNOMON},
    // {110, 77, 57, 69, 49, 53, SPECIES_MAMETYRAMON},
    // {110, 77, 57, 69, 49, 53, SPECIES_HELLOOGARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVegiemonDigivolveTable[] = {
    {106, 53, 69, 57, 69, 45, SPECIES_VADEMON},
    // {106, 53, 69, 57, 69, 45, SPECIES_ENTMON},
    {123, 53, 69, 57, 69, 45, SPECIES_CHERRYMON},
    // {106, 53, 69, 57, 69, 45, SPECIES_TOROPIAMON},
    // {106, 53, 69, 57, 69, 45, SPECIES_AJATARMON},
    // {106, 53, 69, 57, 69, 45, SPECIES_LILAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWhamonDigivolveTable[] = {
    {138, 45, 61, 49, 53, 45, SPECIES_MARINEDEVIMON},
    {138, 45, 61, 49, 53, 62, SPECIES_WARUSEADRAMON},
    // {138, 45, 61, 49, 53, 45, SPECIES_SHAUJINMON},
    {155, 45, 61, 49, 53, 45, SPECIES_BIGMAMEMON},
    // {138, 45, 61, 49, 53, 45, SPECIES_DURAMON},
    // {138, 45, 61, 49, 53, 45, SPECIES_WINGDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKokatorimonDigivolveTable[] = {
    {114, 57, 45, 65, 53, 61, SPECIES_MEGADRAMON},
    // {114, 57, 45, 65, 53, 61, SPECIES_SINDURAMON},
    // {114, 57, 45, 65, 53, 61, SPECIES_PETALDRAMON},
    // {114, 57, 45, 65, 53, 61, SPECIES_ZAMIELMON},
    // {114, 57, 45, 65, 53, 61, SPECIES_ZEPHYRMON},
    // {114, 57, 45, 65, 53, 61, SPECIES_BUTENMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVilemonDigivolveTable[] = {
    {98, 49, 45, 61, 53, 77, SPECIES_TEKKAMON},
    // {98, 49, 45, 61, 53, 77, SPECIES_FERESMON},
    // {98, 49, 45, 61, 53, 77, SPECIES_MEPHISTOMON},
    // {98, 49, 45, 61, 53, 77, SPECIES_MATADORMON},
    {98, 66, 45, 61, 53, 77, SPECIES_MYOTISMON},
    {98, 57, 45, 69, 53, 85, SPECIES_LADYDEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRoachmonDigivolveTable[] = {
    {138, 37, 69, 33, 45, 85, SPECIES_GARBAGEMON},
    // {138, 37, 69, 33, 45, 85, SPECIES_SKULLSCORPIOMON},
    {138, 54, 69, 33, 45, 85, SPECIES_OKUWAMON},
    {155, 37, 69, 33, 45, 85, SPECIES_ARUKENIMON},
    {138, 37, 69, 50, 45, 85, SPECIES_OROCHIMON},
    // {138, 37, 69, 33, 45, 85, SPECIES_JEWELBEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGorillamonDigivolveTable[] = {
    // {114, 85, 49, 65, 45, 65, SPECIES_MAKURAMON},
    {114, 85, 49, 65, 45, 82, SPECIES_PARROTMON},
    {131, 85, 49, 65, 45, 65, SPECIES_MAMMOTHMON},
    {114, 102, 49, 65, 45, 65, SPECIES_WEREGARURUMON},
    {114, 85, 49, 82, 45, 65, SPECIES_SKULLMERAMON},
    // {114, 85, 49, 65, 45, 65, SPECIES_BULBMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sIkkakumonDigivolveTable[] = {
    {122, 49, 53, 53, 73, 41, SPECIES_ZUDOMON},
    {122, 49, 53, 53, 73, 58, SPECIES_ICELEOMON},
    {122, 49, 70, 53, 73, 41, SPECIES_JAGAMON},
    // {122, 49, 53, 53, 73, 41, SPECIES_MARINKIMERAMON},
    {122, 66, 53, 53, 73, 41, SPECIES_TRICERAMON},
    {122, 62, 53, 63, 73, 41, SPECIES_PUMPKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKuwagamonDigivolveTable[] = {
    {94, 77, 69, 49, 57, 61, SPECIES_OKUWAMON},
    {94, 77, 86, 49, 57, 61, SPECIES_METALTYRANNOMON},
    {94, 77, 69, 66, 57, 61, SPECIES_MEGADRAMON},
    {94, 89, 69, 49, 69, 61, SPECIES_KIMERAMON},
    // {94, 77, 69, 49, 57, 61, SPECIES_METALLIFEKUWAGAMON},
    // {94, 77, 69, 49, 57, 61, SPECIES_CANNONBEEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLeomonDigivolveTable[] = {
    // {122, 73, 69, 65, 33, 57, SPECIES_GRAPLEOMON},
    {122, 73, 69, 65, 33, 74, SPECIES_ICELEOMON},
    // {122, 73, 69, 65, 33, 57, SPECIES_LOADERLEOMON},
    // {122, 73, 69, 65, 33, 57, SPECIES_LAMORTMON},
    // {122, 73, 69, 65, 33, 57, SPECIES_MACHGAOGAMON},
    // {122, 73, 69, 65, 33, 57, SPECIES_VIKARALAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShadramonDigivolveTable[] = {
    {98, 57, 49, 77, 65, 69, SPECIES_MEGAKABUTERIMON_BLUE},
    // {98, 57, 49, 77, 65, 69, SPECIES_KARATENMON},
    // {98, 57, 49, 77, 65, 69, SPECIES_VOLCANOMON},
    // {98, 57, 49, 77, 65, 69, SPECIES_BAALMON},
    // {98, 57, 49, 77, 65, 69, SPECIES_RIZEGREYMON},
    // {98, 57, 49, 77, 65, 69, SPECIES_ASTAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRaidramonDigivolveTable[] = {
    {98, 57, 49, 69, 49, 77, SPECIES_ZUDOMON},
    // {98, 57, 49, 69, 49, 77, SPECIES_BASTEMON},
    // {98, 57, 49, 69, 49, 77, SPECIES_SINDURAMON},
    // {98, 57, 49, 69, 49, 77, SPECIES_MACHGAOGAMON},
    {98, 57, 66, 69, 49, 77, SPECIES_METALTYRANNOMON},
    {98, 74, 49, 69, 49, 77, SPECIES_WARGROWLMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTogemonDigivolveTable[] = {
    {110, 69, 65, 53, 41, 49, SPECIES_LILLYMON},
    {127, 69, 65, 53, 41, 49, SPECIES_DERAMON},
    {122, 69, 65, 53, 53, 49, SPECIES_BLOSSOMON},
    // {110, 69, 65, 53, 41, 49, SPECIES_SKULLCORPIOMON},
    {110, 86, 65, 53, 41, 49, SPECIES_MUMMYMON},
    // {110, 69, 65, 53, 41, 49, SPECIES_GOGMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGrowlmonDigivolveTable[] = {
    {106, 65, 65, 57, 57, 57, SPECIES_WARGROWLMON},
    {118, 65, 65, 69, 57, 57, SPECIES_SKULLGREYMON},
    // {106, 65, 65, 57, 57, 57, SPECIES_LOUDMON},
    // {106, 65, 65, 57, 57, 57, SPECIES_KENDOGARURUMON},
    {123, 65, 65, 57, 57, 57, SPECIES_DIGITAMAMON},
    // {106, 65, 65, 57, 57, 57, SPECIES_SANDIRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sStingmonDigivolveTable[] = {
    // {94, 61, 69, 49, 65, 73, SPECIES_JEWELBEEMON},
    // {94, 61, 69, 49, 65, 73, SPECIES_INFERMON},
    {94, 78, 69, 49, 65, 73, SPECIES_MUMMYMON},
    // {94, 61, 69, 49, 65, 73, SPECIES_BAALMON},
    {111, 61, 69, 49, 65, 73, SPECIES_ARUKENIMON},
    // {94, 61, 69, 49, 65, 73, SPECIES_NEODEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTuskmonDigivolveTable[] = {
    {106, 77, 53, 49, 57, 65, SPECIES_TRICERAMON},
    {106, 94, 53, 49, 57, 65, SPECIES_MASTERTYRANNOMON},
    {106, 77, 53, 66, 57, 65, SPECIES_MEGADRAMON},
    // {106, 77, 53, 49, 57, 65, SPECIES_GROUNDRAMON},
    // {106, 77, 53, 49, 57, 65, SPECIES_DARKKNIGHTMON},
    // {106, 77, 53, 49, 57, 65, SPECIES_SAVIORHUCKMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonochromonDigivolveTable[] = {
    {118, 77, 85, 45, 45, 45, SPECIES_VERMILIMON},
    {118, 94, 85, 45, 45, 45, SPECIES_TRICERAMON},
    {118, 77, 85, 62, 45, 45, SPECIES_MEGADRAMON},
    {118, 89, 85, 45, 62, 45, SPECIES_KIMERAMON},
    {135, 77, 85, 45, 45, 45, SPECIES_MAMMOTHMON},
    {130, 89, 85, 45, 45, 45, SPECIES_METALGREYMON_VIRUS},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMekanorimonDigivolveTable[] = {
    {130, 85, 101, 77, 77, 73, SPECIES_ANDROMON},
    {130, 85, 101, 94, 77, 73, SPECIES_DATAMON},
    {130, 85, 118, 77, 77, 73, SPECIES_METALMAMEMON},
    // {130, 85, 101, 77, 77, 73, SPECIES_LOCOMON},
    {130, 85, 101, 77, 77, 90, SPECIES_GIROMON},
    // {130, 85, 101, 77, 77, 73, SPECIES_BULBMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMinotarumonDigivolveTable[] = {
    // {154, 93, 73, 29, 21, 53, SPECIES_VAJRAMON},
    {154, 110, 73, 29, 21, 53, SPECIES_ETEMON},
    // {154, 93, 73, 29, 21, 53, SPECIES_GRAPLEOMON},
    {160, 103, 73, 29, 27, 53, SPECIES_MUMMYMON},
    // {154, 93, 73, 29, 21, 53, SPECIES_REBELLIMON},
    {164, 105, 73, 29, 21, 53, SPECIES_CYBERDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMojyamonDigivolveTable[] = {
    // {86, 73, 77, 65, 61, 49, SPECIES_KORIKAKUMON},
    {103, 73, 77, 65, 61, 49, SPECIES_MAMMOTHMON},
    {86, 90, 77, 65, 61, 49, SPECIES_ZUDOMON},
    // {86, 73, 77, 65, 61, 49, SPECIES_ASTAMON},
    {86, 85, 87, 65, 61, 49, SPECIES_WEREGARURUMON},
    {95, 80, 77, 65, 68, 49, SPECIES_MONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNanimonDigivolveTable[] = {
    {102, 69, 57, 45, 49, 45, SPECIES_BIGMAMEMON},
    {102, 69, 57, 62, 49, 45, SPECIES_VADEMON},
    {102, 86, 57, 45, 49, 45, SPECIES_WARUMONZAEMON},
    {102, 81, 57, 45, 49, 55, SPECIES_MAMEMON},
    {102, 69, 57, 45, 49, 62, SPECIES_TEKKAMON},
    {102, 69, 74, 45, 49, 45, SPECIES_GARBAGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOctomonDigivolveTable[] = {
    // {106, 57, 61, 65, 61, 41, SPECIES_PIRANIMON},
    // {106, 57, 61, 65, 61, 41, SPECIES_MERMAIMON},
    {118, 57, 61, 65, 73, 41, SPECIES_MEGASEADRAMON},
    // {106, 57, 61, 65, 61, 41, SPECIES_GUSOKUMON},
    {123, 57, 61, 65, 61, 41, SPECIES_BRACHIOMON},
    {118, 57, 61, 58, 71, 41, SPECIES_DIGITAMAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOgremonDigivolveTable[] = {
    // {114, 73, 61, 37, 53, 65, SPECIES_REBELLIMON},
    {114, 73, 61, 54, 53, 65, SPECIES_SKULLSATAMON},
    {131, 73, 61, 37, 53, 65, SPECIES_DIGITAMAMON},
    {114, 73, 78, 37, 53, 65, SPECIES_METALTYRANNOMON},
    // {114, 73, 61, 37, 53, 65, SPECIES_MATADORMON},
    // {114, 73, 61, 37, 53, 65, SPECIES_INDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTeslajellymonDigivolveTable[] = {
    // {106, 53, 41, 81, 53, 69, SPECIES_THETISMON},
    {106, 53, 41, 81, 70, 69, SPECIES_MARINEDEVIMON},
    {118, 53, 41, 81, 65, 69, SPECIES_MEGASEADRAMON},
    {106, 53, 41, 81, 53, 86, SPECIES_WARUSEADRAMON},
    {106, 70, 41, 81, 53, 69, SPECIES_ZUDOMON},
    // {106, 53, 41, 81, 53, 69, SPECIES_BLACKKINGNUMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRaremonDigivolveTable[] = {
    // {146, 41, 73, 49, 65, 25, SPECIES_RARERAREMON},
    {146, 41, 90, 49, 65, 25, SPECIES_GARBAGEMON},
    // {146, 41, 73, 49, 65, 25, SPECIES_BLACKKINGNUMEMON},
    {163, 41, 73, 49, 65, 25, SPECIES_SHOGUNGEKOMON},
    // {146, 41, 73, 49, 65, 25, SPECIES_REBELLIMON},
    // {146, 41, 73, 49, 65, 25, SPECIES_SKULLBALUCHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSukamonDigivolveTable[] = {
    {106, 49, 29, 69, 45, 37, SPECIES_KINGSUKAMON},
    {106, 66, 29, 69, 45, 37, SPECIES_ETEMON},
    // {106, 49, 29, 69, 45, 37, SPECIES_BLACKKINGNUMEMON},
    {106, 49, 46, 69, 45, 37, SPECIES_GARBAGEMON},
    {123, 49, 29, 69, 45, 37, SPECIES_MONZAEMON},
    // {106, 49, 29, 69, 45, 37, SPECIES_SUPERSTARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShellmonDigivolveTable[] = {
    // {106, 41, 93, 61, 69, 37, SPECIES_MARINEBULLMON},
    // {106, 41, 93, 61, 69, 37, SPECIES_GUSOKUMON},
    // {106, 41, 93, 61, 69, 37, SPECIES_PIRANIMON},
    {106, 58, 93, 61, 69, 37, SPECIES_ZUDOMON},
    {106, 53, 103, 61, 69, 37, SPECIES_TRICERAMON},
    // {106, 41, 93, 61, 69, 37, SPECIES_SAVIORHUCKMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sStarmonDigivolveTable[] = {
//     // {90, 69, 53, 61, 53, 73, SPECIES_SUPERSTARMON},
//     // {90, 69, 53, 61, 53, 73, SPECIES_PANDAMON},
//     // {90, 69, 53, 61, 53, 73, SPECIES_SAVIORHUCKMON},
//     // {90, 69, 53, 61, 53, 73, SPECIES_CROWMON_06},
//     // {90, 69, 53, 61, 53, 73, SPECIES_MAKURAMON},
//     // {90, 69, 53, 61, 53, 73, SPECIES_CRESCEMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sTortomonDigivolveTable[] = {
    {102, 57, 77, 41, 69, 41, SPECIES_TRICERAMON},
    // {102, 57, 77, 41, 69, 41, SPECIES_GOGMAMON},
    {102, 57, 77, 41, 69, 58, SPECIES_AEROVEEDRAMON},
    {102, 57, 94, 41, 69, 41, SPECIES_JAGAMON},
    {119, 57, 77, 41, 69, 41, SPECIES_BRACHIOMON},
    // {102, 57, 77, 41, 69, 41, SPECIES_VULTUREMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sUnimonDigivolveTable[] = {
//     // {98, 81, 49, 57, 45, 69, SPECIES_HIPPOGRYPHONMON},
//     // {98, 81, 49, 57, 45, 69, SPECIES_TYILINMON},
//     // {98, 81, 49, 57, 45, 69, SPECIES_WINGDRAMON},
//     // {98, 81, 49, 57, 45, 69, SPECIES_INDRAMON},
//     // {98, 81, 49, 57, 45, 69, SPECIES_SINDURAMON},
//     // {98, 81, 49, 57, 45, 69, SPECIES_MACHGAOGAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sVeedramonDigivolveTable[] = {
    {122, 65, 73, 53, 77, 57, SPECIES_AEROVEEDRAMON},
    // {122, 65, 73, 53, 77, 57, SPECIES_GROUNDRAMON},
    {122, 65, 90, 53, 77, 57, SPECIES_METALTYRANNOMON},
    {134, 65, 73, 65, 77, 57, SPECIES_SKULLGREYMON},
    {139, 65, 73, 53, 77, 57, SPECIES_DIGITAMAMON},
    {131, 72, 80, 53, 77, 57, SPECIES_ASURAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGolemonDigivolveTable[] = {
    // {118, 85, 101, 45, 45, 53, SPECIES_GOGMAMON},
    // {118, 85, 101, 45, 45, 53, SPECIES_SKULLSCORPIOMON},
    {118, 102, 101, 45, 45, 53, SPECIES_METALGREYMON_VIRUS},
    {135, 85, 101, 45, 45, 53, SPECIES_MAMMOTHMON},
    {130, 95, 101, 45, 45, 53, SPECIES_BIGMAMEMON},
    {118, 85, 101, 62, 45, 53, SPECIES_OROCHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGururumonDigivolveTable[] = {
    {98, 57, 61, 69, 61, 85, SPECIES_BLUEMERAMON},
    // {98, 57, 61, 69, 61, 85, SPECIES_WEREGARURUMON_BLACK},
    // {98, 57, 61, 69, 61, 85, SPECIES_TAOMON_SILVER},
    // {98, 57, 61, 69, 61, 85, SPECIES_BLACKWARGROWLMON},
    // {98, 57, 61, 69, 61, 85, SPECIES_MACHGAOGAMON},
    // {98, 57, 61, 69, 61, 85, SPECIES_ASTAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGuardromonDigivolveTable[] = {
    {138, 65, 85, 45, 57, 33, SPECIES_ANDROMON},
    // {138, 65, 85, 45, 57, 33, SPECIES_LOCOMON},
    {138, 65, 102, 45, 57, 33, SPECIES_METALMAMEMON},
    {145, 72, 94, 45, 57, 33, SPECIES_METALTYRANNOMON},
    {138, 82, 85, 45, 57, 33, SPECIES_WARGROWLMON},
    {138, 65, 85, 45, 57, 50, SPECIES_TEKKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHoneybeemonDigivolveTable[] = {
    {94, 45, 61, 45, 77, 101, SPECIES_ARUKENIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sHyogamonDigivolveTable[] = {
    // {102, 69, 69, 61, 53, 53, SPECIES_FROZOMON},
    {102, 69, 69, 61, 53, 70, SPECIES_ICELEOMON},
    // {102, 69, 69, 61, 53, 53, SPECIES_POLARBEARMON},
    // {102, 69, 69, 61, 53, 53, SPECIES_CRYSPALEDRAMON},
    {102, 69, 69, 78, 53, 53, SPECIES_BLUEMERAMON},
    {102, 86, 69, 61, 53, 53, SPECIES_WARUMONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sIcedevimonDigivolveTable[] = {
    // {90, 85, 109, 45, 53, 53, SPECIES_DOUMON},
    // {90, 85, 109, 45, 53, 53, SPECIES_CRESCEMON},
    // {90, 85, 109, 45, 53, 53, SPECIES_SKULLBALUCHIMON}, 
    {90, 85, 109, 45, 70, 53, SPECIES_MARINEDEVIMON},
    // {90, 85, 109, 45, 53, 53, SPECIES_NEODEVIMON},
    // {90, 85, 109, 45, 53, 53, SPECIES_ENBARRMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sIcemonDigivolveTable[] = {
    {102, 57, 89, 49, 89, 37, SPECIES_METEORMON},
    // {102, 57, 89, 49, 89, 37, SPECIES_KORIKAKUMON},
    // {102, 57, 89, 49, 89, 37, SPECIES_CRESCEMON},
    {102, 57, 89, 49, 89, 54, SPECIES_ICELEOMON},
    {102, 74, 89, 49, 89, 37, SPECIES_WEREGARURUMON},
    // {102, 57, 89, 49, 89, 37, SPECIES_VOLCANOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sNinjamonDigivolveTable[] = {
    {86, 69, 53, 65, 49, 73, SPECIES_GIROMON},
    // {86, 69, 53, 65, 49, 73, SPECIES_KARATENMON},
    {86, 86, 53, 65, 49, 73, SPECIES_MAMEMON},
    // {86, 69, 53, 65, 49, 73, SPECIES_DARKKNIGHTMON},
    // {86, 69, 53, 65, 49, 73, SPECIES_REGULUSMON},
    // {86, 69, 53, 65, 49, 73, SPECIES_LILAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJunglemojyamonDigivolveTable[] = {
    {86, 73, 65, 41, 65, 73, SPECIES_ETEMON},
    {86, 80, 72, 48, 72, 73, SPECIES_METEORMON},
    {86, 73, 65, 41, 65, 90, SPECIES_ICELEOMON},
    // {86, 73, 65, 41, 65, 73, SPECIES_VOLCANOMON},
    {86, 90, 65, 41, 65, 73, SPECIES_MYOTISMON},
    {86, 73, 65, 41, 65, 73, SPECIES_WARUMONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShellnumemonDigivolveTable[] = {
    // {86, 45, 105, 41, 85, 29, SPECIES_BLACKKINGNUMEMON},
    // {86, 45, 105, 41, 85, 29, SPECIES_MERMAIMON},
    // {86, 45, 105, 41, 85, 29, SPECIES_SHAUJINMON},
    // {86, 45, 105, 41, 85, 29, SPECIES_SIRENMON},
    {103, 45, 105, 41, 85, 29, SPECIES_SHOGUNGEKOMON},
    {86, 45, 105, 58, 85, 29, SPECIES_OROCHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKiwimonDigivolveTable[] = {
    {94, 57, 49, 57, 81, 85, SPECIES_BLOSSOMON},
    {111, 57, 49, 57, 81, 85, SPECIES_DERAMON},
    // {94, 57, 49, 57, 81, 85, SPECIES_SINDURAMON},
    {94, 57, 49, 69, 93, 85, SPECIES_LILLYMON},
    // {94, 57, 49, 57, 81, 85, SPECIES_GRANDGALEMON},
    {94, 64, 49, 64, 88, 85, SPECIES_GARUDAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMorishellmonDigivolveTable[] = {
    {106, 41, 81, 69, 73, 37, SPECIES_TRICERAMON},
    {123, 41, 81, 69, 73, 37, SPECIES_DIGITAMAMON},
    {106, 41, 98, 69, 73, 37, SPECIES_VERMILIMON},
    {106, 58, 81, 69, 73, 37, SPECIES_SCORPIOMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sMusyamonDigivolveTable[] = {
//     // {98, 85, 45, 53, 41, 93, SPECIES_OBOROMON},
//     // {98, 85, 45, 53, 41, 93, SPECIES_BUTENMON},
//     // {98, 85, 45, 53, 41, 93, SPECIES_GYUUKIMON},
//     // {98, 85, 45, 53, 41, 93, SPECIES_GRADEMON},
//     // {98, 85, 45, 53, 41, 93, SPECIES_KARATENMON},
//     // {98, 85, 45, 53, 41, 93, SPECIES_HISYARYUMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sNisedrimogemonDigivolveTable[] = {
    {122, 61, 69, 73, 57, 57, SPECIES_VERMILIMON},
    {122, 61, 69, 90, 57, 57, SPECIES_SKULLSATAMON},
    // {122, 61, 69, 73, 57, 57, SPECIES_DORUGREYMON},
    {122, 68, 76, 80, 64, 57, SPECIES_METEORMON},
    {139, 61, 69, 73, 57, 57, SPECIES_DIGITAMAMON},
    {122, 61, 86, 73, 57, 57, SPECIES_MEGAKABUTERIMON_BLUE},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOrcamonDigivolveTable[] = {
    // {114, 45, 81, 57, 69, 61, SPECIES_MERMAIMON},
    {114, 45, 81, 57, 81, 73, SPECIES_MARINEDEVIMON},
    // {114, 45, 81, 57, 69, 61, SPECIES_BASTEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPidmonDigivolveTable[] = {
    // {90, 65, 61, 85, 85, 61, SPECIES_ARKHAIANGEMON},
    {90, 82, 61, 85, 85, 61, SPECIES_MAGNAANGEMON},
    // {90, 65, 61, 85, 85, 61, SPECIES_HUANKUNMON},
    {107, 65, 61, 85, 85, 61, SPECIES_MONZAEMON},
    {90, 65, 73, 85, 97, 61, SPECIES_PHANTOMON},
    // {90, 65, 61, 85, 85, 61, SPECIES_FLAREMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPlatinumsukamonDigivolveTable[] = {
    {106, 57, 125, 37, 69, 29, SPECIES_KINGSUKAMON},
    {106, 57, 142, 37, 69, 29, SPECIES_GARBAGEMON},
    // {106, 57, 125, 37, 69, 29, SPECIES_CATCHMAMEMON},
    {106, 74, 125, 37, 69, 29, SPECIES_MAMEMON},
    {106, 67, 137, 37, 69, 29, SPECIES_METALMAMEMON},
    {106, 66, 132, 37, 69, 36, SPECIES_ETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRedvegiemonDigivolveTable[] = {
    // {86, 49, 65, 77, 81, 41, SPECIES_WARGROWLMON_ORANGE},
    {98, 49, 65, 77, 93, 41, SPECIES_BLOSSOMON},
    {103, 49, 65, 77, 81, 41, SPECIES_SHOGUNGEKOMON},
    {98, 49, 75, 77, 81, 41, SPECIES_DERAMON},
    {95, 49, 65, 84, 88, 41, SPECIES_CHERRYMON},
    {86, 49, 65, 94, 81, 41, SPECIES_LILLYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSaberdramonDigivolveTable[] = {
    // {110, 61, 41, 77, 65, 77, SPECIES_CYBERDRAMON_2010},
    // {110, 61, 41, 77, 65, 77, SPECIES_VELGRMON},
    // {110, 61, 41, 77, 65, 77, SPECIES_KARATENMON},
    // {110, 61, 41, 77, 65, 77, SPECIES_CROWMON_06},
    {110, 61, 41, 77, 65, 94, SPECIES_PARROTMON},
    // {110, 61, 41, 77, 65, 77, SPECIES_JOKERMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSandyanmamonDigivolveTable[] = {
    {106, 65, 49, 53, 49, 85, SPECIES_SCORPIOMON},
    {106, 82, 49, 53, 49, 85, SPECIES_OKUWAMON},
    {106, 65, 49, 53, 49, 102, SPECIES_GIGADRAMON},
    {123, 65, 49, 53, 49, 85, SPECIES_BRACHIOMON},
    {118, 65, 49, 63, 49, 85, SPECIES_SHOGUNGEKOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sShimaunimonDigivolveTable[] = {
    {98, 89, 53, 69, 41, 49, SPECIES_PIXIMON},
    {115, 89, 53, 69, 41, 49, SPECIES_MAMMOTHMON},
    {110, 89, 53, 81, 41, 49, SPECIES_SKULLGREYMON},
    {98, 89, 65, 81, 41, 49, SPECIES_ANDROMON},
    {107, 96, 60, 69, 41, 49, SPECIES_ASURAMON},
    // {98, 89, 53, 69, 41, 49, SPECIES_SUPERSTARMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSnimonDigivolveTable[] = {
    // {102, 101, 45, 49, 41, 69, SPECIES_AJATARMON},
    // {102, 101, 45, 49, 41, 69, SPECIES_JEWELBEEMON},
    {102, 118, 45, 49, 41, 69, SPECIES_OKUWAMON},
    // {102, 101, 45, 49, 41, 69, SPECIES_TOROPIAMON},
    {119, 101, 45, 49, 41, 69, SPECIES_ARUKENIMON},
    // {102, 101, 45, 49, 41, 69, SPECIES_KYUKIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSoulmonDigivolveTable[] = {
    // {90, 49, 53, 93, 85, 45, SPECIES_METALPHANTOMON},
    {90, 49, 65, 93, 97, 45, SPECIES_PHANTOMON},
    {90, 66, 53, 93, 85, 45, SPECIES_MUMMYMON},
    {90, 49, 53, 110, 85, 45, SPECIES_SKULLSATAMON},
    {96, 57, 59, 99, 85, 45, SPECIES_MYOTISMON},
    // {90, 49, 53, 93, 85, 45, SPECIES_INDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTankmonDigivolveTable[] = {
    // {98, 57, 93, 93, 69, 37, SPECIES_TANKDRAMON},
    {98, 57, 110, 93, 69, 37, SPECIES_GARBAGEMON},
    // {98, 57, 93, 93, 69, 37, SPECIES_LOCOMON},
    // {98, 57, 93, 93, 69, 37, SPECIES_CARGODRAMON},
    {115, 57, 93, 93, 69, 37, SPECIES_TINMON},
    {98, 69, 105, 93, 69, 37, SPECIES_KNIGHTMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sThunderballmonDigivolveTable[] = {
//     // {90, 49, 53, 101, 49, 85, SPECIES_SEPHIROPHMON},
//     // {90, 49, 53, 101, 49, 85, SPECIES_BOUTMON},
//     // {90, 49, 53, 101, 49, 85, SPECIES_MAMETYRAMON},
//     // {90, 49, 53, 101, 49, 85, SPECIES_METALKABUTERIMON},
//     // {90, 49, 53, 101, 49, 85, SPECIES_WISEMON},
//     //{90, 49, 53, 101, 49, 85, SPECIES_SUPERSTARMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sMudfrigimonDigivolveTable[] = {
    // {110, 53, 57, 61, 77, 53, SPECIES_ANTYLAMON_DATA},
    {110, 53, 74, 61, 77, 53, SPECIES_JAGAMON},
    {110, 60, 64, 68, 84, 53, SPECIES_METEORMON},
    // {110, 53, 57, 61, 77, 53, SPECIES_PANDAMON},
    {110, 70, 57, 61, 77, 53, SPECIES_PUMPKINMON},
    {110, 53, 57, 61, 77, 70, SPECIES_TEKKAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWizardmonDigivolveTable[] = {
    // {106, 41, 45, 77, 69, 53, SPECIES_MISTYMON},
    // {106, 41, 45, 77, 69, 53, SPECIES_BAALMON},
    // {106, 41, 45, 77, 69, 53, SPECIES_WISEMON},
    // {106, 41, 45, 77, 69, 53, SPECIES_BISHOPCHESSMON_WHITE},
    // {106, 41, 45, 77, 69, 53, SPECIES_LUCEMON_FALLDOWN_MODE},
    {106, 41, 45, 94, 69, 53, SPECIES_DATAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWoodmonDigivolveTable[] = {
    {110, 41, 93, 53, 69, 37, SPECIES_CHERRYMON},
    // {110, 41, 93, 53, 69, 37, SPECIES_ARGOMON_ULTIMATE},
    {127, 41, 93, 53, 69, 37, SPECIES_DERAMON},
    {122, 41, 93, 53, 81, 37, SPECIES_BLOSSOMON},
    // {110, 41, 93, 53, 69, 37, SPECIES_GROUNDRAMON},
    // {110, 41, 93, 53, 69, 37, SPECIES_TAOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sYanmamonDigivolveTable[] = {
    {94, 57, 65, 57, 57, 77, SPECIES_MEGAKABUTERIMON_RED},
    {94, 57, 65, 69, 69, 77, SPECIES_LILLYMON},
    // {94, 57, 65, 57, 57, 77, SPECIES_JEWELBEEMON},
    {94, 74, 65, 57, 57, 77, SPECIES_OKUWAMON},
    {94, 57, 65, 74, 57, 77, SPECIES_PIXIMON},
    {94, 69, 65, 69, 57, 77, SPECIES_PUMPKINMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWeedmonDigivolveTable[] = {
    {94, 53, 81, 57, 81, 33, SPECIES_BLOSSOMON},
    // {94, 53, 81, 57, 81, 33, SPECIES_PETALDRAMON},
    // {94, 53, 81, 57, 81, 33, SPECIES_LILAMON},
    // {94, 53, 81, 57, 81, 33, SPECIES_ZEPHYRMON},
    // {94, 53, 81, 57, 81, 33, SPECIES_ARGOMON_ULTIMATE},
    // {94, 53, 81, 57, 81, 33, SPECIES_ZAMIELMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMamemonDigivolveTable[] = {
    // {142, 137, 89, 65, 77, 119, SPECIES_PRINCEMAMEMON},
    // {142, 137, 89, 65, 77, 119, SPECIES_BANCHOMAMEMON},
    {142, 167, 89, 65, 77, 119, SPECIES_PUKUMON},
    {142, 137, 89, 65, 107, 119, SPECIES_JIJIMON},
    {142, 158, 89, 83, 77, 119, SPECIES_PUPPETMON},
    // {142, 137, 89, 65, 77, 119, SPECIES_LAMPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetalgreymon_virusDigivolveTable[] = {
    // {190, 137, 113, 113, 77, 77, SPECIES_BLACKWARGREYMON},
    {220, 137, 113, 113, 77, 77, SPECIES_MACHINEDRAMON},
    // {190, 137, 113, 113, 77, 77, SPECIES_DARKDRAMON},
    // {190, 137, 113, 113, 77, 77, SPECIES_ALDAMON},
    {190, 137, 113, 143, 77, 77, SPECIES_CREEPYMON},
    // {190, 137, 113, 113, 77, 77, SPECIES_GAIOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetalmamemonDigivolveTable[] = {
    {148, 107, 167, 143, 89, 89, SPECIES_MACHINEDRAMON},
    // {148, 107, 167, 143, 89, 89, SPECIES_PRINCEMAMEMON},
    // {148, 107, 167, 143, 89, 89, SPECIES_EBEMON},
    // {148, 107, 167, 143, 89, 89, SPECIES_HIANDROMON},
    // {148, 107, 167, 143, 89, 89, SPECIES_QUANTUMON},
    // {148, 107, 167, 143, 89, 89, SPECIES_GRANDLOCOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMonzaemonDigivolveTable[] = {
    // {262, 137, 83, 83, 137, 41, SPECIES_SHINMONZAEMON},
    // {262, 137, 83, 83, 137, 41, SPECIES_LILLITHMON},
    // {262, 137, 83, 83, 137, 41, SPECIES_CHERUBIMON_GOOD},
    {262, 137, 83, 83, 137, 71, SPECIES_PIEDMON},
    // {262, 137, 83, 83, 137, 41, SPECIES_JUMBOGAMEMON},
    {292, 137, 83, 83, 137, 41, SPECIES_KINGETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSkullgreymonDigivolveTable[] = {
    {214, 137, 95, 149, 89, 65, SPECIES_MACHINEDRAMON},
    // {214, 137, 95, 149, 89, 65, SPECIES_TITAMON},
    {214, 167, 95, 149, 89, 65, SPECIES_SKULLMAMMOTHMON},
    // {214, 137, 95, 149, 89, 65, SPECIES_PHARAOHMON},
    // {214, 137, 95, 149, 89, 65, SPECIES_SPINOMON},
    // {214, 137, 95, 149, 89, 65, SPECIES_CRANIAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVademonDigivolveTable[] = {
    // {142, 71, 83, 125, 113, 89, SPECIES_EBEMON},
    // {142, 71, 83, 125, 113, 89, SPECIES_AVENGEKIDMON},
    {142, 71, 83, 155, 113, 89, SPECIES_VENOMMYOTISMON},
    {142, 101, 83, 125, 113, 89, SPECIES_PUPPETMON},
    // {142, 71, 83, 125, 113, 89, SPECIES_HIANDROMON},
    {142, 71, 83, 125, 143, 89, SPECIES_BABAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAndromonDigivolveTable[] = {
    // {160, 101, 125, 125, 107, 95, SPECIES_HIANDROMON},
    {190, 101, 125, 125, 107, 95, SPECIES_MACHINEDRAMON},
    // {160, 101, 125, 125, 107, 95, SPECIES_JUSTIMON_BLITZ_ARM},
    // {160, 101, 125, 125, 107, 95, SPECIES_REAPERMON},
    {160, 101, 125, 155, 107, 95, SPECIES_BLITZGREYMON},
    // {160, 101, 125, 125, 107, 95, SPECIES_RUSTTYRANNOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAngewomonDigivolveTable[] = {
    // {154, 89, 77, 137, 149, 112, SPECIES_OPHANIMON},
    {184, 89, 77, 137, 149, 112, SPECIES_MAGNADRAMON},
    // {154, 89, 77, 137, 149, 112, SPECIES_LOVELYANGEMON},
    // {154, 89, 77, 137, 149, 112, SPECIES_JUNOMON},
    // {154, 89, 77, 137, 149, 112, SPECIES_SHAKAMON},
    // {154, 89, 77, 137, 149, 112, SPECIES_KENTAUROSMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sScorpiomonDigivolveTable[] = {
    {178, 137, 113, 77, 101, 77, SPECIES_CTHYLLAMON},
    {178, 137, 113, 77, 131, 77, SPECIES_PLESIOMON},
    // {178, 137, 113, 77, 101, 77, SPECIES_JUMBOGAMEMON},
    // {178, 137, 113, 77, 101, 77, SPECIES_GRANKUWAGAMON},
    // {178, 137, 113, 77, 101, 77, SPECIES_VULCANUSMON},
    // {178, 137, 113, 77, 101, 77, SPECIES_DONEDEVIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMegakabuterimon_blueDigivolveTable[] = {
    {208, 119, 149, 83, 113, 59, SPECIES_HERCULESKABUTERIMON},
    // {208, 119, 149, 83, 113, 59, SPECIES_TYRANTKABUTERIMON},
    // {208, 119, 149, 83, 113, 59, SPECIES_ANCIENTBEETLEMON},
    // {208, 119, 149, 83, 113, 59, SPECIES_GRANKUWAGAMON},
    // {208, 119, 149, 83, 113, 59, SPECIES_ELDRADIMON},
    // {208, 119, 149, 83, 113, 59, SPECIES_BLASTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDragomonDigivolveTable[] = {
    // {202, 113, 77, 137, 113, 77, SPECIES_LEVIAMON},
    {232, 113, 77, 137, 113, 77, SPECIES_CTHYLLAMON},
    // {202, 113, 77, 137, 113, 77, SPECIES_REGALECUSMON},
    // {202, 113, 77, 137, 113, 77, SPECIES_NEPTUNEMON},
    {202, 113, 77, 137, 143, 77, SPECIES_DEVITAMAMON},
    {218, 113, 77, 137, 132, 77, SPECIES_METALSEADRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDigitamamonDigivolveTable[] = {
    {268, 65, 65, 95, 125, 65, SPECIES_DEVITAMAMON},
    // {268, 65, 65, 95, 125, 65, SPECIES_MINERVAMON},
    // {268, 65, 65, 95, 125, 65, SPECIES_TITAMON},
    // {268, 65, 65, 95, 125, 65, SPECIES_BELPHEMON_SLEEP_MODE},
    // {268, 65, 65, 95, 125, 65, SPECIES_GHOULMON_BLACK},
    {298, 65, 65, 95, 125, 65, SPECIES_KINGETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sEtemonDigivolveTable[] = {
    {142, 149, 125, 77, 77, 125, SPECIES_KINGETEMON},
    {142, 168, 144, 77, 77, 125, SPECIES_METALETEMON},
    {142, 149, 125, 77, 77, 155, SPECIES_PIEDMON},
    {142, 149, 125, 107, 77, 125, SPECIES_CREEPYMON},
    // {142, 149, 125, 77, 77, 125, SPECIES_ANCIENTVOLCANOMON},
    // {142, 149, 125, 77, 77, 125, SPECIES_BANCHOLEOMON}, 
    DIGIVOLUTION_END,
};

static const struct Digivolution sExtyrannomonDigivolveTable[] = {
    // {190, 89, 95, 89, 137, 113, SPECIES_PARASIMON},
    {190, 119, 95, 89, 137, 113, SPECIES_PUPPETMON},
    // {190, 89, 95, 89, 137, 113, SPECIES_CHERUBIMON_GOOD},
    // {190, 89, 95, 89, 137, 113, SPECIES_BELPHEMON_SLEEP_MODE},
    // {190, 89, 95, 89, 137, 113, SPECIES_RUSTTYRANNOMON},
    // {190, 89, 95, 89, 137, 113, SPECIES_VICTORYGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGiromonDigivolveTable[] = {
    // {160, 113, 113, 113, 41, 161, SPECIES_REAPERMON},
    // {160, 113, 113, 113, 41, 161, SPECIES_RAIDENMON},
    {160, 143, 113, 113, 41, 161, SPECIES_PUKUMON},
    // {160, 113, 113, 113, 41, 161, SPECIES_RAIJINMON},
    // {160, 113, 113, 113, 41, 161, SPECIES_HIANDROMON},
    // {160, 113, 113, 113, 41, 161, SPECIES_SLASHANGEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMagnaangemonDigivolveTable[] = {
    {178, 131, 113, 113, 89, 83, SPECIES_GOLDRAMON},
    // {178, 131, 113, 113, 89, 83, SPECIES_SERAPHIMON},
    // {178, 131, 113, 113, 89, 83, SPECIES_DOMINIMON},
    // {178, 131, 113, 113, 89, 83, SPECIES_JUPITERMON},
    // {178, 131, 113, 113, 89, 83, SPECIES_AZULONGMON},
    // {178, 131, 113, 113, 89, 83, SPECIES_MURMUKUSMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMagnaangemon_priestmodeDigivolveTable[] = {
    // {202, 83, 137, 83, 137, 65, SPECIES_SERAPHIMON},
    {202, 83, 137, 83, 167, 65, SPECIES_JIJIMON},
    // {202, 83, 137, 83, 137, 65, SPECIES_CLAVISANGEMON},
    {232, 83, 137, 83, 137, 65, SPECIES_MARINEANGEMON},
    // {202, 83, 137, 83, 137, 65, SPECIES_SLASHANGEMON},
    // {202, 83, 137, 83, 137, 65, SPECIES_VIKEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sJagamonDigivolveTable[] = {
    // {166, 89, 167, 101, 113, 47, SPECIES_ANCIENTSPHINXMON},
    {166, 119, 167, 101, 113, 47, SPECIES_SABERLEOMON},
    // {166, 89, 167, 101, 113, 47, SPECIES_PHARAOHMON},
    {184, 110, 167, 101, 113, 47, SPECIES_ROSEMON},
    // {166, 89, 167, 101, 113, 47, SPECIES_BLASTMON},
    {185, 108, 167, 101, 113, 47, SPECIES_DINOREXMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sLadydevimonDigivolveTable[] = {
    // {148, 143, 83, 143, 83, 143, SPECIES_LILLITHMON},
    // {148, 143, 83, 143, 83, 143, SPECIES_BEELSTARMON},
    {178, 143, 83, 143, 83, 143, SPECIES_APOCALYMON},
    // {148, 143, 83, 143, 83, 143, SPECIES_LOTUSMON},
    // {148, 143, 83, 143, 83, 143, SPECIES_GULFMON},
    // {148, 143, 83, 143, 83, 143, SPECIES_METALGARURUMON_BLACK},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMammothmonDigivolveTable[] = {
    {208, 125, 107, 101, 107, 71, SPECIES_SKULLMAMMOTHMON},
    // {208, 125, 107, 101, 107, 71, SPECIES_ANCIENTMEGATHERIUMMON},
    // {208, 125, 107, 101, 107, 71, SPECIES_JUMBOGAMEMON},
    // {208, 125, 107, 101, 107, 71, SPECIES_VIKEMON},
    // {208, 125, 107, 101, 107, 71, SPECIES_LEOPARDMON},
    {227, 144, 107, 101, 107, 71, SPECIES_BOLTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetalgreymonDigivolveTable[] = {
    {172, 137, 137, 119, 83, 89, SPECIES_WARGREYMON},
    {172, 137, 137, 149, 83, 89, SPECIES_BLITZGREYMON},
    {202, 137, 137, 119, 83, 89, SPECIES_MACHINEDRAMON},
    // {172, 137, 137, 119, 83, 89, SPECIES_SIRIUSMON},
    // {172, 137, 137, 119, 83, 89, SPECIES_ANCIENTGREYMON},
    // {172, 137, 137, 119, 83, 89, SPECIES_EAGLEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWeregarurumonDigivolveTable[] = {
    {148, 143, 137, 77, 89, 125, SPECIES_METALGARURUMON},
    {148, 173, 137, 77, 89, 125, SPECIES_CRESGARURUMON},
    // {148, 143, 137, 77, 89, 125, SPECIES_ANCIENTGARURUMON},
    // {148, 143, 137, 77, 89, 125, SPECIES_BAIHUMON},
    // {148, 143, 137, 77, 89, 125, SPECIES_DINOTIGERMON},
    // {148, 143, 137, 77, 89, 125, SPECIES_NIDHOGGMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sDinobeemonDigivolveTable[] = {
//     // {148, 149, 95, 107, 83, 149, SPECIES_IMPERIALDRAMON_DRAGON_MODE_BLACK},
//     // {148, 149, 95, 107, 83, 149, SPECIES_GRANKUWAGAMON},
//     // {148, 149, 95, 107, 83, 149, SPECIES_TIGERVESPAMON},
//     // {148, 149, 95, 107, 83, 149, SPECIES_GUNDRAMON},
//     // {148, 149, 95, 107, 83, 149, SPECIES_BANCHOSTINGMON},
//     // {148, 149, 95, 107, 83, 149, SPECIES_HEAVYLEOMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sPaildramonDigivolveTable[] = {
//     // {154, 107, 95, 143, 101, 125, SPECIES_IMPERIALDRAMON_DRAGON_MODE},
//     // {154, 107, 95, 143, 101, 125, SPECIES_ULFORCEVEEDRAMMON},
//     // {154, 107, 95, 143, 101, 125, SPECIES_ANUBISMON},
//     // {154, 107, 95, 143, 101, 125, SPECIES_VARODURUMON},
//     // {154, 107, 95, 143, 101, 125, SPECIES_GHOULMON},
//     //{154, 107, 95, 143, 101, 125, SPECIES_GRANLOCOMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sWargrowlmonDigivolveTable[] = {
//     // {166, 137, 113, 107, 113, 83, SPECIES_DUKEMON},
//     // {166, 137, 113, 107, 113, 83, SPECIES_MEGIDRAMON},
//     // {166, 137, 113, 107, 113, 83, SPECIES_BREAKDRAMON},
//     // {166, 137, 113, 107, 113, 83, SPECIES_DARKDRAMON},
//     // {166, 137, 113, 107, 113, 83, SPECIES_JUMBOGAMEMON},
//     //{166, 137, 113, 107, 113, 83, SPECIES_METALPIRANIMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sLillymonDigivolveTable[] = {
    {130, 69, 89, 161, 161, 113, SPECIES_ROSEMON},
    // {130, 69, 89, 161, 161, 113, SPECIES_BANCHOLILLYMON},
    {160, 69, 89, 161, 161, 113, SPECIES_MARINEANGEMON},
    // {130, 69, 89, 161, 161, 113, SPECIES_BLOOMLORDMON},
    // {130, 69, 89, 161, 161, 113, SPECIES_HYDRAMON},
    // {130, 69, 89, 161, 161, 113, SPECIES_SAKUYAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMastertyrannomonDigivolveTable[] = {
    {190, 149, 125, 125, 53, 65, SPECIES_DINOMON},
    // {190, 149, 125, 125, 53, 65, SPECIES_MARSMON},
    // {190, 149, 125, 125, 53, 65, SPECIES_RUSTTYRANNOMON},
    // {190, 149, 125, 125, 53, 65, SPECIES_EXAMON},
    // {190, 149, 125, 125, 53, 65, SPECIES_CANNONDRAMON},
    // {190, 149, 125, 125, 53, 65, SPECIES_VOLCANICDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTriceramonDigivolveTable[] = {
    // {166, 149, 137, 95, 101, 77, SPECIES_SPINOMON},
    // {166, 149, 137, 95, 101, 77, SPECIES_ULTIMATEBRACHIOMON},
    // {166, 149, 137, 95, 101, 77, SPECIES_CANNONDRAMON},
    // {166, 149, 137, 95, 101, 77, SPECIES_DORBICKMON},
    {166, 179, 137, 95, 101, 77, SPECIES_SABERLEOMON},
    {166, 149, 137, 95, 131, 77, SPECIES_METALSEADRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sArukenimonDigivolveTable[] = {
    {190, 107, 113, 113, 113, 77, SPECIES_BABAMON},
    // {190, 107, 113, 113, 113, 77, SPECIES_LILLITHMON},
    // {190, 107, 113, 113, 113, 77, SPECIES_GULFMON},
    // {190, 107, 113, 113, 113, 77, SPECIES_LOTUSMON},
    // {190, 107, 113, 113, 113, 77, SPECIES_BOLTBOUTAMON},
    // {190, 107, 113, 113, 113, 77, SPECIES_MALOMYOTISMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMarinedevimonDigivolveTable[] = {
    {148, 101, 107, 107, 143, 143, SPECIES_CTHYLLAMON},
    // {148, 101, 107, 107, 143, 143, SPECIES_ANCIENTMERMAIMON},
    // {148, 101, 107, 107, 143, 143, SPECIES_BOLTBOUTAMON},
    // {148, 101, 107, 107, 143, 143, SPECIES_LEVIAMON},
    {148, 131, 107, 107, 143, 143, SPECIES_PUKUMON},
    {148, 101, 107, 137, 143, 143, SPECIES_VENOMMYOTISMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMegaseadramonDigivolveTable[] = {
    {214, 101, 101, 101, 149, 89, SPECIES_METALSEADRAMON},
    // {214, 101, 101, 101, 149, 89, SPECIES_AEGISDRAMON},
    // {214, 101, 101, 101, 149, 89, SPECIES_REGALECUSMON},
    // {214, 101, 101, 101, 149, 89, SPECIES_NEPTUNEMON},
    // {214, 101, 101, 101, 149, 89, SPECIES_SURFIMON},
    // {214, 101, 101, 101, 149, 89, SPECIES_DORUGORAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMegadramonDigivolveTable[] = {
    {184, 101, 101, 149, 71, 119, SPECIES_MACHINEDRAMON},
    // {184, 101, 101, 149, 71, 119, SPECIES_GHOULMON},
    // {184, 101, 101, 149, 71, 119, SPECIES_MEGIDRAMON},
    {184, 101, 101, 149, 101, 119, SPECIES_METALSEADRAMON},
    // {184, 101, 101, 149, 71, 119, SPECIES_ZEEDGARURUMON},
    // {184, 101, 101, 149, 71, 119, SPECIES_BRIGADRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMetaltyrannomonDigivolveTable[] = {
    // {190, 125, 137, 101, 95, 95, SPECIES_RUSTTYRANNOMON},
    {220, 125, 137, 101, 95, 95, SPECIES_MACHINEDRAMON},
    // {190, 125, 137, 101, 95, 95, SPECIES_ULTIMATEBRACHIOMON},
    // {190, 125, 137, 101, 95, 95, SPECIES_GUNDRAMON},
    // {190, 125, 137, 101, 95, 95, SPECIES_BLACKMEGAGARGOMON},
    // {190, 125, 137, 101, 95, 95, SPECIES_ANCIENTTROYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDatamonDigivolveTable[] = {
    // {148, 95, 119, 149, 119, 107, SPECIES_RAIJINMON},
    // {148, 95, 119, 149, 119, 107, SPECIES_FUJINMON},
    // {148, 95, 119, 149, 119, 107, SPECIES_BARBAMON},
    // {148, 95, 119, 149, 119, 107, SPECIES_GRANLOCOMON},
    // {148, 95, 119, 149, 119, 107, SPECIES_OLEGMON},
    {148, 114, 138, 149, 119, 107, SPECIES_METALETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOkuwamonDigivolveTable[] = {
    // {166, 149, 89, 89, 77, 137, SPECIES_GRANKUWAGAMON},
    // {166, 149, 89, 89, 77, 137, SPECIES_TYRANTKABUTERIMON},
    // {166, 149, 89, 89, 77, 137, SPECIES_TIGERVESPAMON},
    // {166, 149, 89, 89, 77, 137, SPECIES_BANCHOSTINGMON},
    // {166, 149, 89, 89, 77, 137, SPECIES_ANCIENTBEETLEMON},
    {166, 149, 89, 119, 77, 137, SPECIES_DIABOROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sPumpkinmonDigivolveTable[] = {
    // {154, 125, 101, 119, 89, 107, SPECIES_NOBLEPUMPKINMON},
    {154, 155, 101, 119, 89, 107, SPECIES_PUPPETMON},
    // {154, 125, 101, 119, 89, 107, SPECIES_JOKERMON},
    // {154, 125, 101, 119, 89, 107, SPECIES_BEELZEMON_2010},
    // {154, 125, 101, 119, 89, 107, SPECIES_NEOMYOTISMON},
    {170, 144, 101, 119, 89, 107, SPECIES_ROSEMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sPiximonDigivolveTable[] = {
//     // {130, 137, 89, 155, 101, 113, SPECIES_CHERUBIMON_GOOD},
//     // {130, 137, 89, 155, 101, 113, SPECIES_BLOOMLORDMON},
//     // {130, 137, 89, 155, 101, 113, SPECIES_BACCHUSMON},
//     // {130, 137, 89, 155, 101, 113, SPECIES_CLAVISANGEMON},
//     // {130, 137, 89, 155, 101, 113, SPECIES_ELDRADIMON},
//     // {130, 137, 89, 155, 101, 113, SPECIES_VICTORYGREYMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sShogungekomonDigivolveTable[] = {
    // {130, 137, 89, 155, 101, 113, SPECIES_BACCHUSMON},
    // {130, 137, 89, 155, 101, 113, SPECIES_KINGCHESSMON},
    {160, 137, 89, 155, 101, 113, SPECIES_KINGETEMON},
    // {130, 137, 89, 155, 101, 113, SPECIES_LEVIAMON},
    {130, 137, 89, 155, 101, 143, SPECIES_PIEDMON},
    // {130, 137, 89, 155, 101, 113, SPECIES_ELDRADIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZudomonDigivolveTable[] = {
    // {178, 137, 107, 131, 101, 65, SPECIES_VIKEMON},
    {178, 137, 107, 131, 131, 65, SPECIES_PLESIOMON},
    // {178, 137, 107, 131, 101, 65, SPECIES_OLEGMON},
    // {178, 137, 107, 131, 101, 65, SPECIES_TITAMON},
    // {178, 137, 107, 131, 101, 65, SPECIES_CALLISMON},
    // {178, 137, 107, 131, 101, 65, SPECIES_JUMBOGAMEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAeroveedramonDigivolveTable[] = {
    // {154, 113, 89, 113, 125, 149, SPECIES_ULFORCEVEEDRAMON},
    // {154, 113, 89, 113, 125, 149, SPECIES_RAVEMON},
    {154, 113, 89, 113, 125, 179, SPECIES_PHOENIXMON},
    // {154, 113, 89, 113, 125, 149, SPECIES_SLAYERDRAMON},
    // {154, 113, 89, 113, 125, 149, SPECIES_METAMORMON},
    {154, 143, 89, 113, 125, 149, SPECIES_WARGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sAsuramonDigivolveTable[] = {
    // {214, 125, 125, 65, 77, 89, SPECIES_MARSMON},
    {233, 144, 125, 65, 77, 89, SPECIES_BOLTMON},
    // {214, 125, 125, 65, 77, 89, SPECIES_OURYUMON},
    {214, 155, 125, 65, 77, 89, SPECIES_ZANBAMON},
    // {214, 125, 125, 65, 77, 89, SPECIES_DOMINIMON},
    // {214, 125, 125, 65, 77, 89, SPECIES_LAMPMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMegakabuterimon_redDigivolveTable[] = {
    {214, 137, 137, 101, 83, 83, SPECIES_HERCULESKABUTERIMON},
    // {214, 137, 137, 101, 83, 83, SPECIES_GRANKUWAGAMON},
    // {214, 137, 137, 101, 83, 83, SPECIES_TYRANTKABUTERIMON},
    // {214, 137, 137, 101, 83, 83, SPECIES_ANCIENTBEETLEMON},
    // {214, 137, 137, 101, 83, 83, SPECIES_BANCHOSTINGMON},
    // {214, 137, 137, 101, 83, 83, SPECIES_CHAOSGALLANTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBigmamemonDigivolveTable[] = {
    // {244, 155, 83, 83, 83, 77, SPECIES_TONOSAMAMAMEMON},
    // {244, 155, 83, 83, 83, 77, SPECIES_JUMBOGAMEMON},
    // {244, 155, 83, 83, 83, 77, SPECIES_PRINCEMAMEMON},
    // {244, 155, 83, 83, 83, 77, SPECIES_MEGAGARGOMON},
    {263, 174, 83, 83, 83, 77, SPECIES_BOLTMON},
    {244, 155, 83, 83, 83, 107, SPECIES_METALGARURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTinmonDigivolveTable[] = {
    {226, 89, 149, 101, 125, 35, SPECIES_BOLTMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBlossomonDigivolveTable[] = {
    // {226, 71, 95, 113, 161, 77, SPECIES_HYDRAMON},
    // {226, 71, 95, 113, 161, 77, SPECIES_BLOOMLORDMON},
    // {226, 71, 95, 113, 161, 77, SPECIES_EBONWUMON},
    // {226, 71, 95, 113, 161, 77, SPECIES_CERESMON},
    {226, 101, 95, 113, 161, 77, SPECIES_GRYPHONMON},
    // {226, 71, 95, 113, 161, 77, SPECIES_SPINOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBluemeramonDigivolveTable[] = {
    // {154, 125, 89, 137, 101, 125, SPECIES_GANKOOMON},
    // {154, 125, 89, 137, 101, 125, SPECIES_ANCIENTVOLCANOMON},
    // {154, 125, 89, 137, 101, 125, SPECIES_BARBOMON},
    {154, 125, 89, 137, 101, 155, SPECIES_PHOENIXMON},
    {154, 125, 89, 167, 101, 125, SPECIES_CREEPYMON},
    // {154, 125, 89, 137, 101, 125, SPECIES_PHARAOHMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sBrachiomonDigivolveTable[] = {
    // {238, 137, 119, 71, 71, 83, SPECIES_ULTIMATEBRACHIOMON},
    // {238, 137, 119, 71, 71, 83, SPECIES_CANNONDRAMON},
    // {238, 137, 119, 71, 71, 83, SPECIES_OURYUMON},
    // {238, 137, 119, 71, 71, 83, SPECIES_MEGIDRAMON},
    // {238, 137, 119, 71, 71, 83, SPECIES_RUSTTYRANNOMON},
    {238, 137, 119, 71, 101, 83, SPECIES_PLESIOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKimeramonDigivolveTable[] = {
    // {166, 125, 107, 113, 125, 101, SPECIES_ZHUQIAOMON},
    // {166, 125, 107, 113, 125, 101, SPECIES_DONEDEVIMON},
    // {166, 125, 107, 113, 125, 101, SPECIES_TYRANTKABUTERIMON},
    {196, 125, 107, 113, 125, 101, SPECIES_MACHINEDRAMON},
    // {166, 125, 107, 113, 125, 101, SPECIES_GRANDRACMON},
    // {166, 125, 107, 113, 125, 101, SPECIES_ULTIMATEBRACHIOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sCyberdramonDigivolveTable[] = {
    // {190, 149, 101, 89, 101, 89, SPECIES_JUSTIMON_BLITZ_ARM},
    // {190, 149, 101, 89, 101, 89, SPECIES_SUIJINMON},
    // {190, 149, 101, 89, 101, 89, SPECIES_RAVEMON},
    // {190, 149, 101, 89, 101, 89, SPECIES_DORBICKMON},
    // {190, 149, 101, 89, 101, 89, SPECIES_QUEENCHESSMON},
    {220, 149, 101, 89, 101, 89, SPECIES_MAGNADRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSkullmeramonDigivolveTable[] = {
    // {166, 107, 119, 131, 125, 83, SPECIES_BEELZEMON},
    // {166, 107, 119, 131, 125, 83, SPECIES_MARSMON},
    // {166, 107, 119, 131, 125, 83, SPECIES_AVENGEKIDMON},
    {166, 107, 119, 161, 125, 83, SPECIES_VENOMMYOTISMON},
    // {166, 107, 119, 131, 125, 83, SPECIES_VOLCANICDRAMON},
    {166, 137, 119, 131, 125, 83, SPECIES_SKULLMAMMOTHMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDeramonDigivolveTable[] = {
    // {214, 71, 125, 101, 113, 77, SPECIES_CERESMON},
    // {214, 71, 125, 101, 113, 77, SPECIES_EBONWUMON},
    {214, 101, 125, 101, 113, 77, SPECIES_ROSEMON},
    // {214, 71, 125, 101, 113, 77, SPECIES_BAIHUMON},
    {214, 71, 125, 101, 113, 107, SPECIES_PHOENIXMON},
    // {214, 71, 125, 101, 113, 77, SPECIES_VALKYRIMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sPhantomonDigivolveTable[] = {
//     // {124, 107, 95, 95, 143, 101, SPECIES_DULLAHAMON},
//     // {124, 107, 95, 95, 143, 101, SPECIES_NECROMON},
//     // {124, 107, 95, 95, 143, 101, SPECIES_GHOULMON_BLACK},
//     // {124, 107, 95, 95, 143, 101, SPECIES_PHARAOHMON},
//     // {124, 107, 95, 95, 143, 101, SPECIES_BEELZEMON_2010},
//     // {124, 107, 95, 95, 143, 101, SPECIES_BARBAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sGarudamonDigivolveTable[] = {
    {166, 125, 101, 125, 125, 101, SPECIES_PHOENIXMON},
    // {166, 125, 101, 125, 125, 101, SPECIES_MERUKIMON},
    // {166, 125, 101, 125, 125, 101, SPECIES_EAGLEMON},
    {166, 155, 101, 125, 125, 101, SPECIES_GRYPHONMON},
    // {166, 125, 101, 125, 125, 101, SPECIES_ANCIENTKAZEMON},
    // {166, 125, 101, 125, 125, 101, SPECIES_JUSTIMON_BLITZ_ARM},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGarbagemonDigivolveTable[] = {
    // {154, 107, 155, 119, 119, 53, SPECIES_ANCIENTWISEMON},
    // {154, 107, 155, 119, 119, 53, SPECIES_EBEMON},
    // {154, 107, 155, 119, 119, 53, SPECIES_PARASIMON},
    {154, 137, 155, 119, 119, 53, SPECIES_PUPPETMON},
    // {154, 107, 155, 119, 119, 53, SPECIES_DARKDRAMON},
    // {154, 107, 155, 119, 119, 53, SPECIES_ZEPHAGAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sGigadramonDigivolveTable[] = {
    // {190, 107, 107, 125, 77, 155, SPECIES_RUSTTYRANNOMON},
    // {190, 107, 107, 125, 77, 155, SPECIES_DARKDRAMON},
    // {190, 107, 107, 125, 77, 155, SPECIES_GULFMON},
    {190, 107, 107, 155, 77, 155, SPECIES_DIABOROMON},
    // {190, 107, 107, 125, 77, 155, SPECIES_DORUGORAMON},
    // {190, 107, 107, 125, 77, 155, SPECIES_ZEEDGARURUMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKingsukamonDigivolveTable[] = {
    {178, 107, 113, 83, 119, 83, SPECIES_KINGETEMON},
    {178, 126, 132, 83, 119, 83, SPECIES_METALETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sDivermonDigivolveTable[] = {
    // {154, 125, 77, 125, 77, 101, SPECIES_NEPTUNEMON},
    {173, 125, 77, 125, 77, 125, SPECIES_CTHYLLAMON},
    {184, 125, 77, 125, 77, 101, SPECIES_MARINEANGEMON},
    // {154, 125, 77, 125, 77, 101, SPECIES_ANCIENTMERMAIMON},
    {154, 125, 107, 125, 77, 101, SPECIES_PUKUMON},
    {154, 125, 77, 125, 107, 101, SPECIES_METALSEADRAMON},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sMeteormonDigivolveTable[] = {
//     // {130, 125, 125, 125, 125, 65, SPECIES_ANCIENTVOLCANOMON},
//     // {130, 125, 125, 125, 125, 65, SPECIES_BLASTMON},
//     // {130, 125, 125, 125, 125, 65, SPECIES_BANCHOGOLEMON},
//     // {130, 125, 125, 125, 125, 65, SPECIES_DIANAMON},
//     // {130, 125, 125, 125, 125, 65, SPECIES_LAMPMON},
//     // {130, 125, 125, 125, 125, 65, SPECIES_BELPHEMON_SLEEP_MODE},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sCherrymonDigivolveTable[] = {
    {232, 101, 113, 125, 125, 53, SPECIES_PUPPETMON},
    // {232, 101, 113, 125, 125, 53, SPECIES_GHOULMON},
    // {232, 101, 113, 125, 125, 53, SPECIES_ANCIENTTROYMON},
    {232, 101, 113, 125, 155, 53, SPECIES_JIJIMON},
    // {232, 101, 113, 125, 125, 53, SPECIES_EBONWUMON},
    // {232, 101, 113, 125, 125, 53, SPECIES_ELDRADIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKnightmonDigivolveTable[] = {
    // {166, 149, 149, 53, 89, 89, SPECIES_LORDKNIGHTMON},
    // {166, 149, 149, 53, 89, 89, SPECIES_LEOPARDMON},
    // {166, 149, 149, 53, 89, 89, SPECIES_MIRAGEGAOGAMON},
    // {166, 149, 149, 53, 89, 89, SPECIES_SLASHANGEMON},
    {166, 179, 149, 53, 89, 89, SPECIES_ZANBAMON},
    // {166, 149, 149, 53, 89, 89, SPECIES_VALKYRIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMummymonDigivolveTable[] = {
    // {178, 137, 71, 101, 113, 89, SPECIES_PHARAOHMON},
    // {178, 137, 71, 101, 113, 89, SPECIES_ANCIENTSPHINXMON},
    // {178, 137, 71, 101, 113, 89, SPECIES_MURMUKUSMON},
    // {178, 137, 71, 101, 113, 89, SPECIES_BEELZEMON},
    // {178, 137, 71, 101, 113, 89, SPECIES_MALOMYOTISMON},
    {178, 137, 71, 131, 113, 89, SPECIES_CREEPYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sOrochimonDigivolveTable[] = {
    // {142, 89, 101, 149, 95, 137, SPECIES_NIDHOGGMON},
    // {142, 89, 101, 149, 95, 137, SPECIES_EBONWUMON},
    // {142, 89, 101, 149, 95, 137, SPECIES_HEAVYMETALDRAMON},
    {172, 89, 101, 149, 95, 137, SPECIES_MAGNADRAMON},
    // {142, 89, 101, 149, 95, 137, SPECIES_DORBICKMON},
    // {142, 89, 101, 149, 95, 137, SPECIES_SHIMONZAEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sIceleomonDigivolveTable[] = {
    // {172, 113, 101, 101, 113, 119, SPECIES_REGULUMON},
    // {172, 113, 101, 101, 113, 119, SPECIES_DINOTIGERMON},
    // {172, 113, 101, 101, 113, 119, SPECIES_ANCIENTMEGATHERIUMMON},
    // {172, 113, 101, 101, 113, 119, SPECIES_FROSVELGRMON},
    // {172, 113, 101, 101, 113, 119, SPECIES_HEXEBLAUMON},
    {172, 143, 101, 101, 113, 119, SPECIES_SABERLEOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sParrotmonDigivolveTable[] = {
    // {184, 113, 107, 89, 89, 137, SPECIES_EAGLEMON},
    {184, 113, 107, 89, 89, 167, SPECIES_PHOENIXMON},
    // {184, 113, 107, 89, 89, 137, SPECIES_RAVEMON},
    {184, 143, 107, 89, 89, 137, SPECIES_GRYPHONMON},
    // {184, 113, 107, 89, 89, 137, SPECIES_ANCIENTKAZEMON},
    // {184, 113, 107, 89, 89, 137, SPECIES_SERAPHIMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sSkullsatamonDigivolveTable[] = {
    {178, 95, 101, 149, 113, 95, SPECIES_APOCALYMON},
    // {178, 95, 101, 149, 113, 95, SPECIES_REAPERMON},
    // {178, 95, 101, 149, 113, 95, SPECIES_BARBAMON},
    {178, 95, 101, 179, 113, 95, SPECIES_DIABOROMON},
    {178, 95, 117, 170, 113, 95, SPECIES_VENOMMYOTISMON},
    // {178, 95, 101, 149, 113, 95, SPECIES_GRANDRACMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sTekkamonDigivolveTable[] = {
    {160, 101, 125, 125, 59, 131, SPECIES_ZANBAMON},
    // {160, 101, 125, 125, 59, 131, SPECIES_REAPERMON},
    {160, 131, 125, 125, 59, 131, SPECIES_PUPPETMON},
    {179, 120, 125, 125, 59, 131, SPECIES_BOLTMON},
    // {160, 101, 125, 125, 59, 131, SPECIES_PRINCEMAMEMON},
    // {160, 101, 125, 125, 59, 131, SPECIES_HIANDROMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMyotismonDigivolveTable[] = {
    {178, 119, 113, 113, 83, 95, SPECIES_VENOMMYOTISMON},
    // {178, 119, 113, 113, 83, 95, SPECIES_MALOMYOTISMON},
    // {178, 119, 113, 113, 83, 95, SPECIES_NEOMYOTISMON},
    // {178, 119, 113, 113, 83, 95, SPECIES_BOLTBOUTAMON},
    // {178, 119, 113, 113, 83, 95, SPECIES_ARCTURUSMON},
    // {178, 119, 113, 113, 83, 95, SPECIES_ARCADIAMON_MEGA},
    DIGIVOLUTION_END,
};

static const struct Digivolution sVermilimonDigivolveTable[] = {
    // {202, 113, 149, 101, 83, 71, SPECIES_CANNONDRAMON},
    // {202, 113, 149, 101, 83, 71, SPECIES_EXAMON},
    {202, 143, 149, 101, 83, 71, SPECIES_SKULLMAMMOTHMON},
    // {202, 113, 149, 101, 83, 71, SPECIES_ANCIENTVOLCANOMON},
    // {202, 113, 149, 101, 83, 71, SPECIES_GAIOMON},
    // {202, 113, 149, 101, 83, 71, SPECIES_VICTORYGREYMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWarumonzaemonDigivolveTable[] = {
    // {166, 149, 101, 125, 101, 101, SPECIES_SHINMONZAEMON},
    {166, 179, 101, 125, 101, 101, SPECIES_PUPPETMON},
    // {166, 149, 101, 125, 101, 101, SPECIES_PHARAOHMON},
    {166, 149, 101, 155, 101, 101, SPECIES_CREEPYMON},
    // {166, 149, 101, 125, 101, 101, SPECIES_ZEIGGREYMON},
    // {166, 149, 101, 125, 101, 101, SPECIES_ANUBISMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sWaruseadramonDigivolveTable[] = {
    {166, 107, 95, 125, 101, 143, SPECIES_METALSEADRAMON},
    // {166, 107, 95, 125, 101, 143, SPECIES_LEVIAMON},
    // {166, 107, 95, 125, 101, 143, SPECIES_AEGISDRAMON},
    // {166, 107, 95, 125, 101, 143, SPECIES_ANCIENTMERMAIMON},
    // {166, 107, 95, 125, 101, 143, SPECIES_JUMBOGAMEMON},
    // {166, 107, 95, 125, 101, 143, SPECIES_MEGIDRAMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sMagnamonDigivolveTable[] = {
    {94, 69, 73, 69, 73, 49, SPECIES_KNIGHTMON},
    {94, 76, 73, 76, 80, 49, SPECIES_GARUDAMON},
    // {94, 69, 73, 69, 73, 49, SPECIES_VOLCANOMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sRosemonDigivolveTable[] = {
    {242, 165, 165, 165, 165, 189, SPECIES_ROSEMON_BURSTMODE},
    DIGIVOLUTION_END,
};

// static const struct Digivolution sMetalseadramonDigivolveTable[] = {
//     {282, 157, 157, 173, 205, 141, SPECIES_GIGASEADRAMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sCreepymonDigivolveTable[] = {
//     {250, 205, 165, 237, 125, 181, SPECIES_CREEPYMON_SUPER_ULTIMATE},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sDiaboromonDigivolveTable[] = {
//     {242, 205, 149, 221, 133, 189, SPECIES_ARMAGEDDEMON},
//     DIGIVOLUTION_END,
// };

// static const struct Digivolution sMachinedramonDigivolveTable[] = {
//     {298, 197, 197, 165, 157, 133, SPECIES_CHAOSDRAMON},
//     DIGIVOLUTION_END,
// };

static const struct Digivolution sEtemon_chaosDigivolveTable[] = {
    {178, 59, 149, 137, 161, 53, SPECIES_METALETEMON},
    DIGIVOLUTION_END,
};

static const struct Digivolution sKodokugumon_itDigivolveTable[] = {
    {27, 12, 14, 14, 14, 10, SPECIES_KODOKUGUMON},
    DIGIVOLUTION_END,
};