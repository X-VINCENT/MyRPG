/*
** EPITECH PROJECT, 2022
** Key pressed introduction for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void introduction_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == sfKeyReturn) {
        game->last_stage = START_STAGE;
        game->stage = START_STAGE;
    }
}
