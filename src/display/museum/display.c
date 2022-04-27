/*
** EPITECH PROJECT, 2022
** Display Museum for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_museum(game_t *game)
{
    museum_t *museum = game->assets->museum;

    sfView_setCenter(game->view, VIEW_MUSEUM_POS);
    sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
    sfRenderWindow_drawSprite(game->window, museum->bg, NULL);
}
