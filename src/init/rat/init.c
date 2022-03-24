/*
** EPITECH PROJECT, 2022
** Init Rat for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void init_rat(game_t *game)
{
    game->assets->rat = malloc(sizeof(rat_t));
    sfIntRect rect = init_rect(21, 39, 16, 21);
    sfVector2f pos = init_pos(RAT_DEFAULT_POS_X, RAT_DEFAULT_POS_Y);
    sfVector2f scale = {SCALE_RAT, SCALE_RAT};

    game->assets->rat->sprite = create_sprite(BLUE_RAT, rect, pos, scale);
    set_sprite_origin(game->assets->rat->sprite, rect);
    game->assets->rat->speed = RAT_SPEED;
}
