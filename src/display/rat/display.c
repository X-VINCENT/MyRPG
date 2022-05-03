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
    sfRenderWindow *w = game->window;

    sfRenderWindow_drawSprite(w, rat->shadow, NULL);
    if (rat->up == 1 && rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_up_left, NULL);
    if (rat->up == 1 && rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_up_right, NULL);
    if (rat->up == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_up, NULL);
    if (rat->down == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_down, NULL);
    if (rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_left, NULL);
    if (rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_right, NULL);
}

void display_rat_idle(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfRenderWindow *w = game->window;

    if (time_elapsed(rat->latency_status_clock) < 0.1)
        return display_rat_movement(game);
    sfRenderWindow_drawSprite(w, rat->shadow, NULL);
    if (rat->up == 1 && rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_back_left, NULL);
    if (rat->up == 1 && rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_back_right, NULL);
    if (rat->up == 0 && rat->down == 0 && rat->left == 0 && rat->right == 0)
        return sfRenderWindow_drawSprite(w, rat->idle_back, NULL);
    if (rat->up == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_back, NULL);
    if (rat->down == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_front, NULL);
    if (rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_left, NULL);
    if (rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->idle_right, NULL);
}

void display_circle_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (sfKeyboard_isKeyPressed(game->keys[HITBOX]))
        sfRenderWindow_drawCircleShape(game->window, rat->circle, NULL);
}

void display_rat(game_t *game)
{
    rat_t *rat = game->assets->rat;

    animate_rats(game);
    if (rat->is_dodging == 1)
        return display_rat_dodge(game);
    if (rat->is_kicking == 1)
        return display_rat_kick(game);
    if (rat->is_biting == 1)
        return display_rat_bite(game);
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
