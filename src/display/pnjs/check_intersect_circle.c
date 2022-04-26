/*
** EPITECH PROJECT, 2022
** check_intersect_circle
** File description:
** check_intersect_circle
*/

#include "rpg.h"

void check_intersect_circle(game_t *game, pnj_t *pnj)
{
    sfFloatRect pnj_rect = sfSprite_getGlobalBounds(pnj->sprite);
    sfFloatRect rat =
        sfCircleShape_getGlobalBounds(game->assets->rat->circle);
    char *string = my_strcat("[", get_key_name(game->keys[INTERACT]));

    string = my_strcat(string, "]");
    if (sfFloatRect_intersects(&pnj_rect, &rat, NULL) == sfTrue) {
        sfText_setString(pnj->touch_talk, string);
        sfRenderWindow_drawText(game->window, pnj->touch_talk, NULL);
    }
    free(string);
}
