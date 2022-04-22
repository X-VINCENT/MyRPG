/*
** EPITECH PROJECT, 2022
** Key Pressed Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void game_menu_key_pressed(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;
    sfEvent *event = game->event->event;

    top_bar_key_pressed(game);
}
