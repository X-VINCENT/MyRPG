/*
** EPITECH PROJECT, 2022
** Display Fights GUI for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS - Gautier BONHUR
*/

#include "rpg.h"

void set_text_damage_attack(attack_t *attack)
{
    char *damage_text = my_put_nbr_in_str(attack->damage);

    if (!attack)
        return;
    sfText_setString(attack->damage_text, damage_text);
    set_text_origin(attack->damage_text);
    free(damage_text);
}

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
        set_text_damage_attack(attack);
        sfRenderWindow_drawText(window, attack->name, NULL);
        sfRenderWindow_drawText(window, attack->damage_text, NULL);
    }
    if (attack->is_unlocked == 1)
        sfRenderWindow_drawSprite(window, attack->filter, NULL);
}

void display_lifebar(sfRenderWindow *window, lifebar_t *lifebar, int life)
{
    sfRenderWindow_drawSprite(window, lifebar->empty_bar, NULL);
    for (float idx = 0; idx * 1.5625 <= life &&
        lifebar->ticks[(int)idx] != NULL; idx += 1)
        sfRenderWindow_drawSprite(window, lifebar->ticks[(int)idx], NULL);
}

void display_fights_gui(game_t *game)
{
    fights_t *fights = game->fights;

    sfRenderWindow_drawSprite(game->window, fights->fight_button, NULL);
    sfRenderWindow_drawSprite(game->window, fights->run_button, NULL);
    display_lifebar(
        game->window, fights->rat_lifebar, game->assets->rat->life);
    display_lifebar(game->window, fights->enemy_lifebar, fights->enemy->life);
    if (fights->fight_status == 1) {
        display_attack(game->window, fights->attack_1);
        display_attack(game->window, fights->attack_2);
        display_attack(game->window, fights->attack_3);
    }
}
