/*
** EPITECH PROJECT, 2022
** Display Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_game_menu_values(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;

    set_load_save_values(game_menu->save_1, game->data->save1);
    set_load_save_values(game_menu->save_2, game->data->save2);
    set_load_save_values(game_menu->save_3, game->data->save3);
}

void display_load_save(sfRenderWindow *window, load_save_t *load_save)
{
    sfRenderWindow_drawSprite(window, load_save->box, NULL);
    if (load_save->status == 0) {
        sfRenderWindow_drawText(window, load_save->empty, NULL);
        sfRenderWindow_drawSprite(window, load_save->new_game, NULL);
        return;
    }
    sfRenderWindow_drawSprite(window, load_save->map, NULL);
    sfRenderWindow_drawText(window, load_save->title_time_played, NULL);
    sfRenderWindow_drawText(window, load_save->title_money, NULL);
    sfRenderWindow_drawText(window, load_save->title_xp, NULL);
    sfRenderWindow_drawText(window, load_save->time_played, NULL);
    sfRenderWindow_drawText(window, load_save->money, NULL);
    sfRenderWindow_drawText(window, load_save->xp, NULL);
    sfRenderWindow_drawSprite(window, load_save->play, NULL);
    sfRenderWindow_drawSprite(window, load_save->erase, NULL);
}

void display_game_menu(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;

    sfRenderWindow_drawSprite(game->window, game_menu->bg, NULL);
    set_game_menu_values(game);
    display_load_save(game->window, game_menu->save_1);
    display_load_save(game->window, game_menu->save_2);
    display_load_save(game->window, game_menu->save_3);
    display_top_bar(game);
}
