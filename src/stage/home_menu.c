/*
** EPITECH PROJECT, 2022
** Home_menu Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_stage(game_t *game)
{
    animate_parallax(game);
    display_home_menu(game);
    display_cursor(game);
}
