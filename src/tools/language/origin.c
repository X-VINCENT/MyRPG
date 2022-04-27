/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin_top_bar(game_t *game)
{
    set_text_origin(game->assets->top_bar->game);
    set_text_origin(game->assets->top_bar->abilities);
    set_text_origin(game->assets->top_bar->stats);
    set_text_origin(game->assets->top_bar->howtoplay);
    set_text_origin(game->assets->home_menu->press);
}

void set_texts_origin(game_t *game)
{
    set_text_origin(game->assets->home_menu->press);
    set_text_origin(game->assets->appartment->press_interact);
    set_texts_origin_top_bar(game);
    set_texts_origin_stats(game);
    set_texts_origin_game_menu(game);
    set_texts_origin_abilities(game);
    set_texts_origin_settings(game);
}
