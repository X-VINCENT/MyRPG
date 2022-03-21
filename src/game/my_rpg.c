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

    if (!(game = init_game()))
        return ERROR;
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        event(game);
        select_game_stage(game);
        display_cursor(game);
        sfRenderWindow_display(game->window);
    }
    destroy_all(game);
    return SUCCESS;
}

void select_game_stage(game_t *game)
{
    if (!game)
        return;
    switch (game->stage) {
        default:
            break;
    }
    select_game_stage_2(game);
}

void select_game_stage_2(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
    select_game_stage_3(game);
}

void select_game_stage_3(game_t *game)
{
    switch (game->stage) {
        default:
            break;
    }
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
