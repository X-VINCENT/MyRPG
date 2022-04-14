/*
** EPITECH PROJECT, 2022
** pnjs_event
** File description:
** pnjs
*/

#include "rpg.h"

void change_bool_pnj_text(pnj_t *pnj)
{
    if (time_elapsed(pnj->timer_display_text) > pnj->time_between_text) {
        pnj->text_index_display += 1;
        sfClock_restart(pnj->timer_display_text);
    }
    if (!pnj->text_to_display[
        pnj->text_index_display])
        pnj->text_index_display = 0;
}

void skip_text(pnj_t *pnj)
{
    pnj->text_index_display += 1;
    sfClock_restart(pnj->timer_display_text);
    if (!pnj->text_to_display[
        pnj->text_index_display])
        pnj->text_index_display = 0;
}

void check_skip_text_touch(game_t *game, pnj_t *pnj)
{
    int stop = 0;

    if (game->event->event->key.code == sfKeyReturn && stop == 0) {
        game->event->event->key.code = -1;
        skip_text(pnj);
        stop = 1;
    }
}

void check_pnj_intersects(pnj_t *pnj, game_t *game)
{
    sfFloatRect pnj_rect;
    sfFloatRect rat;

    if (!pnj || !game || !pnj->sprite || !game->assets->rat->idle_front)
        return;
    rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);
    change_bool_pnj_text(pnj);
    pnj_rect = sfSprite_getGlobalBounds(pnj->sprite);
    if (sfFloatRect_intersects(&pnj_rect, &rat, NULL) == sfTrue) {
        pnj->display_the_text = true;
        check_skip_text_touch(game, pnj);
    } else {
        pnj->display_the_text = false;
        sfClock_restart(pnj->timer_display_text);
        pnj->text_index_display = 0;
    }
}
