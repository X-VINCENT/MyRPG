/*
** EPITECH PROJECT, 2022
** Display Museum1 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_museum1(game_t *game)
{
    museum1_t *museum1 = game->assets->museum1;

    sfRenderWindow_drawSprite(game->window, museum1->bg, NULL);
}
