/*
** EPITECH PROJECT, 2022
** inventory init
** File description:
** init
*/

#include "rpg.h"

const sfIntRect r_items[] = {
    R_EMPTY, R_BOMB,
    R_MONA, R_GOLD,
    R_WEAPON, R_PROMO_CODE};

const int item_price[] = {
    EMPTY_PRICE, BOMB_PRICE,
    MONA_PRICE, COIN_PRICE,
    WEAPON_PRICE, PROMO_CODE_PRICE,
    -1};

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
    item->price_for_sell = init_int_array(NB_ITEMS);
    item->sprite = malloc(sizeof(sfSprite *) * NB_ITEMS + 1);
    for (int idx = 0; idx != NB_ITEMS; idx += 1) {
        item->sprite[idx] = create_sprite(
            game->textures->gui, r_items[idx], pos, scale);
        item->price_for_sell[idx] = item_price[idx];
        set_sprite_origin(item->sprite[idx], r_items[idx]);
    }
    item->sprite[NB_ITEMS] = NULL;
    item->is_legal = 0;
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
