/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strcmp.c
*/
#include <stdio.h>
#include <unistd.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return -1;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}
