/*
** EPITECH PROJECT, 2022
** Ice Cream Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void clothe_store_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    clothe_store_locations(game);
}
