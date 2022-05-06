/*
** EPITECH PROJECT, 2022
** Game Menu Menu Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void mouse_pressed_load_save(game_t *game, load_save_t *load_save, int idx)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_play = sfSprite_getGlobalBounds(load_save->play);
    sfFloatRect r_new_game = sfSprite_getGlobalBounds(load_save->new_game);

    if ((load_save->status == 1 && sfFloatRect_contains(
        &r_play, coords.x, coords.y)) || (load_save->status == 0 &&
        sfFloatRect_contains(&r_new_game, coords.x, coords.y))) {
        if (idx == 0)
            return load_save_values(game, game->data->save1);
        if (idx == 1)
            return load_save_values(game, game->data->save2);
        if (idx == 2)
            return load_save_values(game, game->data->save3);
    }
}

void mouse_pressed_erase_save(game_t *game, load_save_t *load_save, int idx)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_erase = sfSprite_getGlobalBounds(load_save->erase);

    if (load_save->status == 1 &&
        sfFloatRect_contains(&r_erase, coords.x, coords.y)) {
        if (idx == 0)
            return erase_save(game->data->save1);
        if (idx == 1)
            return erase_save(game->data->save2);
        if (idx == 2)
            return erase_save(game->data->save3);
    }
}

void game_menu_mouse_pressed(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;

    mouse_pressed_load_save(game, game_menu->save_1, 0);
    mouse_pressed_load_save(game, game_menu->save_2, 1);
    mouse_pressed_load_save(game, game_menu->save_3, 2);
    mouse_pressed_erase_save(game, game_menu->save_1, 0);
    mouse_pressed_erase_save(game, game_menu->save_2, 1);
    mouse_pressed_erase_save(game, game_menu->save_3, 2);
    top_bar_mouse_pressed(game);
}
