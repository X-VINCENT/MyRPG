/*
** EPITECH PROJECT, 2021
** Header File for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef MY_RPG_H_
    #define MY_RPG_H_

// Libs
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "../lib/my/my.h"
    #include "../lib/my_printf/my_printf.h"

// CSFML Headers
    #include "csfml.h"

// RPG Headers
    #include "inventory.h"
    #include "data.h"
    #include "display.h"
    #include "errors.h"
    #include "event.h"
    #include "init.h"
    #include "stage.h"
    #include "tools.h"
    #include "destroy.h"

// Basic Macros
    #define SUCCESS 0
    #define ERROR 84

// RPG File
    int my_rpg(void);
    int engine(game_t *game);
    void display_cursor(game_t *game);

// Assets
// Audio
    // Musics
    // Sounds

// Fonts
    #define FONT_RPG "assets/fonts/rpg.ttf"
    #define FONT_BUENARD "assets/fonts/Buenard.ttf"

// Images
    // Characters
        // Rat
        #define BLUE_RAT "assets/images/characters/rat/blue.png"
        #define RED_RAT "assets/images/characters/rat/red.png"
        #define GREEN_RAT "assets/images/characters/rat/green.png"
        #define PURPLE_RAT "assets/images/characters/rat/purple.png"

    // Environments
    #define APPARTMENT "assets/images/environments/appartment/apart.png"
#define APPARTMENT_TOP "assets/images/environments/appartment/apart_top.png"
    #define APPART_HITBOX "assets/images/environments/appartment/hitbox.png"

    #define CITY "assets/images/environments/city/view.png"
    #define CITY_HITBOX "assets/images/environments/city/hitbox.bmp"
    #define RAT_DOOR "assets/images/environments/city/rat_door.png"

    #define ICE "assets/images/environments/ice_cream_shop/view.png"

    #define CLOTHE "assets/images/environments/clothe_store/view.png"

    #define MARKET "assets/images/environments/market/view.png"

    #define MUSEUM1 "assets/images/environments/museum/view1.png"

    #define MUSEUM2 "assets/images/environments/museum/view2.png"

    // Icons
    #define CURSOR "assets/images/icons/cursor_icon.png"
    #define WINDOW_ICON "assets/images/icons/window_icon.png"

    // Menus
        // Home
            #define BG0 "assets/images/menus/home/bg0.png"
            #define BG1 "assets/images/menus/home/bg1.png"
            #define BG2 "assets/images/menus/home/bg2.png"
            #define BG3 "assets/images/menus/home/bg3.png"
            #define HOME_TITLE "assets/images/menus/home/title.png"
            #define HOME_PRESS "assets/images/menus/home/press.png"

        // Settings
            #define SETTINGS_BG "assets/images/menus/settings/bg.png"

        // Transitions
            // Rat
            #define RAT_ENTER "assets/images/menus/transitions/rat/enter.png"
            #define RAT_QUIT "assets/images/menus/transitions/rat/quit.png"

    // Objects
        // GUI
            #define GUI "assets/images/objects/gui.png"

// Window
#define DEFAULT_FPS 0
#define DEFAULT_WINDOW_RESOLUTION 1080

// Language
    #define ENGLISH 0
    #define FRENCH 1
    #define GERMAN 2
    #define SPANISH 3

// View
    // DEFAULT
    #define VIEW_DEFAULT_SIZE (sfVector2f){640, 360}
    #define VIEW_DEFAULT_POS (sfVector2f){2468, 1710}
    #define VIEW_DEFAULT_ROTATION 0
    #define VIEW_ZOOM_VALUE 5
    #define VIEW_MAX_ZOOM_IN 250
    #define VIEW_MAX_ZOOM_OUT 700
    #define VIEW_ROTATE_VALUE 1

    // MENUS
    #define VIEW_MENUS_SIZE (sfVector2f){1920, 1080}
    #define VIEW_MENUS_POS (sfVector2f){960, 540}

    #define VIEW_HOME_MENU_SIZE (sfVector2f){640, 360}
    #define VIEW_HOME_MENU_POS (sfVector2f){320, 180}

    // Appartment
    #define VIEW_APPARTMENT_SIZE (sfVector2f){600, 320}
    #define VIEW_APPARTMENT_POS (sfVector2f){258.5, 146}

    // City
    #define VIEW_CITY_SIZE (sfVector2f){853, 480}
    #define VIEW_CITY_POS (sfVector2f){2468, 1710}

    // Ice Cream Shop
    #define VIEW_ICE_SIZE (sfVector2f){600, 320}
    #define VIEW_ICE_POS (sfVector2f){288, 240}

    // Clothe shop
    #define VIEW_CLOTHE_SIZE (sfVector2f){1024, 768}
    #define VIEW_CLOTHE_POS (sfVector2f){336, 321}

    // Market
    #define VIEW_MARKET_SIZE (sfVector2f){740, 450}
    #define VIEW_MARKET_POS (sfVector2f){370, 225}

    // Museum
    #define VIEW_MUSEUM1_SIZE (sfVector2f){1920, 1080}
    #define VIEW_MUSEUM1_POS (sfVector2f){384, 528}

// Rat
    #define SCALE_RAT (sfVector2f){1.00, 1.00}
    // Speed
        #define RAT_SPEED_APPARTMENT 1
        #define RAT_SPEED_CITY 4
        #define RAT_SPEED_ICE_CREAM_SHOP 1
        #define RAT_SPEED_CLOTHE_SHOP 1
        #define RAT_SPEED_MARKET 2
        #define RAT_SPEED_MUSEUM1 2

    // Pos
        #define RAT_DEFAULT_POS_CITY_APPARTMENT (sfVector2f){2468, 1710}
        #define RAT_DEFAULT_POS_CITY_APPARTMENT_ICE_SHOP (sfVector2f){915, 1675}
        #define RAT_DEFAULT_POS_CITY_CLOTHE_STORE (sfVector2f){588, 1672}
        #define RAT_DEFAULT_POS_CITY_MARKET (sfVector2f){1524, 1690}

        #define RAT_DEFAULT_POS_APPARTMENT (sfVector2f){166, 272}
        #define RAT_DEFAULT_POS_ICE_CREAM_SHOP (sfVector2f){288, 380}
        #define RAT_DEFAULT_POS_CLOTHE_SHOP (sfVector2f) {36, 232}
        #define RAT_DEFAULT_POS_MARKET (sfVector2f){30, 342}
        #define RAT_DEFAULT_POS_MUSEUM1 (sfVector2f){47, 793}
    // Idle
        #define RAT_IDLE_FRONT_OFFSET 18
        #define RAT_IDLE_FRONT_MAX 94
        #define RAT_IDLE_BACK_OFFSET 18
        #define RAT_IDLE_BACK_MAX 94
        #define RAT_IDLE_SIDE_OFFSET 27
        #define RAT_IDLE_SIDE_MAX 130
    // Movement
        #define RAT_UP_OFFSET 20
        #define RAT_UP_MAX 135
        #define RAT_DOWN_OFFSET 20
        #define RAT_DOWN_MAX 140
        #define RAT_SIDE_OFFSET 27
        #define RAT_SIDE_MAX 177

// Locations
    // Appartment
    #define LOCATION_DOOR_APPARTMENT (sfVector2f){145, 280}

    // City
    #define LOCATION_APPARTMENT (sfVector2f){2450, 1690}
    #define LOCATION_ICE_SHOP (sfVector2f) {904, 1667}
    #define LOCATION_CLOTHE_SHOP (sfVector2f) {573, 1666}
    #define LOCATION_MARKET (sfVector2f) {1522, 1683}
    #define LOCATION_MUSEUM1 (sfVector2f) {2022, 556}

    // Ice Cream Shop
    #define LOCATION_DOOR_ICE_CREAM_SHOP (sfVector2f){243, 385}

    //Clothe
    #define LOCATION_DOOR_CLOTHE_STORE (sfVector2f){50, 226}

    // Market
    #define LOCATION_DOOR_MARKET (sfVector2f){12, 334}

// Rects
    #define R_ARROW (sfIntRect){240, 0, 35, 51}
    #define R_EMPTY_BAR (sfIntRect){0, 637, 500, 18}
    #define R_CIRCLE_BAR (sfIntRect){0, 686, 34, 34}

// Texts
#define ENGLISH_MENU_1 "Menu 1"
#define FRENCH_MENU_1 "Menu 1"
#define GERMAN_MENU_1 "Menu 1"
#define SPANISH_MENU_1 "Menu 1"

#define ENGLISH_MENU_2 "Menu 2"
#define FRENCH_MENU_2 "Menu 2"
#define GERMAN_MENU_2 "Menu 2"
#define SPANISH_MENU_2 "Menu 2"

#define ENGLISH_MENU_3 "Menu 3"
#define FRENCH_MENU_3 "Menu 3"
#define GERMAN_MENU_3 "Menu 3"
#define SPANISH_MENU_3 "Menu 3"

#define ENGLISH_MENU_4 "Menu 4"
#define FRENCH_MENU_4 "Menu 4"
#define GERMAN_MENU_4 "Menu 4"
#define SPANISH_MENU_4 "Menu 4"

#define ENGLISH_SETTINGS "Settings"
#define ENGLISH_GAME "Game"
#define ENGLISH_GRAPHICS "Graphics"
#define ENGLISH_AUDIO "Audio"
#define ENGLISH_CONTROLS "Controls"
#define ENGLISH_UP "Up"
#define ENGLISH_DOWN "Down"
#define ENGLISH_LEFT "Left"
#define ENGLISH_RIGHT "Right"
#define ENGLISH_INTERACT "Interact"
#define ENGLISH_ENGLISH "English"
#define ENGLISH_LANGUAGE "Language"
#define ENGLISH_RESOLUTION "Resolution"
#define ENGLISH_FRAMERATE "Frame Rate Limit"
#define ENGLISH_VSYNC "Vertical Synchronisation"
#define ENGLISH_UNLIMITED "Unlimited"
#define ENGLISH_MUSIC_VOLUME "Music Volume"
#define ENGLISH_EFFECTS_VOLUME "Sound Effects Volume"

#define FRENCH_SETTINGS "Parametres"
#define FRENCH_GAME "Jeu"
#define FRENCH_GRAPHICS "Visuels"
#define FRENCH_AUDIO "Son"
#define FRENCH_CONTROLS "Controles"
#define FRENCH_UP "Haut"
#define FRENCH_DOWN "Bas"
#define FRENCH_LEFT "Gauche"
#define FRENCH_RIGHT "Droite"
#define FRENCH_INTERACT "Interagir"
#define FRENCH_FRENCH "Francais"
#define FRENCH_LANGUAGE "Langue"
#define FRENCH_RESOLUTION "Resolution"
#define FRENCH_FRAMERATE "Taux de rafraichissement max"
#define FRENCH_VSYNC "Synchronisation verticale"
#define FRENCH_UNLIMITED "Illimite"
#define FRENCH_MUSIC_VOLUME "Volume de la musique"
#define FRENCH_EFFECTS_VOLUME "Volume des effets sonores"

#define GERMAN_SETTINGS "Einstellungen"
#define GERMAN_GAME "Spiel"
#define GERMAN_GRAPHICS "Grafik"
#define GERMAN_AUDIO "Audio"
#define GERMAN_CONTROLS "Steuert"
#define GERMAN_UP "Hoch"
#define GERMAN_DOWN "Niedrig"
#define GERMAN_LEFT "Links"
#define GERMAN_RIGHT "Rechts"
#define GERMAN_INTERACT "Interagieren"
#define GERMAN_GERMAN "Deutsch"
#define GERMAN_LANGUAGE "Sprache"
#define GERMAN_RESOLUTION "Auflosung"
#define GERMAN_FRAMERATE "Bildratenbegrenzung"
#define GERMAN_VSYNC "Vertikale Synchronisation"
#define GERMAN_UNLIMITED "Unbegrenzt"
#define GERMAN_MUSIC_VOLUME "Musiklautstarke"
#define GERMAN_EFFECTS_VOLUME "Lautstarke der Soundeffekte"

#define SPANISH_SETTINGS "Configuraciones"
#define SPANISH_GAME "Juego"
#define SPANISH_GRAPHICS "Graficos"
#define SPANISH_AUDIO "Su"
#define SPANISH_CONTROLS "Control S"
#define SPANISH_UP "Alto"
#define SPANISH_DOWN "Bajo"
#define SPANISH_LEFT "Izquierda"
#define SPANISH_RIGHT "Derecha"
#define SPANISH_INTERACT "Interactuar"
#define SPANISH_SPANISH "Espanol"
#define SPANISH_LANGUAGE "Idioma"
#define SPANISH_RESOLUTION "Resolucion"
#define SPANISH_FRAMERATE "Limit de velocidad de fotogramas"
#define SPANISH_VSYNC "Sincronization vertical"
#define SPANISH_UNLIMITED "Ilimitado"
#define SPANISH_MUSIC_VOLUME "Volumen de la mumake fcleeaeaeaesica"
#define SPANISH_EFFECTS_VOLUME "Volumen de efectos de sonido"

#endif /* !MY_RPG_H_ */
