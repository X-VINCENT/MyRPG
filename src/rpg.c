/*
** EPITECH PROJECT, 2021
** RPG File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int my_rpg(void)
{
    game_t *game = NULL;

    if (!(game = init_game()))
        return ERROR;
    while (sfRenderWindow_isOpen(game->window)) {
        if (sfRenderWindow_hasFocus(game->window)) {
            event(game);
            engine(game);
        }
    }
    save_all_data(game);
    destroy_all(game);
    return SUCCESS;
}

int engine(game_t *game)
{
    sfRenderWindow_clear(game->window, sfBlack);
    select_game_stage(game);
    sfRenderWindow_setView(game->window, game->view);
    sfRenderWindow_display(game->window);
    return SUCCESS;
}

void display_cursor(game_t *game)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse_pos, NULL);
    sfVector2f scale = {sfView_getSize(game->view).y / 4000,
        sfView_getSize(game->view).y / 4000};

    if (!game)
        return;
    sfSprite_setScale(game->assets->cursor, scale);
    sfSprite_setPosition(game->assets->cursor, coords);
    sfRenderWindow_drawSprite(game->window, game->assets->cursor, NULL);
}
