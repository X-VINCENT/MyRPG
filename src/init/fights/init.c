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
    sfVector2f p_run= {370, 289};
    sfVector2f scale = {1, 1};

    game->fights->fight_button = create_sprite(
        game->textures->gui, R_FIGHT_BUTTON, p_fight, scale);
    game->fights->run_button = create_sprite(
        game->textures->gui, R_RUN_BUTTON, p_run, scale);
    set_sprite_origin(game->fights->fight_button, R_FIGHT_BUTTON);
    set_sprite_origin(game->fights->run_button, R_RUN_BUTTON);
}

attack_t *init_attack(game_t *game, sfTexture *texture,
    sfIntRect rect, sfVector2f pos, const char *name)
{
    attack_t *attack = malloc(sizeof(attack_t));
    sfVector2f p_s = init_pos(pos.x, pos.y);
    sfVector2f p_name = init_pos(pos.x, pos.y - 14);
    sfVector2f p_damage_text = init_pos(pos.x, pos.y + 4);
    sfVector2f scale = init_scale(1, 1);

    attack->bg = create_sprite(game->textures->gui, R_ATTACK_BG, pos, scale);
    attack->sprite = create_sprite(texture, rect, p_s, scale);
    attack->name = create_text(FONT_BUENARD, sfBlack, 14, name);
    attack->damage_text = create_text(FONT_BUENARD, sfBlack, 14, "0");
    set_sprite_origin(attack->bg, R_ATTACK_BG);
    set_sprite_origin(attack->sprite, rect);
    sfText_setPosition(attack->name, p_name);
    sfText_setPosition(attack->damage_text, p_damage_text);
    set_text_origin(attack->name);
    set_text_origin(attack->damage_text);
    attack->clock = sfClock_create();
    attack->damage = 0;
    attack->is_unlocked = 0;
    return attack;
}

void init_fights_attacks(game_t *game)
{
    fights_t *fights = game->fights;
    sfVector2f p_1 = init_pos(140, 79);
    sfVector2f p_2 = init_pos(270, 79);
    sfVector2f p_3 = init_pos(400, 79);

    fights->attack_1 = init_attack(
        game, game->textures->rat_blue, R_RAT_KICK, p_1, ENGLISH_KICK);
    fights->attack_2 = init_attack(
        game, game->textures->rat_blue, R_RAT_BITE, p_2, ENGLISH_BITE);
    fights->attack_3 = init_attack(
        game, game->textures->gui, R_BOMB_IDLE, p_3, ENGLISH_BOMB);
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
    game->fights->button_clock = sfClock_create();
    game->fights->fight_status = 0;
}
