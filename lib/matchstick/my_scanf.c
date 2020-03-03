/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

int my_scanf(void)
{
    char buff[300];
    int nbr = 0;

    read(0, buff, 300);
    buff[300] = '\0';
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[0] < '0' || buff[0] > '9') {
            my_putstr("Error: invalid input (positive number expected)\n");
            nbr++;
            break;
        }
    }
    if (nbr != 1) {
        return my_atoi(buff);
    }
    else {
        my_putstr("Line: ");
        my_scanf();
    }
}