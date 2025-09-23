	.align 2
gCryTable::
.if P_CRIES_ENABLED == TRUE
.if P_FAMILY_ARGOMON_F == TRUE
	cry Cry_Argomon_f
	cry Cry_Bombmon
	cry Cry_Bommon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BommonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ARGOMON_F
.if P_FAMILY_BOTAMON == TRUE
	cry Cry_Botamon
	cry Cry_Chibickmon
	cry Cry_Chibomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_ChibomonMegaX
	cry Cry_ChibomonMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BOTAMON
.if P_FAMILY_CONOMON == TRUE
	cry Cry_Conomon
	cry Cry_Cotsucomon
	cry Cry_Curimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CurimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CONOMON
.if P_FAMILY_DATIRIMON == TRUE
	cry Cry_Datirimon
	cry Cry_Dodomon
	cry Cry_Dokimon
.endif @ P_FAMILY_DATIRIMON
.if P_FAMILY_FUFUMON == TRUE
	cry Cry_Fufumon
	cry Cry_Jyarimon
	cry Cry_Keemon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_KeemonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FUFUMON
.if P_FAMILY_KETOMON == TRUE
	cry Cry_Ketomon
	cry Cry_Kuramon
	cry Cry_Leafmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LeafmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_KETOMON
.if P_FAMILY_CHOROMON == TRUE
	cry Cry_Choromon
	cry Cry_Mokumon
.endif @ P_FAMILY_CHOROMON
.if P_FAMILY_NYOKIMON == TRUE
	cry Cry_Nyokimon
	cry Cry_Pabumon
.endif @ P_FAMILY_NYOKIMON
.if P_FAMILY_PAFUMON == TRUE
	cry Cry_Pafumon
	cry Cry_Paomon
.endif @ P_FAMILY_PAFUMON
.if P_FAMILY_PETITMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Guilmon_x
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Petitmon
	cry Cry_Pichimon
.endif @ P_FAMILY_PETITMON
.if P_FAMILY_POPOMON == TRUE
	cry Cry_Popomon
	cry Cry_Poyomon
.endif @ P_FAMILY_POPOMON
.if P_FAMILY_PUNIMON == TRUE
	cry Cry_Punimon
	cry Cry_Pupumon
	cry Cry_Pururumon
	cry Cry_Pusumon
	cry Cry_Puttimon
	cry Cry_Puwamon
.endif @ P_FAMILY_PUNIMON
.if P_FAMILY_PUYOMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Gumdramon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Puyomon
	cry Cry_Pyonmon
.endif @ P_FAMILY_PUYOMON
.if P_FAMILY_RELEMON == TRUE
	cry Cry_Relemon
	cry Cry_Sakumon
.endif @ P_FAMILY_RELEMON
.if P_FAMILY_SANDMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Hackmon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Sandmon
	cry Cry_Tsubumon
.endif @ P_FAMILY_SANDMON
.if P_FAMILY_ICEBOTAMON == TRUE
	cry Cry_Icebotamon
	cry Cry_Yuramon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Gotsumon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ICEBOTAMON
.if P_FAMILY_ZERIMON == TRUE
	cry Cry_Zerimon
	cry Cry_Zurumon
	cry Cry_Arcadiamon_it
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Impmon_x
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ZERIMON
.if P_FAMILY_ARGOMON_IT == TRUE
	cry Cry_Argomon_it
	cry Cry_Babydmon
.endif @ P_FAMILY_ARGOMON_IT
.if P_FAMILY_BIBIMON == TRUE
	cry Cry_Bibimon
	cry Cry_Bosamon
.endif @ P_FAMILY_BIBIMON
.if P_FAMILY_BUDMON == TRUE
	cry Cry_Budmon
	cry Cry_Bukamon
.endif @ P_FAMILY_BUDMON
.if P_FAMILY_CALUMON == TRUE
	cry Cry_Calumon
	cry Cry_Chapmon
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Perrserker
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_CALUMON
.if P_FAMILY_CHICCHIMON == TRUE
	cry Cry_Chicchimon
	cry Cry_Demmeramon
.endif @ P_FAMILY_CHICCHIMON
.if P_FAMILY_DEMIVEEMON == TRUE
	cry Cry_Demiveemon
	cry Cry_Dorimon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Annihilape
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DEMIVEEMON
.if P_FAMILY_FRIMON == TRUE
	cry Cry_Frimon
	cry Cry_Gigimon
.endif @ P_FAMILY_FRIMON
.if P_FAMILY_GUMMYMON == TRUE
	cry Cry_Gummymon
	cry Cry_Gurimon
	cry Cry_Hiyarimon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Kamemon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_GUMMYMON
.if P_FAMILY_HOPMON == TRUE
	cry Cry_Hopmon
	cry Cry_Kakkinmon
	cry Cry_Kapurimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_KapurimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HOPMON
.if P_FAMILY_KOKOMON == TRUE
	cry Cry_Kokomon
	cry Cry_Koromon
	cry Cry_Kozenimon
.endif @ P_FAMILY_KOKOMON
.if P_FAMILY_KYAROMON == TRUE
	cry Cry_Kyaromon
	cry Cry_Kyokyomon
	cry Cry_Kyupimon
.endif @ P_FAMILY_KYAROMON
.if P_FAMILY_MINOMON == TRUE
	cry Cry_Minomon
	cry Cry_Missimon
.endif @ P_FAMILY_MINOMON
.if P_FAMILY_MONIMON == TRUE
	cry Cry_Monimon
	cry Cry_Moonmon
	cry Cry_Motimon
.endif @ P_FAMILY_MONIMON
.if P_FAMILY_NEGAMON == TRUE
	cry Cry_Negamon
	cry Cry_Nyaromon
.endif @ P_FAMILY_NEGAMON
.if P_FAMILY_PAGUMON == TRUE
	cry Cry_Pagumon
	cry Cry_Pickmon_silver
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Liollmon
.endif @ P_GEN_2_CROSS_EVOS
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Pickmon_silverMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GALARIAN_FORMS == TRUE
	cry Cry_PagumonGalarian
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PAGUMON
.if P_FAMILY_PICKMON_WHITE == TRUE
	cry Cry_Pickmon_white
	cry Cry_Pickmon_red
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Magnezone
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_PICKMON_WHITE
.if P_FAMILY_PINAMON == TRUE
	cry Cry_Pinamon
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Sirfetchd
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PINAMON
.if P_FAMILY_POROMON == TRUE
	cry Cry_Poromon
	cry Cry_Puroromon
.endif @ P_FAMILY_POROMON
.if P_FAMILY_PUSURIMON == TRUE
	cry Cry_Pusurimon
	cry Cry_Puyoyomon
.endif @ P_FAMILY_PUSURIMON
.if P_FAMILY_SAKUTTOMON == TRUE
	cry Cry_Sakuttomon
	cry Cry_Sunmon
.endif @ P_FAMILY_SAKUTTOMON
.if P_FAMILY_TANEMON == TRUE
	cry Cry_Tanemon
	cry Cry_Tokomon
.endif @ P_FAMILY_TANEMON
.if P_FAMILY_TOKOMON_X == TRUE
	cry Cry_Tokomon_x
	cry Cry_Torballmon
	cry Cry_Tsumemon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_TsumemonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TOKOMON_X
.if P_FAMILY_TSUNOMON == TRUE
	cry Cry_Tsunomon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Kodekacmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_KodekacmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_TSUNOMON
.if P_FAMILY_TUMBLEMON == TRUE
	cry Cry_Tumblemon
	cry Cry_Upamon
.endif @ P_FAMILY_TUMBLEMON
.if P_FAMILY_VIXIMON == TRUE
	cry Cry_Viximon
	cry Cry_Wanyamon
.endif @ P_FAMILY_VIXIMON
.if P_FAMILY_XIAOMON == TRUE
	cry Cry_Xiaomon
	cry Cry_Yaamon
.endif @ P_FAMILY_XIAOMON
.if P_FAMILY_YOKOMON == TRUE
	cry Cry_Yokomon
	cry Cry_Agumon
.endif @ P_FAMILY_YOKOMON
.if P_FAMILY_AGUMON_06 == TRUE
	cry Cry_Agumon_06
	cry Cry_Agumon_expert
.endif @ P_FAMILY_AGUMON_06
.if P_FAMILY_HITMONS == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Salamon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Agumon_x
	cry Cry_Angoramon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Salamon_x
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HITMONS
.if P_FAMILY_ARCADIAMON_ROOKIE == TRUE
	cry Cry_Arcadiamon_rookie
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Lickilicky
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ARCADIAMON_ROOKIE
.if P_FAMILY_ARGOMON_ROOKIE == TRUE
	cry Cry_Argomon_rookie
	cry Cry_Armadilmon
.endif @ P_FAMILY_ARGOMON_ROOKIE
.if P_FAMILY_ARURAUMON == TRUE
	cry Cry_Aruraumon
	cry Cry_Bakomon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Rhyperior
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ARURAUMON
.if P_FAMILY_BEARMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Happiny
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Bearmon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Shoutmon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_BEARMON
.if P_FAMILY_BETAMON == TRUE
	cry Cry_Betamon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Tangrowth
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BETAMON
.if P_FAMILY_BETAMON_X == TRUE
	cry Cry_Betamon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Betamon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BETAMON_X
.if P_FAMILY_BIYOMON == TRUE
	cry Cry_Biyomon
	cry Cry_Blkagumon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Psychemon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_BIYOMON
.if P_FAMILY_BLKAGUMON_X == TRUE
	cry Cry_Blkagumon_x
	cry Cry_Blkgabumon
.endif @ P_FAMILY_BLKAGUMON_X
.if P_FAMILY_BLKGUILMON == TRUE
	cry Cry_Blkguilmon
	cry Cry_Bokomon
.endif @ P_FAMILY_BLKGUILMON
.if P_FAMILY_BULUCOMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_MimeJr
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Bulucomon
.if P_GALARIAN_FORMS == TRUE
	cry Cry_MrRime
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_BULUCOMON
.if P_FAMILY_BURGERMON == TRUE
	cry Cry_Burgermon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Monodramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MonodramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Kleavor
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_BURGERMON
.if P_FAMILY_SAMUAGUMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Sangomon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Samuagumon
.endif @ P_FAMILY_SAMUAGUMON
.if P_FAMILY_CANDLEMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Santaagumon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Candlemon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Electivire
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_CANDLEMON
.if P_FAMILY_CHIKURIMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Blktoyamon
.endif @ P_GEN_2_CROSS_EVOS
	cry Cry_Chikurimon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Magmortar
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_CHIKURIMON
.if P_FAMILY_TYUTYUMON == TRUE
	cry Cry_Tyutyumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_TyutyumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TYUTYUMON
.if P_FAMILY_CHUUMON == TRUE
	cry Cry_Chuumon
.endif @ P_FAMILY_CHUUMON
.if P_FAMILY_HAZYAGUMON == TRUE
	cry Cry_Hazyagumon
	cry Cry_Commdramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CommdramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HAZYAGUMON
.if P_FAMILY_CORONAMON == TRUE
	cry Cry_Coronamon
.endif @ P_FAMILY_CORONAMON
.if P_FAMILY_CRABMON == TRUE
	cry Cry_Crabmon
.endif @ P_FAMILY_CRABMON
.if P_FAMILY_CRABMON_X == TRUE
	cry Cry_Crabmon_x
	cry Cry_Cutemon
	cry Cry_Damemon
	cry Cry_Demidevmon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Kunemon
	cry Cry_Labramon
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Leafeon
	cry Cry_Glaceon
.endif @ P_GEN_4_CROSS_EVOS
.if P_GEN_6_CROSS_EVOS == TRUE
	cry Cry_Sylveon
.endif @ P_GEN_6_CROSS_EVOS
.endif @ P_FAMILY_CRABMON_X
.if P_FAMILY_DOKUNEMON == TRUE
	cry Cry_Dokunemon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry Cry_Renamon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_PorygonZ
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_DOKUNEMON
.if P_FAMILY_DONDOKOMON == TRUE
	cry Cry_Dondokomon
	cry Cry_Dorumon
.endif @ P_FAMILY_DONDOKOMON
.if P_FAMILY_DOTAGUMON == TRUE
	cry Cry_Dotagumon
	cry Cry_Dotfalcmon
.endif @ P_FAMILY_DOTAGUMON
.if P_FAMILY_DRACMON == TRUE
	cry Cry_Dracmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_DracmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DRACMON
.if P_FAMILY_DRACOMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Munchlax
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Dracomon
.endif @ P_FAMILY_DRACOMON
.if P_FAMILY_DRACOMON_X == TRUE
	cry Cry_Dracomon_x
.endif @ P_FAMILY_DRACOMON_X
.if P_FAMILY_EBIBURGMON == TRUE
	cry Cry_Ebiburgmon
.endif @ P_FAMILY_EBIBURGMON
.if P_FAMILY_EKAKIMON == TRUE
	cry Cry_Ekakimon
.endif @ P_FAMILY_EKAKIMON
.if P_FAMILY_ELECMON == TRUE
	cry Cry_Elecmon
	cry Cry_Elecmon_violet
	cry Cry_Espimon
.endif @ P_FAMILY_ELECMON
.if P_FAMILY_AGUMON_FAKE_EXPERT == TRUE
	cry Cry_Agumon_fake_expert
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Agumon_fake_expertMegaX
	cry Cry_Agumon_fake_expertMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AGUMON_FAKE_EXPERT
.if P_FAMILY_FALCOMON == TRUE
	cry Cry_Falcomon
.endif @ P_FAMILY_FALCOMON
.if P_FAMILY_FALCOMON_06 == TRUE
	cry Cry_Falcomon_06
	cry Cry_Fanbeemon
	cry Cry_Flamemon
.endif @ P_FAMILY_FALCOMON_06
.if P_FAMILY_FLORAMON == TRUE
	cry Cry_Floramon
	cry Cry_Gabumon
	cry Cry_Gabumon_x
.endif @ P_FAMILY_FLORAMON
.if P_FAMILY_GAMMAMON == TRUE
	cry Cry_Gammamon
	cry Cry_Gaomon
	cry Cry_Gaossmon
.endif @ P_FAMILY_GAMMAMON
.if P_FAMILY_GAZIMON == TRUE
	cry Cry_Gazimon
	cry Cry_Gazimon_x
.endif @ P_FAMILY_GAZIMON
.if P_FAMILY_GHOSTMON == TRUE
	cry Cry_Ghostmon
	cry Cry_Gizamon
.endif @ P_FAMILY_GHOSTMON
.if P_FAMILY_GIZUMON == TRUE
	cry Cry_Gizumon
	cry Cry_Goblimon
.endif @ P_FAMILY_GIZUMON
.if P_FAMILY_GOMAMON == TRUE
	cry Cry_Gomamon
	cry Cry_Gomamon_x
.endif @ P_FAMILY_GOMAMON
.if P_FAMILY_GOTSUMON_X == TRUE
	cry Cry_Gotsumon_x
	cry Cry_Guilmon
.endif @ P_FAMILY_GOTSUMON_X
.if P_FAMILY_HAGURUMON == TRUE
	cry Cry_Hagurumon
	cry Cry_Hagurumon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Togekiss
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_HAGURUMON
.if P_FAMILY_HAWKMON == TRUE
	cry Cry_Hawkmon
	cry Cry_Herissmon
.endif @ P_FAMILY_HAWKMON
.if P_FAMILY_HYOKOMON == TRUE
	cry Cry_Hyokomon
	cry Cry_Ignitemon
	cry Cry_Impmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_ImpmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HYOKOMON
.if P_FAMILY_JAZAMON == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry Cry_Biostegmon
.endif @ P_GEN_3_CROSS_EVOS
	cry Cry_Jazamon
	cry Cry_Jellymon
.endif @ P_FAMILY_JAZAMON
.if P_FAMILY_JUNKMON == TRUE
	cry Cry_Bonsly
	cry Cry_Junkmon
.endif @ P_FAMILY_JUNKMON
.if P_FAMILY_KERAMON == TRUE
	cry Cry_Keramon
	cry Cry_Keramon_x
	cry Cry_Kodokgumon
.endif @ P_FAMILY_KERAMON
.if P_FAMILY_KOKABUIMON == TRUE
	cry Cry_Kokabuimon
	cry Cry_Ambipom
.endif @ P_FAMILY_KOKABUIMON
.if P_FAMILY_KOKUWAMON == TRUE
	cry Cry_Kokuwamon
	cry Cry_Kokuwamon_x
.endif @ P_FAMILY_KOKUWAMON
.if P_FAMILY_KOTEMON == TRUE
	cry Cry_Kotemon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Yanmega
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_KOTEMON
.if P_FAMILY_KUDAMON == TRUE
	cry Cry_Kudamon
	cry Cry_Kudamon_06
.if P_PALDEAN_FORMS == TRUE
	cry Cry_Clodsire
.endif @ P_PALDEAN_FORMS
.endif @ P_FAMILY_KUDAMON
.if P_FAMILY_LALAMON == TRUE
	cry Cry_Lalamon
	cry Cry_Honchkrow
.endif @ P_FAMILY_LALAMON
.if P_FAMILY_LOOGAMON == TRUE
	cry Cry_Loogamon
	cry Cry_Mismagius
.endif @ P_FAMILY_LOOGAMON
.if P_FAMILY_LOPMON == TRUE
	cry Cry_Lopmon
.endif @ P_FAMILY_LOPMON
.if P_FAMILY_LOPMONX == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry Cry_Exveemon
.endif @ P_GEN_3_CROSS_EVOS
	cry Cry_Lopmonx
.endif @ P_FAMILY_LOPMONX
.if P_FAMILY_LUCEMON == TRUE
	cry Cry_Lucemon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Farigiraf
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_LUCEMON
.if P_FAMILY_LUDOMON == TRUE
	cry Cry_Ludomon
	cry Cry_Lunamon
.endif @ P_FAMILY_LUDOMON
.if P_FAMILY_LUXMON == TRUE
	cry Cry_Luxmon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Dudunsparce
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_LUXMON
.if P_FAMILY_METABEE == TRUE
	cry Cry_Metabee
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Gliscor
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_METABEE
.if P_FAMILY_MODBETAMON == TRUE
	cry Cry_Modbetamon
	cry Cry_Monitamon
.endif @ P_FAMILY_MODBETAMON
.if P_FAMILY_MONMON == TRUE
	cry Cry_Monmon
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Overqwil
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_MONMON
.if P_FAMILY_MORPHOMON == TRUE
	cry Cry_Morphomon
.endif @ P_FAMILY_MORPHOMON
.if P_FAMILY_MUCHOMON == TRUE
	cry Cry_Muchomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_MuchomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MUCHOMON
.if P_FAMILY_MUSHROOMON == TRUE
	cry Cry_Mushroomon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Weavile
.endif @ P_GEN_4_CROSS_EVOS
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Sneasler
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_MUSHROOMON
.if P_FAMILY_NEEMON == TRUE
	cry Cry_Neemon
	cry Cry_Otamamon
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Ursaluna
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_NEEMON
.if P_FAMILY_OTAMAMON_RED == TRUE
	cry Cry_Otamamon_red
	cry Cry_Otamamon_x
.endif @ P_FAMILY_OTAMAMON_RED
.if P_FAMILY_PALMON == TRUE
	cry Cry_Palmon
	cry Cry_Palmon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Mamoswine
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_PALMON
.if P_FAMILY_PATAMON == TRUE
	cry Cry_Patamon
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Cursola
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PATAMON
.if P_FAMILY_PAWNMON_BLACK == TRUE
	cry Cry_Pawnmon_black
	cry Cry_Pawnmon_white
.endif @ P_FAMILY_PAWNMON_BLACK
.if P_FAMILY_PENGUINMON == TRUE
	cry Cry_Penguinmon
.endif @ P_FAMILY_PENGUINMON
.if P_FAMILY_PETITMAMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Mantyke
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Petitmamon
.endif @ P_FAMILY_PETITMAMON
.if P_FAMILY_PHASCOMON == TRUE
	cry Cry_Phascomon
.endif @ P_FAMILY_PHASCOMON
.if P_FAMILY_PILLOMON == TRUE
	cry Cry_Pillomon
	cry Cry_Pomumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_PomumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PILLOMON
.if P_FAMILY_PULSEMON == TRUE
	cry Cry_Pulsemon
	cry Cry_Renamon
.endif @ P_FAMILY_PULSEMON
.if P_FAMILY_ROKUSHO == TRUE
	cry Cry_Rokusho
.if P_GEN_8_CROSS_EVOS == TRUE
	cry Cry_Wyrdeer
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_ROKUSHO
.if P_FAMILY_RYUDAMON == TRUE
	cry Cry_Ryudamon
.endif @ P_FAMILY_RYUDAMON
.if P_FAMILY_SHAMANMON == TRUE
	cry Cry_Shamanmon
.endif @ P_FAMILY_SHAMANMON
.if P_FAMILY_YUKIAGUMON == TRUE
	cry Cry_Yukiagumon
.endif @ P_FAMILY_YUKIAGUMON
.if P_FAMILY_YUKIAGUMON_06 == TRUE
	cry Cry_Yukiagumon_06
.endif @ P_FAMILY_YUKIAGUMON_06
.if P_FAMILY_ICEGOBIMON == TRUE
	cry Cry_Icegobimon
.endif @ P_FAMILY_ICEGOBIMON
.if P_FAMILY_SOLARMON == TRUE
	cry Cry_Solarmon
	cry Cry_Sounbrdmon
	cry Cry_Spadamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SpadamonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SOLARMON
.if P_FAMILY_SPARROWMON == TRUE
	cry Cry_Sparrowmon
.endif @ P_FAMILY_SPARROWMON
.if P_FAMILY_STARMON_2010 == TRUE
	cry Cry_Starmon_2010
.endif @ P_FAMILY_STARMON_2010
.if P_FAMILY_STRABIMON == TRUE
	cry Cry_Strabimon
.endif @ P_FAMILY_STRABIMON
.if P_FAMILY_SUNARZAMON == TRUE
	cry Cry_Sunarzamon
	cry Cry_Swimmon
	cry Cry_Syakomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_SyakomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SUNARZAMON
.if P_FAMILY_SYAKOMON_X == TRUE
	cry Cry_Syakomon_x
	cry Cry_Tapirmon
	cry Cry_Tentomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_TentomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SYAKOMON_X
.if P_FAMILY_TERRIERMON == TRUE
	cry Cry_Terriermon
	cry Cry_Terriermon_assistant
	cry Cry_Terriermon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Terriermon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TERRIERMON
.if P_FAMILY_TINKERMON == TRUE
	cry Cry_Tinkermon
	cry Cry_Tinpet
.endif @ P_FAMILY_TINKERMON
.if P_FAMILY_TOYAGUMON == TRUE
	cry Cry_Toyagumon
	cry Cry_Tsukaimon
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Obstagoon
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_TOYAGUMON
.if P_FAMILY_VEEMON == TRUE
	cry Cry_Veemon
	cry Cry_Vemmon
	cry Cry_Vorvomon
	cry Cry_Wormmon
	cry Cry_Zenimon
.endif @ P_FAMILY_VEEMON
.if P_FAMILY_ZUBAMON == TRUE
	cry Cry_Zubamon
	cry Cry_Aegiomon
	cry Cry_Agunimon
.endif @ P_FAMILY_ZUBAMON
.if P_FAMILY_AIRDRAMON == TRUE
	cry Cry_Airdramon
	cry Cry_Akatorimon
	cry Cry_Allomon
.endif @ P_FAMILY_AIRDRAMON
.if P_FAMILY_ALLOMON_X == TRUE
	cry Cry_Allomon_x
	cry Cry_Angelamon
.endif @ P_FAMILY_ALLOMON_X
.if P_FAMILY_ANGEMON == TRUE
	cry Cry_Angemon
	cry Cry_Ankylomon
.endif @ P_FAMILY_ANGEMON
.if P_FAMILY_APEMON == TRUE
	cry Cry_Apemon
	cry Cry_Aquilamon
	cry Cry_Arcadiamon_champion
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Arcadiamon_championMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Gallade
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GalladeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_APEMON
.if P_FAMILY_ARCHELOMON == TRUE
	cry Cry_Archelomon
	cry Cry_Argomon_champion
