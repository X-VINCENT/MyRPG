/*
** EPITECH PROJECT, 2022
** Init Rat Map for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_rat(game_t *game)
{
    game->assets->map->rat = malloc(sizeof(rat_t));
    sfIntRect rect = init_rect(21, 39, 16, 21);
    sfVector2f pos = init_pos(960, 540);
    sfVector2f scale = {SCALE_RAT, SCALE_RAT};

    game->assets->map->rat->sprite = create_sprite(BLUE_RAT, rect, pos, scale);
    set_sprite_origin(game->assets->map->rat->sprite, rect);
    game->assets->map->rat->speed = RAT_SPEED;
}
