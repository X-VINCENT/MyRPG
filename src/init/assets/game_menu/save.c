/*
** EPITECH PROJECT, 2022
** Init Assets Game Menu Save for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_sprites_load_save(game_t *game, load_save_t *load_save, int pos_x)
{
    sfVector2f p_bg = init_pos(pos_x, 470);
    sfVector2f p_map = init_pos(pos_x, 346);
    sfVector2f p_play = init_pos(pos_x - 70, 675);
    sfVector2f p_erase = init_pos(pos_x + 70, 675);
    sfVector2f scale = init_scale(1, 1);

    load_save->box = create_sprite(game->textures->gui, R_SAVE, p_bg, scale);
    set_sprite_origin(load_save->box, R_SAVE);
    load_save->map = create_sprite(
        game->textures->gui, R_SAVE_MAP, p_map, scale);
    set_sprite_origin(load_save->map, R_SAVE_MAP);
    load_save->play = create_sprite(
        game->textures->gui, R_PLAY, p_play, scale);
    set_sprite_origin(load_save->play, R_PLAY);
    load_save->erase = create_sprite(
        game->textures->gui, R_ERASE, p_erase, scale);
    set_sprite_origin(load_save->erase, R_ERASE);
}

void init_titles_load_save(game_t *game, load_save_t *load_save, int pos_x)
{
    sfVector2f p_title_time_played = init_pos(pos_x - 170, 490);
    sfVector2f p_title_money = init_pos(pos_x - 170, 540);
    sfVector2f p_title_xp = init_pos(pos_x - 170, 590);

    load_save->title_time_played = create_text(
        FONT_BUENARD, sfWhite, 32, ENGLISH_TIME_PLAYED);
    sfText_setPosition(load_save->title_time_played, p_title_time_played);
    set_text_origin_middle_left(load_save->title_time_played);
    load_save->title_money = create_text(
        FONT_BUENARD, sfWhite, 32, ENGLISH_MONEY);
    sfText_setPosition(load_save->title_money, p_title_money);
    set_text_origin_middle_left(load_save->title_money);
    load_save->title_xp = create_text(
        FONT_BUENARD, sfWhite, 32, ENGLISH_XP);
    sfText_setPosition(load_save->title_xp, p_title_xp);
    set_text_origin_middle_left(load_save->title_xp);
}

void init_values_load_save(game_t *game, load_save_t *load_save, int pos_x)
{
    sfVector2f p_time_played = init_pos(pos_x + 125, 490);
    sfVector2f p_money = init_pos(pos_x + 125, 540);
    sfVector2f p_xp = init_pos(pos_x + 125, 590);

    load_save->time_played = create_text(
        FONT_BUENARD, sfWhite, 32, "0");
    sfText_setPosition(load_save->time_played, p_time_played);
    set_text_origin_middle_right(load_save->time_played);
    load_save->money = create_text(
        FONT_BUENARD, sfWhite, 32, "0");
    sfText_setPosition(load_save->money, p_money);
    set_text_origin_middle_right(load_save->money);
    load_save->xp = create_text(
        FONT_BUENARD, sfWhite, 32, "0");
    sfText_setPosition(load_save->xp, p_xp);
    set_text_origin_middle_right(load_save->xp);
}

void init_empty_load_save(game_t *game, load_save_t *load_save, int pos_x)
{
    sfVector2f p_empty = init_pos(pos_x, 465);
    sfVector2f p_new_game = init_pos(pos_x, 660);
    sfVector2f scale = init_scale(1, 1);

    load_save->empty = create_text(FONT_BUENARD, sfWhite, 48, "EMPTY");
    sfText_setPosition(load_save->empty, p_empty);
    set_text_origin(load_save->empty);
    load_save->new_game = create_sprite(
        game->textures->gui, R_PLAY, p_new_game, scale);
    set_sprite_origin(load_save->new_game, R_PLAY);
}

load_save_t *init_load_save(game_t *game, int pos_x)
{
    load_save_t *load_save = malloc(sizeof(load_save_t));

    init_sprites_load_save(game, load_save, pos_x);
    init_titles_load_save(game, load_save, pos_x);
    init_values_load_save(game, load_save, pos_x);
    init_empty_load_save(game, load_save, pos_x);
    load_save->clock = sfClock_create();
    load_save->status = 1;
    return load_save;
}
