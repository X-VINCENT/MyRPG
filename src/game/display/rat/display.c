/*
** EPITECH PROJECT, 2022
** Display Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;

    sfRenderWindow_drawSprite(game->window, rat->rat, NULL);
    return;
}
