/*
** EPITECH PROJECT, 2022
** Display Settings Graphics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_graphics_res(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;

    sfRenderWindow_drawText(game->window, s_graphics->title_res, NULL);
    if (game->res == 720)
        sfRenderWindow_drawText(game->window, s_graphics->res[0], NULL);
    if (game->res == 1080)
        sfRenderWindow_drawText(game->window, s_graphics->res[1], NULL);
    if (game->res == 1440)
        sfRenderWindow_drawText(game->window, s_graphics->res[2], NULL);
    if (game->res == 2160)
        sfRenderWindow_drawText(game->window, s_graphics->res[3], NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->res_left, NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->res_right, NULL);
}

void display_settings_graphics_fps(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;

    sfRenderWindow_drawText(game->window, s_graphics->title_fps, NULL);
    if (game->fps == 30)
        sfRenderWindow_drawText(game->window, s_graphics->fps[0], NULL);
    if (game->fps == 60)
        sfRenderWindow_drawText(game->window, s_graphics->fps[1], NULL);
    if (game->fps == 144)
        sfRenderWindow_drawText(game->window, s_graphics->fps[2], NULL);
    if (game->fps == 240)
        sfRenderWindow_drawText(game->window, s_graphics->fps[3], NULL);
    if (game->fps == 0)
        sfRenderWindow_drawText(game->window, s_graphics->fps[4], NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->fps_left, NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->fps_right, NULL);
}

void display_settings_graphics_vsync(game_t *game)
{
    settings_graphics_t *s_graphics = game->assets->settings->graphics;

    sfRenderWindow_drawText(game->window, s_graphics->title_vsync, NULL);
    sfRenderWindow_drawText(
        game->window, s_graphics->vsync[game->vsync], NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->vsync_left, NULL);
    sfRenderWindow_drawSprite(game->window, s_graphics->vsync_right, NULL);
}

void display_settings_graphics(game_t *game)
{
    display_settings_graphics_res(game);
    display_settings_graphics_fps(game);
    display_settings_graphics_vsync(game);
}
