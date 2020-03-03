/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void remove_stick(struct s_map *map, int line, int amount)
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
    if (status != amount) {
        my_putstr("Error: not enough matches on this line\n");
        player_turn(map);
    }
}