/*
** EPITECH PROJECT, 2022
** Language French Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_french_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, FRENCH_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, FRENCH_QUIT);
    sfText_setString(s_controls->keys[UP]->title, FRENCH_UP);
    sfText_setString(s_controls->keys[DOWN]->title, FRENCH_DOWN);
    sfText_setString(s_controls->keys[LEFT]->title, FRENCH_LEFT);
    sfText_setString(s_controls->keys[RIGHT]->title, FRENCH_RIGHT);
    sfText_setString(s_controls->keys[JUMP]->title, FRENCH_JUMP);
    sfText_setString(s_controls->keys[DODGE]->title, FRENCH_DODGE);
    sfText_setString(s_controls->keys[ATTACK]->title, FRENCH_ATTACK);
    sfText_setString(s_controls->keys[INTERACT]->title, FRENCH_INTERACT);
    sfText_setString(s_controls->keys[ZOOM_IN]->title, FRENCH_ZOOM_IN);
    sfText_setString(s_controls->keys[ZOOM_OUT]->title, FRENCH_ZOOM_OUT);
    sfText_setString(s_controls->keys[ROTATE_LEFT]->title,
        FRENCH_ROTATE_LEFT);
    sfText_setString(s_controls->keys[ROTATE_RIGHT]->title,
        FRENCH_ROTATE_RIGHT);
    sfText_setString(s_controls->keys[RESET_VIEW]->title, FRENCH_RESET_VIEW);
    sfText_setString(s_controls->keys[ESCAPE]->title, FRENCH_ESCAPE);
}

void set_texts_french_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    sfText_setString(settings->settings_text, FRENCH_SETTINGS);
    sfText_setString(settings->game_text, FRENCH_GAME);
    sfText_setString(settings->game->title_language, FRENCH_LANGUAGE);
    sfText_setString(settings->game->language, FRENCH_FRENCH);
    sfText_setString(settings->graphics_text, FRENCH_GRAPHICS);
    sfText_setString(settings->graphics->title_res, FRENCH_RESOLUTION);
    sfText_setString(settings->graphics->title_fps, FRENCH_FRAMERATE);
    sfText_setString(settings->graphics->title_vsync, FRENCH_VSYNC);
    sfText_setString(settings->graphics->fps[4], FRENCH_UNLIMITED);
    sfText_setString(settings->audio_text, FRENCH_AUDIO);
    sfText_setString(settings->audio->title_music, FRENCH_MUSIC_VOLUME);
    sfText_setString(settings->audio->title_effects, FRENCH_EFFECTS_VOLUME);
    sfText_setString(settings->controls_text, FRENCH_CONTROLS);
}

void set_texts_french(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, FRENCH_MENU_1);
    sfText_setString(game->assets->top_bar->abilities, FRENCH_ABILITIES);
    sfText_setString(game->assets->top_bar->menu3, FRENCH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, FRENCH_MENU_4);
    sfText_setString(game->assets->home_menu->press, FRENCH_PRESS_ENTER);
    set_texts_french_abilities(game);
    set_texts_french_settings(game);
    set_texts_french_controls(game);
}
