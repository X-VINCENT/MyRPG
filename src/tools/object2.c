/*
** EPITECH PROJECT, 2022
** Object Tools 2 for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_object(object_t *object)
{
    sfSprite_destroy(object->sprite);
    free(object);
}

void destroy_objects(object_t **objects)
{
    for (int idx = 0; objects[idx] != NULL; idx += 1) {
        destroy_sprite(objects[idx]->sprite);
        free(objects[idx]);
    }
    free(objects);
}
