/*
** EPITECH PROJECT, 2022
** Init Assets for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_assets(game_t *game)
{
    if (!game)
        return;
    game->assets = malloc(sizeof(assets_t));
    init_cursor(game);
    init_city(game);
    init_clothe(game);
    init_home_menu(game);
    init_rat(game, game->textures->rat_blue);
    init_appartment(game);
    init_ice_cream(game);
    init_museum1(game);
    init_museum2(game);
    init_market(game);
    init_settings(game);
    init_top_bar(game);
    init_transitions(game);
    init_struct_pnjs(game);
}

void init_cursor(game_t *game)
{
    sfIntRect rect = init_rect(75, 23, 290, 326);
    sfVector2f pos = init_pos(0, 0);
    sfVector2f scale = {0.05, 0.05};

    game->assets->cursor = create_sprite(
        game->textures->cursor_icon, rect, pos, scale);
}
