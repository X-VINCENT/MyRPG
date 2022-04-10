/*
** EPITECH PROJECT, 2022
** Display Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfRenderWindow_drawSprite(game->window, settings->scrolling_rect, NULL);
    sfRenderWindow_drawSprite(game->window, settings->bg, NULL);
    sfRenderWindow_drawText(game->window, settings->settings_text, NULL);
    display_top_bar(game);
}
