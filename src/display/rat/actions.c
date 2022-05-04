/*
** EPITECH PROJECT, 2022
** Display Rat Actions for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rat_dodge(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfRenderWindow *w = game->window;

    sfRenderWindow_drawSprite(w, rat->shadow, NULL);
    if (rat->up == 1 && rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_up_left, NULL);
    if (rat->up == 1 && rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_up_right, NULL);
    if (rat->up == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_up, NULL);
    if (rat->down == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_down, NULL);
    if (rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_left, NULL);
    if (rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->dodge_right, NULL);
}

void display_rat_kick(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfRenderWindow *w = game->window;

    sfRenderWindow_drawSprite(w, rat->shadow, NULL);
    if (rat->up == 1 && rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->kick_up_left, NULL);
    if (rat->up == 1 && rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->kick_up_right, NULL);
    if (rat->up == 1)
        return sfRenderWindow_drawSprite(w, rat->movement_up, NULL);
    if (rat->down == 1)
        return sfRenderWindow_drawSprite(w, rat->kick_down, NULL);
    if (rat->left == 1)
        return sfRenderWindow_drawSprite(w, rat->kick_left, NULL);
    if (rat->right == 1)
        return sfRenderWindow_drawSprite(w, rat->kick_right, NULL);
}

void restart_clock_and_reset_biting(game_t *game)
{
    rat_t *rat = game->assets->rat;

    rat->is_biting = 0;
    sfClock_restart(rat->bite_time_clock);
}

void display_rat_bite(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfRenderWindow *w = game->window;

    if (time_elapsed(rat->bite_time_clock) < 0.5) {
        sfRenderWindow_drawSprite(w, rat->shadow, NULL);
        if (rat->up == 1 && rat->left == 1)
            return sfRenderWindow_drawSprite(w, rat->movement_left, NULL);
        if (rat->up == 1 && rat->right == 1)
            return sfRenderWindow_drawSprite(w, rat->movement_right, NULL);
        if (rat->up == 1)
            return sfRenderWindow_drawSprite(w, rat->movement_up, NULL);
        if (rat->down == 1)
            return sfRenderWindow_drawSprite(w, rat->movement_down, NULL);
        if (rat->left == 1)
            return sfRenderWindow_drawSprite(w, rat->bite_left, NULL);
        if (rat->right == 1)
            return sfRenderWindow_drawSprite(w, rat->bite_right, NULL);
    } else
        restart_clock_and_reset_biting(game);
}
