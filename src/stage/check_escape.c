/*
** EPITECH PROJECT, 2022
** Stage Check Escape for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

bool is_it_a_menu(int stage)
{
    if (stage != GAME_STAGE &&
        stage != ABILITIES_STAGE &&
        stage != STATS_STAGE &&
        stage != HOWTOPLAY_STAGE &&
        stage != SETTINGS_STAGE)
        return false;
    return true;
}

void set_view_size_escape(game_t *game)
{
    if (game->last_stage == CITY_STAGE)
        sfView_setSize(game->view, VIEW_CITY_SIZE);
    if (game->last_stage == APPARTMENT_STAGE)
        sfView_setSize(game->view, VIEW_APPARTMENT_SIZE);
    if (game->last_stage == ICE_STAGE)
        sfView_setSize(game->view, VIEW_ICE_SIZE);
    if (game->last_stage == MARKET_STAGE)
        sfView_setSize(game->view, VIEW_MARKET_SIZE);
    if (game->last_stage == CLOTHE_STAGE)
        sfView_setSize(game->view, VIEW_CLOTHE_SIZE);
    if (game->last_stage == MUSEUM_STAGE)
        sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
}

void set_view_pos_escape_2(game_t *game)
{
    if (game->last_stage == MUSEUM_STAGE) {
        if (game->assets->museum->curent_room == 0)
            sfView_setCenter(game->view, VIEW_MUSEUM_POS);
        if (game->assets->museum->curent_room == 1)
            sfView_setCenter(game->view, VIEW_MUSEUM_POS_1);
        if (game->assets->museum->curent_room == 2)
            sfView_setCenter(game->view, VIEW_MUSEUM_POS_2);
        if (game->assets->museum->curent_room == 3)
            sfView_setCenter(game->view, VIEW_MUSEUM_POS_3);
        if (game->assets->museum->curent_room == 4)
            sfView_setCenter(game->view, VIEW_MUSEUM_POS_4);
    }
}

void set_view_pos_escape(game_t *game)
{
    if (game->last_stage == CITY_STAGE)
        sfView_setCenter(game->view, VIEW_CITY_POS);
    if (game->last_stage == APPARTMENT_STAGE)
        sfView_setCenter(game->view, VIEW_APPARTMENT_POS);
    if (game->last_stage == ICE_STAGE)
        sfView_setCenter(game->view, VIEW_ICE_POS);
    if (game->last_stage == MARKET_STAGE)
        sfView_setCenter(game->view, VIEW_MARKET_POS);
    if (game->last_stage == CLOTHE_STAGE)
        sfView_setCenter(game->view, VIEW_CLOTHE_POS);
    set_view_pos_escape_2(game);
}

void check_escape(game_t *game)
{
    sfEvent *event = game->event->event;

    get_time(game);
    set_abilities(game);
    reset_all_objects(game);
    if (event->key.code == game->keys[ESCAPE]) {
        if (!is_it_a_menu(game->stage)) {
            sfView_setRotation(game->view, 0);
            game->last_stage = game->stage;
            game->stage = SETTINGS_STAGE;
            event->key.code = sfKeyUnknown;
            return;
        }
        set_view_size_escape(game);
        set_view_pos_escape(game);
        game->stage = game->last_stage;
        event->key.code = sfKeyUnknown;
    }
}
