/*
** EPITECH PROJECT, 2022
** Display ice cream shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_ice_cream(game_t *game)
{
    ice_t *ice = game->assets->ice;

    sfRenderWindow_drawSprite(game->window, ice->bg, NULL);
}
