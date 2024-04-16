#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokédex order
// These constants are NOT disabled by P_GEN_X_POKEMON to keep pokedex_orders.h clean.
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_ARGOMON_F,
    NATIONAL_DEX_BOMBMON,
    NATIONAL_DEX_BOMMON,
    NATIONAL_DEX_BOTAMON,
    NATIONAL_DEX_CHIBICKMON,
    NATIONAL_DEX_CHIBOMON,
    NATIONAL_DEX_CONOMON,
    NATIONAL_DEX_COTSUCOMON,
    NATIONAL_DEX_CURIMON,
    NATIONAL_DEX_DATIRIMON,
    NATIONAL_DEX_DODOMON,
    NATIONAL_DEX_DOKIMON,
    NATIONAL_DEX_FUFUMON,
    NATIONAL_DEX_JYARIMON,
    NATIONAL_DEX_KEEMON,
    NATIONAL_DEX_KETOMON,
    NATIONAL_DEX_KURAMON,
    NATIONAL_DEX_LEAFMON,
    NATIONAL_DEX_CHOROMON,
    NATIONAL_DEX_MOKUMON,
    NATIONAL_DEX_NYOKIMON,
    NATIONAL_DEX_PABUMON,
    NATIONAL_DEX_PAFUMON,
    NATIONAL_DEX_PAOMON,
    NATIONAL_DEX_PETITMON,
    NATIONAL_DEX_PICHIMON,
    NATIONAL_DEX_POPOMON,
    NATIONAL_DEX_POYOMON,
    NATIONAL_DEX_PUNIMON,
    NATIONAL_DEX_PUPUMON,
    NATIONAL_DEX_PURURUMON,
    NATIONAL_DEX_PUSUMON,
    NATIONAL_DEX_PUTTIMON,
    NATIONAL_DEX_PUWAMON,
    NATIONAL_DEX_PUYOMON,
    NATIONAL_DEX_PYONMON,
    NATIONAL_DEX_RELEMON,
    NATIONAL_DEX_SAKUMON,
    NATIONAL_DEX_SANDMON,
    NATIONAL_DEX_TSUBUMON,
    NATIONAL_DEX_ICEBOTAMON,
    NATIONAL_DEX_YURAMON,
    NATIONAL_DEX_ZERIMON,
    NATIONAL_DEX_ZURUMON,
    NATIONAL_DEX_ARCADIAMON_IT,
    NATIONAL_DEX_ARGOMON_IT,
    NATIONAL_DEX_BABYDMON,
    NATIONAL_DEX_BIBIMON,
    NATIONAL_DEX_BOSAMON,
    NATIONAL_DEX_BUDMON,
    NATIONAL_DEX_BUKAMON,
    NATIONAL_DEX_CALUMON,
    NATIONAL_DEX_CHAPMON,
    NATIONAL_DEX_CHICCHIMON,
    NATIONAL_DEX_DEMMERAMON,
    NATIONAL_DEX_DEMIVEEMON,
    NATIONAL_DEX_DORIMON,
    NATIONAL_DEX_FRIMON,
    NATIONAL_DEX_GIGIMON,
    NATIONAL_DEX_GUMMYMON,
    NATIONAL_DEX_GURIMON,
    NATIONAL_DEX_HIYARIMON,
    NATIONAL_DEX_HOPMON,
    NATIONAL_DEX_KAKKINMON,
    NATIONAL_DEX_KAPURIMON,
    NATIONAL_DEX_KOKOMON,
    NATIONAL_DEX_KOROMON,
    NATIONAL_DEX_KOZENIMON,
    NATIONAL_DEX_KYAROMON,
    NATIONAL_DEX_KYOKYOMON,
    NATIONAL_DEX_KYUPIMON,
    NATIONAL_DEX_MINOMON,
    NATIONAL_DEX_MISSIMON,
    NATIONAL_DEX_MONIMON,
    NATIONAL_DEX_MOONMON,
    NATIONAL_DEX_MOTIMON,
    NATIONAL_DEX_NEGAMON,
    NATIONAL_DEX_NYAROMON,
    NATIONAL_DEX_PAGUMON,
    NATIONAL_DEX_PICKMON_SILVER,
    NATIONAL_DEX_PICKMON_WHITE,
    NATIONAL_DEX_PICKMON_RED,
    NATIONAL_DEX_PINAMON,
    NATIONAL_DEX_POROMON,
    NATIONAL_DEX_PUROROMON,
    NATIONAL_DEX_PUSURIMON,
    NATIONAL_DEX_PUYOYOMON,
    NATIONAL_DEX_SAKUTTOMON,
    NATIONAL_DEX_SUNMON,
    NATIONAL_DEX_TANEMON,
    NATIONAL_DEX_TOKOMON,
    NATIONAL_DEX_TOKOMON_X,
    NATIONAL_DEX_TORBALLMON,
    NATIONAL_DEX_TSUMEMON,
    NATIONAL_DEX_TSUNOMON,
    NATIONAL_DEX_TUMBLEMON,
    NATIONAL_DEX_UPAMON,
    NATIONAL_DEX_VIXIMON,
    NATIONAL_DEX_WANYAMON,
    NATIONAL_DEX_XIAOMON,
    NATIONAL_DEX_YAAMON,
    NATIONAL_DEX_YOKOMON,
    NATIONAL_DEX_AGUMON,
    NATIONAL_DEX_AGUMON_06,
    NATIONAL_DEX_AGUMON_EXPERT,
    NATIONAL_DEX_AGUMON_X,
    NATIONAL_DEX_ANGORAMON,
    NATIONAL_DEX_ARCADIAMON_ROOKIE,
    NATIONAL_DEX_ARGOMON_ROOKIE,
    NATIONAL_DEX_ARMADILMON,
    NATIONAL_DEX_ARURAUMON,
    NATIONAL_DEX_BAKOMON,
    NATIONAL_DEX_BEARMON,
    NATIONAL_DEX_BETAMON,
    NATIONAL_DEX_BETAMON_X,
    NATIONAL_DEX_BIYOMON,
    NATIONAL_DEX_BLKAGUMON,
    NATIONAL_DEX_BLKAGUMON_X,
    NATIONAL_DEX_BLKGABUMON,
    NATIONAL_DEX_BLKGUILMON,
    NATIONAL_DEX_BOKOMON,
    NATIONAL_DEX_BULUCOMON,
    NATIONAL_DEX_BURGERMON,
    NATIONAL_DEX_SAMUAGUMON,
    NATIONAL_DEX_CANDLEMON,
    NATIONAL_DEX_CHIKURIMON,
    NATIONAL_DEX_TYUTYUMON,
    NATIONAL_DEX_CHUUMON,
    NATIONAL_DEX_HAZYAGUMON,
    NATIONAL_DEX_COMMDRAMON,
    NATIONAL_DEX_CORONAMON,
    NATIONAL_DEX_CRABMON,
    NATIONAL_DEX_CRABMON_X,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,
    // Johto
    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    // Sinnoh
    NATIONAL_DEX_TURTWIG,
    NATIONAL_DEX_GROTLE,
    NATIONAL_DEX_TORTERRA,
    NATIONAL_DEX_CHIMCHAR,
    NATIONAL_DEX_MONFERNO,
    NATIONAL_DEX_INFERNAPE,
    NATIONAL_DEX_PIPLUP,
    NATIONAL_DEX_PRINPLUP,
    NATIONAL_DEX_EMPOLEON,
    NATIONAL_DEX_STARLY,
    NATIONAL_DEX_STARAVIA,
    NATIONAL_DEX_STARAPTOR,
    NATIONAL_DEX_BIDOOF,
    NATIONAL_DEX_BIBAREL,
    NATIONAL_DEX_KRICKETOT,
    NATIONAL_DEX_KRICKETUNE,
    NATIONAL_DEX_SHINX,
    NATIONAL_DEX_LUXIO,
    NATIONAL_DEX_LUXRAY,
    NATIONAL_DEX_BUDEW,
    NATIONAL_DEX_ROSERADE,
    NATIONAL_DEX_CRANIDOS,
    NATIONAL_DEX_RAMPARDOS,
    NATIONAL_DEX_SHIELDON,
    NATIONAL_DEX_BASTIODON,
    NATIONAL_DEX_BURMY,
    NATIONAL_DEX_WORMADAM,
    NATIONAL_DEX_MOTHIM,
    NATIONAL_DEX_COMBEE,
    NATIONAL_DEX_VESPIQUEN,
    NATIONAL_DEX_PACHIRISU,
    NATIONAL_DEX_BUIZEL,
    NATIONAL_DEX_FLOATZEL,
    NATIONAL_DEX_CHERUBI,
    NATIONAL_DEX_CHERRIM,
    NATIONAL_DEX_SHELLOS,
    NATIONAL_DEX_GASTRODON,
    NATIONAL_DEX_AMBIPOM,
    NATIONAL_DEX_DRIFLOON,
    NATIONAL_DEX_DRIFBLIM,
    NATIONAL_DEX_BUNEARY,
    NATIONAL_DEX_LOPUNNY,
    NATIONAL_DEX_MISMAGIUS,
    NATIONAL_DEX_HONCHKROW,
    NATIONAL_DEX_GLAMEOW,
    NATIONAL_DEX_PURUGLY,
    NATIONAL_DEX_CHINGLING,
    NATIONAL_DEX_STUNKY,
    NATIONAL_DEX_SKUNTANK,
    NATIONAL_DEX_BRONZOR,
    NATIONAL_DEX_BRONZONG,
    NATIONAL_DEX_BONSLY,
    NATIONAL_DEX_MIME_JR,
    NATIONAL_DEX_HAPPINY,
    NATIONAL_DEX_CHATOT,
    NATIONAL_DEX_SPIRITOMB,
    NATIONAL_DEX_GIBLE,
    NATIONAL_DEX_GABITE,
    NATIONAL_DEX_GARCHOMP,
    NATIONAL_DEX_MUNCHLAX,
    NATIONAL_DEX_RIOLU,
    NATIONAL_DEX_LUCARIO,
    NATIONAL_DEX_HIPPOPOTAS,
    NATIONAL_DEX_HIPPOWDON,
    NATIONAL_DEX_SKORUPI,
    NATIONAL_DEX_DRAPION,
    NATIONAL_DEX_CROAGUNK,
    NATIONAL_DEX_TOXICROAK,
    NATIONAL_DEX_CARNIVINE,
    NATIONAL_DEX_FINNEON,
    NATIONAL_DEX_LUMINEON,
    NATIONAL_DEX_MANTYKE,
    NATIONAL_DEX_SNOVER,
    NATIONAL_DEX_ABOMASNOW,
    NATIONAL_DEX_WEAVILE,
    NATIONAL_DEX_MAGNEZONE,
    NATIONAL_DEX_LICKILICKY,
    NATIONAL_DEX_RHYPERIOR,
    NATIONAL_DEX_TANGROWTH,
    NATIONAL_DEX_ELECTIVIRE,
    NATIONAL_DEX_MAGMORTAR,
    NATIONAL_DEX_TOGEKISS,
    NATIONAL_DEX_YANMEGA,
    NATIONAL_DEX_LEAFEON,
    NATIONAL_DEX_GLACEON,
    NATIONAL_DEX_GLISCOR,
    NATIONAL_DEX_MAMOSWINE,
    NATIONAL_DEX_PORYGON_Z,
    NATIONAL_DEX_GALLADE,
    NATIONAL_DEX_PROBOPASS,
    NATIONAL_DEX_DUSKNOIR,
    NATIONAL_DEX_FROSLASS,
    NATIONAL_DEX_ROTOM,
    NATIONAL_DEX_UXIE,
    NATIONAL_DEX_MESPRIT,
    NATIONAL_DEX_AZELF,
    NATIONAL_DEX_DIALGA,
    NATIONAL_DEX_PALKIA,
    NATIONAL_DEX_HEATRAN,
    NATIONAL_DEX_REGIGIGAS,
    NATIONAL_DEX_GIRATINA,
    NATIONAL_DEX_CRESSELIA,
    NATIONAL_DEX_PHIONE,
    NATIONAL_DEX_MANAPHY,
    NATIONAL_DEX_DARKRAI,
    NATIONAL_DEX_SHAYMIN,
    NATIONAL_DEX_ARCEUS,
    // Unova
    NATIONAL_DEX_VICTINI,
    NATIONAL_DEX_SNIVY,
    NATIONAL_DEX_SERVINE,
    NATIONAL_DEX_SERPERIOR,
    NATIONAL_DEX_TEPIG,
    NATIONAL_DEX_PIGNITE,
    NATIONAL_DEX_EMBOAR,
    NATIONAL_DEX_OSHAWOTT,
    NATIONAL_DEX_DEWOTT,
    NATIONAL_DEX_SAMUROTT,
    NATIONAL_DEX_PATRAT,
    NATIONAL_DEX_WATCHOG,
    NATIONAL_DEX_LILLIPUP,
    NATIONAL_DEX_HERDIER,
    NATIONAL_DEX_STOUTLAND,
    NATIONAL_DEX_PURRLOIN,
    NATIONAL_DEX_LIEPARD,
    NATIONAL_DEX_PANSAGE,
    NATIONAL_DEX_SIMISAGE,
    NATIONAL_DEX_PANSEAR,
    NATIONAL_DEX_SIMISEAR,
    NATIONAL_DEX_PANPOUR,
    NATIONAL_DEX_SIMIPOUR,
    NATIONAL_DEX_MUNNA,
    NATIONAL_DEX_MUSHARNA,
    NATIONAL_DEX_PIDOVE,
    NATIONAL_DEX_TRANQUILL,
    NATIONAL_DEX_UNFEZANT,
    NATIONAL_DEX_BLITZLE,
    NATIONAL_DEX_ZEBSTRIKA,
    NATIONAL_DEX_ROGGENROLA,
    NATIONAL_DEX_BOLDORE,
    NATIONAL_DEX_GIGALITH,
    NATIONAL_DEX_WOOBAT,
    NATIONAL_DEX_SWOOBAT,
    NATIONAL_DEX_DRILBUR,
    NATIONAL_DEX_EXCADRILL,
    NATIONAL_DEX_AUDINO,
    NATIONAL_DEX_TIMBURR,
    NATIONAL_DEX_GURDURR,
    NATIONAL_DEX_CONKELDURR,
    NATIONAL_DEX_TYMPOLE,
    NATIONAL_DEX_PALPITOAD,
    NATIONAL_DEX_SEISMITOAD,
    NATIONAL_DEX_THROH,
    NATIONAL_DEX_SAWK,
    NATIONAL_DEX_SEWADDLE,
    NATIONAL_DEX_SWADLOON,
    NATIONAL_DEX_LEAVANNY,
    NATIONAL_DEX_VENIPEDE,
    NATIONAL_DEX_WHIRLIPEDE,
    NATIONAL_DEX_SCOLIPEDE,
    NATIONAL_DEX_COTTONEE,
    NATIONAL_DEX_WHIMSICOTT,
    NATIONAL_DEX_PETILIL,
    NATIONAL_DEX_LILLIGANT,
    NATIONAL_DEX_BASCULIN,
    NATIONAL_DEX_SANDILE,
    NATIONAL_DEX_KROKOROK,
    NATIONAL_DEX_KROOKODILE,
    NATIONAL_DEX_DARUMAKA,
    NATIONAL_DEX_DARMANITAN,
    NATIONAL_DEX_MARACTUS,
    NATIONAL_DEX_DWEBBLE,
    NATIONAL_DEX_CRUSTLE,
    NATIONAL_DEX_SCRAGGY,
    NATIONAL_DEX_SCRAFTY,
    NATIONAL_DEX_SIGILYPH,
    NATIONAL_DEX_YAMASK,
    NATIONAL_DEX_COFAGRIGUS,
    NATIONAL_DEX_TIRTOUGA,
    NATIONAL_DEX_CARRACOSTA,
    NATIONAL_DEX_ARCHEN,
    NATIONAL_DEX_ARCHEOPS,
    NATIONAL_DEX_TRUBBISH,
    NATIONAL_DEX_GARBODOR,
    NATIONAL_DEX_ZORUA,
    NATIONAL_DEX_ZOROARK,
    NATIONAL_DEX_MINCCINO,
    NATIONAL_DEX_CINCCINO,
    NATIONAL_DEX_GOTHITA,
    NATIONAL_DEX_GOTHORITA,
    NATIONAL_DEX_GOTHITELLE,
    NATIONAL_DEX_SOLOSIS,
    NATIONAL_DEX_DUOSION,
    NATIONAL_DEX_REUNICLUS,
    NATIONAL_DEX_DUCKLETT,
    NATIONAL_DEX_SWANNA,
    NATIONAL_DEX_VANILLITE,
    NATIONAL_DEX_VANILLISH,
    NATIONAL_DEX_VANILLUXE,
    NATIONAL_DEX_DEERLING,
    NATIONAL_DEX_SAWSBUCK,
    NATIONAL_DEX_EMOLGA,
    NATIONAL_DEX_KARRABLAST,
    NATIONAL_DEX_ESCAVALIER,
    NATIONAL_DEX_FOONGUS,
    NATIONAL_DEX_AMOONGUSS,
    NATIONAL_DEX_FRILLISH,
    NATIONAL_DEX_JELLICENT,
    NATIONAL_DEX_ALOMOMOLA,
    NATIONAL_DEX_JOLTIK,
    NATIONAL_DEX_GALVANTULA,
    NATIONAL_DEX_FERROSEED,
    NATIONAL_DEX_FERROTHORN,
    NATIONAL_DEX_KLINK,
    NATIONAL_DEX_KLANG,
    NATIONAL_DEX_KLINKLANG,
    NATIONAL_DEX_TYNAMO,
    NATIONAL_DEX_EELEKTRIK,
    NATIONAL_DEX_EELEKTROSS,
    NATIONAL_DEX_ELGYEM,
    NATIONAL_DEX_BEHEEYEM,
    NATIONAL_DEX_LITWICK,
    NATIONAL_DEX_LAMPENT,
    NATIONAL_DEX_CHANDELURE,
    NATIONAL_DEX_AXEW,
    NATIONAL_DEX_FRAXURE,
    NATIONAL_DEX_HAXORUS,
    NATIONAL_DEX_CUBCHOO,
    NATIONAL_DEX_BEARTIC,
    NATIONAL_DEX_CRYOGONAL,
    NATIONAL_DEX_SHELMET,
    NATIONAL_DEX_ACCELGOR,
    NATIONAL_DEX_STUNFISK,
    NATIONAL_DEX_MIENFOO,
    NATIONAL_DEX_MIENSHAO,
    NATIONAL_DEX_DRUDDIGON,
    NATIONAL_DEX_GOLETT,
    NATIONAL_DEX_GOLURK,
    NATIONAL_DEX_PAWNIARD,
    NATIONAL_DEX_BISHARP,
    NATIONAL_DEX_BOUFFALANT,
    NATIONAL_DEX_RUFFLET,
    NATIONAL_DEX_BRAVIARY,
    NATIONAL_DEX_VULLABY,
    NATIONAL_DEX_MANDIBUZZ,
    NATIONAL_DEX_HEATMOR,
    NATIONAL_DEX_DURANT,
    NATIONAL_DEX_DEINO,
    NATIONAL_DEX_ZWEILOUS,
    NATIONAL_DEX_HYDREIGON,
    NATIONAL_DEX_LARVESTA,
    NATIONAL_DEX_VOLCARONA,
    NATIONAL_DEX_COBALION,
    NATIONAL_DEX_TERRAKION,
    NATIONAL_DEX_VIRIZION,
    NATIONAL_DEX_TORNADUS,
    NATIONAL_DEX_THUNDURUS,
    NATIONAL_DEX_RESHIRAM,
    NATIONAL_DEX_ZEKROM,
    NATIONAL_DEX_LANDORUS,
    NATIONAL_DEX_KYUREM,
    NATIONAL_DEX_KELDEO,
    NATIONAL_DEX_MELOETTA,
    NATIONAL_DEX_GENESECT,
    // Kalos
    NATIONAL_DEX_CHESPIN,
    NATIONAL_DEX_QUILLADIN,
    NATIONAL_DEX_CHESNAUGHT,
    NATIONAL_DEX_FENNEKIN,
    NATIONAL_DEX_BRAIXEN,
    NATIONAL_DEX_DELPHOX,
    NATIONAL_DEX_FROAKIE,
    NATIONAL_DEX_FROGADIER,
    NATIONAL_DEX_GRENINJA,
    NATIONAL_DEX_BUNNELBY,
    NATIONAL_DEX_DIGGERSBY,
    NATIONAL_DEX_FLETCHLING,
    NATIONAL_DEX_FLETCHINDER,
    NATIONAL_DEX_TALONFLAME,
    NATIONAL_DEX_SCATTERBUG,
    NATIONAL_DEX_SPEWPA,
    NATIONAL_DEX_VIVILLON,
    NATIONAL_DEX_LITLEO,
    NATIONAL_DEX_PYROAR,
    NATIONAL_DEX_FLABEBE,
    NATIONAL_DEX_FLOETTE,
    NATIONAL_DEX_FLORGES,
    NATIONAL_DEX_SKIDDO,
    NATIONAL_DEX_GOGOAT,
    NATIONAL_DEX_PANCHAM,
    NATIONAL_DEX_PANGORO,
    NATIONAL_DEX_FURFROU,
    NATIONAL_DEX_ESPURR,
    NATIONAL_DEX_MEOWSTIC,
    NATIONAL_DEX_HONEDGE,
    NATIONAL_DEX_DOUBLADE,
    NATIONAL_DEX_AEGISLASH,
    NATIONAL_DEX_SPRITZEE,
    NATIONAL_DEX_AROMATISSE,
    NATIONAL_DEX_SWIRLIX,
    NATIONAL_DEX_SLURPUFF,
    NATIONAL_DEX_INKAY,
    NATIONAL_DEX_MALAMAR,
    NATIONAL_DEX_BINACLE,
    NATIONAL_DEX_BARBARACLE,
    NATIONAL_DEX_SKRELP,
    NATIONAL_DEX_DRAGALGE,
    NATIONAL_DEX_CLAUNCHER,
    NATIONAL_DEX_CLAWITZER,
    NATIONAL_DEX_HELIOPTILE,
    NATIONAL_DEX_HELIOLISK,
    NATIONAL_DEX_TYRUNT,
    NATIONAL_DEX_TYRANTRUM,
    NATIONAL_DEX_AMAURA,
    NATIONAL_DEX_AURORUS,
    NATIONAL_DEX_SYLVEON,
    NATIONAL_DEX_HAWLUCHA,
    NATIONAL_DEX_DEDENNE,
    NATIONAL_DEX_CARBINK,
    NATIONAL_DEX_GOOMY,
    NATIONAL_DEX_SLIGGOO,
    NATIONAL_DEX_GOODRA,
    NATIONAL_DEX_KLEFKI,
    NATIONAL_DEX_PHANTUMP,
    NATIONAL_DEX_TREVENANT,
    NATIONAL_DEX_PUMPKABOO,
    NATIONAL_DEX_GOURGEIST,
    NATIONAL_DEX_BERGMITE,
    NATIONAL_DEX_AVALUGG,
    NATIONAL_DEX_NOIBAT,
    NATIONAL_DEX_NOIVERN,
    NATIONAL_DEX_XERNEAS,
    NATIONAL_DEX_YVELTAL,
    NATIONAL_DEX_ZYGARDE,
    NATIONAL_DEX_DIANCIE,
    NATIONAL_DEX_HOOPA,
    NATIONAL_DEX_VOLCANION,
    // Alola
    NATIONAL_DEX_ROWLET,
    NATIONAL_DEX_DARTRIX,
    NATIONAL_DEX_DECIDUEYE,
    NATIONAL_DEX_LITTEN,
    NATIONAL_DEX_TORRACAT,
    NATIONAL_DEX_INCINEROAR,
    NATIONAL_DEX_POPPLIO,
    NATIONAL_DEX_BRIONNE,
    NATIONAL_DEX_PRIMARINA,
    NATIONAL_DEX_PIKIPEK,
    NATIONAL_DEX_TRUMBEAK,
    NATIONAL_DEX_TOUCANNON,
    NATIONAL_DEX_YUNGOOS,
    NATIONAL_DEX_GUMSHOOS,
    NATIONAL_DEX_GRUBBIN,
    NATIONAL_DEX_CHARJABUG,
    NATIONAL_DEX_VIKAVOLT,
    NATIONAL_DEX_CRABRAWLER,
    NATIONAL_DEX_CRABOMINABLE,
    NATIONAL_DEX_ORICORIO,
    NATIONAL_DEX_CUTIEFLY,
    NATIONAL_DEX_RIBOMBEE,
    NATIONAL_DEX_ROCKRUFF,
    NATIONAL_DEX_LYCANROC,
    NATIONAL_DEX_WISHIWASHI,
    NATIONAL_DEX_MAREANIE,
    NATIONAL_DEX_TOXAPEX,
    NATIONAL_DEX_MUDBRAY,
    NATIONAL_DEX_MUDSDALE,
    NATIONAL_DEX_DEWPIDER,
    NATIONAL_DEX_ARAQUANID,
    NATIONAL_DEX_FOMANTIS,
    NATIONAL_DEX_LURANTIS,
    NATIONAL_DEX_MORELULL,
    NATIONAL_DEX_SHIINOTIC,
    NATIONAL_DEX_SALANDIT,
    NATIONAL_DEX_SALAZZLE,
    NATIONAL_DEX_STUFFUL,
    NATIONAL_DEX_BEWEAR,
    NATIONAL_DEX_BOUNSWEET,
    NATIONAL_DEX_STEENEE,
    NATIONAL_DEX_TSAREENA,
    NATIONAL_DEX_COMFEY,
    NATIONAL_DEX_ORANGURU,
    NATIONAL_DEX_PASSIMIAN,
    NATIONAL_DEX_WIMPOD,
    NATIONAL_DEX_GOLISOPOD,
    NATIONAL_DEX_SANDYGAST,
    NATIONAL_DEX_PALOSSAND,
    NATIONAL_DEX_PYUKUMUKU,
    NATIONAL_DEX_TYPE_NULL,
    NATIONAL_DEX_SILVALLY,
    NATIONAL_DEX_MINIOR,
    NATIONAL_DEX_KOMALA,
    NATIONAL_DEX_TURTONATOR,
    NATIONAL_DEX_TOGEDEMARU,
    NATIONAL_DEX_MIMIKYU,
    NATIONAL_DEX_BRUXISH,
    NATIONAL_DEX_DRAMPA,
    NATIONAL_DEX_DHELMISE,
    NATIONAL_DEX_JANGMO_O,
    NATIONAL_DEX_HAKAMO_O,
    NATIONAL_DEX_KOMMO_O,
    NATIONAL_DEX_TAPU_KOKO,
    NATIONAL_DEX_TAPU_LELE,
    NATIONAL_DEX_TAPU_BULU,
    NATIONAL_DEX_TAPU_FINI,
    NATIONAL_DEX_COSMOG,
    NATIONAL_DEX_COSMOEM,
    NATIONAL_DEX_SOLGALEO,
    NATIONAL_DEX_LUNALA,
    NATIONAL_DEX_NIHILEGO,
    NATIONAL_DEX_BUZZWOLE,
    NATIONAL_DEX_PHEROMOSA,
    NATIONAL_DEX_XURKITREE,
    NATIONAL_DEX_CELESTEELA,
    NATIONAL_DEX_KARTANA,
    NATIONAL_DEX_GUZZLORD,
    NATIONAL_DEX_NECROZMA,
    NATIONAL_DEX_MAGEARNA,
    NATIONAL_DEX_MARSHADOW,
    NATIONAL_DEX_POIPOLE,
    NATIONAL_DEX_NAGANADEL,
    NATIONAL_DEX_STAKATAKA,
    NATIONAL_DEX_BLACEPHALON,
    NATIONAL_DEX_ZERAORA,
    // Unknown
    NATIONAL_DEX_MELTAN,
    NATIONAL_DEX_MELMETAL,
    // Galar
    NATIONAL_DEX_GROOKEY,
    NATIONAL_DEX_THWACKEY,
    NATIONAL_DEX_RILLABOOM,
    NATIONAL_DEX_SCORBUNNY,
    NATIONAL_DEX_RABOOT,
    NATIONAL_DEX_CINDERACE,
    NATIONAL_DEX_SOBBLE,
    NATIONAL_DEX_DRIZZILE,
    NATIONAL_DEX_INTELEON,
    NATIONAL_DEX_SKWOVET,
    NATIONAL_DEX_GREEDENT,
    NATIONAL_DEX_ROOKIDEE,
    NATIONAL_DEX_CORVISQUIRE,
    NATIONAL_DEX_CORVIKNIGHT,
    NATIONAL_DEX_BLIPBUG,
    NATIONAL_DEX_DOTTLER,
    NATIONAL_DEX_ORBEETLE,
    NATIONAL_DEX_NICKIT,
    NATIONAL_DEX_THIEVUL,
    NATIONAL_DEX_GOSSIFLEUR,
    NATIONAL_DEX_ELDEGOSS,
    NATIONAL_DEX_WOOLOO,
    NATIONAL_DEX_DUBWOOL,
    NATIONAL_DEX_CHEWTLE,
    NATIONAL_DEX_DREDNAW,
    NATIONAL_DEX_YAMPER,
    NATIONAL_DEX_BOLTUND,
    NATIONAL_DEX_ROLYCOLY,
    NATIONAL_DEX_CARKOL,
    NATIONAL_DEX_COALOSSAL,
    NATIONAL_DEX_APPLIN,
    NATIONAL_DEX_FLAPPLE,
    NATIONAL_DEX_APPLETUN,
    NATIONAL_DEX_SILICOBRA,
    NATIONAL_DEX_SANDACONDA,
    NATIONAL_DEX_CRAMORANT,
    NATIONAL_DEX_ARROKUDA,
    NATIONAL_DEX_BARRASKEWDA,
    NATIONAL_DEX_TOXEL,
    NATIONAL_DEX_TOXTRICITY,
    NATIONAL_DEX_SIZZLIPEDE,
    NATIONAL_DEX_CENTISKORCH,
    NATIONAL_DEX_CLOBBOPUS,
    NATIONAL_DEX_GRAPPLOCT,
    NATIONAL_DEX_SINISTEA,
    NATIONAL_DEX_POLTEAGEIST,
    NATIONAL_DEX_HATENNA,
    NATIONAL_DEX_HATTREM,
    NATIONAL_DEX_HATTERENE,
    NATIONAL_DEX_IMPIDIMP,
    NATIONAL_DEX_MORGREM,
    NATIONAL_DEX_GRIMMSNARL,
    NATIONAL_DEX_OBSTAGOON,
    NATIONAL_DEX_PERRSERKER,
    NATIONAL_DEX_CURSOLA,
    NATIONAL_DEX_SIRFETCHD,
    NATIONAL_DEX_MR_RIME,
    NATIONAL_DEX_RUNERIGUS,
    NATIONAL_DEX_MILCERY,
    NATIONAL_DEX_ALCREMIE,
    NATIONAL_DEX_FALINKS,
    NATIONAL_DEX_PINCURCHIN,
    NATIONAL_DEX_SNOM,
    NATIONAL_DEX_FROSMOTH,
    NATIONAL_DEX_STONJOURNER,
    NATIONAL_DEX_EISCUE,
    NATIONAL_DEX_INDEEDEE,
    NATIONAL_DEX_MORPEKO,
    NATIONAL_DEX_CUFANT,
    NATIONAL_DEX_COPPERAJAH,
    NATIONAL_DEX_DRACOZOLT,
    NATIONAL_DEX_ARCTOZOLT,
    NATIONAL_DEX_DRACOVISH,
    NATIONAL_DEX_ARCTOVISH,
    NATIONAL_DEX_DURALUDON,
    NATIONAL_DEX_DREEPY,
    NATIONAL_DEX_DRAKLOAK,
    NATIONAL_DEX_DRAGAPULT,
    NATIONAL_DEX_ZACIAN,
    NATIONAL_DEX_ZAMAZENTA,
    NATIONAL_DEX_ETERNATUS,
    NATIONAL_DEX_KUBFU,
    NATIONAL_DEX_URSHIFU,
    NATIONAL_DEX_ZARUDE,
    NATIONAL_DEX_REGIELEKI,
    NATIONAL_DEX_REGIDRAGO,
    NATIONAL_DEX_GLASTRIER,
    NATIONAL_DEX_SPECTRIER,
    NATIONAL_DEX_CALYREX,
    NATIONAL_DEX_WYRDEER,
    NATIONAL_DEX_KLEAVOR,
    NATIONAL_DEX_URSALUNA,
    NATIONAL_DEX_BASCULEGION,
    NATIONAL_DEX_SNEASLER,
    NATIONAL_DEX_OVERQWIL,
    NATIONAL_DEX_ENAMORUS,
    NATIONAL_DEX_SPRIGATITO,
    NATIONAL_DEX_FLORAGATO,
    NATIONAL_DEX_MEOWSCARADA,
    NATIONAL_DEX_FUECOCO,
    NATIONAL_DEX_CROCALOR,
    NATIONAL_DEX_SKELEDIRGE,
    NATIONAL_DEX_QUAXLY,
    NATIONAL_DEX_QUAXWELL,
    NATIONAL_DEX_QUAQUAVAL,
    NATIONAL_DEX_LECHONK,
    NATIONAL_DEX_OINKOLOGNE,
    NATIONAL_DEX_TAROUNTULA,
    NATIONAL_DEX_SPIDOPS,
    NATIONAL_DEX_NYMBLE,
    NATIONAL_DEX_LOKIX,
    NATIONAL_DEX_PAWMI,
    NATIONAL_DEX_PAWMO,
    NATIONAL_DEX_PAWMOT,
    NATIONAL_DEX_TANDEMAUS,
    NATIONAL_DEX_MAUSHOLD,
    NATIONAL_DEX_FIDOUGH,
    NATIONAL_DEX_DACHSBUN,
    NATIONAL_DEX_SMOLIV,
    NATIONAL_DEX_DOLLIV,
    NATIONAL_DEX_ARBOLIVA,
    NATIONAL_DEX_SQUAWKABILLY,
    NATIONAL_DEX_NACLI,
    NATIONAL_DEX_NACLSTACK,
    NATIONAL_DEX_GARGANACL,
    NATIONAL_DEX_CHARCADET,
    NATIONAL_DEX_ARMAROUGE,
    NATIONAL_DEX_CERULEDGE,
    NATIONAL_DEX_TADBULB,
    NATIONAL_DEX_BELLIBOLT,
    NATIONAL_DEX_WATTREL,
    NATIONAL_DEX_KILOWATTREL,
    NATIONAL_DEX_MASCHIFF,
    NATIONAL_DEX_MABOSSTIFF,
    NATIONAL_DEX_SHROODLE,
    NATIONAL_DEX_GRAFAIAI,
    NATIONAL_DEX_BRAMBLIN,
    NATIONAL_DEX_BRAMBLEGHAST,
    NATIONAL_DEX_TOEDSCOOL,
    NATIONAL_DEX_TOEDSCRUEL,
    NATIONAL_DEX_KLAWF,
    NATIONAL_DEX_CAPSAKID,
    NATIONAL_DEX_SCOVILLAIN,
    NATIONAL_DEX_RELLOR,
    NATIONAL_DEX_RABSCA,
    NATIONAL_DEX_FLITTLE,
    NATIONAL_DEX_ESPATHRA,
    NATIONAL_DEX_TINKATINK,
    NATIONAL_DEX_TINKATUFF,
    NATIONAL_DEX_TINKATON,
    NATIONAL_DEX_WIGLETT,
    NATIONAL_DEX_WUGTRIO,
    NATIONAL_DEX_BOMBIRDIER,
    NATIONAL_DEX_FINIZEN,
    NATIONAL_DEX_PALAFIN,
    NATIONAL_DEX_VAROOM,
    NATIONAL_DEX_REVAVROOM,
    NATIONAL_DEX_CYCLIZAR,
    NATIONAL_DEX_ORTHWORM,
    NATIONAL_DEX_GLIMMET,
    NATIONAL_DEX_GLIMMORA,
    NATIONAL_DEX_GREAVARD,
    NATIONAL_DEX_HOUNDSTONE,
    NATIONAL_DEX_FLAMIGO,
    NATIONAL_DEX_CETODDLE,
    NATIONAL_DEX_CETITAN,
    NATIONAL_DEX_VELUZA,
    NATIONAL_DEX_DONDOZO,
    NATIONAL_DEX_TATSUGIRI,
    NATIONAL_DEX_ANNIHILAPE,
    NATIONAL_DEX_CLODSIRE,
    NATIONAL_DEX_FARIGIRAF,
    NATIONAL_DEX_DUDUNSPARCE,
    NATIONAL_DEX_KINGAMBIT,
    NATIONAL_DEX_GREAT_TUSK,
    NATIONAL_DEX_SCREAM_TAIL,
    NATIONAL_DEX_BRUTE_BONNET,
    NATIONAL_DEX_FLUTTER_MANE,
    NATIONAL_DEX_SLITHER_WING,
    NATIONAL_DEX_SANDY_SHOCKS,
    NATIONAL_DEX_IRON_TREADS,
    NATIONAL_DEX_IRON_BUNDLE,
    NATIONAL_DEX_IRON_HANDS,
    NATIONAL_DEX_IRON_JUGULIS,
    NATIONAL_DEX_IRON_MOTH,
    NATIONAL_DEX_IRON_THORNS,
    NATIONAL_DEX_FRIGIBAX,
    NATIONAL_DEX_ARCTIBAX,
    NATIONAL_DEX_BAXCALIBUR,
    NATIONAL_DEX_GIMMIGHOUL,
    NATIONAL_DEX_GHOLDENGO,
    NATIONAL_DEX_WO_CHIEN,
    NATIONAL_DEX_CHIEN_PAO,
    NATIONAL_DEX_TING_LU,
    NATIONAL_DEX_CHI_YU,
    NATIONAL_DEX_ROARING_MOON,
    NATIONAL_DEX_IRON_VALIANT,
    NATIONAL_DEX_KORAIDON,
    NATIONAL_DEX_MIRAIDON,
    NATIONAL_DEX_WALKING_WAKE,
    NATIONAL_DEX_IRON_LEAVES,
    NATIONAL_DEX_DIPPLIN,
    NATIONAL_DEX_POLTCHAGEIST,
    NATIONAL_DEX_SINISTCHA,
    NATIONAL_DEX_OKIDOGI,
    NATIONAL_DEX_MUNKIDORI,
    NATIONAL_DEX_FEZANDIPITI,
    NATIONAL_DEX_OGERPON,
    NATIONAL_DEX_ARCHALUDON,
    NATIONAL_DEX_HYDRAPPLE,
    NATIONAL_DEX_GOUGING_FIRE,
    NATIONAL_DEX_RAGING_BOLT,
    NATIONAL_DEX_IRON_BOULDER,
    NATIONAL_DEX_IRON_CROWN,
    NATIONAL_DEX_TERAPAGOS,
    NATIONAL_DEX_PECHARUNT,
};

