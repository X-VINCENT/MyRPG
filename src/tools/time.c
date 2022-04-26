/*
** EPITECH PROJECT, 2022
** Time Tools for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void get_time(game_t *game)
{
    if (!game)
        return;
    if (time_elapsed(game->time_playing_clock) >= 1) {
        game->data->current->time_played += time_elapsed(
            game->time_playing_clock);
        sfClock_restart(game->time_playing_clock);
    }
}

char *put_time_in_str(int time_played)
{
    int hour = 0;
    int minute = 0;
    char *time = NULL;
    char *str_hour = NULL;
    char *str_hour_long = NULL;
    char *str_minute = NULL;

    hour = time_played / 3600;
    minute = (time_played - (3600 * hour)) / 60;
    str_hour = my_put_nbr_in_str(hour);
    str_hour_long = my_strcat(str_hour, " : ");
    str_minute = my_put_nbr_in_str(minute);
    time = my_strcat(str_hour_long, str_minute);
    free(str_hour);
    free(str_hour_long);
    free(str_minute);
    return time;
}
