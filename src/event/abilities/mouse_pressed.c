/*
** EPITECH PROJECT, 2022
** Abilities Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int is_ability_unlockable_2(game_t *game, int idx)
{
    abilities_t *abilities = game->abilities;

    if ((idx == UTILITY_SELL_10) || (idx == STEALTH_RANGE_10) ||
        (idx == FIGHT_BITE) && (abilities->ability[KICK]->status == UNLOCKED))
        return 1;
    if ((idx == UTILITY_CAN_BUY) &&
        (abilities->ability[UTILITY_SELL_10]->status == UNLOCKED))
        return 1;
    if ((idx == STEALTH_RANGE_20) &&
        (abilities->ability[STEALTH_RANGE_10]->status == UNLOCKED))
        return 1;
    if ((idx == FIGHT_ATTACK_5) &&
        (abilities->ability[FIGHT_BITE]->status == UNLOCKED))
        return 1;
    return 0;
}

int is_ability_crossing_unlockable(game_t *game, int idx)
{
    abilities_t *abilities = game->abilities;

    if ((idx == UTILITY_SELL_30) &&
        (abilities->ability[UTILITY_SPEED_30]->status == UNLOCKED) ||
        (idx == UTILITY_SPEED_30) &&
        (abilities->ability[UTILITY_SELL_30]->status == UNLOCKED))
        return 1;
    if ((idx == STEALTH_ESCAPE_20) &&
        (abilities->ability[STEALTH_DODGE]->status == UNLOCKED) ||
        (idx == STEALTH_DODGE) &&
        (abilities->ability[STEALTH_ESCAPE_20]->status == UNLOCKED))
        return 1;
    if ((idx == FIGHT_HP_30) &&
        (abilities->ability[FIGHT_WEAPON]->status == UNLOCKED) ||
        (idx == FIGHT_WEAPON) &&
        (abilities->ability[FIGHT_HP_30]->status == UNLOCKED))
        return 1;
    return 0;
}

int is_ability_unlockable_top(game_t *game, int idx)
{
    abilities_t *abilities = game->abilities;

    if ((idx == UTILITY_SELL_100_SPEED_100) &&
        (abilities->ability[UTILITY_SELL_50]->status == UNLOCKED))
        return 1;
    if ((idx == STEALTH_CARDBOARD) &&
        (abilities->ability[STEALTH_ESCAPE_60]->status == UNLOCKED))
        return 1;
    if ((idx == FIGHT_ATTACK_30) &&
        (abilities->ability[FIGHT_HP_40]->status == UNLOCKED))
        return 1;
    return 0;
}

int is_ability_unlockable(game_t *game, int idx)
{
    abilities_t *abilities = game->abilities;

    if (is_ability_unlockable_2(game, idx))
        return 1;
    if (is_ability_crossing_unlockable(game, idx))
        return 1;
    if (is_ability_unlockable_top(game, idx))
        return 1;
    if ((idx == KICK) || (abilities->ability[idx - 1]->status == UNLOCKED))
        return 1;
    return 0;
}

void abilities_mouse_pressed(game_t *game)
{
    abilities_t *abilities = game->abilities;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_ability;

    for (int idx = 0; abilities->ability[idx] != NULL; idx += 1) {
        r_ability = sfSprite_getGlobalBounds(
            abilities->ability[idx]->rect[LOCKED]);
        if (sfFloatRect_contains(&r_ability, coords.x, coords.y) &&
            game->data->current->nb_abilities >=
            abilities->ability[idx]->price &&
            is_ability_unlockable(game, idx)) {
            game->data->current->nb_abilities -=
            abilities->ability[idx]->price;
            abilities->ability[idx]->status = UNLOCKED;
        }
    }
    top_bar_mouse_pressed(game);
}
