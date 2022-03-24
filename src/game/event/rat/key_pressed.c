/*
** EPITECH PROJECT, 2022
** Rat Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void rat_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    move_rat(game);
}
