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

void append_data_in_file(char *data, const char *filename)
{
    return;
}

void save_data_in_file(save_t *save, const char *filename)
{
    return;
}

void save_all_data(game_t *game)
{
    save_data_in_file(game->data->save1, "save1.dat");
    save_data_in_file(game->data->save2, "save2.dat");
    save_data_in_file(game->data->save3, "save3.dat");
}
