/*
** EPITECH PROJECT, 2022
** Language English Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_english_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, ENGLISH_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, ENGLISH_QUIT);
    sfText_setString(s_controls->up->title, ENGLISH_UP);
    sfText_setString(s_controls->down->title, ENGLISH_DOWN);
    sfText_setString(s_controls->left->title, ENGLISH_LEFT);
    sfText_setString(s_controls->right->title, ENGLISH_RIGHT);
    sfText_setString(s_controls->jump->title, ENGLISH_JUMP);
    sfText_setString(s_controls->dodge->title, ENGLISH_DODGE);
    sfText_setString(s_controls->attack->title, ENGLISH_ATTACK);
    sfText_setString(s_controls->interact->title, ENGLISH_INTERACT);
    sfText_setString(s_controls->zoom_in->title, ENGLISH_ZOOM_IN);
    sfText_setString(s_controls->zoom_out->title, ENGLISH_ZOOM_OUT);
    sfText_setString(s_controls->rotate_left->title, ENGLISH_ROTATE_LEFT);
    sfText_setString(s_controls->rotate_right->title, ENGLISH_ROTATE_RIGHT);
    sfText_setString(s_controls->reset_view->title, ENGLISH_RESET_VIEW);
    sfText_setString(s_controls->escape->title, ENGLISH_ESCAPE);
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
}

void set_texts_english(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, ENGLISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, ENGLISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, ENGLISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, ENGLISH_MENU_4);
    set_texts_english_settings(game);
    set_texts_english_controls(game);
}
