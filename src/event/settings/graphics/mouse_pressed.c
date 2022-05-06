/*
** EPITECH PROJECT, 2022
** Settings Graphics Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void mouse_pressed_fps_settings(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(s_graphics->fps_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(s_graphics->fps_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y))
        down_fps(game);
    if (sfFloatRect_contains(&r_right, coords.x, coords.y))
        up_fps(game);
}

void mouse_pressed_res_settings(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(s_graphics->res_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(s_graphics->res_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y))
        down_res(game);
    if (sfFloatRect_contains(&r_right, coords.x, coords.y))
        up_res(game);
}

void mouse_pressed_vsync_settings(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_left = sfSprite_getGlobalBounds(s_graphics->vsync_left);
    sfFloatRect r_right = sfSprite_getGlobalBounds(s_graphics->vsync_right);

    if (sfFloatRect_contains(&r_left, coords.x, coords.y) ||
        sfFloatRect_contains(&r_right, coords.x, coords.y)) {
        if (game->vsync == 0)
            game->vsync = 1;
        else
            game->vsync = 0;
    }
    if (game->vsync == 0)
        sfRenderWindow_setVerticalSyncEnabled(game->window, sfFalse);
    else
        sfRenderWindow_setVerticalSyncEnabled(game->window, sfTrue);
}

void settings_graphics_mouse_pressed(game_t *game)
{
    mouse_pressed_fps_settings(game);
    mouse_pressed_res_settings(game);
    mouse_pressed_vsync_settings(game);
}