.endif @ P_FAMILY_ARCHELOMON
.if P_FAMILY_ARESDRAMON == TRUE
	cry Cry_Aresdramon
	cry Cry_Atamademon
.endif @ P_FAMILY_ARESDRAMON
.if P_FAMILY_AURUMON == TRUE
	cry Cry_Aurumon
	cry Cry_Axemon
	cry Cry_Baboonmon
.endif @ P_FAMILY_AURUMON
.if P_FAMILY_BAKEMON == TRUE
	cry Cry_Bakemon
	cry Cry_Balistamon
	cry Cry_Baluchimon
.endif @ P_FAMILY_BAKEMON
.if P_FAMILY_BAOHUCKMON == TRUE
	cry Cry_Baohuckmon
	cry Cry_Baromon
	cry Cry_Trailmon_battle_armament
.endif @ P_FAMILY_BAOHUCKMON
.if P_FAMILY_BETGAMAMON == TRUE
	cry Cry_Betgamamon
	cry Cry_Bioquetmon
.endif @ P_FAMILY_BETGAMAMON
.if P_FAMILY_BIOTHUNMON == TRUE
	cry Cry_Biothunmon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Probopass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BIOTHUNMON
.if P_FAMILY_BIRDRAMON == TRUE
	cry Cry_Birdramon
	cry Cry_Blgaogamon
.endif @ P_FAMILY_BIRDRAMON
.if P_FAMILY_BLGARGOMON == TRUE
	cry Cry_Blgargomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlgargomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLGARGOMON
.if P_FAMILY_BLGARURMON == TRUE
	cry Cry_Blgarurmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlgarurmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLGARURMON
.if P_FAMILY_BLKGATOMON == TRUE
	cry Cry_Blkgatomon
	cry Cry_Blkgatomon_uver
	cry Cry_Blgrowlmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlgrowlmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLKGATOMON
.if P_FAMILY_SAWKUWAMON == TRUE
	cry Cry_Sawkuwamon
	cry Cry_Blimpmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BlimpmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SAWKUWAMON
.if P_FAMILY_BOARMON == TRUE
	cry Cry_Boarmon
	cry Cry_Bomnanimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_BomnanimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BOARMON
.if P_FAMILY_BOOGIEMON == TRUE
	cry Cry_Boogiemon
.endif @ P_FAMILY_BOOGIEMON
.if P_FAMILY_BUCCHIEMON_RED == TRUE
	cry Cry_Bucchiemon_red
.endif @ P_FAMILY_BUCCHIEMON_RED
.if P_FAMILY_BUCCHIEMON_GREEN_BULKMON == TRUE
	cry Cry_Bucchiemon_green
	cry Cry_Bulkmon
.endif @ P_FAMILY_BUCCHIEMON_GREEN_BULKMON
.if P_FAMILY_BULLMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Budew
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Bullmon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Roserade
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BULLMON
.if P_FAMILY_BURAIMON == TRUE
	cry Cry_Buraimon
	cry Cry_Burgermon_champion
.endif @ P_FAMILY_BURAIMON
.if P_FAMILY_CHOUMON == TRUE
	cry Cry_Choumon
	cry Cry_Centarumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CentarumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHOUMON
.if P_FAMILY_CHAMBLEMON == TRUE
	cry Cry_Chamblemon
	cry Cry_Chamelemon
.endif @ P_FAMILY_CHAMBLEMON
.if P_FAMILY_CHRYSALMON == TRUE
	cry Cry_Chrysalmon
	cry Cry_Citramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_CitramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHRYSALMON
.if P_FAMILY_CLOCKMON == TRUE
	cry Cry_Clockmon
.endif @ P_FAMILY_CLOCKMON
.if P_FAMILY_CLOCKMON_FUSION == TRUE
	cry Cry_Clockmon_fusion
	cry Cry_Coelamon
.endif @ P_FAMILY_CLOCKMON_FUSION
.if P_FAMILY_COREDRAMON_BLUE == TRUE
	cry Cry_Coredramon_blue
.endif @ P_FAMILY_COREDRAMON_BLUE
.if P_FAMILY_COREDRAMON_GREEN == TRUE
	cry Cry_Coredramon_green
	cry Cry_Cyclonemon
	cry Cry_Damemon_fusion
.endif @ P_FAMILY_COREDRAMON_GREEN
.if P_FAMILY_DARCMON == TRUE
	cry Cry_Darcmon
	cry Cry_Trailmon_dark
.endif @ P_FAMILY_DARCMON
.if P_FAMILY_DARLIZAMON == TRUE
	cry Cry_Darlizamon
	cry Cry_Darmailmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_DarmailmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DARLIZAMON
.if P_FAMILY_DARKTYRMON == TRUE
	cry Cry_Darktyrmon
.endif @ P_FAMILY_DARKTYRMON
.if P_FAMILY_DARKTYRMON_X == TRUE
	cry Cry_Darktyrmon_x
.endif @ P_FAMILY_DARKTYRMON_X
.if P_FAMILY_DECKDRAMON == TRUE
	cry Cry_Deckdramon
.endif @ P_FAMILY_DECKDRAMON
.if P_FAMILY_DELTAMON == TRUE
	cry Cry_Deltamon
.endif @ P_FAMILY_DELTAMON
.if P_FAMILY_DEPTHMON == TRUE
	cry Cry_Depthmon
	cry Cry_Deputymon
.endif @ P_FAMILY_DEPTHMON
.if P_FAMILY_DEVIDRAMON == TRUE
	cry Cry_Devidramon
	cry Cry_Devimon
.endif @ P_FAMILY_DEVIDRAMON
.if P_FAMILY_DEXDORUMON == TRUE
	cry Cry_Dexdorumon
	cry Cry_Diatrymon
.endif @ P_FAMILY_DEXDORUMON
.if P_FAMILY_DIGMON == TRUE
	cry Cry_Digmon
	cry Cry_Dinohyumon
.endif @ P_FAMILY_DIGMON
.if P_FAMILY_DOBERMON == TRUE
	cry Cry_Dobermon
	cry Cry_Dobermon_x
.endif @ P_FAMILY_DOBERMON
.if P_FAMILY_DOGGYMON == TRUE
	cry Cry_Doggymon
	cry Cry_Dokugumon
.endif @ P_FAMILY_DOGGYMON
.if P_FAMILY_DOLPHMON == TRUE
	cry Cry_Dolphmon
.endif @ P_FAMILY_DOLPHMON
.if P_FAMILY_DONSHOUMON == TRUE
	cry Cry_Donshoumon
.endif @ P_FAMILY_DONSHOUMON
.if P_FAMILY_DORUGAMON == TRUE
	cry Cry_Dorugamon
	cry Cry_Dorulumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_DorulumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DORUGAMON
.if P_FAMILY_DRIMOGEMON == TRUE
	cry Cry_Drimogemon
	cry Cry_Ebidramon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Dusknoir
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_DRIMOGEMON
.if P_FAMILY_ELEPHANMON == TRUE
	cry Cry_Elephanmon
.endif @ P_FAMILY_ELEPHANMON
.if P_FAMILY_EOSMON_CHAMPION == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Chingling
.endif @ P_GEN_4_CROSS_EVOS
	cry Cry_Eosmon_champion
.endif @ P_FAMILY_EOSMON_CHAMPION
.if P_FAMILY_EXERMON == TRUE
	cry Cry_Exermon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_ExermonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_EXERMON
.if P_FAMILY_EXVEEMON_VIRUS == TRUE
	cry Cry_Exveemon_virus
	cry Cry_Eyesmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_EyesmonMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry Cry_Froslass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_EXVEEMON_VIRUS
.if P_FAMILY_EYESMON_SCATTERMODE == TRUE
	cry Cry_Eyesmon_scattermode
	cry Cry_Fangmon
	cry Cry_Filmon
.endif @ P_FAMILY_EYESMON_SCATTERMODE
.if P_FAMILY_FIRAMON == TRUE
	cry Cry_Firamon
	cry Cry_Fladramon
	cry Cry_Flawizamon
.endif @ P_FAMILY_FIRAMON
.if P_FAMILY_FLARIZAMON == TRUE
	cry Cry_Flarizamon
.endif @ P_FAMILY_FLARIZAMON
.if P_FAMILY_FLYBEEMON == TRUE
	cry Cry_Flybeemon
.endif @ P_FAMILY_FLYBEEMON
.if P_FAMILY_FLYMON == TRUE
	cry Cry_Flymon
	cry Cry_Frigimon
	cry Cry_Frogmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_FrogmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FLYMON
.if P_FAMILY_FUGAMON == TRUE
	cry Cry_Fugamon
	cry Cry_Ganemon
	cry Cry_Gaogamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GaogamonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FUGAMON
.if P_FAMILY_GARGOMON == TRUE
	cry Cry_Gargomon
.endif @ P_FAMILY_GARGOMON
.if P_FAMILY_GARGOYLMON == TRUE
	cry Cry_Gargoylmon
.endif @ P_FAMILY_GARGOYLMON
.if P_FAMILY_GARURUMON == TRUE
	cry Cry_Garurumon
.endif @ P_FAMILY_GARURUMON
.if P_FAMILY_GARURUMON_X == TRUE
	cry Cry_Garurumon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Garurumon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GARURUMON_X
.if P_FAMILY_GATOMON == TRUE
	cry Cry_Gatomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GatomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GATOMON
.if P_FAMILY_GATOMON_X == TRUE
	cry Cry_Gatomon_x
.if P_PRIMAL_REVERSIONS == TRUE
	cry Cry_Gatomon_xPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GATOMON_X
.if P_FAMILY_GEKOMON == TRUE
	cry Cry_Gekomon
.if P_PRIMAL_REVERSIONS == TRUE
	cry Cry_GekomonPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GEKOMON
.if P_FAMILY_GEOGREYMON == TRUE
	cry Cry_Geogreymon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GeogreymonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GEOGREYMON
.if P_FAMILY_GEREMON == TRUE
	cry Cry_Geremon
.endif @ P_FAMILY_GEREMON
.if P_FAMILY_GESOMON == TRUE
	cry Cry_Gesomon
.endif @ P_FAMILY_GESOMON
.if P_FAMILY_DEATHMON_CMON_DIGIMON == TRUE
	cry Cry_Deathmon_cmon_digimon
	cry Cry_Greymon
	cry Cry_Kabuterimon
.endif @ P_FAMILY_DEATHMON_CMON_DIGIMON
.if P_FAMILY_MERAMON == TRUE
	cry Cry_Meramon
	cry Cry_Numemon
	cry Cry_Seadramon
.endif @ P_FAMILY_MERAMON
.if P_FAMILY_TYRANNOMON == TRUE
	cry Cry_Tyrannomon
	cry Cry_Vegiemon
	cry Cry_Whamon
.endif @ P_FAMILY_TYRANNOMON
.if P_FAMILY_KOKATORIMON == TRUE
	cry Cry_Kokatorimon
	cry Cry_Vilemon
	cry Cry_Roachmon
.endif @ P_FAMILY_KOKATORIMON
.if P_FAMILY_GORILLAMON == TRUE
	cry Cry_Gorillamon
	cry Cry_Ikkakumon
.endif @ P_FAMILY_GORILLAMON
.if P_FAMILY_KUWAGAMON == TRUE
	cry Cry_Kuwagamon
	cry Cry_Leomon
.endif @ P_FAMILY_KUWAGAMON
.if P_FAMILY_SHADRAMON == TRUE
	cry Cry_Shadramon
	cry Cry_Raidramon
	cry Cry_Togemon
.endif @ P_FAMILY_SHADRAMON
.if P_FAMILY_GROWLMON == TRUE
	cry Cry_Growlmon
	cry Cry_Stingmon
.endif @ P_FAMILY_GROWLMON
.if P_FAMILY_TUSKMON == TRUE
	cry Cry_Tuskmon
	cry Cry_Monochromon
.endif @ P_FAMILY_TUSKMON
.if P_FAMILY_MEKANORIMON == TRUE
	cry Cry_Burmy
	cry Cry_Wormadam
	cry Cry_Mothim
.endif @ P_FAMILY_MEKANORIMON
.if P_FAMILY_TESLAJELLYMON == TRUE
	cry Cry_Teslajellymon
	cry Cry_Raremon
.endif @ P_FAMILY_TESLAJELLYMON
.if P_FAMILY_SUKAMON == TRUE
	cry Cry_Sukamon
.endif @ P_FAMILY_SUKAMON
.if P_FAMILY_SHELLMON == TRUE
	cry Cry_Shellmon
	cry Cry_Starmon
.endif @ P_FAMILY_SHELLMON
.if P_FAMILY_TORTOMON == TRUE
	cry Cry_Tortomon
	cry Cry_Cherrim
.endif @ P_FAMILY_TORTOMON
.if P_FAMILY_SHELLOS == TRUE
	cry Cry_Shellos
	cry Cry_Gastrodon
.endif @ P_FAMILY_SHELLOS
.if P_FAMILY_GUARDROMON == TRUE
	cry Cry_Guardromon
	cry Cry_Honeybeemon
.endif @ P_FAMILY_GUARDROMON
.if P_FAMILY_HYOGAMON == TRUE
	cry Cry_Hyogamon
	cry Cry_Icedevimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_IcedevimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HYOGAMON
.if P_FAMILY_ICEMON == TRUE
	cry Cry_Icemon
	cry Cry_Ninjamon
.endif @ P_FAMILY_ICEMON
.if P_FAMILY_JUNGLEMOJYAMON == TRUE
	cry Cry_Junglemojyamon
	cry Cry_Shellnumemon
.endif @ P_FAMILY_JUNGLEMOJYAMON
.if P_FAMILY_BRONZOR == TRUE
	cry Cry_Bronzor
	cry Cry_Bronzong
.endif @ P_FAMILY_BRONZOR
.if P_FAMILY_CHATOT == TRUE
	cry Cry_Chatot
.endif @ P_FAMILY_CHATOT
.if P_FAMILY_SPIRITOMB == TRUE
	cry Cry_Spiritomb
.endif @ P_FAMILY_SPIRITOMB
.if P_FAMILY_GIBLE == TRUE
	cry Cry_Gible
	cry Cry_Gabite
	cry Cry_Garchomp
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_GarchompMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GIBLE
.if P_FAMILY_RIOLU == TRUE
	cry Cry_Riolu
	cry Cry_Lucario
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_LucarioMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RIOLU
.if P_FAMILY_HIPPOPOTAS == TRUE
	cry Cry_Hippopotas
	cry Cry_Hippowdon
.endif @ P_FAMILY_HIPPOPOTAS
.if P_FAMILY_SKORUPI == TRUE
	cry Cry_Skorupi
	cry Cry_Drapion
.endif @ P_FAMILY_SKORUPI
.if P_FAMILY_CROAGUNK == TRUE
	cry Cry_Croagunk
	cry Cry_Toxicroak
.endif @ P_FAMILY_CROAGUNK
.if P_FAMILY_CARNIVINE == TRUE
	cry Cry_Carnivine
.endif @ P_FAMILY_CARNIVINE
.if P_FAMILY_FINNEON == TRUE
	cry Cry_Finneon
	cry Cry_Lumineon
.endif @ P_FAMILY_FINNEON
.if P_FAMILY_SNOVER == TRUE
	cry Cry_Snover
	cry Cry_Abomasnow
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_AbomasnowMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SNOVER
.if P_FAMILY_ROTOM == TRUE
	cry Cry_Rotom
.endif @ P_FAMILY_ROTOM
.if P_FAMILY_UXIE == TRUE
	cry Cry_Uxie
.endif @ P_FAMILY_UXIE
.if P_FAMILY_MESPRIT == TRUE
	cry Cry_Mesprit
.endif @ P_FAMILY_MESPRIT
.if P_FAMILY_AZELF == TRUE
	cry Cry_Azelf
.endif @ P_FAMILY_AZELF
.if P_FAMILY_DIALGA == TRUE
	cry Cry_Dialga
.endif @ P_FAMILY_DIALGA
.if P_FAMILY_PALKIA == TRUE
	cry Cry_Palkia
.endif @ P_FAMILY_PALKIA
.if P_FAMILY_HEATRAN == TRUE
	cry Cry_Heatran
.endif @ P_FAMILY_HEATRAN
.if P_FAMILY_REGIGIGAS == TRUE
	cry Cry_Regigigas
.endif @ P_FAMILY_REGIGIGAS
.if P_FAMILY_GIRATINA == TRUE
	cry Cry_Giratina
.endif @ P_FAMILY_GIRATINA
.if P_FAMILY_CRESSELIA == TRUE
	cry Cry_Cresselia
.endif @ P_FAMILY_CRESSELIA
.if P_FAMILY_MANAPHY == TRUE
	cry Cry_Phione
	cry Cry_Manaphy
.endif @ P_FAMILY_MANAPHY
.if P_FAMILY_DARKRAI == TRUE
	cry Cry_Darkrai
.endif @ P_FAMILY_DARKRAI
.if P_FAMILY_SHAYMIN == TRUE
	cry Cry_ShayminLand
	cry Cry_ShayminSky
.endif @ P_FAMILY_SHAYMIN
.if P_FAMILY_ARCEUS == TRUE
	cry Cry_Arceus
.endif @ P_FAMILY_ARCEUS
.if P_FAMILY_D_AIRDRAMON == TRUE
	cry Cry_D_airdramon
.endif @ P_FAMILY_D_AIRDRAMON
.if P_FAMILY_D_DEVIMON == TRUE
	cry Cry_D_devimon
	cry Cry_D_meramon_cmon_digimon
	cry Cry_D_metalgreymon
.endif @ P_FAMILY_D_DEVIMON
.if P_FAMILY_D_TYRANNOMON == TRUE
	cry Cry_D_tyrannomon
	cry Cry_Mamemon
	cry Cry_Metalgreymon_virus
.endif @ P_FAMILY_D_TYRANNOMON
.if P_FAMILY_METALMAMEMON == TRUE
	cry Cry_Metalmamemon
	cry Cry_Monzaemon
	cry Cry_Skullgreymon
.endif @ P_FAMILY_METALMAMEMON
.if P_FAMILY_ANDROMON == TRUE
	cry Cry_Andromon
	cry Cry_Angewomon
.endif @ P_FAMILY_ANDROMON
.if P_FAMILY_SCORPIOMON == TRUE
	cry Cry_Scorpiomon
	cry Cry_Megakabuterimon_blue
	cry Cry_Dragomon
.endif @ P_FAMILY_SCORPIOMON
.if P_FAMILY_DIGITAMAMON == TRUE
	cry Cry_Digitamamon
	cry Cry_Etemon
.endif @ P_FAMILY_DIGITAMAMON
.if P_FAMILY_EXTYRANNOMON == TRUE
	cry Cry_Extyrannomon
	cry Cry_Giromon
.endif @ P_FAMILY_EXTYRANNOMON
.if P_FAMILY_MAGNAANGEMON == TRUE
	cry Cry_Magnaangemon
	cry Cry_Magnaangemon_priestmode
.endif @ P_FAMILY_MAGNAANGEMON
.if P_FAMILY_JAGAMON == TRUE
	cry Cry_Jagamon
	cry Cry_Ladydevimon
.endif @ P_FAMILY_JAGAMON
.if P_FAMILY_MAMMOTHMON == TRUE
	cry Cry_Mammothmon
	cry Cry_Metalgreymon
.endif @ P_FAMILY_MAMMOTHMON
.if P_FAMILY_WEREGARURUMON == TRUE
	cry Cry_Weregarurumon
	cry Cry_Dinobeemon
	cry Cry_Paildramon
.endif @ P_FAMILY_WEREGARURUMON
.if P_FAMILY_WARGROWLMON == TRUE
	cry Cry_Wargrowlmon
	cry Cry_Lillymon
.endif @ P_FAMILY_WARGROWLMON
.if P_FAMILY_MASTERTYRANNOMON == TRUE
	cry Cry_Mastertyrannomon
	cry Cry_Triceramon
	cry Cry_Arukenimon
.endif @ P_FAMILY_MASTERTYRANNOMON
.if P_FAMILY_MARINEDEVIMON == TRUE
	cry Cry_Marinedevimon
	cry Cry_Megaseadramon
.endif @ P_FAMILY_MARINEDEVIMON
.if P_FAMILY_MEGADRAMON == TRUE
	cry Cry_Megadramon
	cry Cry_Metaltyrannomon
.endif @ P_FAMILY_MEGADRAMON
.if P_FAMILY_DATAMON == TRUE
	cry Cry_Datamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_Okuwamon
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DATAMON
.if P_FAMILY_PUMPKINMON == TRUE
	cry Cry_Pumpkinmon
	cry Cry_Piximon
	cry Cry_Shogungekomon
.endif @ P_FAMILY_PUMPKINMON
.if P_FAMILY_ZUDOMON == TRUE
	cry Cry_Zudomon
	cry Cry_Aeroveedramon
	cry Cry_Asuramon
.endif @ P_FAMILY_ZUDOMON
.if P_FAMILY_MEGAKABUTERIMON_RED == TRUE
	cry Cry_Megakabuterimon_red
.endif @ P_FAMILY_MEGAKABUTERIMON_RED
.if P_FAMILY_BIGMAMEMON == TRUE
	cry Cry_Bigmamemon
.endif @ P_FAMILY_BIGMAMEMON
.if P_FAMILY_TINMON == TRUE
	cry Cry_Tinmon
	cry Cry_Blossomon
	cry Cry_Bluemeramon
.endif @ P_FAMILY_TINMON
.if P_FAMILY_BRACHIOMON == TRUE
	cry Cry_Brachiomon
	cry Cry_Kimeramon
	cry Cry_Cyberdramon
.endif @ P_FAMILY_BRACHIOMON
.if P_FAMILY_SKULLMERAMON == TRUE
	cry Cry_Skullmeramon
	cry Cry_Deramon
.endif @ P_FAMILY_SKULLMERAMON
.if P_FAMILY_PHANTOMON == TRUE
	cry Cry_Phantomon
	cry Cry_Garudamon
.endif @ P_FAMILY_PHANTOMON
.if P_FAMILY_GIGADRAMON == TRUE
	cry Cry_Gigadramon
.if P_HISUIAN_FORMS == TRUE
	cry Cry_Basculegion
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_GIGADRAMON
.if P_FAMILY_KINGSUKAMON == TRUE
	cry Cry_Kingsukamon
	cry Cry_Divermon
	cry Cry_Meteormon
.endif @ P_FAMILY_KINGSUKAMON
.if P_FAMILY_CHERRYMON == TRUE
	cry Cry_Cherrymon
	cry Cry_Darmanitan
.endif @ P_FAMILY_CHERRYMON
.if P_FAMILY_MARACTUS == TRUE
	cry Cry_Maractus
.endif @ P_FAMILY_MARACTUS
.if P_FAMILY_DWEBBLE == TRUE
	cry Cry_Dwebble
	cry Cry_Crustle
.endif @ P_FAMILY_DWEBBLE
.if P_FAMILY_SCRAGGY == TRUE
	cry Cry_Scraggy
	cry Cry_Scrafty
.endif @ P_FAMILY_SCRAGGY
.if P_FAMILY_SIGILYPH == TRUE
	cry Cry_Sigilyph
.endif @ P_FAMILY_SIGILYPH
.if P_FAMILY_YAMASK == TRUE
	cry Cry_Yamask
	cry Cry_Cofagrigus
.if P_GALARIAN_FORMS == TRUE
	cry Cry_Runerigus
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_YAMASK
.if P_FAMILY_TIRTOUGA == TRUE
	cry Cry_Tirtouga
	cry Cry_Carracosta
.endif @ P_FAMILY_TIRTOUGA
.if P_FAMILY_ARCHEN == TRUE
	cry Cry_Archen
	cry Cry_Archeops
.endif @ P_FAMILY_ARCHEN
.if P_FAMILY_TRUBBISH == TRUE
	cry Cry_Trubbish
	cry Cry_Garbodor
.endif @ P_FAMILY_TRUBBISH
.if P_FAMILY_ZORUA == TRUE
	cry Cry_Zorua
	cry Cry_Zoroark
.endif @ P_FAMILY_ZORUA
.if P_FAMILY_MINCCINO == TRUE
	cry Cry_Minccino
	cry Cry_Cinccino
