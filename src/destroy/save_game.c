/*
** EPITECH PROJECT, 2022
** Save Game Data for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

char *keys_data_int_value_save[] = {
    "UP",
    "DOWN",
    "LEFT",
    "RIGHT",
    "BITE",
    "DODGE",
    "ATTACK",
    "INTERACT",
    "ROTATE_LEFT",
    "ROTATE_RIGHT",
    "ZOOM_IN",
    "ZOOM_OUT",
    "RESET_VIEW",
    "ESCAPE",
    "HITBOX",
    NULL
};

void save_game_infos_in_file(save_game_t *save, const char *filename)
{
    char *fps = str_to_save("FPS", save->fps);
    char *res = str_to_save("RESOLUTION", save->res);
    char *vsync = str_to_save("VSYNC", save->vsync);
    char *language = str_to_save("LANGUAGE", save->language);
    char *music_volume = str_to_save("MUSIC_VOLUME", save->music_volume);
    char *effects_volume = str_to_save(
        "EFFECTS_VOLUME", save->effects_volume);

    append_data_in_file("## Stats ##\n", filename, false);
    append_data_in_file(fps, filename, true);
    append_data_in_file(res, filename, true);
    append_data_in_file(vsync, filename, true);
    append_data_in_file(language, filename, true);
    append_data_in_file(music_volume, filename, true);
    append_data_in_file(effects_volume, filename, true);
    append_data_in_file("\n", filename, false);
}

void save_keys_in_file(save_game_t *save, const char *filename)
{
    char *data = NULL;

    append_data_in_file("## Keys ##\n", filename, false);
    for (int idx = 0; save->keys[idx] != sfKeyUnknown; idx += 1) {
        data = str_to_save(
            keys_data_int_value_save[idx], save->keys[idx]);
        append_data_in_file(data, filename, true);
    }
}

void save_game_data_in_file(save_game_t *save, const char *filename)
{
    write_data_in_file("## GAME SAVE FILE ##\n\n", filename);
    save_game_infos_in_file(save, filename);
    save_keys_in_file(save, filename);
}
