/*
** EPITECH PROJECT, 2025
** day05
** File description:
** my_find_prime_sup.c
*/
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int find_prime2(int nb)
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

int my_find_prime_sup(int nb)
{
    int count = 2;

    if (nb < 0)
        return 2;
    if (nb <= 2)
        return 2;
    while (count == 2) {
        if (find_prime2(nb) == 1)
            count = nb;
        nb++;
    }
    return count;
}
