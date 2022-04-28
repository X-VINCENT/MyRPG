/*
** EPITECH PROJECT, 2022
** Init Clothe for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_clothe(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 672, 642);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->clothe = malloc(sizeof(clothe_t));
    game->assets->clothe->bg = create_sprite(
        game->textures->clothe_view, rect, pos, scale);
}
