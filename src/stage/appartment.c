/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void appartment_stage(game_t *game)
{
    appartment_t *apart = game->assets->appartment;

    display_appartment(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, apart->bg_top, NULL);
    move_rat(game);
}
