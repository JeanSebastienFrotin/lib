/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strupcase.c
*/
#include <stdio.h>
char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] = str[i] - 32;
    }
    return str;
}
