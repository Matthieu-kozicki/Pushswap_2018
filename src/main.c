/*
** EPITECH PROJECT, 2018
** push
** File description:
** swap that
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

void print_list(list_t *l_a)
{
    list_t *here = l_a;

    while (here != NULL) {
        my_put_nbr(here->nb);
        my_putchar('\n');
        here = here->next;
    }
}

void help()
{
    my_putstr("USAGE\n   ./pushswap list\n");
    my_putstr("DESCRIPTION\n   list of");
    my_putstr(" positive or negative numbers\n");
}

int check_sort(list_t *l_a)
{
    list_t *here = l_a;
    int now = 0;
    int next = 0;

    while (here->next != NULL) {
        now = here->nb;
        next = here->next->nb;
        if (now < next) {
            here = here->next;
        }
        else
            return (2);
    }
    return (1);
}

void add_list(list_t *l_a, int elem)
{
    list_t *here = l_a;

    while(here->next != NULL) {
        here = here->next;
    }
    here->next = malloc(sizeof(list_t));
    here->next->nb = elem;
    here->next->next = NULL;
}

int sort(list_t *l_a, list_t *l_b)
{
    if (check_sort(l_a) == 1) {
        my_putchar('\n');
        return (0);
    }
    my_putchar('i');
}

int list(int arc, char **arg)
{
    int j = 2;
    list_t *l_a = NULL;
    list_t *l_b = NULL;

    l_a = malloc(sizeof(list_t));
    if (l_a == NULL)
        return (1);
    l_a->nb = my_getnbr(arg[1]);
    l_a->next = NULL;
    while (j < arc) {
        add_list(l_a, my_getnbr(arg[j]));
        j = j + 1;
    }
    l_b = malloc(sizeof(l_b));
    //print_list(l_a);
    if (sort(l_a, l_b) == 84)
        return (84);
    return (0);
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
    i = list(arc, arg);
    return (i);
}
