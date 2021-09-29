/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** header
*/

#include"./include/my.h"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
    }
    return (0);
}
