/*
** EPITECH PROJECT, 2022
** init_rat_2
** File description:
** init_rat_2
*/

#include "rpg.h"

void init_rat_circle(game_t *game)
{
    rat_t *rat = game->assets->rat;

    rat->radius_circle = 150;
    rat->circle = create_circle_shape(sfColor_fromRGBA(255, 125, 0, 50),
        (sfVector2f) {0, 0}, game->assets->rat->radius_circle,
        sfColor_fromRGBA(255, 255, 0, 255));
}
