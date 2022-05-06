/*
** EPITECH PROJECT, 2022
** City Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void city_key_pressed(game_t *game)
{
    inventory_key_pressed(game);
    zoom_view(game);
    rotate_view(game);
    reset_view(game);
}
