#ifndef GUARD_CONFIG_SPECIES_ENABLED_H
#define GUARD_CONFIG_SPECIES_ENABLED_H

// WARNING: For some reason, using 1/0 instead of TRUE/FALSE causes cry IDs to be shifted.
// Please use TRUE/FALSE when using the family toggles.

// Modifying the latest generation WILL change the saveblock due to Dex flags and will require a new save file.
// Generations of Pokémon are defined by the first member introduced,
// so Petitmon depends on the Gen 1 setting despite Guilmon_x being the lowest member of the evolution tree.
// Eg: If P_GEN_2_POKEMON is set to FALSE, all members of the Mushroomon Family will be disabled
// (Mushroomon + Hisuian, Weavile and Sneasler).
#define P_GEN_1_POKEMON                  TRUE // Generation 1 Pokémon (RGBY)
#define P_GEN_2_POKEMON                  TRUE // Generation 2 Pokémon (GSC)
#define P_GEN_3_POKEMON                  TRUE // Generation 3 Pokémon (RSE, FRLG)
#define P_GEN_4_POKEMON                  TRUE // Generation 4 Pokémon (DPPt, HGSS)
#define P_GEN_5_POKEMON                  TRUE // Generation 5 Pokémon (BW, B2W2)
#define P_GEN_6_POKEMON                  TRUE // Generation 6 Pokémon (XY, ORAS)
#define P_GEN_7_POKEMON                  TRUE // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_GEN_8_POKEMON                  TRUE // Generation 8 Pokémon (SwSh, BDSP, LA)
#define P_GEN_9_POKEMON                  TRUE // Generation 9 Pokémon (SV)

// Setting this to TRUE will add the new evolutions to the Regional Dex.
#define P_NEW_EVOS_IN_REGIONAL_DEX       TRUE

// Battle gimmick specific Forms.
#define P_MEGA_EVOLUTIONS                TRUE
#define P_PRIMAL_REVERSIONS              TRUE // Groudon and Kyogre only.
#define P_ULTRA_BURST_FORMS              TRUE // Ultra Necrozma only.
#define P_GIGANTAMAX_FORMS               TRUE
#define P_TERA_FORMS                     TRUE

// Fusion forms
#define P_FUSION_FORMS                   TRUE

// Regional Forms. Includes Regional Form evolutions, like Sirfetch'd.
#define P_REGIONAL_FORMS                 TRUE
#define P_ALOLAN_FORMS                   P_REGIONAL_FORMS
#define P_GALARIAN_FORMS                 P_REGIONAL_FORMS
#define P_HISUIAN_FORMS                  P_REGIONAL_FORMS
#define P_PALDEAN_FORMS                  P_REGIONAL_FORMS

// Big groups of forms that aren't always desired when choosing families.
#define P_PETITMON_EXTRA_FORMS            TRUE
#define P_COSPLAY_PETITMON_FORMS          P_PETITMON_EXTRA_FORMS
#define P_CAP_PETITMON_FORMS              P_PETITMON_EXTRA_FORMS

// Cross-generation evolutions. Includes pre-evolutions.
#define P_CROSS_GENERATION_EVOS          TRUE
#define P_GEN_2_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_3_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_4_CROSS_EVOS               P_CROSS_GENERATION_EVOS
//#define P_GEN_5_CROSS_EVOS             // Gen 5 didn't introduce any cross-gen evos.
#define P_GEN_6_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Just Sylveon.
//#define P_GEN_7_CROSS_EVOS             // Alolan evolutions handled by P_ALOLAN_FORMS.
#define P_GEN_8_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Regional evolutions handled by P_GALARIAN_FORMS and P_HISUIAN_FORMS.
#define P_GEN_9_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Clodsire handled by P_PALDEAN_FORMS.

