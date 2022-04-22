/*
** EPITECH PROJECT, 2022
** Top Bar Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void top_bar_mouse_moved(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_play = sfText_getGlobalBounds(bar->game);
    sfFloatRect r_abilities = sfText_getGlobalBounds(bar->abilities);
    sfFloatRect r_stats = sfText_getGlobalBounds(bar->stats);
    sfFloatRect r_howtoplay = sfText_getGlobalBounds(bar->howtoplay);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(bar->settings_off);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(bar->quit_off);

    text_hover(bar->game, bar->clock, &r_play, coords);
    text_hover(bar->abilities, bar->clock, &r_abilities, coords);
    text_hover(bar->stats, bar->clock, &r_stats, coords);
    text_hover(bar->howtoplay, bar->clock, &r_howtoplay, coords);
    button_hover(bar->settings_off, bar->clock, &r_settings, coords);
    button_hover(bar->settings_on, bar->clock, &r_settings, coords);
    button_hover(bar->quit_off, bar->clock, &r_quit, coords);
    button_hover(bar->quit_on, bar->clock, &r_quit, coords);
}