#define KANTO_DEX_COUNT     NATIONAL_DEX_MEW
#define JOHTO_DEX_COUNT     NATIONAL_DEX_CELEBI

#if P_GEN_9_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_PECHARUNT
#elif P_GEN_8_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_ENAMORUS
#elif P_GEN_7_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_MELMETAL
#elif P_GEN_6_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_VOLCANION
#elif P_GEN_5_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_GENESECT
#elif P_GEN_4_POKEMON == TRUE
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_ARCEUS
#else
    #define NATIONAL_DEX_COUNT  NATIONAL_DEX_DEOXYS
#endif

#define POKEMON_SLOTS_NUMBER (NATIONAL_DEX_COUNT + 1)

// Hoenn Pokédex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_TREECKO,
    HOENN_DEX_GROVYLE,
    HOENN_DEX_SCEPTILE,
    HOENN_DEX_TORCHIC,
    HOENN_DEX_COMBUSKEN,
    HOENN_DEX_BLAZIKEN,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_POOCHYENA,
    HOENN_DEX_MIGHTYENA,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GALARIAN_FORMS
    HOENN_DEX_OBSTAGOON,
#endif
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_LOTAD,
    HOENN_DEX_LOMBRE,
    HOENN_DEX_LUDICOLO,
    HOENN_DEX_SEEDOT,
    HOENN_DEX_NUZLEAF,
    HOENN_DEX_SHIFTRY,
    HOENN_DEX_TAILLOW,
    HOENN_DEX_SWELLOW,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_GALLADE,
