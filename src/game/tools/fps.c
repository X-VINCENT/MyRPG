/*
** EPITECH PROJECT, 2022
** FPS Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void down_fps(game_t *game)
{
    switch (game->fps) {
        case 30:
            game->fps = 0;
            break;
        case 60:
            game->fps = 30;
            break;
        case 144:
            game->fps = 60;
            break;
        case 240:
            game->fps = 144;
            break;
        case 0:
            game->fps = 240;
            break;
        default:
            break;
    }
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
}

void up_fps(game_t *game)
{
    switch (game->fps) {
        case 30:
            game->fps = 60;
            break;
        case 60:
            game->fps = 144;
            break;
        case 144:
            game->fps = 240;
            break;
        case 240:
            game->fps = 0;
            break;
        case 0:
            game->fps = 30;
            break;
        default:
            break;
    }
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
}
