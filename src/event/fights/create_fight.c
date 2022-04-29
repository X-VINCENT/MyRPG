/*
** EPITECH PROJECT, 2022
** start fight
** File description:
** create_fight
*/

#include "rpg.h"

void create_fight(game_t *game, pnj_t *pnj)
{
    if (!pnj || !game)
        return;
    game->stage = FIGHTS_STAGE;
    return;
}
