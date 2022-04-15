/*
** EPITECH PROJECT, 2022
** Ice Cream Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void market_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys[ESCAPE]) {
        sfView_setRotation(game->view, 0);
        game->last_stage = game->stage;
        game->stage = SETTINGS_STAGE;
    }
    return;
}
