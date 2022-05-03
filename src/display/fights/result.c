/*
** EPITECH PROJECT, 2022
** Display Fights Result for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_fights_win(game_t *game)
{
    fights_t *fights = game->fights;

    sfRenderWindow_drawText(game->window, fights->win, NULL);
}

void display_fights_loose(game_t *game)
{
    fights_t *fights = game->fights;

    sfRenderWindow_drawText(game->window, fights->loose, NULL);
}
