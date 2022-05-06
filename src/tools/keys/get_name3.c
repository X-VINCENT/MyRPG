/*
** EPITECH PROJECT, 2022
** Get Key Name 3 Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *get_key_name_12(sfKeyCode key)
{
    if (key == sfKeyF14)
        return "F14";
    if (key == sfKeyF15)
        return "F15";
    if (key == sfKeyPause)
        return "Pause";
    return NULL;
}

const char *get_key_name_11(sfKeyCode key)
{
    if (key == sfKeyF5)
        return "F5";
    if (key == sfKeyF6)
        return "F6";
    if (key == sfKeyF7)
        return "F7";
    if (key == sfKeyF8)
        return "F8";
    if (key == sfKeyF9)
        return "F9";
    if (key == sfKeyF10)
        return "F10";
    if (key == sfKeyF11)
        return "F11";
    if (key == sfKeyF12)
        return "F12";
    if (key == sfKeyF13)
        return "F13";
    return get_key_name_12(key);
}
