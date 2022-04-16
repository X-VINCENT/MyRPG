/*
** EPITECH PROJECT, 2022
** Init Abilities Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_abilities_menu_titles(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;
    const char font[] = FONT_BUENARD;
    sfColor color = sfColor_fromRGBA(244, 154, 78, 255);

    menu->title = create_text(font, color, 36, ENGLISH_ABILITIES);
    menu->title_utility = create_text(font, sfWhite, 30, ENGLISH_UTILITY);
    menu->title_stealth = create_text(font, sfWhite, 30, ENGLISH_STEALTH);
    menu->title_fight = create_text(font, sfWhite, 30, ENGLISH_FIGHT);
    sfText_setPosition(menu->title, POS_ABILITY_TITLE);
    sfText_setPosition(menu->title_utility, POS_ABILITY_TITLE_UTILITY);
    sfText_setPosition(menu->title_stealth, POS_ABILITY_TITLE_STEALTH);
    sfText_setPosition(menu->title_fight, POS_ABILITY_TITLE_FIGHT);
    set_text_origin_middle_left(menu->title);
    set_text_origin(menu->title_utility);
    set_text_origin(menu->title_stealth);
    set_text_origin(menu->title_fight);
}

void init_abilities_menu_sprites(game_t *game)
{
    abilities_menu_t *menu = game->abilities->menu;
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    menu->bg = create_sprite(game->textures->abilities_bg, r_bg, p_bg, scale);
    menu->tree = create_sprite(
        game->textures->gui, R_TREE, POS_ABILITY_TREE, scale);
    menu->scrolling_bar = create_sprite(game->textures->gui,
        R_SCROLLING_BAR, POS_ABILITY_SCROLLING_BAR, scale);
    menu->scrolling_bar_inside = create_sprite(game->textures->gui,
        R_SCROLLING_BAR_INSIDE, POS_ABILITY_SCROLLING_BAR_INSIDE, scale);
    set_sprite_origin(menu->tree, R_TREE);
    set_sprite_origin(menu->scrolling_bar, R_SCROLLING_BAR);
    set_sprite_origin(menu->scrolling_bar_inside, R_SCROLLING_BAR_INSIDE);
}

void init_abilities_menu(game_t *game)
{
    game->abilities->menu = malloc(sizeof(abilities_menu_t));

    init_abilities_menu_titles(game);
    init_abilities_menu_sprites(game);
    game->abilities->menu->scrolling_clock = sfClock_create();
    game->abilities->menu->clock = sfClock_create();
}
