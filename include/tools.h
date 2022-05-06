/*
** EPITECH PROJECT, 2021
** Tools Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef TOOLS_H_
    #define TOOLS_H_

    #include "rpg.h"

// Keys
    // get_name.c
    const char *get_key_name(sfKeyCode key);

// Language
    // Abilities
        // english.c
        void set_texts_english_abilities(game_t *game);

        // french.c
        void set_texts_french_abilities(game_t *game);

        // german.c
        void set_texts_german_abilities(game_t *game);

        // origin.c
        void set_texts_origin_abilities(game_t *game);

        // spanish.c
        void set_texts_spanish_abilities(game_t *game);

    // Game Menu
        // english.c
        void set_texts_english_game_menu(game_t *game);

        // french.c
        void set_texts_french_game_menu(game_t *game);

        // german.c
        void set_texts_german_game_menu(game_t *game);

        // origin.c
        void set_texts_origin_game_menu(game_t *game);

        // spanish.c
        void set_texts_spanish_game_menu(game_t *game);

    // Settings
        // english.c
        void set_texts_english_settings(game_t *game);

        // french.c
        void set_texts_french_settings(game_t *game);

        // german.c
        void set_texts_german_settings(game_t *game);

        // origin.c
        void set_texts_origin_settings(game_t *game);

        // spanish.c
        void set_texts_spanish_settings(game_t *game);

    // Stats
        // english.c
        void set_texts_english_stats(game_t *game);

        // french.c
        void set_texts_french_stats(game_t *game);

        // german.c
        void set_texts_german_stats(game_t *game);

        // origin.c
        void set_texts_origin_stats(game_t *game);

        // spanish.c
        void set_texts_spanish_stats(game_t *game);

    // english.c
    void set_texts_english(game_t *game);

    // french.c
    void set_texts_french(game_t *game);

    // german.c
    void set_texts_german(game_t *game);

    // language.c
    void set_language_texts(game_t *game);

    // origin.c
    void set_texts_origin(game_t *game);

    // spanish.c
    void set_texts_spanish(game_t *game);

// List
    // manage_list.c
    particle_t *create_particle_list(sfTexture *texture,
    sfIntRect rect, sfVector2f pos, sfVector2f scale);
    fire_t *create_fire_list(sfVector2f pos, sfVector2f size, sfColor color);

    particle_t *add_node(particle_t *list, sfTexture *texture,
    sfIntRect rect, sfVector2f pos);
    fire_t *add_node_fire(fire_t *list, sfVector2f pos,
    sfVector2f size, sfColor color);

// Save
    // read.c
    int get_value_from_file(const char path[]);
    int *init_int_array(int size);
    float *init_float_array(int size);
    int *load_int_arr_from_file(const char path[]);
    int *load_int_arr_from_file(const char path[]);

    // write.c
    void append_data_in_file(
        char *data, const char *filename, int should_free_data);
    void write_data_in_file(char *data, const char *filename);
    char *str_to_save(char *title, int value);

// arrow.c
sfSprite *create_arrow(game_t *game, sfVector2f pos, sfVector2f scale);

// fps.c
void down_fps(game_t *game);
void up_fps(game_t *game);

// location.c
bool check_location_rect(
    sfSprite *character, sfVector2f location, int width, int height);

// object.c
object_t *create_object(sfTexture *texture, enum item_name name,
    sfVector2f pos, const int radius);
object_t **create_objects(sfTexture *texture, const int objects_names[],
    const sfVector2f objects_positions[], const int objects_areas[]);
void display_object(sfRenderWindow *window, object_t *object);
void display_objects(sfRenderWindow *window, object_t **objects);

// object2.c
void event_object(game_t *game, object_t *object, sfKeyCode key_interact);
void event_objects(game_t *game, object_t **objects, sfKeyCode key_interact);
void destroy_object(object_t *object);
void destroy_objects(object_t **objects);

// res.c
void down_res(game_t *game);
void down_res_2(game_t *game);
void up_res(game_t *game);
void up_res_2(game_t *game);

// reset_objects.c
void reset_objects(object_t **objects);
void reset_all_objects(game_t *game);

// set_save_values.c
void save_data(save_t *target, save_t *source);
void load_save_values(game_t *game, save_t *save);
void erase_save(save_t *save);
void set_load_save_values(load_save_t *load_save, save_t *save);

// time.c
void get_time(game_t *game);
char *put_time_in_str(int time_played);

// view.c
void zoom_view(game_t *game);
void rotate_view(game_t *game);
void reset_view(game_t *game);
void check_and_center_view(
    game_t *game, sfSprite *character, sfSprite *background);

// volume.c
void set_music_volume(game_t *game);
void set_effects_volume(game_t *game);

// xp.c
void update_xp(game_t *game);

#endif /* !TOOLS_H_ */
