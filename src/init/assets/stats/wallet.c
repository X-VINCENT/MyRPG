/*
** EPITECH PROJECT, 2022
** Init Assets Stats Wallet for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

wallet_t *init_wallet(game_t *game, sfIntRect rect, int pos_y, char *title)
{
    wallet_t *wallet = malloc(sizeof(wallet_t));
    sfVector2f p_logo = init_pos(620, pos_y + 5);
    sfVector2f p_title = init_pos(75, pos_y);
    sfVector2f p_value = init_pos(535, pos_y - 10);
    sfVector2f scale = init_scale(1, 1);

    wallet->logo = create_sprite(game->textures->gui, rect, p_logo, scale);
    wallet->title = create_text(FONT_BUENARD, sfWhite, 42, title);
    wallet->value = create_text(FONT_BUENARD, sfWhite, 42, "0");
    sfText_setPosition(wallet->title, p_title);
    sfText_setPosition(wallet->value, p_value);
    set_sprite_origin(wallet->logo, rect);
    set_text_origin_middle_right(wallet->title);
    set_text_origin(wallet->value);
    return wallet;
}

void init_wallets_stats(game_t *game)
{
    stats_t *stats = game->assets->stats;

    stats->money = init_wallet(game, R_COIN, 335, ENGLISH_MONEY);
    stats->xp = init_wallet(game, R_XP, 450, ENGLISH_XP);
    stats->abilities = init_wallet(
        game, R_ABILITIES, 565, ENGLISH_ABILITIES_POINTS);
}