.endif @ P_FAMILY_MINCCINO
.if P_FAMILY_GOTHITA == TRUE
	cry Cry_Gothita
	cry Cry_Gothorita
	cry Cry_Gothitelle
.endif @ P_FAMILY_GOTHITA
.if P_FAMILY_SOLOSIS == TRUE
	cry Cry_Solosis
	cry Cry_Duosion
	cry Cry_Reuniclus
.endif @ P_FAMILY_SOLOSIS
.if P_FAMILY_DUCKLETT == TRUE
	cry Cry_Ducklett
	cry Cry_Swanna
.endif @ P_FAMILY_DUCKLETT
.if P_FAMILY_VANILLITE == TRUE
	cry Cry_Vanillite
	cry Cry_Vanillish
	cry Cry_Vanilluxe
.endif @ P_FAMILY_VANILLITE
.if P_FAMILY_DEERLING == TRUE
	cry Cry_Deerling
	cry Cry_Sawsbuck
.endif @ P_FAMILY_DEERLING
.if P_FAMILY_EMOLGA == TRUE
	cry Cry_Emolga
.endif @ P_FAMILY_EMOLGA
.if P_FAMILY_KARRABLAST == TRUE
	cry Cry_Karrablast
	cry Cry_Escavalier
.endif @ P_FAMILY_KARRABLAST
.if P_FAMILY_FOONGUS == TRUE
	cry Cry_Foongus
	cry Cry_Amoonguss
.endif @ P_FAMILY_FOONGUS
.if P_FAMILY_FRILLISH == TRUE
	cry Cry_Frillish
	cry Cry_Jellicent
.endif @ P_FAMILY_FRILLISH
.if P_FAMILY_ALOMOMOLA == TRUE
	cry Cry_Alomomola
.endif @ P_FAMILY_ALOMOMOLA
.if P_FAMILY_JOLTIK == TRUE
	cry Cry_Joltik
	cry Cry_Galvantula
.endif @ P_FAMILY_JOLTIK
.if P_FAMILY_FERROSEED == TRUE
	cry Cry_Ferroseed
	cry Cry_Ferrothorn
.endif @ P_FAMILY_FERROSEED
.if P_FAMILY_KLINK == TRUE
	cry Cry_Klink
	cry Cry_Klang
	cry Cry_Klinklang
.endif @ P_FAMILY_KLINK
.if P_FAMILY_TYNAMO == TRUE
	cry Cry_Tynamo
	cry Cry_Eelektrik
	cry Cry_Eelektross
.endif @ P_FAMILY_TYNAMO
.if P_FAMILY_ELGYEM == TRUE
	cry Cry_Elgyem
	cry Cry_Beheeyem
.endif @ P_FAMILY_ELGYEM
.if P_FAMILY_LITWICK == TRUE
	cry Cry_Litwick
	cry Cry_Lampent
	cry Cry_Chandelure
.endif @ P_FAMILY_LITWICK
.if P_FAMILY_AXEW == TRUE
	cry Cry_Axew
	cry Cry_Fraxure
	cry Cry_Haxorus
.endif @ P_FAMILY_AXEW
.if P_FAMILY_CUBCHOO == TRUE
	cry Cry_Cubchoo
	cry Cry_Beartic
.endif @ P_FAMILY_CUBCHOO
.if P_FAMILY_CRYOGONAL == TRUE
	cry Cry_Cryogonal
.endif @ P_FAMILY_CRYOGONAL
.if P_FAMILY_SHELMET == TRUE
	cry Cry_Shelmet
	cry Cry_Accelgor
.endif @ P_FAMILY_SHELMET
.if P_FAMILY_STUNFISK == TRUE
	cry Cry_Stunfisk
.endif @ P_FAMILY_STUNFISK
.if P_FAMILY_MIENFOO == TRUE
	cry Cry_Mienfoo
	cry Cry_Mienshao
.endif @ P_FAMILY_MIENFOO
.if P_FAMILY_DRUDDIGON == TRUE
	cry Cry_Druddigon
.endif @ P_FAMILY_DRUDDIGON
.if P_FAMILY_GOLETT == TRUE
	cry Cry_Golett
	cry Cry_Golurk
.endif @ P_FAMILY_GOLETT
.if P_FAMILY_PAWNIARD == TRUE
	cry Cry_Pawniard
	cry Cry_Bisharp
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Kingambit
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_PAWNIARD
.if P_FAMILY_BOUFFALANT == TRUE
	cry Cry_Bouffalant
.endif @ P_FAMILY_BOUFFALANT
.if P_FAMILY_RUFFLET == TRUE
	cry Cry_Rufflet
	cry Cry_Braviary
.endif @ P_FAMILY_RUFFLET
.if P_FAMILY_VULLABY == TRUE
	cry Cry_Vullaby
	cry Cry_Mandibuzz
.endif @ P_FAMILY_VULLABY
.if P_FAMILY_HEATMOR == TRUE
	cry Cry_Heatmor
.endif @ P_FAMILY_HEATMOR
.if P_FAMILY_DURANT == TRUE
	cry Cry_Durant
.endif @ P_FAMILY_DURANT
.if P_FAMILY_DEINO == TRUE
	cry Cry_Deino
	cry Cry_Zweilous
	cry Cry_Hydreigon
.endif @ P_FAMILY_DEINO
.if P_FAMILY_LARVESTA == TRUE
	cry Cry_Larvesta
	cry Cry_Volcarona
.endif @ P_FAMILY_LARVESTA
.if P_FAMILY_COBALION == TRUE
	cry Cry_Cobalion
.endif @ P_FAMILY_COBALION
.if P_FAMILY_TERRAKION == TRUE
	cry Cry_Terrakion
.endif @ P_FAMILY_TERRAKION
.if P_FAMILY_VIRIZION == TRUE
	cry Cry_Virizion
.endif @ P_FAMILY_VIRIZION
.if P_FAMILY_TORNADUS == TRUE
	cry Cry_TornadusIncarnate
	cry Cry_TornadusTherian
.endif @ P_FAMILY_TORNADUS
.if P_FAMILY_THUNDURUS == TRUE
	cry Cry_ThundurusIncarnate
	cry Cry_ThundurusTherian
.endif @ P_FAMILY_THUNDURUS
.if P_FAMILY_RESHIRAM == TRUE
	cry Cry_Reshiram
.endif @ P_FAMILY_RESHIRAM
.if P_FAMILY_ZEKROM == TRUE
	cry Cry_Zekrom
.endif @ P_FAMILY_ZEKROM
.if P_FAMILY_LANDORUS == TRUE
	cry Cry_LandorusIncarnate
	cry Cry_LandorusTherian
.endif @ P_FAMILY_LANDORUS
.if P_FAMILY_KYUREM == TRUE
	cry Cry_Kyurem
.if P_FUSION_FORMS == TRUE
	cry Cry_KyuremWhite
	cry Cry_KyuremBlack
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_KYUREM
.if P_FAMILY_KELDEO == TRUE
	cry Cry_Keldeo
.endif @ P_FAMILY_KELDEO
.if P_FAMILY_MELOETTA == TRUE
	cry Cry_Meloetta
.endif @ P_FAMILY_MELOETTA
.if P_FAMILY_GENESECT == TRUE
	cry Cry_Genesect
.endif @ P_FAMILY_GENESECT
.if P_FAMILY_HERCULESKABUTERIMON == TRUE
	cry Cry_Herculeskabuterimon
	cry Cry_Magnadramon
	cry Cry_Magnamon
.endif @ P_FAMILY_HERCULESKABUTERIMON
.if P_FAMILY_WARGREYMON == TRUE
	cry Cry_Wargreymon
	cry Cry_Metalgarurumon
	cry Cry_Omnimon
.endif @ P_FAMILY_WARGREYMON
.if P_FAMILY_CRESGARURUMON == TRUE
	cry Cry_Cresgarurumon
	cry Cry_Blitzgreymon
	cry Cry_Biosupinomon
.endif @ P_FAMILY_CRESGARURUMON
.if P_FAMILY_ROSEMON == TRUE
	cry Cry_Rosemon
	cry Cry_Dinorexmon
.endif @ P_FAMILY_ROSEMON
.if P_FAMILY_DINOMON == TRUE
	cry Cry_Dinomon
	cry Cry_Marineangemon
	cry Cry_Metaletemon
.endif @ P_FAMILY_DINOMON
.if P_FAMILY_METALSEADRAMON == TRUE
	cry Cry_Metalseadramon
	cry Cry_Pukumon
	cry Cry_Saberleomon
.endif @ P_FAMILY_METALSEADRAMON
.if P_FAMILY_APOCALYMON == TRUE
	cry Cry_Apocalymon
	cry Cry_Babamon
.endif @ P_FAMILY_APOCALYMON
.if P_FAMILY_FLABEBE == TRUE
	cry Cry_Flabebe
	cry Cry_Floette
	cry Cry_FloetteEternal
	cry Cry_Florges
.endif @ P_FAMILY_FLABEBE
.if P_FAMILY_BOLTMON == TRUE
	cry Cry_Boltmon
	cry Cry_Creepymon
.endif @ P_FAMILY_BOLTMON
.if P_FAMILY_DEVITAMAMON == TRUE
	cry Cry_Devitamamon
	cry Cry_Diaboromon
.endif @ P_FAMILY_DEVITAMAMON
.if P_FAMILY_FURFROU == TRUE
	cry Cry_Furfrou
.endif @ P_FAMILY_FURFROU
.if P_FAMILY_GOLDRAMON == TRUE
	cry Cry_Goldramon
.endif @ P_FAMILY_GOLDRAMON
.if P_FAMILY_PHOENIXMON == TRUE
	cry Cry_Phoenixmon
	cry Cry_Jijimon
	cry Cry_Aegislash
.endif @ P_FAMILY_PHOENIXMON
.if P_FAMILY_SPRITZEE == TRUE
	cry Cry_Spritzee
	cry Cry_Aromatisse
.endif @ P_FAMILY_SPRITZEE
.if P_FAMILY_SWIRLIX == TRUE
	cry Cry_Swirlix
	cry Cry_Slurpuff
.endif @ P_FAMILY_SWIRLIX
.if P_FAMILY_INKAY == TRUE
	cry Cry_Inkay
	cry Cry_Malamar
.endif @ P_FAMILY_INKAY
.if P_FAMILY_BINACLE == TRUE
	cry Cry_Binacle
	cry Cry_Barbaracle
.endif @ P_FAMILY_BINACLE
.if P_FAMILY_SKRELP == TRUE
	cry Cry_Skrelp
	cry Cry_Dragalge
.endif @ P_FAMILY_SKRELP
.if P_FAMILY_CLAUNCHER == TRUE
	cry Cry_Clauncher
	cry Cry_Clawitzer
.endif @ P_FAMILY_CLAUNCHER
.if P_FAMILY_HELIOPTILE == TRUE
	cry Cry_Helioptile
	cry Cry_Heliolisk
.endif @ P_FAMILY_HELIOPTILE
.if P_FAMILY_TYRUNT == TRUE
	cry Cry_Tyrunt
	cry Cry_Tyrantrum
.endif @ P_FAMILY_TYRUNT
.if P_FAMILY_AMAURA == TRUE
	cry Cry_Amaura
	cry Cry_Aurorus
.endif @ P_FAMILY_AMAURA
.if P_FAMILY_HAWLUCHA == TRUE
	cry Cry_Hawlucha
.endif @ P_FAMILY_HAWLUCHA
.if P_FAMILY_DEDENNE == TRUE
	cry Cry_Dedenne
.endif @ P_FAMILY_DEDENNE
.if P_FAMILY_CARBINK == TRUE
	cry Cry_Carbink
.endif @ P_FAMILY_CARBINK
.if P_FAMILY_GOOMY == TRUE
	cry Cry_Goomy
	cry Cry_Sliggoo
	cry Cry_Goodra
.endif @ P_FAMILY_GOOMY
.if P_FAMILY_KLEFKI == TRUE
	cry_uncomp Cry_Klefki @ Cannot be heard unless we use cry_uncomp here.
.endif @ P_FAMILY_KLEFKI
.if P_FAMILY_PHANTUMP == TRUE
	cry Cry_Phantump
	cry Cry_Trevenant
.endif @ P_FAMILY_PHANTUMP
.if P_FAMILY_PUMPKABOO == TRUE
	cry Cry_Pumpkaboo
	cry Cry_PumpkabooSuper
	cry Cry_Gourgeist
	cry Cry_GourgeistSuper
.endif @ P_FAMILY_PUMPKABOO
.if P_FAMILY_BERGMITE == TRUE
	cry Cry_Bergmite
	cry Cry_Avalugg
.endif @ P_FAMILY_BERGMITE
.if P_FAMILY_NOIBAT == TRUE
	cry Cry_Noibat
	cry Cry_Noivern
.endif @ P_FAMILY_NOIBAT
.if P_FAMILY_XERNEAS == TRUE
	cry Cry_Xerneas
.endif @ P_FAMILY_XERNEAS
.if P_FAMILY_YVELTAL == TRUE
	cry Cry_Yveltal
.endif @ P_FAMILY_YVELTAL
.if P_FAMILY_ZYGARDE == TRUE
	cry Cry_Zygarde50
	cry Cry_Zygarde10
	cry Cry_ZygardeComplete
.endif @ P_FAMILY_ZYGARDE
.if P_FAMILY_DIANCIE == TRUE
	cry Cry_Diancie
.if P_MEGA_EVOLUTIONS == TRUE
	cry Cry_DiancieMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DIANCIE
.if P_FAMILY_HOOPA == TRUE
	cry Cry_HoopaConfined
	cry Cry_HoopaUnbound
.endif @ P_FAMILY_HOOPA
.if P_FAMILY_VOLCANION == TRUE
	cry Cry_Volcanion
.endif @ P_FAMILY_VOLCANION
.if P_FAMILY_ROWLET == TRUE
	cry Cry_Rowlet
	cry Cry_Dartrix
	cry Cry_Decidueye
.endif @ P_FAMILY_ROWLET
.if P_FAMILY_LITTEN == TRUE
	cry Cry_Litten
	cry Cry_Torracat
	cry Cry_Incineroar
.endif @ P_FAMILY_LITTEN
.if P_FAMILY_POPPLIO == TRUE
	cry Cry_Popplio
	cry Cry_Brionne
	cry Cry_Primarina
.endif @ P_FAMILY_POPPLIO
.if P_FAMILY_PIKIPEK == TRUE
	cry Cry_Pikipek
	cry Cry_Trumbeak
	cry Cry_Toucannon
.endif @ P_FAMILY_PIKIPEK
.if P_FAMILY_YUNGOOS == TRUE
	cry Cry_Yungoos
	cry Cry_Gumshoos
.endif @ P_FAMILY_YUNGOOS
.if P_FAMILY_GRUBBIN == TRUE
	cry Cry_Grubbin
	cry Cry_Charjabug
	cry Cry_Vikavolt
.endif @ P_FAMILY_GRUBBIN
.if P_FAMILY_CRABRAWLER == TRUE
	cry Cry_Crabrawler
	cry Cry_Crabominable
.endif @ P_FAMILY_CRABRAWLER
.if P_FAMILY_ORICORIO == TRUE
	cry Cry_OricorioBaile
	cry_uncomp Cry_OricorioPomPom @ Cannot be heard unless we use cry_uncomp here.
	cry Cry_OricorioPau
	cry Cry_OricorioSensu
.endif @ P_FAMILY_ORICORIO
.if P_FAMILY_CUTIEFLY == TRUE
	cry Cry_Cutiefly
	cry Cry_Ribombee
.endif @ P_FAMILY_CUTIEFLY
.if P_FAMILY_ROCKRUFF == TRUE
	cry Cry_Rockruff
	cry Cry_LycanrocMidday
	cry Cry_LycanrocMidnight
	cry Cry_LycanrocDusk
.endif @ P_FAMILY_ROCKRUFF
.if P_FAMILY_WISHIWASHI == TRUE
	cry Cry_WishiwashiSolo
	cry Cry_WishiwashiSchool
.endif @ P_FAMILY_WISHIWASHI
.if P_FAMILY_MAREANIE == TRUE
	cry Cry_Mareanie
	cry Cry_Toxapex
.endif @ P_FAMILY_MAREANIE
.if P_FAMILY_MUDBRAY == TRUE
	cry Cry_Mudbray
	cry Cry_Mudsdale
.endif @ P_FAMILY_MUDBRAY
.if P_FAMILY_DEWPIDER == TRUE
	cry Cry_Dewpider
	cry Cry_Araquanid
.endif @ P_FAMILY_DEWPIDER
.if P_FAMILY_FOMANTIS == TRUE
	cry Cry_Fomantis
	cry Cry_Lurantis
.endif @ P_FAMILY_FOMANTIS
.if P_FAMILY_MORELULL == TRUE
	cry Cry_Morelull
	cry Cry_Shiinotic
.endif @ P_FAMILY_MORELULL
.if P_FAMILY_SALANDIT == TRUE
	cry Cry_Salandit
	cry Cry_Salazzle
.endif @ P_FAMILY_SALANDIT
.if P_FAMILY_STUFFUL == TRUE
	cry Cry_Stufful
	cry Cry_Bewear
.endif @ P_FAMILY_STUFFUL
.if P_FAMILY_BOUNSWEET == TRUE
	cry Cry_Bounsweet
	cry Cry_Steenee
	cry Cry_Tsareena
.endif @ P_FAMILY_BOUNSWEET
.if P_FAMILY_COMFEY == TRUE
	cry Cry_Comfey
.endif @ P_FAMILY_COMFEY
.if P_FAMILY_ORANGURU == TRUE
	cry Cry_Oranguru
.endif @ P_FAMILY_ORANGURU
.if P_FAMILY_PASSIMIAN == TRUE
	cry Cry_Passimian
.endif @ P_FAMILY_PASSIMIAN
.if P_FAMILY_WIMPOD == TRUE
	cry Cry_Wimpod
	cry Cry_Golisopod
.endif @ P_FAMILY_WIMPOD
.if P_FAMILY_SANDYGAST == TRUE
	cry Cry_Sandygast
	cry Cry_Palossand
.endif @ P_FAMILY_SANDYGAST
.if P_FAMILY_PYUKUMUKU == TRUE
	cry Cry_Pyukumuku
.endif @ P_FAMILY_PYUKUMUKU
.if P_FAMILY_TYPE_NULL == TRUE
	cry Cry_TypeNull
	cry Cry_Silvally
.endif @ P_FAMILY_TYPE_NULL
.if P_FAMILY_MINIOR == TRUE
	cry Cry_Minior
.endif @ P_FAMILY_MINIOR
.if P_FAMILY_KOMALA == TRUE
	cry Cry_Komala
.endif @ P_FAMILY_KOMALA
.if P_FAMILY_TURTONATOR == TRUE
	cry Cry_Turtonator
.endif @ P_FAMILY_TURTONATOR
.if P_FAMILY_TOGEDEMARU == TRUE
	cry Cry_Togedemaru
.endif @ P_FAMILY_TOGEDEMARU
.if P_FAMILY_MIMIKYU == TRUE
	cry Cry_Mimikyu
.endif @ P_FAMILY_MIMIKYU
.if P_FAMILY_BRUXISH == TRUE
	cry Cry_Bruxish
.endif @ P_FAMILY_BRUXISH
.if P_FAMILY_DRAMPA == TRUE
	cry Cry_Drampa
.endif @ P_FAMILY_DRAMPA
.if P_FAMILY_DHELMISE == TRUE
	cry Cry_Dhelmise
.endif @ P_FAMILY_DHELMISE
.if P_FAMILY_JANGMO_O == TRUE
	cry Cry_JangmoO
	cry Cry_HakamoO
	cry Cry_KommoO
.endif @ P_FAMILY_JANGMO_O
.if P_FAMILY_TAPU_KOKO == TRUE
	cry Cry_TapuKoko
.endif @ P_FAMILY_TAPU_KOKO
.if P_FAMILY_TAPU_LELE == TRUE
	cry Cry_TapuLele
.endif @ P_FAMILY_TAPU_LELE
.if P_FAMILY_TAPU_BULU == TRUE
	cry Cry_TapuBulu
.endif @ P_FAMILY_TAPU_BULU
.if P_FAMILY_TAPU_FINI == TRUE
	cry Cry_TapuFini
.endif @ P_FAMILY_TAPU_FINI
.if P_FAMILY_COSMOG == TRUE
	cry Cry_Cosmog
	cry Cry_Cosmoem
	cry Cry_Solgaleo
	cry Cry_Lunala
.endif @ P_FAMILY_COSMOG
.if P_FAMILY_NIHILEGO == TRUE
	cry Cry_Nihilego
.endif @ P_FAMILY_NIHILEGO
.if P_FAMILY_BUZZWOLE == TRUE
	cry Cry_Buzzwole
.endif @ P_FAMILY_BUZZWOLE
.if P_FAMILY_PHEROMOSA == TRUE
	cry Cry_Pheromosa
.endif @ P_FAMILY_PHEROMOSA
.if P_FAMILY_XURKITREE == TRUE
	cry Cry_Xurkitree
.endif @ P_FAMILY_XURKITREE
.if P_FAMILY_CELESTEELA == TRUE
	cry Cry_Celesteela
.endif @ P_FAMILY_CELESTEELA
.if P_FAMILY_KARTANA == TRUE
	cry Cry_Kartana
.endif @ P_FAMILY_KARTANA
.if P_FAMILY_GUZZLORD == TRUE
	cry Cry_Guzzlord
.endif @ P_FAMILY_GUZZLORD
.if P_FAMILY_NECROZMA == TRUE
	cry Cry_Necrozma
.if P_FUSION_FORMS == TRUE
	cry Cry_NecrozmaDuskMane
	cry Cry_NecrozmaDawnWings
.if P_ULTRA_BURST_FORMS == TRUE
	cry Cry_NecrozmaUltra
.endif @ P_ULTRA_BURST_FORMS
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_NECROZMA
.if P_FAMILY_MAGEARNA == TRUE
	cry Cry_Magearna
.endif @ P_FAMILY_MAGEARNA
.if P_FAMILY_MARSHADOW == TRUE
	cry Cry_Marshadow
.endif @ P_FAMILY_MARSHADOW
.if P_FAMILY_POIPOLE == TRUE
	cry Cry_Poipole
	cry Cry_Naganadel
.endif @ P_FAMILY_POIPOLE
.if P_FAMILY_STAKATAKA == TRUE
	cry Cry_Stakataka
.endif @ P_FAMILY_STAKATAKA
.if P_FAMILY_BLACEPHALON == TRUE
	cry Cry_Blacephalon
.endif @ P_FAMILY_BLACEPHALON
.if P_FAMILY_ZERAORA == TRUE
	cry Cry_Zeraora
.endif @ P_FAMILY_ZERAORA
.if P_FAMILY_MELTAN == TRUE
	cry Cry_Meltan
	cry Cry_Melmetal
.endif @ P_FAMILY_MELTAN
.if P_FAMILY_TOMORIMON == TRUE
	cry Cry_Tomorimon
	cry Cry_Onibimon
	cry Cry_Rillaboom
.endif @ P_FAMILY_TOMORIMON
.if P_FAMILY_SCORBUNNY == TRUE
	cry Cry_Scorbunny
	cry Cry_Raboot
	cry Cry_Cinderace
.endif @ P_FAMILY_SCORBUNNY
.if P_FAMILY_SOBBLE == TRUE
	cry Cry_Sobble
	cry Cry_Drizzile
	cry Cry_Inteleon
.endif @ P_FAMILY_SOBBLE
.if P_FAMILY_SKWOVET == TRUE
	cry Cry_Skwovet
	cry Cry_Greedent
.endif @ P_FAMILY_SKWOVET
.if P_FAMILY_ROOKIDEE == TRUE
	cry Cry_Rookidee
	cry Cry_Corvisquire
	cry Cry_Corviknight
.endif @ P_FAMILY_ROOKIDEE
.if P_FAMILY_BLIPBUG == TRUE
	cry Cry_Blipbug
	cry Cry_Dottler
	cry Cry_Orbeetle
.endif @ P_FAMILY_BLIPBUG
.if P_FAMILY_NICKIT == TRUE
	cry Cry_Nickit
	cry Cry_Thievul
