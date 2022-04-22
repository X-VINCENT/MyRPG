/*
** EPITECH PROJECT, 2022
** Init Assets HowToPlay for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_howtoplay_sprites(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    howtoplay->bg = create_sprite(game->textures->menu_bg, r_bg, p_bg, scale);
}

void init_howtoplay_texts(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
}

void init_howtoplay(game_t *game)
{
    game->assets->howtoplay = malloc(sizeof(howtoplay_t));

    init_howtoplay_sprites(game);
    init_howtoplay_texts(game);
    game->assets->howtoplay->clock = sfClock_create();
}
