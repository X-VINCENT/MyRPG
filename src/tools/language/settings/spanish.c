/*
** EPITECH PROJECT, 2022
** Language Settings Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, SPANISH_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, SPANISH_QUIT);
    sfText_setString(s_controls->keys[UP]->title, SPANISH_UP);
    sfText_setString(s_controls->keys[DOWN]->title, SPANISH_DOWN);
    sfText_setString(s_controls->keys[LEFT]->title, SPANISH_LEFT);
    sfText_setString(s_controls->keys[RIGHT]->title, SPANISH_RIGHT);
    sfText_setString(s_controls->keys[BITE]->title, SPANISH_BITE);
    sfText_setString(s_controls->keys[DODGE]->title, SPANISH_DODGE);
    sfText_setString(s_controls->keys[ATTACK]->title, SPANISH_ATTACK);
    sfText_setString(s_controls->keys[INTERACT]->title, SPANISH_INTERACT);
    sfText_setString(s_controls->keys[ZOOM_IN]->title, SPANISH_ZOOM_IN);
    sfText_setString(s_controls->keys[ZOOM_OUT]->title, SPANISH_ZOOM_OUT);
    sfText_setString(s_controls->keys[ROTATE_LEFT]->title,
        SPANISH_ROTATE_LEFT);
    sfText_setString(s_controls->keys[ROTATE_RIGHT]->title,
        SPANISH_ROTATE_RIGHT);
    sfText_setString(s_controls->keys[RESET_VIEW]->title, SPANISH_RESET_VIEW);
    sfText_setString(s_controls->keys[HITBOX]->title, SPANISH_HITBOX);
}

void set_texts_spanish_controls_2(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->keys[ESCAPE]->title, SPANISH_ESCAPE);
}

void set_texts_spanish_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfText_setString(settings->settings_text, SPANISH_SETTINGS);
    sfText_setString(settings->game_text, SPANISH_GAME);
    sfText_setString(settings->game->title_language, SPANISH_LANGUAGE);
    sfText_setString(settings->game->language, SPANISH_SPANISH);
    sfText_setString(settings->graphics_text, SPANISH_GRAPHICS);
    sfText_setString(settings->graphics->title_res, SPANISH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, SPANISH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, SPANISH_VSYNC);
    sfText_setString(settings->graphics->fps[4], SPANISH_UNLIMITED);
    sfText_setString(settings->audio_text, SPANISH_AUDIO);
    sfText_setString(settings->audio->title_music, SPANISH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, SPANISH_EFFECTS_VOLUME);
    sfText_setString(settings->controls_text, SPANISH_CONTROLS);
    set_texts_spanish_controls(game);
    set_texts_spanish_controls_2(game);
}
