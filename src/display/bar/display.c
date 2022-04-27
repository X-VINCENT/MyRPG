/*
** EPITECH PROJECT, 2022
** Display Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_bar(game_t *game)
{
    bar_t *bar = game->assets->bar;

    sfView_setCenter(game->view, VIEW_BAR_POS);
    sfView_setSize(game->view, VIEW_BAR_SIZE);
    sfRenderWindow_drawSprite(game->window, bar->bg, NULL);
}
