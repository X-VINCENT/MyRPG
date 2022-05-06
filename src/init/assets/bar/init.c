/*
** EPITECH PROJECT, 2022
** Init Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_bar(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 416, 268);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->bar = malloc(sizeof(bar_t));
    game->assets->bar->bg = create_sprite(
        game->textures->bar, rect, pos, scale);
    game->assets->bar->bg_top = create_sprite(
        game->textures->bar_top, rect, pos, scale);
    game->assets->bar->hitbox = create_image(BAR_HITBOX);
}
