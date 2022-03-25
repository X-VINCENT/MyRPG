/*
** EPITECH PROJECT, 2022
** Display Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rat_movement(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (rat->up == 1)
        sfRenderWindow_drawSprite(game->window, rat->movement_up, NULL);
    if (rat->down == 1)
        sfRenderWindow_drawSprite(game->window, rat->movement_down, NULL);
    if (rat->left == 1)
        sfRenderWindow_drawSprite(game->window, rat->movement_left, NULL);
    if (rat->right == 1)
        sfRenderWindow_drawSprite(game->window, rat->movement_right, NULL);
}

void display_rat_idle(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (time_elapsed(rat->latency_status_clock) < 0.1) {
        display_rat_movement(game);
        return;
    }
    if (rat->up == 0 && rat->down == 0 && rat->left == 0 && rat->right == 0)
        sfRenderWindow_drawSprite(game->window, rat->idle_back, NULL);
    if (rat->up == 1)
        sfRenderWindow_drawSprite(game->window, rat->idle_back, NULL);
    if (rat->down == 1)
        sfRenderWindow_drawSprite(game->window, rat->idle_front, NULL);
    if (rat->left == 1)
        sfRenderWindow_drawSprite(game->window, rat->idle_left, NULL);
    if (rat->right == 1)
        sfRenderWindow_drawSprite(game->window, rat->idle_right, NULL);
}

void display_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;

    animate_rats(game);
    switch (rat->is_moving) {
        case 0:
            display_rat_idle(game);
            break;
        case 1:
            display_rat_movement(game);
            break;
        default:
            break;
    }
    rat->is_moving = 0;
}
