/*
** EPITECH PROJECT, 2022
** Destroy Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_load_save(load_save_t *load_save)
{
    destroy_sprite(load_save->box);
    destroy_sprite(load_save->map);
    destroy_text(load_save->title_time_played);
    destroy_text(load_save->title_money);
    destroy_text(load_save->title_xp);
    destroy_text(load_save->time_played);
    destroy_text(load_save->money);
    destroy_text(load_save->xp);
    destroy_sprite(load_save->play);
    destroy_sprite(load_save->erase);
    destroy_text(load_save->empty);
    destroy_sprite(load_save->new_game);
    sfClock_destroy(load_save->clock);
    free(load_save);
}

void destroy_texts_game_menu(game_menu_t *game_menu)
{
    if (!game_menu)
        return;
}

void destroy_sprites_game_menu(game_menu_t *game_menu)
{
    if (!game_menu)
        return;
    destroy_sprite(game_menu->bg);
}

void destroy_game_menu(game_menu_t *game_menu)
{
    if (!game_menu)
        return;
    destroy_texts_game_menu(game_menu);
    destroy_sprites_game_menu(game_menu);
    destroy_load_save(game_menu->save_1);
    destroy_load_save(game_menu->save_2);
    destroy_load_save(game_menu->save_3);
    sfClock_destroy(game_menu->clock);
    free(game_menu);
}
