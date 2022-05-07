/*
** EPITECH PROJECT, 2022
** Bar Sell for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void sell(game_t *game)
{
    rat_t *rat = game->assets->rat;
    sfVector2f office = {208, 110};
    item_t *item = game->inventory->items[game->inventory->selected];

    if (check_location_rect(rat->idle_front, office, 75, 32)) {
        if (sfKeyboard_isKeyPressed(sfKeyY) &&
            item->name != EMPTY) {
            game->data->current->nb_golds += item->selling_price[item->name];
            game->data->current->money_saved +=
                item->selling_price[item->name];
            game->data->current->nb_xps += 15;
            item->name = EMPTY;
        }
        if (sfKeyboard_isKeyPressed(sfKeyU)) {
            game->last_stage = game->stage;
            game->stage = SHOP_STAGE;
        }
    }
}
