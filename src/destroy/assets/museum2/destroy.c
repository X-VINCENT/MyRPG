/*
** EPITECH PROJECT, 2022
** Destroy museum2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_museum2(museum2_t *museum2)
{
    destroy_sprite(museum2->bg);
    free(museum2);
}
