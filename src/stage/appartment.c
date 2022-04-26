/*
** EPITECH PROJECT, 2022
** Appartment Stage for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_appartment_sign_text_2(game_t *game)
{
    char *text = NULL;
    const char *key_name = get_key_name(game->keys[INTERACT]);

    if (game->language == GERMAN) {
        text = my_strcat(GERMAN_PRESS, (char *) key_name);
        text = my_strcat(text, GERMAN_TO_SAVE);
        sfText_setString(game->assets->appartment->press_interact, text);
        set_text_origin(game->assets->appartment->press_interact);
        free(text);
        return;
    }
    if (game->language == SPANISH) {
        text = my_strcat(SPANISH_PRESS, (char *) key_name);
        text = my_strcat(text, SPANISH_TO_SAVE);
        sfText_setString(game->assets->appartment->press_interact, text);
        set_text_origin(game->assets->appartment->press_interact);
        free(text);
        return;
    }
}

void set_appartment_sign_text(game_t *game)
{
    char *text = NULL;
    const char *key_name = get_key_name(game->keys[INTERACT]);

    if (game->language == ENGLISH) {
        text = my_strcat(ENGLISH_PRESS, (char *) key_name);
        text = my_strcat(text, ENGLISH_TO_SAVE);
        sfText_setString(game->assets->appartment->press_interact, text);
        set_text_origin(game->assets->appartment->press_interact);
        free(text);
        return;
    }
    if (game->language == FRENCH) {
        text = my_strcat(FRENCH_PRESS, (char *) key_name);
        text = my_strcat(text, FRENCH_TO_SAVE);
        sfText_setString(game->assets->appartment->press_interact, text);
        set_text_origin(game->assets->appartment->press_interact);
        free(text);
        return;
    }
    return set_appartment_sign_text_2(game);
}

void appartment_stage(game_t *game)
{
    appartment_t *apart = game->assets->appartment;

    sfMusic_stop(game->audio->musics->music_city);
    sfMusic_stop(game->audio->musics->music_menu);
    sfMusic_stop(game->audio->musics->music_bar);
    sfMusic_stop(game->audio->musics->music_ice_cream);
    sfRenderWindow_drawSprite(game->window, apart->bg, NULL);
    display_appartment(game);
    display_rat(game);
    sfRenderWindow_drawSprite(game->window, apart->bg_top, NULL);
    set_appartment_sign_text(game);
    if (apart->is_saving == 1) {
        sfRenderWindow_drawSprite(game->window, apart->sign, NULL);
        sfRenderWindow_drawText(game->window, apart->press_interact, NULL);
    }
    check_rat_key_pressed(game);
}
