/*
** EPITECH PROJECT, 2022
** Save Data for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

char *abilities_data_int_value_save[] = {
    "KICK",
    "UTILITY_SELL_TEN",
    "UTILITY_SELL_TWENTY",
    "UTILITY_SELL_THIRTY",
    "UTILITY_SELL_FOURTY",
    "UTILITY_SELL_FIFTY",
    "UTILITY_CAN_BUY",
    "UTILITY_SPEED_THIRTY",
    "UTILITY_SPEED_FOURTY",
    "UTILITY_SPEED_FIFTY",
    "UTILITY_SELL_HUNDRED_SPEED_HUNDRED",
    "STEALTH_RANGE_TEN",
    "STEALTH_ILLEGAL_ONE",
    "STEALTH_ESCAPE_TWENTY",
    "STEALTH_ESCAPE_FOURTY",
    "STEALTH_ESCAPE_SIXTY",
    "STEALTH_RANGE_TWENTY",
    "STEALTH_DODGE",
    "STEALTH_ILLEGAL_TWO",
    "STEALTH_RANGE_FOURTY",
    "STEALTH_CARDBOARD",
    "FIGHT_BITE",
    "FIGHT_HP_TWENTY",
    "FIGHT_HP_THIRTY",
    "FIGHT_HP_FOURTY",
    "FIGHT_ATTACK_FIVE",
    "FIGHT_WEAPON",
    "FIGHT_ATTACK_TEN",
    "FIGHT_ATTACK_THIRTY",
    "FIGHT_HP_FIFTY_ATTACK_FIFTY",
    NULL
};

void save_stats_in_file(save_t *save, const char *filename)
{
    char *nb_golds = str_to_save("NB_GOLDS", save->nb_golds);
    char *nb_xps = str_to_save("NB_XPS", save->nb_xps);
    char *nb_abilities = str_to_save("NB_ABILITIES", save->nb_abilities);
    char *time_played = str_to_save("TIME_PLAYED", save->time_played);
    char *stolen_items = str_to_save("STOLEN_ITEMS", save->stolen_items);
    char *fights_won = str_to_save("FIGHTS_WON", save->fights_won);
    char *fights_lost = str_to_save("FIGHTS_LOST", save->fights_lost);
    char *money_saved = str_to_save("MONEY_SAVED", save->money_saved);

    append_data_in_file("## Stats ##\n", filename, false);
    append_data_in_file(nb_golds, filename, true);
    append_data_in_file(nb_xps, filename, true);
    append_data_in_file(nb_abilities, filename, true);
    append_data_in_file(time_played, filename, true);
    append_data_in_file(stolen_items, filename, true);
    append_data_in_file(fights_won, filename, true);
    append_data_in_file(fights_lost, filename, true);
    append_data_in_file(money_saved, filename, true);
    append_data_in_file("\n", filename, false);
}

void save_abilities_in_file(save_t *save, const char *filename)
{
    char *data = NULL;

    append_data_in_file("## Abilities ##\n", filename, false);
    for (int idx = 0; save->abilities[idx] != -1; idx += 1) {
        data = str_to_save(
            abilities_data_int_value_save[idx], save->abilities[idx]);
        append_data_in_file(data, filename, true);
    }
}

void save_data_in_file(save_t *save, const char *filename)
{
    write_data_in_file("## SAVE FILE ##\n\n", filename);
    save_stats_in_file(save, filename);
    save_abilities_in_file(save, filename);
}

void save_data_in_game_save(game_t *game, save_game_t *save)
{
    save->fps = game->fps;
    save->res = game->res;
    save->vsync = game->vsync;
    save->language = game->language;
    save->music_volume = game->music_volume;
    save->effects_volume = game->effects_volume;
    for (int idx = 0; game->keys[idx] != sfKeyUnknown; idx += 1)
        save->keys[idx] = game->keys[idx];
}

void save_all_data(game_t *game)
{
    save_data_in_game_save(game, game->data->game);
    save_game_data_in_file(game->data->game, "game.dat");
    save_data_in_file(game->data->save1, "save1.dat");
    save_data_in_file(game->data->save2, "save2.dat");
    save_data_in_file(game->data->save3, "save3.dat");
}
