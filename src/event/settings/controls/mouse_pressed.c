/*
** EPITECH PROJECT, 2022
** Settings Controls Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_controls_mouse_pressed_key(game_t *game, settings_key_t *s_key)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_key = sfSprite_getGlobalBounds(s_key->key_rect);

    if (sfFloatRect_contains(&r_key, coords.x, coords.y))
        s_controls->key_selected = 1;
}

void settings_controls_mouse_pressed_keys(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    settings_controls_mouse_pressed_key(game, s_controls->up);
    settings_controls_mouse_pressed_key(game, s_controls->down);
    settings_controls_mouse_pressed_key(game, s_controls->left);
    settings_controls_mouse_pressed_key(game, s_controls->right);
    settings_controls_mouse_pressed_key(game, s_controls->jump);
    settings_controls_mouse_pressed_key(game, s_controls->dodge);
    settings_controls_mouse_pressed_key(game, s_controls->attack);
    settings_controls_mouse_pressed_key(game, s_controls->interact);
    settings_controls_mouse_pressed_key(game, s_controls->zoom_in);
    settings_controls_mouse_pressed_key(game, s_controls->zoom_out);
    settings_controls_mouse_pressed_key(game, s_controls->rotate_left);
    settings_controls_mouse_pressed_key(game, s_controls->rotate_right);
    settings_controls_mouse_pressed_key(game, s_controls->reset_view);
    settings_controls_mouse_pressed_key(game, s_controls->escape);
}

void settings_controls_mouse_pressed(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    settings_controls_mouse_pressed_keys(game);
}
