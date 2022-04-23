/*
** EPITECH PROJECT, 2022
** Init Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

save_t *load_save(char *dir)
{
    save_t *save = malloc(sizeof(save_t));

    save->nb_golds = get_value_from_file(my_strcat(dir, "nb_golds.dat"));
    save->nb_xps = get_value_from_file(my_strcat(dir, "nb_xps.dat"));
    save->nb_abilities = get_value_from_file(my_strcat(dir, "nb_abilities.dat"));
    save->time_played = get_value_from_file(my_strcat(dir, "time_played.dat"));
    save->stolen_items = get_value_from_file(my_strcat(dir, "stolen_items.dat"));
    save->fights_won = get_value_from_file(my_strcat(dir, "fights_won.dat"));
    save->fights_lost = get_value_from_file(my_strcat(dir, "fights_lost.dat"));
    save->money_saved = get_value_from_file(my_strcat(dir, "money_saved.dat"));
    return save;
}

void init_data(game_t *game)
{
    game->data = malloc(sizeof(data_t));

    game->data->save1 = load_save("data/save1/");
    game->data->save2 = load_save("data/save2/");
    game->data->save3 = load_save("data/save3/");
}
