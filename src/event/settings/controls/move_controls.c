/*
** EPITECH PROJECT, 2022
** Move Settings Controls for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_key(settings_key_t *s_key, int offset)
{
    sfText_move(s_key->title, (sfVector2f){0, offset});
    sfSprite_move(s_key->key_rect, (sfVector2f){0, offset});
    sfText_move(s_key->key, (sfVector2f){0, offset});
    sfSprite_move(s_key->reset, (sfVector2f){0, offset});
}

void move_keys(settings_controls_t *s_controls, int offset)
{
    move_key(s_controls->up, offset);
    move_key(s_controls->down, offset);
    move_key(s_controls->left, offset);
    move_key(s_controls->right, offset);
    move_key(s_controls->jump, offset);
    move_key(s_controls->dodge, offset);
    move_key(s_controls->attack, offset);
    move_key(s_controls->interact, offset);
    move_key(s_controls->zoom_in, offset);
    move_key(s_controls->zoom_out, offset);
    move_key(s_controls->rotate_left, offset);
    move_key(s_controls->rotate_right, offset);
    move_key(s_controls->reset_view, offset);
    move_key(s_controls->escape, offset);
}

void move_controls_up(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    if (sfSprite_getPosition(s_controls->scrolling_bar_inside).y > 329) {
        sfSprite_move(s_controls->scrolling_bar_inside,
            (sfVector2f){0, -10});
        move_keys(s_controls, 30);
    }
}

void move_controls_down(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    if (sfSprite_getPosition(s_controls->scrolling_bar_inside).y < 629) {
        sfSprite_move(s_controls->scrolling_bar_inside,
            (sfVector2f){0, 10});
        move_keys(s_controls, -30);
    }
}

void settings_controls_scrolling_bar_event(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    if (time_elapsed(s_controls->scrolling_clock) > 0.01) {
        if (sfKeyboard_isKeyPressed(game->keys->zoom_in))
            move_controls_up(game);
        else if (sfKeyboard_isKeyPressed(game->keys->zoom_out))
            move_controls_down(game);
        sfClock_restart(s_controls->scrolling_clock);
    }
}
