/*
** EPITECH PROJECT, 2022
** Top Bar Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void top_bar_mouse_pressed(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(bar->settings_off);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(bar->quit_off);

    if (sfFloatRect_contains(&r_settings, coords.x, coords.y))
        game->stage = SETTINGS_STAGE;
    if (sfFloatRect_contains(&r_quit, coords.x, coords.y))
        sfRenderWindow_close(game->window);
}
