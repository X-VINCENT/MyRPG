/*
** EPITECH PROJECT, 2022
** Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_rat_left(sfVector2f position_rat, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(24, 66, 23, 22);
    sfVector2f scale = {-2, 2};

    position_rat.x -= speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, position_rat);
}

void move_rat_right(sfVector2f position_rat, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(24, 66, 23, 22);
    sfVector2f scale = {2, 2};

    position_rat.x += speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, position_rat);
}

void move_rat_up(sfVector2f position_rat, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(22, 95, 16, 21);
    sfVector2f scale = {2, 2};

    position_rat.y -= speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, position_rat);
}

void move_rat_down(sfVector2f position_rat, sfSprite *rat, int speed_move)
{
    sfIntRect rect = init_rect(21, 39, 16, 21);
    sfVector2f scale = {2, 2};

    position_rat.y += speed_move;
    sfSprite_setTextureRect(rat, rect);
    sfSprite_setScale(rat, scale);
    sfSprite_setPosition(rat, position_rat);
}

void move_rat(game_t *game)
{
    sfSprite *rat = game->assets->rat->rat;
    sfVector2f position_rat = sfSprite_getPosition(rat);
    int speed_move = 25;

    if (game->event->event->key.code == sfKeyLeft)
        move_rat_left(position_rat, rat, speed_move);
    if (game->event->event->key.code == sfKeyRight)
        move_rat_right(position_rat, rat, speed_move);
    if (game->event->event->key.code == sfKeyUp)
        move_rat_up(position_rat, rat, speed_move);
    if (game->event->event->key.code == sfKeyDown)
        move_rat_down(position_rat, rat, speed_move);
}
