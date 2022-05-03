/*
** EPITECH PROJECT, 2022
** Load Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

char *keys_data_int_value[] = {
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

save_game_t *init_empty_game_save(void)
{
    save_game_t *save = malloc(sizeof(save_game_t));

    save->fps = 60;
    save->res = 1080;
    save->vsync = 0;
    save->language = ENGLISH;
    save->music_volume = 100;
    save->effects_volume = 100;
    save->keys = malloc(sizeof(int) * NB_KEYS + 1);
    save->keys[NB_KEYS] = -1;
    for (int idx = 0; save->keys[idx] != -1; idx += 1)
        save->keys[idx] = -1;
    return save;
}

void load_game_data_in_save_keys(char *line, save_game_t *save)
{
    for (int idx = 0; keys_data_int_value[idx] != NULL; idx += 1) {
        if (!my_strncmp(line, keys_data_int_value[idx],
            my_strlen(keys_data_int_value[idx]))) {
            save->keys[idx] = my_getnbr(line);
            return;
        }
    }
}

void load_game_data_in_save(char *line, save_game_t *save)
{
    if (!line || !save)
        return;
    if (!my_strncmp("FPS", line, my_strlen("FPS")))
        save->fps = my_getnbr(line);
    if (!my_strncmp("RESOLUTION", line, my_strlen("RESOLUTION")))
        save->res = my_getnbr(line);
    if (!my_strncmp("VSYNC", line, my_strlen("VSYNC")))
        save->vsync = my_getnbr(line);
    if (!my_strncmp("LANGUAGE", line, my_strlen("LANGUAGE")))
        save->language = my_getnbr(line);
    if (!my_strncmp("MUSIC_VOLUME", line, my_strlen("MUSIC_VOLUME")))
        save->music_volume = my_getnbr(line);
    if (!my_strncmp("EFFECTS_VOLUME", line, my_strlen("EFFECTS_VOLUME")))
        save->effects_volume = my_getnbr(line);
    load_game_data_in_save_keys(line, save);
}

void check_game_save_values(save_game_t *save)
{
    if (save->fps != 30 && save->fps != 60 && save->fps != 144 &&
        save->fps != 240 && save->fps != 0)
        save->fps = 60;
    if (save->res != 480 && save->res != 720 && save->res != 1080 &&
        save->res != 1440 && save->res != 2160)
        save->res = 1080;
    if (save->vsync != 0 && save->vsync != 1)
        save->vsync = 0;
    if (save->language < 0 || save->language > 4)
        save->language = ENGLISH;
    if (save->music_volume < 0 || save->music_volume > 100)
        save->music_volume = 100;
    if (save->effects_volume < 0 || save->effects_volume > 100)
        save->effects_volume = 100;
    for (int idx = 0; save->keys[idx] != -1; idx += 1)
        if (save->keys[idx] < 0 && save->keys[idx] > 100)
            save->keys[idx] = -1;
}

save_game_t *load_game_save(const char *filename)
{
    save_game_t *save = init_empty_game_save();
    char **arr = my_load_file_in_arr(filename);

    if (!arr)
        return save;
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        load_game_data_in_save(arr[idx], save);
    for (int idx = 0; arr[idx] != NULL; idx += 1)
        free(arr[idx]);
    free(arr);
    check_game_save_values(save);
    return save;
}
