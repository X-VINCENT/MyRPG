/*
** EPITECH PROJECT, 2022
** Museum Key Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void check_lasers(game_t *game)
{
    sfFloatRect r_lasers = {2496, 1696, 73, 45};
    sfVector2f pos = sfSprite_getPosition(game->assets->rat->idle_front);

    if (game->inventory->items[game->inventory->selected]->name == KEY &&
        sfFloatRect_contains(&r_lasers, pos.x, pos.y)) {
            game->assets->museum->are_lasers_unlocked = 1;
            game->inventory->items[game->inventory->selected]->name = EMPTY;
        }
}

void museum_key_pressed(game_t *game)
{
    if (sfKeyboard_isKeyPressed(game->keys[INTERACT]))
        check_lasers(game);
    inventory_key_pressed(game);
}
