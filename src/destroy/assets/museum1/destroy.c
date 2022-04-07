/*
** EPITECH PROJECT, 2022
** Destroy museum1 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_museum1(museum1_t *museum1)
{
    destroy_sprite(museum1->bg);
    free(museum1);
}
