/*
** EPITECH PROJECT, 2022
** Object Tools 2 for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void event_object_2(item_t **items, object_t *object)
{
    if (!items || !object)
        return;
    for (int idx = 0; items[idx] != NULL; idx += 1) {
        if (items[idx]->name == EMPTY) {
            items[idx]->name = object->name;
            return;
        }
    }
}

void event_object(game_t *game, object_t *object, sfKeyCode key_interact)
{
    sfFloatRect r_player = sfSprite_getGlobalBounds(
        game->assets->rat->idle_front);
    sfFloatRect r_object = sfCircleShape_getGlobalBounds(object->area);

    if (!game->assets->rat->idle_front || !game->inventory->items || !object)
        return;
    if (sfFloatRect_intersects(&r_player, &r_object, NULL) &&
        sfKeyboard_isKeyPressed(key_interact) && object->is_picked == 0) {
        object->is_picked = 1;
        game->data->current->nb_xps += 10;
        event_object_2(game->inventory->items, object);
    }
}

void event_objects(game_t *game, object_t **objects, sfKeyCode key_interact)
{
    int inventory_not_full = 0;

    if (!game->assets->rat->idle_front || !game->inventory->items || !objects)
        return;
    for (int idx = 0; game->inventory->items[idx] != NULL; idx += 1)
        if (game->inventory->items[idx]->name == EMPTY) {
            inventory_not_full = 1;
            break;
        }
    if (inventory_not_full == 0)
        return;
    for (int idx = 0; objects[idx] != NULL; idx += 1)
        event_object(game, objects[idx], key_interact);
}

void destroy_object(object_t *object)
{
    if (!object)
        return;
    destroy_sprite(object->sprite);
    destroy_circle_shape(object->area);
    free(object);
}

void destroy_objects(object_t **objects)
{
    if (!objects)
        return;
    for (int idx = 0; objects[idx] != NULL; idx += 1) {
        destroy_sprite(objects[idx]->sprite);
        free(objects[idx]);
    }
    free(objects);
}
