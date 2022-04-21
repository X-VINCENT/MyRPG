/*
** EPITECH PROJECT, 2022
** Display Museum1 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_museum(game_t *game)
{
    museum_t *museum = game->assets->museum;

    sfRenderWindow_drawSprite(game->window, museum->bg, NULL);
}
