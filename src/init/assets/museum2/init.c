/*
** EPITECH PROJECT, 2022
** Init museum2 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_museum2(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 960, 816);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->museum2 = malloc(sizeof(museum2_t));
    game->assets->museum2->bg = create_sprite(MUSEUM2, rect, pos, scale);
    //game->assets->ice->hitbox = create_image(MUSEUM2_HITBOX);
}
