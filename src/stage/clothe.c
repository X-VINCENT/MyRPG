/*
** EPITECH PROJECT, 2022
** Clothe store Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void clothe_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_museum);
    sfMusic_stop(game->audio->musics->music_fight);
    display_clothe(game);
    display_rat(game);
    sfRenderWindow_drawSprite(
        game->window, game->assets->clothe->bg_top, NULL);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_objects(game->window, game->assets->clothe->objects);
    event_objects(game, game->assets->clothe->objects, game->keys[INTERACT]);
    display_inventory(game);
}
