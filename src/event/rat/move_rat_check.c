    /*
** EPITECH PROJECT, 2022
** Move Rat Check Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void check_rat_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (time_elapsed(game->assets->rat->movement_clock) > 0.01) {
        move_rat(game);
        sfClock_restart(game->assets->rat->movement_clock);
    }
}
