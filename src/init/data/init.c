/*
** EPITECH PROJECT, 2022
** Init Save for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_data(game_t *game)
{
    game->data = malloc(sizeof(data_t));

    game->data->game = load_game_save("game.dat");
    game->data->current = init_empty_save();
    game->data->save1 = load_save("save1.dat");
    game->data->save2 = load_save("save2.dat");
    game->data->save3 = load_save("save3.dat");
}
