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

// arrow.c
sfSprite *create_arrow(game_t *game, sfVector2f pos, sfVector2f scale);

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

// save.c
int get_value_from_file(const char path[]);
int *load_int_arr_from_file(const char path[]);

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

#endif /* !TOOLS_H_ */
