/*
** EPITECH PROJECT, 2022
** Object Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const sfIntRect r_objects[] = {
    R_EMPTY,
    R_MONA,
    R_THE_WAVE,
    R_TROPHY,
    R_BOMB,
    R_KIT,
    R_KEY,
    R_GARBAGE_BAG,
    R_TEE_SHIRT,
    R_PANTS,
    R_CAP,
    R_ICE_CREAM,
    R_KNACKI,
    R_MONSTER,
    R_CHICKEN,
    R_PIZZA,
    R_BUCKET_KFC,
    R_TOILET_PAPER,
    R_WATER_BOTTLE,
    {0, 0, 0, 0}
};

object_t *create_object(sfTexture *texture, enum item_name name,
    sfVector2f pos, const int radius)
{
    object_t *object = malloc(sizeof(object_t));
    sfVector2f scale = init_scale(1, 1);

    if (!texture || !object)
        return NULL;
    object->name = name;
    object->sprite = create_sprite(texture, r_objects[name], pos, scale);
    object->area = create_circle_shape(
        sfTransparent, pos, radius, sfTransparent);
    set_sprite_origin(object->sprite, r_objects[name]);
    object->is_picked = 0;
    return object;
}

object_t **create_objects(sfTexture *texture, const int objects_names[],
    const sfVector2f objects_positions[], const int objects_areas[])
{
    object_t **objects = NULL;
    int nb_objects = 0;

    if (!texture)
        return (NULL);
    for (int idx = 0 ; objects_names[idx] != -1 ; idx += 1)
        nb_objects += 1;
    objects = malloc(sizeof(object_t *) * nb_objects + 1);
    for (int idx = 0; idx != nb_objects; idx += 1) {
        objects[idx] = create_object(texture,
            objects_names[idx], objects_positions[idx], objects_areas[idx]);
    }
    objects[nb_objects] = NULL;
    return objects;
}

void display_object(sfRenderWindow *window, object_t *object)
{
    if (!window || !object)
        return;
    if (object->is_picked)
        return;
    sfRenderWindow_drawSprite(window, object->sprite, NULL);
}

void display_objects(sfRenderWindow *window, object_t **objects)
{
    if (!window || !objects)
        return;
    for (int idx = 0; objects[idx] != NULL; idx += 1)
        display_object(window, objects[idx]);
}
