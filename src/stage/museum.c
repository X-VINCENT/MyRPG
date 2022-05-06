/*
** EPITECH PROJECT, 2022
** Museum Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_pnj_museum(game_t *game)
{
    if (game->assets->pnj[PNJ_M_GUARD_LEFT]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_M_GUARD_LEFT],
            PNJ_M_GUARD_LEFT);
    if (game->assets->pnj[PNJ_M_GUARD_RIGHT]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_M_GUARD_RIGHT],
            PNJ_M_GUARD_RIGHT);
    if (game->assets->pnj[PNJ_M2_GUARD_LEFT]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_M2_GUARD_LEFT],
            PNJ_M2_GUARD_LEFT);
    if (game->assets->pnj[PNJ_GUARD_LAST_MUSEUM]->is_dead == 0)
        display_pnj(game, game->assets->pnj[PNJ_GUARD_LAST_MUSEUM],
            PNJ_GUARD_LAST_MUSEUM);
    display_pnj(game, game->assets->pnj[PNJ_MUSEUM_HOTESS],
        PNJ_MUSEUM_HOTESS);
    display_pnj(game, game->assets->pnj[PNJ_MUSEUM_INDICATOR],
        PNJ_MUSEUM_INDICATOR);
}

void museum_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_fight);
    play_music(game->audio->musics->music_museum);
    display_museum(game);
    check_rat_key_pressed(game);
    display_pnj_museum(game);
    display_rat(game);
    display_objects(game->window, game->assets->museum->objects);
    event_objects(game, game->assets->museum->objects, game->keys[INTERACT]);
    sfRenderWindow_drawSprite(game->window,
        game->assets->museum->bg_top, NULL);
    display_circle_rat(game);
    display_inventory(game);
}
