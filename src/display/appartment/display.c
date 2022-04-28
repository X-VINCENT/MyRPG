/*
** EPITECH PROJECT, 2022
** Display Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_appartment(game_t *game)
{
    appartment_t *appartment = game->assets->appartment;

    sfView_setCenter(game->view, VIEW_APPARTMENT_POS);
    sfView_setSize(game->view, VIEW_APPARTMENT_SIZE);
    sfRenderWindow_drawSprite(game->window, appartment->bg, NULL);
}
