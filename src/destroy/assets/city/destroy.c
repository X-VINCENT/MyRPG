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
    destroy_sprite(city->bg_top);
    destroy_sprite(city->doors->rat);
    sfClock_destroy(city->doors->clock);
    sfClock_destroy(city->weather_clock);
    destroy_objects(city->objects);
    destroy_circle_shape(city->pos_minimap);
    free(city);
}
