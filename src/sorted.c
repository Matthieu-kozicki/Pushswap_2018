/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** bubble sorted array
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

void ra(int *l_a, info_t *here)
{
    int i = 0;
    int tmp = l_a[0];

    while (i < here->len) {
        l_a[i] = l_a[i + 1];
        i++;
    }
    l_a[here->len - 1] = tmp;
    my_putstr(" ra");
}

void sa(int *l_a)
{
    int tmp = l_a[0];

    l_a[0] = l_a[1];
    l_a[1] = tmp;
    my_putstr(" sa");
}

void bubble_sort(int *l_a, info_t *here)
{
    int i = 0;

    while (i < here->len - 1) {
        if (l_a[0] > l_a[1])
            sa(l_a);
        ra(l_a, here);
        i++;
    }
}

int sorted(int *l_a, info_t *here)
{
    my_putstr("sb sb");
    while (already_sorted(l_a, here) != 1) {
        bubble_sort(l_a, here);
        ra(l_a, here);
    }
    my_putchar('\n');
    return (0);
}
