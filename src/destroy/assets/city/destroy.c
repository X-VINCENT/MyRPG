/*
** EPITECH PROJECT, 2022
** Destroy City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_city(city_t *city)
{
    destroy_sprite(city->bg);
    free(city);
}
