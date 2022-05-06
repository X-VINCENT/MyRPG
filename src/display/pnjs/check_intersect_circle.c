/*
** EPITECH PROJECT, 2022
** check_intersect_circle
** File description:
** check_intersect_circle
*/

#include "rpg.h"

void check_intersect_circle_key(game_t *game, pnj_t *pnj)
{
    sfFloatRect r_pnj_circle = sfCircleShape_getGlobalBounds(pnj->circle);
    sfFloatRect r_rat = sfSprite_getGlobalBounds(
        game->assets->rat->idle_front);
    char *string = my_strcat(
        "[", (char *) get_key_name(game->keys[INTERACT]));

    string = my_strcat(string, "]");
    if (sfFloatRect_intersects(&r_rat, &r_pnj_circle, NULL)) {
        sfText_setString(pnj->touch_talk, string);
        set_text_origin(pnj->touch_talk);
        sfRenderWindow_drawText(game->window, pnj->touch_talk, NULL);
    }
    free(string);
}

int check_inventory_illegal(game_t *game)
{
    inventory_t *inventory = game->inventory;

    for (int idx = 0; inventory->items[idx] != NULL; idx += 1)
        if (inventory->items[idx]->legality[inventory->items[idx]->name] > 0)
            return 1;
    return 0;
}

void check_intersect_circle(game_t *game, pnj_t *pnj, int idx)
{
    sfFloatRect r_pnj = sfSprite_getGlobalBounds(pnj->sprite);
    sfFloatRect r_rat_circle =
        sfCircleShape_getGlobalBounds(game->assets->rat->circle);

    if (sfFloatRect_intersects(&r_rat_circle, &r_pnj, NULL) &&
        pnj->is_guard && check_inventory_illegal(game))
        return create_fight(game, pnj, idx);
    check_intersect_circle_key(game, pnj);
}
