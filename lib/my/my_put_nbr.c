/*
** EPITECH PROJECT, 2025
** day03
** File description:
** my_put_nbr.c
*/
#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"

int my_put_nbr(int nb)
{
    unsigned int number = 0;

    if (nb < 0) {
        number = -nb;
        my_putchar('-');
    } else {
        number = nb;
    }
    if (number / 10) {
        my_put_nbr(number / 10);
    }
    my_putchar((number % 10) + '0');
    return 0;
}
