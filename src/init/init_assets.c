/*
** EPITECH PROJECT, 2022
** Init Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_assets(game_t *game)
{
    if (!game)
        return;
    game->assets = malloc(sizeof(assets_t));
    init_cursor(game);
    init_map(game);
    init_rat(game);
    return;
}

void init_rat(game_t *game)
{
    game->assets->rat = malloc(sizeof(rat_t));
    sfIntRect rect = init_rect(21, 39, 16, 21);
    sfVector2f pos = init_pos(870, 500);
    sfVector2f scale = {2, 2};

    game->assets->rat->rat = create_sprite(RAT_BLUE, rect, pos, scale);
    return;
}

void init_cursor(game_t *game)
{
    sfIntRect rect = init_rect(75, 23, 290, 326);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = {0.25, 0.25};

    game->assets->cursor = create_sprite(CURSOR, rect, pos, scale);
    return;
}
