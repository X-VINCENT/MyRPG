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
        pnj->text_index_display]) {
        pnj->text_index_display = 0;
        pnj->displaying_text = 0;
        pnj->display_the_text = false;
    }
}

void skip_text(pnj_t *pnj)
{
    pnj->text_index_display += 1;
    sfClock_restart(pnj->timer_display_text);
    if (!pnj->text_to_display[
        pnj->text_index_display]) {
        pnj->text_index_display = 0;
        pnj->displaying_text = 0;
        pnj->display_the_text = false;
    }
}

void check_skip_text_touch(game_t *game, pnj_t *pnj)
{
    int stop = 0;

    if (game->event->event->key.code == sfKeyReturn && stop == 0) {
        game->event->event->key.code = sfKeyUnknown;
        skip_text(pnj);
        stop = 1;
    }
}

void check_interact(game_t *game, pnj_t *pnj)
{
    if (game->event->event->key.code == game->keys[INTERACT]
        && pnj->displaying_text == 0) {
        game->event->event->key.code = sfKeyUnknown;
        pnj->displaying_text = 1;
        return;
    }
    if (game->event->event->key.code == game->keys[INTERACT]
        && pnj->displaying_text == 1) {
        game->event->event->key.code = sfKeyUnknown;
        pnj->displaying_text = 0;
        pnj->text_index_display = 0;
        pnj->display_the_text = false;
        return;
    }
    return;
}

int check_pnj_intersects(pnj_t *pnj, game_t *game)
{
    sfFloatRect circle = sfCircleShape_getGlobalBounds(pnj->circle);
    sfFloatRect rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    change_bool_pnj_text(pnj);
    if (sfFloatRect_intersects(&circle, &rat, NULL) == sfTrue) {
        check_interact(game, pnj);
        if (pnj->displaying_text == 1) {
            pnj->display_the_text = true;
            check_skip_text_touch(game, pnj);
        } else
            sfClock_restart(pnj->timer_display_text);
        return 1;
    } else {
        pnj->displaying_text = 0;
        pnj->display_the_text = false;
        sfClock_restart(pnj->timer_display_text);
        pnj->text_index_display = 0;
        return 1;
    }
    return 0;
}
