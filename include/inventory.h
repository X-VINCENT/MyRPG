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

    #define R_EMPTY (sfIntRect){0, 0, 0, 0}
    #define R_MONA (sfIntRect){0, 0, 0, 0}
    #define R_THE_WAVE (sfIntRect){0, 0, 0, 0}
    #define R_TROPHY (sfIntRect){0, 0, 0, 0}
    #define R_WEAPON (sfIntRect){0, 0, 0, 0}
    #define R_KEY (sfIntRect){0, 0, 0, 0}
    #define R_GARBAGE_BAG (sfIntRect){0, 0, 0, 0}
    #define R_TEE_SHIRT (sfIntRect){0, 0, 0, 0}
    #define R_PANTS (sfIntRect){0, 0, 0, 0}
    #define R_CAP (sfIntRect){0, 0, 0, 0}
    #define R_ICE_CREAM (sfIntRect){0, 0, 0, 0}
    #define R_KNACKI (sfIntRect){0, 0, 0, 0}
    #define R_PROMO_CODE (sfIntRect){0, 0, 0, 0}
    #define R_TOILET_PAPER (sfIntRect){0, 0, 0, 0}
    #define R_WATER_BOTTLE (sfIntRect){0, 0, 0, 0}

    #define S_EMPTY 1
    #define S_MONA 1
    #define S_THE_WAVE 1
    #define S_TROPHY 1
    #define S_WEAPON 1
    #define S_KEY 1
    #define S_GARBAGE_BAG 1
    #define S_TEE_SHIRT 1
    #define S_PANTS 1
    #define S_CAP 1
    #define S_ICE_CREAM 1
    #define S_KNACKI 1
    #define S_PROMO_CODE 1
    #define S_TOILET_PAPER 1
    #define S_WATER_BOTTLE 1

    #define EMPTY_PRICE 0
    #define MONA_PRICE 10000
    #define TROPHY_PRICE 1000
    #define THE_WAVE_PRICE 5000
    #define WEAPON_PRICE 500
    #define KEY_PRICE 0
    #define GARBAGE_BAG_PRICE 10
    #define TEE_SHIRT_PRICE 50
    #define PANTS_PRICE 100
    #define CAP_PRICE 25
    #define ICE_CREAM_PRICE 5
    #define KNACKI_PRICE 5
    #define PROMO_CODE_PRICE 0
    #define TOILET_PAPER_PRICE 5
    #define WATER_BOTTLE_PRICE 5

    enum item_name {
        EMPTY,
        MONA,
        TROPHY,
        THE_WAVE,
        WEAPON,
        KEY,
        GARBAGE_BAG,
        TEE_SHIRT,
        PANTS,
        CAP,
        ICE_CREAM,
        KNACKI,
        PROMO_CODE,
        TOILET_PAPER,
        WATER_BOTTLE,
        NB_ITEMS
    };

    typedef struct object {
        enum item_name name;
        sfSprite *sprite;
        int selling_price;
        int buying_price;
        int is_legal;
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
