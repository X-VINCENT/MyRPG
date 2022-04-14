/*
** EPITECH PROJECT, 2022
** Display Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_settings_controls_choose_key(game_t *game)
{
    settings_choose_key_t *s_choose_key =
        game->assets->settings->controls->choose_key;

    sfRenderWindow_drawSprite(game->window, s_choose_key->bg_rect, NULL);
    sfRenderWindow_drawText(game->window, s_choose_key->text, NULL);
    sfRenderWindow_drawText(game->window, s_choose_key->quit, NULL);
}

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

    for (int idx = 0; idx != NB_KEYS; idx += 1)
        display_key(game->window, s_controls->keys[idx]);
}

void display_settings_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    if (s_controls->key_selected == -1)
        settings_controls_scrolling_bar_event(game);
    display_settings_controls_scrolling_bar(game);
    display_settings_controls_keys(game);
    if (s_controls->key_selected >= 0)
        display_settings_controls_choose_key(game);
}
