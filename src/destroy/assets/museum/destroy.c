/*
** EPITECH PROJECT, 2022
** Destroy museum for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_museum(museum_t *museum)
{
    destroy_sprite(museum->bg);
    destroy_sprite(museum->bg_top);
    destroy_image(museum->hitbox);
    free(museum);
}
