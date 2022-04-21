/*
** EPITECH PROJECT, 2022
** Move Abilities Tree for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void move_ability(ability_t *ability, int offset)
{
    sfSprite_move(ability->rect[LOCKED], (sfVector2f){0, offset});
    sfSprite_move(ability->rect[UNLOCKED], (sfVector2f){0, offset});
    sfText_move(ability->text, (sfVector2f){0, offset});
    sfText_move(ability->text_price, (sfVector2f){0, offset});
}

void move_abilities(abilities_t *abilities, int offset)
{
    sfSprite_move(abilities->menu->tree, (sfVector2f){0, offset});
    for (int idx = 0; abilities->ability[idx] != NULL; idx += 1)
        move_ability(abilities->ability[idx], offset);
}

void move_abilities_up(game_t *game)
{
    abilities_t *abilities = game->abilities;

    if (sfSprite_getPosition(abilities->menu->scrolling_bar_inside).y > 329) {
        sfSprite_move(abilities->menu->scrolling_bar_inside,
            (sfVector2f){0, -10});
        move_abilities(abilities, 43);
    }
}

void move_abilities_down(game_t *game)
{
    abilities_t *abilities = game->abilities;

    if (sfSprite_getPosition(abilities->menu->scrolling_bar_inside).y < 629) {
        sfSprite_move(abilities->menu->scrolling_bar_inside,
            (sfVector2f){0, 10});
        move_abilities(abilities, -43);
    }
}

void abilities_scrolling_bar_event(game_t *game)
{
    abilities_t *abilities = game->abilities;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);

    if (time_elapsed(abilities->menu->scrolling_clock) > 0.01) {
        if (game->event->event->mouseWheel.delta > 0 &&
            game->event->event->mouseWheel.type == sfEvtMouseWheelMoved) {
            move_abilities_up(game);
            game->event->event->mouseWheel.delta = 0;
        } else if (game->event->event->mouseWheel.delta < 0 &&
            game->event->event->mouseWheel.type == sfEvtMouseWheelMoved) {
            move_abilities_down(game);
            game->event->event->mouseWheel.delta = 0;
        }
        sfClock_restart(abilities->menu->scrolling_clock);
    }
}
