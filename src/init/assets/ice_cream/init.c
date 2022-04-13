/*
** EPITECH PROJECT, 2022
** Init Ice Cream Shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_ice_cream(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 576, 480);
    sfVector2f pos = init_pos(115, 100);
    sfVector2f scale = {0.6, 0.6};

    game->assets->ice = malloc(sizeof(ice_t));
    game->assets->ice->bg = create_sprite(
        game->textures->ice_cream_view, rect, pos, scale);
    //game->assets->ice->hitbox = create_image(ICE_HITBOX);
}
