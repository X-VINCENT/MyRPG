/*
** EPITECH PROJECT, 2022
** City Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void city_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys->escape) {
        game->last_stage = game->stage;
        game->stage = SETTINGS_STAGE;
    }
    inventory_key_pressed(game);
    rat_key_pressed(game);
    city_locations(game);
    zoom_view(game);
    rotate_view(game);
    reset_view(game);
}
