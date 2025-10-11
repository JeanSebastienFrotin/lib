/*
** EPITECH PROJECT, 2025
** day03
** File description:
** my_isneg.c
*/
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        return 0;
    }
    my_putchar('N');
    return 0;
}
