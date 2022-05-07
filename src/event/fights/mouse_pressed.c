/*
** EPITECH PROJECT, 2022
** Fights Mouse Pressed for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

int check_inventory_weapon(game_t *game)
{
    inventory_t *inventory = game->inventory;

    for (int idx = 0; inventory->items[idx] != NULL; idx += 1)
        if (inventory->items[idx]->name == BOMB)
            return 1;
    return 0;
}

void attack_key_pressed(game_t *game, sfVector2f coords)
{
    fights_t *fights = game->fights;
    sfFloatRect r1 = sfSprite_getGlobalBounds(fights->attack_1->bg);
    sfFloatRect r2 = sfSprite_getGlobalBounds(fights->attack_2->bg);
    sfFloatRect r3 = sfSprite_getGlobalBounds(fights->attack_3->bg);

    if (sfFloatRect_contains(&r1, coords.x, coords.y) &&
        game->abilities->ability[KICK]->status == UNLOCKED) {
        fights->kick = 1;
        fights->fight_status = 0;
    }
    if (sfFloatRect_contains(&r2, coords.x, coords.y) &&
        game->abilities->ability[FIGHT_BITE]->status == UNLOCKED) {
        fights->bite = 1;
        fights->fight_status = 0;
    }
    if (sfFloatRect_contains(&r3, coords.x, coords.y) &&
        check_inventory_weapon(game)) {
        fights->bomb = 1;
        fights->fight_status = 0;
    }
}

void fights_mouse_pressed_run(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_run = sfSprite_getGlobalBounds(fights->run_button);
    int random = rand() % 100;

    if (sfFloatRect_contains(&r_run, coords.x, coords.y) &&
        fights->to_attack == 0) {
        if (random <= game->assets->rat->run_chance)
            fights->enemy->life = 0;
        else
            game->assets->rat->life = 0;
    }
}

void fights_mouse_pressed(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f coords = sfRenderWindow_mapPixelToCoords(
        game->window, mouse, NULL);
    sfFloatRect r_fight = sfSprite_getGlobalBounds(fights->fight_button);

    if (sfFloatRect_contains(&r_fight, coords.x, coords.y) &&
        fights->to_attack == 0) {
        if (fights->fight_status == 0)
            fights->fight_status = 1;
        else
            fights->fight_status = 0;
    }
    fights_mouse_pressed_run(game);
    attack_key_pressed(game, coords);
}
