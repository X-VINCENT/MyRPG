/*
** EPITECH PROJECT, 2022
** Init Home_menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_title(home_menu_t *home)
{
    sfIntRect rect = init_rect(0, 0, 1920, 1080);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    home->title = create_sprite(
        "assets/images/menu/home/title.png", rect, pos, scale);
}

void init_quit_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(0, 0, 16, 16);
    sfVector2f pos = init_pos(10, 10);
    sfVector2f scale = init_scale(1, 1);

    home->quit = malloc(sizeof(sfSprite *) * 4);
    for (int idx  = 0; idx < 3; idx += 1) {
        home->quit[idx] = create_sprite(
            "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
        set_sprite_origin(home->quit[idx], rect);
        rect.left += 80;
    }
    home->quit[3] = NULL;
    home->quit_state = 0;
}

void init_option_button(home_menu_t *home)
{
    sfIntRect rect = init_rect(48, 32, 16, 16);
    sfVector2f pos = init_pos(28, 10);
    sfVector2f scale = init_scale(1, 1);

    home->options = malloc(sizeof(sfSprite *) * 4);
    for (int idx  = 0; idx < 3; idx += 1) {
        home->options[idx] = create_sprite(
            "assets/images/objects/buttons/buttons_1.png", rect, pos, scale);
        set_sprite_origin(home->options[idx], rect);
        rect.left += 80;
    }
    home->options_state = 0;
}

void init_home_menu(game_t *game)
{
    game->assets->home_menu = malloc(sizeof(home_menu_t));
    game->assets->home_menu->button_clock = sfClock_create();
    init_parallax(game);
    init_title(game->assets->home_menu);
    init_quit_button(game->assets->home_menu);
    init_option_button(game->assets->home_menu);
}
