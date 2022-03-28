/*
** EPITECH PROJECT, 2022
** Mouse moved home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_mouse_moved(game_t *game)
{
    home_menu_t *home = game->assets->home_menu;

    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(home->quit);
    sfFloatRect r_option = sfSprite_getGlobalBounds(home->options);

    if (sfFloatRect_contains(&r_quit, coords.x, coords.y))
        home->quit_state = 1;
    if (sfFloatRect_contains(&r_option, coords.x, coords.y))
        home->options_state = 1;
}
