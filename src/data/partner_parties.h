static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .lvl = 0,
        .species = SPECIES_SKARMORY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_ROCKY_HELMET,
        .moves = { MOVE_STEEL_WING, MOVE_AERIAL_ACE, MOVE_TAILWIND, MOVE_PROTECT },
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 4),
        .lvl = 0,
        .species = SPECIES_AGGRON,
        .ability = ABILITY_HEAVY_METAL,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = { MOVE_HEAVY_SLAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_PROTECT},
    },
    {
        .iv = TRAINER_PARTY_IVS( 31, 31, 31, 31, 31, 31 ),
        .ev = TRAINER_PARTY_EVS( 0, 252, 252, 0, 4, 0 ),
        .lvl = 0,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_BRAVE,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = { MOVE_IRON_HEAD, MOVE_PSYCHIC_FANGS, MOVE_BULLET_PUNCH, MOVE_STOMPING_TANTRUM },
    }
};
