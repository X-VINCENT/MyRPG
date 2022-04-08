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
    sfVector2f size = sfView_getSize(game->view);
    sfVector2f slot_pos = {view.x - (((INVENTORY_SIZE + 1) *
        sfSprite_getScale(game->inventory->slots_off[0]).x *
        sfSprite_getTextureRect(game->inventory->slots_off[0]).width)
        / 2) + 4, view.y + size.y / 2 - 50};

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
