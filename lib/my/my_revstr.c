/*
** EPITECH PROJECT, 2025
** day06
** File description:
** emacs my_revstr.c
*/
#include <stdio.h>

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (str[i] != '\0') {
        i++;
    }
    i -= 1;
    while (j <= i) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    return str;
}
