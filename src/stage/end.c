/*
** EPITECH PROJECT, 2022
** End Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void end_stage(game_t *game)
{
    end_t *end = game->assets->end;
    sfFloatRect view = {0, 0, 1920, 1080};

    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_museum);
    sfMusic_stop(game->audio->musics->music_fight);
    sfMusic_stop(game->audio->musics->music_menu);
    if (game->data->current->nb_golds >= 1000000) {
        sfView_reset(game->view, view);
        play_music(game->audio->musics->win);
        sfRenderWindow_drawSprite(game->window, end->win, NULL);
    }
    if (game->data->current->nb_golds <= 0) {
        sfView_reset(game->view, view);
        play_music(game->audio->musics->loose);
        sfRenderWindow_drawSprite(game->window, end->loose, NULL);
    }
}
