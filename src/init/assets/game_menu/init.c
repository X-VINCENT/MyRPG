/*
** EPITECH PROJECT, 2022
** Init Assets Game Menu for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_game_menu_sprites(game_t *game)
{
    game_menu_t *game_menu = game->assets->game_menu;
    sfIntRect r_bg = init_rect(0, 0, 1920, 1080);
    sfVector2f p_bg = init_pos(0, 0);
    sfVector2f scale = init_scale(1, 1);

    game_menu->bg = create_sprite(game->textures->menu_bg, r_bg, p_bg, scale);
}

void init_game_menu(game_t *game)
{
    game->assets->game_menu = malloc(sizeof(game_menu_t));

    init_game_menu_sprites(game);
    game->assets->game_menu->save_1 = init_load_save(game, 430);
    game->assets->game_menu->save_2 = init_load_save(game, 960);
    game->assets->game_menu->save_3 = init_load_save(game, 1490);
    game->assets->game_menu->clock = sfClock_create();
}
