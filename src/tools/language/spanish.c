/*
** EPITECH PROJECT, 2022
** Language Spanish Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_spanish_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    sfText_setString(s_controls->choose_key->text, SPANISH_PRESS_KEY);
    sfText_setString(s_controls->choose_key->quit, SPANISH_QUIT);
    sfText_setString(s_controls->up->title, SPANISH_UP);
    sfText_setString(s_controls->down->title, SPANISH_DOWN);
    sfText_setString(s_controls->left->title, SPANISH_LEFT);
    sfText_setString(s_controls->right->title, SPANISH_RIGHT);
    sfText_setString(s_controls->jump->title, SPANISH_JUMP);
    sfText_setString(s_controls->dodge->title, SPANISH_DODGE);
    sfText_setString(s_controls->attack->title, SPANISH_ATTACK);
    sfText_setString(s_controls->interact->title, SPANISH_INTERACT);
    sfText_setString(s_controls->zoom_in->title, SPANISH_ZOOM_IN);
    sfText_setString(s_controls->zoom_out->title, SPANISH_ZOOM_OUT);
    sfText_setString(s_controls->rotate_left->title, SPANISH_ROTATE_LEFT);
    sfText_setString(s_controls->rotate_right->title, SPANISH_ROTATE_RIGHT);
    sfText_setString(s_controls->reset_view->title, SPANISH_RESET_VIEW);
    sfText_setString(s_controls->escape->title, SPANISH_ESCAPE);
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
}

void set_texts_spanish(game_t *game)
{
    sfText_setString(game->assets->top_bar->menu1, SPANISH_MENU_1);
    sfText_setString(game->assets->top_bar->menu2, SPANISH_MENU_2);
    sfText_setString(game->assets->top_bar->menu3, SPANISH_MENU_3);
    sfText_setString(game->assets->top_bar->menu4, SPANISH_MENU_4);
    set_texts_spanish_settings(game);
    set_texts_spanish_controls(game);
}
