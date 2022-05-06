/*
** EPITECH PROJECT, 2022
** Set Position Rats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_rats_position_actions(game_t *game, sfVector2f position)
{
    rat_t *rat = game->assets->rat;

    sfSprite_setPosition(rat->dodge_up, position);
    sfSprite_setPosition(rat->dodge_down, position);
    sfSprite_setPosition(rat->dodge_left, position);
    sfSprite_setPosition(rat->dodge_right, position);
    sfSprite_setPosition(rat->dodge_up_left, position);
    sfSprite_setPosition(rat->dodge_up_right, position);
    sfSprite_setPosition(rat->kick_down, position);
    sfSprite_setPosition(rat->kick_left, position);
    sfSprite_setPosition(rat->kick_right, position);
    sfSprite_setPosition(rat->kick_up_left, position);
    sfSprite_setPosition(rat->kick_up_right, position);
    sfSprite_setPosition(rat->bite_left, position);
    sfSprite_setPosition(rat->bite_right, position);
}

void set_rats_position_circle(game_t *game, sfVector2f position)
{
    rat_t *rat = game->assets->rat;

    sfCircleShape_setPosition(rat->circle, position);
}

void set_rats_position(game_t *game, sfVector2f position)
{
    rat_t *rat = game->assets->rat;
    sfVector2f shadow_position = {position.x, position.y + 12};

    sfSprite_setPosition(rat->idle_front, position);
    sfSprite_setPosition(rat->idle_back, position);
    sfSprite_setPosition(rat->idle_left, position);
    sfSprite_setPosition(rat->idle_right, position);
    sfSprite_setPosition(rat->idle_back_left, position);
    sfSprite_setPosition(rat->idle_back_right, position);
    sfSprite_setPosition(rat->movement_up, position);
    sfSprite_setPosition(rat->movement_down, position);
    sfSprite_setPosition(rat->movement_left, position);
    sfSprite_setPosition(rat->movement_right, position);
    sfSprite_setPosition(rat->movement_up_left, position);
    sfSprite_setPosition(rat->movement_up_right, position);
    sfSprite_setPosition(rat->shadow, shadow_position);
    set_rats_position_actions(game, position);
    set_rats_position_circle(game, position);
}
