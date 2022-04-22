/*
** EPITECH PROJECT, 2022
** Game Menu Menu Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void game_menu_mouse_pressed(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    top_bar_mouse_pressed(game);
}
