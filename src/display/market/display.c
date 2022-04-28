/*
** EPITECH PROJECT, 2022
** Display market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_market(game_t *game)
{
    market_t *market = game->assets->market;

    sfView_setCenter(game->view, VIEW_MARKET_POS);
    sfView_setSize(game->view, VIEW_MARKET_SIZE);
    sfRenderWindow_drawSprite(game->window, market->bg, NULL);
}
