/*
** EPITECH PROJECT, 2022
** Assets Header for My RPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef ASSETS_H_
    #define ASSETS_H_

    #include "rpg.h"

//////////////////////////////////////////////////////////////////////////////
// Rects
    #define R_HTP_EXPLANATION (sfIntRect){2177, 882, 1917, 647}
    #define R_HTP_APART (sfIntRect){1446, 4352, 1917, 647} 
    #define R_HTP_PNJ (sfIntRect){2203, 63, 1917, 647}
    #define R_ARROW (sfIntRect){240, 0, 35, 51}
    #define R_SCROLLING_BAR (sfIntRect){0, 169, 28, 450}
    #define R_SCROLLING_BAR_INSIDE (sfIntRect){39, 169, 28, 150}
    #define R_LASERS (sfIntRect){133, 113, 212, 174}
    #define R_EMPTY_BAR (sfIntRect){0, 637, 500, 18}
    #define R_CIRCLE_BAR (sfIntRect){0, 686, 34, 34}
    #define R_BAR (sfIntRect){0, 660, 500, 20}
    #define R_KEY_BG (sfIntRect){0, 724, 204, 64}
    #define R_CROSS (sfIntRect){0, 794, 38, 38}
    #define R_CHOOSE_KEY (sfIntRect){0, 1606, 504, 219}

    #define R_RAT_FRAME (sfIntRect){0, 1841, 398, 496}
    #define R_COIN (sfIntRect){0, 2355, 50, 60}
    #define R_XP (sfIntRect){69, 2355, 70, 67}
    #define R_ABILITIES (sfIntRect){152, 2355, 50, 50}

    #define R_SAVE (sfIntRect){0, 2445, 395, 513}
    #define R_PLAY (sfIntRect){0, 2979, 78, 78}
    #define R_ERASE (sfIntRect){94, 2979, 79, 78}
    #define R_SAVE_MAP (sfIntRect){0, 3074, 300, 200}

    #define R_TREE (sfIntRect){1691, 1846, 1720, 1816}
    #define R_LITTLE_RECT_UNLOCKED (sfIntRect){0, 3547, 180, 111}
    #define R_RECT_UNLOCKED (sfIntRect){193, 3547, 400, 111}
    #define R_LITTLE_RECT_LOCKED (sfIntRect){0, 3675, 180, 111}
    #define R_RECT_LOCKED (sfIntRect){193, 3675, 400, 111}
    #define R_KICK (sfIntRect){0, 3801, 400, 111}
    #define R_VERTICAL_BAR (sfIntRect){0, 3930, 16, 170}
    #define R_HORIZONTAL_BAR (sfIntRect){20, 3930, 170, 16}

    #define R_BG_SKIN (sfIntRect){0, 4136, 517, 292}
    #define R_SKIN_UNLOCKED (sfIntRect){0, 4446, 78, 111}
    #define R_SKIN_LOCKED (sfIntRect){89, 4446, 78, 111}

    #define R_RAT_KICK (sfIntRect){22, 487, 23, 22}
    #define R_RAT_BITE (sfIntRect){184, 534, 20, 21}

    #define R_BG_FIGHTS (sfIntRect){1265, 0, 520, 307}
    #define R_FIGHT_BUTTON (sfIntRect){1791, 0, 74, 26}
    #define R_RUN_BUTTON (sfIntRect){1873, 0, 46, 26}
    #define R_ATTACK_BG (sfIntRect){1790, 70, 100, 50}
    #define R_FILTER (sfIntRect){1890, 127, 100, 50}
    #define R_BOMB_IDLE (sfIntRect){1788, 31, 24, 21}
    #define R_BOMB_EXPLOSION (sfIntRect){1880, 31, 65, 32}
    #define R_RAT_HEALTH_BAR_FULL (sfIntRect){1945, 0, 64, 4}
    #define R_RAT_HEALTH_BAR_EMPTY (sfIntRect){1945, 5, 85, 8}
    #define R_ENEMY_HEALTH_BAR_FULL (sfIntRect){1945, 14, 64, 4}
    #define R_ENEMY_HEALTH_BAR_EMPTY (sfIntRect){1945, 19, 85, 8}
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// Audio
    // Musics
    #define MUSIC_HOME_MENU "assets/audio/musics/home_menu.ogg"
    #define MUSIC_CITY "assets/audio/musics/music_city.ogg"
    #define MUSIC_BAR "assets/audio/musics/music_bar.ogg"
    #define MUSIC_ICE_CREAM_SHOP "assets/audio/musics/music_ice_cream.ogg"
    #define MUSIC_MUSEUM "assets/audio/musics/music_museum.ogg"
    // Sounds
    #define JUMP_SOUND "assets/audio/sounds/jump_sound.ogg"
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
    // Fonts
    #define FONT_RPG "assets/fonts/rpg.ttf"
    #define FONT_BUENARD "assets/fonts/Buenard.ttf"
    #define FONT_TEXT_PNJ "assets/fonts/Bebas-Regular.ttf"
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Images
    // Characters
    // Rat
    #define BLUE_RAT "assets/images/characters/rat/blue.png"
    #define RED_RAT "assets/images/characters/rat/red.png"
    #define GREEN_RAT "assets/images/characters/rat/green.png"
    #define PURPLE_RAT "assets/images/characters/rat/purple.png"

    // Environments
    // Apart
    #define APART "assets/images/environments/appartment/apart.png"
    #define APART_TOP "assets/images/environments/appartment/apart_top.png"
    #define APART_HITBOX "assets/images/environments/appartment/hitbox.bmp"

    // Bar
    #define BAR "assets/images/environments/bar/view.png"

    // City
    #define CITY "assets/images/environments/city/view.png"
    #define CITY_TOP "assets/images/environments/city/map_top.png"
    #define CITY_HITBOX "assets/images/environments/city/hitbox.bmp"
    #define RAT_DOOR "assets/images/environments/city/rat_door.png"

    // Clothe Store
    #define CLOTHE "assets/images/environments/clothe_store/view.png"

    // Ice Cream Shop
    #define ICE "assets/images/environments/ice_cream_shop/view.png"

    // Market
    #define MARKET "assets/images/environments/market/view.png"

    // Museum
    #define MUSEUM "assets/images/environments/museum/museum.png"
    #define MUSEUM_TOP "assets/images/environments/museum/museum_top.png"
    #define MUSEUM_HITBOX "assets/images/environments/museum/museum_hitbox.png"
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
    // Icons
    #define CURSOR "assets/images/icons/cursor_icon.png"
    #define WINDOW_ICON "assets/images/icons/window_icon.png"
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Menus
    // Abilities
    #define ABILITIES_BG "assets/images/menus/abilities/bg.png"

    // Home
    #define HOME_BG0 "assets/images/menus/home/bg0.png"
    #define HOME_BG1 "assets/images/menus/home/bg1.png"
    #define HOME_BG2 "assets/images/menus/home/bg2.png"
    #define HOME_BG3 "assets/images/menus/home/bg3.png"
    #define HOME_TITLE "assets/images/menus/home/title.png"

    // Settings
    #define SETTINGS_BG "assets/images/menus/settings/bg.png"

    // Transitions
    // Rat
    #define RAT_ENTER "assets/images/menus/transitions/rat/enter.png"
    #define RAT_QUIT "assets/images/menus/transitions/rat/quit.png"

    #define MENU_BG "assets/images/menus/menu.png"
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// Objects
    // Buttons
    #define BUTTONS_1 "assets/images/objects/buttons/buttons_1.png"

    // Inventory
    #define SLOT_PATH_ON "assets/images/objects/inventory/slot_on.png"
    #define SLOT_PATH_OFF "assets/images/objects/inventory/slot_off.png"

    // Message Box
    #define MESSAGE_BOX "assets/images/objects/message_box/boxs.png"

    // GUI
    #define GUI "assets/images/objects/gui.png"

    // Particles
    #define RAIN "assets/images/objects/rain.png"
    #define RAIN_NUMBER 10000
    #define WIND "assets/images/objects/wind.png"
    #define WIND_NUMBER 500
//////////////////////////////////////////////////////////////////////////////

#endif /* !ASSETS_H_ */
