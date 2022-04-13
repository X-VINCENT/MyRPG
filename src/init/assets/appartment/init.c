/*
** EPITECH PROJECT, 2022
** Init Appartment for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_appartment(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 517, 292);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->appartment = malloc(sizeof(appartment_t));
    game->assets->appartment->bg = create_sprite(
        game->textures->apart, rect, pos, scale);
    game->assets->appartment->bg_top = create_sprite(
        game->textures->apart_top, rect, pos, scale);
    game->assets->appartment->hitbox = create_image(APART_HITBOX);
}
