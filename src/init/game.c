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
}

game_t *init_game(void)
{
    game_t *game = NULL;

    if (!(game = malloc(sizeof(game_t))))
        return NULL;
    init_file_rat_position(game);
    init_game_variables(game);
    init_textures(game);
    init_window(game);
    init_event(game);
    init_keys(game);
    init_assets(game);
    init_audio(game);
    init_inventory(game);
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

void init_keys(game_t *game)
{
    game->keys = malloc(sizeof(int) * NB_KEYS + 1);
    game->default_keys = malloc(sizeof(int) * NB_KEYS + 1);

    game->keys[UP] = sfKeyZ;
    game->keys[DOWN] = sfKeyS;
    game->keys[LEFT] = sfKeyQ;
    game->keys[RIGHT] = sfKeyD;
    game->keys[JUMP] = sfKeyLShift;
    game->keys[DODGE] = sfKeySpace;
    game->keys[ATTACK] = sfKeyA;
    game->keys[INTERACT] = sfKeyE;
    game->keys[ROTATE_LEFT] = sfKeyLeft;
    game->keys[ROTATE_RIGHT] = sfKeyRight;
    game->keys[ZOOM_IN] = sfKeyUp;
    game->keys[ZOOM_OUT] = sfKeyDown;
    game->keys[RESET_VIEW] = sfKeyRControl;
    game->keys[ESCAPE] = sfKeyEscape;
    game->keys[HITBOX] = sfKeyH;
    game->keys[NB_KEYS] = -1;
    for (int idx = 0; idx <= NB_KEYS; idx += 1)
        game->default_keys[idx] = game->keys[idx];
}
