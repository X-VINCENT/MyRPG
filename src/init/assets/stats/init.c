/*
** EPITECH PROJECT, 2022
** Init Assets Stats for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_stats_sprites(game_t *game)
{
    stats_t *stats = game->assets->stats;
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    stats->bg = create_sprite(game->textures->menu_bg, r_bg, p_bg, scale);
}

void init_stats_texts(game_t *game)
{
    stats_t *stats = game->assets->stats;
}

void init_stats(game_t *game)
{
    game->assets->stats = malloc(sizeof(stats_t));

    init_stats_sprites(game);
    init_stats_texts(game);
    game->assets->stats->clock = sfClock_create();
}
