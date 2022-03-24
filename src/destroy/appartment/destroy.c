/*
** EPITECH PROJECT, 2022
** Destroy Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void destroy_appartment(appartment_t *appartment)
{
    destroy_sprite(appartment->bg);
    free(appartment);
}