.endif @ P_FAMILY_NICKIT
.if P_FAMILY_GOSSIFLEUR == TRUE
	cry Cry_Gossifleur
	cry Cry_Eldegoss
.endif @ P_FAMILY_GOSSIFLEUR
.if P_FAMILY_WOOLOO == TRUE
	cry Cry_Wooloo
	cry Cry_Dubwool
.endif @ P_FAMILY_WOOLOO
.if P_FAMILY_CHEWTLE == TRUE
	cry Cry_Chewtle
	cry Cry_Drednaw
.endif @ P_FAMILY_CHEWTLE
.if P_FAMILY_YAMPER == TRUE
	cry Cry_Yamper
	cry Cry_Boltund
.endif @ P_FAMILY_YAMPER
.if P_FAMILY_ROLYCOLY == TRUE
	cry Cry_Rolycoly
	cry Cry_Carkol
	cry Cry_Coalossal
.endif @ P_FAMILY_ROLYCOLY
.if P_FAMILY_APPLIN == TRUE
	cry Cry_Applin
	cry Cry_Flapple
	cry Cry_Appletun
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Dipplin
	cry Cry_Hydrapple
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_APPLIN
.if P_FAMILY_SILICOBRA == TRUE
	cry Cry_Silicobra
	cry Cry_Sandaconda
.endif @ P_FAMILY_SILICOBRA
.if P_FAMILY_CRAMORANT == TRUE
	cry Cry_Cramorant
.endif @ P_FAMILY_CRAMORANT
.if P_FAMILY_ARROKUDA == TRUE
	cry Cry_Arrokuda
	cry Cry_Barraskewda
.endif @ P_FAMILY_ARROKUDA
.if P_FAMILY_TOXEL == TRUE
	cry Cry_Toxel
	cry Cry_ToxtricityAmped
	cry Cry_ToxtricityLowKey
.endif @ P_FAMILY_TOXEL
.if P_FAMILY_SIZZLIPEDE == TRUE
	cry Cry_Sizzlipede
	cry Cry_Centiskorch
.endif @ P_FAMILY_SIZZLIPEDE
.if P_FAMILY_CLOBBOPUS == TRUE
	cry Cry_Clobbopus
	cry Cry_Grapploct
.endif @ P_FAMILY_CLOBBOPUS
.if P_FAMILY_SINISTEA == TRUE
	cry Cry_Sinistea
	cry Cry_Polteageist
.endif @ P_FAMILY_SINISTEA
.if P_FAMILY_HATENNA == TRUE
	cry Cry_Hatenna
	cry Cry_Hattrem
	cry Cry_Hatterene
.endif @ P_FAMILY_HATENNA
.if P_FAMILY_IMPIDIMP == TRUE
	cry Cry_Impidimp
	cry Cry_Morgrem
	cry Cry_Grimmsnarl
.endif @ P_FAMILY_IMPIDIMP
.if P_FAMILY_MILCERY == TRUE
	cry Cry_Milcery
	cry Cry_Alcremie
.endif @ P_FAMILY_MILCERY
.if P_FAMILY_FALINKS == TRUE
	cry Cry_Falinks
.endif @ P_FAMILY_FALINKS
.if P_FAMILY_PINCURCHIN == TRUE
	cry Cry_Pincurchin
.endif @ P_FAMILY_PINCURCHIN
.if P_FAMILY_SNOM == TRUE
	cry Cry_Snom
	cry Cry_Frosmoth
.endif @ P_FAMILY_SNOM
.if P_FAMILY_STONJOURNER == TRUE
	cry Cry_Stonjourner
.endif @ P_FAMILY_STONJOURNER
.if P_FAMILY_EISCUE == TRUE
	cry Cry_EiscueIce
	cry Cry_EiscueNoice
.endif @ P_FAMILY_EISCUE
.if P_FAMILY_INDEEDEE == TRUE
	cry Cry_IndeedeeM
	cry Cry_IndeedeeF
.endif @ P_FAMILY_INDEEDEE
.if P_FAMILY_MORPEKO == TRUE
	cry Cry_MorpekoFullBelly
	cry Cry_MorpekoHangry
.endif @ P_FAMILY_MORPEKO
.if P_FAMILY_CUFANT == TRUE
	cry Cry_Cufant
	cry Cry_Copperajah
.endif @ P_FAMILY_CUFANT
.if P_FAMILY_DRACOZOLT == TRUE
	cry Cry_Dracozolt
.endif @ P_FAMILY_DRACOZOLT
.if P_FAMILY_ARCTOZOLT == TRUE
	cry Cry_Arctozolt
.endif @ P_FAMILY_ARCTOZOLT
.if P_FAMILY_DRACOVISH == TRUE
	cry Cry_Dracovish
.endif @ P_FAMILY_DRACOVISH
.if P_FAMILY_ARCTOVISH == TRUE
	cry Cry_Arctovish
.endif @ P_FAMILY_ARCTOVISH
.if P_FAMILY_DURALUDON == TRUE
	cry Cry_Duraludon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry Cry_Archaludon
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DURALUDON
.if P_FAMILY_DREEPY == TRUE
	cry Cry_Dreepy
	cry Cry_Drakloak
	cry Cry_Dragapult
.endif @ P_FAMILY_DREEPY
.if P_FAMILY_ZACIAN == TRUE
	cry Cry_ZacianHero
	cry Cry_ZacianCrowned
.endif @ P_FAMILY_ZACIAN
.if P_FAMILY_ZAMAZENTA == TRUE
	cry Cry_ZamazentaHero
	cry Cry_ZamazentaCrowned
.endif @ P_FAMILY_ZAMAZENTA
.if P_FAMILY_ETERNATUS == TRUE
	cry Cry_Eternatus
	cry Cry_EternatusEternamax
.endif @ P_FAMILY_ETERNATUS
.if P_FAMILY_KUBFU == TRUE
	cry Cry_Kubfu
	cry Cry_UrshifuSingleStrike
	cry Cry_UrshifuRapidStrike
.endif @ P_FAMILY_KUBFU
.if P_FAMILY_ZARUDE == TRUE
	cry Cry_Zarude
.endif @ P_FAMILY_ZARUDE
.if P_FAMILY_REGIELEKI == TRUE
	cry Cry_Regieleki
.endif @ P_FAMILY_REGIELEKI
.if P_FAMILY_REGIDRAGO == TRUE
	cry Cry_Regidrago
.endif @ P_FAMILY_REGIDRAGO
.if P_FAMILY_GLASTRIER == TRUE
	cry Cry_Glastrier
.endif @ P_FAMILY_GLASTRIER
.if P_FAMILY_SPECTRIER == TRUE
	cry Cry_Spectrier
.endif @ P_FAMILY_SPECTRIER
.if P_FAMILY_CALYREX == TRUE
	cry Cry_Calyrex
.if P_FUSION_FORMS == TRUE
	cry Cry_CalyrexIce
	cry Cry_CalyrexShadow
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_CALYREX
.if P_FAMILY_ENAMORUS == TRUE
	cry Cry_EnamorusIncarnate
	cry Cry_EnamorusTherian
.endif @ P_FAMILY_ENAMORUS
.if P_FAMILY_SPRIGATITO == TRUE
	cry Cry_Sprigatito
	cry Cry_Floragato
	cry Cry_Meowscarada
.endif @ P_FAMILY_SPRIGATITO
.if P_FAMILY_FUECOCO == TRUE
	cry Cry_Fuecoco
	cry Cry_Crocalor
	cry Cry_Skeledirge
.endif @ P_FAMILY_FUECOCO
.if P_FAMILY_QUAXLY == TRUE
	cry Cry_Quaxly
	cry Cry_Quaxwell
	cry Cry_Quaquaval
.endif @ P_FAMILY_QUAXLY
.if P_FAMILY_LECHONK == TRUE
	cry Cry_Lechonk
	cry Cry_OinkologneM
	cry Cry_OinkologneF
.endif @ P_FAMILY_LECHONK
.if P_FAMILY_TAROUNTULA == TRUE
	cry Cry_Tarountula
	cry Cry_Spidops
.endif @ P_FAMILY_TAROUNTULA
.if P_FAMILY_NYMBLE == TRUE
	cry Cry_Nymble
	cry Cry_Lokix
.endif @ P_FAMILY_NYMBLE
.if P_FAMILY_PAWMI == TRUE
	cry Cry_Pawmi
	cry Cry_Pawmo
	cry Cry_Pawmot
.endif @ P_FAMILY_PAWMI
.if P_FAMILY_TANDEMAUS == TRUE
	cry Cry_Tandemaus
	cry Cry_MausholdThree
	cry Cry_MausholdFour
.endif @ P_FAMILY_TANDEMAUS
.if P_FAMILY_FIDOUGH == TRUE
	cry Cry_Fidough
	cry Cry_Dachsbun
.endif @ P_FAMILY_FIDOUGH
.if P_FAMILY_SMOLIV == TRUE
	cry Cry_Smoliv
	cry Cry_Dolliv
	cry Cry_Arboliva
.endif @ P_FAMILY_SMOLIV
.if P_FAMILY_SQUAWKABILLY == TRUE
	cry Cry_Squawkabilly
.endif @ P_FAMILY_SQUAWKABILLY
.if P_FAMILY_NACLI == TRUE
	cry Cry_Nacli
	cry Cry_Naclstack
	cry Cry_Garganacl
.endif @ P_FAMILY_NACLI
.if P_FAMILY_CHARCADET == TRUE
	cry Cry_Charcadet
	cry Cry_Armarouge
	cry Cry_Ceruledge
.endif @ P_FAMILY_CHARCADET
.if P_FAMILY_TADBULB == TRUE
	cry Cry_Tadbulb
	cry Cry_Bellibolt
.endif @ P_FAMILY_TADBULB
.if P_FAMILY_WATTREL == TRUE
	cry Cry_Wattrel
	cry Cry_Kilowattrel
.endif @ P_FAMILY_WATTREL
.if P_FAMILY_MASCHIFF == TRUE
	cry Cry_Maschiff
	cry Cry_Mabosstiff
.endif @ P_FAMILY_MASCHIFF
.if P_FAMILY_SHROODLE == TRUE
	cry Cry_Shroodle
	cry Cry_Grafaiai
.endif @ P_FAMILY_SHROODLE
.if P_FAMILY_BRAMBLIN == TRUE
	cry Cry_Bramblin
	cry Cry_Brambleghast
.endif @ P_FAMILY_BRAMBLIN
.if P_FAMILY_TOEDSCOOL == TRUE
	cry Cry_Toedscool
	cry Cry_Toedscruel
.endif @ P_FAMILY_TOEDSCOOL
.if P_FAMILY_KLAWF == TRUE
	cry Cry_Klawf
.endif @ P_FAMILY_KLAWF
.if P_FAMILY_CAPSAKID == TRUE
	cry Cry_Capsakid
	cry Cry_Scovillain
.endif @ P_FAMILY_CAPSAKID
.if P_FAMILY_RELLOR == TRUE
	cry Cry_Rellor
	cry Cry_Rabsca
.endif @ P_FAMILY_RELLOR
.if P_FAMILY_FLITTLE == TRUE
	cry Cry_Flittle
	cry Cry_Espathra
.endif @ P_FAMILY_FLITTLE
.if P_FAMILY_TINKATINK == TRUE
	cry Cry_Tinkatink
	cry Cry_Tinkatuff
	cry Cry_Tinkaton
.endif @ P_FAMILY_TINKATINK
.if P_FAMILY_WIGLETT == TRUE
	cry Cry_Wiglett
	cry Cry_Wugtrio
.endif @ P_FAMILY_WIGLETT
.if P_FAMILY_BOMBIRDIER == TRUE
	cry Cry_Bombirdier
.endif @ P_FAMILY_BOMBIRDIER
.if P_FAMILY_FINIZEN == TRUE
	cry Cry_Finizen
	cry Cry_PalafinZero
	cry Cry_PalafinHero
.endif @ P_FAMILY_FINIZEN
.if P_FAMILY_VAROOM == TRUE
	cry Cry_Varoom
	cry Cry_Revavroom
.endif @ P_FAMILY_VAROOM
.if P_FAMILY_CYCLIZAR == TRUE
	cry Cry_Cyclizar
.endif @ P_FAMILY_CYCLIZAR
.if P_FAMILY_ORTHWORM == TRUE
	cry Cry_Orthworm
.endif @ P_FAMILY_ORTHWORM
.if P_FAMILY_GLIMMET == TRUE
	cry Cry_Glimmet
	cry Cry_Glimmora
.endif @ P_FAMILY_GLIMMET
.if P_FAMILY_GREAVARD == TRUE
	cry Cry_Greavard
	cry Cry_Houndstone
.endif @ P_FAMILY_GREAVARD
.if P_FAMILY_FLAMIGO == TRUE
	cry Cry_Flamigo
.endif @ P_FAMILY_FLAMIGO
.if P_FAMILY_CETODDLE == TRUE
	cry Cry_Cetoddle
	cry Cry_Cetitan
.endif @ P_FAMILY_CETODDLE
.if P_FAMILY_VELUZA == TRUE
	cry Cry_Veluza
.endif @ P_FAMILY_VELUZA
.if P_FAMILY_DONDOZO == TRUE
	cry Cry_Dondozo
.endif @ P_FAMILY_DONDOZO
.if P_FAMILY_TATSUGIRI == TRUE
	cry Cry_TatsugiriCurly
	cry Cry_TatsugiriDroopy
	cry Cry_TatsugiriStretchy
.endif @ P_FAMILY_TATSUGIRI
.if P_FAMILY_GREAT_TUSK == TRUE
	cry Cry_GreatTusk
.endif @ P_FAMILY_GREAT_TUSK
.if P_FAMILY_SCREAM_TAIL == TRUE
	cry Cry_ScreamTail
.endif @ P_FAMILY_SCREAM_TAIL
.if P_FAMILY_BRUTE_BONNET == TRUE
	cry Cry_BruteBonnet
.endif @ P_FAMILY_BRUTE_BONNET
.if P_FAMILY_FLUTTER_MANE == TRUE
	cry Cry_FlutterMane
.endif @ P_FAMILY_FLUTTER_MANE
.if P_FAMILY_SLITHER_WING == TRUE
	cry Cry_SlitherWing
.endif @ P_FAMILY_SLITHER_WING
.if P_FAMILY_SANDY_SHOCKS == TRUE
	cry Cry_SandyShocks
.endif @ P_FAMILY_SANDY_SHOCKS
.if P_FAMILY_IRON_TREADS == TRUE
	cry Cry_IronTreads
.endif @ P_FAMILY_IRON_TREADS
.if P_FAMILY_IRON_BUNDLE == TRUE
	cry Cry_IronBundle
.endif @ P_FAMILY_IRON_BUNDLE
.if P_FAMILY_IRON_HANDS == TRUE
	cry Cry_IronHands
.endif @ P_FAMILY_IRON_HANDS
.if P_FAMILY_IRON_JUGULIS == TRUE
	cry Cry_IronJugulis
.endif @ P_FAMILY_IRON_JUGULIS
.if P_FAMILY_IRON_MOTH == TRUE
	cry Cry_IronMoth
.endif @ P_FAMILY_IRON_MOTH
.if P_FAMILY_IRON_THORNS == TRUE
	cry Cry_IronThorns
.endif @ P_FAMILY_IRON_THORNS
.if P_FAMILY_FRIGIBAX == TRUE
	cry Cry_Frigibax
	cry Cry_Arctibax
	cry Cry_Baxcalibur
.endif @ P_FAMILY_FRIGIBAX
.if P_FAMILY_GIMMIGHOUL == TRUE
	cry Cry_Gimmighoul
	cry Cry_Gholdengo
.endif @ P_FAMILY_GIMMIGHOUL
.if P_FAMILY_WO_CHIEN == TRUE
	cry Cry_WoChien
.endif @ P_FAMILY_WO_CHIEN
.if P_FAMILY_CHIEN_PAO == TRUE
	cry Cry_ChienPao
.endif @ P_FAMILY_CHIEN_PAO
.if P_FAMILY_TING_LU == TRUE
	cry Cry_TingLu
.endif @ P_FAMILY_TING_LU
.if P_FAMILY_CHI_YU == TRUE
	cry Cry_ChiYu
.endif @ P_FAMILY_CHI_YU
.if P_FAMILY_ROARING_MOON == TRUE
	cry Cry_RoaringMoon
.endif @ P_FAMILY_ROARING_MOON
.if P_FAMILY_IRON_VALIANT == TRUE
	cry Cry_IronValiant
.endif @ P_FAMILY_IRON_VALIANT
.if P_FAMILY_KORAIDON == TRUE
	cry Cry_Koraidon
.endif @ P_FAMILY_KORAIDON
.if P_FAMILY_MIRAIDON == TRUE
	cry Cry_Miraidon
.endif @ P_FAMILY_MIRAIDON
.if P_FAMILY_WALKING_WAKE == TRUE
	cry Cry_WalkingWake
.endif @ P_FAMILY_WALKING_WAKE
.if P_FAMILY_IRON_LEAVES == TRUE
	cry Cry_IronLeaves
.endif @ P_FAMILY_IRON_LEAVES
.if P_FAMILY_POLTCHAGEIST == TRUE
	cry Cry_Poltchageist
	cry Cry_Sinistcha
.endif @ P_FAMILY_POLTCHAGEIST
.if P_FAMILY_OKIDOGI == TRUE
	cry Cry_Okidogi
.endif @ P_FAMILY_OKIDOGI
.if P_FAMILY_MUNKIDORI == TRUE
	cry Cry_Munkidori
.endif @ P_FAMILY_MUNKIDORI
.if P_FAMILY_FEZANDIPITI == TRUE
	cry Cry_Fezandipiti
.endif @ P_FAMILY_FEZANDIPITI
.if P_FAMILY_OGERPON == TRUE
	cry Cry_Ogerpon
.endif @ P_FAMILY_OGERPON
.if P_FAMILY_GOUGING_FIRE == TRUE
	cry Cry_GougingFire
.endif @ P_FAMILY_GOUGING_FIRE
.if P_FAMILY_RAGING_BOLT == TRUE
	cry Cry_RagingBolt
.endif @ P_FAMILY_RAGING_BOLT
.if P_FAMILY_IRON_BOULDER == TRUE
	cry Cry_IronBoulder
.endif @ P_FAMILY_IRON_BOULDER
.if P_FAMILY_IRON_CROWN == TRUE
	cry Cry_IronCrown
.endif @ P_FAMILY_IRON_CROWN
.if P_FAMILY_TERAPAGOS == TRUE
	cry Cry_Terapagos
.endif @ P_FAMILY_TERAPAGOS
.if P_FAMILY_PECHARUNT == TRUE
	cry Cry_Pecharunt
.endif @ P_FAMILY_PECHARUNT
.endif @ P_CRIES_ENABLED

	.align 2
gCryTable_Reverse::
.if P_CRIES_ENABLED == TRUE
.if P_FAMILY_ARGOMON_F == TRUE
	cry_reverse Cry_Argomon_f
	cry_reverse Cry_Bombmon
	cry_reverse Cry_Bommon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BommonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_ARGOMON_F
.if P_FAMILY_BOTAMON == TRUE
	cry_reverse Cry_Botamon
	cry_reverse Cry_Chibickmon
	cry_reverse Cry_Chibomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_ChibomonMegaX
	cry_reverse Cry_ChibomonMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BOTAMON
.if P_FAMILY_CONOMON == TRUE
	cry_reverse Cry_Conomon
	cry_reverse Cry_Cotsucomon
	cry_reverse Cry_Curimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CurimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CONOMON
.if P_FAMILY_DATIRIMON == TRUE
	cry_reverse Cry_Datirimon
	cry_reverse Cry_Dodomon
	cry_reverse Cry_Dokimon
.endif @ P_FAMILY_DATIRIMON
.if P_FAMILY_FUFUMON == TRUE
	cry_reverse Cry_Fufumon
	cry_reverse Cry_Jyarimon
	cry_reverse Cry_Keemon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_KeemonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FUFUMON
.if P_FAMILY_KETOMON == TRUE
	cry_reverse Cry_Ketomon
	cry_reverse Cry_Kuramon
	cry_reverse Cry_Leafmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LeafmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_KETOMON
.if P_FAMILY_CHOROMON == TRUE
	cry_reverse Cry_Choromon
	cry_reverse Cry_Mokumon
.endif @ P_FAMILY_CHOROMON
.if P_FAMILY_NYOKIMON == TRUE
	cry_reverse Cry_Nyokimon
	cry_reverse Cry_Pabumon
.endif @ P_FAMILY_NYOKIMON
.if P_FAMILY_PAFUMON == TRUE
	cry_reverse Cry_Pafumon
	cry_reverse Cry_Paomon
.endif @ P_FAMILY_PAFUMON
.if P_FAMILY_PETITMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Guilmon_x
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Petitmon
	cry_reverse Cry_Pichimon
.endif @ P_FAMILY_PETITMON
.if P_FAMILY_POPOMON == TRUE
	cry_reverse Cry_Popomon
	cry_reverse Cry_Poyomon
.endif @ P_FAMILY_POPOMON
.if P_FAMILY_PUNIMON == TRUE
	cry_reverse Cry_Punimon
	cry_reverse Cry_Pupumon
	cry_reverse Cry_Pururumon
	cry_reverse Cry_Pusumon
	cry_reverse Cry_Puttimon
	cry_reverse Cry_Puwamon
.endif @ P_FAMILY_PUNIMON
.if P_FAMILY_PUYOMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Gumdramon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Puyomon
	cry_reverse Cry_Pyonmon
.endif @ P_FAMILY_PUYOMON
.if P_FAMILY_RELEMON == TRUE
	cry_reverse Cry_Relemon
	cry_reverse Cry_Sakumon
.endif @ P_FAMILY_RELEMON
.if P_FAMILY_SANDMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Hackmon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Sandmon
	cry_reverse Cry_Tsubumon
.endif @ P_FAMILY_SANDMON
.if P_FAMILY_ICEBOTAMON == TRUE
	cry_reverse Cry_Icebotamon
	cry_reverse Cry_Yuramon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Gotsumon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ICEBOTAMON
.if P_FAMILY_ZERIMON == TRUE
	cry_reverse Cry_Zerimon
	cry_reverse Cry_Zurumon
	cry_reverse Cry_Arcadiamon_it
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Impmon_x
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_ZERIMON
.if P_FAMILY_ARGOMON_IT == TRUE
	cry_reverse Cry_Argomon_it
	cry_reverse Cry_Babydmon
.endif @ P_FAMILY_ARGOMON_IT
.if P_FAMILY_BIBIMON == TRUE
	cry_reverse Cry_Bibimon
	cry_reverse Cry_Bosamon
.endif @ P_FAMILY_BIBIMON
.if P_FAMILY_BUDMON == TRUE
	cry_reverse Cry_Budmon
	cry_reverse Cry_Bukamon
.endif @ P_FAMILY_BUDMON
.if P_FAMILY_CALUMON == TRUE
	cry_reverse Cry_Calumon
	cry_reverse Cry_Chapmon
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Perrserker
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_CALUMON
.if P_FAMILY_CHICCHIMON == TRUE
	cry_reverse Cry_Chicchimon
	cry_reverse Cry_Demmeramon
.endif @ P_FAMILY_CHICCHIMON
.if P_FAMILY_DEMIVEEMON == TRUE
	cry_reverse Cry_Demiveemon
	cry_reverse Cry_Dorimon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Annihilape
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DEMIVEEMON
.if P_FAMILY_FRIMON == TRUE
	cry_reverse Cry_Frimon
	cry_reverse Cry_Gigimon
.endif @ P_FAMILY_FRIMON
.if P_FAMILY_GUMMYMON == TRUE
	cry_reverse Cry_Gummymon
	cry_reverse Cry_Gurimon
	cry_reverse Cry_Hiyarimon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Kamemon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_GUMMYMON
.if P_FAMILY_HOPMON == TRUE
	cry_reverse Cry_Hopmon
	cry_reverse Cry_Kakkinmon
	cry_reverse Cry_Kapurimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_KapurimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HOPMON
