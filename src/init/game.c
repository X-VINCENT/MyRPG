/*
** EPITECH PROJECT, 2022
** Init Game for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_game_variables(game_t *game)
{
    game->stage = START_STAGE;
    game->last_stage = START_STAGE;
    game->next_stage = START_STAGE;
    game->fps = DEFAULT_FPS;
    game->res = DEFAULT_WINDOW_RESOLUTION;
    game->vsync = 0;
    game->view = create_view(VIEW_DEFAULT_SIZE, 0);
    game->language = ENGLISH;
    game->music_volume = 100;
    game->effects_volume = 100;
    game->time_playing_clock = sfClock_create();
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
    init_fights(game);
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
