/*
** EPITECH PROJECT, 2022
** Market Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_market_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_MARKET, 31, 15) == true && rat->up == 1) {
        game->stage = MARKET_STAGE;
        sfView_setCenter(game->view, VIEW_MARKET_POS);
        sfView_setSize(game->view, VIEW_MARKET_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MARKET);
        rat->speed = RAT_SPEED_APPARTMENT;
    }
}
