/*
** EPITECH PROJECT, 2022
** Errors Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

    #include "rpg.h"

// Check Assets
int check_assets(void);

// Check Audio
int check_audio(void);

// Check Data
int check_data(void);

// Check Env
int env(char **arge);

// Check File
int is_file(const char *filepath);

// Check Fonts
int check_fonts(void);

// Check Images
int check_images(void);

// Help
int print_help(void);

#endif /* !ERRORS_H_ */
