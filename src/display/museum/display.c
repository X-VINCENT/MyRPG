/*
** EPITECH PROJECT, 2022
** Display Museum for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_view_museum(game_t *game)
{
    sfVector2f center;
    sfVector2f rat_pos = sfSprite_getPosition(game->assets->rat->idle_front);
    sfFloatRect r_museum = {0, 0, 512, 683};
    sfFloatRect r_museum1 = {421, 1091, 545, 673};
    sfFloatRect r_museum2 = {2552, 417, 448, 619};
    sfFloatRect r_museum3 = {2017, 1383, 639, 544};
    sfFloatRect r_museum4 = {0, 2127, 512, 299};

    if (sfFloatRect_contains(&r_museum, rat_pos.x, rat_pos.y))
        center = VIEW_MUSEUM_POS;
    if (sfFloatRect_contains(&r_museum1, rat_pos.x, rat_pos.y))
        center = VIEW_MUSEUM_POS_1;
    if (sfFloatRect_contains(&r_museum2, rat_pos.x, rat_pos.y))
        center = VIEW_MUSEUM_POS_2;
    if (sfFloatRect_contains(&r_museum3, rat_pos.x, rat_pos.y))
        center = VIEW_MUSEUM_POS_3;
    if (sfFloatRect_contains(&r_museum4, rat_pos.x, rat_pos.y))
        center = VIEW_MUSEUM_POS_4;
    sfView_setCenter(game->view, center);
    sfView_setSize(game->view, VIEW_MUSEUM_SIZE);
}

void display_museum(game_t *game)
{
    museum_t *museum = game->assets->museum;

    set_view_museum(game);
    sfRenderWindow_drawSprite(game->window, museum->bg, NULL);
    if (museum->are_lasers_unlocked == 0)
        sfRenderWindow_drawSprite(game->window, museum->lasers, NULL);
}
