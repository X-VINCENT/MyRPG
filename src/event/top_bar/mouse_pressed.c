/*
** EPITECH PROJECT, 2022
** Top Bar Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void top_bar_mouse_pressed_texts(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_game = sfText_getGlobalBounds(bar->game);
    sfFloatRect r_abilities = sfText_getGlobalBounds(bar->abilities);
    sfFloatRect r_stats = sfText_getGlobalBounds(bar->stats);
    sfFloatRect r_howtoplay = sfText_getGlobalBounds(bar->howtoplay);

    if (sfFloatRect_contains(&r_game, coords.x, coords.y))
        game->stage = GAME_STAGE;
    if (sfFloatRect_contains(&r_abilities, coords.x, coords.y))
        game->stage = ABILITIES_STAGE;
    if (sfFloatRect_contains(&r_stats, coords.x, coords.y))
        game->stage = STATS_STAGE;
    if (sfFloatRect_contains(&r_howtoplay, coords.x, coords.y))
        game->stage = HOWTOPLAY_STAGE;
}

void top_bar_mouse_pressed(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_settings = sfSprite_getGlobalBounds(bar->settings_off);
    sfFloatRect r_quit = sfSprite_getGlobalBounds(bar->quit_off);
    sfFloatRect r_back = {0, 35, 223, 101};

    top_bar_mouse_pressed_texts(game);
    if (sfFloatRect_contains(&r_settings, coords.x, coords.y))
        game->stage = SETTINGS_STAGE;
    if (sfFloatRect_contains(&r_quit, coords.x, coords.y))
        sfRenderWindow_close(game->window);
    if (sfFloatRect_contains(&r_back, coords.x, coords.y)) {
        game->last_stage = START_STAGE;
        game->stage = START_STAGE;
    }
}
