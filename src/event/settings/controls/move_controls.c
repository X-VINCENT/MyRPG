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
    for (int idx = 0; idx != NB_KEYS; idx += 1)
        move_key(s_controls->keys[idx], offset);
}

void move_controls_up(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    if (sfSprite_getPosition(s_controls->scrolling_bar_inside).y > 329) {
        sfSprite_move(s_controls->scrolling_bar_inside,
            (sfVector2f){0, -10});
        move_keys(s_controls, 10 * (NB_KEYS / 3.9));
    }
}

void move_controls_down(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    if (sfSprite_getPosition(s_controls->scrolling_bar_inside).y < 629) {
        sfSprite_move(s_controls->scrolling_bar_inside,
            (sfVector2f){0, 10});
        move_keys(s_controls, -10 * (NB_KEYS / 3.9));
    }
}

void settings_controls_scrolling_bar_event(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    float delta = game->event->event->mouseWheelScroll.delta;

    if (time_elapsed(s_controls->scrolling_clock) > 0.01) {
        if (delta == 1 || sfKeyboard_isKeyPressed(game->keys[ZOOM_IN])) {
            move_controls_up(game);
            game->event->event->mouseWheelScroll.delta = 0;
        } else if (delta == -1 ||
            sfKeyboard_isKeyPressed(game->keys[ZOOM_OUT])) {
            move_controls_down(game);
            game->event->event->mouseWheelScroll.delta = 0;
        }
        sfClock_restart(s_controls->scrolling_clock);
    }
}
