/*
** EPITECH PROJECT, 2022
** Display Shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_cards_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;

    if (shop->current == 0) {
        sfRenderWindow_drawSprite(game->window, shop->bomb_on, NULL);
        sfRenderWindow_drawSprite(game->window, shop->kit_off, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window, shop->bomb_off, NULL);
        sfRenderWindow_drawSprite(game->window, shop->kit_on, NULL);
    }
    sfRenderWindow_drawSprite(game->window, shop->sold, NULL);
}

void display_buttons_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;

    if (shop->status_buy == 0)
        sfRenderWindow_drawSprite(game->window, shop->buy_off, NULL);
    else
        sfRenderWindow_drawSprite(game->window, shop->buy_on, NULL);
    if (shop->status_exit == 0)
        sfRenderWindow_drawSprite(game->window, shop->exit_off, NULL);
    else
        sfRenderWindow_drawSprite(game->window, shop->exit_on, NULL);
}

void display_texts_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;
    char *text_money = my_put_nbr_in_str(game->data->current->nb_golds);

    sfRenderWindow_drawText(game->window, shop->bomb, NULL);
    sfRenderWindow_drawText(game->window, shop->kit, NULL);
    sfText_setString(shop->money, text_money);
    set_text_origin_middle_right(shop->money);
    sfRenderWindow_drawText(game->window, shop->money, NULL);
    free(text_money);
}

void display_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;

    sfRenderWindow_drawSprite(game->window, shop->bg, NULL);
    display_cards_shop(game);
    display_buttons_shop(game);
    display_texts_shop(game);
}
