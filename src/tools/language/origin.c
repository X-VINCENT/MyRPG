/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_controls(game_t *game)
{
    settings_controls_t *s_controls = game->assets->settings->controls;

    set_text_origin_middle_left(s_controls->choose_key->text);
    set_text_origin_middle_left(s_controls->choose_key->quit);
    set_text_origin_middle_left(s_controls->up->title);
    set_text_origin_middle_left(s_controls->down->title);
    set_text_origin_middle_left(s_controls->left->title);
    set_text_origin_middle_left(s_controls->right->title);
    set_text_origin_middle_left(s_controls->jump->title);
    set_text_origin_middle_left(s_controls->dodge->title);
    set_text_origin_middle_left(s_controls->attack->title);
    set_text_origin_middle_left(s_controls->interact->title);
    set_text_origin_middle_left(s_controls->zoom_in->title);
    set_text_origin_middle_left(s_controls->zoom_out->title);
    set_text_origin_middle_left(s_controls->rotate_left->title);
    set_text_origin_middle_left(s_controls->rotate_right->title);
    set_text_origin_middle_left(s_controls->reset_view->title);
    set_text_origin_middle_left(s_controls->escape->title);
}

void set_texts_origin_settings(game_t *game)
{
    settings_t *settings = game->assets->settings;

    set_text_origin_middle_left(settings->settings_text);
    set_text_origin_middle_left(settings->game_text);
    set_text_origin_middle_left(settings->game->title_language);
    set_text_origin(settings->game->language);
    set_text_origin_middle_left(settings->graphics_text);
    set_text_origin_middle_left(settings->graphics->title_res);
    set_text_origin_middle_left(settings->graphics->title_fps);
    set_text_origin(settings->graphics->fps[4]);
    set_text_origin_middle_left(settings->graphics->title_vsync);
    set_text_origin_middle_left(settings->audio_text);
    set_text_origin_middle_left(settings->audio->title_music);
    set_text_origin_middle_left(settings->audio->title_effects);
    set_text_origin_middle_left(settings->controls_text);
}

void set_texts_origin(game_t *game)
{
    set_text_origin(game->assets->top_bar->menu1);
    set_text_origin(game->assets->top_bar->menu2);
    set_text_origin(game->assets->top_bar->menu3);
    set_text_origin(game->assets->top_bar->menu4);
    set_texts_origin_settings(game);
    set_texts_origin_controls(game);
}
