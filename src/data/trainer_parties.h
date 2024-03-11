#include "level_caps.h"

#define LEVEL_SCALED GetCurrentLevelCap(LEVEL_SCALED)

static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_BOLD,
    .moves = { MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_BOLD,
    .moves = { MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 4, 0, 252, 0, 100, 152 ),
    .lvl = 2,
    .species = SPECIES_WAILORD,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = { MOVE_SCALD, MOVE_ICE_BEAM, MOVE_WATER_SPOUT, MOVE_REST },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_ACROBATICS, MOVE_POISON_FANG, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_RAIN_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_BOLD,
    .moves = { MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_BOLD,
    .moves = { MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .moves = { MOVE_BITE, MOVE_HOWL, MOVE_NONE, MOVE_NONE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_ZUBAT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_NONE },
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 4, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    .moves = { MOVE_AQUA_JET, MOVE_BITE, MOVE_ICE_FANG, MOVE_POISON_FANG },
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 4, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    .moves = { MOVE_BITE, MOVE_HOWL, MOVE_ROAR, MOVE_SWAGGER },
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 4, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_GOLBAT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_NONE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 4, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    .moves = { MOVE_AQUA_JET, MOVE_BITE, MOVE_ICE_FANG, MOVE_POISON_FANG },
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 3,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_JOLLY,
    .moves = { MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_SCARY_FACE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_NONE,
    .moves = { MOVE_ACROBATICS, MOVE_POISON_FANG, MOVE_RAIN_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_CRAWDAUNT,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_PROTECT },
    },
    
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_RAIN_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_ACROBATICS, MOVE_POISON_FANG, MOVE_RAIN_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_CRAWDAUNT,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 76, 36, 4, 140 ),
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_WEATHER_BALL, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CROSS_POISON, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 152, 12, 0, 100 ),
    .lvl = 0,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 0,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_RAIN_DANCE, MOVE_SNARL },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 52, 124, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_MUK,
    .ability = ABILITY_STENCH,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = { MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_AQUA_JET, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRUMPIG,
    },
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 5,
    .species = SPECIES_BELLOSSOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_ALLY_SWITCH, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BULLDOZE, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    .ability = ABILITY_TELEPATHY,
    .moves = { MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_NONE, MOVE_NONE },
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_AZURILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_NONE, MOVE_HEADBUTT, MOVE_NONE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_NONE, MOVE_HEADBUTT, MOVE_NONE, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZURILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_TAILWIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_MODEST,
    .moves = { MOVE_BUG_BUZZ, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_WAILORD,
    .moves = {MOVE_ROLLOUT, MOVE_PROTECT, MOVE_ASTONISH, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_PROTECT, MOVE_SWAGGER}
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

//--Victory Road 1F

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAGNEZONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .moves = { MOVE_SLASH, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_BRICK_BREAK }
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_DUSKNOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SLASH, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

//--End Victory Road 1F

//--Victor Road B1F

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 5,
    .species = SPECIES_ABSOL,
    }
};

//--End Victory Road B1F

//--Victory Road B2F

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 252, 0, 244, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_SHIFTRY,
    .ability = ABILITY_WIND_RIDER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 2,
    .species = SPECIES_DODRIO,
    .ability = ABILITY_EARLY_BIRD,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 0, 0, 4, 252, 252, 0 ),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 0, 0, 12, 252, 244, 0 ),
    .lvl = 2,
    .species = SPECIES_ELECTRODE,
    .ability = ABILITY_AFTERMATH,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_MAGNET,
    .moves = { MOVE_THUNDERBOLT, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = { MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_PROTECT }
    },
    {
    .lvl = 5,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_NONE, MOVE_NONE}
    }
};

//--End Victory Road B2F

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_TAILWIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .moves = {MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB, MOVE_PROTECT, MOVE_LEECH_SEED}
    }
    
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    .ability = ABILITY_SWIFT_SWIM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_BANETTE,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .lvl = 5,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_CONFUSE_RAY, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .lvl = 5,
    .species = SPECIES_DUSKULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_CONFUSE_RAY, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_CONFUSE_RAY, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SHUPPET,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_BANETTE,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .lvl = 5,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 5,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 5,
    .species = SPECIES_RHYHORN,
    },
    {
    .lvl = 5,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEADRA,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    }
};

