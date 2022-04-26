/*
** EPITECH PROJECT, 2022
** display_inventory
** File description:
** display
*/

#include "rpg.h"

void set_scale_position_inventory(
    sfSprite *slot_on, sfSprite *slot_off, sfVector2f pos, sfVector2f scale)
{
        sfSprite_setPosition(slot_on, pos);
        sfSprite_setPosition(slot_off, pos);
        sfSprite_setScale(slot_on, scale);
        sfSprite_setScale(slot_off, scale);
}

void display_inventory(game_t *game)
{
    inventory_t *inventory = game->inventory;
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f size = sfView_getSize(game->view);
    int offset = size.y / 12;
    sfVector2f slot_pos = {view.x - (((INVENTORY_SIZE + 2) * offset) / 2),
        view.y + size.y / 2 - (size.y / 10)};
    sfVector2f scale = {sfView_getSize(game->view).y / 7000,
        sfView_getSize(game->view).y / 7000};

    for (int i = 0; inventory->slots_on[i] != NULL; i++) {
        slot_pos.x += offset;
        set_scale_position_inventory(
            inventory->slots_on[i], inventory->slots_off[i], slot_pos, scale);
        if (i == inventory->selected)
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_on[i], NULL);
        else
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_off[i], NULL);
    }
}
