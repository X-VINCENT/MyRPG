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

    inventory_key_pressed(game);
    rat_key_pressed(game);
    city_locations(game);
    zoom_view(game);
    rotate_view(game);
    reset_view(game);
}
