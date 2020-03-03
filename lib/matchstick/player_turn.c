/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

int get_line(struct s_map *map, int line)
{
    my_putstr("Line: ");
    line = my_scanf();
    if (line == 0) {
        map->in_game = 0;
        return -5;
    }
    while ((line > map->line || line < 0) && map->in_game == 1) {
        my_putstr("Error: this line is out of range\n");
        my_putstr("Line: ");
        line = my_scanf();
        if (line == 0) {
            map->in_game = 0;
            return -5;
        }
    }
    return line;
}

int get_amount(struct s_map *map, int amount)
{
    my_putstr("Matches: ");
    amount = my_scanf();
    if (amount == 0) {
        map->in_game = 0;
        return -5;
    }
    while (amount > map->amount && map->in_game == 1) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(map->amount);
        my_putstr(" matches per turn\n");
        my_putstr("Matches: ");
        amount = my_scanf();
        if (amount == 0) {
            map->in_game = 0;
            return -5;
        }
    }
    return amount;
}

int player_turn(struct s_map *map)
{
    int line;
    int amount;

    if ((line = get_line(map, line)) == -5)
        return -1;
    if ((amount = get_amount(map, amount)) == -5)
        return -1;
    if ((amount <= 0 && amount == -5) && map->in_game == 1 && line == -5) {
        my_putstr("Error: you have to remove at least one match\n");
        player_turn(map);
    }
    remove_stick(map, line, amount);
    my_putstr("Player removed ");
    my_put_nbr(amount);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
    return 0;
}
