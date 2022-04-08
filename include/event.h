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

        //ice_cream_shop.c
        void location_ice_cream_city(game_t *game);

        // locations.c
        void city_locations(game_t *game);

        // market.c
        void location_market_city(game_t *game);

        //clothe_shop.c
        void location_clothe_shop_city(game_t *game);

        // museum.c
        void location_museum_city(game_t *game);

    // key_pressed.c
    void city_key_pressed(game_t *game);

    // mouse_moved.c
    void city_mouse_moved(game_t *game);

    // mouse_pressed.c
    void city_mouse_pressed(game_t *game);

// Home Menu
    //key_pressed.c
    void home_menu_key_pressed(game_t *game);

    //mouse_moved.c
    void home_menu_mouse_moved(game_t *game);

    //mouse_pressed.c
    void home_menu_mouse_pressed(game_t *game);

// Ice Cream Shop
    // Locations
        // door.c
        void location_door_ice_cream_shop(game_t *game);

        // locations.c
        void ice_cream_shop_locations(game_t *game);

    // key_pressed.c
    void ice_cream_shop_key_pressed(game_t *game);

    // mouse_moved.c
    void ice_cream_shop_mouse_moved(game_t *game);

    // mouse_pressed.c
    void ice_cream_shop_mouse_pressed(game_t *game);

// Inventory
    // key_pressed.c
    void inventory_key_pressed(game_t *game);

// Rat
    // Animations
        // Check
            // appartment.c
            int rat_can_move_left_appartment(game_t *game);
            int rat_can_move_right_appartment(game_t *game);
            int rat_can_move_up_appartment(game_t *game);
            int rat_can_move_down_appartment(game_t *game);

            // check.c
            int rat_can_move_left(game_t *game);
            int rat_can_move_right(game_t *game);
            int rat_can_move_up(game_t *game);
            int rat_can_move_down(game_t *game);

            // city.c
            int rat_can_move_left_city(game_t *game);
            int rat_can_move_right_city(game_t *game);
            int rat_can_move_up_city(game_t *game);
            int rat_can_move_down_city(game_t *game);

        // animate.c
        void animate_rats(game_t *game);

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

// Settings Menu
    // key_pressed.c
    void settings_key_pressed(game_t *game);

    // mouse_moved.c
    void settings_mouse_moved(game_t *game);

    // mouse_pressed.c
    void settings_mouse_pressed(game_t *game);

// Top Bar
    // key_pressed.c
    void top_bar_key_pressed(game_t *game);

    // mouse_moved.c
    void top_bar_mouse_moved(game_t *game);

    // mouse_pressed.c
    void top_bar_mouse_pressed(game_t *game);

// Transitions
    // key_pressed.c
    void transitions_key_pressed(game_t *game);

    // mouse_moved.c
    void transitions_mouse_moved(game_t *game);

    // mouse_pressed.c
    void transitions_mouse_pressed(game_t *game);

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
