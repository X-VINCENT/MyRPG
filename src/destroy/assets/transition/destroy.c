/*
** EPITECH PROJECT, 2022
** Destroy Assets Transition for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_transition(transition_t *transition)
{
    destroy_rectangle_shape(transition->rectangle);
    sfClock_destroy(transition->clock);
}
