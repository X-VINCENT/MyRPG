/*
** EPITECH PROJECT, 2022
** Ice Cream Shop Door Location for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void location_door_museum_5(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_4_TO_3, 10, 80) == true && rat->left == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_3);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_4_TO_3);
        game->assets->museum->curent_room = 3;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_4_TO_CITY, 10, 80) == true && rat->right == 1) {
        game->stage = TRANSITION_STAGE;
        game->next_stage = CITY_STAGE;
        sfView_setCenter(game->view, VIEW_CITY_POS);
        sfView_setSize(game->view, VIEW_CITY_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_CITY_MUSEUM_OUT);
        rat->speed = RAT_SPEED_CITY;
    }
}

void location_door_museum_4(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_3_TO_2, 10, 165) == true && rat->left == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_2);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_3_TO_2);
        game->assets->museum->curent_room = 2;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_3_TO_4, 10, 165) == true && rat->right == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_4);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_3_TO_4);
        game->assets->museum->curent_room = 4;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    location_door_museum_5(game);
}

void location_door_museum_3(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_2_TO_1, 35, 80) == true && rat->left == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_1);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_2_TO_1);
        game->assets->museum->curent_room = 1;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_2_TO_3, 35, 80) == true && rat->right == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_3);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_2_TO_3);
        game->assets->museum->curent_room = 3;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    location_door_museum_4(game);
}

void location_door_museum_2(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_1_TO_E, 10, 80) == true && rat->left == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_1_TO_E);
        game->assets->museum->curent_room = 0;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_1_TO_2, 10, 80) == true && rat->right == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_2);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_1_TO_2);
        game->assets->museum->curent_room = 2;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    location_door_museum_3(game);
}

void location_door_museum(game_t *game)
{
    rat_t *rat = game->assets->rat;

    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM, 10, 57) == true && rat->left == 1) {
        game->stage = TRANSITION_STAGE;
        game->next_stage = CITY_STAGE;
        sfView_setCenter(game->view, VIEW_CITY_POS);
        sfView_setSize(game->view, VIEW_CITY_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_CITY_MUSEUM);
        rat->speed = RAT_SPEED_CITY;
    }
    if (check_location_rect(rat->idle_front,
        LOCATION_DOOR_MUSEUM_E_TO_1, 10, 80) == true && rat->right == 1) {
        sfView_setCenter(game->view, VIEW_MUSEUM_POS_1);
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_MUSEUM_E_TO_1);
        game->assets->museum->curent_room = 1;
        rat->speed = RAT_SPEED_MUSEUM;
    }
    location_door_museum_2(game);
}
