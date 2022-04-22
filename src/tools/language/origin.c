/*
** EPITECH PROJECT, 2022
** Language Origin Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_texts_origin(game_t *game)
{
    set_text_origin(game->assets->top_bar->game);
    set_text_origin(game->assets->top_bar->abilities);
    set_text_origin(game->assets->top_bar->stats);
    set_text_origin(game->assets->top_bar->howtoplay);
    set_text_origin(game->assets->home_menu->press);
    set_texts_origin_abilities(game);
    set_texts_origin_settings(game);
}
