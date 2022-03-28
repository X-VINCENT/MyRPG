/*
** EPITECH PROJECT, 2022
** Init Home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_quit_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(0, 0, 64, 64);
    sfIntRect rect_h = init_rect(320, 0, 64, 64);
    sfIntRect rect_p = init_rect(640, 0, 64, 64);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    home->quit = malloc(sizeof(sfSprite *) * 4);
    home->quit[0] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
    home->quit[1] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect_h, pos, scale);
    home->quit[2] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect_p, pos, scale);
    home->quit_state = 0;
}

void init_option_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(192, 128, 64, 64);
    sfIntRect rect_h = init_rect(512, 128, 64, 64);
    sfIntRect rect_p = init_rect(832, 128, 64, 64);
    sfVector2f pos = init_pos(80, 0);
    sfVector2f scale = init_scale(1, 1);

    home->options = malloc(sizeof(sfSprite *) * 4);
    home->options[0] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
    home->options[1] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect_h, pos, scale);
    home->options[2] = create_sprite(
        "assets/images/objects/buttons/buttons_1.png", rect_p, pos, scale);
    home->options_state = 0;
}

void init_home_menu(game_t *game)
{
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    game->assets->home_menu->button_clock = sfClock_create();
    init_parallax(game);
    init_quit_button(game->assets->home_menu);
    init_option_button(game->assets->home_menu);
}
