/*
** EPITECH PROJECT, 2022
** Init Musics for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_musics(game_t *game)
{
    game->audio->musics = malloc(sizeof(musics_t));
    game->audio->musics->music_menu = create_music(MUSIC_HOME_MENU);
    game->audio->musics->music_city = create_music(MUSIC_CITY);
    game->audio->musics->music_bar = create_music(MUSIC_BAR);
    game->audio->musics->music_ice_cream = create_music(MUSIC_ICE_CREAM_SHOP);
    game->audio->musics->music_museum = create_music(MUSIC_MUSEUM);
    game->audio->musics->music_fight = create_music(MUSIC_FIGHT);
    game->audio->musics->win = create_music(MUSIC_WIN);
    game->audio->musics->loose = create_music(MUSIC_LOOSE);
}
