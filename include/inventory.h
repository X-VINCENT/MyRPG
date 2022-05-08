/*
** EPITECH PROJECT, 2022
** Inventory Header for MyRPG
** File description:
** Xavier VINCENT - Gautier BONHUR - Hugo DUBOIS - Max PEIXOTO
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_

    #include "rpg.h"

    #define INVENTORY_SIZE 9

    #define LEGAL 0
    #define ILLEGAL 1

    #define R_EMPTY ((sfIntRect){0, 0, 0, 0})
    #define R_MONA ((sfIntRect){324, 0, 52, 70})
    #define R_THE_WAVE ((sfIntRect){385, 0, 60, 44})
    #define R_TROPHY ((sfIntRect){455, 0, 40, 36})
    #define R_BOMB ((sfIntRect){1860, 32, 21, 20})
    #define R_KIT ((sfIntRect){388, 232, 86, 62})
    #define R_KEY ((sfIntRect){508, 0, 24, 10})
    #define R_GARBAGE_BAG ((sfIntRect){542, 0, 23, 17})
    #define R_TEE_SHIRT ((sfIntRect){574, 0, 26, 26})
    #define R_PANTS ((sfIntRect){612, 0, 20, 10})
    #define R_CAP ((sfIntRect){641, 0, 26, 24})
    #define R_ICE_CREAM ((sfIntRect){679, 0, 10, 16})
    #define R_KNACKI ((sfIntRect){699, 0, 15, 15})
    #define R_MONSTER ((sfIntRect){501, 580, 10, 19})
    #define R_CHICKEN ((sfIntRect){120, 447, 24, 12})
    #define R_PIZZA ((sfIntRect){321, 546, 30, 18})
    #define R_BUCKET_KFC ((sfIntRect){770, 0, 26, 29})
    #define R_TOILET_PAPER ((sfIntRect){724, 0, 14, 18})
    #define R_WATER_BOTTLE ((sfIntRect){750, 0, 10, 18})

    #define S_EMPTY 1
    #define S_MONA 4
    #define S_THE_WAVE 4
    #define S_TROPHY 5
    #define S_BOMB 8
    #define S_KIT 3
    #define S_KEY 8
    #define S_GARBAGE_BAG 8
    #define S_TEE_SHIRT 8
    #define S_PANTS 9
    #define S_CAP 8
    #define S_ICE_CREAM 12
    #define S_KNACKI 12
    #define S_MONSTER 10
    #define S_CHICKEN 10
    #define S_PIZZA 10
    #define S_BUCKET_KFC 10
    #define S_TOILET_PAPER 12
    #define S_WATER_BOTTLE 12

    #define EMPTY_PRICE 0
    #define MONA_PRICE 1000000
    #define TROPHY_PRICE 10000
    #define THE_WAVE_PRICE 100000
    #define BOMB_PRICE 500
    #define KIT_PRICE 100
    #define KEY_PRICE 0
    #define GARBAGE_BAG_PRICE 10
    #define TEE_SHIRT_PRICE 50
    #define PANTS_PRICE 100
    #define CAP_PRICE 25
    #define ICE_CREAM_PRICE 5
    #define KNACKI_PRICE 5
    #define MONSTER_PRICE 10
    #define CHICKEN_PRICE 10
    #define PIZZA_PRICE 10
    #define BUCKET_KFC_PRICE 999999
    #define TOILET_PAPER_PRICE 5
    #define WATER_BOTTLE_PRICE 5


    enum item_name {
        EMPTY,
        MONA,
        THE_WAVE,
        TROPHY,
        BOMB,
        KIT,
        KEY,
        GARBAGE_BAG,
        TEE_SHIRT,
        PANTS,
        CAP,
        ICE_CREAM,
        KNACKI,
        MONSTER,
        CHICKEN,
        PIZZA,
        BUCKET_KFC,
        TOILET_PAPER,
        WATER_BOTTLE,
        NB_ITEMS
    };

    typedef struct object {
        enum item_name name;
        sfSprite *sprite;
        sfCircleShape *area;
        int is_picked;
    } object_t;

    typedef struct item {
        enum item_name name;
        sfSprite **sprite;
        int *selling_price;
        int *legality;
        float *scale;
    } item_t;

    typedef struct inventory {
        item_t **items;
        sfSprite **slots_on;
        sfSprite **slots_off;
        int selected;
    } inventory_t;

#endif /* !INVENTORY_H_ */
