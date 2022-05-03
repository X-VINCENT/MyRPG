/*
** EPITECH PROJECT, 2022
** start fight
** File description:
** create_fight
*/

#include "rpg.h"

void create_fight(game_t *game, pnj_t *pnj)
{
    enemy_t *enemy = game->fights->enemy;

    enemy->texture = sfTexture_copy(sfSprite_getTexture(pnj->sprite));
    sfSprite_setTexture(enemy->left, enemy->texture, sfFalse);
    sfSprite_setTexture(enemy->right, enemy->texture, sfFalse);
    enemy->damage = pnj->damage;
    enemy->life = pnj->life;
    enemy->direction = 0;
    set_rats_position(game, (sfVector2f){140, 190});
    game->fights->to_attack = RAT;
    game->last_stage = game->stage;
    game->stage = FIGHTS_STAGE;
}
