/*
** EPITECH PROJECT, 2022
** Init Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

save_t *load_save(char *save_directory)
{
    save_t *save = malloc(sizeof(save_t));
    char *nb_golds_path = my_strcat(save_directory, "nb_golds.dat");
    char *nb_xps_path = my_strcat(save_directory, "nb_xps.dat");
    char *nb_abilities_path = my_strcat(save_directory, "nb_abilities.dat");
    char *abilities_path = my_strcat(save_directory, "abilities.dat");

    save->nb_golds = get_value_from_file(nb_golds_path);
    save->nb_xps = get_value_from_file(nb_xps_path);
    save->nb_abilities = get_value_from_file(nb_abilities_path);
    save->abilities = load_int_arr_from_file(abilities_path);
    free(nb_golds_path);
    free(nb_xps_path);
    free(nb_abilities_path);
    free(abilities_path);
    return save;
}

void init_data(game_t *game)
{
    game->data = malloc(sizeof(data_t));

    game->data->save1 = load_save("data/save1/");
    game->data->save2 = load_save("data/save2/");
    game->data->save3 = load_save("data/save3/");
    for (int idx = 0; game->data->save1->abilities[idx] != -1; idx += 1)
        my_printf("%d,", game->data->save1->abilities[idx]);
}
