/*
** EPITECH PROJECT, 2022
** City Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void pnjs_display_city(game_t *game, int nbr_animated_pnj)
{
    nbr_animated_pnj += PNJ_BLACK_THREE + 1;
    move_pnj(game, nbr_animated_pnj);
    for (int i = PNJ_BLACK_THREE + 1; i < nbr_animated_pnj; i++)
        display_pnj(game, game->assets->pnj[i]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_TWO]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_THREE]);
}

void city_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    check_and_center_view(
        game, game->assets->rat->idle_front, game->assets->city->bg);
    display_city(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->city->bg_top, NULL);
    display_circle_rat(game);
    pnjs_display_city(game, 5);
    check_rat_key_pressed(game);
    display_inventory(game);
    play_music(game->audio->musics->music_city);
}
