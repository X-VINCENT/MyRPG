/*
** EPITECH PROJECT, 2022
** Display Transition for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rat_transition(game_t *game)
{
    transitions_t *transitions = game->assets->transitions;

    if (game->stage == RAT_TRANSITION_ENTER) {
        animate_sprite(transitions->rat_enter, 600, 42000, 0);
        sfRenderWindow_drawSprite(game->window, transitions->rat_enter, NULL);
    }
    if (game->stage == RAT_TRANSITION_QUIT) {
        animate_sprite(transitions->rat_quit, 600, 42000, 0);
        sfRenderWindow_drawSprite(game->window, transitions->rat_quit, NULL);
    }
}

void display_transition(game_t *game)
{
    display_rat_transition(game);
}