//--Route 126

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WALREIN,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

//--End Route 126

//--Route 127

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = { MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = { MOVE_SURF, MOVE_HEADBUTT, MOVE_RAIN_DANCE, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

//--End Route 127

//--Route 128

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PROBOPASS,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

//--End Route 128

//--Route 129

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 5,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_HUNTAIL,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOREBYSS,
    }
};

//--End Route 129

//--Route 130

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_WALREIN,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

//--End Route 130

//--Route 131

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 5,
    .species = SPECIES_WALREIN,
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

//--End Route 131

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_SPARK, MOVE_LEER}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    .moves = {MOVE_CHARGE, MOVE_SHOCK_WAVE, MOVE_SCREECH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 5,
    .species = SPECIES_VULPIX,
    .ability = ABILITY_DROUGHT,
    }
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 5,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SCRATCH, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .lvl = 5,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 5,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 5,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    },
    {
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Derek[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .lvl = 5,
    .species = SPECIES_ABRA,
    .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_SPOINK,
    .moves = {MOVE_PSYBEAM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GALLADE,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GALLADE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 12),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_FARIGIRAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 12),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_XATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_MEDICHAM,
    },
    {
    .lvl = 2,
    .species = SPECIES_GALLADE,
    },
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GRUMPIG,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_XATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_LUNATONE,
    },
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_GIRAFARIG,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 2,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 5,
    .species = SPECIES_GALLADE,
    },
    {
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 5,
    .species = SPECIES_ABRA,
    .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_RALTS,
    }
};



static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 5,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 5,
    .species = SPECIES_GALLADE,
    .gender = 0,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = { MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_PROTECT, MOVE_NONE },
    },
    {
    .lvl = 5,
    .species = SPECIES_RAICHU,
    .ability = ABILITY_STATIC,
    .nature = NATURE_TIMID,
    .moves = { MOVE_DISCHARGE, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

//--Elite 4

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CROSS_POISON, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 252, 0, 244, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_SHIFTRY,
    .ability = ABILITY_WIND_RIDER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 0,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_HELPING_HAND, MOVE_SNARL },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 124, 252, 0, 132, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CACTURNE,
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE, MOVE_SPIKY_SHIELD }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CRAWDAUNT,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_ABSOL,
    .ability = ABILITY_SUPER_LUCK,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_BLACK_GLASSES,
    .moves = { MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 100, 0, 0, 156 ),
    .lvl = 0,
    .species = SPECIES_DUSCLOPS,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_SASSY,
    .heldItem = ITEM_EVIOLITE,
    .moves = { MOVE_BRICK_BREAK, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_TRICK_ROOM }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 184, 68, 252, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_SHADOW_CLAW, MOVE_ENCORE, MOVE_DESTINY_BOND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 252, 0, 0, 4, 252 ),
    .lvl = 0,
    .species = SPECIES_SHEDINJA,
    .ability = ABILITY_WONDER_GUARD,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_POLTERGEIST, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 0, 252, 0, 0, 252 ),
    .lvl = 0,
    .species = SPECIES_WOBBUFFET,
    .ability = ABILITY_SHADOW_TAG,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND, MOVE_ENCORE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 248, 0, 8, 0, 0, 252 ),
    .lvl = 0,
    .species = SPECIES_SABLEYE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_FAKE_OUT, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 252, 4, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_DUSKNOIR,
    .ability = ABILITY_PRESSURE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 68, 252, 184, 0 ),
    .lvl = 0,
    .species = SPECIES_CASTFORM,
    .ability = ABILITY_FORECAST,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_BLIZZARD, MOVE_SCALD, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 4, 252, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_GLALIE,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_BLIZZARD, MOVE_ICY_WIND, MOVE_HELPING_HAND, MOVE_SNOWSCAPE }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 4, 0, 252, 0, 100, 152 ),
    .lvl = 0,
    .species = SPECIES_WAILORD,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_LEFTOVERS,
    .moves = { MOVE_BRINE, MOVE_BLIZZARD, MOVE_AQUA_RING, MOVE_SUBSTITUTE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 132, 0, 0, 124, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_GOLDUCK,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_ICICLE_PLATE,
    .moves = { MOVE_SCALD, MOVE_BLIZZARD, MOVE_RAIN_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 4, 252, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_FROSLASS,
    .ability = ABILITY_SNOW_CLOAK,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_SNOWSCAPE, MOVE_DESTINY_BOND }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 252, 0, 0, 12 ),
    .lvl = 0,
    .species = SPECIES_WALREIN,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_CALM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ICE_BEAM, MOVE_SUPER_FANG, MOVE_ENCORE, MOVE_SUBSTITUTE }
    },
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 116, 4, 20, 0, 116 ),
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_WATERFALL, MOVE_TAUNT, MOVE_THUNDER_WAVE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_BUG_BUZZ, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 248, 4 ),
    .lvl = 0,
    .species = SPECIES_TROPIUS,
    .ability = ABILITY_HARVEST,
    .nature = NATURE_RELAXED,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_LEAF_STORM, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 0,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_DRACO_METEOR, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 0, 44, 252, 156, 12 ),
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SNIPER,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = { MOVE_DRACO_METEOR, MOVE_SURF, MOVE_DRAGON_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 108, 156, 4, 236, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_SALAMENCE,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_DRAGON_CLAW, MOVE_BREAKING_SWIPE, MOVE_DUAL_WINGBEAT, MOVE_PROTECT }
    }
};