// To disable specific families, replace P_GEN_x_POKEMON with FALSE.
#define P_FAMILY_ARGOMON_F               P_GEN_1_POKEMON
#define P_FAMILY_BOTAMON              P_GEN_1_POKEMON
#define P_FAMILY_CONOMON                P_GEN_1_POKEMON
#define P_FAMILY_DATIRIMON                P_GEN_1_POKEMON
#define P_FAMILY_FUFUMON                  P_GEN_1_POKEMON
#define P_FAMILY_KETOMON                  P_GEN_1_POKEMON
#define P_FAMILY_CHOROMON                 P_GEN_1_POKEMON
#define P_FAMILY_NYOKIMON                 P_GEN_1_POKEMON
#define P_FAMILY_PAFUMON                   P_GEN_1_POKEMON
#define P_FAMILY_PETITMON                 P_GEN_1_POKEMON
#define P_FAMILY_POPOMON               P_GEN_1_POKEMON
#define P_FAMILY_NIDORAN                 P_GEN_1_POKEMON
#define P_FAMILY_PUYOMON                P_GEN_1_POKEMON
#define P_FAMILY_RELEMON                  P_GEN_1_POKEMON
#define P_FAMILY_SANDMON              P_GEN_1_POKEMON
#define P_FAMILY_ICEBOTAMON                   P_GEN_1_POKEMON
#define P_FAMILY_ZERIMON                  P_GEN_1_POKEMON
#define P_FAMILY_ARGOMON_IT                   P_GEN_1_POKEMON
#define P_FAMILY_BIBIMON                 P_GEN_1_POKEMON
#define P_FAMILY_BUDMON                 P_GEN_1_POKEMON
#define P_FAMILY_CALUMON                  P_GEN_1_POKEMON
#define P_FAMILY_CHICCHIMON                 P_GEN_1_POKEMON
#define P_FAMILY_DEMIVEEMON                  P_GEN_1_POKEMON
#define P_FAMILY_FRIMON               P_GEN_1_POKEMON
#define P_FAMILY_GUMMYMON                 P_GEN_1_POKEMON
#define P_FAMILY_HOPMON                    P_GEN_1_POKEMON
#define P_FAMILY_KOKOMON                  P_GEN_1_POKEMON
#define P_FAMILY_KYAROMON              P_GEN_1_POKEMON
#define P_FAMILY_MINOMON               P_GEN_1_POKEMON
#define P_FAMILY_MONIMON                 P_GEN_1_POKEMON
#define P_FAMILY_NEGAMON                  P_GEN_1_POKEMON
#define P_FAMILY_PAGUMON                P_GEN_1_POKEMON
#define P_FAMILY_PICKMON_WHITE               P_GEN_1_POKEMON
#define P_FAMILY_PINAMON               P_GEN_1_POKEMON
#define P_FAMILY_POROMON                   P_GEN_1_POKEMON
#define P_FAMILY_PUSURIMON                    P_GEN_1_POKEMON
#define P_FAMILY_SAKUTTOMON                  P_GEN_1_POKEMON
#define P_FAMILY_TANEMON                P_GEN_1_POKEMON
#define P_FAMILY_TOKOMON_X                  P_GEN_1_POKEMON
#define P_FAMILY_TSUNOMON                    P_GEN_1_POKEMON
#define P_FAMILY_TUMBLEMON                 P_GEN_1_POKEMON
#define P_FAMILY_VIXIMON                  P_GEN_1_POKEMON
#define P_FAMILY_XIAOMON                 P_GEN_1_POKEMON
#define P_FAMILY_YOKOMON               P_GEN_1_POKEMON
#define P_FAMILY_AGUMON_06                  P_GEN_1_POKEMON
#define P_FAMILY_HITMONS                 P_GEN_1_POKEMON
#define P_FAMILY_ARCADIAMON_ROOKIE               P_GEN_1_POKEMON
#define P_FAMILY_ARGOMON_ROOKIE                 P_GEN_1_POKEMON
#define P_FAMILY_ARURAUMON                 P_GEN_1_POKEMON
#define P_FAMILY_BEARMON                 P_GEN_1_POKEMON
#define P_FAMILY_BETAMON                 P_GEN_1_POKEMON
#define P_FAMILY_BETAMON_X              P_GEN_1_POKEMON
#define P_FAMILY_BIYOMON                  P_GEN_1_POKEMON
#define P_FAMILY_BLKAGUMON_X                 P_GEN_1_POKEMON
#define P_FAMILY_BLKGUILMON                  P_GEN_1_POKEMON
#define P_FAMILY_BULUCOMON                 P_GEN_1_POKEMON
#define P_FAMILY_BURGERMON                 P_GEN_1_POKEMON
#define P_FAMILY_SAMUAGUMON                    P_GEN_1_POKEMON
#define P_FAMILY_CANDLEMON              P_GEN_1_POKEMON
#define P_FAMILY_CHIKURIMON                  P_GEN_1_POKEMON
#define P_FAMILY_TYUTYUMON                  P_GEN_1_POKEMON
#define P_FAMILY_CHUUMON                  P_GEN_1_POKEMON
#define P_FAMILY_HAZYAGUMON                P_GEN_1_POKEMON
#define P_FAMILY_CORONAMON                  P_GEN_1_POKEMON
#define P_FAMILY_CRABMON                   P_GEN_1_POKEMON
#define P_FAMILY_CRABMON_X                   P_GEN_1_POKEMON
#define P_FAMILY_DOKUNEMON                 P_GEN_1_POKEMON
#define P_FAMILY_DONDOKOMON                 P_GEN_1_POKEMON
#define P_FAMILY_DOTAGUMON                  P_GEN_1_POKEMON
#define P_FAMILY_DRACMON              P_GEN_1_POKEMON
#define P_FAMILY_DRACOMON                 P_GEN_1_POKEMON
#define P_FAMILY_DRACOMON_X                P_GEN_1_POKEMON
#define P_FAMILY_EBIBURGMON                  P_GEN_1_POKEMON
#define P_FAMILY_EKAKIMON                 P_GEN_1_POKEMON
#define P_FAMILY_ELECMON                 P_GEN_1_POKEMON
#define P_FAMILY_AGUMON_FAKE_EXPERT                  P_GEN_1_POKEMON
#define P_FAMILY_FALCOMON                     P_GEN_1_POKEMON