#endif
    HOENN_DEX_SURSKIT,
    HOENN_DEX_MASQUERAIN,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_SLAKOTH,
    HOENN_DEX_VIGOROTH,
    HOENN_DEX_SLAKING,
    HOENN_DEX_HOPMON,
    HOENN_DEX_KAKKINMON,
    HOENN_DEX_KAPURIMON,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_WHISMUR,
    HOENN_DEX_LOUDRED,
    HOENN_DEX_EXPLOUD,
    HOENN_DEX_MAKUHITA,
    HOENN_DEX_HARIYAMA,
    HOENN_DEX_BLKAGUMON_X,
    HOENN_DEX_BLKGABUMON,
    HOENN_DEX_HAZYAGUMON,
    HOENN_DEX_COMMDRAMON,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_MONIMON,
    HOENN_DEX_MOONMON,
    HOENN_DEX_MOTIMON,
    HOENN_DEX_NOSEPASS,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_PROBOPASS,
#endif
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_ICEBOTAMON,
    HOENN_DEX_YURAMON,
    HOENN_DEX_CROBAT,
    HOENN_DEX_MINOMON,
    HOENN_DEX_MISSIMON,
    HOENN_DEX_SABLEYE,
    HOENN_DEX_MAWILE,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_KOKOMON,
    HOENN_DEX_KOROMON,
    HOENN_DEX_KOZENIMON,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_ELECTRIKE,
    HOENN_DEX_MANECTRIC,
    HOENN_DEX_PLUSLE,
    HOENN_DEX_MINUN,
    HOENN_DEX_PICKMON_WHITE,
    HOENN_DEX_PICKMON_RED,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_MAGNEZONE,
