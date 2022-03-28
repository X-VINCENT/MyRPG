/*
** EPITECH PROJECT, 2021
** Tools Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef TOOLS_H_
    #define TOOLS_H_

    #include "rpg.h"

// audio.c
void down_volume(game_t *game);
void up_volume(game_t *game);
void down_sounds(game_t *game);
void up_sounds(game_t *game);
void stop_musics(game_t *game);

// fps.c
void down_fps(game_t *game);
void up_fps(game_t *game);

// location.c
bool check_location_rect(
    sfSprite *character, sfVector2f location, int width, int height);

// res.c
void down_res(game_t *game);
void down_res_2(game_t *game);
void up_res(game_t *game);
void up_res_2(game_t *game);

// view.c
void zoom_view(game_t *game);
void rotate_view(game_t *game);
void reset_view(game_t *game);
void check_and_center_view(
    game_t *game, sfSprite *character, sfSprite *background);

#endif /* !TOOLS_H_ */
