/*
** EPITECH PROJECT, 2022
** check_intersect_circle
** File description:
** check_intersect_circle
*/

#include "rpg.h"

void check_intersect_circle(game_t *game, pnj_t *pnj)
{
    sfFloatRect pnj_rect_circle = sfCircleShape_getGlobalBounds(pnj->circle);
    sfFloatRect rat_rect =
        sfSprite_getGlobalBounds(game->assets->rat->idle_front);
    char *string = my_strcat("[",
        (char *) get_key_name(game->keys[INTERACT]));

    string = my_strcat(string, "]");
    if (sfFloatRect_intersects(&rat_rect,
        &pnj_rect_circle, NULL) == sfTrue) {
        sfText_setString(pnj->touch_talk, string);
        set_text_origin(pnj->touch_talk);
        sfRenderWindow_drawText(game->window, pnj->touch_talk, NULL);
    }
    free(string);
}
