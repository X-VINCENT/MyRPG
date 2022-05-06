/*
** EPITECH PROJECT, 2022
** Set Abilities for Game Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void set_ability_utility(game_t *game, int idx)
{
    if (idx == UTILITY_SELL_10)
        return;
    if (idx == UTILITY_SELL_20)
        return;
    if (idx == UTILITY_SELL_30)
        return;
    if (idx == UTILITY_SELL_40)
        return;
    if (idx == UTILITY_SELL_50)
        return;
    if (idx == UTILITY_SPEED_30)
        game->assets->rat->speed_multiplier = RAT_SPEED_MULTIPLIER_30;
    if (idx == UTILITY_SPEED_40)
        game->assets->rat->speed_multiplier = RAT_SPEED_MULTIPLIER_40;
    if (idx == UTILITY_SPEED_50)
        game->assets->rat->speed_multiplier = RAT_SPEED_MULTIPLIER_50;
    if (idx == UTILITY_SELL_100_SPEED_100)
        game->assets->rat->speed_multiplier = RAT_SPEED_MULTIPLIER_100;
}

void set_ability_stealth(game_t *game, int idx)
{
    rat_t *rat = game->assets->rat;

    if (idx == STEALTH_RANGE_10)
        rat->radius_circle = RAT_RADIUS_10;
    if (idx == STEALTH_ILLEGAL_1)
        return;
    if (idx == STEALTH_ESCAPE_20)
        rat->run_chance = 40;
    if (idx == STEALTH_ESCAPE_40)
        rat->run_chance = 60;
    if (idx == STEALTH_ESCAPE_60)
        rat->run_chance = 80;
}

void set_ability_stealth_2(game_t *game, int idx)
{
    rat_t *rat = game->assets->rat;

    if (idx == STEALTH_RANGE_20)
        rat->radius_circle = RAT_RADIUS_20;
    if (idx == STEALTH_ILLEGAL_2)
        return;
    if (idx == STEALTH_RANGE_40)
        rat->radius_circle = RAT_RADIUS_40;
    if (idx == STEALTH_CARDBOARD)
        return;
    sfCircleShape_setRadius(rat->circle, rat->radius_circle);
    sfCircleShape_setOrigin(rat->circle, (sfVector2f){rat->radius_circle,
        rat->radius_circle});
}

void set_ability_fight(game_t *game, int idx)
{
    if (idx == FIGHT_HP_20)
        return;
    if (idx == FIGHT_HP_30)
        return;
    if (idx == FIGHT_HP_40)
        return;
    if (idx == FIGHT_ATTACK_5)
        return;
    if (idx == FIGHT_ATTACK_10)
        return;
    if (idx == FIGHT_ATTACK_30)
        return;
    if (idx == FIGHT_HP_50_ATTACK_50)
        return;
}

void set_abilities(game_t *game)
{
    abilities_t *abilities = game->abilities;

    for (int idx = 0; abilities->ability[idx] != NULL; idx += 1) {
        if (abilities->ability[idx]->status == UNLOCKED) {
            set_ability_utility(game, idx);
            set_ability_stealth(game, idx);
            set_ability_stealth_2(game, idx);
            set_ability_fight(game, idx);
        }
    }
}
