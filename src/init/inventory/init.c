/*
** EPITECH PROJECT, 2022
** inventory init
** File description:
** init
*/

#include "rpg.h"

void init_inventory(game_t *game)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 512, 512};
    sfVector2f scale = {0.05, 0.05};

    game->inventory = malloc(sizeof(inventory_t));
    game->inventory->slots_on = malloc(sizeof(sfSprite *)
        * INVENTORY_SIZE + 1);
    game->inventory->slots_off = malloc(sizeof(sfSprite *)
        * INVENTORY_SIZE + 1);
    game->inventory->selected = 0;
    for (int i = 0; i < INVENTORY_SIZE; i += 1) {
        game->inventory->slots_on[i] = create_sprite(
            game->textures->slot_on, rect, pos, scale);
        game->inventory->slots_off[i] = create_sprite(
            game->textures->slot_off, rect, pos, scale);
        set_sprite_origin(game->inventory->slots_on[i], rect);
        set_sprite_origin(game->inventory->slots_off[i], rect);
    }
    game->inventory->slots_on[INVENTORY_SIZE] = NULL;
    game->inventory->slots_off[INVENTORY_SIZE] = NULL;
}
