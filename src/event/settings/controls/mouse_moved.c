/*
** EPITECH PROJECT, 2022
** Settings Controls Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void reset_button_hover(game_t *game, settings_key_t *s_key)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_reset = sfSprite_getGlobalBounds(s_key->reset);

    button_hover_little(s_key->reset, s_controls->clock, &r_reset, coords);
}

void settings_controls_reset_buttons_hover(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    for (int idx = 0; idx != NB_KEYS; idx += 1)
        reset_button_hover(game, s_controls->keys[idx]);
}

void key_button_hover(game_t *game, settings_key_t *s_key)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_key_rect = sfSprite_getGlobalBounds(s_key->key_rect);
    sfFloatRect r_key = sfText_getGlobalBounds(s_key->key);

    button_hover(s_key->key_rect, s_controls->clock, &r_key_rect, coords);
    text_hover(s_key->key, s_controls->clock, &r_key, coords);
}

void settings_controls_key_buttons_hover(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    for (int idx = 0; idx != NB_KEYS; idx += 1)
        key_button_hover(game, s_controls->keys[idx]);
}

void settings_controls_mouse_moved(game_t *game)
{
    settings_controls_reset_buttons_hover(game);
    settings_controls_key_buttons_hover(game);
}
