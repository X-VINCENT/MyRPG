/*
** EPITECH PROJECT, 2022
** display_inventory
** File description:
** display
*/

#include "rpg.h"

void display_inventory(game_t *game)
{
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f slot_pos = {view.x - 220, view.y + 150};

    for (int i = 0; game->inventory->slots[i] != NULL; i++) {
        slot_pos.x += 40;
        sfSprite_setPosition(game->inventory->slots[i], slot_pos);
        sfRenderWindow_drawSprite(game->window,
            game->inventory->slots[i], NULL);
    }
    return;
}
