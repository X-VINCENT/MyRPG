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

    sfRenderWindow_drawSprite(game->window, fights->enemy->sprite, NULL);
}
