/*
** EPITECH PROJECT, 2022
** Key pressed home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void inventory_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    for (int i = sfKeyNum1; i <= sfKeyNum9; i++) {
        if (event->key.code == i) {
            game->inventory->selected = i - 27;
        }
    }
    if (event->key.code == 51) {
        game->inventory->selected = 3;
    }
    if (event->key.code == 56) {
        game->inventory->selected = 5;
    }
}
