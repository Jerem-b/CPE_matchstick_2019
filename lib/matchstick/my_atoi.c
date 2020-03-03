/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

int my_atoi(char *str)
{
    int result = 0;
    int k = 0;

    if (str[0] == '-') {
        result *= -1;
        k++;
    }
    for (; str[k] != '\0' && str[k] != '\n'; k++)
        result = result * 10 + str[k] - '0';
    return result;
}