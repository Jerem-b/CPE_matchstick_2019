/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** ia_remove_stick.c
*/

#include "match.h"

int ia_remove_stick(struct s_map *map, int line, int amount)
{
    int k = 1;
    int status = 0;

    for (; map->map[line][k] == ' '; k++) {
    }
    for (; map->map[line][k] == '|'; k++) {
    }
    for (int i = 1; i <= amount && map->map[line][i] != '*'; i++) {
        map->map[line][k - i] = ' ';
        status++;
    }
    if (status == amount)
        return 0;
    else
        return 1;
}