/*
** EPITECH PROJECT, 2022
** Init Abilities for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_abilities(game_t *game)
{
    game->abilities = malloc(sizeof(abilities_t));

    init_abilities_menu(game);
}
