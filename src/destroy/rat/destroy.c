/*
** EPITECH PROJECT, 2022
** destroy rat
** File description:
** destroy
*/

#include "rpg.h"

void destroy_rat(rat_t *rat)
{
    destroy_sprite(rat->sprite);
    free(rat);
}
