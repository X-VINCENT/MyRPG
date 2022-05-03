/*
** EPITECH PROJECT, 2022
** Fights Kick Event for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

int fight_kick_rush(game_t *game)
{
    fights_t *fights = game->fights;
    attack_t *attack = game->fights->attack_1;
    sfFloatRect rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);
    sfFloatRect enemy = sfSprite_getGlobalBounds(game->fights->enemy->left);
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);

    if (!sfFloatRect_intersects(&rat, &enemy, NULL)) {
        if (time_elapsed(attack->clock) > 0.01) {
            rat_pos.x += 1;
            set_rats_position(game, rat_pos);
            sfClock_restart(attack->clock);
        }
        return 1;
    }
    game->assets->rat->is_kicking = 1;
    fights->enemy->life -= attack->damage;
    fights->as_touched = 1;
    sfSound_play(game->audio->sounds->punch_sound);
    return 0;
}

void fight_kick_flee(game_t *game)
{
    fights_t *fights = game->fights;
    attack_t *attack = game->fights->attack_1;
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);

    if (rat_pos.x > 140) {
        if (time_elapsed(attack->clock) > 0.01) {
            rat_pos.x -= 1;
            set_rats_position(game, rat_pos);
            sfClock_restart(attack->clock);
        }
        game->assets->rat->left = 1;
    } else {
        fights->kick = 0;
        fights->as_touched = 0;
        fights->to_attack = ENEMY;
        game->assets->rat->right = 1;
    }
}

void fight_kick(game_t *game)
{
    fights_t *fights = game->fights;

    game->assets->rat->is_moving = 1;
    if (fights->as_touched == 0)
        fight_kick_rush(game);
    else if (game->assets->rat->is_kicking == 0)
        fight_kick_flee(game);
}
