/*
** EPITECH PROJECT, 2022
** destroy rat
** File description:
** destroy
*/

#include "rpg.h"

void destroy_rat_actions(rat_t *rat)
{
    destroy_sprite(rat->dodge_up);
    destroy_sprite(rat->dodge_down);
    destroy_sprite(rat->dodge_left);
    destroy_sprite(rat->dodge_right);
    destroy_sprite(rat->dodge_up_left);
    destroy_sprite(rat->dodge_up_right);
    sfClock_destroy(rat->dodge_anim_clock);
    destroy_sprite(rat->kick_down);
    destroy_sprite(rat->kick_left);
    destroy_sprite(rat->kick_right);
    destroy_sprite(rat->kick_up_left);
    destroy_sprite(rat->kick_up_right);
    sfClock_destroy(rat->kick_anim_clock);
    destroy_sprite(rat->bite_left);
    destroy_sprite(rat->bite_right);
    sfClock_destroy(rat->bite_time_clock);
    sfClock_destroy(rat->clock_jump);
}

void destroy_rat(rat_t *rat)
{
    destroy_sprite(rat->idle_front);
    destroy_sprite(rat->idle_back);
    destroy_sprite(rat->idle_left);
    destroy_sprite(rat->idle_right);
    destroy_sprite(rat->idle_back_left);
    destroy_sprite(rat->idle_back_right);
    destroy_sprite(rat->movement_up);
    destroy_sprite(rat->movement_down);
    destroy_sprite(rat->movement_left);
    destroy_sprite(rat->movement_right);
    destroy_sprite(rat->movement_up_left);
    destroy_sprite(rat->movement_up_right);
    destroy_rat_actions(rat);
    destroy_sprite(rat->shadow);
    sfClock_destroy(rat->idle_anim_clock);
    sfClock_destroy(rat->movement_anim_clock);
    sfClock_destroy(rat->latency_status_clock);
    sfClock_destroy(rat->movement_clock);
    sfCircleShape_destroy(rat->circle);
    free(rat);
}
