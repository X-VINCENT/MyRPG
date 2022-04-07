/*
** EPITECH PROJECT, 2022
** Init Market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_market(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 720, 450);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->market = malloc(sizeof(market_t));
    game->assets->market->bg = create_sprite(MARKET, rect, pos, scale);
    //game->assets->ice->hitbox = create_image(ICE_HITBOX);
}
