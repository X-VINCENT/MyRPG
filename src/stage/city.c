/*
** EPITECH PROJECT, 2022
** City Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_city_music(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_museum);
    sfMusic_stop(game->audio->musics->music_fight);
    play_music(game->audio->musics->music_city);
}

void rain(game_t *game)
{
    if (game->assets->city->is_windy == 0 && rand() % 4000 == 1)
        game->assets->city->is_raining = 1;
    if (game->assets->city->is_raining == 1 &&
        game->assets->city->is_windy == 0) {
        if (time_elapsed(game->assets->city->weather_clock) > 0.01) {
            animate_rain(game->assets->city->rain, game->window);
            sfClock_restart(game->assets->city->weather_clock);
        }
        display_rain(game->assets->city->rain, game->window);
        if (rand() % 3000 == 1)
            game->assets->city->is_raining = 0;
    }
}

void wind(game_t *game)
{
    if (game->assets->city->is_raining == 0 && rand() % 4000 == 1)
        game->assets->city->is_windy = 1;
    if (game->assets->city->is_windy == 1 &&
        game->assets->city->is_raining == 0) {
        display_wind(game->assets->city->wind, game->window);
        if (time_elapsed(game->assets->city->weather_clock) > 0.01) {
            animate_wind(game->assets->city->wind, game->window);
            sfClock_restart(game->assets->city->weather_clock);
        }
        if (rand() % 3000 == 1)
            game->assets->city->is_windy = 0;
    }
}

void pnjs_display_city(game_t *game, int nbr_animated_pnj)
{
    int last_pnj_not_citizens = LAST_PNJ + 1;

    nbr_animated_pnj += last_pnj_not_citizens;
    move_pnj(game, nbr_animated_pnj);
    for (int i = last_pnj_not_citizens; i < nbr_animated_pnj; i++)
        display_pnj(game, game->assets->pnj[i], i);
    display_pnj(game, game->assets->pnj[PNJ_BLACK], PNJ_BLACK);
    display_pnj(game, game->assets->pnj[PNJ_GIRL_TWO], PNJ_GIRL_TWO);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_THREE], PNJ_BLACK_THREE);
    if (game->assets->pnj[PNJ_GUARD_RIGHT]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_GUARD_RIGHT],
            PNJ_GUARD_RIGHT);
    if (game->assets->pnj[PNJ_GUARD_LEFT]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_GUARD_LEFT], PNJ_GUARD_LEFT);
    display_pnj(game, game->assets->pnj[PNJ_GUIDE_TOP_RIGHT],
        PNJ_GUIDE_TOP_RIGHT);
}

void city_stage(game_t *game)
{
    set_city_music(game);
    display_city(game);
    pnjs_display_city(game, 5);
    display_rat(game);
    display_car(game);
    sfRenderWindow_drawSprite(game->window, game->assets->city->bg_top, NULL);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_objects(game->window, game->assets->city->objects);
    event_objects(game, game->assets->city->objects, game->keys[INTERACT]);
    rain(game);
    wind(game);
    fire(game);
    display_minimap(game);
    display_inventory(game);
    check_and_center_view(
        game, game->assets->rat->idle_front, game->assets->city->bg);
}
