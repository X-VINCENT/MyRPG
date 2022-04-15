/*
** EPITECH PROJECT, 2022
** Abilities Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void abilities_mouse_moved(game_t *game)
{
    abilities_t *abilities = game->assets->abilities;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    top_bar_mouse_moved(game);
}
