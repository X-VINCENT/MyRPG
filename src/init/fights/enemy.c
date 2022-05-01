/*
** EPITECH PROJECT, 2022
** Init Fights Enemy for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_fights_enemy(game_t *game)
{
    game->fights->enemy = malloc(sizeof(enemy_t));

    game->fights->enemy->sprite = NULL;
    game->fights->enemy->damage = 0;
    game->fights->enemy->life = 0;
}
