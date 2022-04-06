/*
** EPITECH PROJECT, 2022
** Market Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_museum_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_MUSEUM1, 25, 23) == true && rat->right == 1) {
        game->stage = MUSEUM1_STAGE;
        sfView_setCenter(game->view, VIEW_MUSEUM1_POS);
        sfView_setSize(game->view, VIEW_MUSEUM1_SIZE );
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM1);
        rat->speed = RAT_SPEED_MUSEUM1;
    }
}