#endif
    HOENN_DEX_XIAOMON,
    HOENN_DEX_YAAMON,
    HOENN_DEX_VOLBEAT,
    HOENN_DEX_ILLUMISE,
    HOENN_DEX_ZERIMON,
    HOENN_DEX_ZURUMON,
    HOENN_DEX_ARCADIAMON_IT,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_POROMON,
    HOENN_DEX_PUROROMON,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_BUDEW,
#endif
    HOENN_DEX_ROSELIA,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_ROSERADE,
#endif
    HOENN_DEX_GULPIN,
    HOENN_DEX_SWALOT,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_SAKUTTOMON,
    HOENN_DEX_SUNMON,
    HOENN_DEX_ARGOMON_ROOKIE,
    HOENN_DEX_ARMADILMON,
    HOENN_DEX_SPOINK,
    HOENN_DEX_GRUMPIG,
    HOENN_DEX_POPOMON,
    HOENN_DEX_POYOMON,
    HOENN_DEX_SPINDA,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_ZANGOOSE,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_LUNATONE,
    HOENN_DEX_SOLROCK,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_CORPHISH,
    HOENN_DEX_CRAWDAUNT,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_LILEEP,
    HOENN_DEX_CRADILY,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_SANDMON,
    HOENN_DEX_TSUBUMON,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_BLKGUILMON,
    HOENN_DEX_BOKOMON,
    HOENN_DEX_KECLEON,
    HOENN_DEX_SHUPPET,
    HOENN_DEX_BANETTE,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_DUSKNOIR,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_CHINGLING,
