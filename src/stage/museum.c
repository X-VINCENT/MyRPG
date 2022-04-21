/*
** EPITECH PROJECT, 2022
** museum1 Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void museum_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    display_museum(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->museum->bg_top, NULL);
    check_rat_key_pressed(game);
}
