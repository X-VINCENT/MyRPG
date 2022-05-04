/*
** EPITECH PROJECT, 2022
** Destroy market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_market(market_t *market)
{
    destroy_sprite(market->bg);
    destroy_sprite(market->bg_top);
    destroy_image(market->hitbox);
    destroy_objects(market->objects);
    free(market);
}