#define P_FAMILY_FALCOMON_06               P_GEN_2_POKEMON
#define P_FAMILY_FLORAMON               P_GEN_2_POKEMON
#define P_FAMILY_GAMMAMON                P_GEN_2_POKEMON
#define P_FAMILY_GAZIMON                 P_GEN_2_POKEMON
#define P_FAMILY_GHOSTMON                P_GEN_2_POKEMON
#define P_FAMILY_GIZUMON                  P_GEN_2_POKEMON
#define P_FAMILY_GOMAMON                P_GEN_2_POKEMON
#define P_FAMILY_GOTSUMON_X                P_GEN_2_POKEMON
#define P_FAMILY_HAGURUMON                  P_GEN_2_POKEMON
#define P_FAMILY_HAWKMON                    P_GEN_2_POKEMON
#define P_FAMILY_HYOKOMON                  P_GEN_2_POKEMON
#define P_FAMILY_JAZAMON                  P_GEN_2_POKEMON
#define P_FAMILY_JUNKMON               P_GEN_2_POKEMON
#define P_FAMILY_KERAMON                  P_GEN_2_POKEMON
#define P_FAMILY_KOKABUIMON                   P_GEN_2_POKEMON
#define P_FAMILY_KOKUWAMON                 P_GEN_2_POKEMON
#define P_FAMILY_KOTEMON                   P_GEN_2_POKEMON
#define P_FAMILY_KUDAMON                  P_GEN_2_POKEMON
#define P_FAMILY_LALAMON                 P_GEN_2_POKEMON
#define P_FAMILY_LOOGAMON              P_GEN_2_POKEMON
#define P_FAMILY_LOPMON                   P_GEN_2_POKEMON
#define P_FAMILY_LOPMONX               P_GEN_2_POKEMON
#define P_FAMILY_LUCEMON               P_GEN_2_POKEMON
#define P_FAMILY_PINECO                  P_GEN_2_POKEMON
#define P_FAMILY_LUXMON               P_GEN_2_POKEMON
#define P_FAMILY_METABEE                  P_GEN_2_POKEMON
#define P_FAMILY_MODBETAMON                P_GEN_2_POKEMON
#define P_FAMILY_MONMON                P_GEN_2_POKEMON
#define P_FAMILY_MORPHOMON                 P_GEN_2_POKEMON
#define P_FAMILY_MUCHOMON               P_GEN_2_POKEMON
#define P_FAMILY_MUSHROOMON                 P_GEN_2_POKEMON
#define P_FAMILY_NEEMON               P_GEN_2_POKEMON
#define P_FAMILY_OTAMAMON_RED                  P_GEN_2_POKEMON
#define P_FAMILY_PALMON                  P_GEN_2_POKEMON
#define P_FAMILY_PATAMON                 P_GEN_2_POKEMON
#define P_FAMILY_PAWNMON_BLACK                P_GEN_2_POKEMON
#define P_FAMILY_PENGUINMON                P_GEN_2_POKEMON
#define P_FAMILY_PETITMAMON                 P_GEN_2_POKEMON
#define P_FAMILY_PHASCOMON                P_GEN_2_POKEMON
#define P_FAMILY_PILLOMON                P_GEN_2_POKEMON
#define P_FAMILY_PULSEMON                  P_GEN_2_POKEMON
#define P_FAMILY_ROKUSHO                P_GEN_2_POKEMON
#define P_FAMILY_RYUDAMON                P_GEN_2_POKEMON
#define P_FAMILY_SHAMANMON                 P_GEN_2_POKEMON
#define P_FAMILY_YUKIAGUMON                  P_GEN_2_POKEMON
#define P_FAMILY_YUKIAGUMON_06                   P_GEN_2_POKEMON
#define P_FAMILY_ICEGOBIMON                 P_GEN_2_POKEMON
#define P_FAMILY_SOLARMON                P_GEN_2_POKEMON
#define P_FAMILY_SPARROWMON                   P_GEN_2_POKEMON
#define P_FAMILY_STARMON_2010                   P_GEN_2_POKEMON
#define P_FAMILY_STRABIMON                  P_GEN_2_POKEMON

#define P_FAMILY_SUNARZAMON                 P_GEN_3_POKEMON
#define P_FAMILY_SYAKOMON_X                 P_GEN_3_POKEMON
#define P_FAMILY_TERRIERMON                  P_GEN_3_POKEMON
#define P_FAMILY_TINKERMON               P_GEN_3_POKEMON
#define P_FAMILY_TOYAGUMON               P_GEN_3_POKEMON
#define P_FAMILY_VEEMON                 P_GEN_3_POKEMON
#define P_FAMILY_ZUBAMON                   P_GEN_3_POKEMON
#define P_FAMILY_AIRDRAMON                  P_GEN_3_POKEMON
#define P_FAMILY_ALLOMON_X                 P_GEN_3_POKEMON
#define P_FAMILY_ANGEMON                 P_GEN_3_POKEMON
#define P_FAMILY_APEMON                   P_GEN_3_POKEMON
#define P_FAMILY_ARCHELOMON                 P_GEN_3_POKEMON
#define P_FAMILY_ARESDRAMON               P_GEN_3_POKEMON
#define P_FAMILY_AURUMON                 P_GEN_3_POKEMON
#define P_FAMILY_BAKEMON                 P_GEN_3_POKEMON
#define P_FAMILY_BAOHUCKMON                 P_GEN_3_POKEMON
#define P_FAMILY_BETGAMAMON                P_GEN_3_POKEMON
#define P_FAMILY_BIOTHUNMON                P_GEN_3_POKEMON
#define P_FAMILY_BIRDRAMON                  P_GEN_3_POKEMON
#define P_FAMILY_BLGARGOMON                 P_GEN_3_POKEMON
#define P_FAMILY_BLGARURMON                  P_GEN_3_POKEMON
#define P_FAMILY_BLKGATOMON                    P_GEN_3_POKEMON
#define P_FAMILY_SAWKUWAMON                P_GEN_3_POKEMON
#define P_FAMILY_BOARMON               P_GEN_3_POKEMON
#define P_FAMILY_BOOGIEMON                  P_GEN_3_POKEMON
#define P_FAMILY_BUCCHIEMON_RED                   P_GEN_3_POKEMON
#define P_FAMILY_BUCCHIEMON_GREEN_BULKMON        P_GEN_3_POKEMON
#define P_FAMILY_BULLMON                 P_GEN_3_POKEMON
#define P_FAMILY_BURAIMON                  P_GEN_3_POKEMON
#define P_FAMILY_CHOUMON                P_GEN_3_POKEMON
#define P_FAMILY_CHAMBLEMON                 P_GEN_3_POKEMON
#define P_FAMILY_CHRYSALMON                   P_GEN_3_POKEMON
#define P_FAMILY_CLOCKMON                 P_GEN_3_POKEMON
#define P_FAMILY_CLOCKMON_FUSION                  P_GEN_3_POKEMON
#define P_FAMILY_COREDRAMON_BLUE                  P_GEN_3_POKEMON
#define P_FAMILY_COREDRAMON_GREEN                P_GEN_3_POKEMON
#define P_FAMILY_DARCMON                  P_GEN_3_POKEMON
#define P_FAMILY_DARLIZAMON                  P_GEN_3_POKEMON
#define P_FAMILY_DARKTYRMON                P_GEN_3_POKEMON
#define P_FAMILY_DARKTYRMON_X                 P_GEN_3_POKEMON
#define P_FAMILY_DECKDRAMON                P_GEN_3_POKEMON
#define P_FAMILY_DELTAMON                 P_GEN_3_POKEMON
#define P_FAMILY_DEPTHMON                P_GEN_3_POKEMON
#define P_FAMILY_DEVIDRAMON                P_GEN_3_POKEMON
#define P_FAMILY_DEXDORUMON                  P_GEN_3_POKEMON
#define P_FAMILY_DIGMON                  P_GEN_3_POKEMON
#define P_FAMILY_DOBERMON                 P_GEN_3_POKEMON
#define P_FAMILY_DOGGYMON                  P_GEN_3_POKEMON
#define P_FAMILY_DOLPHMON                P_GEN_3_POKEMON
#define P_FAMILY_KECLEON                 P_GEN_3_POKEMON
#define P_FAMILY_SHUPPET                 P_GEN_3_POKEMON
#define P_FAMILY_DUSKULL                 P_GEN_3_POKEMON
#define P_FAMILY_TROPIUS                 P_GEN_3_POKEMON
#define P_FAMILY_CHIMECHO                P_GEN_3_POKEMON
#define P_FAMILY_ABSOL                   P_GEN_3_POKEMON
#define P_FAMILY_SNORUNT                 P_GEN_3_POKEMON
#define P_FAMILY_SPHEAL                  P_GEN_3_POKEMON
#define P_FAMILY_CLAMPERL                P_GEN_3_POKEMON
#define P_FAMILY_RELICANTH               P_GEN_3_POKEMON
#define P_FAMILY_LUVDISC                 P_GEN_3_POKEMON
#define P_FAMILY_BAGON                   P_GEN_3_POKEMON
#define P_FAMILY_BELDUM                  P_GEN_3_POKEMON
#define P_FAMILY_REGIROCK                P_GEN_3_POKEMON
#define P_FAMILY_REGICE                  P_GEN_3_POKEMON
#define P_FAMILY_REGISTEEL               P_GEN_3_POKEMON
#define P_FAMILY_LATIAS                  P_GEN_3_POKEMON
#define P_FAMILY_LATIOS                  P_GEN_3_POKEMON
#define P_FAMILY_KYOGRE                  P_GEN_3_POKEMON
#define P_FAMILY_GROUDON                 P_GEN_3_POKEMON
#define P_FAMILY_RAYQUAZA                P_GEN_3_POKEMON
#define P_FAMILY_JIRACHI                 P_GEN_3_POKEMON
#define P_FAMILY_DEOXYS                  P_GEN_3_POKEMON

