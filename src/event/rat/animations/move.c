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

    rat->down = 0;
    rat->left = 0;
    rat->right = 0;
    if (!rat_can_move_up(game))
        return;
    pos.y -= rat->speed * rat->speed_multiplier;
    set_rats_position(game, pos);
    rat->up = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_down(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_down);

    rat->up = 0;
    rat->left = 0;
    rat->right = 0;
    if (!rat_can_move_down(game))
        return;
    pos.y += rat->speed * rat->speed_multiplier;
    set_rats_position(game, pos);
    rat->down = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_left(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_left);

    rat->up = 0;
    rat->down = 0;
    rat->right = 0;
    if (!rat_can_move_left(game))
        return;
    pos.x -= rat->speed * rat->speed_multiplier;
    set_rats_position(game, pos);
    rat->left = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_right(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f pos = sfSprite_getPosition(rat->movement_right);

    rat->up = 0;
    rat->down = 0;
    rat->left = 0;
    if (!rat_can_move_right(game))
        return;
    pos.x += rat->speed * rat->speed_multiplier;
    set_rats_position(game, pos);
    rat->right = 1;
    rat->is_moving = 1;
    sfClock_restart(rat->latency_status_clock);
}

void move_rat_once(game_t *game)
{
    if (sfKeyboard_isKeyPressed(game->keys[UP]))
        return move_rat_up(game);
    if (sfKeyboard_isKeyPressed(game->keys[DOWN]))
        return move_rat_down(game);
    if (sfKeyboard_isKeyPressed(game->keys[LEFT]))
        return move_rat_left(game);
    if (sfKeyboard_isKeyPressed(game->keys[RIGHT]))
        return move_rat_right(game);
}
