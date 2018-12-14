/*
** EPITECH PROJECT, 2018
** warning
** File description:
** nop
*/

#ifndef MY_H
#define MY_H

//my struc
typedef struct  list {
    int nb;
    struct list * next;
} list_t;

typedef struct info {
    int len;
    int pos;
} info_t;

//move the list
void sa(int *l_a);
void sb(int *l_a);
void pa(int *l_a, int *l_b, info_t *here);
void pb(int *l_b, int *l_a, info_t *here);
void ra(int *l_a, info_t *here);

//sort
int sorted(int *l_a, info_t *here);
int already_sorted(int *l_a, info_t *here);

//print to terminal
void my_putchar(char c);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
void my_putstr(char const *str);
void print_array(int *array, info_t *here);

#endif