//--Champion

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 0, 0, 252, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WEATHER_BALL, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_HELPING_HAND }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 252, 252, 4 ),
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_WEATHER_BALL, MOVE_ENERGY_BALL, MOVE_ICE_BEAM, MOVE_FAKE_OUT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 16, 0, 240 ),
    .lvl = 0,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CHILLING_WATER, MOVE_ICY_WIND, MOVE_KNOCK_OFF, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 252, 12, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_WHISCASH,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_DAMP_ROCK,
    .moves = { MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 212, 248, 4, 44, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_ICE_FANG }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 108, 156, 4, 236, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_MILOTIC,
    .ability = ABILITY_COMPETITIVE,
    .nature = NATURE_CALM,
    .heldItem = ITEM_ADRENALINE_ORB,
    .moves = { MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_PROTECT }
    }
};

//--End Elite 4

//--Gym Leaders

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 0,
    .species = SPECIES_GEODUDE,
    .ability = ABILITY_SAND_VEIL,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_WIDE_GUARD, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 0,
    .species = SPECIES_ARON,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_CLAW, MOVE_CURSE, MOVE_SANDSTORM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 0,
    .species = SPECIES_NOSEPASS,
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ROCK_TOMB, MOVE_SAND_TOMB, MOVE_HARDEN, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 0, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_MAKUHITA,
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_FORCE_PALM, MOVE_THUNDER_PUNCH, MOVE_BULK_UP, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 0, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FEINT, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_DETECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 0, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_MACHOP,
    .ability = ABILITY_NO_GUARD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LOW_SWEEP, MOVE_ICE_PUNCH, MOVE_BULK_UP, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 52, 0, 0, 100, 100, 0 ),
    .lvl = 0,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = { MOVE_DISCHARGE, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_THUNDER_WAVE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 52, 0, 0, 100, 100, 0 ),
    .lvl = 0,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = { MOVE_DISCHARGE, MOVE_ELECTRIC_TERRAIN, MOVE_THUNDER_WAVE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 0, 100, 52 ),
    .lvl = 0,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PROTECT, MOVE_SHOCK_WAVE, MOVE_ELECTRIC_TERRAIN, MOVE_TRI_ATTACK},
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 52, 0, 0, 100, 100, 0 ),
    .lvl = 0,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLAMETHROWER, MOVE_PROTECT, MOVE_SHOCK_WAVE, MOVE_RISING_VOLTAGE}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 68, 0, 12, 220, 204, 4 ),
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = { MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 244, 12 ),
    .lvl = 0,
    .species = SPECIES_MAGCARGO,
    .ability = ABILITY_WEAK_ARMOR,
    .nature = NATURE_CALM,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 0, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_SOLID_ROCK,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_PASSHO_BERRY,
    .moves = { MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUNNY_DAY }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 0, 252, 4 ),
    .lvl = 0,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = { MOVE_OVERHEAT, MOVE_HEAT_WAVE, MOVE_ANCIENT_POWER, MOVE_SOLAR_BEAM }
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 100, 152, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .ability = ABILITY_QUICK_FEET,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = { MOVE_FACADE, MOVE_PLAY_ROUGH, MOVE_FLING, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 64, 188, 52, 252, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    .ability = ABILITY_VITAL_SPIRIT,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_FAINT_ATTACK, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 252, 0, 4, 252 ),
    .lvl = 5,
    .species = SPECIES_BLISSEY,
    .ability = ABILITY_HEALER,
    .nature = NATURE_CALM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ICY_WIND, MOVE_LIFE_DEW, MOVE_SKILL_SWAP, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 172, 252, 4, 76, 0, 4 ),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .ability = ABILITY_TRUANT,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_COUNTER, MOVE_SLASH, MOVE_FACADE, MOVE_PLAY_ROUGH }
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .ability = ABILITY_GUTS,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FLAME_ORB,
    .moves = { MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_SUNNY_DAY, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 252, 4, 0 ),
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_RAIN_DISH,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WEATHER_BALL, MOVE_ICY_WIND, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 160, 96, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 248, 4 ),
    .lvl = 0,
    .species = SPECIES_TROPIUS,
    .ability = ABILITY_HARVEST,
    .nature = NATURE_RELAXED,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_LEAF_STORM, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 0,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_AERIAL_ACE, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 132, 4, 76, 52 ),
    .lvl = 0,
    .species = SPECIES_FARIGIRAF,
    .ability = ABILITY_ARMOR_TAIL,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_HELPING_HAND, MOVE_TRICK_ROOM },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_MEDICHAM,
    .ability = ABILITY_PURE_POWER,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_FAKE_OUT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 152, 0, 100, 0 ),
    .lvl = 0,
    .species = SPECIES_CLAYDOL,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 240, 0, 16, 0 ),
    .lvl = 0,
    .species = SPECIES_XATU,
    .ability = ABILITY_MAGIC_BOUNCE,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = { MOVE_PSYCHIC, MOVE_FOUL_PLAY, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 0, 0, 4, 252, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_LUNATONE,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_POWER_HERB,
    .moves = { MOVE_METEOR_BEAM, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 200, 52, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_SOLROCK,
    .ability = ABILITY_LEVITATE,
    .nature = NATURE_IMPISH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ROCK_SLIDE, MOVE_MORNING_SUN, MOVE_HELPING_HAND, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 252, 0, 0, 12 ),
    .lvl = 0,
    .species = SPECIES_WHISCASH,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ICY_WIND, MOVE_RAIN_DANCE, MOVE_STEALTH_ROCK, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 244, 0, 252, 0, 0, 12 ),
    .lvl = 0,
    .species = SPECIES_WALREIN,
    .ability = ABILITY_OBLIVIOUS,
    .nature = NATURE_CALM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ICE_BEAM, MOVE_SUPER_FANG, MOVE_ENCORE, MOVE_SUBSTITUTE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 76, 36, 4, 140 ),
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_SCALD, MOVE_HURRICANE, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 52, 252, 0, 204, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_RELICANTH,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_CRAWDAUNT,
    .ability = ABILITY_ADAPTABILITY,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 252, 252, 4 ),
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .ability = ABILITY_SWIFT_SWIM,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = { MOVE_MUDDY_WATER, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_DRACO_METEOR }
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = TRAINER_PARTY_IVS(21, 21, 21, 21, 21, 21),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(21, 21, 21, 21, 21, 21),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(21, 21, 21, 21, 21, 21),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(21, 21, 21, 21, 21, 21),
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_DIZZY_PUNCH, MOVE_TEETER_DANCE}
    },
    {
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = TRAINER_PARTY_IVS(23, 23, 23, 23, 23, 23),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(23, 23, 23, 23, 23, 23),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_NORMALIZE,
    .moves = { MOVE_DISARMING_VOICE, MOVE_FAKE_OUT, MOVE_SING, MOVE_ATTRACT }
    },
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_PIXILATE,
    .moves = { MOVE_DISARMING_VOICE, MOVE_FAKE_OUT, MOVE_PROTECT, MOVE_COSMIC_POWER }
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIKACHU,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_LIGHT_BALL,
    .moves = { MOVE_THUNDERBOLT, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_PROTECT },
    },
    {
    .lvl = 5,
    .species = SPECIES_RAICHU,
    .ability = ABILITY_STATIC,
    .nature = NATURE_TIMID,
    .moves = { MOVE_DISCHARGE, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_THUNDER_WAVE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_PLAY_NICE, MOVE_THUNDER_WAVE }
    }
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_CONFUSION, MOVE_DETECT}
    }
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    },
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .moves = { MOVE_BITE, MOVE_HOWL, MOVE_NONE, MOVE_NONE }
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_GULPIN,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE, MOVE_YAWN, MOVE_POUND}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .lvl = 5,
    .species = SPECIES_TRAPINCH,
    },
    {
    .lvl = 5,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 5,
    .species = SPECIES_BARBOACH,
    },
    {
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .lvl = 5,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 5,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    },
    {
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    .ability = ABILITY_CHLOROPHYLL,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .lvl = 5,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_SLUDGE, MOVE_TAUNT}
    },
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_SLUDGE, MOVE_TAUNT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_SLUDGE, MOVE_TAUNT}
    },
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 5,
    .species = SPECIES_CASTFORM_NORMAL,
    .nature = NATURE_MODEST,
    .moves = { MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .moves = { MOVE_WATER_PULSE, MOVE_SHOCK_WAVE, MOVE_TAILWIND, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 5,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 5,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .lvl = 5,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 5,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    .ability = ABILITY_PRANKSTER,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_SHADOW_CLAW, MOVE_TAUNT, MOVE_CONFUSE_RAY, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_THUNDER_WAVE },
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_PLAY_NICE, MOVE_THUNDER_WAVE }
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 5,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 5,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 5,
    .species = SPECIES_ABSOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_TOXIC, MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_SLUDGE_BOMB}
    },
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_TOXIC, MOVE_TAUNT, MOVE_PROTECT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 5,
    .species = SPECIES_CASTFORM_NORMAL,
    .nature = NATURE_MODEST,
    .moves = {MOVE_PROTECT, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    },
    {
    .lvl = 5,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_TIMID,
    .moves = { MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SHADOW_BALL, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .friendship = 255,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 244, 0, 0, 0, 12 ),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_AQUA_JET }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 236, 0, 0, 0, 252, 20 ),
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_QUIET,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 192, 252, 0, 56, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_TREECKO,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 0,
    .species = SPECIES_TORCHIC,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_RUN_AWAY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = { MOVE_BITE, MOVE_HOWL, MOVE_ROAR, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 0, 0, 52 ),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    .ability = ABILITY_KEEN_EYE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_RAIN_DANCE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 0, 52, 0 ),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_MEGA_DRAIN, MOVE_WATER_PULSE, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 100, 0, 52, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_COMBUSKEN,
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_QUICK_ATTACK, MOVE_DETECT }
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .ability = ABILITY_GUTS,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FLAME_ORB,
    .moves = { MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 252, 252, 12 ),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_ENERGY_BALL, MOVE_WEATHER_BALL, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 54, 0, 198, 4 ),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHARCOAL,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 252, 0, 244, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_BLAZIKEN,
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_BLAZE_KICK, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE, MOVE_DETECT }
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 0,
    .species = SPECIES_MUDKIP,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_TREECKO,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 0,
    .species = SPECIES_TORCHIC,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 0,
    .species = SPECIES_MUDKIP,
    },
    {
    .lvl = 2,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
    .lvl = 5,
    .species = SPECIES_WHISMUR,
    },
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 5,
    .species = SPECIES_PINSIR,
    },
    {
    .lvl = 5,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
    .lvl = 5,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 5,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 5,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 3,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    },
    {
    .lvl = 5,
    .species = SPECIES_KOFFING,
    .ability = ABILITY_LEVITATE,
    .moves = { MOVE_SLUDGE, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 5,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .ability = ABILITY_RUN_AWAY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = { MOVE_BITE, MOVE_HOWL, MOVE_ROAR, MOVE_NONE },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_COMBUSKEN,
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_QUICK_ATTACK, MOVE_DETECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = { MOVE_MEGA_DRAIN, MOVE_WATER_GUN, MOVE_FAKE_OUT, MOVE_NONE },
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 48, 48, 0, 0, 4, 0 ),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 5,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 5,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};



