/*
** EPITECH PROJECT, 2022
** City Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void city_mouse_moved(game_t *game)
{
    city_t *city = game->assets->city;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    rat_mouse_moved(game);
}
