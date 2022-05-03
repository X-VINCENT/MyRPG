/*
** EPITECH PROJECT, 2022
** Destroy ice for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_clothe(clothe_t *clothe)
{
    destroy_sprite(clothe->bg);
    destroy_sprite(clothe->bg_top);
    destroy_image(clothe->hitbox);
    free(clothe);
}
