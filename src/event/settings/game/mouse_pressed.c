/*
** EPITECH PROJECT, 2022
** Settings Game Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_game_mouse_pressed(game_t *game)
{
    settings_game_t *s_game = game->assets->settings->game;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_l = sfSprite_getGlobalBounds(s_game->arrow_language_left);
    sfFloatRect r_r = sfSprite_getGlobalBounds(s_game->arrow_language_right);

    if (sfFloatRect_contains(&r_l, coords.x, coords.y)) {
        if (game->language == 0)
            game->language = 3;
        else
            game->language -= 1;
    }
    if (sfFloatRect_contains(&r_r, coords.x, coords.y)) {
        if (game->language == 3)
            game->language = 0;
        else
            game->language += 1;
    }
    set_language_texts(game);
}
