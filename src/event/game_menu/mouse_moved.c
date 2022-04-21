/*
** EPITECH PROJECT, 2022
** Game Menu Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void game_menu_mouse_moved(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    top_bar_mouse_moved(game);
}
