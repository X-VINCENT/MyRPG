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
    for (int i = 0; inventory->slots[i] != NULL; i++)
        sfSprite_destroy(inventory->slots[i]);
    free(inventory->slots);
    free(inventory);
    return;
}
