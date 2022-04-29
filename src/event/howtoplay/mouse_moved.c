/*
** EPITECH PROJECT, 2022
** HowToPlay Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void howtoplay_mouse_moved(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(howtoplay->l_arrow);
    sfFloatRect r_right = sfSprite_getGlobalBounds(howtoplay->r_arrow);

    top_bar_mouse_moved(game);
}