#define P_FAMILY_TURTWIG                 P_GEN_4_POKEMON
#define P_FAMILY_CHIMCHAR                P_GEN_4_POKEMON
#define P_FAMILY_PIPLUP                  P_GEN_4_POKEMON
#define P_FAMILY_STARLY                  P_GEN_4_POKEMON
#define P_FAMILY_BIDOOF                  P_GEN_4_POKEMON
#define P_FAMILY_KRICKETOT               P_GEN_4_POKEMON
#define P_FAMILY_SHINX                   P_GEN_4_POKEMON
#define P_FAMILY_CRANIDOS                P_GEN_4_POKEMON
#define P_FAMILY_SHIELDON                P_GEN_4_POKEMON
#define P_FAMILY_BURMY                   P_GEN_4_POKEMON
#define P_FAMILY_COMBEE                  P_GEN_4_POKEMON
#define P_FAMILY_PACHIRISU               P_GEN_4_POKEMON
#define P_FAMILY_BUIZEL                  P_GEN_4_POKEMON
#define P_FAMILY_CHERUBI                 P_GEN_4_POKEMON
#define P_FAMILY_SHELLOS                 P_GEN_4_POKEMON
#define P_FAMILY_DRIFLOON                P_GEN_4_POKEMON
#define P_FAMILY_BUNEARY                 P_GEN_4_POKEMON
#define P_FAMILY_GLAMEOW                 P_GEN_4_POKEMON
#define P_FAMILY_STUNKY                  P_GEN_4_POKEMON
#define P_FAMILY_BRONZOR                 P_GEN_4_POKEMON
#define P_FAMILY_CHATOT                  P_GEN_4_POKEMON
#define P_FAMILY_SPIRITOMB               P_GEN_4_POKEMON
#define P_FAMILY_GIBLE                   P_GEN_4_POKEMON
#define P_FAMILY_RIOLU                   P_GEN_4_POKEMON
#define P_FAMILY_HIPPOPOTAS              P_GEN_4_POKEMON
#define P_FAMILY_SKORUPI                 P_GEN_4_POKEMON
#define P_FAMILY_CROAGUNK                P_GEN_4_POKEMON
#define P_FAMILY_CARNIVINE               P_GEN_4_POKEMON
#define P_FAMILY_FINNEON                 P_GEN_4_POKEMON
#define P_FAMILY_SNOVER                  P_GEN_4_POKEMON
#define P_FAMILY_ROTOM                   P_GEN_4_POKEMON
#define P_FAMILY_UXIE                    P_GEN_4_POKEMON
#define P_FAMILY_MESPRIT                 P_GEN_4_POKEMON
#define P_FAMILY_AZELF                   P_GEN_4_POKEMON
#define P_FAMILY_DIALGA                  P_GEN_4_POKEMON
#define P_FAMILY_PALKIA                  P_GEN_4_POKEMON
#define P_FAMILY_HEATRAN                 P_GEN_4_POKEMON
#define P_FAMILY_REGIGIGAS               P_GEN_4_POKEMON
#define P_FAMILY_GIRATINA                P_GEN_4_POKEMON
#define P_FAMILY_CRESSELIA               P_GEN_4_POKEMON
#define P_FAMILY_MANAPHY                 P_GEN_4_POKEMON
#define P_FAMILY_DARKRAI                 P_GEN_4_POKEMON
#define P_FAMILY_SHAYMIN                 P_GEN_4_POKEMON
#define P_FAMILY_ARCEUS                  P_GEN_4_POKEMON

