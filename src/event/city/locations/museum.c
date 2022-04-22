/*
** EPITECH PROJECT, 2022
** Museum Location City for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_museum_city(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_MUSEUM, 25, 23) == true && rat->up == 1) {
        game->stage = MUSEUM_STAGE;
        sfView_setCenter(game->view, VIEW_MUSEUM_POS);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE );
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM);
        rat->speed = RAT_SPEED_MUSEUM;
    }
}
