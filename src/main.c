/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** the main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int already_sorted(int *l_a, info_t *here)
{
    int i = 0;

    while (i < here->len - 1) {
        if (l_a[i] < l_a[i + 1])
            i++;
        else
            return (2);
        }
    return (1);
}

int arrayed(int arc, char **arg)
{
    int len = arc - 1;
    int *l_a = malloc(sizeof(int) * len - 1);
    info_t here = {len, len};
    int count = 0;

    for (int j = 1;j < arc;j++) {
        add_to_array(l_a, my_getnbr(arg[j]), count);
        count++;
    }
    if (already_sorted(l_a, &here) == 1) {
        my_putchar('\n');
        return (0);
    }
    return (sorted(l_a, &here));
}

int main(int arc, char **arg)
{
    int i = 0;

    if (arc == 1)
        return (84);
    if (arg[1][0] == '-' && arg[1][1] == 'h') {
        help();
        return (84);
    }
    if (arc == 2) {
        my_putchar ('\n');
        return (0);
    }
    i = arrayed(arc, arg);
    return (i);
}
