/*
** EPITECH PROJECT, 2022
** Key pressed home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void home_menu_key_pressed(game_t *game)
{
    if (game->event->event->key.code == sfKeyEnter) {
        game->stage = 1;
    }
}
