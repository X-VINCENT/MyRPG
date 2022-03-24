/*
** EPITECH PROJECT, 2022
** Set Position Rats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_rats_position(game_t *game, sfVector2f position)
{
    rat_t *rat = game->assets->rat;

    sfSprite_setPosition(rat->idle_front, position);
    sfSprite_setPosition(rat->idle_back, position);
    sfSprite_setPosition(rat->idle_left, position);
    sfSprite_setPosition(rat->idle_right, position);
    sfSprite_setPosition(rat->movement_up, position);
    sfSprite_setPosition(rat->movement_down, position);
    sfSprite_setPosition(rat->movement_left, position);
    sfSprite_setPosition(rat->movement_right, position);
}
