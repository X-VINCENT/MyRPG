/*
** EPITECH PROJECT, 2022
** Move Rat Check for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void check_locations_rat_move(game_t *game)
{
    if (game->stage == CITY_STAGE)
        city_locations(game);
    if (game->stage == APPARTMENT_STAGE)
        appartment_locations(game);
    if (game->stage == ICE_STAGE)
        ice_cream_shop_locations(game);
    if (game->stage == MARKET_STAGE)
        market_locations(game);
    if (game->stage == MUSEUM_STAGE)
        museum_locations(game);
    if (game->stage == CLOTHE_STAGE)
        clothe_store_locations(game);
    if (game->stage == BAR_STAGE)
        bar_locations(game);
}

void increase_speed_jump_rat(game_t *game)
{
    if (game->stage == CITY_STAGE)
        game->assets->rat->speed = RAT_SPEED_CITY * 1.2;
    if (game->stage == APPARTMENT_STAGE)
        game->assets->rat->speed = RAT_SPEED_APPARTMENT * 1.2;
    if (game->stage == ICE_STAGE)
        game->assets->rat->speed = RAT_SPEED_ICE_CREAM_SHOP * 1.2;
    if (game->stage == MARKET_STAGE)
        game->assets->rat->speed = RAT_SPEED_CITY * 1.2;
    if (game->stage == MUSEUM_STAGE)
        game->assets->rat->speed = RAT_SPEED_MUSEUM * 1.2;
    if (game->stage == CLOTHE_STAGE)
        game->assets->rat->speed = RAT_SPEED_CLOTHE_SHOP * 1.2;
}

void decrease_speed_jump_rat(game_t *game)
{
    if (game->stage == CITY_STAGE)
        game->assets->rat->speed = RAT_SPEED_CITY;
    if (game->stage == APPARTMENT_STAGE)
        game->assets->rat->speed = RAT_SPEED_APPARTMENT;
    if (game->stage == ICE_STAGE)
        game->assets->rat->speed = RAT_SPEED_ICE_CREAM_SHOP;
    if (game->stage == MARKET_STAGE)
        game->assets->rat->speed = RAT_SPEED_CITY;
    if (game->stage == MUSEUM_STAGE)
        game->assets->rat->speed = RAT_SPEED_MUSEUM;
    if (game->stage == CLOTHE_STAGE)
        game->assets->rat->speed = RAT_SPEED_CLOTHE_SHOP;
}

void check_rat_key_pressed_actions(game_t *game)
{
    if (game->assets->rat->is_dodging == 1)
        increase_speed_jump_rat(game);
    else
        decrease_speed_jump_rat(game);
    if (sfKeyboard_isKeyPressed(game->keys[DODGE]) &&
        game->abilities->ability[STEALTH_DODGE]->status == UNLOCKED) {
        game->assets->rat->is_dodging = 1;
        if (sfTime_asSeconds(sfSound_getPlayingOffset(
            game->audio->sounds->jump_sound)) > 0.7 ||
            sfTime_asSeconds(sfSound_getPlayingOffset(
            game->audio->sounds->jump_sound)) == 0)
            sfSound_play(game->audio->sounds->jump_sound);
    }
    if (sfKeyboard_isKeyPressed(game->keys[ATTACK]) &&
        game->abilities->ability[KICK]->status == UNLOCKED)
        game->assets->rat->is_kicking = 1;
    if (sfKeyboard_isKeyPressed(game->keys[BITE]) &&
        game->abilities->ability[FIGHT_BITE]->status == UNLOCKED)
        game->assets->rat->is_biting = 1;
}

void check_rat_key_pressed(game_t *game)
{
    check_rat_key_pressed_actions(game);
    if (time_elapsed(game->assets->rat->movement_clock) > 0.01) {
        move_rat(game);
        check_locations_rat_move(game);
        sfClock_restart(game->assets->rat->movement_clock);
    }
}
