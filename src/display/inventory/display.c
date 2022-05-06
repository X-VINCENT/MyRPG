/*
** EPITECH PROJECT, 2022
** display_inventory
** File description:
** display
*/

#include "rpg.h"

void set_scale_position_inventory_slots(
    sfSprite *slot_on, sfSprite *slot_off, sfVector2f pos, sfVector2f scale)
{
        sfSprite_setPosition(slot_on, pos);
        sfSprite_setPosition(slot_off, pos);
        sfSprite_setScale(slot_on, scale);
        sfSprite_setScale(slot_off, scale);
}

void display_slots_inventory(game_t *game, sfVector2f slot_pos,
    sfVector2f scale, int offset)
{
    inventory_t *inventory = game->inventory;

    for (int i = 0; inventory->slots_on[i] != NULL; i++) {
        slot_pos.x += offset;
        set_scale_position_inventory_slots(
            inventory->slots_on[i], inventory->slots_off[i], slot_pos, scale);
        if (i == inventory->selected)
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_on[i], NULL);
        else
            sfRenderWindow_drawSprite(game->window,
                inventory->slots_off[i], NULL);
    }
}

void set_scale_position_inventory_items(
    item_t *item, sfVector2f pos, sfVector2f scale)
{
    sfVector2f new_scale;

    for (int idx = 0; item->sprite[idx] != NULL; idx += 1) {
        new_scale = (sfVector2f){scale.x * item->scale[idx],
            scale.y * item->scale[idx]};
        sfSprite_setPosition(item->sprite[idx], pos);
        sfSprite_setScale(item->sprite[idx], new_scale);
    }
}

void display_items_inventory(game_t *game, sfVector2f slot_pos,
    sfVector2f scale, int offset)
{
    inventory_t *inventory = game->inventory;
    item_t *item;

    for (int idx = 0; inventory->items[idx] != NULL; idx += 1) {
        slot_pos.x += offset;
        item = inventory->items[idx];
        set_scale_position_inventory_items(item, slot_pos, scale);
        sfRenderWindow_drawSprite(
            game->window, item->sprite[item->name], NULL);
    }
}

void display_inventory(game_t *game)
{
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f size = sfView_getSize(game->view);
    int offset = size.y / 12;
    sfVector2f slot_pos = {view.x - (((INVENTORY_SIZE + 1) * offset) / 2),
        view.y + size.y / 2 - (size.y / 10)};
    sfVector2f scale = {sfView_getSize(game->view).y / 7000,
        sfView_getSize(game->view).y / 7000};

    display_slots_inventory(game, slot_pos, scale, offset);
    display_items_inventory(game, slot_pos, scale, offset);
}
