/*
** EPITECH PROJECT, 2022
** Init Transitions for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_transitions_rat(game_t *game)
{
    transitions_t *transitions = game->assets->transitions;
    sfIntRect rect = init_rect(0, 0, 338, 600);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(2, 2);

    transitions->rat_enter = create_sprite(
        game->textures->transition_enter, rect, pos, scale);
    transitions->rat_quit = create_sprite(
        game->textures->transition_quit, rect, pos, scale);
}

void init_transitions(game_t *game)
{
    game->assets->transitions = malloc(sizeof(transitions_t));
    init_transitions_rat(game);
}
