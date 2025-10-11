/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_str_isprintable.c
*/
#include <stddef.h>
int my_str_isprintable(char const *str)
{
    if (str == NULL || str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126) {
            return 0;
        }
    }
    return 1;
}
