/*
** EPITECH PROJECT, 2022
** Save Data for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void save_value_in_file(int value, const char filepath[])
{
    FILE *fp = fopen(filepath, "w");
    char *str_value = my_put_nbr_in_str(value);

    if (!fp)
        return;
    if (fwrite(str_value, 1, my_strlen(str_value), fp) == -1)
        return;
    free(str_value);
    fclose(fp);
}

void save_int_arr_in_file(int *arr, const char filepath[])
{
    FILE *fp = fopen(filepath, "w");
    char *str_value = NULL;
    char *str = NULL;

    if (!fp)
        return;
    for (int idx = 0; arr[idx] != -1; idx += 1) {
        str_value = my_put_nbr_in_str(arr[idx]);
        str = my_strcat(str_value, "\n");
        if (fwrite(str, 1, my_strlen(str), fp) == -1)
            return;
        free(str_value);
        free(str);
    }
    fclose(fp);
}

void save_data_in_dir_2(save_t *save, char *dir)
{
    char *fights_lost = my_strcat(dir, "fights_lost.dat");
    char *money_saved = my_strcat(dir, "money_saved.dat");
    char *abilities = my_strcat(dir, "abilities.dat");

    save_value_in_file(save->fights_lost, fights_lost);
    save_value_in_file(save->money_saved, money_saved);
    save_int_arr_in_file(save->abilities, abilities);
    free(fights_lost);
    free(money_saved);
    free(abilities);
}

void save_data_in_dir(save_t *save, char *dir)
{
    char *nb_golds_path = my_strcat(dir, "nb_golds.dat");
    char *nb_xps_path = my_strcat(dir, "nb_xps.dat");
    char *nb_abilities_path = my_strcat(dir, "nb_abilities.dat");
    char *time_played_path = my_strcat(dir, "time_played.dat");
    char *stolen_items = my_strcat(dir, "stolen_items.dat");
    char *fights_won = my_strcat(dir, "fights_won.dat");

    save_value_in_file(save->nb_golds, nb_golds_path);
    save_value_in_file(save->nb_xps, nb_xps_path);
    save_value_in_file(save->nb_abilities, nb_abilities_path);
    save_value_in_file(save->time_played, time_played_path);
    save_value_in_file(save->stolen_items, stolen_items);
    save_value_in_file(save->fights_won, fights_won);
    free(nb_golds_path);
    free(nb_xps_path);
    free(nb_abilities_path);
    free(time_played_path);
    free(stolen_items);
    free(fights_won);
    save_data_in_dir_2(save, dir);
}

void save_all_data(game_t *game)
{
    save_data_in_dir(game->data->save1, "data/save1/");
    save_data_in_dir(game->data->save2, "data/save2/");
    save_data_in_dir(game->data->save3, "data/save3/");
}
