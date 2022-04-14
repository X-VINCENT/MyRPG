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
    for (int idx = 0; idx < 3; idx += 1) {
        destroy_sprite(menu->quit[idx]);
        destroy_sprite(menu->options[idx]);
    }
    destroy_sprite(menu->title);
    destroy_text(menu->press);
    free(menu->quit);
    free(menu->options);
    free(menu);
}
