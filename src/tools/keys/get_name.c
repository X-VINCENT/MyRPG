/*
** EPITECH PROJECT, 2022
** Get Key Name 1 Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *get_key_name_6(sfKeyCode key);

const char *get_key_name_5(sfKeyCode key)
{
    if (key == sfKeyNum9)
        return "Num9";
    if (key == sfKeyEscape)
        return "Escape";
    if (key == sfKeyLControl)
        return "LControl";
    if (key == sfKeyLShift)
        return "LShift";
    if (key == sfKeyLAlt)
        return "LAlt";
    if (key == sfKeyLSystem)
        return "LSystem";
    if (key == sfKeyRControl)
        return "RControl";
    if (key == sfKeyRShift)
        return "RShift";
    if (key == sfKeyRAlt)
        return "RAlt";
    return get_key_name_6(key);
}

const char *get_key_name_4(sfKeyCode key)
{
    if (key == sfKeyNum0)
        return "Num0";
    if (key == sfKeyNum1)
        return "Num1";
    if (key == sfKeyNum2)
        return "Num2";
    if (key == sfKeyNum3)
        return "Num3";
    if (key == sfKeyNum4)
        return "Num4";
    if (key == sfKeyNum5)
        return "Num5";
    if (key == sfKeyNum6)
        return "Num6";
    if (key == sfKeyNum7)
        return "Num7";
    if (key == sfKeyNum8)
        return "Num8";
    return get_key_name_5(key);
}

const char *get_key_name_3(sfKeyCode key)
{
    if (key == sfKeyR)
        return "R";
    if (key == sfKeyS)
        return "S";
    if (key == sfKeyT)
        return "T";
    if (key == sfKeyU)
        return "U";
    if (key == sfKeyV)
        return "V";
    if (key == sfKeyW)
        return "W";
    if (key == sfKeyX)
        return "X";
    if (key == sfKeyY)
        return "Y";
    if (key == sfKeyZ)
        return "Z";
    return get_key_name_4(key);
}

const char *get_key_name_2(sfKeyCode key)
{
    if (key == sfKeyI)
        return "I";
    if (key == sfKeyJ)
        return "J";
    if (key == sfKeyK)
        return "K";
    if (key == sfKeyL)
        return "L";
    if (key == sfKeyM)
        return "M";
    if (key == sfKeyN)
        return "N";
    if (key == sfKeyO)
        return "O";
    if (key == sfKeyP)
        return "P";
    if (key == sfKeyQ)
        return "Q";
    return get_key_name_3(key);
}

const char *get_key_name(sfKeyCode key)
{
    if (key == sfKeyUnknown)
        return "Unknown";
    if (key == sfKeyA)
        return "A";
    if (key == sfKeyB)
        return "B";
    if (key == sfKeyC)
        return "C";
    if (key == sfKeyD)
        return "D";
    if (key == sfKeyE)
        return "E";
    if (key == sfKeyF)
        return "F";
    if (key == sfKeyG)
        return "G";
    if (key == sfKeyH)
        return "H";
    return get_key_name_2(key);
}
