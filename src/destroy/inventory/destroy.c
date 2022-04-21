/*
** EPITECH PROJECT, 2022
** Destroy Inventory for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

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
    if (inventory)
        free(inventory);
}
