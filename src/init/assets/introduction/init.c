/*
** EPITECH PROJECT, 2022
** Init Introduction for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_introduction(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 1280, 720);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->introduction = malloc(sizeof(introduction_t));
    game->assets->introduction->bg = create_sprite(
        game->textures->intro, rect, pos, scale);
    game->assets->introduction->clock = sfClock_create();
}
