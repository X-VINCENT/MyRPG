/*
** EPITECH PROJECT, 2022
** Res Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void down_res(game_t *game)
{
    switch (game->res) {
        case 720:
            game->res = 2160;
            break;
        case 1080:
            game->res = 720;
            break;
        default:
            down_res_2(game);
            break;
    }
    sfRenderWindow_setSize(game->window,
        (sfVector2u){game->res * 16 / 9, game->res});
}

void down_res_2(game_t *game)
{
    switch (game->res) {
        case 1440:
            game->res = 1080;
            break;
        case 2160:
            game->res = 1440;
            break;
        default:
            break;
    }
}

void up_res(game_t *game)
{
    switch (game->res) {
        case 720:
            game->res = 1080;
            break;
        case 1080:
            game->res = 1440;
            break;
        default:
            up_res_2(game);
            break;
    }
    sfRenderWindow_setSize(game->window,
        (sfVector2u){game->res * 16 / 9, game->res});
}

void up_res_2(game_t *game)
{
    switch (game->res) {
        case 1440:
            game->res = 2160;
            break;
        case 2160:
            game->res = 720;
            break;
        default:
            break;
    }
}
