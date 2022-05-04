/*
** EPITECH PROJECT, 2022
** Market Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void market_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_fight);
    sfMusic_stop(game->audio->musics->music_museum);
    display_market(game);
    display_rat(game);
    sfRenderWindow_drawSprite(
        game->window, game->assets->market->bg_top, NULL);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_objects(game->window, game->assets->market->objects);
    event_objects(game, game->assets->market->objects, game->keys[INTERACT]);
    display_inventory(game);
}
