/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strncpy.c
*/
#include <stdio.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > src[i])
        dest[i] = '\0';
    return dest;
}
