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
}

void init_cursor(game_t *game)
{
    const char path[] = "assets/pictures/icons/cursor_icon.png";
    sfIntRect rect = init_rect(0, 0, 326, 326);
    sfVector2f pos = init_pos(10, 10);
    sfVector2f scale = {0.50, 0.50};

    game->assets->cursor = create_sprite(path, rect, pos, scale);
}
