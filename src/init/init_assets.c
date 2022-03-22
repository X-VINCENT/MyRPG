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
