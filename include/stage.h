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
    #define BAR_STAGE 15
    #define ICE_STAGE 3
    #define MARKET_STAGE 4
    #define CLOTHE_STAGE 5
    #define MUSEUM_STAGE 6
    #define TRANSITION_STAGE 7
    #define SHOP_STAGE 8

    #define GAME_STAGE 10
    #define ABILITIES_STAGE 11
    #define STATS_STAGE 12
    #define HOWTOPLAY_STAGE 13
    #define SETTINGS_STAGE 14

    #define FIGHTS_STAGE 20

// Settings Stage
    #define SETTINGS_STAGE_GAME 0
    #define SETTINGS_STAGE_GRAPHICS 1
    #define SETTINGS_STAGE_AUDIO 2
    #define SETTINGS_STAGE_CONTROLS 3

// abilities.c
void abilities_stage(game_t *game);

// appartment.c
void appartment_stage(game_t *game);

// check_escape.c
void check_escape(game_t *game);

// bar.c
void bar_stage(game_t *game);

// city.c
void city_stage(game_t *game);

// fights.c
void fights_stage(game_t *game);

// game_menu.c
void game_menu_stage(game_t *game);

// home_menu.c
void home_menu_stage(game_t *game);

// howtoplay.c
void howtoplay_stage(game_t *game);

// ice_shop.c
void ice_stage(game_t *game);

// clothe.c
void clothe_stage(game_t *game);

// market.c
void market_stage(game_t *game);

// museum.c
void museum_stage(game_t *game);

// settings.c
void settings_stage(game_t *game);

// stage.c
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);

// shop.c
void shop_stage(game_t *game);

// stats.c
void stats_stage(game_t *game);

// transition.c
void transition_stage(game_t *game);

#endif /* !STAGE_H_ */
