/*
** EPITECH PROJECT, 2022
** Transition Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void up_alpha(transition_t *transition)
{
    sfColor color = sfRectangleShape_getFillColor(transition->rectangle);

    if (time_elapsed(transition->clock) > 0.005) {
        if (color.a < 250)
            color.a += 10;
        else
            transition->direction = 1;
        sfClock_restart(transition->clock);
    }
    sfRectangleShape_setFillColor(transition->rectangle, color);
    sfRectangleShape_setOutlineColor(transition->rectangle, color);
}

void down_alpha(transition_t *transition)
{
    sfColor color = sfRectangleShape_getFillColor(transition->rectangle);

    if (time_elapsed(transition->clock) > 0.005) {
        if (color.a > 0)
            color.a -= 10;
        else {
            transition->direction = 0;
            transition->done = 1;
        }
        sfClock_restart(transition->clock);
    }
    sfRectangleShape_setFillColor(transition->rectangle, color);
    sfRectangleShape_setOutlineColor(transition->rectangle, color);
}

void animate_transition(game_t *game)
{
    transition_t *transition = game->assets->transition;

    if (transition->direction == 0)
        up_alpha(transition);
    else
        down_alpha(transition);
}

void transition_stage(game_t *game)
{
    if (game->assets->transition->done == 1) {
        game->assets->transition->done = 0;
        game->stage = game->next_stage;
        return;
    }
    animate_transition(game);
    display_transition(game);
}
