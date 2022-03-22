/*
** EPITECH PROJECT, 2021
** My Defender File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int my_rpg(void)
{
    game_t *game = NULL;
    sfClock *clock = sfClock_create();

    if (!(game = init_game()))
        return ERROR;
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_setView(game->window, game->view);
        event(game);
        display_all(game, clock);
    }
    sfClock_destroy(clock);
    destroy_all(game);
    return SUCCESS;
}

int display_all(game_t *game, sfClock *clock)
{
    if (time_elapsed(clock) > 1 / game->fps) {
        sfRenderWindow_clear(game->window, sfBlack);
        select_game_stage(game);
        display_cursor(game);
        sfRenderWindow_display(game->window);
        sfClock_restart(clock);
    }
    return 0;
}

void display_cursor(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);

    if (!game)
        return;
    sfSprite_setPosition(game->assets->cursor, coords);
    sfRenderWindow_drawSprite(game->window, game->assets->cursor, NULL);
}
