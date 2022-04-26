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
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(pnj->walk)) > pnj->change_t) {
        pnj->move_left_or_right = (pnj->move_left_or_right == 0) ? 1 : 0;
        sfClock_restart(pnj->walk);
    }
}

void check_second_move_pnj(game_t *game, int i)
{
    pnj_t *pnj = game->assets->pnj[i];
    sfVector2f position = sfSprite_getPosition(pnj->sprite);
    sfIntRect rect = sfSprite_getTextureRect(pnj->sprite);

    if (sfTime_asSeconds(sfClock_getElapsedTime(pnj->timer_move)) >
        (float)pnj->speed / 100) {
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
    for (int i = LAST_PNJ + 1; i < nbr_animated_pnj; i++)
        check_second_move_pnj(game, i);
}

void change_text_and_box_message_pos(game_t *game, pnj_t *pnj)
{
    int enter_touched = 0;

    sfVector2f position = sfSprite_getPosition(game->assets->rat->idle_front);
    sfVector2f position_box = sfSprite_getPosition(pnj->message_box);
    sfVector2f position_text =
        sfText_getPosition(pnj->text_to_display[pnj->text_index_display]);

    position_box.x = position.x - 200;
    position_box.y = position.y - 200;
    position_text.x = position.x - 380;
    position_text.y = position.y - 225;
    sfText_setPosition(
        pnj->text_to_display[pnj->text_index_display], position_text);
    sfSprite_setPosition(pnj->message_box, position_box);
}

void display_pnj(game_t *game, pnj_t *pnj)
{
    int stop = 0;

    if (!pnj || !game || !pnj->sprite || !game->window ||
        !game->assets->rat->idle_front)
        return;
    sfRenderWindow_drawSprite(game->window, pnj->sprite, NULL);
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
    check_intersect_circle(game, pnj);
    return;
}
