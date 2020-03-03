/*
** EPITECH PROJECT, 2020
** .h
** File description:
** header file
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
typedef struct s_map
{
    char **map;
    int line;
    int col;
    int amount;
    int in_game;
} t_map;
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
int my_atoi(char *str);
int my_scanf(void);
void make_map(struct s_map *map);
void display_map(struct s_map *map);
void remove_stick(struct s_map *map, int line, int amount);
int player_turn(struct s_map *map);
int ia_remove_stick(struct s_map *map, int line, int amount);
void ia_turn(struct s_map *map);
int check_win(struct s_map *map, char *player);
void fill_struct(char **av, struct s_map *map);
int error_handling(int ac, char **av);
int get_line(struct s_map *map, int line);
int get_amount(struct s_map *map, int amount);