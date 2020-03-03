/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function
*/

#include "../include/match.h"

int main(int ac, char **av)
{
    struct s_map *map = malloc(sizeof(struct s_map) + 1);

    srandom(time (NULL));
    if (error_handling(ac, av) == 84)
        return 84;
    else {
        fill_struct(av, map);
        display_map(map);
        while (map->in_game == 1) {
            my_putstr("Your turn:\n");
            if (player_turn(map) == -1)
                break;
            display_map(map);
            if (check_win(map, "AI") == 1)
                return 2;
            ia_turn(map);
            display_map(map);
            if (check_win(map, "Player") == 1)
                return 1;
        }
        return 0;
    }
}
