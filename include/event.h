/*
** EPITECH PROJECT, 2022
** Event Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef EVENT_H_
    #define EVENT_H_

    #include "rpg.h"

// Appartment
    // Locations
        // door.c
        void location_door_appartment(game_t *game);

        // locations.c
        void appartment_locations(game_t *game);

    // key_pressed.c
    void appartment_key_pressed(game_t *game);

    // mouse_moved.c
    void appartment_mouse_moved(game_t *game);

    // mouse_pressed.c
    void appartment_mouse_pressed(game_t *game);

// City
    // Locations
        // appartment.c
        void location_appartment_city(game_t *game);

        // locations.c
        void city_locations(game_t *game);

    // key_pressed.c
    void city_key_pressed(game_t *game);

    // mouse_moved.c
    void city_mouse_moved(game_t *game);

    // mouse_pressed.c
    void city_mouse_pressed(game_t *game);

// Rat
    // Animations
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

#endif /* !EVENT_H_ */
