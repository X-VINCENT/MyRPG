/*
** EPITECH PROJECT, 2022
** Shop Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void shop_stage(game_t *game)
{
    sfView_setSize(game->view, VIEW_SHOP_SIZE);
    sfView_setCenter(game->view, VIEW_SHOP_POS);
    display_shop(game);
    display_cursor(game);
}
