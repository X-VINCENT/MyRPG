/*
** EPITECH PROJECT, 2022
** City Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void rain(game_t *game)
{
    if (game->assets->city->is_windy == 0 && rand() % 2000 == 1)
        game->assets->city->is_raining = 1;
    if (game->assets->city->is_raining == 1 &&
        game->assets->city->is_windy == 0) {
        animate_rain(game->assets->city->rain, game->window);
        display_rain(game->assets->city->rain, game->window);
        if (rand() % 1000 == 1)
            game->assets->city->is_raining = 0;
    }
}

void wind(game_t *game)
{
    if (game->assets->city->is_raining == 0 && rand() % 2000 == 1)
        game->assets->city->is_windy = 1;
    if (game->assets->city->is_windy == 1 &&
        game->assets->city->is_raining == 0) {
        display_wind(game->assets->city->wind, game->window);
        animate_wind(game->assets->city->wind, game->window);
        if (rand() % 1000 == 1)
            game->assets->city->is_windy = 0;
    }
}

void pnjs_display_city(game_t *game, int nbr_animated_pnj)
{
    int last_pnj_not_citizens = LAST_PNJ + 1;

    nbr_animated_pnj += last_pnj_not_citizens;
    move_pnj(game, nbr_animated_pnj);
    for (int i = last_pnj_not_citizens; i < nbr_animated_pnj; i++)
        display_pnj(game, game->assets->pnj[i]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK]);
    display_pnj(game, game->assets->pnj[PNJ_GIRL_TWO]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_THREE]);
    display_pnj(game, game->assets->pnj[PNJ_GUARD_RIGHT]);
    display_pnj(game, game->assets->pnj[PNJ_GUARD_LEFT]);
}

void city_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    display_city(game);
    pnjs_display_city(game, 5);
    display_circle_rat(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->city->bg_top, NULL);
    check_rat_key_pressed(game);
    rain(game);
    wind(game);
    display_inventory(game);
    play_music(game->audio->musics->music_city);
    check_and_center_view(
        game, game->assets->rat->idle_front, game->assets->city->bg);
}
