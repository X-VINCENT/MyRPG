/*
** EPITECH PROJECT, 2022
** Destroy Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_lifebar(lifebar_t *lifebar)
{
    destroy_sprite(lifebar->empty_bar);
    for (int idx = 0; lifebar->ticks[idx] != NULL; idx += 1) {
        sfSprite_destroy(lifebar->ticks[idx]);
    }
    free(lifebar->ticks);
    free(lifebar);
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

void destroy_enemy(enemy_t *enemy)
{
    if (enemy->left)
        sfSprite_destroy(enemy->left);
    if (enemy->right)
        sfSprite_destroy(enemy->right);
    if (enemy->anim_clock)
        sfClock_destroy(enemy->anim_clock);
    if (enemy->clock)
        sfClock_destroy(enemy->clock);
    free(enemy);
}

void destroy_fights(fights_t *fights)
{
    if (!fights)
        return;
    destroy_sprite(fights->bg);
    destroy_sprite(fights->fight_button);
    destroy_sprite(fights->run_button);
    destroy_lifebar(fights->rat_lifebar);
    destroy_lifebar(fights->enemy_lifebar);
    destroy_enemy(fights->enemy);
    detroy_attack(fights->attack_1);
    detroy_attack(fights->attack_2);
    detroy_attack(fights->attack_3);
    sfClock_destroy(fights->button_clock);
    free(fights);
}
