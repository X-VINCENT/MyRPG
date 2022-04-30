/*
** EPITECH PROJECT, 2022
** Destroy Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_enemy(enemy_t *enemy)
{
    if (enemy->sprite)
        sfSprite_destroy(enemy->sprite);
    free(enemy);
}

void detroy_attack(attack_t *attack)
{
    if (!attack)
        return;
    destroy_sprite(attack->bg);
    destroy_sprite(attack->filter);
    destroy_sprite(attack->sprite);
    destroy_text(attack->name);
    sfClock_destroy(attack->anim_clock);
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
    destroy_enemy(fights->enemy);
    detroy_attack(fights->attack_1);
    detroy_attack(fights->attack_2);
    detroy_attack(fights->attack_3);
    sfClock_destroy(fights->button_clock);
    free(fights);
}
