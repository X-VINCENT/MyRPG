/*
** EPITECH PROJECT, 2022
** Game Header for My Defender
** File description:
** Xavier VINCENT - Max PEIXOTO
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "rpg.h"

    // event_1.c
    void event(game_t *game);
    void event_key_pressed(game_t *game);
    void mouse_button_pressed(game_t *game);
    void mouse_moved(game_t *game);

    // event_2.c
    void event_key_pressed_2(game_t *game);
    void mouse_button_pressed_2(game_t *game);
    void mouse_moved_2(game_t *game);

    // event_3.c
    void event_key_pressed_3(game_t *game);
    void mouse_button_pressed_3(game_t *game);
    void mouse_moved_3(game_t *game);

// Tools
    // audio.c
    void down_volume(game_t *game);
    void up_volume(game_t *game);
    void down_sounds(game_t *game);
    void up_sounds(game_t *game);
    void stop_musics(game_t *game);

    // fps.c
    void down_fps(game_t *game);
    void up_fps(game_t *game);

    // res.c
    void down_res(game_t *game);
    void down_res_2(game_t *game);
    void up_res(game_t *game);
    void up_res_2(game_t *game);

// my_rpg.c
int my_rpg(void);
void select_game_stage(game_t *game);
void select_game_stage_2(game_t *game);
void select_game_stage_3(game_t *game);
void display_cursor(game_t *game);

#endif /* !GAME_H_ */
