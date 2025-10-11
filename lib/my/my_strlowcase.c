/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strlowcase.c
*/
#include <stdio.h>
char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
    }
    return str;
}
