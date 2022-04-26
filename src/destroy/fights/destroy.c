/*
** EPITECH PROJECT, 2022
** Destroy Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void detroy_attack(attack_t *attack)
{
    if (!attack)
        return;
    destroy_sprite(attack->bg);
    destroy_sprite(attack->sprite);
    destroy_text(attack->name);
    sfClock_destroy(attack->clock);
    free(attack);
}

void destroy_fights(fights_t *fights)
{
    if (!fights)
        return;
    destroy_sprite(fights->bg);
    destroy_sprite(fights->fight_button);
    destroy_sprite(fights->run_button);
    detroy_attack(fights->attack_1);
    detroy_attack(fights->attack_2);
    detroy_attack(fights->attack_3);
    sfClock_destroy(fights->button_clock);
    free(fights);
}