#define P_FAMILY_VICTINI                 P_GEN_5_POKEMON
#define P_FAMILY_SNIVY                   P_GEN_5_POKEMON
#define P_FAMILY_TEPIG                   P_GEN_5_POKEMON
#define P_FAMILY_OSHAWOTT                P_GEN_5_POKEMON
#define P_FAMILY_PATRAT                  P_GEN_5_POKEMON
#define P_FAMILY_LILLIPUP                P_GEN_5_POKEMON
#define P_FAMILY_PURRLOIN                P_GEN_5_POKEMON
#define P_FAMILY_PANSAGE                 P_GEN_5_POKEMON
#define P_FAMILY_PANSEAR                 P_GEN_5_POKEMON
#define P_FAMILY_PANPOUR                 P_GEN_5_POKEMON
#define P_FAMILY_MUNNA                   P_GEN_5_POKEMON
#define P_FAMILY_PIDOVE                  P_GEN_5_POKEMON
#define P_FAMILY_BLITZLE                 P_GEN_5_POKEMON
#define P_FAMILY_ROGGENROLA              P_GEN_5_POKEMON
#define P_FAMILY_WOOBAT                  P_GEN_5_POKEMON
#define P_FAMILY_DRILBUR                 P_GEN_5_POKEMON
#define P_FAMILY_AUDINO                  P_GEN_5_POKEMON
#define P_FAMILY_TIMBURR                 P_GEN_5_POKEMON
#define P_FAMILY_TYMPOLE                 P_GEN_5_POKEMON
#define P_FAMILY_THROH                   P_GEN_5_POKEMON
#define P_FAMILY_SAWK                    P_GEN_5_POKEMON
#define P_FAMILY_SEWADDLE                P_GEN_5_POKEMON
#define P_FAMILY_VENIPEDE                P_GEN_5_POKEMON
#define P_FAMILY_COTTONEE                P_GEN_5_POKEMON
#define P_FAMILY_PETILIL                 P_GEN_5_POKEMON
#define P_FAMILY_BASCULIN                P_GEN_5_POKEMON
#define P_FAMILY_SANDILE                 P_GEN_5_POKEMON
#define P_FAMILY_DARUMAKA                P_GEN_5_POKEMON
#define P_FAMILY_MARACTUS                P_GEN_5_POKEMON
#define P_FAMILY_DWEBBLE                 P_GEN_5_POKEMON
#define P_FAMILY_SCRAGGY                 P_GEN_5_POKEMON
#define P_FAMILY_SIGILYPH                P_GEN_5_POKEMON
#define P_FAMILY_YAMASK                  P_GEN_5_POKEMON
#define P_FAMILY_TIRTOUGA                P_GEN_5_POKEMON
#define P_FAMILY_ARCHEN                  P_GEN_5_POKEMON
#define P_FAMILY_TRUBBISH                P_GEN_5_POKEMON
#define P_FAMILY_ZORUA                   P_GEN_5_POKEMON
#define P_FAMILY_MINCCINO                P_GEN_5_POKEMON
#define P_FAMILY_GOTHITA                 P_GEN_5_POKEMON
#define P_FAMILY_SOLOSIS                 P_GEN_5_POKEMON
#define P_FAMILY_DUCKLETT                P_GEN_5_POKEMON
#define P_FAMILY_VANILLITE               P_GEN_5_POKEMON
#define P_FAMILY_DEERLING                P_GEN_5_POKEMON
#define P_FAMILY_EMOLGA                  P_GEN_5_POKEMON
#define P_FAMILY_KARRABLAST              P_GEN_5_POKEMON
#define P_FAMILY_FOONGUS                 P_GEN_5_POKEMON
#define P_FAMILY_FRILLISH                P_GEN_5_POKEMON
#define P_FAMILY_ALOMOMOLA               P_GEN_5_POKEMON
#define P_FAMILY_JOLTIK                  P_GEN_5_POKEMON
#define P_FAMILY_FERROSEED               P_GEN_5_POKEMON
#define P_FAMILY_KLINK                   P_GEN_5_POKEMON
#define P_FAMILY_TYNAMO                  P_GEN_5_POKEMON
#define P_FAMILY_ELGYEM                  P_GEN_5_POKEMON
#define P_FAMILY_LITWICK                 P_GEN_5_POKEMON
#define P_FAMILY_AXEW                    P_GEN_5_POKEMON
#define P_FAMILY_CUBCHOO                 P_GEN_5_POKEMON
#define P_FAMILY_CRYOGONAL               P_GEN_5_POKEMON
#define P_FAMILY_SHELMET                 P_GEN_5_POKEMON
#define P_FAMILY_STUNFISK                P_GEN_5_POKEMON
#define P_FAMILY_MIENFOO                 P_GEN_5_POKEMON
#define P_FAMILY_DRUDDIGON               P_GEN_5_POKEMON
#define P_FAMILY_GOLETT                  P_GEN_5_POKEMON
#define P_FAMILY_PAWNIARD                P_GEN_5_POKEMON
#define P_FAMILY_BOUFFALANT              P_GEN_5_POKEMON
#define P_FAMILY_RUFFLET                 P_GEN_5_POKEMON
#define P_FAMILY_VULLABY                 P_GEN_5_POKEMON
#define P_FAMILY_HEATMOR                 P_GEN_5_POKEMON
#define P_FAMILY_DURANT                  P_GEN_5_POKEMON
#define P_FAMILY_DEINO                   P_GEN_5_POKEMON
#define P_FAMILY_LARVESTA                P_GEN_5_POKEMON
#define P_FAMILY_COBALION                P_GEN_5_POKEMON
#define P_FAMILY_TERRAKION               P_GEN_5_POKEMON
#define P_FAMILY_VIRIZION                P_GEN_5_POKEMON
#define P_FAMILY_TORNADUS                P_GEN_5_POKEMON
#define P_FAMILY_THUNDURUS               P_GEN_5_POKEMON
#define P_FAMILY_RESHIRAM                P_GEN_5_POKEMON
#define P_FAMILY_ZEKROM                  P_GEN_5_POKEMON
#define P_FAMILY_LANDORUS                P_GEN_5_POKEMON
#define P_FAMILY_KYUREM                  P_GEN_5_POKEMON
#define P_FAMILY_KELDEO                  P_GEN_5_POKEMON
#define P_FAMILY_MELOETTA                P_GEN_5_POKEMON
#define P_FAMILY_GENESECT                P_GEN_5_POKEMON

