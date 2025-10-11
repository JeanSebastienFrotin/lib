/*
** EPITECH PROJECT, 2025
** day04
** File description:
** my_getnbr.c
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

static int is_nbr(char const nbr)
{
    if (nbr >= '0' && nbr <= '9') {
        return 1;
    }
    return 0;
}

static int get_my_nbr(char nb, long long int *nbr)
{
    *nbr = ((*nbr * 10) + nb - '0');
    return 0;
}

static int check_max(long long int *nbr)
{
    if (*nbr > INT_MAX || *nbr < INT_MIN) {
        *nbr = 0;
        return 1;
    }
    return 0;
}

static int get_sign(char const *str)
{
    int sign = 1;
    int minus = 0;

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (is_nbr(str[i]) == 1) {
            break;
        }
        if (str[i] == '-') {
            minus++;
        }
    }
    if (minus % 2 != 0)
        sign = -1;
    return sign;
}

int my_getnbr(char const *str)
{
    long long int nbr = 0;
    int is_neg = get_sign(str);

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (is_nbr(str[i]) == 1)
            get_my_nbr(str[i], &nbr);
        if (nbr > 2147483648 || nbr < INT_MIN) {
            nbr = 0;
            break;
        }
        if (!(str[i] >= '0' && str[i] <= '9') && is_nbr(str[i - 1]) == 1)
            break;
    }
    if (is_neg != 1)
        nbr = -nbr;
    check_max(&nbr);
    return (int)nbr;
}
