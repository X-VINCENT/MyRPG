/*
** EPITECH PROJECT, 2022
** City Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void city_stage(game_t *game)
{
    check_and_center_view(
        game, game->assets->rat->idle_front, game->assets->city->bg);
    display_city(game);
    display_rat(game);
    display_pnj(game, game->assets->pnj[PNJ_BLACK]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_TWO]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_THREE]);
    check_rat_key_pressed(game);
}
