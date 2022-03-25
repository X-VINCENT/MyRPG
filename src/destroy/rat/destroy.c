/*
** EPITECH PROJECT, 2022
** destroy rat
** File description:
** destroy
*/

#include "rpg.h"

void destroy_rat(rat_t *rat)
{
    destroy_sprite(rat->idle_front);
    destroy_sprite(rat->idle_back);
    destroy_sprite(rat->idle_left);
    destroy_sprite(rat->idle_right);
    destroy_sprite(rat->movement_up);
    destroy_sprite(rat->movement_down);
    destroy_sprite(rat->movement_left);
    destroy_sprite(rat->movement_right);
    sfClock_destroy(rat->idle_anim_clock);
    sfClock_destroy(rat->movement_anim_clock);
    sfClock_destroy(rat->latency_status_clock);
    free(rat);
}
