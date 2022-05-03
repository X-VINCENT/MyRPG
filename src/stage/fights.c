/*
** EPITECH PROJECT, 2022
** Fights Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void fight_bomb(game_t *game)
{
    fights_t *fights = game->fights;

    fights->bomb = 0;
}

void fight_enemy(game_t *game)
{
    return;
}

void fights_stage(game_t *game)
{
    sfView_setSize(game->view, VIEW_FIGHTS_SIZE);
    sfView_setCenter(game->view, VIEW_FIGHTS_POS);
    if (game->fights->to_attack == RAT) {
        if (game->fights->kick == 1)
            fight_kick(game);
        if (game->fights->bite == 1)
            fight_bite(game);
        if (game->fights->bomb == 1)
            fight_bomb(game);
    } else
        fight_enemy(game);
    display_fights(game);
    display_cursor(game);
}
