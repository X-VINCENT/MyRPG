/*
** EPITECH PROJECT, 2022
** Init Market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_market(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 480, 301);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->market = malloc(sizeof(market_t));
    game->assets->market->bg = create_sprite(
        game->textures->market, rect, pos, scale);
    game->assets->market->bg_top = create_sprite(
        game->textures->market_top, rect, pos, scale);
    game->assets->market->hitbox = create_image(MARKET_HITBOX);
}
