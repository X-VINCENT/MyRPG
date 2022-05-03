/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Door Location for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_door_bar(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_BAR, 30, 150) == true && rat->left == 1) {
        game->stage = TRANSITION_STAGE;
        game->next_stage = CITY_STAGE;
        sfView_setCenter(game->view, VIEW_CITY_POS);
        sfView_setSize(game->view, VIEW_CITY_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_CITY_BAR);
        rat->speed = RAT_SPEED_CITY;
    }
}
