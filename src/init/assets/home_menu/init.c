/*
** EPITECH PROJECT, 2022
** Init Home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_title(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f pos_p = init_pos(315, 280);
    sfVector2f scale = {0.33, 0.33};

    game->assets->home_menu->title = create_sprite(
        game->textures->home_menu_title, rect, pos, scale);
    game->assets->home_menu->press = create_text(
        FONT_RPG, sfWhite, 30, ENGLISH_PRESS_ENTER);
    set_text_origin(game->assets->home_menu->press);
    sfText_setPosition(game->assets->home_menu->press, pos_p);
}

void init_quit_button(game_t *game)
{
    sfIntRect rect = init_rect(0, 0, 16, 16);
    sfVector2f pos = init_pos(10, 10);
    sfVector2f scale = init_scale(1, 1);

    game->assets->home_menu->quit = malloc(sizeof(sfSprite *) * 4);
    for (int idx = 0; idx < 3; idx += 1) {
        game->assets->home_menu->quit[idx] = create_sprite(
            game->textures->buttons_1, rect, pos, scale);
        set_sprite_origin(game->assets->home_menu->quit[idx], rect);
        rect.left += 80;
    }
    game->assets->home_menu->quit[3] = NULL;
    game->assets->home_menu->quit_state = 0;
}

void init_option_button(game_t *game)
{
    sfIntRect rect = init_rect(48, 32, 16, 16);
    sfVector2f pos = init_pos(28, 10);
    sfVector2f scale = init_scale(1, 1);

    game->assets->home_menu->options = malloc(sizeof(sfSprite *) * 4);
    for (int idx = 0; idx < 3; idx += 1) {
        game->assets->home_menu->options[idx] = create_sprite(
            game->textures->buttons_1, rect, pos, scale);
        set_sprite_origin(game->assets->home_menu->options[idx], rect);
        rect.left += 80;
    }
    game->assets->home_menu->options_state = 0;
}

void init_home_menu(game_t *game)
{
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    game->assets->home_menu->button_clock = sfClock_create();
    init_parallax(game);
    init_title(game);
    init_quit_button(game);
    init_option_button(game);
}
