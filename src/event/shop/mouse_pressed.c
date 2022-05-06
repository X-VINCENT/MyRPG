/*
** EPITECH PROJECT, 2022
** Shop Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void shop_mouse_pressed(game_t *game)
{
    shop_t *shop = game->assets->shop;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_bomb = sfSprite_getGlobalBounds(shop->bomb_off);
    sfFloatRect r_kit = sfSprite_getGlobalBounds(shop->kit_off);
    sfFloatRect r_buy = sfSprite_getGlobalBounds(shop->buy_off);
    sfFloatRect r_exit = sfSprite_getGlobalBounds(shop->exit_off);

    if (sfFloatRect_contains(&r_bomb, coords.x, coords.y))
        shop->current = 0;
    if (sfFloatRect_contains(&r_kit, coords.x, coords.y))
        shop->current = 1;
    if (sfFloatRect_contains(&r_buy, coords.x, coords.y))
        shop->status_buy = 1;
    if (sfFloatRect_contains(&r_exit, coords.x, coords.y))
        shop->status_exit = 1;
}
