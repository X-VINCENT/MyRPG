/*
** EPITECH PROJECT, 2022
** Init Ice Cream Shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const int name_objects_ice[] = {
    ICE_CREAM,
    ICE_CREAM,
    ICE_CREAM,
    ICE_CREAM,
    ICE_CREAM,
    ICE_CREAM,
    -1
};

const sfVector2f pos_objects_ice[] = {
    {53, 134},
    {73, 134},
    {131, 125},
    {171, 125},
    {211, 125},
    {251, 125},
    {0, 0}
};

const int objects_areas_ice[] = {
    20,
    20,
    30,
    30,
    30,
    30,
    -1
};

void init_ice_cream(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 384, 320);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = {1, 1};

    game->assets->ice = malloc(sizeof(ice_t));
    game->assets->ice->bg = create_sprite(
        game->textures->ice_cream, rect, pos, scale);
    game->assets->ice->bg_top = create_sprite(
        game->textures->ice_cream_top, rect, pos, scale);
    game->assets->ice->objects = create_objects(game->textures->gui,
        name_objects_ice, pos_objects_ice, objects_areas_ice);
    game->assets->ice->hitbox = create_image(ICE_HITBOX);
}
