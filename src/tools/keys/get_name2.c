/*
** EPITECH PROJECT, 2022
** Get Key Name 2 Tools for MyRPG
** File description:
** Xavier VINCENT- Max PEIXOTO - Gautier BONHUR - Hugo DUBOIS
*/

#include "rpg.h"

const char *get_key_name_11(sfKeyCode key);

const char *get_key_name_10(sfKeyCode key)
{
    if (key == sfKeyNumpad5)
        return "Numpad5";
    if (key == sfKeyNumpad6)
        return "Numpad6";
    if (key == sfKeyNumpad7)
        return "Numpad7";
    if (key == sfKeyNumpad8)
        return "Numpad8";
    if (key == sfKeyNumpad9)
        return "Numpad9";
    if (key == sfKeyF1)
        return "F1";
    if (key == sfKeyF2)
        return "F2";
    if (key == sfKeyF3)
        return "F3";
    if (key == sfKeyF4)
        return "F4";
    return get_key_name_11(key);
}

const char *get_key_name_9(sfKeyCode key)
{
    if (key == sfKeyLeft)
        return "Left";
    if (key == sfKeyRight)
        return "Right";
    if (key == sfKeyUp)
        return "Up";
    if (key == sfKeyDown)
        return "Down";
    if (key == sfKeyNumpad0)
        return "Numpad0";
    if (key == sfKeyNumpad1)
        return "Numpad1";
    if (key == sfKeyNumpad2)
        return "Numpad2";
    if (key == sfKeyNumpad3)
        return "Numpad3";
    if (key == sfKeyNumpad4)
        return "Numpad4";
    return get_key_name_10(key);
}

const char *get_key_name_8(sfKeyCode key)
{
    if (key == sfKeyPageDown)
        return "PageDown";
    if (key == sfKeyEnd)
        return "End";
    if (key == sfKeyHome)
        return "Home";
    if (key == sfKeyInsert)
        return "Insert";
    if (key == sfKeyDelete)
        return "Delete";
    if (key == sfKeyAdd)
        return "Add";
    if (key == sfKeySubtract)
        return "Subtract";
    if (key == sfKeyMultiply)
        return "Multiply";
    if (key == sfKeyDivide)
        return "Divide";
    return get_key_name_9(key);
}

const char *get_key_name_7(sfKeyCode key)
{
    if (key == sfKeyBackSlash)
        return "BackSlash";
    if (key == sfKeyTilde)
        return "Tilde";
    if (key == sfKeyEqual)
        return "Equal";
    if (key == sfKeyDash)
        return "Dash";
    if (key == sfKeySpace)
        return "Space";
    if (key == sfKeyReturn)
        return "Return";
    if (key == sfKeyBack)
        return "BackSpace";
    if (key == sfKeyTab)
        return "Tab";
    if (key == sfKeyPageUp)
        return "PageUp";
    return get_key_name_8(key);
}

const char *get_key_name_6(sfKeyCode key)
{
    if (key == sfKeyRSystem)
        return "RSystem";
    if (key == sfKeyMenu)
        return "Menu";
    if (key == sfKeyLBracket)
        return "LBracket";
    if (key == sfKeyRBracket)
        return "RBracket";
    if (key == sfKeySemiColon)
        return "SemiColon";
    if (key == sfKeyComma)
        return "Comma";
    if (key == sfKeyPeriod)
        return "Period";
    if (key == sfKeyQuote)
        return "Quote";
    if (key == sfKeySlash)
        return "Slash";
    return get_key_name_7(key);
}