#define P_FAMILY_CHESPIN                 P_GEN_6_POKEMON
#define P_FAMILY_FENNEKIN                P_GEN_6_POKEMON
#define P_FAMILY_FROAKIE                 P_GEN_6_POKEMON
#define P_FAMILY_BUNNELBY                P_GEN_6_POKEMON
#define P_FAMILY_FLETCHLING              P_GEN_6_POKEMON
#define P_FAMILY_SCATTERBUG              P_GEN_6_POKEMON
#define P_FAMILY_LITLEO                  P_GEN_6_POKEMON
#define P_FAMILY_FLABEBE                 P_GEN_6_POKEMON
#define P_FAMILY_SKIDDO                  P_GEN_6_POKEMON
#define P_FAMILY_PANCHAM                 P_GEN_6_POKEMON
#define P_FAMILY_FURFROU                 P_GEN_6_POKEMON
#define P_FAMILY_ESPURR                  P_GEN_6_POKEMON
#define P_FAMILY_HONEDGE                 P_GEN_6_POKEMON
#define P_FAMILY_SPRITZEE                P_GEN_6_POKEMON
#define P_FAMILY_SWIRLIX                 P_GEN_6_POKEMON
#define P_FAMILY_INKAY                   P_GEN_6_POKEMON
#define P_FAMILY_BINACLE                 P_GEN_6_POKEMON
#define P_FAMILY_SKRELP                  P_GEN_6_POKEMON
#define P_FAMILY_CLAUNCHER               P_GEN_6_POKEMON
#define P_FAMILY_HELIOPTILE              P_GEN_6_POKEMON
#define P_FAMILY_TYRUNT                  P_GEN_6_POKEMON
#define P_FAMILY_AMAURA                  P_GEN_6_POKEMON
#define P_FAMILY_HAWLUCHA                P_GEN_6_POKEMON
#define P_FAMILY_DEDENNE                 P_GEN_6_POKEMON
#define P_FAMILY_CARBINK                 P_GEN_6_POKEMON
#define P_FAMILY_GOOMY                   P_GEN_6_POKEMON
#define P_FAMILY_KLEFKI                  P_GEN_6_POKEMON
#define P_FAMILY_PHANTUMP                P_GEN_6_POKEMON
#define P_FAMILY_PUMPKABOO               P_GEN_6_POKEMON
#define P_FAMILY_BERGMITE                P_GEN_6_POKEMON
#define P_FAMILY_NOIBAT                  P_GEN_6_POKEMON
#define P_FAMILY_XERNEAS                 P_GEN_6_POKEMON
#define P_FAMILY_YVELTAL                 P_GEN_6_POKEMON
#define P_FAMILY_ZYGARDE                 P_GEN_6_POKEMON
#define P_FAMILY_DIANCIE                 P_GEN_6_POKEMON
#define P_FAMILY_HOOPA                   P_GEN_6_POKEMON
#define P_FAMILY_VOLCANION               P_GEN_6_POKEMON

#define P_FAMILY_ROWLET                  P_GEN_7_POKEMON
#define P_FAMILY_LITTEN                  P_GEN_7_POKEMON
#define P_FAMILY_POPPLIO                 P_GEN_7_POKEMON
#define P_FAMILY_PIKIPEK                 P_GEN_7_POKEMON
#define P_FAMILY_YUNGOOS                 P_GEN_7_POKEMON
#define P_FAMILY_GRUBBIN                 P_GEN_7_POKEMON
#define P_FAMILY_CRABRAWLER              P_GEN_7_POKEMON
#define P_FAMILY_ORICORIO                P_GEN_7_POKEMON
#define P_FAMILY_CUTIEFLY                P_GEN_7_POKEMON
#define P_FAMILY_ROCKRUFF                P_GEN_7_POKEMON
#define P_FAMILY_WISHIWASHI              P_GEN_7_POKEMON
#define P_FAMILY_MAREANIE                P_GEN_7_POKEMON
#define P_FAMILY_MUDBRAY                 P_GEN_7_POKEMON
#define P_FAMILY_DEWPIDER                P_GEN_7_POKEMON
#define P_FAMILY_FOMANTIS                P_GEN_7_POKEMON
#define P_FAMILY_MORELULL                P_GEN_7_POKEMON
#define P_FAMILY_SALANDIT                P_GEN_7_POKEMON
#define P_FAMILY_STUFFUL                 P_GEN_7_POKEMON
#define P_FAMILY_BOUNSWEET               P_GEN_7_POKEMON
#define P_FAMILY_COMFEY                  P_GEN_7_POKEMON
#define P_FAMILY_ORANGURU                P_GEN_7_POKEMON
#define P_FAMILY_PASSIMIAN               P_GEN_7_POKEMON
#define P_FAMILY_WIMPOD                  P_GEN_7_POKEMON
#define P_FAMILY_SANDYGAST               P_GEN_7_POKEMON
#define P_FAMILY_PYUKUMUKU               P_GEN_7_POKEMON
#define P_FAMILY_TYPE_NULL               P_GEN_7_POKEMON
#define P_FAMILY_MINIOR                  P_GEN_7_POKEMON
#define P_FAMILY_KOMALA                  P_GEN_7_POKEMON
#define P_FAMILY_TURTONATOR              P_GEN_7_POKEMON
#define P_FAMILY_TOGEDEMARU              P_GEN_7_POKEMON
#define P_FAMILY_MIMIKYU                 P_GEN_7_POKEMON
#define P_FAMILY_BRUXISH                 P_GEN_7_POKEMON
#define P_FAMILY_DRAMPA                  P_GEN_7_POKEMON
#define P_FAMILY_DHELMISE                P_GEN_7_POKEMON
#define P_FAMILY_JANGMO_O                P_GEN_7_POKEMON
#define P_FAMILY_TAPU_KOKO               P_GEN_7_POKEMON
#define P_FAMILY_TAPU_LELE               P_GEN_7_POKEMON
#define P_FAMILY_TAPU_BULU               P_GEN_7_POKEMON
#define P_FAMILY_TAPU_FINI               P_GEN_7_POKEMON
#define P_FAMILY_COSMOG                  P_GEN_7_POKEMON
#define P_FAMILY_NIHILEGO                P_GEN_7_POKEMON
#define P_FAMILY_BUZZWOLE                P_GEN_7_POKEMON
#define P_FAMILY_PHEROMOSA               P_GEN_7_POKEMON
#define P_FAMILY_XURKITREE               P_GEN_7_POKEMON
#define P_FAMILY_CELESTEELA              P_GEN_7_POKEMON
#define P_FAMILY_KARTANA                 P_GEN_7_POKEMON
#define P_FAMILY_GUZZLORD                P_GEN_7_POKEMON
#define P_FAMILY_NECROZMA                P_GEN_7_POKEMON
#define P_FAMILY_MAGEARNA                P_GEN_7_POKEMON
#define P_FAMILY_MARSHADOW               P_GEN_7_POKEMON
#define P_FAMILY_POIPOLE                 P_GEN_7_POKEMON
#define P_FAMILY_STAKATAKA               P_GEN_7_POKEMON
#define P_FAMILY_BLACEPHALON             P_GEN_7_POKEMON
#define P_FAMILY_ZERAORA                 P_GEN_7_POKEMON
#define P_FAMILY_MELTAN                  P_GEN_7_POKEMON

