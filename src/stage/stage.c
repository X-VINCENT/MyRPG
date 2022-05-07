/*
** EPITECH PROJECT, 2022
** Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void select_game_stage_4(game_t *game)
{
    switch (game->stage) {
        case SHOP_STAGE:
            shop_stage(game);
            break;
        case END_STAGE:
            end_stage(game);
            break;
        case INTRO_STAGE:
            introduction_stage(game);
            break;
        default:
            break;
    }
    return check_escape(game);
}

void select_game_stage_3(game_t *game)
{
    switch (game->stage) {
        case GAME_STAGE:
            game_menu_stage(game);
            break;
        case ABILITIES_STAGE:
            abilities_stage(game);
            break;
        case STATS_STAGE:
            stats_stage(game);
            break;
        case HOWTOPLAY_STAGE:
            howtoplay_stage(game);
            break;
        case SETTINGS_STAGE:
            settings_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_4(game);
}

void select_game_stage_2(game_t *game)
{
    switch (game->stage) {
        case CLOTHE_STAGE:
            clothe_stage(game);
            break;
        case MUSEUM_STAGE:
            museum_stage(game);
            break;
        case BAR_STAGE:
            bar_stage(game);
            break;
        case FIGHTS_STAGE:
            fights_stage(game);
            break;
        case TRANSITION_STAGE:
            transition_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_3(game);
}

void select_game_stage(game_t *game)
{
    switch (game->stage) {
        case START_STAGE:
            home_menu_stage(game);
            break;
        case CITY_STAGE:
            city_stage(game);
            break;
        case APPARTMENT_STAGE:
            appartment_stage(game);
            break;
        case ICE_STAGE:
            ice_stage(game);
            break;
        case MARKET_STAGE:
            market_stage(game);
            break;
        default:
            break;
    }
    select_game_stage_2(game);
}
