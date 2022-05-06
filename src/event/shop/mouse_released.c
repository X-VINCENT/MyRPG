/*
** EPITECH PROJECT, 2022
** Shop Mouse Released for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void buy_object(game_t *game, enum item_name name, int price)
{
    item_t **items = game->inventory->items;

    for (int idx = 0; items[idx] != NULL; idx += 1) {
        if (items[idx]->name == EMPTY &&
            game->data->current->nb_golds >= price) {
            items[idx]->name = name;
            game->data->current->nb_golds -= price;
            return;
        }
    }
}

void shop_mouse_released(game_t *game)
{
    shop_t *shop = game->assets->shop;
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, sfMouse_getPositionRenderWindow(game->window), NULL);
    sfFloatRect r_buy = sfSprite_getGlobalBounds(shop->buy_on);
    sfFloatRect r_exit = sfSprite_getGlobalBounds(shop->exit_on);

    if (sfFloatRect_contains(&r_buy, coords.x, coords.y)) {
        if (shop->current == 0 &&
            game->abilities->ability[FIGHT_WEAPON]->status == UNLOCKED)
            buy_object(game, BOMB, BOMB_PRICE);
        else
            buy_object(game, KIT, KIT_PRICE);
    }
    if (sfFloatRect_contains(&r_exit, coords.x, coords.y))
        game->stage = BAR_STAGE;
    shop->status_exit = 0;
    shop->status_buy = 0;
}
