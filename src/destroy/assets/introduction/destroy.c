/*
** EPITECH PROJECT, 2022
** Destroy Introduction for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_introduction(introduction_t *introduction)
{
    destroy_sprite(introduction->bg);
    sfClock_destroy(introduction->clock);
    free(introduction);
}
