/*
** EPITECH PROJECT, 2022
** Reset Objects Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void reset_objects(object_t **objects)
{
    for (int idx = 0; objects[idx] != NULL; idx += 1)
        if (objects[idx]->is_picked == 1 &&
            objects[idx]->name != MONA &&
            objects[idx]->name != THE_WAVE &&
            objects[idx]->name != KEY &&
            objects[idx]->name != TROPHY)
            objects[idx]->is_picked = 0;
}

void reset_all_objects(game_t *game)
{
    object_t **appartment = game->assets->appartment->objects;
    object_t **city = game->assets->city->objects;
    object_t **market = game->assets->market->objects;
    object_t **museum = game->assets->museum->objects;

    if (time_elapsed(game->reset_object_clock) > 100) {
        reset_objects(appartment);
        reset_objects(city);
        reset_objects(market);
        reset_objects(museum);
        sfClock_restart(game->reset_object_clock);
    }
}
