/*
** EPITECH PROJECT, 2022
** Init museum for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_museum(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 3000, 3000);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->museum = malloc(sizeof(museum_t));
    game->assets->museum->bg = create_sprite(
        game->textures->museum_bg, rect, pos, scale);
    game->assets->museum->bg_top = create_sprite(
        game->textures->museum_bg_top, rect, pos, scale);
    game->assets->museum->hitbox = create_image(MUSEUM_HITBOX);
    game->assets->museum->curent_room = 0;
}
