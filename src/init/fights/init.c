/*
** EPITECH PROJECT, 2022
** Init Fights for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

void init_sprites_fights(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2f p_fight = {150, 289};
    sfVector2f p_run = {370, 289};
    sfVector2f scale = {1, 1};

    fights->fight_button = create_sprite(
        game->textures->gui, R_FIGHT_BUTTON, p_fight, scale);
    fights->run_button = create_sprite(
        game->textures->gui, R_RUN_BUTTON, p_run, scale);
    set_sprite_origin(fights->fight_button, R_FIGHT_BUTTON);
    set_sprite_origin(fights->run_button, R_RUN_BUTTON);
}

attack_t *init_attack(game_t *game, sfIntRect r,
    sfVector2f pos, const char *name)
{
    attack_t *attack = malloc(sizeof(attack_t));
    sfVector2f p_name = init_pos(pos.x, pos.y - 14);
    sfVector2f p_damage_text = init_pos(pos.x, pos.y + 4);
    sfVector2f scale = init_scale(1, 1);

    attack->bg = create_sprite(game->textures->gui, R_ATTACK_BG, pos, scale);
    attack->filter = create_sprite(game->textures->gui, R_FILTER, pos, scale);
    attack->sprite = create_sprite(game->textures->rat_blue, r, pos, scale);
    attack->name = create_text(FONT_BUENARD, sfBlack, 14, name);
    attack->damage_text = create_text(FONT_BUENARD, sfBlack, 14, "0");
    set_sprite_origin(attack->bg, R_ATTACK_BG);
    set_sprite_origin(attack->filter, R_FILTER);
    set_sprite_origin(attack->sprite, r);
    sfText_setPosition(attack->name, p_name);
    sfText_setPosition(attack->damage_text, p_damage_text);
    set_text_origin(attack->name);
    set_text_origin(attack->damage_text);
    attack->offset_from_left = r.left;
    attack->shift = r.width;
    return attack;
}

void set_attack_values(attack_t *attack, float anim_time,
    int max_value, int damage)
{
    attack->anim_clock = sfClock_create();
    attack->clock = sfClock_create();
    attack->damage = damage;
    attack->is_unlocked = 0;
    attack->is_hover = 0;
    attack->anim_time = anim_time;
    attack->max_value = max_value;
}

void init_fights_attacks(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2f p_1 = init_pos(140, 79);
    sfVector2f p_2 = init_pos(270, 79);
    sfVector2f p_3 = init_pos(400, 79);

    fights->attack_1 = init_attack(game, R_RAT_KICK, p_1, ENGLISH_KICK);
    fights->attack_2 = init_attack(game, R_RAT_BITE, p_2, ENGLISH_BITE);
    fights->attack_3 = init_attack(game, R_BOMB_IDLE, p_3, ENGLISH_BOMB);
    set_attack_values(fights->attack_1, 0.2, 87, 25);
    set_attack_values(fights->attack_2, 1000, 204, 30);
    set_attack_values(fights->attack_3, 0.2, 1881, 50);
}

void init_fights(game_t *game)
{
    game->fights = malloc(sizeof(fights_t));
    sfVector2f p_bg = {0, 0};
    sfVector2f scale = {1, 1};

    game->fights->bg = create_sprite(
        game->textures->gui, R_BG_FIGHTS, p_bg, scale);
    init_sprites_fights(game);
    init_fights_attacks(game);
    init_fights_enemy(game);
    init_fights_lifebar(game);
    game->fights->button_clock = sfClock_create();
    game->fights->fight_status = 0;
    game->fights->kick = 0;
    game->fights->bite = 0;
    game->fights->bomb = 0;
    game->fights->as_touched = 0;
    game->fights->last_position = init_pos(0, 0);
}
