/*
** EPITECH PROJECT, 2022
** Fights Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void fights_stage(game_t *game)
{
    sfView_setSize(game->view, VIEW_FIGHTS_SIZE);
    sfView_setCenter(game->view, VIEW_FIGHTS_POS);
    animate_parallax(game);
    display_fights(game);
    display_cursor(game);
}
