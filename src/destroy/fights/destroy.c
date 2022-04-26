/*
** EPITECH PROJECT, 2022
** Destroy Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void destroy_fights(fights_t *fights)
{
    if (!fights)
        return;
    destroy_sprite(fights->bg);
    destroy_sprite(fights->fight_button);
    destroy_sprite(fights->run_button);
    sfClock_destroy(fights->button_clock);
    free(fights);
}
