/*
** EPITECH PROJECT, 2022
** Volume Tool for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugoi DUBOIS
*/

#include "rpg.h"

void set_music_volume(game_t *game)
{
    sfSprite *circle = game->assets->settings->audio->music_circle_bar;
    sfVector2f pos_circle = init_pos(1300 + 5 * game->music_volume, 310);

    sfMusic_setVolume(game->audio->musics->music_menu, game->music_volume);
    sfMusic_setVolume(game->audio->musics->music_city, game->music_volume);
    sfMusic_setVolume(game->audio->musics->music_bar, game->music_volume);
    sfMusic_setVolume(
        game->audio->musics->music_ice_cream, game->music_volume);
    sfMusic_setVolume(game->audio->musics->music_museum, game->music_volume);
    sfMusic_setVolume(game->audio->musics->music_fight, game->music_volume);
    sfMusic_setVolume(game->audio->musics->win, game->music_volume);
    sfMusic_setVolume(game->audio->musics->loose, game->music_volume);
    sfSprite_setPosition(circle, pos_circle);
}

void set_effects_volume(game_t *game)
{
    sfSprite *circle = game->assets->settings->audio->effects_circle_bar;
    sfVector2f pos_circle = init_pos(1300 + 5 * game->effects_volume, 410);

    sfSound_setVolume(game->audio->sounds->jump_sound, game->effects_volume);
    sfSprite_setPosition(circle, pos_circle);
}
