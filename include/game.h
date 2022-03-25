/*
** EPITECH PROJECT, 2022
** Game Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "rpg.h"

// Display
    // Appartment
        // display.c
        void display_appartment(game_t *game);

    // City
        // display.c
        void display_city(game_t *game);

    // Rat
        // display.c
        void display_rat(game_t *game);

// Event
    // City
        // key_pressed.c
        void appartment_key_pressed(game_t *game);

        // mouse_moved.c
        void appartment_mouse_moved(game_t *game);

        // mouse_pressed.c
        void appartment_mouse_pressed(game_t *game);

    // City
        // key_pressed.c
        void city_key_pressed(game_t *game);

        // mouse_moved.c
        void city_mouse_moved(game_t *game);

        // mouse_pressed.c
        void city_mouse_pressed(game_t *game);

    // Rat
        // Rat
            // animate.c
            void animate_rats(game_t *game);

            // check.c
            int rat_can_move_left(game_t *game);
            int rat_can_move_right(game_t *game);
            int rat_can_move_up(game_t *game);
            int rat_can_move_down(game_t *game);

            // move.c
            void move_rat(game_t *game);

            // position.c
            void set_rats_position(game_t *game, sfVector2f position);

        // key_pressed.c
        void rat_key_pressed(game_t *game);

        // mouse_moved.c
        void rat_mouse_moved(game_t *game);

        // mouse_pressed.c
        void rat_mouse_pressed(game_t *game);

    // event_1.c
    void event(game_t *game);
    void event_key_pressed(game_t *game);
    void mouse_pressed(game_t *game);
    void mouse_moved(game_t *game);

    // event_2.c
    void event_key_pressed_2(game_t *game);
    void mouse_pressed_2(game_t *game);
    void mouse_moved_2(game_t *game);

    // event_3.c
    void event_key_pressed_3(game_t *game);
    void mouse_pressed_3(game_t *game);
    void mouse_moved_3(game_t *game);

// Stage
    // appartment.c
    void appartment_stage(game_t *game);

    // city.c
    void city_stage(game_t *game);

    // stage.c
    void select_game_stage(game_t *game);
    void select_game_stage_2(game_t *game);
    void select_game_stage_3(game_t *game);

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

    // view.c
    void zoom_view(game_t *game);
    void rotate_view(game_t *game);
    void reset_view(game_t *game);

// my_rpg.c
int my_rpg(void);
int engine(game_t *game);
void display_cursor(game_t *game);

#endif /* !GAME_H_ */
