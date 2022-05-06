/*
** EPITECH PROJECT, 2022
** Init Shop for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_buttons_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;
    sfTexture *gui = game->textures->gui;
    sfVector2f p_buy = init_pos(1707, 1635);
    sfVector2f p_exit = init_pos(1707, 1785);
    sfVector2f scale = init_scale(1, 1);

    shop->buy_off = create_sprite(gui, R_BUY_OFF, p_buy, scale);
    shop->exit_off = create_sprite(gui, R_EXIT_OFF, p_exit, scale);
    shop->buy_on = create_sprite(gui, R_BUY_ON, p_buy, scale);
    shop->exit_on = create_sprite(gui, R_EXIT_ON, p_exit, scale);
    set_sprite_origin(shop->buy_off, R_BUY_OFF);
    set_sprite_origin(shop->exit_off, R_EXIT_OFF);
    set_sprite_origin(shop->buy_on, R_BUY_ON);
    set_sprite_origin(shop->exit_on, R_EXIT_ON);
}

void init_cards_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;
    sfTexture *gui = game->textures->gui;
    sfVector2f p_bomb = init_pos(972, 895);
    sfVector2f p_kit = init_pos(1707, 895);
    sfVector2f p_sold = init_pos(2445, 895);
    sfVector2f scale = init_scale(1, 1);

    shop->bomb_off = create_sprite(gui, R_BOMB_OFF, p_bomb, scale);
    shop->kit_off = create_sprite(gui, R_KIT_OFF, p_kit, scale);
    shop->sold = create_sprite(gui, R_SOLD_OFF, p_sold, scale);
    shop->bomb_on = create_sprite(gui, R_BOMB_ON, p_bomb, scale);
    shop->kit_on = create_sprite(gui, R_KIT_ON, p_kit, scale);
    set_sprite_origin(shop->bomb_off, R_BOMB_OFF);
    set_sprite_origin(shop->kit_off, R_KIT_OFF);
    set_sprite_origin(shop->sold, R_SOLD_OFF);
    set_sprite_origin(shop->bomb_on, R_BOMB_ON);
    set_sprite_origin(shop->kit_on, R_KIT_ON);
}

void init_texts_shop(game_t *game)
{
    shop_t *shop = game->assets->shop;
    sfVector2f p_bomb = init_pos(770, 1433);
    sfVector2f p_kit = init_pos(1495, 1433);
    sfVector2f p_money = init_pos(1255, 1624);

    shop->bomb = create_text(FONT_PIXEL_ART, sfWhite, 64, "500");
    shop->kit = create_text(FONT_PIXEL_ART, sfWhite, 64, "100");
    shop->money = create_text(FONT_PIXEL_ART, sfWhite, 64, "0");
    sfText_setPosition(shop->bomb, p_bomb);
    sfText_setPosition(shop->kit, p_kit);
    sfText_setPosition(shop->money, p_money);
    set_text_origin_middle_left(shop->bomb);
    set_text_origin_middle_left(shop->kit);
    set_text_origin_middle_right(shop->money);
}

void init_shop(game_t *game)
{
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->shop = malloc(sizeof(shop_t));
    game->assets->shop->bg = create_sprite(
        game->textures->gui, R_BG_SHOP, pos, scale);
    init_buttons_shop(game);
    init_cards_shop(game);
    init_texts_shop(game);
    game->assets->shop->current = 0;
    game->assets->shop->status_buy = 0;
    game->assets->shop->status_exit = 0;
}
