/*
** EPITECH PROJECT, 2022
** Display Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_game_menu(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;

    sfRenderWindow_drawSprite(game->window, game_menu->bg, NULL);
    display_top_bar(game);
}
