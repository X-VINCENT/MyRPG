/*
** EPITECH PROJECT, 2022
** Display Museum2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_museum2(game_t *game)
{
    museum2_t *museum2 = game->assets->museum2;

    sfRenderWindow_drawSprite(game->window, museum2->bg, NULL);
}
