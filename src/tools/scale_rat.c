/*
** EPITECH PROJECT, 2022
** Scale Rat Tools for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void scale_rat(game_t *game, sfVector2f scale)
{
    rat_t *rat = game->assets->rat;

    sfSprite_setScale(rat->idle_front, scale);
    sfSprite_setScale(rat->idle_back, scale);
    sfSprite_setScale(rat->idle_left, scale);
    sfSprite_setScale(rat->idle_right, scale);
    sfSprite_setScale(rat->idle_back_left, scale);
    sfSprite_setScale(rat->idle_back_right, scale);
    sfSprite_setScale(rat->movement_up, scale);
    sfSprite_setScale(rat->movement_down, scale);
    sfSprite_setScale(rat->movement_left, scale);
    sfSprite_setScale(rat->movement_right, scale);
    sfSprite_setScale(rat->movement_up_left, scale);
    sfSprite_setScale(rat->movement_up_right, scale);
}
