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
    #define CLOTHE_STAGE 4
    #define MARKET_STAGE 5
    #define MUSEUM1_STAGE 6
    #define MUSEUM2_STAGE 7

// appartment.c
void appartment_stage(game_t *game);

// city.c
void city_stage(game_t *game);

//home_menu.c
void home_menu_stage(game_t *game);

// stage.c
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);

#endif /* !STAGE_H_ */
