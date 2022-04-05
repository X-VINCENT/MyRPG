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
    game->inventory->slots = malloc(sizeof(sfSprite *) * INVENTORY_SIZE + 1);
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        game->inventory->slots[i] = create_sprite(SLOT_PATH,
            rect, position, (sfVector2f){0.05, 0.05});
    }
    game->inventory->slots[INVENTORY_SIZE] = NULL;
    return;
}
