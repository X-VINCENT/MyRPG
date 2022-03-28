/*
** EPITECH PROJECT, 2022
** Display ice cream shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_market(game_t *game)
{
    market_t *market = game->assets->market;

    sfRenderWindow_drawSprite(game->window, market->bg, NULL);
}