#define P_FAMILY_GROOKEY                 P_GEN_8_POKEMON
#define P_FAMILY_SCORBUNNY               P_GEN_8_POKEMON
#define P_FAMILY_SOBBLE                  P_GEN_8_POKEMON
#define P_FAMILY_SKWOVET                 P_GEN_8_POKEMON
#define P_FAMILY_ROOKIDEE                P_GEN_8_POKEMON
#define P_FAMILY_BLIPBUG                 P_GEN_8_POKEMON
#define P_FAMILY_NICKIT                  P_GEN_8_POKEMON
#define P_FAMILY_GOSSIFLEUR              P_GEN_8_POKEMON
#define P_FAMILY_WOOLOO                  P_GEN_8_POKEMON
#define P_FAMILY_CHEWTLE                 P_GEN_8_POKEMON
#define P_FAMILY_YAMPER                  P_GEN_8_POKEMON
#define P_FAMILY_ROLYCOLY                P_GEN_8_POKEMON
#define P_FAMILY_APPLIN                  P_GEN_8_POKEMON
#define P_FAMILY_SILICOBRA               P_GEN_8_POKEMON
#define P_FAMILY_CRAMORANT               P_GEN_8_POKEMON
#define P_FAMILY_ARROKUDA                P_GEN_8_POKEMON
#define P_FAMILY_TOXEL                   P_GEN_8_POKEMON
#define P_FAMILY_SIZZLIPEDE              P_GEN_8_POKEMON
#define P_FAMILY_CLOBBOPUS               P_GEN_8_POKEMON
#define P_FAMILY_SINISTEA                P_GEN_8_POKEMON
#define P_FAMILY_HATENNA                 P_GEN_8_POKEMON
#define P_FAMILY_IMPIDIMP                P_GEN_8_POKEMON
#define P_FAMILY_MILCERY                 P_GEN_8_POKEMON
#define P_FAMILY_FALINKS                 P_GEN_8_POKEMON
#define P_FAMILY_PINCURCHIN              P_GEN_8_POKEMON
#define P_FAMILY_SNOM                    P_GEN_8_POKEMON
#define P_FAMILY_STONJOURNER             P_GEN_8_POKEMON
#define P_FAMILY_EISCUE                  P_GEN_8_POKEMON
#define P_FAMILY_INDEEDEE                P_GEN_8_POKEMON
#define P_FAMILY_MORPEKO                 P_GEN_8_POKEMON
#define P_FAMILY_CUFANT                  P_GEN_8_POKEMON
#define P_FAMILY_DRACOZOLT               P_GEN_8_POKEMON
#define P_FAMILY_ARCTOZOLT               P_GEN_8_POKEMON
#define P_FAMILY_DRACOVISH               P_GEN_8_POKEMON
#define P_FAMILY_ARCTOVISH               P_GEN_8_POKEMON
#define P_FAMILY_DURALUDON               P_GEN_8_POKEMON
#define P_FAMILY_DREEPY                  P_GEN_8_POKEMON
#define P_FAMILY_ZACIAN                  P_GEN_8_POKEMON
#define P_FAMILY_ZAMAZENTA               P_GEN_8_POKEMON
#define P_FAMILY_ETERNATUS               P_GEN_8_POKEMON
#define P_FAMILY_KUBFU                   P_GEN_8_POKEMON
#define P_FAMILY_ZARUDE                  P_GEN_8_POKEMON
#define P_FAMILY_REGIELEKI               P_GEN_8_POKEMON
#define P_FAMILY_REGIDRAGO               P_GEN_8_POKEMON
#define P_FAMILY_GLASTRIER               P_GEN_8_POKEMON
#define P_FAMILY_SPECTRIER               P_GEN_8_POKEMON
#define P_FAMILY_CALYREX                 P_GEN_8_POKEMON
#define P_FAMILY_ENAMORUS                P_GEN_8_POKEMON

