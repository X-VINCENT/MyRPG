/*
** EPITECH PROJECT, 2022
** Init Clothe for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const int name_objects_clothe[] = {
    TEE_SHIRT,
    CAP,
    TEE_SHIRT,
    -1
};

const sfVector2f pos_objects_clothe[] = {
    {325, 150},
    {325, 120},
    {350, 170},
    {0, 0}
};

const int objects_areas_clothe[] = {
    20,
    20,
    20,
    -1
};

void init_clothe(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 415, 428);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->clothe = malloc(sizeof(clothe_t));
    game->assets->clothe->bg = create_sprite(
        game->textures->clothe, rect, pos, scale);
    game->assets->clothe->bg_top = create_sprite(
        game->textures->clothe_top, rect, pos, scale);
    game->assets->clothe->objects = create_objects(game->textures->gui,
        name_objects_clothe, pos_objects_clothe, objects_areas_clothe);
    game->assets->clothe->hitbox = create_image(CLOTHE_HITBOX);
}