.if P_FAMILY_KOKOMON == TRUE
	cry_reverse Cry_Kokomon
	cry_reverse Cry_Koromon
	cry_reverse Cry_Kozenimon
.endif @ P_FAMILY_KOKOMON
.if P_FAMILY_KYAROMON == TRUE
	cry_reverse Cry_Kyaromon
	cry_reverse Cry_Kyokyomon
	cry_reverse Cry_Kyupimon
.endif @ P_FAMILY_KYAROMON
.if P_FAMILY_MINOMON == TRUE
	cry_reverse Cry_Minomon
	cry_reverse Cry_Missimon
.endif @ P_FAMILY_MINOMON
.if P_FAMILY_MONIMON == TRUE
	cry_reverse Cry_Monimon
	cry_reverse Cry_Moonmon
	cry_reverse Cry_Motimon
.endif @ P_FAMILY_MONIMON
.if P_FAMILY_NEGAMON == TRUE
	cry_reverse Cry_Negamon
	cry_reverse Cry_Nyaromon
.endif @ P_FAMILY_NEGAMON
.if P_FAMILY_PAGUMON == TRUE
	cry_reverse Cry_Pagumon
	cry_reverse Cry_Pickmon_silver
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Liollmon
.endif @ P_GEN_2_CROSS_EVOS
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Pickmon_silverMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_PagumonGalarian
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PAGUMON
.if P_FAMILY_PICKMON_WHITE == TRUE
	cry_reverse Cry_Pickmon_white
	cry_reverse Cry_Pickmon_red
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Magnezone
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_PICKMON_WHITE
.if P_FAMILY_PINAMON == TRUE
	cry_reverse Cry_Pinamon
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Sirfetchd
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PINAMON
.if P_FAMILY_POROMON == TRUE
	cry_reverse Cry_Poromon
	cry_reverse Cry_Puroromon
.endif @ P_FAMILY_POROMON
.if P_FAMILY_PUSURIMON == TRUE
	cry_reverse Cry_Pusurimon
	cry_reverse Cry_Puyoyomon
.endif @ P_FAMILY_PUSURIMON
.if P_FAMILY_SAKUTTOMON == TRUE
	cry_reverse Cry_Sakuttomon
	cry_reverse Cry_Sunmon
.endif @ P_FAMILY_SAKUTTOMON
.if P_FAMILY_TANEMON == TRUE
	cry_reverse Cry_Tanemon
	cry_reverse Cry_Tokomon
.endif @ P_FAMILY_TANEMON
.if P_FAMILY_TOKOMON_X == TRUE
	cry_reverse Cry_Tokomon_x
	cry_reverse Cry_Torballmon
	cry_reverse Cry_Tsumemon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_TsumemonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TOKOMON_X
.if P_FAMILY_TSUNOMON == TRUE
	cry_reverse Cry_Tsunomon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Kodekacmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_KodekacmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_TSUNOMON
.if P_FAMILY_TUMBLEMON == TRUE
	cry_reverse Cry_Tumblemon
	cry_reverse Cry_Upamon
.endif @ P_FAMILY_TUMBLEMON
.if P_FAMILY_VIXIMON == TRUE
	cry_reverse Cry_Viximon
	cry_reverse Cry_Wanyamon
.endif @ P_FAMILY_VIXIMON
.if P_FAMILY_XIAOMON == TRUE
	cry_reverse Cry_Xiaomon
	cry_reverse Cry_Yaamon
.endif @ P_FAMILY_XIAOMON
.if P_FAMILY_YOKOMON == TRUE
	cry_reverse Cry_Yokomon
	cry_reverse Cry_Agumon
.endif @ P_FAMILY_YOKOMON
.if P_FAMILY_AGUMON_06 == TRUE
	cry_reverse Cry_Agumon_06
	cry_reverse Cry_Agumon_expert
.endif @ P_FAMILY_AGUMON_06
.if P_FAMILY_HITMONS == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Salamon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Agumon_x
	cry_reverse Cry_Angoramon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Salamon_x
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_HITMONS
.if P_FAMILY_ARCADIAMON_ROOKIE == TRUE
	cry_reverse Cry_Arcadiamon_rookie
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Lickilicky
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ARCADIAMON_ROOKIE
.if P_FAMILY_ARGOMON_ROOKIE == TRUE
	cry_reverse Cry_Argomon_rookie
	cry_reverse Cry_Armadilmon
.endif @ P_FAMILY_ARGOMON_ROOKIE
.if P_FAMILY_ARURAUMON == TRUE
	cry_reverse Cry_Aruraumon
	cry_reverse Cry_Bakomon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Rhyperior
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_ARURAUMON
.if P_FAMILY_BEARMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Happiny
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Bearmon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Shoutmon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_BEARMON
.if P_FAMILY_BETAMON == TRUE
	cry_reverse Cry_Betamon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Tangrowth
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BETAMON
.if P_FAMILY_BETAMON_X == TRUE
	cry_reverse Cry_Betamon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Betamon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BETAMON_X
.if P_FAMILY_BIYOMON == TRUE
	cry_reverse Cry_Biyomon
	cry_reverse Cry_Blkagumon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Psychemon
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_BIYOMON
.if P_FAMILY_BLKAGUMON_X == TRUE
	cry_reverse Cry_Blkagumon_x
	cry_reverse Cry_Blkgabumon
.endif @ P_FAMILY_BLKAGUMON_X
.if P_FAMILY_BLKGUILMON == TRUE
	cry_reverse Cry_Blkguilmon
	cry_reverse Cry_Bokomon
.endif @ P_FAMILY_BLKGUILMON
.if P_FAMILY_BULUCOMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_MimeJr
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Bulucomon
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_MrRime
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_BULUCOMON
.if P_FAMILY_BURGERMON == TRUE
	cry_reverse Cry_Burgermon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Monodramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MonodramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Kleavor
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_BURGERMON
.if P_FAMILY_SAMUAGUMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Sangomon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Samuagumon
.endif @ P_FAMILY_SAMUAGUMON
.if P_FAMILY_CANDLEMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Santaagumon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Candlemon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Electivire
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_CANDLEMON
.if P_FAMILY_CHIKURIMON == TRUE
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Blktoyamon
.endif @ P_GEN_2_CROSS_EVOS
	cry_reverse Cry_Chikurimon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Magmortar
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_CHIKURIMON
.if P_FAMILY_TYUTYUMON == TRUE
	cry_reverse Cry_Tyutyumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_TyutyumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TYUTYUMON
.if P_FAMILY_CHUUMON == TRUE
	cry_reverse Cry_Chuumon
.endif @ P_FAMILY_CHUUMON
.if P_FAMILY_HAZYAGUMON == TRUE
	cry_reverse Cry_Hazyagumon
	cry_reverse Cry_Commdramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CommdramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HAZYAGUMON
.if P_FAMILY_CORONAMON == TRUE
	cry_reverse Cry_Coronamon
.endif @ P_FAMILY_CORONAMON
.if P_FAMILY_CRABMON == TRUE
	cry_reverse Cry_Crabmon
.endif @ P_FAMILY_CRABMON
.if P_FAMILY_CRABMON_X == TRUE
	cry_reverse Cry_Crabmon_x
	cry_reverse Cry_Cutemon
	cry_reverse Cry_Damemon
	cry_reverse Cry_Demidevmon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Kunemon
	cry_reverse Cry_Labramon
.endif @ P_GEN_2_CROSS_EVOS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Leafeon
	cry_reverse Cry_Glaceon
.endif @ P_GEN_4_CROSS_EVOS
.if P_GEN_6_CROSS_EVOS == TRUE
	cry_reverse Cry_Sylveon
.endif @ P_GEN_6_CROSS_EVOS
.endif @ P_FAMILY_CRABMON_X
.if P_FAMILY_DOKUNEMON == TRUE
	cry_reverse Cry_Dokunemon
.if P_GEN_2_CROSS_EVOS == TRUE
	cry_reverse Cry_Renamon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_PorygonZ
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_GEN_2_CROSS_EVOS
.endif @ P_FAMILY_DOKUNEMON
.if P_FAMILY_DONDOKOMON == TRUE
	cry_reverse Cry_Dondokomon
	cry_reverse Cry_Dorumon
.endif @ P_FAMILY_DONDOKOMON
.if P_FAMILY_DOTAGUMON == TRUE
	cry_reverse Cry_Dotagumon
	cry_reverse Cry_Dotfalcmon
.endif @ P_FAMILY_DOTAGUMON
.if P_FAMILY_DRACMON == TRUE
	cry_reverse Cry_Dracmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_DracmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DRACMON
.if P_FAMILY_DRACOMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Munchlax
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Dracomon
.endif @ P_FAMILY_DRACOMON
.if P_FAMILY_DRACOMON_X == TRUE
	cry_reverse Cry_Dracomon_x
.endif @ P_FAMILY_DRACOMON_X
.if P_FAMILY_EBIBURGMON == TRUE
	cry_reverse Cry_Ebiburgmon
.endif @ P_FAMILY_EBIBURGMON
.if P_FAMILY_EKAKIMON == TRUE
	cry_reverse Cry_Ekakimon
.endif @ P_FAMILY_EKAKIMON
.if P_FAMILY_ELECMON == TRUE
	cry_reverse Cry_Elecmon
	cry_reverse Cry_Elecmon_violet
	cry_reverse Cry_Espimon
.endif @ P_FAMILY_ELECMON
.if P_FAMILY_AGUMON_FAKE_EXPERT == TRUE
	cry_reverse Cry_Agumon_fake_expert
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Agumon_fake_expertMegaX
	cry_reverse Cry_Agumon_fake_expertMegaY
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_AGUMON_FAKE_EXPERT
.if P_FAMILY_FALCOMON == TRUE
	cry_reverse Cry_Falcomon
.endif @ P_FAMILY_FALCOMON
.if P_FAMILY_FALCOMON_06 == TRUE
	cry_reverse Cry_Falcomon_06
	cry_reverse Cry_Fanbeemon
	cry_reverse Cry_Flamemon
.endif @ P_FAMILY_FALCOMON_06
.if P_FAMILY_FLORAMON == TRUE
	cry_reverse Cry_Floramon
	cry_reverse Cry_Gabumon
	cry_reverse Cry_Gabumon_x
.endif @ P_FAMILY_FLORAMON
.if P_FAMILY_GAMMAMON == TRUE
	cry_reverse Cry_Gammamon
	cry_reverse Cry_Gaomon
	cry_reverse Cry_Gaossmon
.endif @ P_FAMILY_GAMMAMON
.if P_FAMILY_GAZIMON == TRUE
	cry_reverse Cry_Gazimon
	cry_reverse Cry_Gazimon_x
.endif @ P_FAMILY_GAZIMON
.if P_FAMILY_GHOSTMON == TRUE
	cry_reverse Cry_Ghostmon
	cry_reverse Cry_Gizamon
.endif @ P_FAMILY_GHOSTMON
.if P_FAMILY_GIZUMON == TRUE
	cry_reverse Cry_Gizumon
	cry_reverse Cry_Goblimon
.endif @ P_FAMILY_GIZUMON
.if P_FAMILY_GOMAMON == TRUE
	cry_reverse Cry_Gomamon
	cry_reverse Cry_Gomamon_x
.endif @ P_FAMILY_GOMAMON
.if P_FAMILY_GOTSUMON_X == TRUE
	cry_reverse Cry_Gotsumon_x
	cry_reverse Cry_Guilmon
.endif @ P_FAMILY_GOTSUMON_X
.if P_FAMILY_HAGURUMON == TRUE
	cry_reverse Cry_Hagurumon
	cry_reverse Cry_Hagurumon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Togekiss
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_HAGURUMON
.if P_FAMILY_HAWKMON == TRUE
	cry_reverse Cry_Hawkmon
	cry_reverse Cry_Herissmon
.endif @ P_FAMILY_HAWKMON
.if P_FAMILY_HYOKOMON == TRUE
	cry_reverse Cry_Hyokomon
	cry_reverse Cry_Ignitemon
	cry_reverse Cry_Impmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_ImpmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HYOKOMON
.if P_FAMILY_JAZAMON == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry_reverse Cry_Biostegmon
.endif @ P_GEN_3_CROSS_EVOS
	cry_reverse Cry_Jazamon
	cry_reverse Cry_Jellymon
.endif @ P_FAMILY_JAZAMON
.if P_FAMILY_JUNKMON == TRUE
	cry_reverse Cry_Bonsly
	cry_reverse Cry_Junkmon
.endif @ P_FAMILY_JUNKMON
.if P_FAMILY_KERAMON == TRUE
	cry_reverse Cry_Keramon
	cry_reverse Cry_Keramon_x
	cry_reverse Cry_Kodokgumon
.endif @ P_FAMILY_KERAMON
.if P_FAMILY_KOKABUIMON == TRUE
	cry_reverse Cry_Kokabuimon
	cry_reverse Cry_Ambipom
.endif @ P_FAMILY_KOKABUIMON
.if P_FAMILY_KOKUWAMON == TRUE
	cry_reverse Cry_Kokuwamon
	cry_reverse Cry_Kokuwamon_x
.endif @ P_FAMILY_KOKUWAMON
.if P_FAMILY_KOTEMON == TRUE
	cry_reverse Cry_Kotemon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Yanmega
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_KOTEMON
.if P_FAMILY_KUDAMON == TRUE
	cry_reverse Cry_Kudamon
	cry_reverse Cry_Kudamon_06
.if P_PALDEAN_FORMS == TRUE
	cry_reverse Cry_Clodsire
.endif @ P_PALDEAN_FORMS
.endif @ P_FAMILY_KUDAMON
.if P_FAMILY_LALAMON == TRUE
	cry_reverse Cry_Lalamon
	cry_reverse Cry_Honchkrow
.endif @ P_FAMILY_LALAMON
.if P_FAMILY_LOOGAMON == TRUE
	cry_reverse Cry_Loogamon
	cry_reverse Cry_Mismagius
.endif @ P_FAMILY_LOOGAMON
.if P_FAMILY_LOPMON == TRUE
	cry_reverse Cry_Lopmon
.endif @ P_FAMILY_LOPMON
.if P_FAMILY_LOPMONX == TRUE
.if P_GEN_3_CROSS_EVOS == TRUE
	cry_reverse Cry_Exveemon
.endif @ P_GEN_3_CROSS_EVOS
	cry_reverse Cry_Lopmonx
.endif @ P_FAMILY_LOPMONX
.if P_FAMILY_LUCEMON == TRUE
	cry_reverse Cry_Lucemon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Farigiraf
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_LUCEMON
.if P_FAMILY_LUDOMON == TRUE
	cry_reverse Cry_Ludomon
	cry_reverse Cry_Lunamon
.endif @ P_FAMILY_LUDOMON
.if P_FAMILY_LUXMON == TRUE
	cry_reverse Cry_Luxmon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Dudunsparce
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_LUXMON
.if P_FAMILY_METABEE == TRUE
	cry_reverse Cry_Metabee
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Gliscor
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_METABEE
.if P_FAMILY_MODBETAMON == TRUE
	cry_reverse Cry_Modbetamon
	cry_reverse Cry_Monitamon
.endif @ P_FAMILY_MODBETAMON
.if P_FAMILY_MONMON == TRUE
	cry_reverse Cry_Monmon
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Overqwil
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_MONMON
.if P_FAMILY_MORPHOMON == TRUE
	cry_reverse Cry_Morphomon
.endif @ P_FAMILY_MORPHOMON
.if P_FAMILY_MUCHOMON == TRUE
	cry_reverse Cry_Muchomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_MuchomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_MUCHOMON
.if P_FAMILY_MUSHROOMON == TRUE
	cry_reverse Cry_Mushroomon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Weavile
.endif @ P_GEN_4_CROSS_EVOS
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Sneasler
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_MUSHROOMON
.if P_FAMILY_NEEMON == TRUE
	cry_reverse Cry_Neemon
	cry_reverse Cry_Otamamon
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Ursaluna
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_NEEMON
.if P_FAMILY_OTAMAMON_RED == TRUE
	cry_reverse Cry_Otamamon_red
	cry_reverse Cry_Otamamon_x
.endif @ P_FAMILY_OTAMAMON_RED
.if P_FAMILY_PALMON == TRUE
	cry_reverse Cry_Palmon
	cry_reverse Cry_Palmon_x
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Mamoswine
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_PALMON
.if P_FAMILY_PATAMON == TRUE
	cry_reverse Cry_Patamon
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Cursola
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_PATAMON
.if P_FAMILY_PAWNMON_BLACK == TRUE
	cry_reverse Cry_Pawnmon_black
	cry_reverse Cry_Pawnmon_white
.endif @ P_FAMILY_PAWNMON_BLACK
.if P_FAMILY_PENGUINMON == TRUE
	cry_reverse Cry_Penguinmon
.endif @ P_FAMILY_PENGUINMON
.if P_FAMILY_PETITMAMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Mantyke
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Petitmamon
.endif @ P_FAMILY_PETITMAMON
.if P_FAMILY_PHASCOMON == TRUE
	cry_reverse Cry_Phascomon
.endif @ P_FAMILY_PHASCOMON
.if P_FAMILY_PILLOMON == TRUE
	cry_reverse Cry_Pillomon
	cry_reverse Cry_Pomumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_PomumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_PILLOMON
.if P_FAMILY_PULSEMON == TRUE
	cry_reverse Cry_Pulsemon
	cry_reverse Cry_Renamon
.endif @ P_FAMILY_PULSEMON
.if P_FAMILY_ROKUSHO == TRUE
	cry_reverse Cry_Rokusho
.if P_GEN_8_CROSS_EVOS == TRUE
	cry_reverse Cry_Wyrdeer
.endif @ P_GEN_8_CROSS_EVOS
.endif @ P_FAMILY_ROKUSHO
.if P_FAMILY_RYUDAMON == TRUE
	cry_reverse Cry_Ryudamon
.endif @ P_FAMILY_RYUDAMON
.if P_FAMILY_SHAMANMON == TRUE
	cry_reverse Cry_Shamanmon
.endif @ P_FAMILY_SHAMANMON
.if P_FAMILY_YUKIAGUMON == TRUE
	cry_reverse Cry_Yukiagumon
.endif @ P_FAMILY_YUKIAGUMON
.if P_FAMILY_YUKIAGUMON_06 == TRUE
	cry_reverse Cry_Yukiagumon_06
.endif @ P_FAMILY_YUKIAGUMON_06
.if P_FAMILY_ICEGOBIMON == TRUE
	cry_reverse Cry_Icegobimon
.endif @ P_FAMILY_ICEGOBIMON
.if P_FAMILY_SOLARMON == TRUE
	cry_reverse Cry_Solarmon
	cry_reverse Cry_Sounbrdmon
	cry_reverse Cry_Spadamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SpadamonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SOLARMON
.if P_FAMILY_SPARROWMON == TRUE
	cry_reverse Cry_Sparrowmon
.endif @ P_FAMILY_SPARROWMON
.if P_FAMILY_STARMON_2010 == TRUE
	cry_reverse Cry_Starmon_2010
.endif @ P_FAMILY_STARMON_2010
.if P_FAMILY_STRABIMON == TRUE
	cry_reverse Cry_Strabimon
.endif @ P_FAMILY_STRABIMON
.if P_FAMILY_SUNARZAMON == TRUE
	cry_reverse Cry_Sunarzamon
	cry_reverse Cry_Swimmon
	cry_reverse Cry_Syakomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_SyakomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SUNARZAMON
.if P_FAMILY_SYAKOMON_X == TRUE
	cry_reverse Cry_Syakomon_x
	cry_reverse Cry_Tapirmon
	cry_reverse Cry_Tentomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_TentomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SYAKOMON_X
.if P_FAMILY_TERRIERMON == TRUE
	cry_reverse Cry_Terriermon
	cry_reverse Cry_Terriermon_assistant
	cry_reverse Cry_Terriermon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Terriermon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_TERRIERMON
.if P_FAMILY_TINKERMON == TRUE
	cry_reverse Cry_Tinkermon
	cry_reverse Cry_Tinpet
.endif @ P_FAMILY_TINKERMON
.if P_FAMILY_TOYAGUMON == TRUE
	cry_reverse Cry_Toyagumon
	cry_reverse Cry_Tsukaimon
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Obstagoon
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_TOYAGUMON
.if P_FAMILY_VEEMON == TRUE
	cry_reverse Cry_Veemon
	cry_reverse Cry_Vemmon
	cry_reverse Cry_Vorvomon
	cry_reverse Cry_Wormmon
	cry_reverse Cry_Zenimon
.endif @ P_FAMILY_VEEMON
.if P_FAMILY_ZUBAMON == TRUE
	cry_reverse Cry_Zubamon
	cry_reverse Cry_Aegiomon
	cry_reverse Cry_Agunimon
.endif @ P_FAMILY_ZUBAMON
.if P_FAMILY_AIRDRAMON == TRUE
	cry_reverse Cry_Airdramon
	cry_reverse Cry_Akatorimon
	cry_reverse Cry_Allomon
.endif @ P_FAMILY_AIRDRAMON
.if P_FAMILY_ALLOMON_X == TRUE
	cry_reverse Cry_Allomon_x
	cry_reverse Cry_Angelamon
.endif @ P_FAMILY_ALLOMON_X
.if P_FAMILY_ANGEMON == TRUE
	cry_reverse Cry_Angemon
	cry_reverse Cry_Ankylomon
.endif @ P_FAMILY_ANGEMON
.if P_FAMILY_APEMON == TRUE
	cry_reverse Cry_Apemon
	cry_reverse Cry_Aquilamon
	cry_reverse Cry_Arcadiamon_champion
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Arcadiamon_championMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Gallade
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GalladeMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_APEMON
.if P_FAMILY_ARCHELOMON == TRUE
	cry_reverse Cry_Archelomon
	cry_reverse Cry_Argomon_champion
.endif @ P_FAMILY_ARCHELOMON
.if P_FAMILY_ARESDRAMON == TRUE
	cry_reverse Cry_Aresdramon
	cry_reverse Cry_Atamademon
.endif @ P_FAMILY_ARESDRAMON
.if P_FAMILY_AURUMON == TRUE
	cry_reverse Cry_Aurumon
	cry_reverse Cry_Axemon
	cry_reverse Cry_Baboonmon
.endif @ P_FAMILY_AURUMON
.if P_FAMILY_BAKEMON == TRUE
	cry_reverse Cry_Bakemon
	cry_reverse Cry_Balistamon
	cry_reverse Cry_Baluchimon
.endif @ P_FAMILY_BAKEMON
.if P_FAMILY_BAOHUCKMON == TRUE
	cry_reverse Cry_Baohuckmon
	cry_reverse Cry_Baromon
	cry_reverse Cry_Trailmon_battle_armament
.endif @ P_FAMILY_BAOHUCKMON
.if P_FAMILY_BETGAMAMON == TRUE
	cry_reverse Cry_Betgamamon
	cry_reverse Cry_Bioquetmon
.endif @ P_FAMILY_BETGAMAMON
.if P_FAMILY_BIOTHUNMON == TRUE
	cry_reverse Cry_Biothunmon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Probopass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BIOTHUNMON
.if P_FAMILY_BIRDRAMON == TRUE
	cry_reverse Cry_Birdramon
	cry_reverse Cry_Blgaogamon
.endif @ P_FAMILY_BIRDRAMON
.if P_FAMILY_BLGARGOMON == TRUE
	cry_reverse Cry_Blgargomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlgargomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLGARGOMON
.if P_FAMILY_BLGARURMON == TRUE
	cry_reverse Cry_Blgarurmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlgarurmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLGARURMON
.if P_FAMILY_BLKGATOMON == TRUE
	cry_reverse Cry_Blkgatomon
	cry_reverse Cry_Blkgatomon_uver
	cry_reverse Cry_Blgrowlmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlgrowlmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BLKGATOMON
.if P_FAMILY_SAWKUWAMON == TRUE
	cry_reverse Cry_Sawkuwamon
	cry_reverse Cry_Blimpmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BlimpmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SAWKUWAMON
.if P_FAMILY_BOARMON == TRUE
	cry_reverse Cry_Boarmon
	cry_reverse Cry_Bomnanimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_BomnanimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_BOARMON
.if P_FAMILY_BOOGIEMON == TRUE
	cry_reverse Cry_Boogiemon
