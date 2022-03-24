/*
** EPITECH PROJECT, 2022
** Animate Rat for My RPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void animate_rats(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (sfTime_asSeconds(sfClock_getElapsedTime(rat->movement_clock)) > 0.1) {
        animate_sprite(rat->idle_front,
            RAT_IDLE_FRONT_OFFSET, RAT_IDLE_FRONT_MAX);
        animate_sprite(rat->idle_back, RAT_IDLE_BACK_OFFSET, RAT_IDLE_BACK_MAX);
        animate_sprite(rat->idle_left, RAT_IDLE_SIDE_OFFSET, RAT_IDLE_SIDE_MAX);
        animate_sprite(rat->idle_right, RAT_IDLE_SIDE_OFFSET, RAT_IDLE_SIDE_MAX);
        animate_sprite(rat->movement_up, RAT_UP_OFFSET, RAT_UP_MAX);
        animate_sprite(rat->movement_down, RAT_DOWN_OFFSET, RAT_DOWN_MAX);
        animate_sprite(rat->movement_left, RAT_SIDE_OFFSET, RAT_SIDE_MAX);
        animate_sprite(rat->movement_right, RAT_SIDE_OFFSET, RAT_SIDE_MAX);
        sfClock_restart(rat->movement_clock);
    }
}
