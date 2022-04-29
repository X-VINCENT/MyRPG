/*
** EPITECH PROJECT, 2022
** Init museum for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const int name_objects_museum[] = {
    TROPHY,
    TROPHY,
    THE_WAVE,
    MONA,
    KEY,
    -1
};

const sfVector2f pos_objects_museum[] = {
    {160, 76},
    {416, 75},
    {2113, 1440},
    {2529, 1437},
    {513, 1320},
    {0, 0}
};

const int objects_areas_museum[] = {
    65,
    65,
    65,
    60,
    30,
    -1
};

void init_museum(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 3000, 3000);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f p_lasers = init_pos(2423, 1464);
    sfVector2f scale = init_scale(1, 1);

    game->assets->museum = malloc(sizeof(museum_t));
    game->assets->museum->bg = create_sprite(
        game->textures->museum_bg, rect, pos, scale);
    game->assets->museum->bg_top = create_sprite(
        game->textures->museum_bg_top, rect, pos, scale);
    game->assets->museum->lasers = create_sprite(
        game->textures->gui, R_LASERS, p_lasers, scale);
    game->assets->museum->hitbox = create_image(MUSEUM_HITBOX);
    game->assets->museum->curent_room = 0;
    game->assets->museum->objects = create_objects(game->textures->gui,
        name_objects_museum, pos_objects_museum, objects_areas_museum);
    game->assets->museum->are_lasers_unlocked = 0;
}
