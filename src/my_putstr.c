/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** zd
*/

#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}

int my_getnbr(char const *str)
{
    int k = 0;
    int count = 0;
    int clems = 1;

    while (str[k] != '\0') {
        if (str[k] >= '0' && str[k] <= '9')
            count = count * 10 + str[k] - 48;
        if (str[k-1] == '-')
            clems *= -1;
        if ((str[k-1] >= '0' && str[k-1] <= '9') &&
            !(str[k] >= '0' && str[k] <= '9') || str[k+1] == '\0') {
            return (count*clems);
        }
        k = k + 1;
    }
}
