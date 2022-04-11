/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Mouse Button Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void clothe_store_mouse_pressed(game_t *game)
{
    appartment_t *appartment = game->assets->appartment;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    rat_mouse_pressed(game);
}
