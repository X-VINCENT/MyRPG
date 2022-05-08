/*
** EPITECH PROJECT, 2022
** Init Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_game_variables(game_t *game)
{
    game->stage = INTRO_STAGE;
    game->last_stage = START_STAGE;
    game->next_stage = START_STAGE;
    game->fps = game->data->game->fps;
    game->res = game->data->game->res;
    game->vsync = game->data->game->vsync;
    game->view = create_view(VIEW_DEFAULT_SIZE, 0);
    game->language = game->data->game->language;
    game->music_volume = game->data->game->music_volume;
    game->effects_volume = game->data->game->effects_volume;
    game->time_playing_clock = sfClock_create();
    game->reset_object_clock = sfClock_create();
    game->costs_clock = sfClock_create();
}

void set_game_data(game_t *game)
{
    set_language_texts(game);
    set_music_volume(game);
    set_effects_volume(game);
}

game_t *init_game(void)
{
    game_t *game = NULL;

    if (!(game = malloc(sizeof(game_t))))
        return NULL;
    init_data(game);
    init_game_variables(game);
    init_textures(game);
    init_window(game);
    init_event(game);
    init_keys(game);
    init_assets(game);
    init_audio(game);
    init_abilities(game);
    init_inventory(game);
    init_rain(game);
    init_wind(game);
    init_fire_trashcan(game);
    init_fights(game);
    set_game_data(game);
    return game;
}

void init_window(game_t *game)
{
    game->window = create_window("My RPG", game->res * 16 / 9, game->res);
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    set_icon_window(game->window, WINDOW_ICON);
}

void init_event(game_t *game)
{
    if (!game)
        return;
    game->event = malloc(sizeof(event_t));
    game->event->event = malloc(sizeof(sfEvent));
}
