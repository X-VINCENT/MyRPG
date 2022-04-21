/*
** EPITECH PROJECT, 2021
** Event 2 for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void event_key_pressed_2(game_t *game)
{
    switch (game->stage) {
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_key_pressed(game);
            break;
        case ABILITIES_STAGE:
            abilities_key_pressed(game);
            break;
        case STATS_STAGE:
            stats_key_pressed(game);
            break;
        case SETTINGS_STAGE:
            settings_key_pressed(game);
            break;
        default:
            event_key_pressed_3(game);
            break;
    }
}

void mouse_pressed_2(game_t *game)
{
    switch (game->stage) {
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_mouse_pressed(game);
            break;
        case ABILITIES_STAGE:
            abilities_mouse_pressed(game);
            break;
        case STATS_STAGE:
            stats_mouse_pressed(game);
            break;
        case SETTINGS_STAGE:
            settings_mouse_pressed(game);
            break;
        default:
            mouse_pressed_3(game);
            break;
    }
}

void mouse_moved_2(game_t *game)
{
    switch (game->stage) {
        case RAT_TRANSITION_ENTER: case RAT_TRANSITION_QUIT:
            transitions_mouse_moved(game);
            break;
        case ABILITIES_STAGE:
            abilities_mouse_moved(game);
            break;
        case STATS_STAGE:
            stats_mouse_moved(game);
            break;
        case SETTINGS_STAGE:
            settings_mouse_moved(game);
            break;
        default:
            mouse_moved_3(game);
            break;
    }
}
