/*
** EPITECH PROJECT, 2022
** Load Save for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

char *abilities_data_int_value[] = {
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

save_t *init_empty_save(void)
{
    save_t *save = malloc(sizeof(save_t));

    save->nb_golds = 1000;
    save->nb_xps = 0;
    save->nb_abilities = 0;
    save->time_played = 0;
    save->stolen_items = 0;
    save->fights_won = 0;
    save->fights_lost = 0;
    save->money_saved = 0;
    save->abilities = malloc(sizeof(int) * NB_ABILITIES + 1);
    save->abilities[NB_ABILITIES] = -1;
    for (int idx = 0; save->abilities[idx] != -1; idx += 1)
        save->abilities[idx] = 0;
    return save;
}

void load_data_in_save_abilities(char *line, save_t *save)
{
    for (int idx = 0; abilities_data_int_value[idx] != NULL; idx += 1) {
        if (!my_strncmp(line, abilities_data_int_value[idx],
            my_strlen(abilities_data_int_value[idx]))) {
            save->abilities[idx] = my_getnbr(line);
            return;
        }
    }
}

void load_data_in_save(char *line, save_t *save)
{
    if (!line || !save)
        return;
    if (!my_strncmp("NB_GOLDS", line, my_strlen("NB_GOLDS")))
        save->nb_golds = my_getnbr(line);
    if (!my_strncmp("NB_XPS", line, my_strlen("NB_XPS")))
        save->nb_xps = my_getnbr(line);
    if (!my_strncmp("NB_ABILITIES", line, my_strlen("NB_ABILITIES")))
        save->nb_abilities = my_getnbr(line);
    if (!my_strncmp("TIME_PLAYED", line, my_strlen("TIME_PLAYED")))
        save->time_played = my_getnbr(line);
    if (!my_strncmp("STOLEN_ITEMS", line, my_strlen("STOLEN_ITEMS")))
        save->stolen_items = my_getnbr(line);
    if (!my_strncmp("FIGHTS_WON", line, my_strlen("FIGHTS_WON")))
        save->fights_won = my_getnbr(line);
    if (!my_strncmp("FIGHTS_LOST", line, my_strlen("FIGHTS_LOST")))
        save->fights_lost = my_getnbr(line);
    if (!my_strncmp("MONEY_SAVED", line, my_strlen("MONEY_SAVED")))
        save->money_saved = my_getnbr(line);
    load_data_in_save_abilities(line, save);
}

save_t *load_save(const char *filename)
{
    save_t *save = init_empty_save();
    char **arr = my_load_file_in_arr(filename);

    if (!arr)
        return save;
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        load_data_in_save(arr[idx], save);
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        free(arr[idx]);
    free(arr);
    return save;
}