static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .lvl = 5,
    .species = SPECIES_ODDISH,
    },
    {
    .lvl = 5,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

//--Sootopolis Gym

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_SEAKING,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 2,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 2,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_SEAKING,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_GOREBYSS,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 2,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_CRAWDAUNT,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_HUNTAIL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_CRAWDAUNT,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_LUDICOLO,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_CRAWDAUNT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 2,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

//--End Sootopolis Gym

static const struct TrainerMon sParty_Rick[] = {
    {
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_CASCOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_SILCOON,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_SILCOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NINCADA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_CASCOON,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHEDINJA,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 5,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .lvl = 5,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 5,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    .ability = ABILITY_STURDY,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = { MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_WILL_O_WISP, MOVE_PROTECT }
    },
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = { MOVE_SLUDGE_BOMB, MOVE_TAUNT, MOVE_TOXIC, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = { MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT }
    },
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    .moves = { MOVE_X_SCISSOR, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 5,
    .species = SPECIES_WEEZING,
    .moves = { MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT }
    },
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    .moves = { MOVE_X_SCISSOR, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    .ability = ABILITY_TRACE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_LIFE_DEW, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = { MOVE_MAGICAL_LEAF, MOVE_GROWTH, MOVE_POISON_POWDER, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .ability = ABILITY_CUTE_CHARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DISARMING_VOICE, MOVE_FAKE_OUT, MOVE_SING, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    .ability = ABILITY_NATURAL_CURE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DRAGON_BREATH, MOVE_DISARMING_VOICE, MOVE_GROWL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_WallyAtHome[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    .ability = ABILITY_TRACE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_PSYBEAM, MOVE_DRAINING_KISS, MOVE_LIFE_DEW, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = { MOVE_MAGICAL_LEAF, MOVE_GROWTH, MOVE_POISON_POWDER, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_SKITTY,
    .ability = ABILITY_CUTE_CHARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DISARMING_VOICE, MOVE_FAKE_OUT, MOVE_SING, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 100, 0, 0, 52, 100, 0 ),
    .lvl = 5,
    .species = SPECIES_SWABLU,
    .ability = ABILITY_NATURAL_CURE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_DRAGON_BREATH, MOVE_DISARMING_VOICE, MOVE_GROWL, MOVE_PROTECT },
    },

    //--magneton
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .friendship = 255,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 244, 0, 0, 0, 12 ),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_AQUA_JET }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 236, 0, 0, 0, 252, 20 ),
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_QUIET,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 192, 252, 0, 56, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .friendship = 255,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 244, 0, 0, 0, 12 ),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_AQUA_JET }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 236, 0, 0, 0, 252, 20 ),
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_QUIET,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 192, 252, 0, 56, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .friendship = 255,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 244, 0, 0, 0, 12 ),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_AQUA_JET }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 236, 0, 0, 0, 252, 20 ),
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_QUIET,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 192, 252, 0, 56, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 60, 196, 0 ),
    .lvl = 1,
    .species = SPECIES_ALTARIA,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = { MOVE_HYPER_VOICE, MOVE_DRAGON_BREATH, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_DELCATTY,
    .ability = ABILITY_PIXILATE,
    .nature = NATURE_TIMID,
    .friendship = 255,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .ability = ABILITY_POISON_POINT,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 244, 0, 0, 0, 12 ),
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_ICE_SPINNER, MOVE_AQUA_JET }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 236, 0, 0, 0, 252, 20 ),
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .nature = NATURE_QUIET,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 192, 252, 0, 56, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_GALLADE,
    .ability = ABILITY_SHARPNESS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = { MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 4, 252, 252, 0 ),
    .lvl = 1,
    .species = SPECIES_RAICHU,
    .ability = ABILITY_LIGHTNING_ROD,
    .nature = NATURE_TIMID,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 1,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .ability = ABILITY_GUTS,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FLAME_ORB,
    .moves = { MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_TAILWIND, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 0, 0, 252, 252, 12 ),
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_ENERGY_BALL, MOVE_WEATHER_BALL, MOVE_FAKE_OUT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 54, 0, 198, 4 ),
    .lvl = 1,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHARCOAL,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 12, 252, 0, 244, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE, MOVE_DETECT }
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .lvl = 5,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 5,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .moves = { MOVE_SING, MOVE_HYPER_VOICE, MOVE_PROTECT, MOVE_AERIAL_ACE }
    },
    {
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .moves = { MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_REST, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 5,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 5,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 5,
    .species = SPECIES_GYARADOS,
    .ability = ABILITY_INTIMIDATE,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    .ability = ABILITY_CLEAR_BODY,
    },
    {
    .lvl = 5,
    .species = SPECIES_MILOTIC,
    .ability = ABILITY_COMPETITIVE,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_ROUGH_SKIN,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .lvl = 5,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_MINUN,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_PLAY_NICE, MOVE_THUNDER_WAVE }
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_THUNDER_WAVE },
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS( 24, 24, 24, 24, 24, 24 ),
    .lvl = 5,
    .species = SPECIES_PLUSLE,
    .moves = { MOVE_ELECTRO_BALL, MOVE_HELPING_HAND, MOVE_ENCORE, MOVE_THUNDER_WAVE },
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 5,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .lvl = 5,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .lvl = 5,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 5,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
    {
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 5,
    .species = SPECIES_LAIRON,
    },
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUPERSONIC, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_LIGHT_SCREEN, MOVE_REFLECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 3,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .moves = { MOVE_CRUNCH, MOVE_HOWL, MOVE_SNARL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 0, 252, 0 ),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 0, 0, 252, 0 ),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_VEIL,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHARCOAL,
    .moves = { MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_CURSE, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUNNY_DAY, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_HOWL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHARCOAL,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_CHARCOAL,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUNNY_DAY, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_HOWL, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_ASSURANCE, MOVE_THUNDER_FANG, MOVE_SNARL, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 12, 244, 0, 252, 0, 0 ),
    .lvl = 5,
    .species = SPECIES_GOLBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_SUNNY_DAY, MOVE_U_TURN },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 204, 0, 116, 116, 68, 4 ),
    .lvl = 5,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 252, 0 ),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_SOLID_ROCK,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_PASSHO_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_SUNNY_DAY, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 76, 0, 0, 180 ),
    .lvl = 0,
    .species = SPECIES_WEEZING,
    .ability = ABILITY_NEUTRALIZING_GAS,
    .nature = NATURE_BOLD,
    .moves = { MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_TAUNT, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CROSS_POISON, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 76, 4, 124, 0, 52 ),
    .lvl = 0,
    .species = SPECIES_MIGHTYENA,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_SUNNY_DAY, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 204, 0, 116, 116, 68, 4 ),
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 144, 0, 112, 0 ),
    .lvl = 0,
    .species = SPECIES_CLAYDOL,
    .nature = NATURE_BOLD,
    .moves = { MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_TRICK_ROOM, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_SOLID_ROCK,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_PASSHO_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_PROTECT },
    },
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 204, 0, 116, 116, 68, 4 ),
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .ability = ABILITY_DROUGHT,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .ability = ABILITY_INNER_FOCUS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CROSS_POISON, MOVE_ACROBATICS, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 252, 0 ),
    .lvl = 0,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_SOLID_ROCK,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_PASSHO_BERRY,
    .moves = { MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_ERUPTION, MOVE_PROTECT },
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 5,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SKITTY,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 5,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 5,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 5,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 5,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWALOT,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 5,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 5,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 5,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 5,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = { MOVE_DISCHARGE, MOVE_NONE, MOVE_NONE, MOVE_NONE }
    },
    {
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = { MOVE_DISCHARGE, MOVE_NONE, MOVE_NONE, MOVE_NONE }
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    },
    {
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    .ability = ABILITY_DROUGHT,
    },
    {
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .ability = ABILITY_DROUGHT,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .lvl = 5,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .moves = { MOVE_THUNDER, MOVE_HEAT_WAVE, MOVE_THUNDER_WAVE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .ability = ABILITY_DRIZZLE,
    .moves = { MOVE_WEATHER_BALL, MOVE_SHOCK_WAVE, MOVE_TAILWIND, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    },
    {
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 5,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 5,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SWALOT,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

//--Gym Leader Rematches

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_AERODACTYL,
    .ability = ABILITY_UNNERVE,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_TAILWIND, MOVE_TAUNT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 4, 0 ),
    .lvl = 0,
    .species = SPECIES_GOLEM,
    .ability = ABILITY_SAND_STREAM,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_COVERT_CLOAK,
    .moves = { MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_STEALTH_ROCK, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS( 54, 244, 0, 198, 0, 12 ),
    .lvl = 0,
    .species = SPECIES_ARMALDO,
    .ability = ABILITY_SAND_RUSH,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = { MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_AQUA_JET, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 156, 0, 100, 0 ),
    .lvl = 0,
    .species = SPECIES_CRADILY,
    .ability = ABILITY_STORM_DRAIN,
    .nature = NATURE_BOLD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_GIGA_DRAIN, MOVE_SANDSTORM, MOVE_STEALTH_ROCK, MOVE_CONFUSE_RAY }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 100, 156, 0, 0, 0, 252 ),
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .ability = ABILITY_HEAVY_METAL,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM, MOVE_THUNDER_PUNCH, MOVE_DRAGON_TAIL }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 0, 100, 0, 56, 100 ),
    .lvl = 0,
    .species = SPECIES_PROBOPASS,
    .ability = ABILITY_SAND_FORCE,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_METAL_COAT,
    .moves = { MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_SANDSTORM, MOVE_PROTECT }
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 252, 4, 0, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_HITMONTOP,
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = { MOVE_CLOSE_COMBAT, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_DETECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_MEDICHAM,
    .ability = ABILITY_PURE_POWER,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = { MOVE_CLOSE_COMBAT, MOVE_PSYCHO_CUT, MOVE_BULLET_PUNCH, MOVE_TRICK_ROOM },
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 104, 176, 0, 228, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_HERACROSS,
    .ability = ABILITY_MOXIE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = { MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 252, 0, 0, 0, 4 ),
    .lvl = 0,
    .species = SPECIES_MACHAMP,
    .ability = ABILITY_NO_GUARD,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = { MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_BULLET_PUNCH, MOVE_THUNDER_PUNCH }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 252, 252, 4, 0, 0, 0 ),
    .lvl = 0,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_TECHNICIAN,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_LOADED_DICE,
    .moves = { MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_SPORE, MOVE_PROTECT }
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .ev = TRAINER_PARTY_EVS( 0, 252, 124, 0, 0, 132 ),
    .lvl = 0,
    .species = SPECIES_HARIYAMA,
    .ability = ABILITY_GUTS,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_FLAME_ORB,
    .moves = { MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_THUNDER_PUNCH, MOVE_FAKE_OUT }
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
    .lvl = 2,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 5,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 5,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 5,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 5,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 5,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 5,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 5,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHIMECHO,
    },
    {
    .lvl = 5,
    .species = SPECIES_GARDEVOIR,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 5,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 5,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 5,
    .species = SPECIES_WOBBUFFET,
    },
    {
    .lvl = 5,
    .species = SPECIES_DUSCLOPS,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

static const struct TrainerMon sParty_Nox[] = {
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 4, 252, 0, 252, 0, 0 ),
        .lvl = 0,
        .species = SPECIES_LILLIGANT_HISUIAN,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = { MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT, MOVE_AFTER_YOU, MOVE_QUIVER_DANCE },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 0, 31, 0, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 4, 0, 0, 252, 252, 0 ),
        .lvl = 0,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_CHARCOAL,
        .moves = { MOVE_ERUPTION, MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_PROTECT },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 0, 31, 0, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 244, 0, 0, 0, 252, 12 ),
        .lvl = 0,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_COVERT_CLOAK,
        .moves = { MOVE_ARMOR_CANNON, MOVE_PSYCHIC, MOVE_TRICK_ROOM, MOVE_WIDE_GUARD },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 0, 31, 0, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 252, 0, 4, 0, 252, 0 ),
        .lvl = 0,
        .species = SPECIES_PORYGON2,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_EVIOLITE,
        .moves = { MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_TRICK_ROOM, MOVE_RECOVER },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 0, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 0, 252, 124, 0, 0, 132 ),
        .lvl = 0,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_GUTS,
        .nature = NATURE_BRAVE,
        .heldItem = ITEM_FLAME_ORB,
        .moves = { MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_THUNDER_PUNCH, MOVE_FAKE_OUT },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 252, 252, 0, 4, 0, 0 ),
        .lvl = 0,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = { MOVE_HEAVY_SLAM, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH, MOVE_STOMPING_TANTRUM },
    },
};
