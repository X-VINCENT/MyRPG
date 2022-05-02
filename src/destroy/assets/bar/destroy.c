/*
** EPITECH PROJECT, 2022
** Destroy market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_bar(bar_t *bar)
{
    destroy_sprite(bar->bg);
    destroy_sprite(bar->bg_top);
    destroy_image(bar->hitbox);
    free(bar);
}
