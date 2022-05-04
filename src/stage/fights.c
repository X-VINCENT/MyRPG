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

void remove_illegal_items_inventory(game_t *game)
{
    item_t **items = game->inventory->items;

    for (int idx = 0; items[idx] != NULL; idx += 1)
        if (items[idx]->legality[items[idx]->name] > 0)
            items[idx]->name = EMPTY;
}

void check_win_lose_fights(game_t *game)
{
    rat_t *rat = game->assets->rat;
    enemy_t *enemy = game->fights->enemy;

    if (enemy->life <= 0) {
        game->data->current->fights_won += 1;
        game->stage = game->last_stage;
    }
    if (rat->life <= 0) {
        remove_illegal_items_inventory(game);
        game->data->current->fights_lost += 1;
        game->stage = APPARTMENT_STAGE;
        sfView_setCenter(game->view, VIEW_APPARTMENT_SIZE);
        sfView_setSize(game->view, VIEW_APPARTMENT_SIZE);
        set_rats_position(game, RAT_DEFAULT_POS_APPARTMENT);
        rat->speed = RAT_SPEED_APPARTMENT;
        game->assets->rat->life = 50;
    }
}

void fights_stage(game_t *game)
{
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
