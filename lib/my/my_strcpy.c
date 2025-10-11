/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strcpy.c
*/
#include <stdio.h>
#include <unistd.h>

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
