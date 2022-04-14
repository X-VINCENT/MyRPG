/*
** EPITECH PROJECT, 2022
** display_pnj
** File description:
** display
*/

#include "rpg.h"

void change_direction(game_t *game, int i, sfVector2f position)
{
    pnj_t *pnj = game->assets->pnj[i];

    if (position.x >= 2584) {
        pnj->move_left_or_right = 0;
        sfClock_restart(pnj->walk);
    }
    if (position.x <= 500) {
        pnj->move_left_or_right = 1;
        sfClock_restart(pnj->walk);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(pnj->walk)) > pnj->change_t) {
        pnj->move_left_or_right = (pnj->move_left_or_right == 0) ? 1 : 0;
        sfClock_restart(pnj->walk);
    }
}

void check_second_move_pnj(game_t *game, int i)
{
    pnj_t *pnj = game->assets->pnj[i];
    sfVector2f position = sfSprite_getPosition(pnj->sprite);
    sfIntRect rect = sfSprite_getTextureRect(pnj->sprite);

    if (sfTime_asSeconds(sfClock_getElapsedTime(pnj->timer_move))
        > (float)pnj->speed / 100) {
        if (pnj->move_left_or_right == 0) {
            position.x -= 0.5;
            rect.left = 96;
        } else {
            position.x += 0.5;
            rect.left = 0;
        }
        sfClock_restart(pnj->timer_move);
    }
    change_direction(game, i, position);
    sfSprite_setTextureRect(pnj->sprite, rect);
    sfSprite_setPosition(pnj->sprite, position);
}

void move_pnj(game_t *game, int nbr_animated_pnj)
{
    for (int i = PNJ_BLACK_THREE + 1; i < nbr_animated_pnj; i++) {
        check_second_move_pnj(game, i);
    }
}

void display_pnj(game_t *game, pnj_t *pnj)
{
    if (!pnj || !game || !pnj->sprite || !game->window)
        return;
    check_pnj_intersects(pnj, game);
    sfRenderWindow_drawSprite(game->window, pnj->sprite, NULL);
    if (pnj->text == false)
        return;
    if (pnj->display_the_text == true
        && pnj->text_to_display[pnj->text_index_display]) {
        sfRenderWindow_drawText(game->window,
            pnj->text_to_display[pnj->text_index_display], NULL);
    }
    return;
}
