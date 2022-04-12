/*
** EPITECH PROJECT, 2022
** Display Settings Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_game(game_t *game)
{
    settings_game_t *s_game = game->assets->settings->game;

    sfRenderWindow_drawText(game->window, s_game->title_language, NULL);
    sfRenderWindow_drawText(game->window, s_game->language, NULL);
    sfRenderWindow_drawSprite(
        game->window, s_game->arrow_language_left, NULL);
    sfRenderWindow_drawSprite(
        game->window, s_game->arrow_language_right, NULL);
}
