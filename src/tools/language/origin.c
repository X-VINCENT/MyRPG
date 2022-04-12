/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_settings(game_t *game)
{
    settings_t *settings = settings;

    /*set_text_origin_middle_left(settings->controls->up);
    set_text_origin_middle_left(settings->controls->down);
    set_text_origin_middle_left(settings->controls->left);
    set_text_origin_middle_left(settings->controls->right);
    set_text_origin_middle_left(settings->controls->interact);*/
    set_text_origin_middle_left(settings->settings_text);
    set_text_origin_middle_left(settings->game_text);
    set_text_origin_middle_left(settings->graphics_text);
    set_text_origin_middle_left(settings->audio_text);
    set_text_origin_middle_left(settings->controls_text);
    set_text_origin_middle_left(settings->game->title_language);
    set_text_origin(settings->game->language);
    set_text_origin_middle_left(settings->graphics->title_res);
    set_text_origin_middle_left(settings->graphics->title_fps);
    set_text_origin_middle_left(settings->graphics->title_vsync);
    set_text_origin(settings->graphics->fps[4]);
}

void set_texts_origin(game_t *game)
{
    set_text_origin(game->assets->top_bar->menu1);
    set_text_origin(game->assets->top_bar->menu2);
    set_text_origin(game->assets->top_bar->menu3);
    set_text_origin(game->assets->top_bar->menu4);
}
