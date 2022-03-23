/*
** EPITECH PROJECT, 2022
** CHeck Move Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int rat_can_move_left(game_t *game)
{
    map_t *map = game->assets->map;
    sfFloatRect r_area;
    sfVector2f rat_pos = sfSprite_getPosition(map->rat->sprite);

    rat_pos.x -= map->rat->speed;
    if (game->stage == MAP_STAGE) {
        r_area = sfConvexShape_getGlobalBounds(map->appartment_shape);
        if (sfFloatRect_contains(&r_area, rat_pos.x, rat_pos.y))
            return 1;
    }
    return 0;
}

int rat_can_move_right(game_t *game)
{
    map_t *map = game->assets->map;
    sfFloatRect r_area;
    sfVector2f rat_pos = sfSprite_getPosition(map->rat->sprite);

    rat_pos.x += map->rat->speed;
    if (game->stage == MAP_STAGE) {
        r_area = sfConvexShape_getGlobalBounds(map->appartment_shape);
        if (sfFloatRect_contains(&r_area, rat_pos.x, rat_pos.y))
            return 1;
    }
    return 0;
}

int rat_can_move_up(game_t *game)
{
    map_t *map = game->assets->map;
    sfFloatRect r_area;
    sfVector2f rat_pos = sfSprite_getPosition(map->rat->sprite);

    rat_pos.y -= map->rat->speed;
    if (game->stage == MAP_STAGE) {
        r_area = sfConvexShape_getGlobalBounds(map->appartment_shape);
        if (sfFloatRect_contains(&r_area, rat_pos.x, rat_pos.y))
            return 1;
    }
    return 0;
}

int rat_can_move_down(game_t *game)
{
    map_t *map = game->assets->map;
    sfFloatRect r_area;
    sfVector2f rat_pos = sfSprite_getPosition(map->rat->sprite);

    rat_pos.y += map->rat->speed;
    if (game->stage == MAP_STAGE) {
        r_area = sfConvexShape_getGlobalBounds(map->appartment_shape);
        if (sfFloatRect_contains(&r_area, rat_pos.x, rat_pos.y))
            return 1;
    }
    return 0;
}
