/*
** EPITECH PROJECT, 2022
** destroy inventory
** File description:
** destroy
*/

#include "rpg.h"

void destroy_inventory(inventory_t *inventory)
{
    if (!inventory)
        return;
    for (int idx = 0; inventory->slots_off[idx] != NULL; idx += 1) {
        destroy_sprite(inventory->slots_off[idx]);
        destroy_sprite(inventory->slots_on[idx]);
    }
    free(inventory->slots_on);
    free(inventory->slots_off);
    free(inventory);
}