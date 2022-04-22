/*
** EPITECH PROJECT, 2022
** Stats Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void stats_mouse_moved(game_t *game)
{
    stats_t *stats = game->assets->stats;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    top_bar_mouse_moved(game);
}
