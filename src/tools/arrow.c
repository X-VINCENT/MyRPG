/*
** EPITECH PROJECT, 2022
** Create Arrow for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

sfSprite *create_arrow(game_t *game, sfVector2f pos, sfVector2f scale)
{
    sfSprite *arrow = create_sprite(game->textures->gui, R_ARROW, pos, scale);

    set_sprite_origin(arrow, R_ARROW);
    return arrow;
}
