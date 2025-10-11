/*
** EPITECH PROJECT, 2025
** day04
** File description:
** my_sort_in_array.c
*/
#include <stdio.h>
#include <unistd.h>

void my_sort_int_array(int *array, int size)
{
    int temp;

    if (array == NULL)
        return;
    for (int i = 0; i != size; i++) {
        if (array[i] > array[i + 1]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = -1;
        }
    }
    return;
}
