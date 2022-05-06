/*
** EPITECH PROJECT, 2022
** display_pnj
** File description:
** display
*/

#include "rpg.h"

void change_direction(game_t *game, pnj_t *pnj,
                        sfVector2f position, sfIntRect rect)
{
    if (position.x >= 2584) {
        pnj->move_left_or_right = 0;
        sfClock_restart(pnj->walk);
    }
    if (position.x <= 500) {
        pnj->move_left_or_right = 1;
        sfClock_restart(pnj->walk);
    }
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(pnj->walk)) > pnj->change_t) {
        pnj->move_left_or_right = (pnj->move_left_or_right == 0) ? 1 : 0;
        sfClock_restart(pnj->walk);
    }
    sfSprite_setTextureRect(pnj->sprite, rect);
    sfSprite_setPosition(pnj->sprite, position);
}

void check_second_move_pnj(game_t *game, pnj_t *pnj)
{
    sfVector2f position = sfSprite_getPosition(pnj->sprite);
    sfIntRect rect = sfSprite_getTextureRect(pnj->sprite);
    sfFloatRect circle = sfCircleShape_getGlobalBounds(pnj->circle_citizens);
    sfFloatRect rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    if (sfTime_asSeconds(sfClock_getElapsedTime(pnj->timer_move)) >
        (float)pnj->speed / 100
        && sfFloatRect_intersects(&circle, &rat, NULL) == sfFalse) {
        if (pnj->move_left_or_right == 0) {
            position.x -= 0.5;
            rect.left = 96;
        } else {
            position.x += 0.5;
            rect.left = 0;
        }
        sfClock_restart(pnj->timer_move);
    }
    change_direction(game, pnj, position, rect);
}

void move_pnj(game_t *game, int nbr_animated_pnj)
{
    for (int i = LAST_PNJ + 1; i < nbr_animated_pnj; i++) {
        check_second_move_pnj(game, game->assets->pnj[i]);
    }
    if (time_elapsed(game->assets->pnj[PNJ_BLACK_THREE]->animation) > 0.25
        && game->assets->pnj[PNJ_BLACK_THREE]->displaying_text == 0
        && game->assets->pnj[PNJ_GIRL_TWO]->displaying_text == 0) {
        animate_sprite(game->assets->pnj[PNJ_BLACK_THREE]->sprite,
            32, 384 - 32, 0);
        animate_sprite(game->assets->pnj[PNJ_GIRL_TWO]->sprite,
            32, 384 - 32, 0);
        sfClock_restart(game->assets->pnj[PNJ_BLACK_THREE]->animation);
    }
}

void change_text_and_box_message_pos(game_t *game, pnj_t *pnj)
{
    sfVector2f view = sfView_getCenter(game->view);
    sfVector2f size = sfView_getSize(game->view);
    sfVector2f message_box_pos = {view.x - size.x / 2
        + sfSprite_getGlobalBounds(pnj->message_box).width / 2 + 16,
        view.y - size.y / 2 +
        sfSprite_getGlobalBounds(pnj->message_box).height / 2 + 9};
    sfVector2f message_pos = {view.x - size.x / 2 + 30,
        view.y - size.y / 2 + 28};

    sfText_setPosition(
        pnj->text_to_display[pnj->text_index_display], message_pos);
    sfSprite_setPosition(pnj->message_box, message_box_pos);
}

void display_pnj(game_t *game, pnj_t *pnj, int idx)
{
    if (!pnj || !game || !pnj->sprite || !game->window ||
        !game->assets->rat->idle_front)
        return;
    sfRenderWindow_drawSprite(game->window, pnj->sprite, NULL);
    move_circle(game, pnj);
    check_intersect_circle(game, pnj, idx);
    if (check_pnj_intersects(pnj, game) == 1
        && pnj->text == true
        && pnj->display_the_text == true
        && pnj->text_to_display[pnj->text_index_display]
        && pnj->displaying_text == 1) {
        change_text_and_box_message_pos(game, pnj);
        sfRenderWindow_drawSprite(game->window, pnj->message_box, NULL);
        sfRenderWindow_drawText(game->window,
            pnj->text_to_display[pnj->text_index_display], NULL);
    }
    return;
}
