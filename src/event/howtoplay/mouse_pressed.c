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
    sfFloatRect r_left = sfSprite_getGlobalBounds(howtoplay->l_arrow);
    sfFloatRect r_right = sfSprite_getGlobalBounds(howtoplay->r_arrow);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y)) {
        if (howtoplay->screen == 0)
            howtoplay->screen = 2;
        else
            howtoplay->screen -= 1;
    }
    if (sfFloatRect_contains(&r_right, coords.x, coords.y)) {
        if (howtoplay->screen == 2)
            howtoplay->screen = 0;
        else
            howtoplay->screen += 1;
    }
    top_bar_mouse_pressed(game);
}
