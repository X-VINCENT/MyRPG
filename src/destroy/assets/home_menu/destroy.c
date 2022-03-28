/*
** EPITECH PROJECT, 2022
** Destroy Home Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_home_menu(home_menu_t *menu)
{
    destroy_parallax(menu->parallax);
    sfSprite_destroy(menu->quit[0]);
    free(menu->quit);
    sfSprite_destroy(menu->options[0]);
    free(menu->options);
    free(menu);
}
