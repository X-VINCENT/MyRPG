/*
** EPITECH PROJECT, 2022
** Game Menu Mouse Mouved for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void mouse_moved_load_save(load_save_t *load_save, sfVector2f coords)
{
    sfFloatRect r_play = sfSprite_getGlobalBounds(load_save->play);
    sfFloatRect r_erase = sfSprite_getGlobalBounds(load_save->erase);
    sfFloatRect r_new_game = sfSprite_getGlobalBounds(load_save->new_game);

    button_hover(load_save->play, load_save->clock, &r_play, coords);
    button_hover(load_save->erase, load_save->clock, &r_erase, coords);
    button_hover(load_save->new_game, load_save->clock, &r_new_game, coords);
}

void game_menu_mouse_moved(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    mouse_moved_load_save(game_menu->save_1, coords);
    mouse_moved_load_save(game_menu->save_2, coords);
    mouse_moved_load_save(game_menu->save_3, coords);
    top_bar_mouse_moved(game);
}
