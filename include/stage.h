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
    #define INTRO_STAGE 0
    #define START_STAGE 1
    #define CITY_STAGE 2
    #define APPARTMENT_STAGE 3
    #define BAR_STAGE 4
    #define ICE_STAGE 5
    #define MARKET_STAGE 6
    #define CLOTHE_STAGE 7
    #define MUSEUM_STAGE 8
    #define TRANSITION_STAGE 9
    #define SHOP_STAGE 10

    #define GAME_STAGE 11
    #define ABILITIES_STAGE 12
    #define STATS_STAGE 13
    #define HOWTOPLAY_STAGE 14
    #define SETTINGS_STAGE 15

    #define END_STAGE 16

    #define FIGHTS_STAGE 17

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

// introduction_shop.c
void introduction_stage(game_t *game);

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

//end.c
void end_stage(game_t *game);

#endif /* !STAGE_H_ */
