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
    #define CLOTHE_STAGE 5
    #define MUSEUM1_STAGE 6
    #define MUSEUM2_STAGE 7
    #define RAT_TRANSITION_ENTER 8
    #define RAT_TRANSITION_QUIT 9

    #define GAME_STAGE 10
    #define ABILITIES_STAGE 11
    #define STATS_STAGE 12
    #define HOW_TO_PLAY_STAGE 13
    #define SETTINGS_STAGE 14

// Settings Stage
    #define SETTINGS_STAGE_GAME 0
    #define SETTINGS_STAGE_GRAPHICS 1
    #define SETTINGS_STAGE_AUDIO 2
    #define SETTINGS_STAGE_CONTROLS 3

// abilities.c
void abilities_stage(game_t *game);

// appartment.c
void appartment_stage(game_t *game);

// city.c
void city_stage(game_t *game);

// home_menu.c
void home_menu_stage(game_t *game);

// ice_shop.c
void ice_stage(game_t *game);

// clothe.c
void clothe_stage(game_t *game);

// market.c
void market_stage(game_t *game);

// museum1.c
void museum1_stage(game_t *game);

// museum2.c
void museum2_stage(game_t *game);

// settings.c
void settings_stage(game_t *game);

// stage.c
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);

// stats.c
void stats_stage(game_t *game);

#endif /* !STAGE_H_ */
