/*
** EPITECH PROJECT, 2022
** Init Transitions for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_transition(game_t *game)
{
    game->assets->transition = malloc(sizeof(transition_t));
    sfVector2f pos = init_pos(-1000, -1000);
    sfVector2f size = {10000, 10000};
    sfColor color = sfColor_fromRGBA(64, 64, 64, 0);

    game->assets->transition->rectangle = create_rectangle_shape(
        pos, size, color, color);
    game->assets->transition->clock = sfClock_create();
}
