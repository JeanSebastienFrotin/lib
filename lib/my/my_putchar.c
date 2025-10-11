/*
** EPITECH PROJECT, 2025
** putchar
** File description:
** my_putchar.c
*/
#include <unistd.h>
#include "../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}
