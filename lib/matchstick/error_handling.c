/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return 84;
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] < '0' || av[i][j] > '9')
                return 84;
        }
    }
    return 0;
}