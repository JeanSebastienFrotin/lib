/*
** EPITECH PROJECT, 2025
** day07
** File description:
** my_strcat.c
*/
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int len = 0;
    int i = 0;

    while (dest[len] != '\0')
        len++;
    for (; src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
