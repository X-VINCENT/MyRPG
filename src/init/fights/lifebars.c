/*
** EPITECH PROJECT, 2022
** Init Fights Lifebars for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

lifebar_t *init_lifebar(game_t *game, sfVector2f pos, sfIntRect rect)
{
    lifebar_t *lifebar = malloc(sizeof(lifebar_t));
    sfIntRect r_tick = {rect.left, rect.top - 5, 1, 4};
    sfVector2f p_tick = {pos.x - 39.5, pos.y};
    sfVector2f scale = init_scale(1, 1);
    int nb_ticks = 64;

    lifebar->empty_bar = create_sprite(game->textures->gui, rect, pos, scale);
    set_sprite_origin(lifebar->empty_bar, rect);
    lifebar->ticks = malloc(sizeof(sfSprite *) * nb_ticks + 1);
    for (int idx = 0; idx != nb_ticks; idx += 1) {
        lifebar->ticks[idx] = create_sprite(
            game->textures->gui, r_tick, p_tick, scale);
        set_sprite_origin(lifebar->ticks[idx], r_tick);
        p_tick.x += 1;
    }
    lifebar->ticks[nb_ticks] = NULL;
    return lifebar;
}

void init_fights_lifebar(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2f p_rat = init_pos(140, 210);
    sfVector2f p_enemy = init_pos(380, 210);

    fights->rat_lifebar = init_lifebar(game, p_rat, R_RAT_LIFEBAR);
    fights->enemy_lifebar = init_lifebar(game, p_enemy, R_ENEMY_LIFEBAR);
}
