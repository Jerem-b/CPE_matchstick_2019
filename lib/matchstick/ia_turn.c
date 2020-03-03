/*
** EPITECH PROJECT, 2020
** .c
** File description:
** lib function
*/

#include "match.h"

void ia_turn(struct s_map *map)
{
    int amount = random()%map->amount + 1;
    int line = random()%map->line;
    int i;

    my_putstr("AI's turn...\nAI removed ");
    my_put_nbr(amount);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
    i = ia_remove_stick(map, line, amount);
    while (i == 1) {
        amount = random()%map->amount + 1;
        line = random()%map->line;
        i = ia_remove_stick(map, line, amount);
    }
}
