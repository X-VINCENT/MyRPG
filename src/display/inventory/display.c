/*
** EPITECH PROJECT, 2022
** display_inventory
** File description:
** display
*/

#include "rpg.h"

void display_inventory(game_t *game)
{
    inventory_t *inventory = game->inventory;
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f slot_pos = {view.x - 220, view.y + 150};

    for (int i = 0; inventory->slots_on[i] != NULL; i++) {
        slot_pos.x += 40;
        sfSprite_setPosition(game->inventory->slots_on[i], slot_pos);
        sfSprite_setPosition(game->inventory->slots_off[i], slot_pos);
        if (i == game->inventory->selected)
            sfRenderWindow_drawSprite(game->window,
                game->inventory->slots_on[i], NULL);
        else
            sfRenderWindow_drawSprite(game->window,
                game->inventory->slots_off[i], NULL);
    }
    return;
}
