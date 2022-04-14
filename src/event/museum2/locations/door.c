/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Door Location for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_door_back_to_museum1(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (game->stage == MUSEUM2_STAGE && check_location_rect(rat->idle_front,
        BACK_TO_MUSEUM1, 47, 96) == true && rat->left == 1) {
        game->stage = MUSEUM1_STAGE;
        sfView_setCenter(game->view, VIEW_MUSEUM1_POS);
        sfView_setSize(game->view, VIEW_MUSEUM1_SIZE );
        set_rats_position(game, LOCATION_TO_MUSEUM2);
        rat->speed = RAT_SPEED_MUSEUM1;
    }
}