/*
** EPITECH PROJECT, 2022
** Move Rat Check for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void check_locations_rat_move(game_t *game)
{
    if (game->stage == CITY_STAGE)
        city_locations(game);(game);
    if (game->stage == APPARTMENT_STAGE)
        appartment_locations(game);
    if (game->stage == ICE_STAGE)
        ice_cream_shop_locations(game);
    if (game->stage == MARKET_STAGE)
        market_locations(game);
    if (game->stage == MUSEUM1_STAGE)
        museum1_locations(game);
    if (game->stage == MUSEUM2_STAGE)
        museum2_locations(game);
}

void check_rat_key_pressed(game_t *game)
{
    sfEvent *event = game->event->event;

    if (time_elapsed(game->assets->rat->movement_clock) > 0.01) {
        move_rat(game);
        check_locations_rat_move(game);
        sfClock_restart(game->assets->rat->movement_clock);
    }
}
