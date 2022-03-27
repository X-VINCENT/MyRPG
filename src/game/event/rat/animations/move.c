/*
** EPITECH PROJECT, 2022
** Move Rat City for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_rat_up(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_up);

    if (!rat_can_move_up(game))
        return;
    pos.y -= rat->speed;
    set_rats_position(game, pos);
    rat->up = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_down(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_down);

    if (!rat_can_move_down(game))
        return;
    pos.y += rat->speed;
    set_rats_position(game, pos);
    rat->down = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_left(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_left);

    if (!rat_can_move_left(game))
        return;
    pos.x -= rat->speed;
    set_rats_position(game, pos);
    rat->left = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_right(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_right);

    if (!rat_can_move_right(game))
        return;
    pos.x += rat->speed;
    set_rats_position(game, pos);
    rat->right = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat(game_t *game)
{
    sfEvent *event = game->event->event;
    rat_t *rat = game->assets->rat;

    rat->up = 0;
    rat->down = 0;
    rat->left = 0;
    rat->right = 0;
    if (event->key.code == game->keys->move_up)
        move_rat_up(game);
    if (event->key.code == game->keys->move_down)
        move_rat_down(game);
    if (event->key.code == game->keys->move_left)
        move_rat_left(game);
    if (event->key.code == game->keys->move_right)
        move_rat_right(game);
}
