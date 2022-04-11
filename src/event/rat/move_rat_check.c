/*
** EPITECH PROJECT, 2022
** move_rat_check
** File description:
** move_rat_check
*/

#include "rpg.h"

void check_rat_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (time_elapsed(game->assets->rat->movement_clock) > 0.02) {
        move_rat(game);
        sfClock_restart(game->assets->rat->movement_clock);
    }
}
