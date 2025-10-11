/*
** EPITECH PROJECT, 2025
** day05
** File description:
** my_is_prime.c
*/
#include <stdio.h>
#include <unistd.h>

int my_is_prime(int nb)
{
    if (nb < 0)
        return 0;
    if (nb <= 1)
        return 0;
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
