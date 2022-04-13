/*
** EPITECH PROJECT, 2022
** Language German Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_german_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, GERMAN_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, GERMAN_QUIT);
    sfText_setString(s_controls->up->title, GERMAN_UP);
    sfText_setString(s_controls->down->title, GERMAN_DOWN);
    sfText_setString(s_controls->left->title, GERMAN_LEFT);
    sfText_setString(s_controls->right->title, GERMAN_RIGHT);
    sfText_setString(s_controls->jump->title, GERMAN_JUMP);
    sfText_setString(s_controls->dodge->title, GERMAN_DODGE);
    sfText_setString(s_controls->attack->title, GERMAN_ATTACK);
    sfText_setString(s_controls->interact->title, GERMAN_INTERACT);
    sfText_setString(s_controls->zoom_in->title, GERMAN_ZOOM_IN);
    sfText_setString(s_controls->zoom_out->title, GERMAN_ZOOM_OUT);
    sfText_setString(s_controls->rotate_left->title, GERMAN_ROTATE_LEFT);
    sfText_setString(s_controls->rotate_right->title, GERMAN_ROTATE_RIGHT);
    sfText_setString(s_controls->reset_view->title, GERMAN_RESET_VIEW);
    sfText_setString(s_controls->escape->title, GERMAN_ESCAPE);
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
}

void set_texts_german(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, GERMAN_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, GERMAN_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, GERMAN_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, GERMAN_MENU_4);
    set_texts_german_settings(game);
    set_texts_german_controls(game);
}
