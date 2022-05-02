/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Door Location for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void sell(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f office = {208, 122};
    item_t *item = game->inventory->items[game->inventory->selected];

    if (check_location_rect(rat->idle_front, office, 60, 26)) {
        if (sfKeyboard_isKeyPressed(game->keys[INTERACT]) &&
            item->name != EMPTY) {
            game->data->current->nb_golds += item->selling_price[item->name];
            game->data->current->money_saved +=
                item->selling_price[item->name];
            game->data->current->nb_xps += 10;
            item->name = EMPTY;
        }
    }
}
