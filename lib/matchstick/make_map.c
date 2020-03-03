/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void make_map(struct s_map *map)
{
    map->map = malloc(sizeof(char *) * (map->line + 3));
    for (int y = 0; y < map->line + 2; y++) {
        map->map[y] = malloc(sizeof(char) * (map->col + 3));
        for (int x = 0; x < map->col; x++){
            if (x == 0 || y == 0 || y == map->line + 1 || x == map->col - 1)
                map->map[y][x] = '*';
            else
                map->map[y][x] = ' ';
            if ((x >= map->col /2 - y + 1 && x <= map->col / 2 - 1 + y ) 
            && y > 0 && y < map->line + 1)
                map->map[y][x] = '|';
        }
    }
}