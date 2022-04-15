/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Door Location for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_door_museum1(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM1, 10, 57) == true && rat->left == 1) {
        game->stage = CITY_STAGE;
        sfView_setCenter(game->view, VIEW_CITY_POS);
        sfView_setSize(game->view, VIEW_CITY_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_CITY_MUSEUM1);
        rat->speed = RAT_SPEED_CITY;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_TO_MUSEUM2, 10, 98) == true && rat->right == 1) {
        game->stage = MUSEUM2_STAGE;
        sfView_setCenter(game->view, VIEW_MUSEUM2_POS);
        sfView_setSize(game->view, VIEW_MUSEUM2_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM2);
        rat->speed = RAT_SPEED_MUSEUM2;
    }
}
