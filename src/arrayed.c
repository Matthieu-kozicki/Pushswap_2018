/*
** EPITECH PROJECT, 2018
** oushswap
** File description:
** handle array
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void help()
{
    my_putstr("USAGE\n   ./pushswap list\n");
    my_putstr("DESCRIPTION\n   list of");
    my_putstr(" positive or negative numbers\n");
}

void add_to_array(int *l_a, int nb, int count)
{
    l_a[count] = nb;
}

void print_array(int *array, info_t *here)
{
    int i = 0;

    while (i < here->len) {
        my_put_nbr(array[i]);
        my_putchar(' ');
        i++;
    }
}
