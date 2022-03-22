/*
** EPITECH PROJECT, 2022
** Init Game Structure for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

game_t *init_game(void)
{
    game_t *game = NULL;

    if (!(game = malloc(sizeof(game_t))))
        return NULL;
    game->stage = START_STAGE;
    game->last_stage = START_STAGE;
    game->fps = 60;
    game->res = 1080;
    init_window(game);
    init_view(game);
    init_event(game);
    init_assets(game);
    return game;
}

void init_window(game_t *game)
{
    game->window = create_window("My Defender",
        game->res * 16 / 9, game->res);
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    set_icon_window(game->window, "assets/pictures/icons/window_icon.png");
    sfRenderWindow_setKeyRepeatEnabled(game->window, sfFalse);
}

void init_event(game_t *game)
{
    event_t *event = NULL;

    if (!game)
        return;
    game->event = malloc(sizeof(event_t));
    game->event->event = malloc(sizeof(sfEvent));
}

void init_view(game_t *game)
{
    sfVector2f size = {game->res * 16 / 9, game->res};
    sfVector2f pos = init_pos(0, 0);

    game->view = create_view(size, pos);
}
