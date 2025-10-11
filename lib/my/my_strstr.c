/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strstr.c
*/
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

static int find_occ(char *str, int i, char const *to_find, int len)
{
    int j = 0;

    while (str[i + j] != '\0' && to_find[j] != '\0'
        && str[i + j] == to_find[j]) {
        j++;
    }
    if (j == len)
        return 1;
    return 0;
}

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(to_find);
    int i = 0;

    if (len == 0)
        return str;
    for (; str[i] != '\0'; i++) {
        if (str[i] == to_find[0]
            && find_occ(str, i, to_find, len) == 1)
            return str + i;
    }
    return NULL;
}
