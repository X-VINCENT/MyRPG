/*
** EPITECH PROJECT, 2022
** Init museum1 for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_museum1(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 768, 1056);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->museum1 = malloc(sizeof(museum1_t));
    game->assets->museum1->bg = create_sprite(
        game->textures->museum_view1, rect, pos, scale);
    //game->assets->ice->hitbox = create_image(MUSEUM1_HITBOX);
}
