/*
** EPITECH PROJECT, 2022
** Init city for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

const int name_objects_city[] = {
    GARBAGE_BAG,
    GARBAGE_BAG,
    ICE_CREAM,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    KNACKI,
    BUCKET_KFC,
    -1
};

const sfVector2f pos_objects_city[] = {
    {602, 566},
    {2281, 1691},
    {870, 1688},
    {1453, 1688},
    {723, 795},
    {80, 1192},
    {2583, 1677},
    {24, 1932},
    {39, 640},
    {662, 597},
    {2810, 1014},
    {1160, 1359},
    {1396, 912},
    {504, 1352},
    {1851, 819},
    {2003, 1890},
    {453, 288},
    {0, 0}
};

const int objects_areas_city[] = {
    40,
    40,
    30,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    10,
    1,
    -1
};

void init_clocks(game_t *game)
{
    game->assets->city->weather_clock = sfClock_create();
    game->assets->city->fire_clock = sfClock_create();
    game->assets->city->fire_car_clock = sfClock_create();
}

void init_minimap_city(game_t *game)
{
    sfIntRect rect = init_rect(806, 0, 32, 24);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->city->pos_minimap = create_sprite(
        game->textures->gui, rect, pos, scale);
    set_sprite_origin(game->assets->city->pos_minimap, rect);
}

void init_city(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 3000, 2000);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->city = malloc(sizeof(city_t));
    game->assets->city->doors = malloc(sizeof(doors_t));
    game->assets->city->bg = create_sprite(
        game->textures->city_view, rect, pos, scale);
    game->assets->city->bg_top = create_sprite(
        game->textures->city_view_top, rect, pos, scale);
    game->assets->city->hitbox = create_image(CITY_HITBOX);
    game->assets->city->is_raining = 0;
    game->assets->city->is_windy = 0;
    game->assets->city->objects = create_objects(game->textures->gui,
        name_objects_city, pos_objects_city, objects_areas_city);
    init_minimap_city(game);
    init_clocks(game);
    init_doors(game);
}
