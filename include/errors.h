/*
** EPITECH PROJECT, 2022
** Errors Header for My RPG
** File description:
** Xavier VINCENT - Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#ifndef ERRORS_H_
    #define ERRORS_H_

    #include "rpg.h"

// Check Env
int env(char **arge);
int check_display(char *environment);

// Check File
int check_assets(void);
int check_audio(void);
int check_fonts(void);
int is_file(const char *filepath);

// Check Pictures
int check_pictures(void);
int check_environment_assets(void);
int check_gui(void);
int check_icons(void);

// Help
int print_help(void);

#endif /* !ERRORS_H_ */
