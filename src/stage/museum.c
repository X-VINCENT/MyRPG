/*
** EPITECH PROJECT, 2022
** Museum Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void museum_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    display_museum(game);
    check_rat_key_pressed(game);
    display_pnj(game, game->assets->pnj[PNJ_MUSEUM_HOTESS]);
    display_pnj(game, game->assets->pnj[PNJ_M_GUARD_LEFT]);
    display_pnj(game, game->assets->pnj[PNJ_M_GUARD_RIGHT]);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window,
        game->assets->museum->bg_top, NULL);
    display_circle_rat(game);
    display_inventory(game);
}