.endif @ P_FAMILY_BOOGIEMON
.if P_FAMILY_BUCCHIEMON_RED == TRUE
	cry_reverse Cry_Bucchiemon_red
.endif @ P_FAMILY_BUCCHIEMON_RED
.if P_FAMILY_BUCCHIEMON_GREEN_BULKMON == TRUE
	cry_reverse Cry_Bucchiemon_green
	cry_reverse Cry_Bulkmon
.endif @ P_FAMILY_BUCCHIEMON_GREEN_BULKMON
.if P_FAMILY_BULLMON == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Budew
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Bullmon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Roserade
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_BULLMON
.if P_FAMILY_BURAIMON == TRUE
	cry_reverse Cry_Buraimon
	cry_reverse Cry_Burgermon_champion
.endif @ P_FAMILY_BURAIMON
.if P_FAMILY_CHOUMON == TRUE
	cry_reverse Cry_Choumon
	cry_reverse Cry_Centarumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CentarumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHOUMON
.if P_FAMILY_CHAMBLEMON == TRUE
	cry_reverse Cry_Chamblemon
	cry_reverse Cry_Chamelemon
.endif @ P_FAMILY_CHAMBLEMON
.if P_FAMILY_CHRYSALMON == TRUE
	cry_reverse Cry_Chrysalmon
	cry_reverse Cry_Citramon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_CitramonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_CHRYSALMON
.if P_FAMILY_CLOCKMON == TRUE
	cry_reverse Cry_Clockmon
.endif @ P_FAMILY_CLOCKMON
.if P_FAMILY_CLOCKMON_FUSION == TRUE
	cry_reverse Cry_Clockmon_fusion
	cry_reverse Cry_Coelamon
.endif @ P_FAMILY_CLOCKMON_FUSION
.if P_FAMILY_COREDRAMON_BLUE == TRUE
	cry_reverse Cry_Coredramon_blue
.endif @ P_FAMILY_COREDRAMON_BLUE
.if P_FAMILY_COREDRAMON_GREEN == TRUE
	cry_reverse Cry_Coredramon_green
	cry_reverse Cry_Cyclonemon
	cry_reverse Cry_Damemon_fusion
.endif @ P_FAMILY_COREDRAMON_GREEN
.if P_FAMILY_DARCMON == TRUE
	cry_reverse Cry_Darcmon
	cry_reverse Cry_Trailmon_dark
.endif @ P_FAMILY_DARCMON
.if P_FAMILY_DARLIZAMON == TRUE
	cry_reverse Cry_Darlizamon
	cry_reverse Cry_Darmailmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_DarmailmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DARLIZAMON
.if P_FAMILY_DARKTYRMON == TRUE
	cry_reverse Cry_Darktyrmon
.endif @ P_FAMILY_DARKTYRMON
.if P_FAMILY_DARKTYRMON_X == TRUE
	cry_reverse Cry_Darktyrmon_x
.endif @ P_FAMILY_DARKTYRMON_X
.if P_FAMILY_DECKDRAMON == TRUE
	cry_reverse Cry_Deckdramon
.endif @ P_FAMILY_DECKDRAMON
.if P_FAMILY_DELTAMON == TRUE
	cry_reverse Cry_Deltamon
.endif @ P_FAMILY_DELTAMON
.if P_FAMILY_DEPTHMON == TRUE
	cry_reverse Cry_Depthmon
	cry_reverse Cry_Deputymon
.endif @ P_FAMILY_DEPTHMON
.if P_FAMILY_DEVIDRAMON == TRUE
	cry_reverse Cry_Devidramon
	cry_reverse Cry_Devimon
.endif @ P_FAMILY_DEVIDRAMON
.if P_FAMILY_DEXDORUMON == TRUE
	cry_reverse Cry_Dexdorumon
	cry_reverse Cry_Diatrymon
.endif @ P_FAMILY_DEXDORUMON
.if P_FAMILY_DIGMON == TRUE
	cry_reverse Cry_Digmon
	cry_reverse Cry_Dinohyumon
.endif @ P_FAMILY_DIGMON
.if P_FAMILY_DOBERMON == TRUE
	cry_reverse Cry_Dobermon
	cry_reverse Cry_Dobermon_x
.endif @ P_FAMILY_DOBERMON
.if P_FAMILY_DOGGYMON == TRUE
	cry_reverse Cry_Doggymon
	cry_reverse Cry_Dokugumon
.endif @ P_FAMILY_DOGGYMON
.if P_FAMILY_DOLPHMON == TRUE
	cry_reverse Cry_Dolphmon
.endif @ P_FAMILY_DOLPHMON
.if P_FAMILY_DONSHOUMON == TRUE
	cry_reverse Cry_Donshoumon
.endif @ P_FAMILY_DONSHOUMON
.if P_FAMILY_DORUGAMON == TRUE
	cry_reverse Cry_Dorugamon
	cry_reverse Cry_Dorulumon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_DorulumonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DORUGAMON
.if P_FAMILY_DRIMOGEMON == TRUE
	cry_reverse Cry_Drimogemon
	cry_reverse Cry_Ebidramon
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Dusknoir
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_DRIMOGEMON
.if P_FAMILY_ELEPHANMON == TRUE
	cry_reverse Cry_Elephanmon
.endif @ P_FAMILY_ELEPHANMON
.if P_FAMILY_EOSMON_CHAMPION == TRUE
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Chingling
.endif @ P_GEN_4_CROSS_EVOS
	cry_reverse Cry_Eosmon_champion
.endif @ P_FAMILY_EOSMON_CHAMPION
.if P_FAMILY_EXERMON == TRUE
	cry_reverse Cry_Exermon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_ExermonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_EXERMON
.if P_FAMILY_EXVEEMON_VIRUS == TRUE
	cry_reverse Cry_Exveemon_virus
	cry_reverse Cry_Eyesmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_EyesmonMega
.endif @ P_MEGA_EVOLUTIONS
.if P_GEN_4_CROSS_EVOS == TRUE
	cry_reverse Cry_Froslass
.endif @ P_GEN_4_CROSS_EVOS
.endif @ P_FAMILY_EXVEEMON_VIRUS
.if P_FAMILY_EYESMON_SCATTERMODE == TRUE
	cry_reverse Cry_Eyesmon_scattermode
	cry_reverse Cry_Fangmon
	cry_reverse Cry_Filmon
.endif @ P_FAMILY_EYESMON_SCATTERMODE
.if P_FAMILY_FIRAMON == TRUE
	cry_reverse Cry_Firamon
	cry_reverse Cry_Fladramon
	cry_reverse Cry_Flawizamon
.endif @ P_FAMILY_FIRAMON
.if P_FAMILY_FLARIZAMON == TRUE
	cry_reverse Cry_Flarizamon
.endif @ P_FAMILY_FLARIZAMON
.if P_FAMILY_FLYBEEMON == TRUE
	cry_reverse Cry_Flybeemon
.endif @ P_FAMILY_FLYBEEMON
.if P_FAMILY_FLYMON == TRUE
	cry_reverse Cry_Flymon
	cry_reverse Cry_Frigimon
	cry_reverse Cry_Frogmon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_FrogmonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FLYMON
.if P_FAMILY_FUGAMON == TRUE
	cry_reverse Cry_Fugamon
	cry_reverse Cry_Ganemon
	cry_reverse Cry_Gaogamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GaogamonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_FUGAMON
.if P_FAMILY_GARGOMON == TRUE
	cry_reverse Cry_Gargomon
.endif @ P_FAMILY_GARGOMON
.if P_FAMILY_GARGOYLMON == TRUE
	cry_reverse Cry_Gargoylmon
.endif @ P_FAMILY_GARGOYLMON
.if P_FAMILY_GARURUMON == TRUE
	cry_reverse Cry_Garurumon
.endif @ P_FAMILY_GARURUMON
.if P_FAMILY_GARURUMON_X == TRUE
	cry_reverse Cry_Garurumon_x
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Garurumon_xMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GARURUMON_X
.if P_FAMILY_GATOMON == TRUE
	cry_reverse Cry_Gatomon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GatomonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GATOMON
.if P_FAMILY_GATOMON_X == TRUE
	cry_reverse Cry_Gatomon_x
.if P_PRIMAL_REVERSIONS == TRUE
	cry_reverse Cry_Gatomon_xPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GATOMON_X
.if P_FAMILY_GEKOMON == TRUE
	cry_reverse Cry_Gekomon
.if P_PRIMAL_REVERSIONS == TRUE
	cry_reverse Cry_GekomonPrimal
.endif @ P_PRIMAL_REVERSIONS
.endif @ P_FAMILY_GEKOMON
.if P_FAMILY_GEOGREYMON == TRUE
	cry_reverse Cry_Geogreymon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GeogreymonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GEOGREYMON
.if P_FAMILY_GEREMON == TRUE
	cry_reverse Cry_Geremon
.endif @ P_FAMILY_GEREMON
.if P_FAMILY_GESOMON == TRUE
	cry_reverse Cry_Gesomon
.endif @ P_FAMILY_GESOMON
.if P_FAMILY_DEATHMON_CMON_DIGIMON == TRUE
	cry_reverse Cry_Deathmon_cmon_digimon
	cry_reverse Cry_Greymon
	cry_reverse Cry_Kabuterimon
.endif @ P_FAMILY_DEATHMON_CMON_DIGIMON
.if P_FAMILY_MERAMON == TRUE
	cry_reverse Cry_Meramon
	cry_reverse Cry_Numemon
	cry_reverse Cry_Seadramon
.endif @ P_FAMILY_MERAMON
.if P_FAMILY_TYRANNOMON == TRUE
	cry_reverse Cry_Tyrannomon
	cry_reverse Cry_Vegiemon
	cry_reverse Cry_Whamon
.endif @ P_FAMILY_TYRANNOMON
.if P_FAMILY_KOKATORIMON == TRUE
	cry_reverse Cry_Kokatorimon
	cry_reverse Cry_Vilemon
	cry_reverse Cry_Roachmon
.endif @ P_FAMILY_KOKATORIMON
.if P_FAMILY_GORILLAMON == TRUE
	cry_reverse Cry_Gorillamon
	cry_reverse Cry_Ikkakumon
.endif @ P_FAMILY_GORILLAMON
.if P_FAMILY_KUWAGAMON == TRUE
	cry_reverse Cry_Kuwagamon
	cry_reverse Cry_Leomon
.endif @ P_FAMILY_KUWAGAMON
.if P_FAMILY_SHADRAMON == TRUE
	cry_reverse Cry_Shadramon
	cry_reverse Cry_Raidramon
	cry_reverse Cry_Togemon
.endif @ P_FAMILY_SHADRAMON
.if P_FAMILY_GROWLMON == TRUE
	cry_reverse Cry_Growlmon
	cry_reverse Cry_Stingmon
.endif @ P_FAMILY_GROWLMON
.if P_FAMILY_TUSKMON == TRUE
	cry_reverse Cry_Tuskmon
	cry_reverse Cry_Monochromon
.endif @ P_FAMILY_TUSKMON
.if P_FAMILY_MEKANORIMON == TRUE
	cry_reverse Cry_Burmy
	cry_reverse Cry_Wormadam
	cry_reverse Cry_Mothim
.endif @ P_FAMILY_MEKANORIMON
.if P_FAMILY_TESLAJELLYMON == TRUE
	cry_reverse Cry_Teslajellymon
	cry_reverse Cry_Raremon
.endif @ P_FAMILY_TESLAJELLYMON
.if P_FAMILY_SUKAMON == TRUE
	cry_reverse Cry_Sukamon
.endif @ P_FAMILY_SUKAMON
.if P_FAMILY_SHELLMON == TRUE
	cry_reverse Cry_Shellmon
	cry_reverse Cry_Starmon
.endif @ P_FAMILY_SHELLMON
.if P_FAMILY_TORTOMON == TRUE
	cry_reverse Cry_Tortomon
	cry_reverse Cry_Cherrim
.endif @ P_FAMILY_TORTOMON
.if P_FAMILY_SHELLOS == TRUE
	cry_reverse Cry_Shellos
	cry_reverse Cry_Gastrodon
.endif @ P_FAMILY_SHELLOS
.if P_FAMILY_GUARDROMON == TRUE
	cry_reverse Cry_Guardromon
	cry_reverse Cry_Honeybeemon
.endif @ P_FAMILY_GUARDROMON
.if P_FAMILY_HYOGAMON == TRUE
	cry_reverse Cry_Hyogamon
	cry_reverse Cry_Icedevimon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_IcedevimonMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_HYOGAMON
.if P_FAMILY_ICEMON == TRUE
	cry_reverse Cry_Icemon
	cry_reverse Cry_Ninjamon
.endif @ P_FAMILY_ICEMON
.if P_FAMILY_JUNGLEMOJYAMON == TRUE
	cry_reverse Cry_Junglemojyamon
	cry_reverse Cry_Shellnumemon
.endif @ P_FAMILY_JUNGLEMOJYAMON
.if P_FAMILY_BRONZOR == TRUE
	cry_reverse Cry_Bronzor
	cry_reverse Cry_Bronzong
.endif @ P_FAMILY_BRONZOR
.if P_FAMILY_CHATOT == TRUE
	cry_reverse Cry_Chatot
.endif @ P_FAMILY_CHATOT
.if P_FAMILY_SPIRITOMB == TRUE
	cry_reverse Cry_Spiritomb
.endif @ P_FAMILY_SPIRITOMB
.if P_FAMILY_GIBLE == TRUE
	cry_reverse Cry_Gible
	cry_reverse Cry_Gabite
	cry_reverse Cry_Garchomp
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_GarchompMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_GIBLE
.if P_FAMILY_RIOLU == TRUE
	cry_reverse Cry_Riolu
	cry_reverse Cry_Lucario
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_LucarioMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_RIOLU
.if P_FAMILY_HIPPOPOTAS == TRUE
	cry_reverse Cry_Hippopotas
	cry_reverse Cry_Hippowdon
.endif @ P_FAMILY_HIPPOPOTAS
.if P_FAMILY_SKORUPI == TRUE
	cry_reverse Cry_Skorupi
	cry_reverse Cry_Drapion
.endif @ P_FAMILY_SKORUPI
.if P_FAMILY_CROAGUNK == TRUE
	cry_reverse Cry_Croagunk
	cry_reverse Cry_Toxicroak
.endif @ P_FAMILY_CROAGUNK
.if P_FAMILY_CARNIVINE == TRUE
	cry_reverse Cry_Carnivine
.endif @ P_FAMILY_CARNIVINE
.if P_FAMILY_FINNEON == TRUE
	cry_reverse Cry_Finneon
	cry_reverse Cry_Lumineon
.endif @ P_FAMILY_FINNEON
.if P_FAMILY_SNOVER == TRUE
	cry_reverse Cry_Snover
	cry_reverse Cry_Abomasnow
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_AbomasnowMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_SNOVER
.if P_FAMILY_ROTOM == TRUE
	cry_reverse Cry_Rotom
.endif @ P_FAMILY_ROTOM
.if P_FAMILY_UXIE == TRUE
	cry_reverse Cry_Uxie
.endif @ P_FAMILY_UXIE
.if P_FAMILY_MESPRIT == TRUE
	cry_reverse Cry_Mesprit
.endif @ P_FAMILY_MESPRIT
.if P_FAMILY_AZELF == TRUE
	cry_reverse Cry_Azelf
.endif @ P_FAMILY_AZELF
.if P_FAMILY_DIALGA == TRUE
	cry_reverse Cry_Dialga
.endif @ P_FAMILY_DIALGA
.if P_FAMILY_PALKIA == TRUE
	cry_reverse Cry_Palkia
.endif @ P_FAMILY_PALKIA
.if P_FAMILY_HEATRAN == TRUE
	cry_reverse Cry_Heatran
.endif @ P_FAMILY_HEATRAN
.if P_FAMILY_REGIGIGAS == TRUE
	cry_reverse Cry_Regigigas
.endif @ P_FAMILY_REGIGIGAS
.if P_FAMILY_GIRATINA == TRUE
	cry_reverse Cry_Giratina
.endif @ P_FAMILY_GIRATINA
.if P_FAMILY_CRESSELIA == TRUE
	cry_reverse Cry_Cresselia
.endif @ P_FAMILY_CRESSELIA
.if P_FAMILY_MANAPHY == TRUE
	cry_reverse Cry_Phione
	cry_reverse Cry_Manaphy
.endif @ P_FAMILY_MANAPHY
.if P_FAMILY_DARKRAI == TRUE
	cry_reverse Cry_Darkrai
.endif @ P_FAMILY_DARKRAI
.if P_FAMILY_SHAYMIN == TRUE
	cry_reverse Cry_ShayminLand
	cry_reverse Cry_ShayminSky
.endif @ P_FAMILY_SHAYMIN
.if P_FAMILY_ARCEUS == TRUE
	cry_reverse Cry_Arceus
.endif @ P_FAMILY_ARCEUS
.if P_FAMILY_D_AIRDRAMON == TRUE
	cry_reverse Cry_D_airdramon
.endif @ P_FAMILY_D_AIRDRAMON
.if P_FAMILY_D_DEVIMON == TRUE
	cry_reverse Cry_D_devimon
	cry_reverse Cry_D_meramon_cmon_digimon
	cry_reverse Cry_D_metalgreymon
.endif @ P_FAMILY_D_DEVIMON
.if P_FAMILY_D_TYRANNOMON == TRUE
	cry_reverse Cry_D_tyrannomon
	cry_reverse Cry_Mamemon
	cry_reverse Cry_Metalgreymon_virus
.endif @ P_FAMILY_D_TYRANNOMON
.if P_FAMILY_METALMAMEMON == TRUE
	cry_reverse Cry_Metalmamemon
	cry_reverse Cry_Monzaemon
	cry_reverse Cry_Skullgreymon
.endif @ P_FAMILY_METALMAMEMON
.if P_FAMILY_ANDROMON == TRUE
	cry_reverse Cry_Andromon
	cry_reverse Cry_Angewomon
.endif @ P_FAMILY_ANDROMON
.if P_FAMILY_SCORPIOMON == TRUE
	cry_reverse Cry_Scorpiomon
	cry_reverse Cry_Megakabuterimon_blue
	cry_reverse Cry_Dragomon
.endif @ P_FAMILY_SCORPIOMON
.if P_FAMILY_DIGITAMAMON == TRUE
	cry_reverse Cry_Digitamamon
	cry_reverse Cry_Etemon
.endif @ P_FAMILY_DIGITAMAMON
.if P_FAMILY_EXTYRANNOMON == TRUE
	cry_reverse Cry_Extyrannomon
	cry_reverse Cry_Giromon
.endif @ P_FAMILY_EXTYRANNOMON
.if P_FAMILY_MAGNAANGEMON == TRUE
	cry_reverse Cry_Magnaangemon
	cry_reverse Cry_Magnaangemon_priestmode
.endif @ P_FAMILY_MAGNAANGEMON
.if P_FAMILY_JAGAMON == TRUE
	cry_reverse Cry_Jagamon
	cry_reverse Cry_Ladydevimon
.endif @ P_FAMILY_JAGAMON
.if P_FAMILY_MAMMOTHMON == TRUE
	cry_reverse Cry_Mammothmon
	cry_reverse Cry_Metalgreymon
.endif @ P_FAMILY_MAMMOTHMON
.if P_FAMILY_WEREGARURUMON == TRUE
	cry_reverse Cry_Weregarurumon
	cry_reverse Cry_Dinobeemon
	cry_reverse Cry_Paildramon
.endif @ P_FAMILY_WEREGARURUMON
.if P_FAMILY_WARGROWLMON == TRUE
	cry_reverse Cry_Wargrowlmon
	cry_reverse Cry_Lillymon
.endif @ P_FAMILY_WARGROWLMON
.if P_FAMILY_MASTERTYRANNOMON == TRUE
	cry_reverse Cry_Mastertyrannomon
	cry_reverse Cry_Triceramon
	cry_reverse Cry_Arukenimon
.endif @ P_FAMILY_MASTERTYRANNOMON
.if P_FAMILY_MARINEDEVIMON == TRUE
	cry_reverse Cry_Marinedevimon
	cry_reverse Cry_Megaseadramon
.endif @ P_FAMILY_MARINEDEVIMON
.if P_FAMILY_MEGADRAMON == TRUE
	cry_reverse Cry_Megadramon
	cry_reverse Cry_Metaltyrannomon
.endif @ P_FAMILY_MEGADRAMON
.if P_FAMILY_DATAMON == TRUE
	cry_reverse Cry_Datamon
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_Okuwamon
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DATAMON
.if P_FAMILY_PUMPKINMON == TRUE
	cry_reverse Cry_Pumpkinmon
	cry_reverse Cry_Piximon
	cry_reverse Cry_Shogungekomon
.endif @ P_FAMILY_PUMPKINMON
.if P_FAMILY_ZUDOMON == TRUE
	cry_reverse Cry_Zudomon
	cry_reverse Cry_Aeroveedramon
	cry_reverse Cry_Asuramon
.endif @ P_FAMILY_ZUDOMON
.if P_FAMILY_MEGAKABUTERIMON_RED == TRUE
	cry_reverse Cry_Megakabuterimon_red
.endif @ P_FAMILY_MEGAKABUTERIMON_RED
.if P_FAMILY_BIGMAMEMON == TRUE
	cry_reverse Cry_Bigmamemon
.endif @ P_FAMILY_BIGMAMEMON
.if P_FAMILY_TINMON == TRUE
	cry_reverse Cry_Tinmon
	cry_reverse Cry_Blossomon
	cry_reverse Cry_Bluemeramon
.endif @ P_FAMILY_TINMON
.if P_FAMILY_BRACHIOMON == TRUE
	cry_reverse Cry_Brachiomon
	cry_reverse Cry_Kimeramon
	cry_reverse Cry_Cyberdramon
.endif @ P_FAMILY_BRACHIOMON
.if P_FAMILY_SKULLMERAMON == TRUE
	cry_reverse Cry_Skullmeramon
	cry_reverse Cry_Deramon
.endif @ P_FAMILY_SKULLMERAMON
.if P_FAMILY_PHANTOMON == TRUE
	cry_reverse Cry_Phantomon
	cry_reverse Cry_Garudamon
.endif @ P_FAMILY_PHANTOMON
.if P_FAMILY_GIGADRAMON == TRUE
	cry_reverse Cry_Gigadramon
.if P_HISUIAN_FORMS == TRUE
	cry_reverse Cry_Basculegion
.endif @ P_HISUIAN_FORMS
.endif @ P_FAMILY_GIGADRAMON
.if P_FAMILY_KINGSUKAMON == TRUE
	cry_reverse Cry_Kingsukamon
	cry_reverse Cry_Divermon
	cry_reverse Cry_Meteormon
.endif @ P_FAMILY_KINGSUKAMON
.if P_FAMILY_CHERRYMON == TRUE
	cry_reverse Cry_Cherrymon
	cry_reverse Cry_Darmanitan
.endif @ P_FAMILY_CHERRYMON
.if P_FAMILY_MARACTUS == TRUE
	cry_reverse Cry_Maractus
.endif @ P_FAMILY_MARACTUS
.if P_FAMILY_DWEBBLE == TRUE
	cry_reverse Cry_Dwebble
	cry_reverse Cry_Crustle
.endif @ P_FAMILY_DWEBBLE
.if P_FAMILY_SCRAGGY == TRUE
	cry_reverse Cry_Scraggy
	cry_reverse Cry_Scrafty
.endif @ P_FAMILY_SCRAGGY
.if P_FAMILY_SIGILYPH == TRUE
	cry_reverse Cry_Sigilyph
.endif @ P_FAMILY_SIGILYPH
.if P_FAMILY_YAMASK == TRUE
	cry_reverse Cry_Yamask
	cry_reverse Cry_Cofagrigus
.if P_GALARIAN_FORMS == TRUE
	cry_reverse Cry_Runerigus
.endif @ P_GALARIAN_FORMS
.endif @ P_FAMILY_YAMASK
.if P_FAMILY_TIRTOUGA == TRUE
	cry_reverse Cry_Tirtouga
	cry_reverse Cry_Carracosta
