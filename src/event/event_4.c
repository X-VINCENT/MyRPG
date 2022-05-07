/*
** EPITECH PROJECT, 2021
** Event 4 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void event_key_pressed_4(game_t *game)
{
    switch (game->stage) {
        case INTRO_STAGE:
            introduction_key_pressed(game);
            break;
        default:
            break;
    }
}

void mouse_pressed_4(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
}

void mouse_moved_4(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
}
