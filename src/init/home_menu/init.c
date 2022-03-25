/*
** EPITECH PROJECT, 2022
** Init Home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_home_menu(assets_t *assets)
{
    assets->home_menu = malloc(sizeof(home_menu_t));
    init_parallax(assets->home_menu);
}
