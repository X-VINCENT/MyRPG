/*
** EPITECH PROJECT, 2022
** Destroy Shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_shop(shop_t *shop)
{
    destroy_sprite(shop->bg);
    destroy_sprite(shop->buy_off);
    destroy_sprite(shop->exit_off);
    destroy_sprite(shop->buy_on);
    destroy_sprite(shop->exit_on);
    destroy_sprite(shop->bomb_off);
    destroy_sprite(shop->kit_off);
    destroy_sprite(shop->sold);
    destroy_sprite(shop->bomb_on);
    destroy_sprite(shop->kit_on);
    destroy_text(shop->bomb);
    destroy_text(shop->kit);
    free(shop);
}
