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

    if (enemy->sprite)
        destroy_sprite(enemy->sprite);
    enemy->sprite = sfSprite_copy(pnj->sprite);
    sfSprite_setPosition(enemy->sprite, (sfVector2f){380, 190});
    enemy->damage = pnj->damage;
    enemy->life = pnj->life;
    set_rats_position(game, (sfVector2f){140, 190});
    game->stage = FIGHTS_STAGE;
}
