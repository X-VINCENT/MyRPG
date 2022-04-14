/*
** EPITECH PROJECT, 2022
** Animate Rat for My RPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void animate_idle_rats(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (time_elapsed(rat->idle_anim_clock) > 0.15) {
        animate_sprite(rat->idle_front,
            RAT_IDLE_FRONT_OFFSET, RAT_IDLE_FRONT_MAX, 22);
        animate_sprite(rat->idle_back,
            RAT_IDLE_BACK_OFFSET, RAT_IDLE_BACK_MAX, 22);
        animate_sprite(rat->idle_left,
            RAT_IDLE_SIDE_OFFSET, RAT_IDLE_SIDE_MAX, 22);
        animate_sprite(rat->idle_right,
            RAT_IDLE_SIDE_OFFSET, RAT_IDLE_SIDE_MAX, 22);
        animate_sprite(rat->idle_back_left,
            RAT_IDLE_DIAGONAL_OFFSET, RAT_IDLE_DIAGONAL_MAX, 22);
        animate_sprite(rat->idle_back_right,
            RAT_IDLE_DIAGONAL_OFFSET, RAT_IDLE_DIAGONAL_MAX, 22);
        sfClock_restart(rat->idle_anim_clock);
    }
}

void animate_movement_rats(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (time_elapsed(rat->movement_anim_clock) > 0.075) {
        animate_sprite(rat->movement_up, RAT_UP_OFFSET, RAT_UP_MAX, 22);
        animate_sprite(rat->movement_down, RAT_DOWN_OFFSET, RAT_DOWN_MAX, 22);
        animate_sprite(rat->movement_left, RAT_SIDE_OFFSET, RAT_SIDE_MAX, 22);
        animate_sprite(
            rat->movement_right, RAT_SIDE_OFFSET, RAT_SIDE_MAX, 22);
        animate_sprite(
            rat->movement_up_left, RAT_DIAGONAL_OFFSET, RAT_DIAGONAL_MAX, 22);
        animate_sprite(
            rat->movement_up_right, RAT_DIAGONAL_OFFSET, RAT_DIAGONAL_MAX, 22);
        sfClock_restart(rat->movement_anim_clock);
    }
}

void animate_rats(game_t *game)
{
    rat_t *rat = game->assets->rat;

    animate_idle_rats(game);
    animate_movement_rats(game);
}
