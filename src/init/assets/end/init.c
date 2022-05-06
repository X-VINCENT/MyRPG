/*
** EPITECH PROJECT, 2022
** Init win for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_end(game_t *game)
{
    sfIntRect rect = {0, 0, 1920, 1080};
    sfVector2f pos = {0, 0};
    sfVector2f scale = {1, 1};

    game->assets->end = malloc(sizeof(end_t));
    game->assets->end->win = create_sprite(
        game->textures->win, rect, pos, scale);
    game->assets->end->loose = create_sprite(
        game->textures->loose, rect, pos, scale);
}
