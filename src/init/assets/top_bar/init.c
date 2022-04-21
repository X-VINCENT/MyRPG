/*
** EPITECH PROJECT, 2022
** Init Top Bar for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_texts_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfVector2f pos1 = init_pos(384, 64);
    sfVector2f pos2 = init_pos(684, 64);
    sfVector2f pos3 = init_pos(984, 64);
    sfVector2f pos4 = init_pos(1284, 64);

    bar->menu1 = create_text(FONT_RPG, sfWhite, 48, ENGLISH_MENU_1);
    bar->abilities = create_text(FONT_RPG, sfWhite, 48, ENGLISH_ABILITIES);
    bar->menu3 = create_text(FONT_RPG, sfWhite, 48, ENGLISH_MENU_3);
    bar->menu4 = create_text(FONT_RPG, sfWhite, 48, ENGLISH_MENU_4);
    set_text_origin(bar->menu1);
    set_text_origin(bar->abilities);
    set_text_origin(bar->menu3);
    set_text_origin(bar->menu4);
    sfText_setPosition(bar->menu1, pos1);
    sfText_setPosition(bar->abilities, pos2);
    sfText_setPosition(bar->menu3, pos3);
    sfText_setPosition(bar->menu4, pos4);
}

void init_sprites_top_bar(game_t *game)
{
    top_bar_t *bar = game->assets->top_bar;
    sfTexture *gui = game->textures->gui;
    sfIntRect r_settings_off = init_rect(0, 0, 53, 56);
    sfIntRect r_settings_on = init_rect(53, 0, 53, 56);
    sfIntRect r_quit_off = init_rect(121, 0, 53, 59);
    sfIntRect r_quit_on = init_rect(175, 0, 53, 59);
    sfVector2f p_settings = init_pos(1763, 86);
    sfVector2f p_quit = init_pos(1871, 86);
    sfVector2f scale = init_scale(1, 1);

    bar->settings_off = create_sprite(gui, r_settings_off, p_settings, scale);
    bar->settings_on = create_sprite(gui, r_settings_on, p_settings, scale);
    bar->quit_off = create_sprite(gui, r_quit_off, p_quit, scale);
    bar->quit_on = create_sprite(gui, r_quit_on, p_quit, scale);
    set_sprite_origin(bar->settings_off, r_settings_off);
    set_sprite_origin(bar->settings_on, r_settings_on);
    set_sprite_origin(bar->quit_off, r_quit_off);
    set_sprite_origin(bar->quit_on, r_quit_on);
}

void init_top_bar(game_t *game)
{
    sfTexture *gui = game->textures->gui;
    sfIntRect r_dot = init_rect(0, 0, 0, 0);
    sfVector2f p_dot = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game->assets->top_bar = malloc(sizeof(top_bar_t));
    init_texts_top_bar(game);
    init_sprites_top_bar(game);
    game->assets->top_bar->dot = create_sprite(gui, r_dot, p_dot, scale);
    game->assets->top_bar->clock = sfClock_create();
}
