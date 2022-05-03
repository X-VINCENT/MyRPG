/*
** EPITECH PROJECT, 2022
** Language Settings German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, GERMAN_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, GERMAN_QUIT);
    sfText_setString(s_controls->keys[UP]->title, GERMAN_UP);
    sfText_setString(s_controls->keys[DOWN]->title, GERMAN_DOWN);
    sfText_setString(s_controls->keys[LEFT]->title, GERMAN_LEFT);
    sfText_setString(s_controls->keys[RIGHT]->title, GERMAN_RIGHT);
    sfText_setString(s_controls->keys[BITE]->title, GERMAN_BITE);
    sfText_setString(s_controls->keys[DODGE]->title, GERMAN_DODGE);
    sfText_setString(s_controls->keys[ATTACK]->title, GERMAN_ATTACK);
    sfText_setString(s_controls->keys[INTERACT]->title, GERMAN_INTERACT);
    sfText_setString(s_controls->keys[ZOOM_IN]->title, GERMAN_ZOOM_IN);
    sfText_setString(s_controls->keys[ZOOM_OUT]->title, GERMAN_ZOOM_OUT);
    sfText_setString(s_controls->keys[ROTATE_LEFT]->title,
        GERMAN_ROTATE_LEFT);
    sfText_setString(s_controls->keys[ROTATE_RIGHT]->title,
        GERMAN_ROTATE_RIGHT);
    sfText_setString(s_controls->keys[RESET_VIEW]->title, GERMAN_RESET_VIEW);
    sfText_setString(s_controls->keys[HITBOX]->title, GERMAN_HITBOX);
}

void set_texts_german_controls_2(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->keys[ESCAPE]->title, GERMAN_ESCAPE);
}

void set_texts_german_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfText_setString(settings->settings_text, GERMAN_SETTINGS);
    sfText_setString(settings->game_text, GERMAN_GAME);
    sfText_setString(settings->game->title_language, GERMAN_LANGUAGE);
    sfText_setString(settings->game->language, GERMAN_GERMAN);
    sfText_setString(settings->graphics_text, GERMAN_GRAPHICS);
    sfText_setString(settings->graphics->title_res, GERMAN_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, GERMAN_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, GERMAN_VSYNC);
    sfText_setString(settings->graphics->fps[4], GERMAN_UNLIMITED);
    sfText_setString(settings->audio_text, GERMAN_AUDIO);
    sfText_setString(settings->audio->title_music, GERMAN_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, GERMAN_EFFECTS_VOLUME);
    sfText_setString(settings->controls_text, GERMAN_CONTROLS);
    set_texts_german_controls(game);
    set_texts_german_controls_2(game);
}
