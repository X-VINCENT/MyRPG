/*
** EPITECH PROJECT, 2022
** Init doors of city for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_doors(game_t *game)
{
    doors_t *doors = game->assets->city->doors;
    sfIntRect rect = init_rect(0, 0, 19, 38);
    sfVector2f pos = init_pos(2459, 1662);
    sfVector2f scale = init_scale(1, 1);

    doors->rat = create_sprite(
        game->textures->city_rat_door, rect, pos, scale);
    doors->clock = sfClock_create();
    doors->animation = sfClock_create();
    doors->rat_is_taken = 0;
}