.endif @ P_FAMILY_TIRTOUGA
.if P_FAMILY_ARCHEN == TRUE
	cry_reverse Cry_Archen
	cry_reverse Cry_Archeops
.endif @ P_FAMILY_ARCHEN
.if P_FAMILY_TRUBBISH == TRUE
	cry_reverse Cry_Trubbish
	cry_reverse Cry_Garbodor
.endif @ P_FAMILY_TRUBBISH
.if P_FAMILY_ZORUA == TRUE
	cry_reverse Cry_Zorua
	cry_reverse Cry_Zoroark
.endif @ P_FAMILY_ZORUA
.if P_FAMILY_MINCCINO == TRUE
	cry_reverse Cry_Minccino
	cry_reverse Cry_Cinccino
.endif @ P_FAMILY_MINCCINO
.if P_FAMILY_GOTHITA == TRUE
	cry_reverse Cry_Gothita
	cry_reverse Cry_Gothorita
	cry_reverse Cry_Gothitelle
.endif @ P_FAMILY_GOTHITA
.if P_FAMILY_SOLOSIS == TRUE
	cry_reverse Cry_Solosis
	cry_reverse Cry_Duosion
	cry_reverse Cry_Reuniclus
.endif @ P_FAMILY_SOLOSIS
.if P_FAMILY_DUCKLETT == TRUE
	cry_reverse Cry_Ducklett
	cry_reverse Cry_Swanna
.endif @ P_FAMILY_DUCKLETT
.if P_FAMILY_VANILLITE == TRUE
	cry_reverse Cry_Vanillite
	cry_reverse Cry_Vanillish
	cry_reverse Cry_Vanilluxe
.endif @ P_FAMILY_VANILLITE
.if P_FAMILY_DEERLING == TRUE
	cry_reverse Cry_Deerling
	cry_reverse Cry_Sawsbuck
.endif @ P_FAMILY_DEERLING
.if P_FAMILY_EMOLGA == TRUE
	cry_reverse Cry_Emolga
.endif @ P_FAMILY_EMOLGA
.if P_FAMILY_KARRABLAST == TRUE
	cry_reverse Cry_Karrablast
	cry_reverse Cry_Escavalier
.endif @ P_FAMILY_KARRABLAST
.if P_FAMILY_FOONGUS == TRUE
	cry_reverse Cry_Foongus
	cry_reverse Cry_Amoonguss
.endif @ P_FAMILY_FOONGUS
.if P_FAMILY_FRILLISH == TRUE
	cry_reverse Cry_Frillish
	cry_reverse Cry_Jellicent
.endif @ P_FAMILY_FRILLISH
.if P_FAMILY_ALOMOMOLA == TRUE
	cry_reverse Cry_Alomomola
.endif @ P_FAMILY_ALOMOMOLA
.if P_FAMILY_JOLTIK == TRUE
	cry_reverse Cry_Joltik
	cry_reverse Cry_Galvantula
.endif @ P_FAMILY_JOLTIK
.if P_FAMILY_FERROSEED == TRUE
	cry_reverse Cry_Ferroseed
	cry_reverse Cry_Ferrothorn
.endif @ P_FAMILY_FERROSEED
.if P_FAMILY_KLINK == TRUE
	cry_reverse Cry_Klink
	cry_reverse Cry_Klang
	cry_reverse Cry_Klinklang
.endif @ P_FAMILY_KLINK
.if P_FAMILY_TYNAMO == TRUE
	cry_reverse Cry_Tynamo
	cry_reverse Cry_Eelektrik
	cry_reverse Cry_Eelektross
.endif @ P_FAMILY_TYNAMO
.if P_FAMILY_ELGYEM == TRUE
	cry_reverse Cry_Elgyem
	cry_reverse Cry_Beheeyem
.endif @ P_FAMILY_ELGYEM
.if P_FAMILY_LITWICK == TRUE
	cry_reverse Cry_Litwick
	cry_reverse Cry_Lampent
	cry_reverse Cry_Chandelure
.endif @ P_FAMILY_LITWICK
.if P_FAMILY_AXEW == TRUE
	cry_reverse Cry_Axew
	cry_reverse Cry_Fraxure
	cry_reverse Cry_Haxorus
.endif @ P_FAMILY_AXEW
.if P_FAMILY_CUBCHOO == TRUE
	cry_reverse Cry_Cubchoo
	cry_reverse Cry_Beartic
.endif @ P_FAMILY_CUBCHOO
.if P_FAMILY_CRYOGONAL == TRUE
	cry_reverse Cry_Cryogonal
.endif @ P_FAMILY_CRYOGONAL
.if P_FAMILY_SHELMET == TRUE
	cry_reverse Cry_Shelmet
	cry_reverse Cry_Accelgor
.endif @ P_FAMILY_SHELMET
.if P_FAMILY_STUNFISK == TRUE
	cry_reverse Cry_Stunfisk
.endif @ P_FAMILY_STUNFISK
.if P_FAMILY_MIENFOO == TRUE
	cry_reverse Cry_Mienfoo
	cry_reverse Cry_Mienshao
.endif @ P_FAMILY_MIENFOO
.if P_FAMILY_DRUDDIGON == TRUE
	cry_reverse Cry_Druddigon
.endif @ P_FAMILY_DRUDDIGON
.if P_FAMILY_GOLETT == TRUE
	cry_reverse Cry_Golett
	cry_reverse Cry_Golurk
.endif @ P_FAMILY_GOLETT
.if P_FAMILY_PAWNIARD == TRUE
	cry_reverse Cry_Pawniard
	cry_reverse Cry_Bisharp
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Kingambit
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_PAWNIARD
.if P_FAMILY_BOUFFALANT == TRUE
	cry_reverse Cry_Bouffalant
.endif @ P_FAMILY_BOUFFALANT
.if P_FAMILY_RUFFLET == TRUE
	cry_reverse Cry_Rufflet
	cry_reverse Cry_Braviary
.endif @ P_FAMILY_RUFFLET
.if P_FAMILY_VULLABY == TRUE
	cry_reverse Cry_Vullaby
	cry_reverse Cry_Mandibuzz
.endif @ P_FAMILY_VULLABY
.if P_FAMILY_HEATMOR == TRUE
	cry_reverse Cry_Heatmor
.endif @ P_FAMILY_HEATMOR
.if P_FAMILY_DURANT == TRUE
	cry_reverse Cry_Durant
.endif @ P_FAMILY_DURANT
.if P_FAMILY_DEINO == TRUE
	cry_reverse Cry_Deino
	cry_reverse Cry_Zweilous
	cry_reverse Cry_Hydreigon
.endif @ P_FAMILY_DEINO
.if P_FAMILY_LARVESTA == TRUE
	cry_reverse Cry_Larvesta
	cry_reverse Cry_Volcarona
.endif @ P_FAMILY_LARVESTA
.if P_FAMILY_COBALION == TRUE
	cry_reverse Cry_Cobalion
.endif @ P_FAMILY_COBALION
.if P_FAMILY_TERRAKION == TRUE
	cry_reverse Cry_Terrakion
.endif @ P_FAMILY_TERRAKION
.if P_FAMILY_VIRIZION == TRUE
	cry_reverse Cry_Virizion
.endif @ P_FAMILY_VIRIZION
.if P_FAMILY_TORNADUS == TRUE
	cry_reverse Cry_TornadusIncarnate
	cry_reverse Cry_TornadusTherian
.endif @ P_FAMILY_TORNADUS
.if P_FAMILY_THUNDURUS == TRUE
	cry_reverse Cry_ThundurusIncarnate
	cry_reverse Cry_ThundurusTherian
.endif @ P_FAMILY_THUNDURUS
.if P_FAMILY_RESHIRAM == TRUE
	cry_reverse Cry_Reshiram
.endif @ P_FAMILY_RESHIRAM
.if P_FAMILY_ZEKROM == TRUE
	cry_reverse Cry_Zekrom
.endif @ P_FAMILY_ZEKROM
.if P_FAMILY_LANDORUS == TRUE
	cry_reverse Cry_LandorusIncarnate
	cry_reverse Cry_LandorusTherian
.endif @ P_FAMILY_LANDORUS
.if P_FAMILY_KYUREM == TRUE
	cry_reverse Cry_Kyurem
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_KyuremWhite
	cry_reverse Cry_KyuremBlack
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_KYUREM
.if P_FAMILY_KELDEO == TRUE
	cry_reverse Cry_Keldeo
.endif @ P_FAMILY_KELDEO
.if P_FAMILY_MELOETTA == TRUE
	cry_reverse Cry_Meloetta
.endif @ P_FAMILY_MELOETTA
.if P_FAMILY_GENESECT == TRUE
	cry_reverse Cry_Genesect
.endif @ P_FAMILY_GENESECT
.if P_FAMILY_HERCULESKABUTERIMON == TRUE
	cry_reverse Cry_Herculeskabuterimon
	cry_reverse Cry_Magnadramon
	cry_reverse Cry_Magnamon
.endif @ P_FAMILY_HERCULESKABUTERIMON
.if P_FAMILY_WARGREYMON == TRUE
	cry_reverse Cry_Wargreymon
	cry_reverse Cry_Metalgarurumon
	cry_reverse Cry_Omnimon
.endif @ P_FAMILY_WARGREYMON
.if P_FAMILY_CRESGARURUMON == TRUE
	cry_reverse Cry_Cresgarurumon
	cry_reverse Cry_Blitzgreymon
	cry_reverse Cry_Biosupinomon
.endif @ P_FAMILY_CRESGARURUMON
.if P_FAMILY_ROSEMON == TRUE
	cry_reverse Cry_Rosemon
	cry_reverse Cry_Dinorexmon
.endif @ P_FAMILY_ROSEMON
.if P_FAMILY_DINOMON == TRUE
	cry_reverse Cry_Dinomon
	cry_reverse Cry_Marineangemon
	cry_reverse Cry_Metaletemon
.endif @ P_FAMILY_DINOMON
.if P_FAMILY_METALSEADRAMON == TRUE
	cry_reverse Cry_Metalseadramon
	cry_reverse Cry_Pukumon
	cry_reverse Cry_Saberleomon
.endif @ P_FAMILY_METALSEADRAMON
.if P_FAMILY_APOCALYMON == TRUE
	cry_reverse Cry_Apocalymon
	cry_reverse Cry_Babamon
.endif @ P_FAMILY_APOCALYMON
.if P_FAMILY_FLABEBE == TRUE
	cry_reverse Cry_Flabebe
	cry_reverse Cry_Floette
	cry_reverse Cry_FloetteEternal
	cry_reverse Cry_Florges
.endif @ P_FAMILY_FLABEBE
.if P_FAMILY_BOLTMON == TRUE
	cry_reverse Cry_Boltmon
	cry_reverse Cry_Creepymon
.endif @ P_FAMILY_BOLTMON
.if P_FAMILY_DEVITAMAMON == TRUE
	cry_reverse Cry_Devitamamon
	cry_reverse Cry_Diaboromon
.endif @ P_FAMILY_DEVITAMAMON
.if P_FAMILY_FURFROU == TRUE
	cry_reverse Cry_Furfrou
.endif @ P_FAMILY_FURFROU
.if P_FAMILY_GOLDRAMON == TRUE
	cry_reverse Cry_Goldramon
.endif @ P_FAMILY_GOLDRAMON
.if P_FAMILY_PHOENIXMON == TRUE
	cry_reverse Cry_Phoenixmon
	cry_reverse Cry_Jijimon
	cry_reverse Cry_Aegislash
.endif @ P_FAMILY_PHOENIXMON
.if P_FAMILY_SPRITZEE == TRUE
	cry_reverse Cry_Spritzee
	cry_reverse Cry_Aromatisse
.endif @ P_FAMILY_SPRITZEE
.if P_FAMILY_SWIRLIX == TRUE
	cry_reverse Cry_Swirlix
	cry_reverse Cry_Slurpuff
.endif @ P_FAMILY_SWIRLIX
.if P_FAMILY_INKAY == TRUE
	cry_reverse Cry_Inkay
	cry_reverse Cry_Malamar
.endif @ P_FAMILY_INKAY
.if P_FAMILY_BINACLE == TRUE
	cry_reverse Cry_Binacle
	cry_reverse Cry_Barbaracle
.endif @ P_FAMILY_BINACLE
.if P_FAMILY_SKRELP == TRUE
	cry_reverse Cry_Skrelp
	cry_reverse Cry_Dragalge
.endif @ P_FAMILY_SKRELP
.if P_FAMILY_CLAUNCHER == TRUE
	cry_reverse Cry_Clauncher
	cry_reverse Cry_Clawitzer
.endif @ P_FAMILY_CLAUNCHER
.if P_FAMILY_HELIOPTILE == TRUE
	cry_reverse Cry_Helioptile
	cry_reverse Cry_Heliolisk
.endif @ P_FAMILY_HELIOPTILE
.if P_FAMILY_TYRUNT == TRUE
	cry_reverse Cry_Tyrunt
	cry_reverse Cry_Tyrantrum
.endif @ P_FAMILY_TYRUNT
.if P_FAMILY_AMAURA == TRUE
	cry_reverse Cry_Amaura
	cry_reverse Cry_Aurorus
.endif @ P_FAMILY_AMAURA
.if P_FAMILY_HAWLUCHA == TRUE
	cry_reverse Cry_Hawlucha
.endif @ P_FAMILY_HAWLUCHA
.if P_FAMILY_DEDENNE == TRUE
	cry_reverse Cry_Dedenne
.endif @ P_FAMILY_DEDENNE
.if P_FAMILY_CARBINK == TRUE
	cry_reverse Cry_Carbink
.endif @ P_FAMILY_CARBINK
.if P_FAMILY_GOOMY == TRUE
	cry_reverse Cry_Goomy
	cry_reverse Cry_Sliggoo
	cry_reverse Cry_Goodra
.endif @ P_FAMILY_GOOMY
.if P_FAMILY_KLEFKI == TRUE
	cry_reverse_uncomp Cry_Klefki @ Cannot be heard unless we use cry_reverse_uncomp here.
.endif @ P_FAMILY_KLEFKI
.if P_FAMILY_PHANTUMP == TRUE
	cry_reverse Cry_Phantump
	cry_reverse Cry_Trevenant
.endif @ P_FAMILY_PHANTUMP
.if P_FAMILY_PUMPKABOO == TRUE
	cry_reverse Cry_Pumpkaboo
	cry_reverse Cry_PumpkabooSuper
	cry_reverse Cry_Gourgeist
	cry_reverse Cry_GourgeistSuper
.endif @ P_FAMILY_PUMPKABOO
.if P_FAMILY_BERGMITE == TRUE
	cry_reverse Cry_Bergmite
	cry_reverse Cry_Avalugg
.endif @ P_FAMILY_BERGMITE
.if P_FAMILY_NOIBAT == TRUE
	cry_reverse Cry_Noibat
	cry_reverse Cry_Noivern
.endif @ P_FAMILY_NOIBAT
.if P_FAMILY_XERNEAS == TRUE
	cry_reverse Cry_Xerneas
.endif @ P_FAMILY_XERNEAS
.if P_FAMILY_YVELTAL == TRUE
	cry_reverse Cry_Yveltal
.endif @ P_FAMILY_YVELTAL
.if P_FAMILY_ZYGARDE == TRUE
	cry_reverse Cry_Zygarde50
	cry_reverse Cry_Zygarde10
	cry_reverse Cry_ZygardeComplete
.endif @ P_FAMILY_ZYGARDE
.if P_FAMILY_DIANCIE == TRUE
	cry_reverse Cry_Diancie
.if P_MEGA_EVOLUTIONS == TRUE
	cry_reverse Cry_DiancieMega
.endif @ P_MEGA_EVOLUTIONS
.endif @ P_FAMILY_DIANCIE
.if P_FAMILY_HOOPA == TRUE
	cry_reverse Cry_HoopaConfined
	cry_reverse Cry_HoopaUnbound
.endif @ P_FAMILY_HOOPA
.if P_FAMILY_VOLCANION == TRUE
	cry_reverse Cry_Volcanion
.endif @ P_FAMILY_VOLCANION
.if P_FAMILY_ROWLET == TRUE
	cry_reverse Cry_Rowlet
	cry_reverse Cry_Dartrix
	cry_reverse Cry_Decidueye
.endif @ P_FAMILY_ROWLET
.if P_FAMILY_LITTEN == TRUE
	cry_reverse Cry_Litten
	cry_reverse Cry_Torracat
	cry_reverse Cry_Incineroar
.endif @ P_FAMILY_LITTEN
.if P_FAMILY_POPPLIO == TRUE
	cry_reverse Cry_Popplio
	cry_reverse Cry_Brionne
	cry_reverse Cry_Primarina
.endif @ P_FAMILY_POPPLIO
.if P_FAMILY_PIKIPEK == TRUE
	cry_reverse Cry_Pikipek
	cry_reverse Cry_Trumbeak
	cry_reverse Cry_Toucannon
.endif @ P_FAMILY_PIKIPEK
.if P_FAMILY_YUNGOOS == TRUE
	cry_reverse Cry_Yungoos
	cry_reverse Cry_Gumshoos
.endif @ P_FAMILY_YUNGOOS
.if P_FAMILY_GRUBBIN == TRUE
	cry_reverse Cry_Grubbin
	cry_reverse Cry_Charjabug
	cry_reverse Cry_Vikavolt
.endif @ P_FAMILY_GRUBBIN
.if P_FAMILY_CRABRAWLER == TRUE
	cry_reverse Cry_Crabrawler
	cry_reverse Cry_Crabominable
.endif @ P_FAMILY_CRABRAWLER
.if P_FAMILY_ORICORIO == TRUE
	cry_reverse Cry_OricorioBaile
	cry_reverse_uncomp Cry_OricorioPomPom @ Cannot be heard unless we use cry_reverse_uncomp here.
	cry_reverse Cry_OricorioPau
	cry_reverse Cry_OricorioSensu
.endif @ P_FAMILY_ORICORIO
.if P_FAMILY_CUTIEFLY == TRUE
	cry_reverse Cry_Cutiefly
	cry_reverse Cry_Ribombee
.endif @ P_FAMILY_CUTIEFLY
.if P_FAMILY_ROCKRUFF == TRUE
	cry_reverse Cry_Rockruff
	cry_reverse Cry_LycanrocMidday
	cry_reverse Cry_LycanrocMidnight
	cry_reverse Cry_LycanrocDusk
.endif @ P_FAMILY_ROCKRUFF
.if P_FAMILY_WISHIWASHI == TRUE
	cry_reverse Cry_WishiwashiSolo
	cry_reverse Cry_WishiwashiSchool
.endif @ P_FAMILY_WISHIWASHI
.if P_FAMILY_MAREANIE == TRUE
	cry_reverse Cry_Mareanie
	cry_reverse Cry_Toxapex
.endif @ P_FAMILY_MAREANIE
.if P_FAMILY_MUDBRAY == TRUE
	cry_reverse Cry_Mudbray
	cry_reverse Cry_Mudsdale
.endif @ P_FAMILY_MUDBRAY
.if P_FAMILY_DEWPIDER == TRUE
	cry_reverse Cry_Dewpider
	cry_reverse Cry_Araquanid
.endif @ P_FAMILY_DEWPIDER
.if P_FAMILY_FOMANTIS == TRUE
	cry_reverse Cry_Fomantis
	cry_reverse Cry_Lurantis
.endif @ P_FAMILY_FOMANTIS
.if P_FAMILY_MORELULL == TRUE
	cry_reverse Cry_Morelull
	cry_reverse Cry_Shiinotic
.endif @ P_FAMILY_MORELULL
.if P_FAMILY_SALANDIT == TRUE
	cry_reverse Cry_Salandit
	cry_reverse Cry_Salazzle
.endif @ P_FAMILY_SALANDIT
.if P_FAMILY_STUFFUL == TRUE
	cry_reverse Cry_Stufful
	cry_reverse Cry_Bewear
.endif @ P_FAMILY_STUFFUL
.if P_FAMILY_BOUNSWEET == TRUE
	cry_reverse Cry_Bounsweet
	cry_reverse Cry_Steenee
	cry_reverse Cry_Tsareena
.endif @ P_FAMILY_BOUNSWEET
.if P_FAMILY_COMFEY == TRUE
	cry_reverse Cry_Comfey
.endif @ P_FAMILY_COMFEY
.if P_FAMILY_ORANGURU == TRUE
	cry_reverse Cry_Oranguru
.endif @ P_FAMILY_ORANGURU
.if P_FAMILY_PASSIMIAN == TRUE
	cry_reverse Cry_Passimian
.endif @ P_FAMILY_PASSIMIAN
.if P_FAMILY_WIMPOD == TRUE
	cry_reverse Cry_Wimpod
	cry_reverse Cry_Golisopod
.endif @ P_FAMILY_WIMPOD
.if P_FAMILY_SANDYGAST == TRUE
	cry_reverse Cry_Sandygast
	cry_reverse Cry_Palossand
.endif @ P_FAMILY_SANDYGAST
.if P_FAMILY_PYUKUMUKU == TRUE
	cry_reverse Cry_Pyukumuku
.endif @ P_FAMILY_PYUKUMUKU
.if P_FAMILY_TYPE_NULL == TRUE
	cry_reverse Cry_TypeNull
	cry_reverse Cry_Silvally
.endif @ P_FAMILY_TYPE_NULL
.if P_FAMILY_MINIOR == TRUE
	cry_reverse Cry_Minior
.endif @ P_FAMILY_MINIOR
.if P_FAMILY_KOMALA == TRUE
	cry_reverse Cry_Komala
.endif @ P_FAMILY_KOMALA
.if P_FAMILY_TURTONATOR == TRUE
	cry_reverse Cry_Turtonator
.endif @ P_FAMILY_TURTONATOR
.if P_FAMILY_TOGEDEMARU == TRUE
	cry_reverse Cry_Togedemaru
.endif @ P_FAMILY_TOGEDEMARU
.if P_FAMILY_MIMIKYU == TRUE
	cry_reverse Cry_Mimikyu
.endif @ P_FAMILY_MIMIKYU
.if P_FAMILY_BRUXISH == TRUE
	cry_reverse Cry_Bruxish
.endif @ P_FAMILY_BRUXISH
.if P_FAMILY_DRAMPA == TRUE
	cry_reverse Cry_Drampa
.endif @ P_FAMILY_DRAMPA
.if P_FAMILY_DHELMISE == TRUE
	cry_reverse Cry_Dhelmise
.endif @ P_FAMILY_DHELMISE
.if P_FAMILY_JANGMO_O == TRUE
	cry_reverse Cry_JangmoO
	cry_reverse Cry_HakamoO
	cry_reverse Cry_KommoO
.endif @ P_FAMILY_JANGMO_O
.if P_FAMILY_TAPU_KOKO == TRUE
	cry_reverse Cry_TapuKoko
.endif @ P_FAMILY_TAPU_KOKO
.if P_FAMILY_TAPU_LELE == TRUE
	cry_reverse Cry_TapuLele
.endif @ P_FAMILY_TAPU_LELE
.if P_FAMILY_TAPU_BULU == TRUE
	cry_reverse Cry_TapuBulu
.endif @ P_FAMILY_TAPU_BULU
.if P_FAMILY_TAPU_FINI == TRUE
	cry_reverse Cry_TapuFini
.endif @ P_FAMILY_TAPU_FINI
.if P_FAMILY_COSMOG == TRUE
	cry_reverse Cry_Cosmog
	cry_reverse Cry_Cosmoem
	cry_reverse Cry_Solgaleo
	cry_reverse Cry_Lunala
.endif @ P_FAMILY_COSMOG
.if P_FAMILY_NIHILEGO == TRUE
	cry_reverse Cry_Nihilego
.endif @ P_FAMILY_NIHILEGO
.if P_FAMILY_BUZZWOLE == TRUE
	cry_reverse Cry_Buzzwole
.endif @ P_FAMILY_BUZZWOLE
.if P_FAMILY_PHEROMOSA == TRUE
	cry_reverse Cry_Pheromosa
.endif @ P_FAMILY_PHEROMOSA
.if P_FAMILY_XURKITREE == TRUE
	cry_reverse Cry_Xurkitree
.endif @ P_FAMILY_XURKITREE
.if P_FAMILY_CELESTEELA == TRUE
	cry_reverse Cry_Celesteela
