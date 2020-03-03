/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i += 1;
    }
}

void my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10)
        my_putchar(nb + '0');
    else if (nb > 9){
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
}