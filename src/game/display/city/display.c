/*
** EPITECH PROJECT, 2022
** Display City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_city(game_t *game)
{
    city_t *city = game->assets->city;

    sfRenderWindow_drawSprite(game->window, city->bg, NULL);
}
