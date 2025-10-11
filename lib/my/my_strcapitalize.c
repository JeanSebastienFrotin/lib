/*
** EPITECH PROJECT, 2025
** day06
** File description:
** my_strcapitalize.c
*/
#include <stdio.h>

char *lowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
    return str;
}

int is_letter_lower(char str)
{
    if (str >= 97 && str <= 122) {
        return 0;
    }
    return 1;
}

char *lower_to_upper(char *str, int i)
{
    if (str[i] == 32 || str[i] == 43 ||
        str[i] == 45 || str[i] == 58) {
        if (is_letter_lower(str[i + 1]) == 0) {
            str[i + 1] -= 32;
        }
    }
    return str;
}

char *my_strcapitalize(char *str)
{
    lowcase(str);
    if (is_letter_lower(str[0]) == 0) {
        str[0] -= 32;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        lower_to_upper(str, i);
    }
    return str;
}
