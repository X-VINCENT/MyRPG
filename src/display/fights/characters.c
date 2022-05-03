/*
** EPITECH PROJECT, 2022
** Display Fights Characters for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_fights_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (game->fights->kick == 0 && game->fights->bite == 0 &&
        game->fights->bomb == 0) {
        rat->is_moving = 0;
        rat->left = 0;
        rat->right = 1;
        rat->up = 0;
        rat->down = 0;
    }
    display_rat(game);
}

void display_fights_enemy(game_t *game)
{
    fights_t *fights = game->fights;
    enemy_t *enemy = fights->enemy;

    if (time_elapsed(enemy->anim_clock) > 0.1) {
        animate_sprite(enemy->left, 32, 576, 384);
        animate_sprite(enemy->right, 32, 192, 0);
        sfClock_restart(enemy->anim_clock);
    }
    if (enemy->direction == 0)
        sfRenderWindow_drawSprite(game->window, enemy->left, NULL);
    else
        sfRenderWindow_drawSprite(game->window, enemy->right, NULL);
}
