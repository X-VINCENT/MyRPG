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

    reset_button_hover(game, s_controls->up);
    reset_button_hover(game, s_controls->down);
    reset_button_hover(game, s_controls->left);
    reset_button_hover(game, s_controls->right);
    reset_button_hover(game, s_controls->jump);
    reset_button_hover(game, s_controls->dodge);
    reset_button_hover(game, s_controls->attack);
    reset_button_hover(game, s_controls->interact);
    reset_button_hover(game, s_controls->zoom_in);
    reset_button_hover(game, s_controls->zoom_out);
    reset_button_hover(game, s_controls->rotate_left);
    reset_button_hover(game, s_controls->rotate_right);
    reset_button_hover(game, s_controls->reset_view);
    reset_button_hover(game, s_controls->escape);
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

    key_button_hover(game, s_controls->up);
    key_button_hover(game, s_controls->down);
    key_button_hover(game, s_controls->left);
    key_button_hover(game, s_controls->right);
    key_button_hover(game, s_controls->jump);
    key_button_hover(game, s_controls->dodge);
    key_button_hover(game, s_controls->attack);
    key_button_hover(game, s_controls->interact);
    key_button_hover(game, s_controls->zoom_in);
    key_button_hover(game, s_controls->zoom_out);
    key_button_hover(game, s_controls->rotate_left);
    key_button_hover(game, s_controls->rotate_right);
    key_button_hover(game, s_controls->reset_view);
    key_button_hover(game, s_controls->escape);
}

void settings_controls_mouse_moved(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    settings_controls_reset_buttons_hover(game);
    settings_controls_key_buttons_hover(game);
}
