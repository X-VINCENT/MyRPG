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
    #define R_ARROW (sfIntRect) {240, 0, 35, 51}
    #define R_SCROLLING_BAR (sfIntRect) {0, 169, 28, 450}
    #define R_SCROLLING_BAR_INSIDE (sfIntRect) {39, 169, 28, 150}
    #define R_EMPTY_BAR (sfIntRect) {0, 637, 500, 18}
    #define R_CIRCLE_BAR (sfIntRect) {0, 686, 34, 34}
    #define R_BAR (sfIntRect) {0, 660, 500, 20}
    #define R_KEY_BG (sfIntRect) {0, 724, 204, 64}
    #define R_CROSS (sfIntRect) {0, 794, 38, 38}
    #define R_CHOOSE_KEY (sfIntRect) {0, 1606, 504, 219}

    #define R_TREE (sfIntRect) {0, 1842, 1621, 1657}
    #define R_ABILITIES_BLUE_BLOCK (sfIntRect) {1691, 1846, 1720, 1816}
    #define R_RECT_UNLOCKED (sfIntRect) {0, 3547, 400, 111}
    #define R_LITTLE_RECT_UNLOCKED (sfIntRect) {193, 3547, 180, 111}
    #define R_RECT_LOCKED (sfIntRect) {0, 3675, 400, 111}
    #define R_LITTLE_RECT_LOCKED (sfIntRect) {193, 3675, 180, 111}
    #define R_KICK (sfIntRect) {0, 3801, 400, 111}
    #define R_VERTICAL_BAR (sfIntRect) {0, 3930, 16, 170}
    #define R_HORIZONTAL_BAR (sfIntRect) {20, 3930, 170, 16}
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// Audio
    // Musics
    #define MUSIC_HOME_MENU "assets/audio/musics/home_menu.ogg"
    #define MUSIC_CITY "assets/audio/musics/music_city.ogg"
    // Sounds

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
    #define MUSEUM1 "assets/images/environments/museum/view1.png"
    #define MUSEUM2 "assets/images/environments/museum/view2.png"
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
//////////////////////////////////////////////////////////////////////////////

#endif /* !ASSETS_H_ */
