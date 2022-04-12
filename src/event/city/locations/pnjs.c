/*
** EPITECH PROJECT, 2022
** pnjs_event
** File description:
** pnjs
*/

#include "rpg.h"

void change_bool_pnj_text(pnj_t *pnj)
{
    if (sfTime_asSeconds(
        sfClock_getElapsedTime(pnj->timer_display_text))
        > pnj->time_between_text) {
        pnj->text_index_display += 1;
        sfClock_restart(pnj->timer_display_text);
    }
    if (!pnj->text_to_display[
        pnj->text_index_display])
        pnj->text_index_display = 0;
}

bool check_pnj_intersects(game_t *game)
{
    sfFloatRect pnj;
    sfFloatRect rat = sfSprite_getGlobalBounds(game->assets->rat->idle_front);

    for (int i = 0; game->assets->pnj[i] != NULL; i++) {
        change_bool_pnj_text(game->assets->pnj[i]);
        pnj = sfSprite_getGlobalBounds(game->assets->pnj[i]->sprite);
        if (sfFloatRect_intersects(&pnj, &rat, NULL) == sfTrue) {
            game->assets->pnj[i]->display_the_text = true;
            return true;
        } else {
            game->assets->pnj[i]->display_the_text = false;
            sfClock_restart(game->assets->pnj[i]->timer_display_text);
            game->assets->pnj[i]->text_index_display = 0;
            return false;
        }
    }
    return false;
}
