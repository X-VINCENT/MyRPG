/*
** EPITECH PROJECT, 2022
** Display Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void display_attack(sfRenderWindow *window, attack_t *attack)
{
    if (!attack)
        return;
    if (time_elapsed(attack->anim_clock) > attack->anim_time) {
        animate_sprite(attack->sprite, attack->shift,
            attack->max_value, attack->offset_from_left);
        sfClock_restart(attack->anim_clock);
    }
    sfRenderWindow_drawSprite(window, attack->bg, NULL);
    if (attack->is_hover == 0) {
        sfRenderWindow_drawSprite(window, attack->sprite, NULL);
    } else {
        sfRenderWindow_drawText(window, attack->name, NULL);
        sfRenderWindow_drawText(window, attack->damage_text, NULL);
    }
    if (attack->is_unlocked == 1)
        sfRenderWindow_drawSprite(window, attack->filter, NULL);
}

void display_fights(game_t *game)
{
    fights_t *fights = game->fights;

    sfRenderWindow_drawSprite(game->window, fights->bg, NULL);
    sfRenderWindow_drawSprite(game->window, fights->fight_button, NULL);
    sfRenderWindow_drawSprite(game->window, fights->run_button, NULL);
    if (fights->fight_status == 1) {
        display_attack(game->window, fights->attack_1);
        display_attack(game->window, fights->attack_2);
        display_attack(game->window, fights->attack_3);
    }
}
