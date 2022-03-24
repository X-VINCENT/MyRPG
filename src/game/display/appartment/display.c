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

    sfView_setCenter(
        game->view, (sfVector2f){VIEW_DEFAULT_POS_X, VIEW_DEFAULT_POS_Y});
    sfRenderWindow_drawSprite(game->window, appartment->bg, NULL);
}
