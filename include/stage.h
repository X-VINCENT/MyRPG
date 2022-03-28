/*
** EPITECH PROJECT, 2021
** Stage Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef STAGE_H_
    #define STAGE_H_

    #include "rpg.h"

// Macros
    #define START_STAGE 0
    #define CITY_STAGE 1
    #define APPARTMENT_STAGE 2
    #define ICE_STAGE 3
    #define MARKET_STAGE 4
    #define RAT_TRANSITION_ENTER 5
    #define RAT_TRANSITION_QUIT 6

// appartment.c
void appartment_stage(game_t *game);

// city.c
void city_stage(game_t *game);

// home_menu.c
void home_menu_stage(game_t *game);

// ice_shop.c
void ice_stage(game_t *game);

// clothe.c
void ice_stage(game_t *game);

// market.c
void market_stage(game_t *game);

// stage.c
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);

#endif /* !STAGE_H_ */
