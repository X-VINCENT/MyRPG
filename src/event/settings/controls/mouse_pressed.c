/*
** EPITECH PROJECT, 2022
** Settings Controls Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_controls_mouse_pressed_key(game_t *game, int idx_key)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    settings_key_t *s_key = s_controls->keys[idx_key];
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_key = sfSprite_getGlobalBounds(s_key->key_rect);

    if (sfFloatRect_contains(&r_key, coords.x, coords.y))
        s_controls->key_selected = idx_key;
}

void settings_controls_mouse_pressed_keys(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    for (int idx = 0; idx != NB_KEYS; idx += 1)
        settings_controls_mouse_pressed_key(game, idx);
}

void settings_controls_mouse_pressed(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    settings_controls_mouse_pressed_keys(game);
}
