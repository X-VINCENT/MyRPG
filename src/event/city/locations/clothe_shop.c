/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_clothe_shop_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_CLOTHE_SHOP, 28, 26) == true && rat->up == 1) {
        game->stage = TRANSITION_STAGE;
        game->next_stage = CLOTHE_STAGE;
        set_rats_position(game, RAT_DEFAULT_POS_CLOTHE_SHOP);
        rat->speed = RAT_SPEED_CLOTHE_SHOP;
    }
}
