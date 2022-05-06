/*
** EPITECH PROJECT, 2022
** inventory init
** File description:
** init
*/

#include "rpg.h"

const sfIntRect r_items[] = {
    R_EMPTY,
    R_MONA,
    R_THE_WAVE,
    R_TROPHY,
    R_BOMB,
    R_KIT,
    R_KEY,
    R_GARBAGE_BAG,
    R_TEE_SHIRT,
    R_PANTS,
    R_CAP,
    R_ICE_CREAM,
    R_KNACKI,
    R_MONSTER,
    R_CHICKEN,
    R_PIZZA,
    R_BUCKET_KFC,
    R_TOILET_PAPER,
    R_WATER_BOTTLE,
    {0, 0, 0, 0}
};

const int item_price[] = {
    EMPTY_PRICE,
    MONA_PRICE,
    THE_WAVE_PRICE,
    TROPHY_PRICE,
    BOMB_PRICE,
    KIT_PRICE,
    KEY_PRICE,
    GARBAGE_BAG_PRICE,
    TEE_SHIRT_PRICE,
    PANTS_PRICE,
    CAP_PRICE,
    ICE_CREAM_PRICE,
    KNACKI_PRICE,
    MONSTER_PRICE,
    CHICKEN_PRICE,
    PIZZA_PRICE,
    BUCKET_KFC_PRICE,
    TOILET_PAPER_PRICE,
    WATER_BOTTLE_PRICE,
    -1
};

const int item_legality[] = {
    LEGAL,
    ILLEGAL,
    ILLEGAL,
    ILLEGAL,
    ILLEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    ILLEGAL,
    ILLEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    LEGAL,
    -1
};

const float item_scale[] = {
    S_EMPTY,
    S_MONA,
    S_THE_WAVE,
    S_TROPHY,
    S_BOMB,
    S_KIT,
    S_KEY,
    S_GARBAGE_BAG,
    S_TEE_SHIRT,
    S_PANTS,
    S_CAP,
    S_ICE_CREAM,
    S_KNACKI,
    S_MONSTER,
    S_CHICKEN,
    S_PIZZA,
    S_BUCKET_KFC,
    S_TOILET_PAPER,
    S_WATER_BOTTLE,
    -1
};

void init_slots(game_t *game)
{
    inventory_t *inventory = game->inventory;
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 512, 512};
    sfVector2f scale = {0.05, 0.05};

    inventory->slots_on = malloc(sizeof(sfSprite *) * INVENTORY_SIZE + 1);
    inventory->slots_off = malloc(sizeof(sfSprite *) * INVENTORY_SIZE + 1);
    inventory->selected = 0;
    for (int i = 0; i < INVENTORY_SIZE; i += 1) {
        inventory->slots_on[i] = create_sprite(
            game->textures->slot_on, rect, pos, scale);
        inventory->slots_off[i] = create_sprite(
            game->textures->slot_off, rect, pos, scale);
        set_sprite_origin(inventory->slots_on[i], rect);
        set_sprite_origin(inventory->slots_off[i], rect);
    }
    inventory->slots_on[INVENTORY_SIZE] = NULL;
    inventory->slots_off[INVENTORY_SIZE] = NULL;
}

item_t *init_item(game_t *game)
{
    item_t *item = malloc(sizeof(item_t));
    sfVector2f pos = {0, 0};
    sfVector2f scale = {1, 1};

    item->name = EMPTY;
    item->selling_price = init_int_array(NB_ITEMS);
    item->legality = init_int_array(NB_ITEMS);
    item->scale = init_float_array(NB_ITEMS);
    item->sprite = malloc(sizeof(sfSprite *) * NB_ITEMS + 1);
    for (int idx = 0; idx != NB_ITEMS; idx += 1) {
        item->sprite[idx] = create_sprite(
            game->textures->gui, r_items[idx], pos, scale);
        item->selling_price[idx] = item_price[idx];
        item->legality[idx] = item_legality[idx];
        item->scale[idx] = item_scale[idx];
        set_sprite_origin(item->sprite[idx], r_items[idx]);
    }
    item->sprite[NB_ITEMS] = NULL;
    return item;
}

void init_items(game_t *game)
{
    inventory_t *inventory = game->inventory;

    inventory->items = malloc(sizeof(item_t *) * INVENTORY_SIZE + 1);
    for (int idx = 0; idx != INVENTORY_SIZE; idx += 1)
        inventory->items[idx] = init_item(game);
    inventory->items[INVENTORY_SIZE] = NULL;
}

void init_inventory(game_t *game)
{
    game->inventory = malloc(sizeof(inventory_t));

    init_slots(game);
    init_items(game);
}
