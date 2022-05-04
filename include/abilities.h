/*
** EPITECH PROJECT, 2022
** Abilities Header for My RPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef ABILITIES_H_
    #define ABILITIES_H_

    #include "rpg.h"

    enum ability_status {
        LOCKED,
        UNLOCKED
    };

    typedef struct ability {
        sfSprite **rect;
        sfText *text;
        sfText *text_price;
        enum ability_status status;
        int price;
        sfClock *clock;
    } ability_t;

    enum abilities_names {
        KICK,
        UTILITY_SELL_10,
        UTILITY_SELL_20,
        UTILITY_SELL_30,
        UTILITY_SELL_40,
        UTILITY_SELL_50,
        UTILITY_CAN_BUY,
        UTILITY_SPEED_30,
        UTILITY_SPEED_40,
        UTILITY_SPEED_50,
        UTILITY_SELL_100_SPEED_100,
        STEALTH_RANGE_10,
        STEALTH_ILLEGAL_1,
        STEALTH_ESCAPE_20,
        STEALTH_ESCAPE_40,
        STEALTH_ESCAPE_60,
        STEALTH_RANGE_20,
        STEALTH_DODGE,
        STEALTH_ILLEGAL_2,
        STEALTH_RANGE_40,
        STEALTH_CARDBOARD,
        FIGHT_BITE,
        FIGHT_HP_20,
        FIGHT_HP_30,
        FIGHT_HP_40,
        FIGHT_ATTACK_5,
        FIGHT_WEAPON,
        FIGHT_ATTACK_10,
        FIGHT_ATTACK_30,
        FIGHT_HP_50_ATTACK_50,
        NB_ABILITIES
    };

    typedef struct abilities_menu {
        sfSprite *bg;
        sfText *title;
        sfText *title_utility;
        sfText *title_stealth;
        sfText *title_fight;
        sfSprite *tree;
        sfSprite *scrolling_bar;
        sfSprite *scrolling_bar_inside;
        sfClock *scrolling_clock;
        sfClock *clock;
    } abilities_menu_t;

    typedef struct abilities {
        ability_t **ability;
        abilities_menu_t *menu;
    } abilities_t;

    // Position
    #define POS_ABILITY_TITLE ((sfVector2f){25, 195})
    #define POS_ABILITY_TITLE_UTILITY ((sfVector2f){393, 195})
    #define POS_ABILITY_TITLE_STEALTH ((sfVector2f){960, 195})
    #define POS_ABILITY_TITLE_FIGHT ((sfVector2f){1520, 195})
    #define POS_ABILITY_TREE ((sfVector2f){960, -169})
    #define POS_ABILITY_SCROLLING_BAR ((sfVector2f){1845, 479})
    #define POS_ABILITY_SCROLLING_BAR_INSIDE ((sfVector2f){1845, 629})

#endif /* !ABILITIES_H_ */
