/*
** EPITECH PROJECT, 2022
** Destroy Inventory for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_item(item_t *item)
{
    if (!item)
        return;
    for (int idx = 0; item->sprite[idx] != NULL; idx += 1)
        destroy_sprite(item->sprite[idx]);
    free(item->selling_price);
    free(item->legality);
    free(item->scale);
    free(item);
}

void destroy_items(item_t **items)
{
    if (!items)
        return;
    for (int idx = 0; items[idx] != NULL; idx += 1)
        destroy_item(items[idx]);
    free(items);
}

void destroy_inventory(inventory_t *inventory)
{
    if (!inventory)
        return;
    for (int idx = 0; inventory->slots_off[idx] != NULL; idx += 1) {
        if (inventory->slots_off[idx])
            destroy_sprite(inventory->slots_off[idx]);
        if (inventory->slots_on[idx])
            destroy_sprite(inventory->slots_on[idx]);
    }
    if (inventory->slots_off)
        free(inventory->slots_off);
    if (inventory->slots_on)
        free(inventory->slots_on);
    destroy_items(inventory->items);
    if (inventory)
        free(inventory);
}
