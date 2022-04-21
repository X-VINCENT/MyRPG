/*
** EPITECH PROJECT, 2022
** HowToPlay Menu Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void howtoplay_mouse_pressed(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    top_bar_mouse_pressed(game);
}
