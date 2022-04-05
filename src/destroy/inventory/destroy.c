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
    for (int i = 0; inventory->slots_on[i] != NULL; i++) {
        sfTexture_destroy(sfSprite_getTexture(inventory->slots_on[i]));
        sfSprite_destroy(inventory->slots_on[i]);
        sfTexture_destroy(sfSprite_getTexture(inventory->slots_off[i]));
        sfSprite_destroy(inventory->slots_off[i]);
    }
    free(inventory->slots_on);
    free(inventory->slots_off);
    free(inventory);
    return;
}
