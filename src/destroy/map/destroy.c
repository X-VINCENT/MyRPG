/*
** EPITECH PROJECT, 2022
** Destroy Map for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_map(map_t *map)
{
    destroy_sprite(map->bg);
    free(map);
}
