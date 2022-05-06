/*
** EPITECH PROJECT, 2022
** Market Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void bar_stage(game_t *game)
{
    play_music(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_museum);
    sfMusic_stop(game->audio->musics->music_fight);
    display_bar(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->bar->bg_top, NULL);
    if (time_elapsed(game->assets->pnj[PNJ_CASHIER]->animation) > 0.3) {
        animate_sprite(game->assets->pnj[PNJ_CASHIER]->sprite,
            48, 762, 426);
            sfClock_restart(game->assets->pnj[PNJ_CASHIER]->animation);
    }
    display_pnj(game, game->assets->pnj[PNJ_CASHIER], PNJ_CASHIER);
    display_circle_rat(game);
    check_rat_key_pressed(game);
    display_inventory(game);
    sell(game);
}