#define P_FAMILY_SPRIGATITO              P_GEN_9_POKEMON
#define P_FAMILY_FUECOCO                 P_GEN_9_POKEMON
#define P_FAMILY_QUAXLY                  P_GEN_9_POKEMON
#define P_FAMILY_LECHONK                 P_GEN_9_POKEMON
#define P_FAMILY_TAROUNTULA              P_GEN_9_POKEMON
#define P_FAMILY_NYMBLE                  P_GEN_9_POKEMON
#define P_FAMILY_PAWMI                   P_GEN_9_POKEMON
#define P_FAMILY_TANDEMAUS               P_GEN_9_POKEMON
#define P_FAMILY_FIDOUGH                 P_GEN_9_POKEMON
#define P_FAMILY_SMOLIV                  P_GEN_9_POKEMON
#define P_FAMILY_SQUAWKABILLY            P_GEN_9_POKEMON
#define P_FAMILY_NACLI                   P_GEN_9_POKEMON
#define P_FAMILY_CHARCADET               P_GEN_9_POKEMON
#define P_FAMILY_TADBULB                 P_GEN_9_POKEMON
#define P_FAMILY_WATTREL                 P_GEN_9_POKEMON
#define P_FAMILY_MASCHIFF                P_GEN_9_POKEMON
#define P_FAMILY_SHROODLE                P_GEN_9_POKEMON
#define P_FAMILY_BRAMBLIN                P_GEN_9_POKEMON
#define P_FAMILY_TOEDSCOOL               P_GEN_9_POKEMON
#define P_FAMILY_KLAWF                   P_GEN_9_POKEMON
#define P_FAMILY_CAPSAKID                P_GEN_9_POKEMON
#define P_FAMILY_RELLOR                  P_GEN_9_POKEMON
#define P_FAMILY_FLITTLE                 P_GEN_9_POKEMON
#define P_FAMILY_TINKATINK               P_GEN_9_POKEMON
#define P_FAMILY_WIGLETT                 P_GEN_9_POKEMON
#define P_FAMILY_BOMBIRDIER              P_GEN_9_POKEMON
#define P_FAMILY_FINIZEN                 P_GEN_9_POKEMON
#define P_FAMILY_VAROOM                  P_GEN_9_POKEMON
#define P_FAMILY_CYCLIZAR                P_GEN_9_POKEMON
#define P_FAMILY_ORTHWORM                P_GEN_9_POKEMON
#define P_FAMILY_GLIMMET                 P_GEN_9_POKEMON
#define P_FAMILY_GREAVARD                P_GEN_9_POKEMON
#define P_FAMILY_FLAMIGO                 P_GEN_9_POKEMON
#define P_FAMILY_CETODDLE                P_GEN_9_POKEMON
#define P_FAMILY_VELUZA                  P_GEN_9_POKEMON
#define P_FAMILY_DONDOZO                 P_GEN_9_POKEMON
#define P_FAMILY_TATSUGIRI               P_GEN_9_POKEMON
#define P_FAMILY_GREAT_TUSK              P_GEN_9_POKEMON
#define P_FAMILY_SCREAM_TAIL             P_GEN_9_POKEMON
#define P_FAMILY_BRUTE_BONNET            P_GEN_9_POKEMON
#define P_FAMILY_FLUTTER_MANE            P_GEN_9_POKEMON
#define P_FAMILY_SLITHER_WING            P_GEN_9_POKEMON
#define P_FAMILY_SANDY_SHOCKS            P_GEN_9_POKEMON
#define P_FAMILY_IRON_TREADS             P_GEN_9_POKEMON
#define P_FAMILY_IRON_BUNDLE             P_GEN_9_POKEMON
#define P_FAMILY_IRON_HANDS              P_GEN_9_POKEMON
#define P_FAMILY_IRON_JUGULIS            P_GEN_9_POKEMON
#define P_FAMILY_IRON_MOTH               P_GEN_9_POKEMON
#define P_FAMILY_IRON_THORNS             P_GEN_9_POKEMON
#define P_FAMILY_FRIGIBAX                P_GEN_9_POKEMON
#define P_FAMILY_GIMMIGHOUL              P_GEN_9_POKEMON
#define P_FAMILY_WO_CHIEN                P_GEN_9_POKEMON
#define P_FAMILY_CHIEN_PAO               P_GEN_9_POKEMON
#define P_FAMILY_TING_LU                 P_GEN_9_POKEMON
#define P_FAMILY_CHI_YU                  P_GEN_9_POKEMON
#define P_FAMILY_ROARING_MOON            P_GEN_9_POKEMON
#define P_FAMILY_IRON_VALIANT            P_GEN_9_POKEMON
#define P_FAMILY_KORAIDON                P_GEN_9_POKEMON
#define P_FAMILY_MIRAIDON                P_GEN_9_POKEMON
#define P_FAMILY_WALKING_WAKE            P_GEN_9_POKEMON
#define P_FAMILY_IRON_LEAVES             P_GEN_9_POKEMON
#define P_FAMILY_POLTCHAGEIST            P_GEN_9_POKEMON
#define P_FAMILY_SINISTCHA               P_GEN_9_POKEMON
#define P_FAMILY_OKIDOGI                 P_GEN_9_POKEMON
#define P_FAMILY_MUNKIDORI               P_GEN_9_POKEMON
#define P_FAMILY_FEZANDIPITI             P_GEN_9_POKEMON
#define P_FAMILY_OGERPON                 P_GEN_9_POKEMON
#define P_FAMILY_GOUGING_FIRE            P_GEN_9_POKEMON
#define P_FAMILY_RAGING_BOLT             P_GEN_9_POKEMON
#define P_FAMILY_IRON_BOULDER            P_GEN_9_POKEMON
#define P_FAMILY_IRON_CROWN              P_GEN_9_POKEMON
#define P_FAMILY_TERAPAGOS               P_GEN_9_POKEMON
#define P_FAMILY_PECHARUNT               P_GEN_9_POKEMON

#endif // GUARD_CONFIG_SPECIES_ENABLED_H
