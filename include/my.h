/*
** EPITECH PROJECT, 2018
** warning
** File description:
** nop
*/

#ifndef MY_H
#define MY_H

typedef struct  list {
    int nb;
    struct list * next;
} list_t;
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
void my_putstr(char const *str);

#endif
