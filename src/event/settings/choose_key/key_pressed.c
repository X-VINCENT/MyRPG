/*
** EPITECH PROJECT, 2022
** Key Pressed Settings Choose Key for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void display_key_already_used(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    switch (game->language) {
        case ENGLISH:
            sfText_setString(s_controls->choose_key->text, ENGLISH_KEY_BIND);
            break;
        case FRENCH:
            sfText_setString(s_controls->choose_key->text, FRENCH_KEY_BIND);
            break;
        case GERMAN:
            sfText_setString(s_controls->choose_key->text, GERMAN_KEY_BIND);
            break;
        case SPANISH:
            sfText_setString(s_controls->choose_key->text, SPANISH_KEY_BIND);
            break;
        default:
            break;
    }
    set_text_origin(s_controls->choose_key->text);
    return;
}

void reset_choose_key_texts(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    switch (game->language) {
        case ENGLISH:
            sfText_setString(s_controls->choose_key->text, ENGLISH_PRESS_KEY);
            break;
        case FRENCH:
            sfText_setString(s_controls->choose_key->text, FRENCH_PRESS_KEY);
            break;
        case GERMAN:
            sfText_setString(s_controls->choose_key->text, GERMAN_PRESS_KEY);
            break;
        case SPANISH:
            sfText_setString(s_controls->choose_key->text, SPANISH_PRESS_KEY);
            break;
        default:
            break;
    }
    set_text_origin(s_controls->choose_key->text);
    return;
}

void settings_key_pressed_choose_key(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;
    sfEvent *event = game->event->event;

    for (int idx = 0; idx != NB_KEYS; idx += 1)
        if ((event->key.code == game->keys[idx]) &&
            (s_controls->key_selected != idx) ||
            (event->key.code >= sfKeyNum1) &&
            (event->key.code <= sfKeyNum9) ||
            (event->key.code == sfKeyY) ||
            (event->key.code == sfKeyU))
            return display_key_already_used(game);
    game->keys[s_controls->key_selected] = event->key.code;
    reset_choose_key_texts(game);
    sfText_setString(s_controls->keys[s_controls->key_selected]->key,
        get_key_name(game->keys[s_controls->key_selected]));
    set_text_origin(s_controls->keys[s_controls->key_selected]->key);
    s_controls->key_selected = -1;
}
