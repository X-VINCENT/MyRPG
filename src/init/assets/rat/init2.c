/*
** EPITECH PROJECT, 2022
** Init Rat 2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/
#include "rpg.h"

void init_rat_circle(game_t *game)
{
    rat_t *rat = game->assets->rat;

    rat->radius_circle = RAT_RADIUS_0;
    rat->circle = create_circle_shape(sfColor_fromRGBA(255, 125, 0, 50),
        (sfVector2f){0, 0}, game->assets->rat->radius_circle,
        sfColor_fromRGBA(255, 255, 0, 255));
}

void init_rat_data(game_t *game)
{
    rat_t *rat = game->assets->rat;

    rat->up = 1;
    rat->down = 0;
    rat->left = 0;
    rat->right = 0;
    rat->speed = 1;
    rat->speed_multiplier = 1;
    rat->is_moving = 0;
    rat->is_dodging = 0;
    rat->is_kicking = 0;
    rat->is_biting = 0;
    rat->damage = 10;
    rat->life = 50;
    rat->run_chance = 20;
    rat->clock_jump = sfClock_create();
}
