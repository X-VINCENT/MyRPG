/*
** EPITECH PROJECT, 2022
** Init Assets Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_stats(game_t *game)
{
    game->assets->stats = malloc(sizeof(stats_t));
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f p_stats = init_pos(38, 210);
    sfVector2f p_frame = init_pos(960, 460);
    sfVector2f scale = init_scale(1, 1);
    sfColor color = sfColor_fromRGBA(209, 156, 80, 255);

    game->assets->stats->bg = create_sprite(
        game->textures->menu_bg, r_bg, p_bg, scale);
    game->assets->stats->stats = create_text(
        FONT_BUENARD, color, 48, ENGLISH_STATS);
    game->assets->stats->frame = create_sprite(
        game->textures->gui, R_RAT_FRAME, p_frame, scale);
    sfText_setPosition(game->assets->stats->stats, p_stats);
    set_sprite_origin(game->assets->stats->frame, R_RAT_FRAME);
    set_text_origin_middle_left(game->assets->stats->stats);
    init_wallets_stats(game);
    init_stats_stats(game);
    game->assets->stats->clock = sfClock_create();
}
