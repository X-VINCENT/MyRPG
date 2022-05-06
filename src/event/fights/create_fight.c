/*
** EPITECH PROJECT, 2022
** start fight
** File description:
** create_fight
*/

#include "rpg.h"

void create_fight(game_t *game, pnj_t *pnj, int idx)
{
    enemy_t *enemy = game->fights->enemy;

    enemy->texture = sfTexture_copy(sfSprite_getTexture(pnj->sprite));
    sfSprite_setTexture(enemy->left, enemy->texture, sfFalse);
    sfSprite_setTexture(enemy->right, enemy->texture, sfFalse);
    enemy->damage = pnj->damage;
    enemy->life = pnj->life;
    enemy->direction = 0;
    enemy->idx = idx;
    game->fights->last_position = sfSprite_getPosition(
        game->assets->rat->idle_front);
    game->assets->rat->up = 0;
    game->assets->rat->down = 0;
    game->assets->rat->left = 0;
    game->assets->rat->right = 1;
    game->fights->to_attack = RAT;
    set_rats_position(game, (sfVector2f){140, 190});
    game->fights->to_attack = RAT;
    game->last_stage = game->stage;
    game->stage = FIGHTS_STAGE;
}
