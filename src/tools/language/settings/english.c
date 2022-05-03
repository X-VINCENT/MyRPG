/*
** EPITECH PROJECT, 2022
** Language Settings English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, ENGLISH_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, ENGLISH_QUIT);
    sfText_setString(s_controls->keys[UP]->title, ENGLISH_UP);
    sfText_setString(s_controls->keys[DOWN]->title, ENGLISH_DOWN);
    sfText_setString(s_controls->keys[LEFT]->title, ENGLISH_LEFT);
    sfText_setString(s_controls->keys[RIGHT]->title, ENGLISH_RIGHT);
    sfText_setString(s_controls->keys[BITE]->title, ENGLISH_BITE);
    sfText_setString(s_controls->keys[DODGE]->title, ENGLISH_DODGE);
    sfText_setString(s_controls->keys[ATTACK]->title, ENGLISH_ATTACK);
    sfText_setString(s_controls->keys[INTERACT]->title, ENGLISH_INTERACT);
    sfText_setString(s_controls->keys[ZOOM_IN]->title, ENGLISH_ZOOM_IN);
    sfText_setString(s_controls->keys[ZOOM_OUT]->title, ENGLISH_ZOOM_OUT);
    sfText_setString(s_controls->keys[ROTATE_LEFT]->title,
        ENGLISH_ROTATE_LEFT);
    sfText_setString(s_controls->keys[ROTATE_RIGHT]->title,
        ENGLISH_ROTATE_RIGHT);
    sfText_setString(s_controls->keys[RESET_VIEW]->title, ENGLISH_RESET_VIEW);
    sfText_setString(s_controls->keys[HITBOX]->title, ENGLISH_HITBOX);
}

void set_texts_english_controls_2(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->keys[ESCAPE]->title, ENGLISH_ESCAPE);
}

void set_texts_english_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfText_setString(settings->settings_text, ENGLISH_SETTINGS);
    sfText_setString(settings->game_text, ENGLISH_GAME);
    sfText_setString(settings->game->title_language, ENGLISH_LANGUAGE);
    sfText_setString(settings->game->language, ENGLISH_ENGLISH);
    sfText_setString(settings->graphics_text, ENGLISH_GRAPHICS);
    sfText_setString(settings->graphics->title_res, ENGLISH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, ENGLISH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, ENGLISH_VSYNC);
    sfText_setString(settings->graphics->fps[4], ENGLISH_UNLIMITED);
    sfText_setString(settings->audio_text, ENGLISH_AUDIO);
    sfText_setString(settings->audio->title_music, ENGLISH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, ENGLISH_EFFECTS_VOLUME);
    sfText_setString(settings->controls_text, ENGLISH_CONTROLS);
    set_texts_english_controls(game);
    set_texts_english_controls_2(game);
}
