/*
** EPITECH PROJECT, 2025
** day05
** File description:
** my_compute_square_root.c
*/
#include <stdio.h>
#include <unistd.h>

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return 0;
    if (nb < 2)
        return nb;
    for (int i = 0; i <= nb; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
