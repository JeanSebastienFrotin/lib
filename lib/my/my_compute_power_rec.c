/*
** EPITECH PROJECT, 2025
** day05
** File description:
** my_compute_power_rec.c
*/
#include <stdio.h>
#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return 0;
    if (p != 0)
        return (nb * my_compute_power_rec(nb, p - 1));
    return 1;
}
