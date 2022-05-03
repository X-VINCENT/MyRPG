/*
** EPITECH PROJECT, 2022
** Fights Enemy Event for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

int fight_enemy_rush(game_t *game)
{
    fights_t *fights = game->fights;
    enemy_t *enemy = fights->enemy;
    rat_t *rat = game->assets->rat;
    sfFloatRect r_enemy = sfSprite_getGlobalBounds(enemy->left);
    sfFloatRect r_rat = sfSprite_getGlobalBounds(rat->idle_front);
    sfVector2f offset = {-1, 0};

    if (!sfFloatRect_intersects(&r_enemy, &r_rat, NULL)) {
        if (time_elapsed(enemy->clock) > 0.01) {
            sfSprite_move(enemy->left, offset);
            sfSprite_move(enemy->right, offset);
            sfClock_restart(enemy->clock);
        }
        enemy->direction = 0;
        return 1;
    }
    rat->life -= enemy->damage;
    fights->as_touched = 1;
    return 0;
}

void fight_enemy_flee(game_t *game)
{
    fights_t *fights = game->fights;
    enemy_t *enemy = fights->enemy;
    rat_t *rat = game->assets->rat;
    sfVector2f p_enemy = sfSprite_getPosition(enemy->left);
    sfVector2f offset = {1, 0};

    if (p_enemy.x < 380) {
        if (time_elapsed(enemy->clock) > 0.01) {
            sfSprite_move(enemy->left, offset);
            sfSprite_move(enemy->right, offset);
            sfClock_restart(enemy->clock);
        }
        enemy->direction = 1;
    } else {
        fights->as_touched = 0;
        fights->to_attack = RAT;
        enemy->direction = 0;
    }
}

void fight_enemy(game_t *game)
{
    fights_t *fights = game->fights;

    if (fights->as_touched == 0)
        fight_enemy_rush(game);
    else if (fights->as_touched == 1)
        fight_enemy_flee(game);
}
