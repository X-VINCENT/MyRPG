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
    sfFloatRect r_menu1 = sfText_getGlobalBounds(bar->menu1);
    sfFloatRect r_abilities = sfText_getGlobalBounds(bar->abilities);
    sfFloatRect r_menu3 = sfText_getGlobalBounds(bar->menu3);
    sfFloatRect r_menu4 = sfText_getGlobalBounds(bar->menu4);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(bar->settings_off);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(bar->quit_off);

    text_hover(bar->menu1, bar->clock, &r_menu1, coords);
    text_hover(bar->abilities, bar->clock, &r_abilities, coords);
    text_hover(bar->menu3, bar->clock, &r_menu3, coords);
    text_hover(bar->menu4, bar->clock, &r_menu4, coords);
    button_hover(bar->settings_off, bar->clock, &r_settings, coords);
    button_hover(bar->settings_on, bar->clock, &r_settings, coords);
    button_hover(bar->quit_off, bar->clock, &r_quit, coords);
    button_hover(bar->quit_on, bar->clock, &r_quit, coords);
}
