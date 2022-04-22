/*
** EPITECH PROJECT, 2022
** Destroy Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

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
    sfClock_destroy(game_menu->clock);
    free(game_menu);
}
