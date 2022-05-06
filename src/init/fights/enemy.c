/*
** EPITECH PROJECT, 2022
** Init Fights Enemy for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_fights_enemy(game_t *game)
{
    game->fights->enemy = malloc(sizeof(enemy_t));
    sfIntRect r_left = {384, 142, 32, 50};
    sfIntRect r_right = {0, 140, 32, 52};
    sfVector2f pos = {380, 190};
    sfVector2f scale = {0.5, 0.5};

    game->fights->enemy->left = create_sprite(
        game->textures->guard_pnj, r_left, pos, scale);
    game->fights->enemy->right = create_sprite(
        game->textures->guard_pnj, r_right, pos, scale);
    set_sprite_origin(game->fights->enemy->left, r_left);
    set_sprite_origin(game->fights->enemy->right, r_right);
    game->fights->enemy->anim_clock = sfClock_create();
    game->fights->enemy->clock = sfClock_create();
    game->fights->enemy->damage = 0;
    game->fights->enemy->life = 0;
    game->fights->enemy->direction = 0;
    game->fights->enemy->idx = 0;
}
