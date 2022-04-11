/*
** EPITECH PROJECT, 2022
** Key Pressed Settings for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_navigate_menus(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys->move_down) {
        if (settings->current == 3)
            settings->current = 0;
        else
            settings->current += 1;
    }
    if (event->key.code == game->keys->move_up) {
        if (settings->current == 0)
            settings->current = 3;
        else
            settings->current -= 1;
    }
}

void settings_key_pressed(game_t *game)
{
    settings_t *settings = game->assets->settings;
    sfEvent *event = game->event->event;

    settings_navigate_menus(game);
    settings_audio_key_pressed(game);
    settings_controls_key_pressed(game);
    settings_game_key_pressed(game);
    settings_graphics_key_pressed(game);
    top_bar_key_pressed(game);
}
