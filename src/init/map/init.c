/*
** EPITECH PROJECT, 2022
** Init Map for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_map(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 10000, 10000);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->map = malloc(sizeof(map_t));
    game->assets->map->bg = create_sprite(MAP, rect, pos, scale);
}