.endif @ P_FAMILY_CELESTEELA
.if P_FAMILY_KARTANA == TRUE
	cry_reverse Cry_Kartana
.endif @ P_FAMILY_KARTANA
.if P_FAMILY_GUZZLORD == TRUE
	cry_reverse Cry_Guzzlord
.endif @ P_FAMILY_GUZZLORD
.if P_FAMILY_NECROZMA == TRUE
	cry_reverse Cry_Necrozma
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_NecrozmaDuskMane
	cry_reverse Cry_NecrozmaDawnWings
.if P_ULTRA_BURST_FORMS == TRUE
	cry_reverse Cry_NecrozmaUltra
.endif @ P_ULTRA_BURST_FORMS
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_NECROZMA
.if P_FAMILY_MAGEARNA == TRUE
	cry_reverse Cry_Magearna
.endif @ P_FAMILY_MAGEARNA
.if P_FAMILY_MARSHADOW == TRUE
	cry_reverse Cry_Marshadow
.endif @ P_FAMILY_MARSHADOW
.if P_FAMILY_POIPOLE == TRUE
	cry_reverse Cry_Poipole
	cry_reverse Cry_Naganadel
.endif @ P_FAMILY_POIPOLE
.if P_FAMILY_STAKATAKA == TRUE
	cry_reverse Cry_Stakataka
.endif @ P_FAMILY_STAKATAKA
.if P_FAMILY_BLACEPHALON == TRUE
	cry_reverse Cry_Blacephalon
.endif @ P_FAMILY_BLACEPHALON
.if P_FAMILY_ZERAORA == TRUE
	cry_reverse Cry_Zeraora
.endif @ P_FAMILY_ZERAORA
.if P_FAMILY_MELTAN == TRUE
	cry_reverse Cry_Meltan
	cry_reverse Cry_Melmetal
.endif @ P_FAMILY_MELTAN
.if P_FAMILY_TOMORIMON == TRUE
	cry_reverse Cry_Tomorimon
	cry_reverse Cry_Onibimon
	cry_reverse Cry_Rillaboom
.endif @ P_FAMILY_TOMORIMON
.if P_FAMILY_SCORBUNNY == TRUE
	cry_reverse Cry_Scorbunny
	cry_reverse Cry_Raboot
	cry_reverse Cry_Cinderace
.endif @ P_FAMILY_SCORBUNNY
.if P_FAMILY_SOBBLE == TRUE
	cry_reverse Cry_Sobble
	cry_reverse Cry_Drizzile
	cry_reverse Cry_Inteleon
.endif @ P_FAMILY_SOBBLE
.if P_FAMILY_SKWOVET == TRUE
	cry_reverse Cry_Skwovet
	cry_reverse Cry_Greedent
.endif @ P_FAMILY_SKWOVET
.if P_FAMILY_ROOKIDEE == TRUE
	cry_reverse Cry_Rookidee
	cry_reverse Cry_Corvisquire
	cry_reverse Cry_Corviknight
.endif @ P_FAMILY_ROOKIDEE
.if P_FAMILY_BLIPBUG == TRUE
	cry_reverse Cry_Blipbug
	cry_reverse Cry_Dottler
	cry_reverse Cry_Orbeetle
.endif @ P_FAMILY_BLIPBUG
.if P_FAMILY_NICKIT == TRUE
	cry_reverse Cry_Nickit
	cry_reverse Cry_Thievul
.endif @ P_FAMILY_NICKIT
.if P_FAMILY_GOSSIFLEUR == TRUE
	cry_reverse Cry_Gossifleur
	cry_reverse Cry_Eldegoss
.endif @ P_FAMILY_GOSSIFLEUR
.if P_FAMILY_WOOLOO == TRUE
	cry_reverse Cry_Wooloo
	cry_reverse Cry_Dubwool
.endif @ P_FAMILY_WOOLOO
.if P_FAMILY_CHEWTLE == TRUE
	cry_reverse Cry_Chewtle
	cry_reverse Cry_Drednaw
.endif @ P_FAMILY_CHEWTLE
.if P_FAMILY_YAMPER == TRUE
	cry_reverse Cry_Yamper
	cry_reverse Cry_Boltund
.endif @ P_FAMILY_YAMPER
.if P_FAMILY_ROLYCOLY == TRUE
	cry_reverse Cry_Rolycoly
	cry_reverse Cry_Carkol
	cry_reverse Cry_Coalossal
.endif @ P_FAMILY_ROLYCOLY
.if P_FAMILY_APPLIN == TRUE
	cry_reverse Cry_Applin
	cry_reverse Cry_Flapple
	cry_reverse Cry_Appletun
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Dipplin
	cry_reverse Cry_Hydrapple
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_APPLIN
.if P_FAMILY_SILICOBRA == TRUE
	cry_reverse Cry_Silicobra
	cry_reverse Cry_Sandaconda
.endif @ P_FAMILY_SILICOBRA
.if P_FAMILY_CRAMORANT == TRUE
	cry_reverse Cry_Cramorant
.endif @ P_FAMILY_CRAMORANT
.if P_FAMILY_ARROKUDA == TRUE
	cry_reverse Cry_Arrokuda
	cry_reverse Cry_Barraskewda
.endif @ P_FAMILY_ARROKUDA
.if P_FAMILY_TOXEL == TRUE
	cry_reverse Cry_Toxel
	cry_reverse Cry_ToxtricityAmped
	cry_reverse Cry_ToxtricityLowKey
.endif @ P_FAMILY_TOXEL
.if P_FAMILY_SIZZLIPEDE == TRUE
	cry_reverse Cry_Sizzlipede
	cry_reverse Cry_Centiskorch
.endif @ P_FAMILY_SIZZLIPEDE
.if P_FAMILY_CLOBBOPUS == TRUE
	cry_reverse Cry_Clobbopus
	cry_reverse Cry_Grapploct
.endif @ P_FAMILY_CLOBBOPUS
.if P_FAMILY_SINISTEA == TRUE
	cry_reverse Cry_Sinistea
	cry_reverse Cry_Polteageist
.endif @ P_FAMILY_SINISTEA
.if P_FAMILY_HATENNA == TRUE
	cry_reverse Cry_Hatenna
	cry_reverse Cry_Hattrem
	cry_reverse Cry_Hatterene
.endif @ P_FAMILY_HATENNA
.if P_FAMILY_IMPIDIMP == TRUE
	cry_reverse Cry_Impidimp
	cry_reverse Cry_Morgrem
	cry_reverse Cry_Grimmsnarl
.endif @ P_FAMILY_IMPIDIMP
.if P_FAMILY_MILCERY == TRUE
	cry_reverse Cry_Milcery
	cry_reverse Cry_Alcremie
.endif @ P_FAMILY_MILCERY
.if P_FAMILY_FALINKS == TRUE
	cry_reverse Cry_Falinks
.endif @ P_FAMILY_FALINKS
.if P_FAMILY_PINCURCHIN == TRUE
	cry_reverse Cry_Pincurchin
.endif @ P_FAMILY_PINCURCHIN
.if P_FAMILY_SNOM == TRUE
	cry_reverse Cry_Snom
	cry_reverse Cry_Frosmoth
.endif @ P_FAMILY_SNOM
.if P_FAMILY_STONJOURNER == TRUE
	cry_reverse Cry_Stonjourner
.endif @ P_FAMILY_STONJOURNER
.if P_FAMILY_EISCUE == TRUE
	cry_reverse Cry_EiscueIce
	cry_reverse Cry_EiscueNoice
.endif @ P_FAMILY_EISCUE
.if P_FAMILY_INDEEDEE == TRUE
	cry_reverse Cry_IndeedeeM
	cry_reverse Cry_IndeedeeF
.endif @ P_FAMILY_INDEEDEE
.if P_FAMILY_MORPEKO == TRUE
	cry_reverse Cry_MorpekoFullBelly
	cry_reverse Cry_MorpekoHangry
.endif @ P_FAMILY_MORPEKO
.if P_FAMILY_CUFANT == TRUE
	cry_reverse Cry_Cufant
	cry_reverse Cry_Copperajah
.endif @ P_FAMILY_CUFANT
.if P_FAMILY_DRACOZOLT == TRUE
	cry_reverse Cry_Dracozolt
.endif @ P_FAMILY_DRACOZOLT
.if P_FAMILY_ARCTOZOLT == TRUE
	cry_reverse Cry_Arctozolt
.endif @ P_FAMILY_ARCTOZOLT
.if P_FAMILY_DRACOVISH == TRUE
	cry_reverse Cry_Dracovish
.endif @ P_FAMILY_DRACOVISH
.if P_FAMILY_ARCTOVISH == TRUE
	cry_reverse Cry_Arctovish
.endif @ P_FAMILY_ARCTOVISH
.if P_FAMILY_DURALUDON == TRUE
	cry_reverse Cry_Duraludon
.if P_GEN_9_CROSS_EVOS == TRUE
	cry_reverse Cry_Archaludon
.endif @ P_GEN_9_CROSS_EVOS
.endif @ P_FAMILY_DURALUDON
.if P_FAMILY_DREEPY == TRUE
	cry_reverse Cry_Dreepy
	cry_reverse Cry_Drakloak
	cry_reverse Cry_Dragapult
.endif @ P_FAMILY_DREEPY
.if P_FAMILY_ZACIAN == TRUE
	cry_reverse Cry_ZacianHero
	cry_reverse Cry_ZacianCrowned
.endif @ P_FAMILY_ZACIAN
.if P_FAMILY_ZAMAZENTA == TRUE
	cry_reverse Cry_ZamazentaHero
	cry_reverse Cry_ZamazentaCrowned
.endif @ P_FAMILY_ZAMAZENTA
.if P_FAMILY_ETERNATUS == TRUE
	cry_reverse Cry_Eternatus
	cry_reverse Cry_EternatusEternamax
.endif @ P_FAMILY_ETERNATUS
.if P_FAMILY_KUBFU == TRUE
	cry_reverse Cry_Kubfu
	cry_reverse Cry_UrshifuSingleStrike
	cry_reverse Cry_UrshifuRapidStrike
.endif @ P_FAMILY_KUBFU
.if P_FAMILY_ZARUDE == TRUE
	cry_reverse Cry_Zarude
.endif @ P_FAMILY_ZARUDE
.if P_FAMILY_REGIELEKI == TRUE
	cry_reverse Cry_Regieleki
.endif @ P_FAMILY_REGIELEKI
.if P_FAMILY_REGIDRAGO == TRUE
	cry_reverse Cry_Regidrago
.endif @ P_FAMILY_REGIDRAGO
.if P_FAMILY_GLASTRIER == TRUE
	cry_reverse Cry_Glastrier
.endif @ P_FAMILY_GLASTRIER
.if P_FAMILY_SPECTRIER == TRUE
	cry_reverse Cry_Spectrier
.endif @ P_FAMILY_SPECTRIER
.if P_FAMILY_CALYREX == TRUE
	cry_reverse Cry_Calyrex
.if P_FUSION_FORMS == TRUE
	cry_reverse Cry_CalyrexIce
	cry_reverse Cry_CalyrexShadow
.endif @ P_FUSION_FORMS
.endif @ P_FAMILY_CALYREX
.if P_FAMILY_ENAMORUS == TRUE
	cry_reverse Cry_EnamorusIncarnate
	cry_reverse Cry_EnamorusTherian
.endif @ P_FAMILY_ENAMORUS
.if P_FAMILY_SPRIGATITO == TRUE
	cry_reverse Cry_Sprigatito
	cry_reverse Cry_Floragato
	cry_reverse Cry_Meowscarada
.endif @ P_FAMILY_SPRIGATITO
.if P_FAMILY_FUECOCO == TRUE
	cry_reverse Cry_Fuecoco
	cry_reverse Cry_Crocalor
	cry_reverse Cry_Skeledirge
.endif @ P_FAMILY_FUECOCO
.if P_FAMILY_QUAXLY == TRUE
	cry_reverse Cry_Quaxly
	cry_reverse Cry_Quaxwell
	cry_reverse Cry_Quaquaval
.endif @ P_FAMILY_QUAXLY
.if P_FAMILY_LECHONK == TRUE
	cry_reverse Cry_Lechonk
	cry_reverse Cry_OinkologneM
	cry_reverse Cry_OinkologneF
.endif @ P_FAMILY_LECHONK
.if P_FAMILY_TAROUNTULA == TRUE
	cry_reverse Cry_Tarountula
	cry_reverse Cry_Spidops
.endif @ P_FAMILY_TAROUNTULA
.if P_FAMILY_NYMBLE == TRUE
	cry_reverse Cry_Nymble
	cry_reverse Cry_Lokix
.endif @ P_FAMILY_NYMBLE
.if P_FAMILY_PAWMI == TRUE
	cry_reverse Cry_Pawmi
	cry_reverse Cry_Pawmo
	cry_reverse Cry_Pawmot
.endif @ P_FAMILY_PAWMI
.if P_FAMILY_TANDEMAUS == TRUE
	cry_reverse Cry_Tandemaus
	cry_reverse Cry_MausholdThree
	cry_reverse Cry_MausholdFour
.endif @ P_FAMILY_TANDEMAUS
.if P_FAMILY_FIDOUGH == TRUE
	cry_reverse Cry_Fidough
	cry_reverse Cry_Dachsbun
.endif @ P_FAMILY_FIDOUGH
.if P_FAMILY_SMOLIV == TRUE
	cry_reverse Cry_Smoliv
	cry_reverse Cry_Dolliv
	cry_reverse Cry_Arboliva
.endif @ P_FAMILY_SMOLIV
.if P_FAMILY_SQUAWKABILLY == TRUE
	cry_reverse Cry_Squawkabilly
.endif @ P_FAMILY_SQUAWKABILLY
.if P_FAMILY_NACLI == TRUE
	cry_reverse Cry_Nacli
	cry_reverse Cry_Naclstack
	cry_reverse Cry_Garganacl
.endif @ P_FAMILY_NACLI
.if P_FAMILY_CHARCADET == TRUE
	cry_reverse Cry_Charcadet
	cry_reverse Cry_Armarouge
	cry_reverse Cry_Ceruledge
.endif @ P_FAMILY_CHARCADET
.if P_FAMILY_TADBULB == TRUE
	cry_reverse Cry_Tadbulb
	cry_reverse Cry_Bellibolt
.endif @ P_FAMILY_TADBULB
.if P_FAMILY_WATTREL == TRUE
	cry_reverse Cry_Wattrel
	cry_reverse Cry_Kilowattrel
.endif @ P_FAMILY_WATTREL
.if P_FAMILY_MASCHIFF == TRUE
	cry_reverse Cry_Maschiff
	cry_reverse Cry_Mabosstiff
.endif @ P_FAMILY_MASCHIFF
.if P_FAMILY_SHROODLE == TRUE
	cry_reverse Cry_Shroodle
	cry_reverse Cry_Grafaiai
.endif @ P_FAMILY_SHROODLE
.if P_FAMILY_BRAMBLIN == TRUE
	cry_reverse Cry_Bramblin
	cry_reverse Cry_Brambleghast
.endif @ P_FAMILY_BRAMBLIN
.if P_FAMILY_TOEDSCOOL == TRUE
	cry_reverse Cry_Toedscool
	cry_reverse Cry_Toedscruel
.endif @ P_FAMILY_TOEDSCOOL
.if P_FAMILY_KLAWF == TRUE
	cry_reverse Cry_Klawf
.endif @ P_FAMILY_KLAWF
.if P_FAMILY_CAPSAKID == TRUE
	cry_reverse Cry_Capsakid
	cry_reverse Cry_Scovillain
.endif @ P_FAMILY_CAPSAKID
.if P_FAMILY_RELLOR == TRUE
	cry_reverse Cry_Rellor
	cry_reverse Cry_Rabsca
.endif @ P_FAMILY_RELLOR
.if P_FAMILY_FLITTLE == TRUE
	cry_reverse Cry_Flittle
	cry_reverse Cry_Espathra
.endif @ P_FAMILY_FLITTLE
.if P_FAMILY_TINKATINK == TRUE
	cry_reverse Cry_Tinkatink
	cry_reverse Cry_Tinkatuff
	cry_reverse Cry_Tinkaton
.endif @ P_FAMILY_TINKATINK
.if P_FAMILY_WIGLETT == TRUE
	cry_reverse Cry_Wiglett
	cry_reverse Cry_Wugtrio
.endif @ P_FAMILY_WIGLETT
.if P_FAMILY_BOMBIRDIER == TRUE
	cry_reverse Cry_Bombirdier
.endif @ P_FAMILY_BOMBIRDIER
.if P_FAMILY_FINIZEN == TRUE
	cry_reverse Cry_Finizen
	cry_reverse Cry_PalafinZero
	cry_reverse Cry_PalafinHero
.endif @ P_FAMILY_FINIZEN
.if P_FAMILY_VAROOM == TRUE
	cry_reverse Cry_Varoom
	cry_reverse Cry_Revavroom
.endif @ P_FAMILY_VAROOM
.if P_FAMILY_CYCLIZAR == TRUE
	cry_reverse Cry_Cyclizar
.endif @ P_FAMILY_CYCLIZAR
.if P_FAMILY_ORTHWORM == TRUE
	cry_reverse Cry_Orthworm
.endif @ P_FAMILY_ORTHWORM
.if P_FAMILY_GLIMMET == TRUE
	cry_reverse Cry_Glimmet
	cry_reverse Cry_Glimmora
.endif @ P_FAMILY_GLIMMET
.if P_FAMILY_GREAVARD == TRUE
	cry_reverse Cry_Greavard
	cry_reverse Cry_Houndstone
.endif @ P_FAMILY_GREAVARD
.if P_FAMILY_FLAMIGO == TRUE
	cry_reverse Cry_Flamigo
.endif @ P_FAMILY_FLAMIGO
.if P_FAMILY_CETODDLE == TRUE
	cry_reverse Cry_Cetoddle
	cry_reverse Cry_Cetitan
.endif @ P_FAMILY_CETODDLE
.if P_FAMILY_VELUZA == TRUE
	cry_reverse Cry_Veluza
.endif @ P_FAMILY_VELUZA
.if P_FAMILY_DONDOZO == TRUE
	cry_reverse Cry_Dondozo
.endif @ P_FAMILY_DONDOZO
.if P_FAMILY_TATSUGIRI == TRUE
	cry_reverse Cry_TatsugiriCurly
	cry_reverse Cry_TatsugiriDroopy
	cry_reverse Cry_TatsugiriStretchy
.endif @ P_FAMILY_TATSUGIRI
.if P_FAMILY_GREAT_TUSK == TRUE
	cry_reverse Cry_GreatTusk
.endif @ P_FAMILY_GREAT_TUSK
.if P_FAMILY_SCREAM_TAIL == TRUE
	cry_reverse Cry_ScreamTail
.endif @ P_FAMILY_SCREAM_TAIL
.if P_FAMILY_BRUTE_BONNET == TRUE
	cry_reverse Cry_BruteBonnet
.endif @ P_FAMILY_BRUTE_BONNET
.if P_FAMILY_FLUTTER_MANE == TRUE
	cry_reverse Cry_FlutterMane
.endif @ P_FAMILY_FLUTTER_MANE
.if P_FAMILY_SLITHER_WING == TRUE
	cry_reverse Cry_SlitherWing
.endif @ P_FAMILY_SLITHER_WING
.if P_FAMILY_SANDY_SHOCKS == TRUE
	cry_reverse Cry_SandyShocks
.endif @ P_FAMILY_SANDY_SHOCKS
.if P_FAMILY_IRON_TREADS == TRUE
	cry_reverse Cry_IronTreads
.endif @ P_FAMILY_IRON_TREADS
.if P_FAMILY_IRON_BUNDLE == TRUE
	cry_reverse Cry_IronBundle
.endif @ P_FAMILY_IRON_BUNDLE
.if P_FAMILY_IRON_HANDS == TRUE
	cry_reverse Cry_IronHands
.endif @ P_FAMILY_IRON_HANDS
.if P_FAMILY_IRON_JUGULIS == TRUE
	cry_reverse Cry_IronJugulis
.endif @ P_FAMILY_IRON_JUGULIS
.if P_FAMILY_IRON_MOTH == TRUE
	cry_reverse Cry_IronMoth
.endif @ P_FAMILY_IRON_MOTH
.if P_FAMILY_IRON_THORNS == TRUE
	cry_reverse Cry_IronThorns
.endif @ P_FAMILY_IRON_THORNS
.if P_FAMILY_FRIGIBAX == TRUE
	cry_reverse Cry_Frigibax
	cry_reverse Cry_Arctibax
	cry_reverse Cry_Baxcalibur
.endif @ P_FAMILY_FRIGIBAX
.if P_FAMILY_GIMMIGHOUL == TRUE
	cry_reverse Cry_Gimmighoul
	cry_reverse Cry_Gholdengo
.endif @ P_FAMILY_GIMMIGHOUL
.if P_FAMILY_WO_CHIEN == TRUE
	cry_reverse Cry_WoChien
.endif @ P_FAMILY_WO_CHIEN
.if P_FAMILY_CHIEN_PAO == TRUE
	cry_reverse Cry_ChienPao
.endif @ P_FAMILY_CHIEN_PAO
.if P_FAMILY_TING_LU == TRUE
	cry_reverse Cry_TingLu
.endif @ P_FAMILY_TING_LU
.if P_FAMILY_CHI_YU == TRUE
	cry_reverse Cry_ChiYu
.endif @ P_FAMILY_CHI_YU
.if P_FAMILY_ROARING_MOON == TRUE
	cry_reverse Cry_RoaringMoon
.endif @ P_FAMILY_ROARING_MOON
.if P_FAMILY_IRON_VALIANT == TRUE
	cry_reverse Cry_IronValiant
.endif @ P_FAMILY_IRON_VALIANT
.if P_FAMILY_KORAIDON == TRUE
	cry_reverse Cry_Koraidon
.endif @ P_FAMILY_KORAIDON
.if P_FAMILY_MIRAIDON == TRUE
	cry_reverse Cry_Miraidon
.endif @ P_FAMILY_MIRAIDON
.if P_FAMILY_WALKING_WAKE == TRUE
	cry_reverse Cry_WalkingWake
.endif @ P_FAMILY_WALKING_WAKE
.if P_FAMILY_IRON_LEAVES == TRUE
	cry_reverse Cry_IronLeaves
.endif @ P_FAMILY_IRON_LEAVES
.if P_FAMILY_POLTCHAGEIST == TRUE
	cry_reverse Cry_Poltchageist
	cry_reverse Cry_Sinistcha
.endif @ P_FAMILY_POLTCHAGEIST
.if P_FAMILY_OKIDOGI == TRUE
	cry_reverse Cry_Okidogi
.endif @ P_FAMILY_OKIDOGI
.if P_FAMILY_MUNKIDORI == TRUE
	cry_reverse Cry_Munkidori
.endif @ P_FAMILY_MUNKIDORI
.if P_FAMILY_FEZANDIPITI == TRUE
	cry_reverse Cry_Fezandipiti
.endif @ P_FAMILY_FEZANDIPITI
.if P_FAMILY_OGERPON == TRUE
	cry_reverse Cry_Ogerpon
.endif @ P_FAMILY_OGERPON
.if P_FAMILY_GOUGING_FIRE == TRUE
	cry_reverse Cry_GougingFire
.endif @ P_FAMILY_GOUGING_FIRE
.if P_FAMILY_RAGING_BOLT == TRUE
	cry_reverse Cry_RagingBolt
.endif @ P_FAMILY_RAGING_BOLT
.if P_FAMILY_IRON_BOULDER == TRUE
	cry_reverse Cry_IronBoulder
.endif @ P_FAMILY_IRON_BOULDER
.if P_FAMILY_IRON_CROWN == TRUE
	cry_reverse Cry_IronCrown
.endif @ P_FAMILY_IRON_CROWN
.if P_FAMILY_TERAPAGOS == TRUE
	cry_reverse Cry_Terapagos
.endif @ P_FAMILY_TERAPAGOS
.if P_FAMILY_PECHARUNT == TRUE
	cry_reverse Cry_Pecharunt
.endif @ P_FAMILY_PECHARUNT
.endif @ P_CRIES_ENABLED
