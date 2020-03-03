/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void display_map(struct s_map *map)
{
    for (int i = 0; i < map->line + 2; i++) {
        my_putstr(map->map[i]);
        my_putstr("\n");
    }
    my_putchar('\n');
}