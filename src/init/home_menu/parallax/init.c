/*
** EPITECH PROJECT, 2022
** Init Parallax for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_parallax(home_menu_t *home)
{
    sfIntRect rect = init_rect(0, 0, 320, 180);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    home->parallax = malloc(sizeof(parallax_t));
    home->parallax->bg0 = create_sprite(
        "assets/images/menus/home/bg0.png", rect, pos, scale);
    home->parallax->bg1 = create_sprite(
        "assets/images/menus/home/bg1.png", rect, pos, scale);
    home->parallax->bg2 = create_sprite(
        "assets/images/menus/home/bg2.png", rect, pos, scale);
    home->parallax->bg3 = create_sprite(
        "assets/images/menus/home/bg3.png", rect, pos, scale);
}
