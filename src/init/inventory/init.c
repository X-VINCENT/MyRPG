/*
** EPITECH PROJECT, 2022
** inventory init
** File description:
** init
*/

#include "rpg.h"

void init_inventory(game_t *game)
{
    sfVector2f position = {0, 0};
    sfIntRect rect = {0, 0, 512, 512};

    game->inventory = malloc(sizeof(inventory_t));
    game->inventory->slots_on = malloc(sizeof(sfSprite *)
        * INVENTORY_SIZE + 1);
    game->inventory->slots_off = malloc(sizeof(sfSprite *)
        * INVENTORY_SIZE + 1);
    game->inventory->selected = 0;
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        game->inventory->slots_on[i] = create_sprite(SLOT_PATH_ON,
            rect, position, (sfVector2f){0.05, 0.05});
        game->inventory->slots_off[i] = create_sprite(SLOT_PATH_OFF,
            rect, position, (sfVector2f){0.05, 0.05});
    }
    game->inventory->slots_on[INVENTORY_SIZE] = NULL;
    game->inventory->slots_off[INVENTORY_SIZE] = NULL;
    return;
}
