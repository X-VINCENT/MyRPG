/*
** EPITECH PROJECT, 2022
** Display Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_controls_scrolling_bar(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfRenderWindow_drawSprite(game->window, s_controls->scrolling_bar, NULL);
    sfRenderWindow_drawSprite(
        game->window, s_controls->scrolling_bar_inside, NULL);
}

void display_key(sfRenderWindow *window, settings_key_t *s_key)
{
    sfRenderWindow_drawText(window, s_key->title, NULL);
    sfRenderWindow_drawSprite(window, s_key->key_rect, NULL);
    sfRenderWindow_drawText(window, s_key->key, NULL);
    sfRenderWindow_drawSprite(window, s_key->reset, NULL);
}

void display_settings_controls_keys(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    display_key(game->window, s_controls->up);
    display_key(game->window, s_controls->down);
    display_key(game->window, s_controls->left);
    display_key(game->window, s_controls->right);
    display_key(game->window, s_controls->jump);
    display_key(game->window, s_controls->dodge);
    display_key(game->window, s_controls->attack);
    display_key(game->window, s_controls->interact);
    display_key(game->window, s_controls->zoom_in);
    display_key(game->window, s_controls->zoom_out);
    display_key(game->window, s_controls->rotate_left);
    display_key(game->window, s_controls->rotate_right);
    display_key(game->window, s_controls->reset_view);
    display_key(game->window, s_controls->escape);
}

void display_settings_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    settings_controls_scrolling_bar_event(game);
    display_settings_controls_scrolling_bar(game);
    display_settings_controls_keys(game);
}
