/*
** EPITECH PROJECT, 2022
** Set Ability for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_ability_utility(game_t *game, int idx)
{
    return;
}

void set_ability_stealth(game_t *game, int idx)
{
    if (idx == STEALTH_RANGE_10)
        game->assets->rat->radius_circle -=
            ((10.00 / 100.00) * game->assets->rat->radius_circle);
    if (idx == STEALTH_RANGE_20)
        game->assets->rat->radius_circle -=
            ((20.00 / 100.00) * game->assets->rat->radius_circle);
    if (idx == STEALTH_RANGE_40)
        game->assets->rat->radius_circle -=
            ((40.00 / 100.00) * game->assets->rat->radius_circle);
    sfCircleShape_setRadius(game->assets->rat->circle,
        game->assets->rat->radius_circle);
    sfCircleShape_setOrigin(game->assets->rat->circle,
        (sfVector2f){game->assets->rat->radius_circle,
        game->assets->rat->radius_circle});
    sfCircleShape_setPosition(game->assets->rat->circle,
        sfSprite_getPosition(game->assets->rat->idle_front));
}

void set_ability_fight(game_t *game, int idx)
{
    return;
}

void set_ability(game_t *game, int idx)
{
    set_ability_utility(game, idx);
    set_ability_stealth(game, idx);
    set_ability_fight(game, idx);
}
