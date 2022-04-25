/*
** EPITECH PROJECT, 2022
** City Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_rain(particle_t *rain, sfRenderWindow *window)
{
    while (rain != NULL) {
        sfRenderWindow_drawSprite(window, rain->sprite, NULL);
        rain = rain->next;
    }
}

void animate_rain(particle_t *rain, sfRenderWindow *window)
{
    sfVector2f pos = init_pos(0, 0);

    while (rain != NULL) {
        sfSprite_move(rain->sprite, init_pos(-2, 4));
        if ((sfSprite_getPosition(rain->sprite).y > 2000) ||
            sfSprite_getPosition(rain->sprite).x < 0) {
            pos.x = rand() % (3001);
            pos.y = rand() % (2001);
            sfSprite_setPosition(rain->sprite, pos);
        }
        rain = rain->next;
    }
}

void pnjs_display_city(game_t *game, int nbr_animated_pnj)
{
    nbr_animated_pnj += PNJ_BLACK_THREE + 1;
    move_pnj(game, nbr_animated_pnj);
    for (int i = PNJ_BLACK_THREE + 1; i < nbr_animated_pnj; i++)
        display_pnj(game, game->assets->pnj[i]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK]);
    display_pnj(game, game->assets->pnj[PNJ_GIRL_TWO]);
    display_pnj(game, game->assets->pnj[PNJ_BLACK_THREE]);
}

void city_stage(game_t *game)
{
    sfMusic_stop(game->audio->musics->music_menu);
    check_and_center_view(
        game, game->assets->rat->idle_front, game->assets->city->bg);
    display_city(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, game->assets->city->bg_top, NULL);
    display_circle_rat(game);
    pnjs_display_city(game, 5);
    check_rat_key_pressed(game);
    animate_rain(game->assets->city->rain, game->window);
    display_rain(game->assets->city->rain, game->window);
    display_inventory(game);
    play_music(game->audio->musics->music_city);
}
