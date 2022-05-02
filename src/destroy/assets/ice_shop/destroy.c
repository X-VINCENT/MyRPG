/*
** EPITECH PROJECT, 2022
** Destroy ice for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_ice(ice_t *ice)
{
    destroy_sprite(ice->bg);
    destroy_sprite(ice->bg_top);
    destroy_image(ice->hitbox);
    free(ice);
}
