/*
** EPITECH PROJECT, 2022
** Key pressed home menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void use_inventory(game_t *game)
{
    inventory_t *inventory = game->inventory;
    sfEvent *event = game->event->event;

    if (event->key.code == game->keys[INTERACT] &&
        inventory->items[inventory->selected]->name == KIT) {
        if (game->assets->rat->life <= 75)
            game->assets->rat->life += 25;
        else
            game->assets->rat->life = 100;
        inventory->items[inventory->selected]->name = EMPTY;
        game->data->current->nb_xps += 5;
    }
}

void inventory_key_pressed(game_t *game)
{
    inventory_t *inventory = game->inventory;
    sfEvent *event = game->event->event;

    for (int i = sfKeyNum1; i <= sfKeyNum9; i += 1)
        if (event->key.code == i)
            inventory->selected = i - 27;
    if (event->key.code == 51)
        inventory->selected = 3;
    if (event->key.code == 56)
        inventory->selected = 5;
    use_inventory(game);
}
