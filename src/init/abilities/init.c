/*
** EPITECH PROJECT, 2022
** Init Abilities for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *english_abilities_texts[] = {
    "Kick",
    "Sell for 10% more",
    "Sell for 20% more",
    "Sell for 30% more",
    "Sell for 40% more",
    "Sell for 50% more",
    "Can buy item",
    "Run 30% faster",
    "Run 40% faster",
    "Run 50% faster",
    "Sell for 100% more and\n      run 100% faster",
    "Reduces detection range by 10%",
    "   Can wield   \n1 illegal object",
    "   20% more  \nescape chance",
    "   40% more  \nescape chance",
    "   60% more  \nescape chance",
    "Reduces detection\n  range by 20%  ",
    "Can dodge",
    "    Can wield    \n2 illegals objects",
    "Reduces detection\n  range by 40%  ",
    "Can become a cardboard",
    "Can bite",
    "20% more HP",
    "30% more HP",
    "40% more HP",
    "5% more damage",
    "Can use weapons",
    "10% more damage",
    "Bite and kick deal 30% more damage",
    "50% more HP and 50% more damage",
    NULL
};

const sfIntRect abilities_rect_locked[] = {
    R_RECT_LOCKED,
    R_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_RECT_LOCKED,
    R_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_RECT_LOCKED,
    R_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_LITTLE_RECT_LOCKED,
    R_RECT_LOCKED,
    R_RECT_LOCKED
};

const sfIntRect abilities_rect_unlocked[] = {
    R_KICK,
    R_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_RECT_UNLOCKED,
    R_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_RECT_UNLOCKED,
    R_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_LITTLE_RECT_UNLOCKED,
    R_RECT_UNLOCKED,
    R_RECT_UNLOCKED
};

const sfVector2f abilities_pos[] = {
    {961, 614},
    {390, 315},
    {275, 52},
    {275, -192},
    {275, -436},
    {275, -680},
    {504, 52},
    {504, -192},
    {504, -436},
    {504, -680},
    {390, -910},
    {961, 315},
    {845, 52},
    {845, -192},
    {845, -436},
    {845, -680},
    {1074, 52},
    {1074, -192},
    {1074, -436},
    {1074, -680},
    {961, -910},
    {1532, 315},
    {1416, 52},
    {1416, -192},
    {1416, -436},
    {1648, 52},
    {1648, -192},
    {1648, -436},
    {1532, -680},
    {1532, -910}
};

const int abilities_prices[] = {
    1,
    1, 1, 2, 2, 3, 1, 2, 2, 3, 5,
    1, 1, 2, 2, 3, 1, 2, 2, 3, 8,
    1, 1, 2, 1, 2, 1, 1, 3, 5
};

void init_ability_sprites(game_t *game, ability_t *ability, int idx)
{
    sfVector2f scale = init_scale(1, 1);

    ability->rect = malloc(sizeof(sfSprite *) * 3);
    ability->rect[LOCKED] = create_sprite(game->textures->gui,
        abilities_rect_locked[idx], abilities_pos[idx], scale);
    ability->rect[UNLOCKED] = create_sprite(game->textures->gui,
        abilities_rect_unlocked[idx], abilities_pos[idx], scale);
    set_sprite_origin(ability->rect[LOCKED], abilities_rect_locked[idx]);
    set_sprite_origin(ability->rect[UNLOCKED], abilities_rect_unlocked[idx]);
    ability->rect[2] = NULL;
}

void init_ability_texts(game_t *game, ability_t *ability, int idx)
{
    sfVector2f p_text = {
        abilities_pos[idx].x, abilities_pos[idx].y - 25};
    sfVector2f p_text_price = {
        abilities_pos[idx].x, abilities_pos[idx].y + 10};

    ability->text = create_text(FONT_BUENARD, sfWhite, 22,
        english_abilities_texts[idx]);
    ability->text_price = create_text(FONT_BUENARD, sfWhite, 32,
        my_put_nbr_in_str(abilities_prices[idx]));
    sfText_setPosition(ability->text, p_text);
    sfText_setPosition(ability->text_price, p_text_price);
    set_text_origin(ability->text);
    set_text_origin(ability->text_price);
}

ability_t *init_ability(game_t *game, int idx)
{
    ability_t *ability = malloc(sizeof(ability_t));

    init_ability_sprites(game, ability, idx);
    init_ability_texts(game, ability, idx);
    ability->status = LOCKED;
    ability->price = abilities_prices[idx];
    ability->clock = sfClock_create();
    return ability;
}

void init_all_abilities(game_t *game)
{
    game->abilities->ability = malloc(sizeof(ability_t *) * NB_ABILITIES + 1);

    for (int idx = 0; idx != NB_ABILITIES; idx += 1)
        game->abilities->ability[idx] = init_ability(game, idx);
    game->abilities->ability[NB_ABILITIES] = NULL;
}

void init_abilities(game_t *game)
{
    game->abilities = malloc(sizeof(abilities_t));

    init_abilities_menu(game);
    init_all_abilities(game);
}
