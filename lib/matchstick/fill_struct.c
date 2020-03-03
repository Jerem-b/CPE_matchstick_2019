/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void fill_struct(char **av, struct s_map *map)
{
    map->line = my_atoi(av[1]);
    map->col = 2 * map->line + 1;
    map->amount = my_atoi(av[2]);
    map->in_game = 1;
    make_map(map);
}