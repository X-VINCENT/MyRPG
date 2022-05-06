/*
** EPITECH PROJECT, 2022
** Fights Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void fight_bomb(game_t *game)
{
    fights_t *fights = game->fights;

    fights->bomb = 0;
}

void reset_actions(game_t *game)
{
    game->fights->bite = 0;
    game->fights->kick = 0;
    game->fights->as_touched = 0;
}

void remove_illegal_items_inventory(game_t *game)
{
    item_t **items = game->inventory->items;

    for (int idx = 0; items[idx] != NULL; idx += 1)
        if (items[idx]->legality[items[idx]->name] > 0)
            items[idx]->name = EMPTY;
}

void check_win_lose_fights(game_t *game)
{
    if (game->fights->enemy->life <= 0 ||
        sfSprite_getPosition(game->assets->rat->idle_front).x > 540) {
        game->assets->pnj[game->fights->enemy->idx]->is_dead = 1;
        game->data->current->fights_won += 1;
        game->data->current->nb_xps += 75;
        set_rats_position(game, game->fights->last_position);
        reset_actions(game);
        game->stage = game->last_stage;
    }
    if (game->assets->rat->life <= 0) {
        remove_illegal_items_inventory(game);
        game->data->current->fights_lost += 1;
        game->assets->rat->speed = RAT_SPEED_APPARTMENT;
        game->assets->rat->life = 50;
        set_rats_position(game, RAT_DEFAULT_POS_APPARTMENT);
        reset_actions(game);
        game->stage = APPARTMENT_STAGE;
        game->data->current->nb_golds -= 1000;
    }
}

void fights_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_museum);
    play_music(game->audio->musics->music_fight);
    sfView_setSize(game->view, VIEW_FIGHTS_SIZE);
    sfView_setCenter(game->view, VIEW_FIGHTS_POS);
    check_win_lose_fights(game);
    if (game->fights->to_attack == RAT) {
        if (game->fights->kick == 1)
            fight_kick(game);
        if (game->fights->bite == 1)
            fight_bite(game);
        if (game->fights->bomb == 1)
            fight_bomb(game);
    } else
        fight_enemy(game);
    display_fights(game);
    display_cursor(game);
}
