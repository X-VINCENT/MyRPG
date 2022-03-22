/*
** EPITECH PROJECT, 2022
** Display Map for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_map(game_t *game)
{
    map_t *map = game->assets->map;

    sfRenderWindow_drawSprite(game->window, map->bg, NULL);
}
