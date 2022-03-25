/*
** EPITECH PROJECT, 2022
** Destroy Parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_home_menu(home_menu_t *home_menu)
{
    destroy_parallax(home_menu->parallax);
    free(home_menu);
}
