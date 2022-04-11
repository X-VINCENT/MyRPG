/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin(game_t *game)
{
    /*set_text_origin_middle_left(game->assets->settings->controls->up);
    set_text_origin_middle_left(game->assets->settings->controls->down);
    set_text_origin_middle_left(game->assets->settings->controls->left);
    set_text_origin_middle_left(game->assets->settings->controls->right);
    set_text_origin_middle_left(game->assets->settings->controls->interact);*/
    set_text_origin_middle_left(game->assets->settings->settings_text);
    set_text_origin_middle_left(game->assets->settings->game_text);
    set_text_origin_middle_left(game->assets->settings->graphics_text);
    set_text_origin_middle_left(game->assets->settings->audio_text);
    set_text_origin_middle_left(game->assets->settings->controls_text);
    set_text_origin_middle_left(game->assets->settings->game->title_language);
    set_text_origin(game->assets->settings->game->language);
    set_text_origin(game->assets->top_bar->menu1);
    set_text_origin(game->assets->top_bar->menu2);
    set_text_origin(game->assets->top_bar->menu3);
    set_text_origin(game->assets->top_bar->menu4);
}
