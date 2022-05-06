/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void ice_stage(game_t *game)
{
    play_music(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_fight);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_museum);
    display_ice_cream(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->ice->bg_top, NULL);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_objects(game->window, game->assets->ice->objects);
    event_objects(game, game->assets->ice->objects, game->keys[INTERACT]);
    display_inventory(game);
}
