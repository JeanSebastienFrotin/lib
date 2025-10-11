/*
** EPITECH PROJECT, 2025
** day04
** File description:
** my_strlen.c
*/
#include <stdio.h>
#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
