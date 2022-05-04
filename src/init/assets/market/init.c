/*
** EPITECH PROJECT, 2022
** Init Market for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const int name_objects_market[] = {
    CHICKEN,
    MONSTER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    TOILET_PAPER,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    WATER_BOTTLE,
    -1
};

const sfVector2f pos_objects_market[] = {
    {104, 120},
    {410, 133},
    {119, 266},
    {129, 266},
    {119, 276},
    {129, 276},
    {139, 266},
    {149, 266},
    {139, 276},
    {149, 276},
    {159, 266},
    {169, 266},
    {159, 276},
    {169, 276},
    {179, 266},
    {169, 266},
    {179, 276},
    {169, 276},
    {209, 276},
    {219, 276},
    {209, 266},
    {219, 266},
    {229, 276},
    {239, 276},
    {229, 266},
    {239, 266},
    {259, 276},
    {249, 276},
    {259, 266},
    {249, 266},
    {269, 276},
    {259, 276},
    {269, 266},
    {259, 266},
    {0, 0}
};

const int objects_areas_market[] = {
    20,
    20,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    -1
};

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
    game->assets->market->objects = create_objects(game->textures->gui,
        name_objects_market, pos_objects_market, objects_areas_market);
    game->assets->market->hitbox = create_image(MARKET_HITBOX);
}
