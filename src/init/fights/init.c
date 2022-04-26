/*
** EPITECH PROJECT, 2022
** Init Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_sprites_fights(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2f p_fight = {150, 289};
    sfVector2f p_run= {370, 289};
    sfVector2f scale = {1, 1};

    game->fights->fight_button = create_sprite(
        game->textures->gui, R_FIGHT_BUTTON, p_fight, scale);
    game->fights->run_button = create_sprite(
        game->textures->gui, R_RUN_BUTTON, p_run, scale);
    set_sprite_origin(game->fights->fight_button, R_FIGHT_BUTTON);
    set_sprite_origin(game->fights->run_button, R_RUN_BUTTON);
}

void init_fights(game_t *game)
{
    game->fights = malloc(sizeof(fights_t));
    sfVector2f p_bg = {0, 0};
    sfVector2f scale = {1, 1};

    game->fights->bg = create_sprite(
        game->textures->gui, R_BG_FIGHTS, p_bg, scale);
    init_sprites_fights(game);
    game->fights->button_clock = sfClock_create();
    game->fights->fight_status = 0;
}
