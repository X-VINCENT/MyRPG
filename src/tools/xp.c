/*
** EPITECH PROJECT, 2022
** Xp Tool for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void update_xp(game_t *game)
{
    if (game->data->current->nb_xps >= XP_FOR_1_LEVEL) {
        game->data->current->nb_xps =
            game->data->current->nb_xps - XP_FOR_1_LEVEL;
        game->data->current->nb_abilities += 1;
    }
}
