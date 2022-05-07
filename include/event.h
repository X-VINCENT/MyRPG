/*
** EPITECH PROJECT, 2022
** Event Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef EVENT_H_
    #define EVENT_H_

    #include "rpg.h"

// Abilities
    // key_pressed.c
    void abilities_key_pressed(game_t *game);

    // mouse_moved.c
    void abilities_mouse_moved(game_t *game);

    // mouse_pressed.c
    void abilities_mouse_pressed(game_t *game);

    // move_tree.c
    void abilities_scrolling_bar_event(game_t *game);

    // set_abilities.c
    void set_abilities(game_t *game);

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

// Bar
    // Locations
        // door.c
        void location_door_bar(game_t *game);

        // locations.c
        void bar_locations(game_t *game);

    // key_pressed.c
    void bar_key_pressed(game_t *game);

    // mouse_moved.c
    void bar_mouse_moved(game_t *game);

    // mouse_pressed.c
    void bar_mouse_pressed(game_t *game);

    //sell.c
    void sell(game_t *game);

// City
    // Locations
        // appartment.c
        void location_appartment_city(game_t *game);

        // bar.c
        void location_bar_city(game_t *game);

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

        //pnjs.c
        int check_pnj_intersects(pnj_t *pnj, game_t *game);

    // key_pressed.c
    void city_key_pressed(game_t *game);

    // mouse_moved.c
    void city_mouse_moved(game_t *game);

    // mouse_pressed.c
    void city_mouse_pressed(game_t *game);

// Clothe store
    // Locations
        // door.c
        void location_door_clothe_store(game_t *game);

        // locations.c
        void clothe_store_locations(game_t *game);

        // key_pressed.c
        void clothe_store_key_pressed(game_t *game);

        // mouse_moved.c
        void clothe_store_mouse_moved(game_t *game);

        // mouse_pressed.c
        void clothe_store_mouse_pressed(game_t *game);

// Fights
    // Attacks
        // bite.c
        void fight_bite(game_t *game);

        // enemy.c
        void fight_enemy(game_t *game);

        // kick.c
        void fight_kick(game_t *game);

    // create_fight.c
    void create_fight(game_t *game, pnj_t *pnj, int idx);

    // key_pressed.c
    void rat_jump_in_fights(game_t *game);
    void fights_key_pressed(game_t *game);

    // mouse_moved.c
    void fights_mouse_moved(game_t *game);

    // mouse_pressed.c
    void fights_mouse_pressed(game_t *game);

// Game Menu
    // key_pressed.c
    void game_menu_key_pressed(game_t *game);

    // mouse_moved.c
    void game_menu_mouse_moved(game_t *game);

    // mouse_pressed.c
    void game_menu_mouse_pressed(game_t *game);

// Home Menu
    // key_pressed.c
    void home_menu_key_pressed(game_t *game);

    // mouse_moved.c
    void home_menu_mouse_moved(game_t *game);

    // mouse_pressed.c
    void home_menu_mouse_pressed(game_t *game);

// HowToPlay
    // key_pressed.c
    void howtoplay_key_pressed(game_t *game);

    // mouse_moved.c
    void howtoplay_mouse_moved(game_t *game);

    // mouse_pressed.c
    void howtoplay_mouse_pressed(game_t *game);

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

// Introduction
    // key_pressed.c
    void introduction_key_pressed(game_t *game);

// Market
    // Locations
        // door.c
        void location_door_market(game_t *game);

        // locations.c
        void market_locations(game_t *game);

        // key_pressed.c
        void market_key_pressed(game_t *game);

        // mouse_moved.c
        void market_mouse_moved(game_t *game);

        // mouse_pressed.c
        void market_mouse_pressed(game_t *game);

// Museum
    // Locations
        //door.c
        void location_door_museum(game_t *game);

        //locations.c
        void museum_locations(game_t *game);

        //key_pressed.c
        void museum_key_pressed(game_t *game);

        //mouse_moved.c
        void museum_mouse_moved(game_t *game);

        // mouse_pressed.c
        void museum_mouse_pressed(game_t *game);

// Museum
    // Locations
        //door.c
        void location_door_back_to_museum(game_t *game);

// Inventory
    // key_pressed.c
    void inventory_key_pressed(game_t *game);

// Rat
    // Animations
        // Check
            // check.c
            int rat_can_move_up(game_t *game);
            int rat_can_move_down(game_t *game);
            int rat_can_move_left(game_t *game);
            int rat_can_move_right(game_t *game);

            // check_2.c
            int rat_can_move_up_left(game_t *game);
            int rat_can_move_up_right(game_t *game);
            int rat_can_move_down_left(game_t *game);
            int rat_can_move_down_right(game_t *game);

            // rat_collision.c
            int check_rat_collision(
                game_t *game, sfImage *hitbox, int offset_x, int offset_y);

        // animate.c
        int animate_sprite_one_time(sfSprite *sprite, float shift,
            int max_value, int offset_from_left);
        void animate_rats(game_t *game);

        // move.c
        void move_rat_once(game_t *game);

        // move2.c
        void move_rat(game_t *game);

        // position.c
        void set_rats_position(game_t *game, sfVector2f position);

    // mouse_moved.c
    void rat_mouse_moved(game_t *game);

    // mouse_pressed.c
    void rat_mouse_pressed(game_t *game);

    // move_rat_check.c
    void check_rat_key_pressed(game_t *game);

// Settings
    // Audio
        // key_pressed.c
        void settings_audio_key_pressed(game_t *game);

        // mouse_moved.c
        void settings_audio_mouse_moved(game_t *game);

        // mouse_pressed.c
        void settings_audio_mouse_pressed(game_t *game);

    // Choose
        // key_pressed.c
        void settings_key_pressed_choose_key(game_t *game);

        // mouse_moved.c
        void settings_mouse_moved_choose_key(game_t *game);

        // mouse_pressed.c
        void settings_mouse_pressed_choose_key(game_t *game);

    // Controls
        // key_pressed.c
        void settings_controls_key_pressed(game_t *game);

        // mouse_moved.c
        void settings_controls_mouse_moved(game_t *game);

        // mouse_pressed.c
        void settings_controls_mouse_pressed(game_t *game);

        // move_controls.c
        void settings_controls_scrolling_bar_event(game_t *game);

    // Game
        // key_pressed.c
        void settings_game_key_pressed(game_t *game);

        // mouse_moved.c
        void settings_game_mouse_moved(game_t *game);

        // mouse_pressed.c
        void settings_game_mouse_pressed(game_t *game);

    // Graphics
        // key_pressed.c
        void settings_graphics_key_pressed(game_t *game);

        // mouse_moved.c
        void settings_graphics_mouse_moved(game_t *game);

        // mouse_pressed.c
        void settings_graphics_mouse_pressed(game_t *game);

    // key_pressed.c
    void settings_key_pressed(game_t *game);

    // mouse_moved.c
    void settings_mouse_moved(game_t *game);

    // mouse_pressed.c
    void settings_mouse_pressed(game_t *game);

// Shop
    // key_pressed.c
    void shop_key_pressed(game_t *game);

    // mouse_moved.c
    void shop_mouse_moved(game_t *game);

    // mouse_pressed.c
    void shop_mouse_pressed(game_t *game);

    // mouse_released.c
    void buy_object(game_t *game, enum item_name name, int price);
    void shop_mouse_released(game_t *game);

// Stats
    // key_pressed.c
    void stats_key_pressed(game_t *game);

    // mouse_moved.c
    void stats_mouse_moved(game_t *game);

    // mouse_pressed.c
    void stats_mouse_pressed(game_t *game);

// Top Bar
    // key_pressed.c
    void top_bar_key_pressed(game_t *game);

    // mouse_moved.c
    void top_bar_mouse_moved(game_t *game);

    // mouse_pressed.c
    void top_bar_mouse_pressed(game_t *game);

// Transitions
    // key_pressed.c
    void transition_key_pressed(game_t *game);

    // mouse_moved.c
    void transition_mouse_moved(game_t *game);

    // mouse_pressed.c
    void transition_mouse_pressed(game_t *game);

// check_event.c
void call_different_events(game_t *game);

// event_1.c
void event(game_t *game);
void event_key_pressed(game_t *game);
void mouse_pressed(game_t *game);
void mouse_moved(game_t *game);
void mouse_released(game_t *game);

// event_2.c
void event_key_pressed_2(game_t *game);
void mouse_pressed_2(game_t *game);
void mouse_moved_2(game_t *game);

// event_3.c
void event_key_pressed_3(game_t *game);
void mouse_pressed_3(game_t *game);
void mouse_moved_3(game_t *game);

// event_4.c
void event_key_pressed_4(game_t *game);
void mouse_pressed_4(game_t *game);
void mouse_moved_4(game_t *game);

#endif /* !EVENT_H_ */
