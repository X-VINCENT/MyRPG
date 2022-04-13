/*
** EPITECH PROJECT, 2022
** Key Pressed Settings Choose Key for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void settings_key_pressed_choose_key(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfEvent *event = game->event->event;

    game->keys[s_controls->key_selected] = event->key.code;
    sfText_setString(s_controls->keys[s_controls->key_selected]->key,
        get_key_name(game->keys[s_controls->key_selected]));
    set_text_origin(s_controls->keys[s_controls->key_selected]->key);
    s_controls->key_selected = -1;
}