#else
    HOENN_DEX_TROPIUS,
#endif
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_ABSOL,
    HOENN_DEX_RELEMON,
    HOENN_DEX_SAKUMON,
    HOENN_DEX_PICHU,
    HOENN_DEX_PETITMON,
    HOENN_DEX_PICHIMON,
    HOENN_DEX_CHICCHIMON,
    HOENN_DEX_DEMMERAMON,
    HOENN_DEX_WYNAUT,
    HOENN_DEX_WOBBUFFET,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_GIRAFARIG,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_9_CROSS_EVOS
    HOENN_DEX_FARIGIRAF,
#endif
    HOENN_DEX_PHANPY,
    HOENN_DEX_DONPHAN,
    HOENN_DEX_TYUTYUMON,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_ARURAUMON,
    HOENN_DEX_BAKOMON,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_RHYPERIOR,
#endif
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GEN_4_CROSS_EVOS
    HOENN_DEX_FROSLASS,
#endif
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_CORSOLA,
#if P_NEW_EVOS_IN_REGIONAL_DEX && P_GALARIAN_FORMS
    HOENN_DEX_CURSOLA,
#endif
    HOENN_DEX_CHINCHOU,
    HOENN_DEX_LANTURN,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_BIYOMON,
    HOENN_DEX_BLKAGUMON,
    HOENN_DEX_KINGDRA,
    HOENN_DEX_BAGON,
    HOENN_DEX_SHELGON,
    HOENN_DEX_SALAMENCE,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
};

#define HOENN_DEX_COUNT (HOENN_DEX_DEOXYS + 1)

#define DECAGRAMS_IN_POUND             4536
#define CM_PER_INCH                    2.54
#define CM_PER_INCH_FACTOR             (CM_PER_INCH * 100)
#define INCHES_IN_FOOT                 12
#define INCHES_IN_ONE_AND_HALF_FOOT    (INCHES_IN_FOOT * 1.5)
#define INCHES_IN_FOOT_FACTOR          (INCHES_IN_FOOT * 10)

#define WEIGHT_HEIGHT_STR_LEN          16
#define WEIGHT_HEIGHT_STR_MEM          (WEIGHT_HEIGHT_STR_LEN * sizeof(u8))

#define DEX_HEADER_X                   96
#define DEX_Y_TOP                      57
#define DEX_Y_BOTTOM                   73
#define DEX_MEASUREMENT_X              129

#define DEX_HGSS_HEADER_X_PADDING      59
#define DEX_HGSS_Y_TOP_PADDING         7
#define DEX_HGSS_Y_BOTTOM_PADDING      4
#define DEX_HGSS_MEASUREMENT_X_PADDING 51

#endif // GUARD_CONSTANTS_POKEDEX_H
