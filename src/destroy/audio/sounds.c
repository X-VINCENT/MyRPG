/*
** EPITECH PROJECT, 2022
** Destroy sounds for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_sounds(sounds_t *sounds)
{
    if (!sounds)
        return;
    destroy_sound(sounds->jump_sound);
    destroy_sound(sounds->punch_sound);
    free(sounds);
}
