/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

int check_win(struct s_map *map, char *player)
{
    int set = 0;

    for (int i = 0; i < map->line + 2; i++) {
        for (int j = 0; j < map->col; j++) {
            if (map->map[i][j] == '|')
                set = 1;
        }
    }
    if (set != 1) {
        map->in_game = 0;
        my_putstr(player);
        my_putstr(" won\n");
        return 1;
    }
    return 0;
}