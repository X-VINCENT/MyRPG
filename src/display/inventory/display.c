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
    int offset = 30;
    sfVector2f slot_pos = {view.x - (((INVENTORY_SIZE + 2) * offset) / 2),
        view.y + size.y / 2 - 50};

    for (int i = 0; inventory->slots_on[i] != NULL; i++) {
        slot_pos.x += offset;
        sfSprite_setPosition(inventory->slots_on[i], slot_pos);
        sfSprite_setPosition(inventory->slots_off[i], slot_pos);
        if (i == inventory->selected)
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_on[i], NULL);
        else
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_off[i], NULL);
    }
}
