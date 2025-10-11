/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_str_isnum.c
*/
#include <stddef.h>
int my_str_isnum(char const *str)
{
    if (str == NULL || str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}
