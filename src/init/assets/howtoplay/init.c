/*
** EPITECH PROJECT, 2022
** Init Assets HowToPlay for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

sfIntRect rects_htp[] = {
    R_HTP_EXPLANATION,
    R_HTP_APART,
    R_HTP_PNJ,
};

void init_howtoplay_sprites_2(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfVector2f p_sprites = init_pos(960, 479);
    sfVector2f scale = init_scale(1, 1);

    howtoplay->sprite = malloc(sizeof(sfSprite *) * 4);
    howtoplay->sprite[3] = NULL;
    for (int idx = 0; idx < 3; idx++) {
        howtoplay->sprite[idx] = create_sprite(
            game->textures->gui, rects_htp[idx], p_sprites, scale);
        set_sprite_origin(howtoplay->sprite[idx], rects_htp[idx]);
    }
}

void init_howtoplay_sprites(game_t *game)
{
    howtoplay_t *howtoplay = game->assets->howtoplay;
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f p_left = init_pos(80, 480);
    sfVector2f p_right = init_pos(1840, 480);
    sfVector2f scale = init_scale(1, 1);
    sfVector2f s_right = init_scale(-1, 1);

    howtoplay->bg = create_sprite(game->textures->menu_bg, r_bg, p_bg, scale);
    howtoplay->l_arrow = create_sprite(
        game->textures->gui, R_ARROW, p_left, scale);
    howtoplay->r_arrow = create_sprite(
        game->textures->gui, R_ARROW, p_right, s_right);
    init_howtoplay_sprites_2(game);
}

void init_howtoplay(game_t *game)
{
    game->assets->howtoplay = malloc(sizeof(howtoplay_t));

    init_howtoplay_sprites(game);
    game->assets->howtoplay->screen = 0;
    game->assets->howtoplay->clock = sfClock_create();
}
